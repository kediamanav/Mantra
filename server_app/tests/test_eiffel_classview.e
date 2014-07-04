note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"

class
	TEST_EIFFEL_CLASSVIEW

inherit
	EQA_TEST_SET

feature --Access variables

	address:STRING =".\test_files\class_views\"
	my_file:PLAIN_TEXT_FILE
	input_string:STRING
	parser:EIFFEL_PARSER

	known_output_message:STRING
	known_error_message:STRING
	known_warning_message:STRING
	output_message:STRING
	error_message:STRING
	warning_message:STRING

feature{NONE} --Helper Functions

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

	read_into_variables(s:STRING)
		--Function that reads the strings from the file and puts its into variables

		do
			--Initialize varibles
			create output_message.make_empty
			create error_message.make_empty
			create warning_message.make_empty
			create known_output_message.make_empty
			create known_error_message.make_empty
			create known_warning_message.make_empty

			--Create EIFFEL_PARSER object
			create parser.make (input_string)
			output_message:=parser.output_message
			error_message:=parser.error_message
			warning_message:=parser.warning_message

			--Read the compile file
			create my_file.make_with_path (create {PATH}.make_from_string (address+s+".txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			known_output_message:=my_file.last_string

			--Read the warning file
			create my_file.make_with_path (create {PATH}.make_from_string (address+s+"_Warning.txt"))
			if not my_file.is_empty then
				my_file.open_read
				my_file.read_stream (my_file.count)
				known_warning_message:=my_file.last_string
			end
		end


feature -- Test routines

	test_parser_flatview_recompile
			-- New test routine (Flat view recompiled)
		note
			testing:  "covers/{EIFFEL_PARSER}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Flat_View_Recompiled.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			read_into_variables ("Flat_View")
			known_output_message.replace_substring_all ("%N", "<br>")

			--Testing the JSON objects
			assert ("Compile Mismatch", output_message.is_equal (known_output_message))
			assert ("Error Mismatch",error_message.is_equal (""))
			assert ("Warning Mismatch",warning_message.is_equal (""))
		end

	test_parser_flatview_full_compile
			-- New test routine (Flat view compiled)
		note
			testing:  "covers/{EIFFEL_PARSER}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Flat_View_Full_Compile.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			read_into_variables ("Flat_View")
			known_output_message.replace_substring_all ("%N", "<br>")
			known_warning_message.replace_substring_all ("%N", "<br>")

			--Testing the JSON objects
			assert ("Compile Mismatch", output_message.is_equal (known_output_message))
			assert ("Error Mismatch",error_message.is_equal (""))
			assert ("Warning Mismatch",warning_message.is_equal (known_warning_message))
		end

	test_parser_flatview_no_class
			-- New test routine (Flat view no such class exists)
		note
			testing:  "covers/{EIFFEL_PARSER}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Flat_View_No_Class.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			read_into_variables ("Flat_View")
			known_output_message.replace_substring_all ("%N", "<br>")

			--Testing the JSON objects
			assert ("Compile Mismatch", output_message.is_equal ("APPLICATIONASD is not in the universe<br>"))
			assert ("Error Mismatch",error_message.is_equal (""))
			assert ("Warning Mismatch",warning_message.is_equal (""))
		end

	test_parser_contractview_recompile
			-- New test routine (Contract view recompiled)
		note
			testing:  "covers/{EIFFEL_PARSER}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Contract_View_Recompiled.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			read_into_variables ("Contract_View")
			known_output_message.replace_substring_all ("%N", "<br>")

			--Testing the JSON objects
			assert ("Compile Mismatch", output_message.is_equal (known_output_message))
			assert ("Error Mismatch",error_message.is_equal (""))
			assert ("Warning Mismatch",warning_message.is_equal (""))
		end

	test_parser_contractview_full_compile
			-- New test routine (Contract view compiled)
		note
			testing:  "covers/{EIFFEL_PARSER}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Contract_View_Full_Compile.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			read_into_variables ("Contract_View")
			known_output_message.replace_substring_all ("%N", "<br>")
			known_warning_message.replace_substring_all ("%N", "<br>")

			--Testing the JSON objects
			assert ("Compile Mismatch", output_message.is_equal (known_output_message))
			assert ("Error Mismatch",error_message.is_equal (""))
			assert ("Warning Mismatch",warning_message.is_equal (known_warning_message))
		end

	test_parser_contractview_no_class
			-- New test routine (Contract view no such class exists)
		note
			testing:  "covers/{EIFFEL_PARSER}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Contract_View_No_Class.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			read_into_variables ("Contract_View")
			known_output_message.replace_substring_all ("%N", "<br>")

			--Testing the JSON objects
			assert ("Compile Mismatch", output_message.is_equal ("ACCOUNTASD is not in the universe<br>"))
			assert ("Error Mismatch",error_message.is_equal (""))
			assert ("Warning Mismatch",warning_message.is_equal (""))
		end
end
