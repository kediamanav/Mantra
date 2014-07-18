note
	description: "Summary description for {HTTP_REQUEST_HANDLER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION_CONNECTION_HANDLER

inherit
	WS_REQUEST_HANDLER

create
	make

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
		local
			p_factory:PROCESS_FACTORY
			ec_process:PROCESS
			project_path:STRING
			command_line:STRING
		do
			create p_factory
			project_path:="C:\Users\Manav\Desktop\eve_server\projects\sample_90799D1A-C197-4822-BEE9-C0D076CA8562\EIFGENs\sample\W_code\"
			command_line:=project_path+"sample.exe"
			ec_process:=p_factory.process_launcher_with_command_line (command_line,"")
			ec_process.enable_launch_in_new_process_group
			ec_process.set_separate_console (true)
			ec_process.redirect_error_to_agent (agent handle_error_execution(conn,?))
			ec_process.redirect_output_to_agent (agent handle_output_execution(conn,?))
			ec_process.launch

			--Wait for the execution to finish.
			ec_process.wait_for_exit_with_timeout (10000)
			if ec_process.is_last_wait_timeout then
				ec_process.terminate
			end
			--send(conn,Text_frame,"hi there")
		end

	handle_output_execution (conn: HTTP_STREAM_SOCKET; a_message:STRING)
		do
			send (conn, Text_frame, a_message)
		end

	handle_error_execution (conn: HTTP_STREAM_SOCKET; a_message:STRING)
		do
			send (conn, Text_frame, a_message)
		end

	on_close (conn: detachable HTTP_STREAM_SOCKET)
			-- Called after the WebSocket connection is closed.
		do
			if is_verbose then
				log ("Connection closed")
			end
		end

note
	copyright: "2011-2014, Javier Velilla, Jocelyn Fiat and others"
	license: "Eiffel Forum License v2 (see http://www.eiffel.com/licensing/forum.txt)"
end
