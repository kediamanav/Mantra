note
	description: "Summary description for {EIFFEL_PARSER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EIFFEL_PARSER
create
	make

feature -- Make
	make(a_str:STRING)
		do
			initialize (a_str)
			parse_message
		end

feature --Access
	error_message:STRING
	warning_message:STRING
	compile_message:STRING
	syntax_error:STRING
	input_string:STRING
	output_message:STRING

feature --Execution
	initialize(a_str:STRING)
		--Initialize input string to the local string of the class
		require
			string_not_empty: a_str/=Void and not a_str.is_empty
		do
			input_string:=a_str
		ensure
			string_set: input_string=a_str
		end

	parse_message
		--Parses the error line number, type, and description
		local
			i:INTEGER
			compile_end_index:INTEGER
			error_index: INTEGER
			warning_index:INTEGER
			syntax_index:INTEGER
			warning_index_end:INTEGER
			error_index_end:INTEGER
			unknown_index:INTEGER
			warning_last_index:INTEGER
			output_index:INTEGER
		do
			create warning_message.make_empty
			create error_message.make_empty
			create compile_message.make_empty
			create syntax_error.make_empty
			create output_message.make_empty

			--Computing Compiler message
			compile_end_index:=input_string.substring_index ("---------------", 1)-1
			if compile_end_index=-1 then
				compile_end_index:=input_string.count
			end
			compile_message:=input_string.substring (1, compile_end_index)

			warning_index:=input_string.substring_index ("Warning code: ", compile_end_index)
			error_index:=input_string.substring_index ("Error code: ", compile_end_index)
			syntax_index:=input_string.substring_index ("Syntax error", compile_end_index)
			warning_last_index:=warning_index
			if syntax_index/=0 then
				syntax_error:=input_string.substring (syntax_index, input_string.count)
			end

			from
			until
				warning_index=0 and error_index=0
			loop
				if warning_index/=0 then
				--	warning_index_end:=
					warning_message.append (input_string.substring (warning_index, input_string.substring_index ("------", warning_index)-1))
					warning_message.append ("-------------------------------------------------------------------------------")

					--Updating Loop Variables
					warning_index:=input_string.substring_index ("Warning code: ",warning_index+1)
					if warning_index/=0 then
						warning_last_index:=warning_index
					end
				end

				if error_index/=0 then

					error_message.append (input_string.substring (error_index, input_string.substring_index ("-----", error_index)-1))
					error_message.append ("-------------------------------------------------------------------------------")

					--Updating Loop Variables
					error_index:=input_string.substring_index ("Error code: ", error_index+1)
				end
			end

			--Add the remaining compiler_message (System recompiled here)
			if not warning_message.is_empty and error_message.is_empty then
				compile_end_index:=input_string.last_index_of ('-', input_string.count)+1
				--compile_message.append (input_string.substring (compile_end_index, input_string.substring_index ("Recompiled.", compile_end_index)+10))
				warning_last_index:=input_string.substring_index ("--------------------", warning_last_index)
				from

				until
					input_string.at (warning_last_index)/='-'
				loop
					warning_last_index:=warning_last_index+1
				end
				if input_string.at (warning_last_index)='<' then
					warning_last_index:=warning_last_index+4
				end
				compile_message.append (input_string.substring (warning_last_index, input_string.count))
			end

			unknown_index:=input_string.substring_index ("--------", 1)
			if unknown_index/=0 then
				if compile_message.count/=input_string.count and error_message.is_empty and syntax_error.is_empty and warning_message.is_empty then
					error_message.append (input_string.substring (compile_message.count, input_string.count))
				end
			end

			output_message:=compile_message
			if error_message.is_empty and syntax_error.is_empty then
				output_index:=output_message.substring_index ("Recompiled.", 1)+15
				if output_index/=15 then
					output_message:=output_message.substring (output_index, output_message.count)
				end
			end

		end
end
