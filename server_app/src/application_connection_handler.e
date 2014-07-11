note
	description: "Summary description for {APPLICATION_CONNECTION_HANDLER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION_CONNECTION_HANDLER

inherit
	WS_REQUEST_HANDLER

create
	make

feature --Variable
	command_line:STRING
	p_factory:PROCESS_FACTORY
	output_message:STRING
	error_message:STRING
	has_runtime_error:BOOLEAN
	runtime_timeout:BOOLEAN
	ec_process:PROCESS

feature --Setting Variables
	set_command_line(a_str:STRING)
		do
			command_line:=a_str
		end

feature -- Request processing

	process_http_request (a_socket: HTTP_STREAM_SOCKET)
			-- Process request ...
		do
			a_socket.put_string ("HTTP/1.1  501 Not Implemented%N")
		end

	on_open (a_socket: HTTP_STREAM_SOCKET)
		do
			if is_verbose then
				log ("Connecting")
			end
		end

	on_binary (conn: HTTP_STREAM_SOCKET; a_message: READABLE_STRING_8)
		do
			send (conn, Binary_frame, a_message)
		end

	on_text (conn: HTTP_STREAM_SOCKET; a_message: READABLE_STRING_8)
		do
			--send(conn,Text_frame,a_message)
			ec_process.put_string (a_message)
			ec_process.put_string ("%N")
		end

	handle_output_execution (conn: HTTP_STREAM_SOCKET; a_message:STRING)
		do
			send (conn, Text_frame, a_message)
			output_message.append(a_message)
		end

	handle_error_execution (conn: HTTP_STREAM_SOCKET; a_message:STRING)
		do
			send (conn, Text_frame, a_message)
			has_runtime_error:=true
			error_message.append (a_message)
		end

	on_close (conn: detachable HTTP_STREAM_SOCKET)
			-- Called after the WebSocket connection is closed.
		do
			if is_verbose then
				log ("Connection closed")
			end
		end

	send_from_server (conn: HTTP_STREAM_SOCKET; a_message: READABLE_STRING_8; execution_timeout:INTEGER)
		do
			create p_factory
			create output_message.make_empty
			create error_message.make_empty
			has_runtime_error:=false
			runtime_timeout:=false

			--command_line:="C:\Users\Manav\Desktop\eve_server\projects\sample_90799D1A-C197-4822-BEE9-C0D076CA8562\EIFGENs\sample\W_code\sample.exe"
			ec_process:=p_factory.process_launcher_with_command_line (command_line,"")
			ec_process.enable_launch_in_new_process_group
			ec_process.set_separate_console (true)
			ec_process.redirect_error_to_agent (agent handle_error_execution(conn,?))
			ec_process.redirect_output_to_agent (agent handle_output_execution(conn,?))
			ec_process.redirect_input_to_stream
			ec_process.launch

			--Wait for the execution to finish.
			ec_process.wait_for_exit_with_timeout (execution_timeout)
			if ec_process.is_last_wait_timeout then
				runtime_timeout:=true
				ec_process.terminate
			end
			--send(conn,Text_frame,a_message)
		end

note
	copyright: "2011-2014, Javier Velilla, Jocelyn Fiat and others"
	license: "Eiffel Forum License v2 (see http://www.eiffel.com/licensing/forum.txt)"
end
