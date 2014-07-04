note
	description : "cleanup application root class"
	date        : "$Date$"
	revision    : "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature -- Initialization

	make
			-- Run application.
		do
			initialize_timeouts_from_file
			create l_timer.make_feature (periodic_time,project_duration)
         	l_timer.start
         	l_timer.join
		end

feature --Access

	l_timer: TIMER
	periodic_time:INTEGER
	project_duration:INTEGER

feature --Helper functions

	initialize_timeouts_from_file
			--This feature initializes the compile and the runtime timeouts
		local
			file:PLAIN_TEXT_FILE
			s:STRING
			parser:JSON_PARSER
			json_object:JSON_OBJECT
		do
			create file.make_with_path (create {PATH}.make_from_string (".\www\config.json"))
			file.open_read
			file.read_stream (file.count)
			s:=file.last_string

			create parser.make_parser (s)

			if attached {JSON_OBJECT} parser.parse as jv and parser.is_parsed then
				json_object:=jv
				periodic_time:=send_json_value (json_object, "Periodic_Time").to_integer
				project_duration:=send_json_value (json_object, "Project_Duration").to_integer
			end
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
end
