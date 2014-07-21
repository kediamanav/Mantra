note
	description: "Summary description for {EIFFEL_ERRORS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EIFFEL_ERRORS
create
	make

feature -- Make
	make(a_str:STRING)
		do
			initialize (a_str)
			create json_object.make
			if error_message.substring_index ("Syntax error", 1)/=0 then
				create_syntax_error_list
			else
				create_error_list
			end
		end

feature --Access
	error_message:STRING
	error_count:INTEGER
	json_array:JSON_ARRAY
	json_object:JSON_OBJECT

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

	create_syntax_error_list
		--Parses the syntax errors
		--Syntax errors do not have an error, what_to_do, feature
		--They have error_code, class, line, and the dump according to my feature
		local
			class_start_index:INTEGER
			line_start_index:INTEGER

			class_last_index:INTEGER
			line_last_index:INTEGER

			error_code_string:STRING
			error_string: STRING
			what_to_do_string:STRING
			class_string:STRING
			feature_string: STRING
			line_string:INTEGER
			before_line_string: STRING
			after_line_string: STRING

			i:INTEGER
			error_index:INTEGER

		do
			create json_array.make_array

			line_last_index:=0
			error_count:=0

			from
				error_index:=error_message.substring_index ("Syntax error", 1)
			until
				error_index=0
			loop
				create json_object.make

				class_start_index:=error_message.substring_index ("class ", error_index)+6
				class_last_index:=error_message.substring_index (">", class_start_index)

				line_start_index:=error_message.substring_index ("line ", error_index)+5
				from
					i:=line_start_index
				until
					not error_message.at (i).is_digit
				loop
					i:=i+1
				end
				line_last_index:=i-1

				error_code_string:="Syntax Error<br>"
				error_string:=""
				what_to_do_string:=""
				class_string:=error_message.substring (class_start_index,class_last_index)
				feature_string:=""
				line_string:=error_message.substring (line_start_index,line_last_index).to_integer
				before_line_string:=""
				--Change this line if the line breaker changes
				after_line_string:=error_message.substring (class_last_index+5, error_message.substring_index ("--^", error_index)+2)

				--Create the parsed error
				json_object.put_string (error_code_string,"Error_Code")
				json_object.put_string (error_string,"Error")
				json_object.put_string (what_to_do_string,"What_to_do")
				json_object.put_string (class_string,"Class")
				json_object.put_string (feature_string,"Feature")
				json_object.put_integer (line_string, "Line")
				json_object.put_string (before_line_string, "Before_Line")
				json_object.put_string (after_line_string, "After_Line")

				--json_object.put_string ("True","Has_Error")
				json_array.add (json_object)

				--Updating the loop variable
				error_index:=error_message.substring_index ("Syntax error",line_last_index)
				error_count:=error_count+1

				--Checking the parsed error
--				io.put_string (json_array.i_th (error_count).representation)
--				io.put_new_line
			end
		end

	create_error_list
		--Parses the error line number, type, and description
		--Assumptions for error messages:
			--	Message is always expected to have Error_Code
			--	If the message does not a particular "key", then it should not have any string between it and the next key, otherwise
			--  the dump will start after the last known key, and the string in between the missing key and the last found key will not be shown

		local
			error_code_start_index:INTEGER
			error_start_index: INTEGER
			what_to_do_start_index: INTEGER
			class_start_index:INTEGER
			feature_start_index: INTEGER
			line_start_index:INTEGER

			error_code_last_index:INTEGER
			error_last_index: INTEGER
			what_to_do_last_index: INTEGER
			class_last_index:INTEGER
			feature_last_index: INTEGER
			line_last_index:INTEGER
			message_end:INTEGER
			dump_index:INTEGER

			error_code_string:STRING
			error_string: STRING
			what_to_do_string:STRING
			class_string:STRING
			feature_string: STRING
			line_string:INTEGER
			before_line_string: STRING
			after_line_string: STRING
			dump_string:STRING

			i:INTEGER
			error_index:INTEGER

			has_error_code: BOOLEAN
			has_error:BOOLEAN
			has_what_to_do:BOOLEAN
			has_class:BOOLEAN
			has_feature:BOOLEAN
			has_line:BOOLEAN
			has_before_line:BOOLEAN

		do
			create json_array.make_array
			error_count:=0

			from
				error_index:=error_message.substring_index ("Error code", 1)
			until
				error_index=0
			loop
				create json_object.make
				has_error_code:=true
				has_error:=true
				has_what_to_do:=true
				has_class:=true
				has_feature:=true
				has_line:=true
				has_before_line:=true

				--Message is always expected to have Error_Code
				error_code_start_index:=error_message.substring_index ("Error code: ", error_index)+12
				if error_code_start_index=12 then
					has_error_code:=false
					dump_index:=1
					error_code_last_index:=dump_index-1
					message_end:=error_message.count
				else
					from
						i:=error_code_start_index
					until
						--Change this line if the line breaker changes
						error_message.at (i)='>'
					loop
						i:=i+1
					end
					--Change this line if the line breaker changes
					error_code_last_index:=i
					dump_index:=error_code_last_index+1
					message_end:=error_message.substring_index ("-----", error_code_start_index+1)-1
				end


				-- If the message does not have an error or type error, then dump it
				-- If however the message has what_to_do, class, feature or line after it, then the dump will start after them
				-- and the dump from error will not be shown
				error_start_index:=error_message.substring_index ("Error: ", error_index)+7
				if error_start_index=7 then
					error_start_index:=error_message.substring_index ("Type error: ", error_index)+12
				end
				--If the error does not contain a error in the error message's length
				if error_start_index=12 or error_start_index>message_end then
					has_error:=false
					dump_index:=error_code_last_index+1
					error_last_index:=dump_index-1
				else
					from
						i:=error_start_index
					until
						--Change this line if the line breaker changes
						error_message.at (i)='>'
					loop
						i:=i+1
					end
					--Change this line if the line breaker changes
					error_last_index:=i
					dump_index:=error_last_index+1
				end

				-- 	If the message does not have a What_to_do, then dump it
				--  If the message has a what_to_do but no class then dump it, it should not have feature or line in it, later
				--  Otherwise the what_to_do will not be dumped and the dump will start from after the feature or the line
				what_to_do_start_index:=error_message.substring_index ("What to do: ", error_index)+12
				--If no what_to_do exists in the error message's length, then dump it
				if what_to_do_start_index=-12 or what_to_do_start_index>message_end then
					has_what_to_do:=false
					dump_index:=error_last_index+1
					what_to_do_last_index:=dump_index-1
				else
					what_to_do_last_index:=error_message.substring_index ("Class:", error_index)-1
					--If no class exists in the error message's length, then dump what_to_do
					if what_to_do_last_index=-1 or what_to_do_last_index>message_end then
						has_what_to_do:=false
						dump_index:=error_last_index-12
						what_to_do_last_index:=dump_index-1
					end
				end

				class_start_index:=error_message.substring_index ("Class: ", error_index)+7
				--If the error does not contain a class in the error message's length
				if class_start_index=7 or class_start_index>message_end then
					has_class:=false
					dump_index:=what_to_do_last_index+1
					class_last_index:=dump_index-1
				else
					from
						i:=class_start_index
					until
						--Change this line if the line breaker changes
						error_message.at (i)='>'
					loop
						i:=i+1
					end
					--Change this line if the line breaker changes
					class_last_index:=i
					dump_index:=class_last_index+1
				end

				feature_start_index:=error_message.substring_index ("Feature: ", error_index)+9
				--If the error does not contain a feature in the error message's length
				if feature_start_index=9 or feature_start_index>message_end then
					has_feature:=false
					dump_index:=class_last_index+1
					feature_last_index:=dump_index-1
				else
					from
						i:=feature_start_index
					until
						--Change this line if the line breaker changes
						error_message.at (i)='>'
					loop
						i:=i+1
					end
					--Change this line if the line breaker changes
					feature_last_index:=i
					dump_index:=feature_last_index+1
				end

				line_start_index:=error_message.substring_index ("Line:", error_index)+6
				--If the error does not contain a line in the error message's length
				if line_start_index=6 or line_start_index>message_end then
					has_line:=false
					has_before_line:=false
					dump_index:=feature_last_index+1
				else
					--If the error has a line
					from
						i:=line_start_index
					until
						not error_message.at (i).is_digit
					loop
						i:=i+1
					end
					line_last_index:=i-1

					--Change this line if the line breaker changes
					dump_index:=line_last_index+5
				end

				if has_error_code then
					error_code_string:=error_message.substring (error_code_start_index, error_code_last_index)
				else
					error_code_string:=""
				end

				if has_error then
					error_string:=error_message.substring (error_start_index,error_last_index)
				else
					error_string:=""
				end

				if has_what_to_do then
					what_to_do_string:=error_message.substring (what_to_do_start_index,what_to_do_last_index)
				else
					what_to_do_string:=""
				end

				if has_class then
					class_string:=error_message.substring (class_start_index,class_last_index)
				else
					class_string:=""
				end

				if has_feature then
					feature_string:=error_message.substring (feature_start_index,feature_last_index)
				else
					feature_string:=""
				end

				if has_line then
					line_string:=error_message.substring (line_start_index,line_last_index).to_integer
					before_line_string:=error_message.substring (feature_last_index+1, error_message.substring_index ("Line:", error_index)-1)
				else
					line_string:=-1
					before_line_string:=""
				end

				--The dump of the message is here
				after_line_string:=error_message.substring (dump_index, message_end)

				--The main dump
				dump_string:=error_message.substring(error_index,message_end)

				--Create the parsed error
				json_object.put_string (error_code_string,"Error_Code")
				json_object.put_string (error_string,"Error")
				json_object.put_string (what_to_do_string,"What_to_do")
				json_object.put_string (class_string,"Class")
				json_object.put_string (feature_string,"Feature")
				json_object.put_integer (line_string, "Line")
				json_object.put_string (before_line_string, "Before_Line")
				json_object.put_string (after_line_string, "After_Line")
				json_object.put_string (dump_string, "Dump")

				--json_object.put_string ("True","Has_Error")
				json_array.add (json_object)

				--Updating the loop variable
				error_index:=error_message.substring_index ("Error code:",message_end)
				error_count:=error_count+1

				--Checking the parsed error
--				io.put_string (json_array.i_th (error_count).representation)
--				io.put_new_line
			end

			if json_array.count=0 then
				create json_object.make

				--Create the parsed error
				json_object.put_string ("","Error_Code")
				json_object.put_string ("","Error")
				json_object.put_string ("","What_to_do")
				json_object.put_string ("","Class")
				json_object.put_string ("","Feature")
				json_object.put_integer (-1, "Line")
				json_object.put_string ("", "Before_Line")
				after_line_string:=error_message
				json_object.put_string (after_line_string, "After_Line")
				json_object.put_string (after_line_string, "Dump")
				json_array.add (json_object)
				error_count:=1
			end
		end
end
