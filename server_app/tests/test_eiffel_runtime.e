note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"

class
	TEST_EIFFEL_RUNTIME

inherit
	EQA_TEST_SET

feature --Access variables

	address:STRING =".\test_files\runtime\"
	my_file:PLAIN_TEXT_FILE
	input_string:STRING
	errors:EIFFEL_RUNTIME
	json_array: JSON_ARRAY
	json_object:JSON_OBJECT

	e_class:STRING
	e_feature:STRING
	routine:STRING
	message:STRING
	effect:STRING

	--after_line:STRING

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

				e_class:=send_json_value(j_object,"Class")
				e_class.replace_substring_all ("<br>", "\n")
				e_feature:=send_json_value(j_object,"Feature")
				routine:=send_json_value(j_object,"Routine")
				routine.replace_substring_all ("<br>", "\n")
				e_feature.replace_substring_all ("<br>", "\n")
				message:=send_json_value(j_object,"Message")
				message.replace_substring_all ("<br>", "\n")
				effect:=send_json_value(j_object,"Effect")
				effect.replace_substring_all ("<br>", "\n")

--				after_line:=send_json_value(j_object,"After_Line")
--				after_line.replace_substring_all ("<br>", "\n")
			end
		end


feature -- Test routines

	test_error_postcondition
			-- New test routine (Postcondition)
		note
			testing:  "covers/{EIFFEL_RUNTIME}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Postcondition.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_RUNTIME object and assign the JSON_ARRAY and JSON_OBJECT
			create errors.make (input_string)
			json_array:=errors.json_array
			assert ("Stack trace size", json_array.count=4)

			--Testing the JSON objects
			read_into_variables(1)
			assert ("Class",e_class.has_substring ("APPLICATION"))
			assert ("Feature", e_feature.is_equal ("extra_feature"))
			assert ("Routine",routine.is_equal ("2"))
			assert ("Message",message.is_equal ("number_out_of_range:Postcondition violated."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(2)
			assert ("Class",e_class.has_substring ("APPLICATION"))
			assert ("Feature", e_feature.is_equal ("extra_feature"))
			assert ("Routine",routine.is_equal ("2"))
			assert ("Message",message.is_equal ("Routine failure."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(4)
			assert ("Class",e_class.has_substring ("APPLICATION"))
			assert ("Feature", e_feature.is_equal ("root's creation"))
			assert ("Routine",routine.is_equal (""))
			assert ("Message",message.is_equal ("Routine failure."))
			assert ("Effect",effect.is_equal ("Exit"))
		end

	test_error_precondition
			-- New test routine (Precondition)
		note
			testing:  "covers/{EIFFEL_RUNTIME}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Precondition.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_RUNTIME object and assign the JSON_ARRAY and JSON_OBJECT
			create errors.make (input_string)
			json_array:=errors.json_array
			assert ("Stack trace size", json_array.count=3)

			--Testing the JSON objects
			read_into_variables(1)
			assert ("Class",e_class.has_substring ("APPLICATION"))
			assert ("Feature", e_feature.is_equal ("extra_feature"))
			assert ("Routine",routine.is_equal ("1"))
			assert ("Message",message.is_equal ("number_in_range:Precondition violated."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(2)
			assert ("Class",e_class.has_substring ("APPLICATION"))
			assert ("Feature", e_feature.is_equal ("make"))
			assert ("Routine",routine.is_equal ("3"))
			assert ("Message",message.is_equal ("Routine failure."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(3)
			assert ("Class",e_class.has_substring ("APPLICATION"))
			assert ("Feature", e_feature.is_equal ("root's creation"))
			assert ("Routine",routine.is_equal (""))
			assert ("Message",message.is_equal ("Routine failure."))
			assert ("Effect",effect.is_equal ("Exit"))
		end

	test_error_invariant
			-- New test routine (Invariant)
		note
			testing:  "covers/{EIFFEL_RUNTIME}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Invariant.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_RUNTIME object and assign the JSON_ARRAY and JSON_OBJECT
			create errors.make (input_string)
			json_array:=errors.json_array
			assert ("Stack trace size", json_array.count=5)

			--Testing the JSON objects
			read_into_variables(1)
			assert ("Class",e_class.has_substring ("ACCOUNT"))
			assert ("Feature", e_feature.is_equal ("_invariant"))
			assert ("Routine",routine.is_equal ("3"))
			assert ("Message",message.is_equal ("balance_positive:Class invariant violated."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(2)
			assert ("Class",e_class.has_substring ("ACCOUNT"))
			assert ("Feature", e_feature.is_equal ("_invariant"))
			assert ("Routine",routine.is_equal (""))
			assert ("Message",message.is_equal ("Routine failure."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(4)
			assert ("Class",e_class.has_substring ("APPLICATION"))
			assert ("Feature", e_feature.is_equal ("make"))
			assert ("Routine",routine.is_equal ("8"))
			assert ("Message",message.is_equal ("Routine failure."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(5)
			assert ("Class",e_class.has_substring ("APPLICATION"))
			assert ("Feature", e_feature.is_equal ("root's creation"))
			assert ("Routine",routine.is_equal (""))
			assert ("Message",message.is_equal ("Routine failure."))
			assert ("Effect",effect.is_equal ("Exit"))
		end

	test_error_postcondition2
			-- New test routine (Postcondition)
		note
			testing:  "covers/{EIFFEL_RUNTIME}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Postcondition2.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_RUNTIME object and assign the JSON_ARRAY and JSON_OBJECT
			create errors.make (input_string)
			json_array:=errors.json_array
			assert ("Stack trace size", json_array.count=4)

			--Testing the JSON objects
			read_into_variables(1)
			assert ("Class",e_class.has_substring ("TEST"))
			assert ("Feature", e_feature.is_equal ("set_index"))
			assert ("Routine",routine.is_equal ("2"))
			assert ("Message",message.is_equal ("positive_index:Postcondition violated."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(2)
			assert ("Class",e_class.has_substring ("TEST"))
			assert ("Feature", e_feature.is_equal ("set_index"))
			assert ("Routine",routine.is_equal ("2"))
			assert ("Message",message.is_equal ("Routine failure."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(4)
			assert ("Class",e_class.has_substring ("APPLICATION"))
			assert ("Feature", e_feature.is_equal ("root's creation"))
			assert ("Routine",routine.is_equal (""))
			assert ("Message",message.is_equal ("Routine failure."))
			assert ("Effect",effect.is_equal ("Exit"))
		end

	test_error_precondition2
			-- New test routine (Precondition)
		note
			testing:  "covers/{EIFFEL_RUNTIME}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Precondition2.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_RUNTIME object and assign the JSON_ARRAY and JSON_OBJECT
			create errors.make (input_string)
			json_array:=errors.json_array
			assert ("Stack trace size", json_array.count=3)

			--Testing the JSON objects
			read_into_variables(1)
			assert ("Class",e_class.has_substring ("TEST"))
			assert ("Feature", e_feature.is_equal ("set_index"))
			assert ("Routine",routine.is_equal ("1"))
			assert ("Message",message.is_equal ("index_positive:Precondition violated."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(2)
			assert ("Class",e_class.has_substring ("APPLICATION"))
			assert ("Feature", e_feature.is_equal ("make"))
			assert ("Routine",routine.is_equal ("3"))
			assert ("Message",message.is_equal ("Routine failure."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(3)
			assert ("Class",e_class.has_substring ("APPLICATION"))
			assert ("Feature", e_feature.is_equal ("root's creation"))
			assert ("Routine",routine.is_equal (""))
			assert ("Message",message.is_equal ("Routine failure."))
			assert ("Effect",effect.is_equal ("Exit"))
		end

	test_error_invariant2
			-- New test routine (Invariant)
		note
			testing:  "covers/{EIFFEL_RUNTIME}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Invariant2.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_RUNTIME object and assign the JSON_ARRAY and JSON_OBJECT
			create errors.make (input_string)
			json_array:=errors.json_array
			assert ("Stack trace size", json_array.count=6)

			--Testing the JSON objects
			read_into_variables(1)
			assert ("Class",e_class.has_substring ("BAD_CLASS"))
			assert ("Feature", e_feature.is_equal ("_invariant"))
			assert ("Routine",routine.is_equal (""))
			assert ("Message",message.is_equal ("i_ge_zero:Class invariant violated."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(2)
			assert ("Class",e_class.has_substring ("BAD_CLASS"))
			assert ("Feature", e_feature.is_equal ("_invariant"))
			assert ("Routine",routine.is_equal (""))
			assert ("Message",message.is_equal ("Routine failure."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(4)
			assert ("Class",e_class.has_substring ("APPLICATION"))
			assert ("Feature", e_feature.is_equal ("make"))
			assert ("Routine",routine.is_equal ("2"))
			assert ("Message",message.is_equal ("Routine failure."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(5)
			assert ("Class",e_class.has_substring ("APPLICATION"))
			assert ("Feature", e_feature.is_equal ("root's creation"))
			assert ("Routine",routine.is_equal (""))
			assert ("Message",message.is_equal ("Routine failure."))
			assert ("Effect",effect.is_equal ("Exit"))

			read_into_variables(6)
			assert ("Class",e_class.has_substring ("APPLICATION"))
			assert ("Feature", e_feature.is_equal ("root's creation"))
			assert ("Routine",routine.is_equal (""))
			assert ("Message",message.is_equal ("Unexpected harmful signal (Segmentation violation):Eiffel run-time panic."))
			assert ("Effect",effect.is_equal ("Bye"))
		end

	test_error_loop_invariant
			-- New test routine (Loop Invariant)
		note
			testing:  "covers/{EIFFEL_RUNTIME}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Loop_Invariant.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_RUNTIME object and assign the JSON_ARRAY and JSON_OBJECT
			create errors.make (input_string)
			json_array:=errors.json_array
			assert ("Stack trace size", json_array.count=4)

			--Testing the JSON objects
			read_into_variables(1)
			assert ("Class",e_class.has_substring ("TEST"))
			assert ("Feature", e_feature.is_equal ("do_something"))
			assert ("Routine",routine.is_equal ("2"))
			assert ("Message",message.is_equal ("Loop invariant violated."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(2)
			assert ("Class",e_class.has_substring ("TEST"))
			assert ("Feature", e_feature.is_equal ("do_something"))
			assert ("Routine",routine.is_equal ("2"))
			assert ("Message",message.is_equal ("Routine failure."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(3)
			assert ("Class",e_class.has_substring ("APPLICATION"))
			assert ("Feature", e_feature.is_equal ("make"))
			assert ("Routine",routine.is_equal ("3"))
			assert ("Message",message.is_equal ("Routine failure."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(4)
			assert ("Class",e_class.has_substring ("APPLICATION"))
			assert ("Feature", e_feature.is_equal ("root's creation"))
			assert ("Routine",routine.is_equal (""))
			assert ("Message",message.is_equal ("Routine failure."))
			assert ("Effect",effect.is_equal ("Exit"))
		end

	test_error_intermediate_assertion
			-- New test routine (Intermediate Assertion)
		note
			testing:  "covers/{EIFFEL_RUNTIME}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Intermediate_Assertion.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_RUNTIME object and assign the JSON_ARRAY and JSON_OBJECT
			create errors.make (input_string)
			json_array:=errors.json_array
			assert ("Stack trace size", json_array.count=4)

			--Testing the JSON objects
			read_into_variables(1)
			assert ("Class",e_class.has_substring ("BAD_CLASS"))
			assert ("Feature", e_feature.is_equal ("set_i"))
			assert ("Routine",routine.is_equal ("2"))
			assert ("Message",message.is_equal ("i_ge_zero:Assertion violated."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(2)
			assert ("Class",e_class.has_substring ("BAD_CLASS"))
			assert ("Feature", e_feature.is_equal ("set_i"))
			assert ("Routine",routine.is_equal ("2"))
			assert ("Message",message.is_equal ("Routine failure."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(3)
			assert ("Class",e_class.has_substring ("APPLICATION"))
			assert ("Feature", e_feature.is_equal ("make"))
			assert ("Routine",routine.is_equal ("2"))
			assert ("Message",message.is_equal ("Routine failure."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(4)
			assert ("Class",e_class.has_substring ("APPLICATION"))
			assert ("Feature", e_feature.is_equal ("root's creation"))
			assert ("Routine",routine.is_equal (""))
			assert ("Message",message.is_equal ("L_FRoutine failure."))
			assert ("Effect",effect.is_equal ("Exit"))
		end

	test_error_void_call
			-- New test routine (Void Call)
		note
			testing:  "covers/{EIFFEL_RUNTIME}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Void_Call.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_RUNTIME object and assign the JSON_ARRAY and JSON_OBJECT
			create errors.make (input_string)
			json_array:=errors.json_array
			assert ("Stack trace size", json_array.count=3)

			--Testing the JSON objects
			read_into_variables(1)
			assert ("Class",e_class.has_substring ("APPLICATION"))
			assert ("Feature", e_feature.is_equal ("make"))
			assert ("Routine",routine.is_equal ("1"))
			assert ("Message",message.is_equal ("set_i:Feature call on void target."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(2)
			assert ("Class",e_class.has_substring ("APPLICATION"))
			assert ("Feature", e_feature.is_equal ("make"))
			assert ("Routine",routine.is_equal ("1"))
			assert ("Message",message.is_equal ("Routine failure."))
			assert ("Effect",effect.is_equal ("Fail"))

			read_into_variables(3)
			assert ("Class",e_class.has_substring ("APPLICATION"))
			assert ("Feature", e_feature.is_equal ("root's creation"))
			assert ("Routine",routine.is_equal (""))
			assert ("Message",message.is_equal ("Routine failure."))
			assert ("Effect",effect.is_equal ("Exit"))
		end

		test_error_segmentation_fault
				-- New test routine (Invariant)
			note
				testing:  "covers/{EIFFEL_RUNTIME}"
			do
				--Read the file
				create my_file.make_with_path (create {PATH}.make_from_string (address+"Segmentation_Fault.txt"))
				my_file.open_read
				my_file.read_stream (my_file.count)
				input_string:=my_file.last_string

				--Create EIFFEL_RUNTIME object and assign the JSON_ARRAY and JSON_OBJECT
				create errors.make (input_string)
				json_array:=errors.json_array
				assert ("Stack trace size", json_array.count=12)

				--Testing the JSON objects
				read_into_variables(1)
				assert ("Class",e_class.has_substring ("FUNCTION"))
				assert ("Feature", e_feature.is_equal ("fast_item"))
				assert ("Routine",routine.is_equal (""))
				assert ("Message",message.is_equal ("Segmentation fault:Operating system signal."))
				assert ("Effect",effect.is_equal ("Fail"))

				read_into_variables(2)
				assert ("Class",e_class.has_substring ("FUNCTION"))
				assert ("Feature", e_feature.is_equal ("fast_item"))
				assert ("Routine",routine.is_equal (""))
				assert ("Message",message.is_equal ("Routine failure."))
				assert ("Effect",effect.is_equal ("Fail"))

				read_into_variables(3)
				assert ("Class",e_class.has_substring ("FUNCTION"))
				assert ("Feature", e_feature.is_equal ("item"))
				assert ("Routine",routine.is_equal ("5"))
				assert ("Message",message.is_equal ("Routine failure."))
				assert ("Effect",effect.is_equal ("Fail"))

				read_into_variables(4)
				assert ("Class",e_class.has_substring ("LINKED_LIST"))
				assert ("Feature", e_feature.is_equal ("for_all(From LINEAR)"))
				assert ("Routine",routine.is_equal ("8"))
				assert ("Message",message.is_equal ("Routine failure."))
				assert ("Effect",effect.is_equal ("Fail"))

				read_into_variables(5)
				assert ("Class",e_class.has_substring ("ITP_INTERPRETER_ROOT"))
				assert ("Feature", e_feature.is_equal ("execute_byte_code"))
				assert ("Routine",routine.is_equal ("5"))
				assert ("Message",message.is_equal ("Routine failure."))
				assert ("Effect",effect.is_equal ("Fail"))

				read_into_variables(7)
				assert ("Class",e_class.has_substring ("ITP_INTERPRETER_ROOT"))
				assert ("Feature", e_feature.is_equal ("report_execute_request(From ITP_INTERPRETER)"))
				assert ("Routine",routine.is_equal ("16"))
				assert ("Message",message.is_equal ("Routine failure."))
				assert ("Effect",effect.is_equal ("Fail"))

				read_into_variables(12)
				assert ("Class",e_class.has_substring ("ITP_INTERPRETER_ROOT"))
				assert ("Feature", e_feature.is_equal ("root's creation"))
				assert ("Routine",routine.is_equal (""))
				assert ("Message",message.is_equal ("Routine failure."))
				assert ("Effect",effect.is_equal ("Exit"))
			end
end


