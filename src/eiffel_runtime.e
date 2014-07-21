note
	description: "Summary description for {EIFFEL_RUNTIME}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EIFFEL_RUNTIME
create
	make

feature -- Make
	make(a_str:STRING)
		do
			initialize (a_str)
			create_error_list
		end

feature --Access
	error_message:STRING
	stack_count:INTEGER
	json_array:JSON_ARRAY
	json_object:JSON_OBJECT
	runtime_text:STRING

feature --Execution
	initialize(a_str:STRING)
		--Initialize error message to the local string of the class
		require
			string_not_empty: a_str/=Void and not a_str.is_empty
		do
			error_message:=a_str
			error_message.replace_substring_all ("%N", "<br>")
		ensure
			string_set: error_message=a_str
		end

	create_error_list
		--Parses the stack class, stack routine, routine point, effect, and message

		local
			routine_start_index:INTEGER
			routine_last_index:INTEGER
			dump_index:INTEGER

			class_string:STRING
			feature_string: STRING
			routine_string: STRING
			message_string:STRING
			effect_string:STRING
			
			i:INTEGER
			error_index:INTEGER
			error_count:INTEGER

		do
			create json_array.make_array
			create class_string.make_empty
			create feature_string.make_empty
			create routine_string.make_empty
			create message_string.make_empty
			create effect_string.make_empty
			create runtime_text.make_empty
			create json_object.make

			error_count:=-1
			runtime_text:=error_message.substring (1, error_message.substring_index ("------", 1)-5)
			error_index:=error_message.substring_index ("Effect<br>",1)+10
			--If the message has an extra blank line in the middle of 2 lines, this skips the blank line
			if space_checker(error_index) then
				error_index:=skip_spaces(error_index)
			end
			if line_end_checker (error_index) then
				error_index:=skip_line_end (error_index)
			end
			error_index:=skip_dash(error_index)
			from

			until
				error_index>error_message.count
			loop

				--Extract the class_string
				--If the message has an extra blank line in the middle of 2 lines, this skips the blank line
				if space_checker(error_index) then
					error_index:=skip_spaces(error_index)
				end
				if line_end_checker (error_index) then
					error_index:=skip_line_end (error_index)
				end
				from
					i:=error_index
				until
					space_checker(i) or error_message.at (i)='<'
				loop
					i:=i+1
				end
				class_string.append (error_message.substring (error_index, i-1))
				error_index:=i
				error_index:=skip_spaces(error_index)

				--Extract the feature and the routine
				--If the message has an line gap in between then it skips it and moves to the next line
				if space_checker(error_index) then
					error_index:=skip_spaces(error_index)
				end
				if line_end_checker (error_index) then
					error_index:=skip_line_end (error_index)
				end
				from
					i:=error_index
				until
					space_checker(i) or error_message.at (i)='<'
				loop
					i:=i+1
				end
				feature_string.append (error_message.substring (error_index, i-1))
				error_index:=i
				error_index:=skip_spaces(error_index)

				--Extract the routine from the feature here
				routine_start_index:=feature_string.last_index_of ('@', feature_string.count)
				if routine_start_index/=0 then
					routine_string:=feature_string.substring (routine_start_index+1, feature_string.count)
					feature_string:=feature_string.substring (1, routine_start_index-2)
				end

				--Extract the message
				from
					i:=error_index
				until
					space_checker(i) or error_message.at (i)='<'
				loop
					i:=i+1
				end
				message_string.append (error_message.substring (error_index, i-1))
				error_index:=i
				error_index:=skip_spaces(error_index)
				--Move to the next line by moving over <br>
				error_index:=error_index+4

				--Extract the extra remaining part of message in the Class line
				--If the message has an extra blank line in the middle of 2 lines, this skips the blank line
				if space_checker(error_index) then
					error_index:=skip_spaces(error_index)
				end
				if line_end_checker (error_index) then
					error_index:=skip_line_end (error_index)
				end
				if error_message.at (error_index)/='<' then
					from
					i:=error_index
					until
						space_checker(i) or error_message.at (i)='<'
					loop
						i:=i+1
					end
					message_string.append (error_message.substring (error_index, i-1))
					error_index:=i
					error_index:=skip_spaces(error_index)
					--Move to the next line by moving over <br>
					error_index:=error_index+4
				end

				--Extract class
				--If the message has an extra blank line in the middle of 2 lines, this skips the blank line
				if space_checker(error_index) then
					error_index:=skip_spaces(error_index)
				end
				if line_end_checker (error_index) then
					error_index:=skip_line_end (error_index)
				end
				from
					i:=error_index
				until
					space_checker(i)
				loop
					i:=i+1
				end
				class_string.append (error_message.substring (error_index, i-1))
				error_index:=i
				error_index:=skip_spaces(error_index)

				--Extract the class from which that routine inherits if it exists
				if error_message.at (error_index)='(' then
					from
					i:=error_index
					until
						error_message.at (i)=')'
					loop
						i:=i+1
					end
					feature_string.append (error_message.substring (error_index, i))
					error_index:=i+1
					error_index:=skip_spaces(error_index)
				end

				--Extract the message
				from
					i:=error_index
				until
					space_checker(i) or error_message.at (i)='<'
				loop
					i:=i+1
				end
				message_string.append (error_message.substring (error_index, i-1))
				error_index:=i
				error_index:=skip_spaces(error_index)

				--Extract the effect
				from
				i:=error_index
				until
					--Change this line if the line breaker changes
					error_message.at (i)='<'
				loop
					i:=i+1
				end
				effect_string.append (error_message.substring (error_index, i-1))
				--Move over <br> to the next line
				error_index:=i+4


				--If the message has an extra blank line in the middle of 2 lines, this skips the blank line
				if space_checker(error_index) then
					error_index:=skip_spaces(error_index)
				end
				if line_end_checker (error_index) then
					error_index:=skip_line_end (error_index)
				end

				--Create the parsed error and reinitialize the rest
				if dash_checker(error_index) then
					json_object.put_string (class_string,"Class")
					json_object.put_string (feature_string,"Feature")
					json_object.put_string (routine_string, "Routine")
					json_object.put_string (message_string, "Message")
					json_object.put_string (effect_string, "Effect")
					json_array.add (json_object)

					--Updating the error count
					error_count:=error_count+1

					--Update for the next iteration
					create class_string.make_empty
					create feature_string.make_empty
					create routine_string.make_empty
					create message_string.make_empty
					create effect_string.make_empty
					create json_object.make

					error_index:=skip_dash(error_index)
				end
			end

			--If the message was not parsed and the json_array is empty, simply dump everything
			if json_array.count=0 then
				create json_object.make
				json_object.put_string ("","Class")
				json_object.put_string ("","Feature")
				json_object.put_string ("", "Routine")
				json_object.put_string ("", "Message")
				json_object.put_string ("", "Effect")
				json_array.add (json_object)
				error_count:=error_count+1
			end
		end

feature --Helper functions

		space_checker (i:INTEGER):BOOLEAN
			--Checks whether there is  trailing set of spaces
			do
				Result:=false
				if error_message.at (i)=' ' and error_message.at (i+1)=' ' then
					Result:=true
				end
			end

		skip_spaces (i:INTEGER):INTEGER
			--Skips the trailing set of spaces
				local
					index:INTEGER
				do
					from
						index:=i
					until
						error_message.at (index)/=' '
					loop
						index:=index+1
					end
					Result:=index
				end

		skip_line_end (i:INTEGER):INTEGER
			--Skips the trailing end of line
				do
					Result:=i+4
				end

		line_end_checker (i:INTEGER):BOOLEAN
			--Checks whether the end of line has been reached or not
			do
				Result:=false
				if error_message.at (i)='<' and error_message.at (i+1)='b' and error_message.at (i+2)='r' and error_message.at (i+3)='>' then
					Result:=true
				end
			end

		dash_checker (i:INTEGER):BOOLEAN
			--Checks if there is a trailing set of dashes
			do
				Result:=false
				if error_message.at (i)='-' and error_message.at (i+1)='-' and error_message.at (i+2)='-' then
					Result:=true
				end
			end

		skip_dash (i:INTEGER): INTEGER
			--Skips the trailing set of dashes
			local
				index:INTEGER
			do
				index:=i
				from

				until
					error_message.at (index)/='-'
				loop
					index:=index+1
				end
				if error_message.at (index)='<' then
					index:=index+4
				end
				Result:=index
			end
end
