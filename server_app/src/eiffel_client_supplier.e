note
	description: "Summary description for {EIFFEL_CLIENT_SUPPLIER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EIFFEL_CLIENT_SUPPLIER

create
	make

feature -- Make
	make(a_str:STRING;a_name:STRING)
		do
			initialize (a_str,a_name)
			create_list
		end

feature --Access
	message:STRING
	class_name:STRING
	json_array:JSON_ARRAY
	class_string:STRING
	index:INTEGER

feature --Execution
	initialize(a_str:STRING;a_name:STRING)
		--Initialize the list of clients and suppliers to the local string of this class
		require
			string_not_empty: a_str/=Void and not a_str.is_empty
			class_string_not_empty: a_name/=Void and not a_name.is_empty
		do
			message:=a_str
			class_name:=a_name
			message.replace_substring_all ("%N", "<br>")
			--There is a line break initially, so skip <br>
			index:=5
		ensure
			string_set: message=a_str
			class_set: class_name=a_name
		end

	create_list
		--Parses the clients/suppliers
		local
			i,j:INTEGER
			count:INTEGER
			json_object:JSON_OBJECT
		do
			create json_array.make_array
			count:=0

			from
				i:=index
			until
				i>message.count or message.at(i)='<'
			loop
				from
					j:=i
				until
					j>message.count or message.at(j)='<'
				loop
					j:=j+1
				end
				create json_object.make
				class_string:=message.substring (i, j-1)
				if class_string.has_substring ("*") then
					json_object.put_boolean (true, "Deferred")
				else
					json_object.put_boolean (false, "Deferred")
				end
				class_string.replace_substring_all ("*", "")
				json_object.put_string (class_string, "Class_Name")
				json_array.add (json_object)
				count:=count+1
				i:=j+4
			end
		end
end
