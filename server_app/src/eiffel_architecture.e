note
	description: "Summary description for {EIFFEL_ARCHITECTURE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EIFFEL_ARCHITECTURE

create
	make

feature -- Make
	make(a_str:STRING;a_name:STRING;a_flag:INTEGER)
		do
			initialize (a_str,a_name,a_flag)
			json_arr:=create_architecture(0)
		end

feature --Access
	message:STRING
	class_name:STRING
	json_arr:JSON_ARRAY
	class_string:STRING
	flag:INTEGER		--If flag=1, we are parsing descendants, if flag=2 we are parsing ancestors
	index:INTEGER

feature --Execution
	initialize(a_str:STRING;a_name:STRING;a_flag:INTEGER)
		--Initialize the list of ancestors and descendants to the local string of the class
		require
			string_not_empty: a_str/=Void and not a_str.is_empty
			class_string_not_empty: a_name/=Void and not a_name.is_empty
		do
			message:=a_str
			class_name:=a_name
			message.replace_substring_all ("%N", "<br>")
			--We are replacing the tabs % or \t by $ for our convienance in identifying the tabs
			message.replace_substring_all ("%T", "$")
			message.replace_substring_all ("\t", "$")
			--There is a line break initially, so skip <br>
			index:=5
			flag:=a_flag
		ensure
			string_set: message=a_str
			class_set: class_name=a_name
		end

	create_architecture(level:INTEGER) :JSON_ARRAY
		--Parses the descendants/ascendants
		local
			i:INTEGER
			count:INTEGER
			json_array:JSON_ARRAY
			json_array_desc:JSON_ARRAY
			json_object:JSON_OBJECT
		do
			create json_array.make_array

			count:=get_count

			from

			until
				count/=(level+1)
			loop
				--Skip $$

				create json_object.make
				index:=index+count

				--Extract class name here
				from
					i:=index
				until
					message.at (i)='<'
				loop
					i:=i+1
				end
				class_string:= message.substring (index, i-1)
				--Check for deferred or not
				if class_string.has_substring ("*") then
					json_object.put_boolean (true,"Deferred")
					class_string.replace_substring_all ("*", "")
				else
					json_object.put_boolean (false,"Deferred")
				end
				index:=i+4

				json_object.put_string (class_string, "Class_Name")
				json_array_desc:=create_architecture(count)

				--Add the descendants/ancestors
				if flag=1 then
					json_object.put (json_array_desc, "Descendants")
				else
					json_object.put (json_array_desc, "Ancestors")
				end

				--Add to the final JSON array
				json_array.add (json_object)

				--Update count
				count:=get_count
			end

			Result:=json_array
		end

		get_count:INTEGER
			local
				i:INTEGER
				count:INTEGER
			do
				count:=0
				--Extract the leading tabs
				from
					i:=index
				until
					message.at (i)/='$'
				loop
					count:=count+1
					i:=i+1
				end
				Result:=count
			end
end

