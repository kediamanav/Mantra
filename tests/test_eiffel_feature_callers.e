note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"

class
	TEST_EIFFEL_FEATURE_CALLERS

inherit
	EQA_TEST_SET

feature --Access variables

	address:STRING =".\test_files\feature_callers\"
	my_file:PLAIN_TEXT_FILE
	input_string:STRING
	feature_callers:EIFFEL_FEATURE_CALLERS
	json_array: JSON_ARRAY
	json_object:JSON_OBJECT

	class_name:STRING
	feature_name:STRING
	features_array:JSON_ARRAY

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
				Result:=str.item.out
			end
			if attached {JSON_BOOLEAN} obj.item(key) as str then
				Result:=str.item.out
			end
		end


	get_json_array(obj:JSON_OBJECT; key:STRING) : JSON_ARRAY
		--Function that returns the JSON_ARRAY of the feature
	local
		arr:JSON_ARRAY
	do
		create arr.make_array
		Result:=arr
		if attached {JSON_ARRAY} obj.item(key) as str then
				Result:=str
		end
	end

	read_into_variables(i:INTEGER)
		--Function that reads the JSON objects and puts its items into variables

		do
		--Extracting the JSON Objects
			create json_object.make
			if attached {JSON_OBJECT} json_array.i_th (i) as j_object then
				json_object:=j_object
				class_name:=send_json_value(j_object,"Class_Name")
				features_array:=get_json_array(j_object,"Features")
			end
		end

	read_feature_into_variables(i:INTEGER)
		--Function that reads the JSON objects and puts its items into variables
		do
		--Extracting the JSON Objects
			create json_object.make
			if attached {JSON_OBJECT} features_array.i_th (i) as j_object then
				json_object:=j_object
				feature_name:=send_json_value(j_object,"Feature_Name")
			end
		end


feature -- Test routines

	test_error_callers_01
			-- New test routine (Callers)
		note
			testing:  "covers/{EIFFEL_FEATURE_CALLERS}"
		local
			json_arr:JSON_ARRAY
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Callers_01.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_FEATURE_CALLERS object and assign the JSON_ARRAY and JSON_OBJECT
			create feature_callers.make (input_string,"EIFFEL_ERRORS","json_array")
			json_array:=feature_callers.json_array

			assert ("Array count", json_array.count=3)

			--Testing the JSON objects
			read_into_variables(1)
			assert ("Class Name",class_name.is_equal ("APP_SERVICE"))
			assert ("Features array count", features_array.count=1)

			read_feature_into_variables(1)
			assert ("Feature Name",feature_name.is_equal ("get_error_list"))

			read_into_variables(2)
			assert ("Class Name",class_name.is_equal ("EIFFEL_ERRORS"))
			assert ("Features array count", features_array.count=2)

			read_feature_into_variables(1)
			assert ("Feature Name",feature_name.is_equal ("create_error_list"))

			read_into_variables(3)
			assert ("Class Name",class_name.is_equal ("TEST_EIFFEL_ERRORS"))
			assert ("Features array count", features_array.count=7)

			read_feature_into_variables(1)
			assert ("Feature Name",feature_name.is_equal ("test_error_multiple_errors"))

			read_feature_into_variables(2)
			assert ("Feature Name",feature_name.is_equal ("test_error_unknown_error"))

			read_feature_into_variables(5)
			assert ("Feature Name",feature_name.is_equal ("test_error_syntax_error"))

			read_feature_into_variables(7)
			assert ("Feature Name",feature_name.is_equal ("test_error_wrong_number_of_arguments"))

		end

	test_error_callers_02
			-- New test routine (Callers)
		note
			testing:  "covers/{EIFFEL_FEATURE_CALLERS}"
		local
			json_arr:JSON_ARRAY
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Callers_02.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_FEATURE_CALLERS object and assign the JSON_ARRAY and JSON_OBJECT
			create feature_callers.make (input_string,"APP_SERVICE","json_array")
			json_array:=feature_callers.json_array

			assert ("Array count", json_array.count=4)

			--Testing the JSON objects
			read_into_variables(1)
			assert ("Class Name",class_name.is_equal ("APP_SERVICE"))
			assert ("Features array count", features_array.count=11)

			read_feature_into_variables(1)
			assert ("Feature Name",feature_name.is_equal ("get_class_ancestors"))

			read_feature_into_variables(2)
			assert ("Feature Name",feature_name.is_equal ("get_class_clients"))

			read_feature_into_variables(10)
			assert ("Feature Name",feature_name.is_equal ("map_uri_template_agent_with_request_methods"))

			read_feature_into_variables(11)
			assert ("Feature Name",feature_name.is_equal ("router"))

			read_into_variables(2)
			assert ("Class Name",class_name.is_equal ("WSF_FILE_SYSTEM_HANDLER"))
			assert ("Features array count", features_array.count=2)

			read_feature_into_variables(1)
			assert ("Feature Name",feature_name.is_equal ("make_hidden"))

			read_into_variables(3)
			assert ("Class Name",class_name.is_equal ("WSF_ROUTER"))
			assert ("Features array count", features_array.count=2)

			read_feature_into_variables(1)
			assert ("Feature Name",feature_name.is_equal ("handle_with_request_methods"))

			read_feature_into_variables(2)
			assert ("Feature Name",feature_name.is_equal ("Methods_get"))

			read_into_variables(4)
			assert ("Class Name",class_name.is_equal ("WSF_ROUTER_SELF_DOCUMENTATION_HANDLER"))
			assert ("Features array count", features_array.count=1)

			read_feature_into_variables(1)
			assert ("Feature Name",feature_name.is_equal ("make"))

		end

	test_error_callers_empty
			-- New test routine (No Callers)
		note
			testing:  "covers/{EIFFEL_FEATURE_CALLERS}"
		local
			json_arr:JSON_ARRAY
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"No_Callers.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_FEATURE_CALLERS object and assign the JSON_ARRAY and JSON_OBJECT
			create feature_callers.make (input_string,"EIFFEL_ERRORS","json_array")
			json_array:=feature_callers.json_array

			assert ("Array count", json_array.count=0)
		end



end


