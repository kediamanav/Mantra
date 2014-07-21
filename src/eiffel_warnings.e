note
	description: "Summary description for {EIFFEL_WARNINGS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EIFFEL_WARNINGS
create
	make

feature -- Make
	make(a_str:STRING)
		do
			initialize (a_str)
			create json_object.make
			create_warning_list
		end

feature --Access
	warning_message:STRING
	warning_count:INTEGER
	json_array:JSON_ARRAY
	json_object:JSON_OBJECT

feature --Execution
	initialize(a_str:STRING)
		--Initialize warning message to the local string of the class
		require
			string_not_empty: a_str/=Void and not a_str.is_empty
		do
			warning_message:=a_str
			warning_message.replace_substring_all ("%N", "<br>")
		ensure
			string_set: warning_message=a_str
		end

	create_warning_list
		--Parses the warning line number, type, and description
		--Assumptions for warning messages:
			--	Message is always expected to have Warning_Code
			--	If the message does not a particular "key", then it should not have any string between it and the next key, otherwise
			--  the dump will start after the last known key, and the string in between the missing key and the last found key will not be shown
		local
			warning_code_start_index:INTEGER
			warning_start_index: INTEGER
			what_to_do_start_index: INTEGER
			class_start_index:INTEGER
			feature_start_index: INTEGER

			warning_code_last_index:INTEGER
			warning_last_index: INTEGER
			what_to_do_last_index: INTEGER
			class_last_index:INTEGER
			feature_last_index: INTEGER

			warning_code_string:STRING
			warning_string: STRING
			what_to_do_string:STRING
			class_string:STRING
			feature_string: STRING
			after_feature_string: STRING
			dump_string:STRING

			i:INTEGER
			warning_index:INTEGER
			message_end:INTEGER
			dump_index:INTEGER

			has_warning_code:BOOLEAN
			has_warning: BOOLEAN
			has_what_to_do:BOOLEAN
			has_class:BOOLEAN
			has_Feature:BOOLEAN

		do
			create json_array.make_array
			warning_count:=0

			from
				warning_index:=warning_message.substring_index ("Warning code", 1)
			until
				warning_index=0
			loop
				create json_object.make
				has_warning_code:=true
				has_warning:=true
				has_what_to_do:=true
				has_class:=true
				has_feature:=true

				--Message is always expected to have Warning_Code
				warning_code_start_index:=warning_message.substring_index ("Warning code: ", warning_index)+14
				if warning_code_start_index=14 then
					has_warning_code:=false
					dump_index:=1
					warning_code_last_index:=dump_index-1
					message_end:=warning_message.count
				else
					from
						i:=warning_code_start_index
					until
						--Change this line if the line breaker changes
						warning_message.at (i)='>'
					loop
						i:=i+1
					end
					--Change this line if the line breaker changes
					warning_code_last_index:=i
					dump_index:=warning_code_last_index+1

					message_end:=warning_message.substring_index ("-----", warning_code_start_index+1)-1
				end


				-- If the message does not have an warning, then dump it
				-- If however the message has what_to_do, class, feature after it, then the dump will start after them
				-- and the dump from warning will not be shown
				warning_start_index:=warning_message.substring_index ("Warning: ", warning_index)+9
				--If the warning does not contain a warning in the warning message's length
				if warning_start_index=9 or warning_start_index>message_end then
					has_warning:=false
					dump_index:=warning_code_last_index+1
					warning_last_index:=dump_index-1
				else
					from
						i:=warning_start_index
					until
						--Change this line if the line breaker changes
						warning_message.at (i)='>'
					loop
						i:=i+1
					end
					--Change this line if the line breaker changes
					warning_last_index:=i
					dump_index:=warning_last_index+1
				end

				-- 	If the message does not have a What_to_do, then dump it
				--  If the message has a what_to_do but no class then dump it, it should not have feature in it, later
				--  Otherwise the what_to_do will not be dumped and the dump will start from after the feature
				what_to_do_start_index:=warning_message.substring_index ("What to do: ", warning_index)+12
				--If no what_to_do exists in the warning message's length, then dump it
				if what_to_do_start_index=-12 or what_to_do_start_index>message_end then
					has_what_to_do:=false
					dump_index:=warning_last_index+1
					what_to_do_last_index:=dump_index-1
				else
					what_to_do_last_index:=warning_message.substring_index ("Class:", warning_index)-1
					--If no class exists in the warning message's length, then dump what_to_do
					if what_to_do_last_index=-1 or what_to_do_last_index>message_end then
						has_what_to_do:=false
						dump_index:=warning_last_index-12
						what_to_do_last_index:=dump_index-1
					end
				end

				class_start_index:=warning_message.substring_index ("Class: ", warning_index)+7
				--If the warning does not contain a class in the warning message's length
				if class_start_index=7 or class_start_index>message_end then
					has_class:=false
					dump_index:=what_to_do_last_index+1
					class_last_index:=dump_index-1
				else
					from
						i:=class_start_index
					until
						--Change this line if the line breaker changes
						warning_message.at (i)='>'
					loop
						i:=i+1
					end
					--Change this line if the line breaker changes
					class_last_index:=i
					dump_index:=class_last_index+1
				end

				feature_start_index:=warning_message.substring_index ("Feature: ", warning_index)+9
				--If the warning does not contain a feature in the warning message's length
				if feature_start_index=9 or feature_start_index>message_end then
					has_feature:=false
					dump_index:=class_last_index+1
					feature_last_index:=dump_index-1
				else
					from
						i:=feature_start_index
					until
						--Change this line if the line breaker changes
						warning_message.at (i)='>'
					loop
						i:=i+1
					end
					--Change this line if the line breaker changes
					feature_last_index:=i
					dump_index:=feature_last_index+1
				end

				if has_warning_code then
					warning_code_string:=warning_message.substring (warning_code_start_index, warning_code_last_index)
				else
					warning_code_string:=""
				end
				if has_warning then
					warning_string:=warning_message.substring (warning_start_index,warning_last_index)
				else
					warning_string:=""
				end

				if has_what_to_do then
					what_to_do_string:=warning_message.substring (what_to_do_start_index,what_to_do_last_index)
				else
					what_to_do_string:=""
				end

				if has_class then
					class_string:=warning_message.substring (class_start_index,class_last_index)
				else
					class_string:=""
				end

				if has_feature then
					feature_string:=warning_message.substring (feature_start_index,feature_last_index)
				else
					feature_string:=""
				end

				--The dump of the message is here
				after_feature_string:=warning_message.substring (dump_index, message_end)

				--The main dump of the warning messages
				dump_string:=warning_message.substring (warning_index, message_end)

				--Create the parsed warning
				json_object.put_string (warning_code_string,"Warning_Code")
				json_object.put_string (warning_string,"Warning")
				json_object.put_string (what_to_do_string,"What_to_do")
				json_object.put_string (class_string,"Class")
				json_object.put_string (feature_string,"Feature")
				json_object.put_string (after_feature_string, "After_Feature")
				json_object.put_string (dump_string, "Dump")

				--json_object.put_string ("True","Has_warning")
				json_array.add (json_object)

				--Updating the loop variable
				warning_index:=warning_message.substring_index ("Warning code",message_end)
				warning_count:=warning_count+1

				--Checking the parsed warning
--				io.put_string (json_array.i_th (warning_count).representation)
--				io.put_new_line
			end
			if json_array.count=0 then
				create json_object.make

				--Create the parsed warning
				json_object.put_string ("","Warning_Code")
				json_object.put_string ("","Warning")
				json_object.put_string ("","What_to_do")
				json_object.put_string ("","Class")
				json_object.put_string ("","Feature")
				after_feature_string:=warning_message
				json_object.put_string (after_feature_string, "After_Feature")
				json_object.put_string (after_feature_string, "Dump")
				json_array.add (json_object)
				warning_count:=1
			end
		end
end
