note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"

class
	TEST_EIFFEL_TARGETS

inherit
	EQA_TEST_SET

feature --Access variables

	address:STRING =".\test_files\targets\"
	my_file:PLAIN_TEXT_FILE
	input_string:STRING
	targets:EIFFEL_TARGETS
	json_array: JSON_ARRAY
	json_object: JSON_OBJECT

	target_string:STRING

feature --Helper functions

	--Function to get a string from a json_value
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

	read_into_variables(i:INTEGER)
		--Function that reads the JSON objects and puts its items into variables
		do
		--Extracting the JSON Objects
			create json_object.make
			if attached {JSON_OBJECT} json_array.i_th (i) as j_object then
				json_object:=j_object
				target_string:=send_json_value(j_object,"Target")
			end
		end

feature -- Test routines

	test_eiffel_multiple_targets
			-- New test routine (Multiple Targets)
		note
			testing:  "covers/{EIFFEL_TARGETS}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Multiple_Targets.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_TARGETS object and assign the JSON_ARRAY and JSON_OBJECT
			create targets.make (input_string)
			json_array:=targets.json_array
			assert ("Number of targets", json_array.count=5)

			--Testing the JSON objects

			read_into_variables(1)
			assert ("Target",target_string.is_equal ("app"))
			read_into_variables(2)
			assert ("Target",target_string.is_equal ("app_any"))
			read_into_variables(3)
			assert ("Target",target_string.is_equal ("app_cgi"))
			read_into_variables(4)
			assert ("Target",target_string.is_equal ("app_libfcgi"))
			read_into_variables(5)
			assert ("Target",target_string.is_equal ("app_nino"))
		end

	test_eiffel_wrong_target
			-- New test routine (Wrong Target)
		note
			testing:  "covers/{EIFFEL_TARGETS}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Wrong_Target.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_TARGETS object and assign the JSON_ARRAY and JSON_OBJECT
			create targets.make (input_string)
			json_array:=targets.json_array
			assert ("Number of targets", json_array.count=5)

			--Testing the JSON objects

			read_into_variables(1)
			assert ("Target",target_string.is_equal ("app"))
			read_into_variables(2)
			assert ("Target",target_string.is_equal ("app_any"))
			read_into_variables(3)
			assert ("Target",target_string.is_equal ("app_cgi"))
			read_into_variables(4)
			assert ("Target",target_string.is_equal ("app_libfcgi"))
			read_into_variables(5)
			assert ("Target",target_string.is_equal ("app_nino"))
		end

end

