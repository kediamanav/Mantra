note
	description: "Summary description for {MY_THREAD}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MY_THREAD

inherit
	THREAD

create
	make, make_with_values

feature
	make_with_values (sec:INTEGER; lifetime:INTEGER; tbl: JSON_OBJECT; wait_time:INTEGER_64)
		do
			make
			periodic_time:=sec
			project_lifetime:=lifetime
			table:=tbl
			project_wait_time:=wait_time
		end

feature --Variables

	periodic_time:INTEGER
	project_lifetime:INTEGER
	table:JSON_OBJECT
	l_timer:TIMER
	project_wait_time:INTEGER_64

feature --Execute
	execute
		do
			create l_timer.make_feature (periodic_time,project_lifetime,table,project_wait_time)
         	l_timer.start
		end

	update_table (a_table:JSON_OBJECT)
		do
			table:=a_table
			l_timer.update_timer_table(table)
		end

	go_to_sleep
		do
			l_timer.set_sleep
		end
end
