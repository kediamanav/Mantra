note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"

class
	TEST_EIFFEL_ERRORS

inherit
	EQA_TEST_SET

feature --Access variables

	address:STRING =".\test_files\errors\"
	my_file:PLAIN_TEXT_FILE
	input_string:STRING
	errors:EIFFEL_ERRORS
	json_array: JSON_ARRAY
	json_object:JSON_OBJECT

	error_code:STRING
	error:STRING
	what_to_do:STRING
	e_class:STRING
	e_feature:STRING
	after_line:STRING
	before_line:STRING
	line:INTEGER

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

	read_into_variables(i:INTEGER)
		--Function that reads the JSON objects and puts its items into variables

		do
		--Extracting the JSON Objects
			create json_object.make
			if attached {JSON_OBJECT} json_array.i_th (i) as j_object then
				json_object:=j_object
				error_code:=send_json_value(j_object,"Error_Code")
				error_code.replace_substring_all ("<br>", "\n")
				error:=send_json_value(j_object,"Error")
				error.replace_substring_all ("<br>", "\n")
				what_to_do:=send_json_value(j_object,"What_to_do")
				what_to_do.replace_substring_all ("<br>", "\n")
				e_feature:=send_json_value(j_object,"Feature")
				e_feature.replace_substring_all ("<br>", "\n")
				e_class:=send_json_value(j_object,"Class")
				e_class.replace_substring_all ("<br>", "\n")
				line:=send_json_value(j_object,"Line").to_integer
				before_line:=send_json_value(j_object,"Before_Line")
				before_line.replace_substring_all ("<br>", "\n")
				after_line:=send_json_value(j_object,"After_Line")
				after_line.replace_substring_all ("<br>", "\n")
			end
		end


feature -- Test routines

	test_error_unknown_identifier
			-- New test routine (Unknown Identifier)
		note
			testing:  "covers/{EIFFEL_ERRORS}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Unknown_Identifier.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_ERRORS object and assign the JSON_ARRAY and JSON_OBJECT
			create errors.make (input_string)
			json_array:=errors.json_array
			assert ("Number of errors", json_array.count=1)
			read_into_variables(1)

			--Testing the JSON objects
			assert ("Error Code",error_code.is_equal ("VEEN\n"))
			assert ("Error",error.is_equal ("unknown identifier.\n"))
			assert ("What to do",what_to_do.is_equal ("make sure that identifier, if needed, is final name of\n  feature of class, or local entity or formal argument of routine.\n\n"))
			assert ("Class",e_class.is_equal ("APPLICATION\n"))
			assert ("Feature", e_feature.is_equal ("make\n"))
			assert ("Before_Line", before_line.is_equal ("Identifier: asd\nTarget type: [like Current] attached APPLICATION\n"))
			assert ("Line", line=28)
			assert ("After_Line", after_line.is_equal ("        print(c.out)\n->      asd\n      end"))
		end

	test_error_syntax_error
			-- New test routine (Syntax Error)
		note
			testing:  "covers/{EIFFEL_ERRORS}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Syntax_Error.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_ERRORS object and assign the JSON_ARRAY and JSON_OBJECT
			create errors.make (input_string)
			json_array:=errors.json_array
			assert ("Number of errors", json_array.count=1)
			read_into_variables(1)

			--Testing the JSON objects
			assert ("Error Code",error_code.is_equal ("Syntax Error\n"))
			assert ("Error",error.is_equal (""))
			assert ("What to do",what_to_do.is_equal (""))
			assert ("Class",e_class.is_equal ("APPLICATION\n"))
			assert ("Feature", e_feature.is_equal (""))
			assert ("Before_Line", before_line.is_equal (""))
			assert ("Line", line=28)
			assert ("After_Line", after_line.is_equal ("            print(c.out)[\n        end\n--------^"))
		end

	test_error_wrong_number_of_arguments
			-- New test routine (Wrong number of Arguments)
		note
			testing:  "covers/{EIFFEL_ERRORS}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Wrong_Number_Of_Arguments.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_ERRORS object and assign the JSON_ARRAY and JSON_OBJECT
			create errors.make (input_string)
			json_array:=errors.json_array
			assert ("Number of errors", json_array.count=1)
			read_into_variables(1)

			--Testing the JSON objects
			assert ("Error Code",error_code.is_equal ("VUAR(1)\n"))
			assert ("Error",error.is_equal ("wrong number of actual arguments in feature call. \n"))
			assert ("What to do",what_to_do.is_equal ("make sure that number of actuals matches number of formals.\n\n"))
			assert ("Class",e_class.is_equal ("APPLICATION\n"))
			assert ("Feature", e_feature.is_equal ("make\n"))
			assert ("Before_Line", before_line.is_equal ("Called feature: print (o: detachable ANY) from ANY\nNumber of formals: 1\nNumber of actuals: 2\n"))
			assert ("Line", line=27)
			assert ("After_Line", after_line.is_equal ("        c:=a\n->      print(c.out,a)\n      end"))
		end

	test_error_source_not_compatible
			-- New test routine (Source not compatible with the target type)
		note
			testing:  "covers/{EIFFEL_ERRORS}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Source_Not_Compatible.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_ERRORS object and assign the JSON_ARRAY and JSON_OBJECT
			create errors.make (input_string)
			json_array:=errors.json_array
			assert ("Number of errors", json_array.count=1)
			read_into_variables(1)

			--Testing the JSON objects
			assert ("Error Code",error_code.is_equal ("VJAR\n"))
			assert ("Error",error.is_equal ("source of assignment is not compatible with target. \n"))
			assert ("What to do",what_to_do.is_equal ("make sure that type of source (right-hand side)\n  is compatible with type of target. \n\n"))
			assert ("Class",e_class.is_equal ("APPLICATION\n"))
			assert ("Feature", e_feature.is_equal ("make\n"))
			assert ("Before_Line", before_line.is_equal ("Target name: c\nTarget type: INTEGER_32\nSource type: attached STRING_8\n"))
			assert ("Line", line=26)
			assert ("After_Line", after_line.is_equal ("        a:=4\n->      c:=%"4%"\n        print(c.out)"))
		end

	test_error_same_feature_name
			-- New test routine (Same Feature Name)
		note
			testing:  "covers/{EIFFEL_ERRORS}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Same_Feature_Name.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_ERRORS object and assign the JSON_ARRAY and JSON_OBJECT
			create errors.make (input_string)
			json_array:=errors.json_array
			assert ("Number of errors", json_array.count=1)
			read_into_variables(1)

			--Testing the JSON objects
			assert ("Error Code",error_code.is_equal ("VMFN\n"))
			assert ("Error",error.is_equal ("two or more features have same name.\n"))
			assert ("What to do",what_to_do.is_equal ("if they must indeed be different features...\n  names or use renaming; if not, arrange for a join (b...\n  features), an effecting (of deferred by effective), or ...\n\n"))
			assert ("Class",e_class.is_equal ("APPLICATION\n"))
			assert ("Feature", e_feature.is_equal ("extra_feature Version from: APPLICATION\n"))
			assert ("Before_Line", before_line.is_equal (""))
			assert ("Line", line=-1)
			assert ("After_Line", after_line.is_equal ("Feature: extra_feature Version from: APPLICATION"))
		end

	test_error_multiple_errors
			-- New test routine (Multiple errors)
		note
			testing:  "covers/{EIFFEL_ERRORS}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Multiple_Errors.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_ERRORS object and assign the JSON_ARRAY and JSON_OBJECT
			create errors.make (input_string)
			json_array:=errors.json_array
			assert ("Number of errors", json_array.count=2)

			read_into_variables(1)
			--Testing the JSON objects
			assert ("Error Code",error_code.is_equal ("VMFN\n"))
			assert ("Error",error.is_equal ("two or more features have same name.\n"))
			assert ("What to do",what_to_do.is_equal ("if they must indeed be different features...\n  names or use renaming; if not, arrange for a join (b...\n  features), an effecting (of deferred by effective), or ...\n\n"))
			assert ("Class",e_class.is_equal ("APPLICATION\n"))
			assert ("Feature", e_feature.is_equal ("extra_feature Version from: APPLICATION\n"))
			assert ("Before_Line", before_line.is_equal (""))
			assert ("Line", line=-1)
			assert ("After_Line", after_line.is_equal ("Feature: extra_feature Version from: APPLICATION"))


			read_into_variables(2)
			--Testing the JSON objects
			assert ("Error Code",error_code.is_equal ("VUAR(1)\n"))
			assert ("Error",error.is_equal ("wrong number of actual arguments in feature call. \n"))
			assert ("What to do",what_to_do.is_equal ("make sure that number of actuals matches number of formals.\n\n"))
			assert ("Class",e_class.is_equal ("APPLICATION\n"))
			assert ("Feature", e_feature.is_equal ("make\n"))
			assert ("Before_Line", before_line.is_equal ("Called feature: print (o: detachable ANY) from ANY\nNumber of formals: 1\nNumber of actuals: 2\n"))
			assert ("Line", line=27)
			assert ("After_Line", after_line.is_equal ("        c:=a\n->      print(c.out,a)\n      end"))

		end

	test_error_unknown_error
			-- New test routine (Unknown errors)
		note
			testing:  "covers/{EIFFEL_ERRORS}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Unknown_Error.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			create errors.make (input_string)
			json_array:=errors.json_array
			assert ("Number of errors", json_array.count=1)

			read_into_variables(1)

			--Testing the JSON objects
			assert ("Error Code",error_code.is_equal (""))
			assert ("Error",error.is_equal (""))
			assert ("What to do",what_to_do.is_equal (""))
			assert ("Class",e_class.is_equal (""))
			assert ("Feature", e_feature.is_equal (""))
			assert ("Before_Line", before_line.is_equal (""))
			assert ("Line", line=-1)
			assert ("After_Line", after_line.is_equal ("\n-------------------------------------------------------------------------------\n\nASKJNDAKSJNDKLN\n\n-------------------------------------------------------------------------------\n"))
		end
end


