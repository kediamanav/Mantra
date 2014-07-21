note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"

class
	TEST_EIFFEL_PARSER

inherit
	EQA_TEST_SET

feature --Access variables

	address:STRING =".\test_files\parser\"
	my_file:PLAIN_TEXT_FILE
	input_string:STRING
	parser:EIFFEL_PARSER

	known_compile_message:STRING
	known_error_message:STRING
	known_syntax_message:STRING
	known_warning_message:STRING
	compile_message:STRING
	error_message:STRING
	warning_message:STRING
	syntax_message:STRING

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
			create compile_message.make_empty
			create error_message.make_empty
			create warning_message.make_empty
			create syntax_message.make_empty
			create known_compile_message.make_empty
			create known_error_message.make_empty
			create known_warning_message.make_empty
			create known_syntax_message.make_empty

			--Create EIFFEL_PARSER object
			create parser.make (input_string)
			compile_message:=parser.compile_message
			error_message:=parser.error_message
			warning_message:=parser.warning_message
			syntax_message:=parser.syntax_error

			--Read the compile file
			create my_file.make_with_path (create {PATH}.make_from_string (address+s+"_compile"+".txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			known_compile_message:=my_file.last_string

			--Read the syntax file
			create my_file.make_with_path (create {PATH}.make_from_string (address+s+"_syntax"+".txt"))
			if not my_file.is_empty then
				my_file.open_read
				my_file.read_stream (my_file.count)
				known_syntax_message:=my_file.last_string
			end

			--Read the warning file
			create my_file.make_with_path (create {PATH}.make_from_string (address+s+"_warning"+".txt"))
			if not my_file.is_empty then
				my_file.open_read
				my_file.read_stream (my_file.count)
				known_warning_message:=my_file.last_string
			end

			--Read the error file
			create my_file.make_with_path (create {PATH}.make_from_string (address+s+"_error"+".txt"))
			if not my_file.is_empty then
				my_file.open_read
				my_file.read_stream (my_file.count)
				known_error_message:=my_file.last_string
			end
		end


feature -- Test routines

	test_parser_no_error
			-- New test routine (No Error)
		note
			testing:  "covers/{EIFFEL_PARSER}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"No_Error.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			read_into_variables ("No_Error")

			--Testing the JSON objects
			assert ("Compile Mismatch", compile_message.is_equal (known_compile_message))
			assert ("Syntax Mismatch",syntax_message.is_equal (known_syntax_message))
			assert ("Error Mismatch",error_message.is_equal (known_error_message))
			assert ("Warning Mismatch",warning_message.is_equal (known_warning_message))
		end

	test_parser_error
			-- New test routine (Error)
		note
			testing:  "covers/{EIFFEL_PARSER}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Error.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			read_into_variables ("Error")

			--Testing the JSON objects
			assert ("Compile Mismatch", compile_message.is_equal (known_compile_message))
			assert ("Syntax Mismatch",syntax_message.is_equal (known_syntax_message))
			assert ("Error Mismatch",error_message.is_equal (known_error_message))
			assert ("Warning Mismatch",warning_message.is_equal (known_warning_message))
		end

	test_parser_warning
			-- New test routine (Warning)
		note
			testing:  "covers/{EIFFEL_PARSER}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Warning.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			read_into_variables ("Warning")

			--Testing the JSON objects
			assert ("Compile Mismatch", compile_message.is_equal (known_compile_message))
			assert ("Syntax Mismatch",syntax_message.is_equal (known_syntax_message))
			assert ("Error Mismatch",error_message.is_equal (known_error_message))
			assert ("Warning Mismatch",warning_message.is_equal (known_warning_message))
		end

	test_parser_unknown_error
			-- New test routine (Unknown)
		note
			testing:  "covers/{EIFFEL_PARSER}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Unknown.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			read_into_variables ("Unknown")

			--Testing the JSON objects
			assert ("Compile Mismatch", compile_message.is_equal (known_compile_message))
			assert ("Syntax Mismatch",syntax_message.is_equal (known_syntax_message))
			assert ("Error Mismatch",error_message.is_equal (known_error_message))
			assert ("Warning Mismatch",warning_message.is_equal (known_warning_message))
		end

	test_parser_syntax_error
			-- New test routine (Syntax)
		note
			testing:  "covers/{EIFFEL_PARSER}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Syntax.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			read_into_variables ("Syntax")

			--Testing the JSON objects
			assert ("Compile Mismatch", compile_message.is_equal (known_compile_message))
			assert ("Syntax Mismatch",syntax_message.is_equal (known_syntax_message))
			assert ("Error Mismatch",error_message.is_equal (known_error_message))
			assert ("Warning Mismatch",warning_message.is_equal (known_warning_message))
		end
end
