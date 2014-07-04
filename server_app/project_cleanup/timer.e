note
	description: "Summary description for {TIMER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
    TIMER

inherit
    THREAD

create
    make_feature

feature -- Initialization

    make_feature (a_interval: like interval; lifetime:INTEGER)
            -- Create a timer that executes a_action every a_interval milliseconds.
        require
            a_interval_valid: a_interval > 0
        do
        	make
            interval := a_interval
            project_lifetime:=lifetime

            create timer_mutex.make
            create timer_condition.make
        ensure
            interval_set: interval = a_interval
        end

feature -- Status

    is_stop: BOOLEAN
            -- Is the timer stopped?

feature -- Access

	--Change this address
	--fixed_project_path:STRING = "C:/Users/Manav/Desktop/eve_server/projects/"
	fixed_project_path:STRING = "./projects/"
	periodic_time:INTEGER
	project_lifetime:INTEGER
    interval: INTEGER

feature -- Commands

    start
            -- Start the timer.
        do
            is_stop := False
            launch
        end

    stop
            -- Stop the timer.
        do
            is_stop := True
            timer_mutex.lock
            timer_condition.signal
            timer_mutex.unlock
            exit
        end

feature  -- Implementation

    timer_mutex: MUTEX
            -- Mutex for timer.

    timer_condition: CONDITION_VARIABLE
            -- Condition variable to wait on during the interval.

    execute
            -- Main loop, executes action every interval until stopped.
        local
            l_tmp: BOOLEAN
        do
            timer_mutex.lock
            from
            until
                is_stop
            loop
                delete_project
                l_tmp := timer_condition.wait_with_timeout (timer_mutex, interval)
            end
            timer_mutex.unlock
        end


feature --Executing functions

	delete_project
		--Deletes the project that have not been used for more than project_lifetime (in seconds)
		local
			main_dir:DIRECTORY
			project_dir:DIRECTORY
			date:DATE_TIME
			sub_path:PATH
			file:RAW_FILE
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
						create file.make_with_path (project_dir.path)
						create date.make_from_epoch(file.date)
						create cur_date.make_now_utc
						duration:=cur_date.relative_duration (date)
						second_count:=duration.seconds_count.as_integer_32

						if second_count>=project_lifetime then
							project_dir.recursive_delete
						end
					end
				end
			end
		end

invariant
    interval_valid: interval > 0
    timer_mutex_not_void: timer_mutex /= Void
    timer_condition_not_void: timer_condition /= Void
end
