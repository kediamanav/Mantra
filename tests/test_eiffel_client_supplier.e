note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"

class
	TEST_EIFFEL_CLIENT_SUPPLIER

inherit
	EQA_TEST_SET

feature --Access variables

	address:STRING =".\test_files\clients_suppliers\"
	my_file:PLAIN_TEXT_FILE
	input_string:STRING
	cs:EIFFEL_CLIENT_SUPPLIER
	json_array: JSON_ARRAY
	json_object:JSON_OBJECT

	class_name:STRING
	deferred_string:BOOLEAN

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

	read_into_variables(i:INTEGER)
		--Function that reads the JSON objects and puts its items into variables
		do
		--Extracting the JSON Objects
			create json_object.make
			if attached {JSON_OBJECT} json_array.i_th (i) as j_object then
				json_object:=j_object
				class_name:=send_json_value(j_object,"Class_Name")
				deferred_string:=send_json_value(j_object,"Deferred").to_boolean
			end
		end


feature -- Test routines

	test_Client_Supplier_01
			-- New test routine (Clients and Suppliers)
		note
			testing:  "covers/{EIFFEL_CLIENT_SUPPLIER}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Client_Supplier_01.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_CLIENT_SUPPLIER object and assign the JSON_ARRAY and JSON_OBJECT
			create cs.make (input_string,"ANY")
			json_array:=cs.json_array

			--Testing the size
			assert ("Number of clients/suppliers",json_array.count=19)

			--Testing the JSON objects
			read_into_variables(1)
			assert ("Class Name",class_name.is_equal ("INTERNAL"))
			assert ("Deferred",deferred_string=false)

			read_into_variables(2)
			assert ("Class Name",class_name.is_equal ("ITP_CONSTANT"))
			assert ("Deferred",deferred_string=false)

			read_into_variables(6)
			assert ("Class Name",class_name.is_equal ("REFLECTED_OBJECT"))
			assert ("Deferred",deferred_string=true)

			read_into_variables(8)
			assert ("Class Name",class_name.is_equal ("ROUTINE [BASE_TYPE -> ANY, OPEN_ARGS -> TUPLE create default_create end]"))
			assert ("Deferred",deferred_string=true)

			read_into_variables(14)
			assert ("Class Name",class_name.is_equal ("RT_DBG_LOCAL_RECORD [G -> ANY]"))
			assert ("Deferred",deferred_string=false)

		end

	test_Client_Supplier_02
			-- New test routine (Clients and Suppliers)
		note
			testing:  "covers/{EIFFEL_CLIENT_SUPPLIER}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Client_Supplier_02.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_CLIENT_SUPPLIER object and assign the JSON_ARRAY and JSON_OBJECT
			create cs.make (input_string,"ANY")
			json_array:=cs.json_array

			--Testing the size
			assert ("Number of clients/suppliers",json_array.count=7)

			--Testing the JSON objects
			read_into_variables(1)
			assert ("Class Name",class_name.is_equal ("BOOLEAN"))
			assert ("Deferred",deferred_string=false)

			read_into_variables(2)
			assert ("Class Name",class_name.is_equal ("EXCEPTIONS"))
			assert ("Deferred",deferred_string=false)

			read_into_variables(6)
			assert ("Class Name",class_name.is_equal ("STRING_8"))
			assert ("Deferred",deferred_string=false)

			read_into_variables(7)
			assert ("Class Name",class_name.is_equal ("TYPE [G]"))
			assert ("Deferred",deferred_string=false)

		end

	test_empty_list
			-- New test routine (No Clients and Suppliers)
		note
			testing:  "covers/{EIFFEL_CLIENT_SUPPLIER}"
		do
			--Read the file
			create my_file.make_with_path (create {PATH}.make_from_string (address+"Client_Supplier_Empty.txt"))
			my_file.open_read
			my_file.read_stream (my_file.count)
			input_string:=my_file.last_string

			--Create EIFFEL_CLIENT_SUPPLIER object and assign the JSON_ARRAY and JSON_OBJECT
			create cs.make (input_string,"ANY")
			json_array:=cs.json_array

			--Testing the size
			assert ("Number of clients/suppliers",json_array.count=0)
		end
end


