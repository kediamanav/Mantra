note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"

class
	TEST_EIFFEL_WARNINGS

inherit
	EQA_TEST_SET

feature --Access variables

	address:STRING =".\test_files\warnings\"
	my_file:PLAIN_TEXT_FILE
	input_string:STRING
	warnings:EIFFEL_WARNINGS
	json_array: JSON_ARRAY
	json_object: JSON_OBJECT

	warning_code:STRING
	warning:STRING
	what_to_do:STRING
	after_feature:STRING
	e_feature:STRING
	e_class:STRING

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
				Result:=str.item
			end
		end

feature -- Test routines

	test_eiffel_warning_01
			-- New test routine (Unknown Identifier)
		note
			testing:  "covers/{EIFFEL_WARNINGS}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Warning_01.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_WARNINGS object and assign the JSON_ARRAY and JSON_OBJECT
			create warnings.make (input_string)
			json_array:=warnings.json_array
			assert ("Number of warnings", json_array.count=1)

			--Extracting the JSON Objects
			create json_object.make
			if attached {JSON_OBJECT} json_array.i_th (1) as j_object then
				json_object:=j_object
				warning_code:=send_json_value(j_object,"Warning_Code")
				warning_code.replace_substring_all ("<br>", "\n")
				warning:=send_json_value(j_object,"Warning")
				warning.replace_substring_all ("<br>", "\n")
				what_to_do:=send_json_value(j_object,"What_to_do")
				what_to_do.replace_substring_all ("<br>", "\n")
				e_feature:=send_json_value(j_object,"Feature")
				e_feature.replace_substring_all ("<br>", "\n")
				e_class:=send_json_value(j_object,"Class")
				e_class.replace_substring_all ("<br>", "\n")
				after_feature:=send_json_value(j_object,"After_Feature")
				after_feature.replace_substring_all ("<br>", "\n")
			end

			--Testing the JSON objects
			assert ("Warning Code",warning_code.is_equal ("Unused_local_warning\n"))
			assert ("Warning",warning.is_equal ("unreferenced local variable(s)\n"))
			assert ("What to do",what_to_do.is_equal ("Remove it if you don't plan to use it in the future.\n\n"))
			assert ("Class",e_class.is_equal ("APPLICATION\n"))
			assert ("Feature", e_feature.is_equal ("extra_feature\n"))
			assert ("After_Feature", after_feature.is_equal ("Unused locals are: \n	a: INTEGER_32\n	b: INTEGER_32\n	c: INTEGER_32"))
		end

end


