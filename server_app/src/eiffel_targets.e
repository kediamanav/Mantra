note
	description: "Summary description for {EIFFEL_TARGETS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EIFFEL_TARGETS

create
	make

feature -- Make
	make(a_str:STRING)
		do
			initialize (a_str)
			create_list
		end

feature --Access
	message:STRING
	json_array:JSON_ARRAY
	target_string: STRING
	index:INTEGER
	count:INTEGER

feature --Execution
	initialize(a_str:STRING)
		--Initialize the message to the local strings of this class
		require
			string_not_empty: a_str/=Void and not a_str.is_empty
		do
			message:=a_str
			message.replace_substring_all ("%N", "<br>")
			message.replace_substring_all ("%T","$")
			message.replace_substring_all ("\t","$")
			index:=message.substring_index ("[1]", 1)-1
			count:=0
		ensure
			string_set: message=a_str
		end

	create_list
		--Parses the targets
		local
			i,j:INTEGER
			json_object:JSON_OBJECT
		do
			create json_array.make_array

			--Setting index to the next line
			from
				i:=index
			until
				i>message.count or message.at(i)='<'
			loop

				--Skipping initial white spaces
				from
					j:=index
				until
					message.at (j)/=' '
				loop
					j:=j+1
				end
				index:=j

				--Skipping the number of the target
				from
					j:=index
				until
					message.at (j)=']'
				loop
					j:=j+1
				end
				index:=j+1

				--Skipping white spaces
				from
					j:=index
				until
					message.at (j)/=' '
				loop
					j:=j+1
				end
				index:=j

				--Extracting the actual target
				from
					j:=index
				until
					j>message.count or message.at(j)='<'
				loop
					j:=j+1
				end
				target_string:=message.substring(index,j-1)

				--Updating the iteration
				index:=j+4
				i:=index
				count:=count+1

				--Adding to the array
				create json_object.make
				json_object.put_string (target_string, "Target")
				json_array.add (json_object)
			end
		end
end

