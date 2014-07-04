note
    description: "Execute an action every interval until stopped."
    author: "Patrick Ruckstuhl <patrick@tario.org>"
    date: "$Date$"
    revision: "$Revision$"

class
    TIMER

inherit
    THREAD
        export
            {NONE} all
        end

create
    make_feature

feature {NONE} -- Initialization

    make_feature (a_interval: like interval; lifetime:INTEGER; tbl:JSON_OBJECT; wait_time:INTEGER_64) is
            -- Create a timer that executes a_action every a_interval milliseconds.
        require
            a_interval_valid: a_interval > 0
        do
        	make
            interval := a_interval
            project_lifetime:=lifetime
            table:=tbl
			new_project_wait_time:=wait_time

            create timer_mutex.make
            create timer_condition.make
        ensure
            interval_set: interval = a_interval
        end

feature -- Status

    is_stop: BOOLEAN
            -- Is the timer stopped?

    should_sleep: BOOLEAN

feature -- Access

	--Change this address
	--fixed_project_path:STRING = "C:/Users/Manav/Desktop/eve_server/projects/"
	fixed_project_path:STRING = "./projects/"
	sub_path:PATH
	periodic_time:INTEGER
	project_lifetime:INTEGER
	table:JSON_OBJECT
    interval: INTEGER
    new_project_wait_time:INTEGER_64
            -- Milliseconds to wait until action is called again.

feature -- Commands

	set_sleep
		do
			should_sleep:=true
		end

    start is
            -- Start the timer.
        do
            is_stop := False
            launch
        end

    stop is
            -- Stop the timer.
        do
            is_stop := True
            timer_mutex.lock
            timer_condition.signal
            timer_mutex.unlock
            exit
        end

feature {NONE} -- Implementation

    timer_mutex: MUTEX
            -- Mutex for timer.

    timer_condition: CONDITION_VARIABLE
            -- Condition variable to wait on during the interval.

    execute is
            -- Main loop, executes action every interval until stopped.
        local
            l_tmp: BOOLEAN
        do
            timer_mutex.lock
            from
            until
                is_stop
            loop
            	if should_sleep=true then
            		sleep(new_project_wait_time)
            		should_sleep:=false
            	end
                delete_project
                l_tmp := timer_condition.wait_with_timeout (timer_mutex, interval)
            end
            timer_mutex.unlock
        end

feature --Update timer table
	update_timer_table(a_table:JSON_OBJECT)
		do
			table:=a_table
		end
	do_stop
		do
			stop
		end

feature --Executing functions
	delete_project
		--Deletes the project that have not been used for more than project_lifetime (in seconds)
		local
			main_dir:DIRECTORY
			project_dir:DIRECTORY
			date:DATE_TIME
			cur_date:DATE_TIME
			duration:DATE_TIME_DURATION
			second_count:INTEGER
			p:PATH
		do
			create main_dir.make_with_path (create {PATH}.make_from_string (fixed_project_path))
			--Extract the list of projects here
			across main_dir.entries as ic loop
				p:= ic.item
				if p.utf_8_name.at (1)/='.' then
					create sub_path.make_from_string (fixed_project_path+"/"+p.utf_8_name)
					create project_dir.make_with_path (sub_path)

					--If the project exist, then check if it is more than project_lifetime(in seconds) and delete it.
					if project_dir.exists then
						--create file.make_with_path (project_dir.path)
						--create date.make_from_epoch(file.date)
						create date.make_from_string_default(send_json_value (table, p.utf_8_name))
						create cur_date.make_now
						duration:=cur_date.relative_duration (date)
						second_count:=duration.seconds_count.as_integer_32
						if second_count>=project_lifetime then
							project_dir.recursive_delete
							table.remove (p.utf_8_name)
							write_my_table_to_file
--								io.put_string (date.out)
--								io.put_new_line
						end
					end
				end
			end
		end

	write_my_table_to_file
		--Write the table to file
		local
			my_file: PLAIN_TEXT_FILE
		do
			--create my_file.make("C:\Users\Manav\Desktop\eve_server\server_app\www\table.txt")
			create my_file.make(".\www\table.txt")
			my_file.open_write
			my_file.put_string (table.representation)
			my_file.close
		end

	send_json_value (obj:JSON_OBJECT; key: STRING):STRING
		--Sends the string representation of the JSON value	
		do
			Result:=""
			if attached {JSON_STRING} obj.item (key) as str then
				Result:=str.unescaped_string_8
			end
			if attached {JSON_NUMBER} obj.item(key) as str then
				Result:=str.item.out
			end
			if attached {JSON_BOOLEAN} obj.item(key) as str then
				Result:=str.item.out
			end
		end

invariant
    interval_valid: interval > 0
    timer_mutex_not_void: timer_mutex /= Void
    timer_condition_not_void: timer_condition /= Void
end
