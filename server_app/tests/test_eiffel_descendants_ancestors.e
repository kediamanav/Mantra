note
	description: "Summary description for {TEST_EIFFEL_DESCENDANTS_ANCESTORS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	-- We are testing for descendants only here because the descendants and ancestors differ only in the name of their keys. The algorithm used to parse both of them are exactly the same.
	TEST_EIFFEL_DESCENDANTS_ANCESTORS

inherit
	EQA_TEST_SET

feature --Access variables

	address:STRING =".\test_files\architecture\"
	my_file:PLAIN_TEXT_FILE
	input_string:STRING
	architecture:EIFFEL_ARCHITECTURE
	json_array: JSON_ARRAY
	json_object:JSON_OBJECT

	class_name:STRING
	deferred_string:BOOLEAN
	descendants_array:JSON_ARRAY

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
		--Function that returns the JSON_ARRAY of the descendants
	local
		arr:JSON_ARRAY
	do
		create arr.make_array
		Result:=arr
		if attached {JSON_ARRAY} obj.item(key) as str then
				Result:=str
		end
	end

	read_into_variables(i:INTEGER;json_arr:JSON_ARRAY)
		--Function that reads the JSON objects and puts its items into variables

		do
		--Extracting the JSON Objects
			create json_object.make
			if attached {JSON_OBJECT} json_arr.i_th (i) as j_object then
				json_object:=j_object
				class_name:=send_json_value(j_object,"Class_Name")
				deferred_string:=send_json_value(j_object,"Deferred").to_boolean
				descendants_array:=get_json_array(j_object,"Descendants")
			end
		end


feature -- Test routines

	test_error_descendants_01
			-- New test routine (Descendants)
		note
			testing:  "covers/{EIFFEL_ARCHITECTURE}"
		local
			json_arr:JSON_ARRAY
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Descendants_01.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_ARCHITECTURE object and assign the JSON_ARRAY and JSON_OBJECT
			--The 1 in the argument indicates we are parsing descendants
			create architecture.make (input_string,"APP_SERVICE",1)
			json_arr:=architecture.json_arr
			read_into_variables(1,json_arr)

			--Testing the JSON objects
			assert ("Class Name",class_name.is_equal ("APP_SERVICE"))
			assert ("Deferred",deferred_string=true)
			assert ("Descendants array count", descendants_array.count=4)

			read_into_variables(1,descendants_array)
			assert ("Class Name",class_name.is_equal ("WSF_LAUNCHABLE_SERVICE"))
			assert ("Deferred",deferred_string=true)
			assert ("Descendants array count", descendants_array.count=1)

			read_into_variables(1,descendants_array)
			assert ("Class Name",class_name.is_equal ("WSF_SERVICE"))
			assert ("Deferred",deferred_string=true)
			assert ("Descendants array count", descendants_array.count=1)

			read_into_variables(1,descendants_array)
			assert ("Class Name",class_name.is_equal ("ANY"))
			assert ("Deferred",deferred_string=false)
			assert ("Descendants array count", descendants_array.count=0)

			read_into_variables(1,json_arr)
			read_into_variables(2,descendants_array)
			assert ("Class Name",class_name.is_equal ("WSF_ROUTED_SERVICE"))
			assert ("Deferred",deferred_string=true)
			assert ("Descendants array count", descendants_array.count=1)

			read_into_variables(1,descendants_array)
			assert ("Class Name",class_name.is_equal ("ANY"))
			assert ("Deferred",deferred_string=false)
			assert ("Descendants array count", descendants_array.count=0)
		end

	test_error_descendants_02
			-- New test routine (Descendants, just a single class)
		note
			testing:  "covers/{EIFFEL_ARCHITECTURE}"
		local
			json_arr:JSON_ARRAY
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Descendants_02.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_ARCHITECTURE object and assign the JSON_ARRAY and JSON_OBJECT
			--The 1 in the argument indicates we are parsing descendants
			create architecture.make (input_string,"APPLICATION",1)
			json_arr:=architecture.json_arr
			read_into_variables(1,json_arr)

			--Testing the JSON objects
			assert ("Class Name",class_name.is_equal ("APPLICATION"))
			assert ("Deferred",deferred_string=false)
			assert ("Descendants array count", descendants_array.count=0)
		end

	test_error_descendants_03
			-- New test routine (Descendants)
		note
			testing:  "covers/{EIFFEL_ARCHITECTURE}"
		local
			json_arr:JSON_ARRAY
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Descendants_03.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_ARCHITECTURE object and assign the JSON_ARRAY and JSON_OBJECT
			--The 1 in the argument indicates we are parsing descendants
			create architecture.make (input_string,"APP_SERVICE",1)
			json_arr:=architecture.json_arr
			read_into_variables(1,json_arr)

			--Testing the JSON objects
			assert ("Class Name",class_name.is_equal ("APPLICATION"))
			assert ("Deferred",deferred_string=false)
			assert ("Descendants array count", descendants_array.count=1)

			read_into_variables(1,descendants_array)
			assert ("Class Name",class_name.is_equal ("ARGUMENTS"))
			assert ("Deferred",deferred_string=false)
			assert ("Descendants array count", descendants_array.count=1)

			read_into_variables(1,descendants_array)
			assert ("Class Name",class_name.is_equal ("ITERABLE [G]"))
			assert ("Deferred",deferred_string=true)
			assert ("Descendants array count", descendants_array.count=1)

			read_into_variables(1,descendants_array)
			assert ("Class Name",class_name.is_equal ("ANY"))
			assert ("Deferred",deferred_string=false)
			assert ("Descendants array count", descendants_array.count=0)
		end
end
