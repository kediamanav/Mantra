note
	description : "simple application root class"
	date        : "$Date: 2013-06-19 13:31:07 -0300 (miÃ© 19 de jun de 2013) $"
	revision    : "$Revision: 62 $"

deferred class
	APP_SERVICE

inherit
	WSF_LAUNCHABLE_SERVICE
		redefine
			initialize
		end

	WSF_ROUTED_SERVICE

	WSF_URI_HELPER_FOR_ROUTED_SERVICE

	WSF_URI_TEMPLATE_HELPER_FOR_ROUTED_SERVICE

	ARGUMENTS
		rename
			command_line as cmd_line
		end

feature {NONE} -- Initialization

	initialize
			-- Initialize current service.
		local
--			thread_timeout:BOOLEAN
		do
			Precursor
			initialize_router
			create file_location.make_empty
			create class_name.make_empty
			create p_factory
			create project_path.make_empty
			create project_name.make_empty
			create command_line.make_empty
			create compile_message.make_empty
			create error_message.make_empty
			create output_message.make_empty
			create warning_message.make_empty
			create syntax_message.make_empty
			create dump_message.make_empty

--			create server_thread.make_with_port(9999)
--			server_thread.launch

			--Initialize the timeouts from file
			initialize_timeouts_from_file

			--initialize timeout from arguments
			--initialize_timeouts_from_arguments

--			create table.make
--			read_table_from_file

--			--Remove the existing projects if they are older than project_duration
--			create my_thread.make_with_values (periodic_time, project_duration, table, wait_time)
--			my_thread.launch
--			--When the server is started, it waits for initial_sleep_time seconds, for the cleanup to take place
--			thread_timeout:=my_thread.join_with_timeout (initial_sleep_time.as_natural_64)
		end

	setup_router
			-- Setup `router'
		local
			fhdl: WSF_FILE_SYSTEM_HANDLER
			doc: WSF_ROUTER_SELF_DOCUMENTATION_HANDLER
		do

			create doc.make (router)
			router.handle_with_request_methods ("/api/doc", doc, router.methods_GET)

			--Mapping my URI's for functions
			map_uri_template_agent_with_request_methods ("/compile", agent get_compilation_result, router.methods_post)
			map_uri_template_agent_with_request_methods ("/run", agent get_execution_result, router.methods_GET)
			map_uri_template_agent_with_request_methods ("/interfaceView", agent get_interface_view, router.methods_GET)
			map_uri_template_agent_with_request_methods ("/flatView", agent get_flat_view, router.methods_GET)
			map_uri_template_agent_with_request_methods ("/contractView", agent get_contract_view, router.methods_GET)
			map_uri_template_agent_with_request_methods ("/classDescendants", agent get_class_descendants, router.methods_GET)
			map_uri_template_agent_with_request_methods ("/classAncestors", agent get_class_ancestors, router.methods_GET)
			map_uri_template_agent_with_request_methods ("/classClients", agent get_class_clients, router.methods_GET)
			map_uri_template_agent_with_request_methods ("/classSuppliers", agent get_class_suppliers, router.methods_GET)
			map_uri_template_agent_with_request_methods ("/featureCallers", agent get_feature_callers, router.methods_GET)
			map_uri_template_agent_with_request_methods ("/commandLine", agent get_user_command_line, router.methods_GET)

			--Setting the home page
			create fhdl.make_hidden ("www")
			fhdl.set_directory_index (<<"index.html">>)
			router.handle_with_request_methods ("", fhdl, router.methods_GET)
		end

feature --Access
	execution_timeout:INTEGER
	compilation_timeout:INTEGER
	file_location: STRING
	class_name: STRING
	p_factory: PROCESS_FACTORY
	command_line: STRING
	project_name:STRING
	project_path:STRING
	runtime_text:STRING
	compile_message: STRING
	output_message: STRING
	error_message: STRING
	warning_message :STRING
	syntax_message:STRING
	dump_message:STRING
	has_error: BOOLEAN
	has_warning: BOOLEAN
	has_syntax_error:BOOLEAN
	has_runtime_error:BOOLEAN
	has_class_error:BOOLEAN
	has_feature_error:BOOLEAN
	needs_target:BOOLEAN
	target:STRING
--	my_thread: MY_THREAD
--	periodic_time:INTEGER
--	initial_sleep_time:INTEGER
--	project_duration:INTEGER
--	pre_project_duration:INTEGER
--	wait_time:INTEGER_64
--	table:JSON_OBJECT
--	table_string:STRING
	project_timeout:BOOLEAN
	compile_timeout:BOOLEAN
	runtime_timeout:BOOLEAN
--	server_thread:SERVER_THREAD
--	app_handler:APPLICATION_CONNECTION_HANDLER
	--Change this address
	--fixed_project_path:STRING = "C:/Users/Manav/Desktop/eve_server/projects/"
	fixed_project_path:STRING = "./projects/"

feature -- Execution

	--Function that compiles the file
	get_compilation_result (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			res_string:STRING
			parser:JSON_PARSER
			json_object:JSON_OBJECT
			json_array: JSON_ARRAY
			header:HTTP_HEADER
			clean_compile:BOOLEAN
			path:STRING
			id:STRING
			clean_compile_path:STRING
			compilation_succeeded: BOOLEAN
			file_array:JSON_ARRAY
			file_parser:JSON_PARSER
			input_string:STRING
		do
			--Initializing variables
			create header.make
			create res_string.make_empty
			create json_array.make_array
			create json_object.make
			create compile_message.make_empty
			create error_message.make_empty
			create warning_message.make_empty
			create output_message.make_empty
			create syntax_message.make_empty
			create dump_message.make_empty
			create target.make_empty
			create input_string.make_empty

			--Settting errors and warnings to false
			has_error:=false
			has_warning:=false
			has_syntax_error:=false
			needs_target:=false
			clean_compile:=false
			compilation_succeeded:=true
			project_timeout:=false
			compile_timeout:=false
			runtime_timeout:=false

			req.read_input_data_into (input_string)
			create parser.make_parser (input_string)

			if attached {JSON_OBJECT} parser.parse as jv and parser.is_parsed then
				clean_compile:=send_json_boolean_value (jv, "clean")
				id:=send_json_value (jv, "id")
				path:=send_json_value (jv, "path")
				if not send_json_value (jv, "target").is_empty then
					target:=send_json_value (jv, "target")
				end
				create file_parser.make_parser(send_json_value (jv, "files"))
				if attached {JSON_ARRAY} file_parser.parse as f_array and file_parser.is_parsed then
					file_array:=f_array
					id:=create_file_with_content(file_array,id)
					clean_compile:=true
				end
			end

			--User is using a new project, so change the path setting accordingly
			if not path.is_empty then
				id:=set_project_path(path,id)
				clean_compile:=true
			else
				--User is using an old path setting
				if id.is_empty then
					--Give error
				end
				--Set the project_path from id
				create project_path.make_empty
				create project_name.make_empty
				set_project_path_from_id(id)

				--Will be true only if the id given is not valid
				if project_path.is_empty then
					--Give error
					project_timeout:=true
				end
			end

			if clean_compile then
				command_line:="ec -clean -config "+ project_name
			else
				command_line:="ec -config "+ project_name+ " -c_compile"
			end

			--If target is to also to be provided, then Specifying the target here
			if not target.is_empty then
				command_line.append (" -target "+target)
			end

			--Gives the main option to clean compile a project
			if project_timeout=false then
				compile_helper(project_path,id)
			end

			--Now do finish_freezing with it if it does not have errors and if the clean_compile option is true
			if has_error=false and has_syntax_error=false and clean_compile and project_timeout=false then
				command_line:="finish_freezing"
				clean_compile_path:=project_path+"/EIFGENs/"+project_name+"/W_code"
				clean_compile_path.replace_substring_all (".ecf", "")
				if needs_target=false then
					compile_helper (clean_compile_path,id)
				end
			end

			--If the project no longer exists, then return a gone message
			if project_timeout=true then
				res.set_status_code ({HTTP_STATUS_CODE}.gone)
			else
				--Setting the compile result,output message,error list and warning list
				json_object.put_string (compile_message, "Compile_Message")
				json_object.put_string (output_message, "Output_Message")
				if not syntax_message.is_empty then
					error_message:=syntax_message
				end
				json_object.put_string (error_message, "Error_Message")
				if not error_message.is_empty then
					json_object.put_boolean (true, "Has_Compilation_Error")
					compilation_succeeded:=false
				else
					json_object.put_boolean (false, "Has_Compilation_Error")
				end
				--json_object.put_string (syntax_message, "Syntax_Message")
				json_object.put_string (warning_message, "Warning_Message")
				if not warning_message.is_empty then
					json_object.put_boolean (true, "Has_Warning")
				else
					json_object.put_boolean (false, "Has_Warning")
				end
				json_object.put_boolean (needs_target, "Needs_Target")
				json_object.put_string (dump_message, "Dump")
				json_object.put (get_error_list, "Errors")
				json_object.put (get_warning_list, "Warnings")
				json_object.put (get_target_list, "Targets")

				--If there was no compilation timeout
				if compile_timeout=false then
					res.set_status_code ({HTTP_STATUS_CODE}.ok)
					if needs_target then
						compilation_succeeded:=false
					end
				else
					compilation_succeeded:=false
					res.set_status_code ({HTTP_STATUS_CODE}.gateway_timeout)
				end

				json_object.put_boolean (compilation_succeeded, "Compilation_Succeeded")

				--Add to JSON array
				json_array.add (json_object)
				res_string.append (json_array.representation)
				res_string.replace_substring_all ("<br>", "\n")
			end

			--Adding the response header
			header.add_header_key_value ("id", id)
			res.put_header_text (header.string)
			res.put_string (res_string)
		end


	--Function that first compiles and then runs the program
	get_execution_result (req: WSF_REQUEST; res: WSF_RESPONSE)
--		require
--			project_path_empty: project_path /= Void and not project_path.is_empty
--			project_name_empty: project_path /= Void and not project_name.is_empty
--			target_set: needs_target=false
		local
			res_string:STRING
			json_object:JSON_OBJECT
			json_array:JSON_ARRAY
			compile_array:JSON_ARRAY
			runtime_array:JSON_ARRAY
			header:HTTP_HEADER
			id:STRING
			execution_succeeded: BOOLEAN
		do
			--Prepare the response object
			create res_string.make_empty
			create json_array.make_array
			create json_object.make
			create header.make
			create compile_message.make_empty
			create error_message.make_empty
			create warning_message.make_empty
			create output_message.make_empty
			create syntax_message.make_empty
			create dump_message.make_empty
			create runtime_text.make_empty

			--Settting errors and warnings to false
			has_error:=false
			has_warning:=false
			has_syntax_error:=false
			has_runtime_error:=false
			runtime_timeout:=false
			compile_timeout:=false
			project_timeout:=false
			execution_succeeded:=true

			--Extract the unique user id
			id:=extract_req_parameter(req,"id")
			if id.is_empty then
				--Give error, as it should not be empty
			else
				--Set the project_path from id
				create project_path.make_empty
				create project_name.make_empty
				set_project_path_from_id(id)

				--Will be true only if the id given is not valid
				if project_path.is_empty then
					--Give error
					project_timeout:=true
				end
			end

			--Do compilation here and see the compile results and then send for run
			--If the project has not been compiled till now compile it or else don't compile it
			command_line:="ec -config "+ project_name+ " -c_compile"

			--If target is to also to be provided, then specify it here
			if not target.is_empty then
				command_line.append (" -target "+target)
			end

			if project_timeout=false then
				compile_helper(project_path,id)
			end

			--Setting the JSON resposne object
			if has_error=false and has_syntax_error=false and project_timeout=false then
				--Run the project
				execution_helper(id)
			end

			--If the project no longer exists, then return a gone message
			if project_timeout=true then
				res.set_status_code ({HTTP_STATUS_CODE}.gone)
			else
				json_object.put_string (output_message, "Execution_Output")
				if not syntax_message.is_empty then
					error_message:=syntax_message
				end
				json_object.put_string (error_message, "Error_Message")

				json_object.put_string (warning_message, "Warning_Message")
				if not warning_message.is_empty then
					json_object.put_boolean (true, "Has_Warning")
				else
					json_object.put_boolean (false, "Has_Warning")
				end

				compile_array:=get_error_list
				json_object.put (compile_array, "Compile_Errors")
				if compile_array/=Void then
					json_object.put_boolean (true, "Has_Compilation_Error")
					execution_succeeded:=false
				else
					json_object.put_boolean (false, "Has_Compilation_Error")
				end

				json_object.put (get_warning_list, "Warnings")


				runtime_array:=get_runtime_error_list
				json_object.put_string (runtime_text, "Runtime_Text")

				json_object.put (runtime_array, "Runtime_Errors")
				if runtime_array/=Void then
					json_object.put_boolean (true, "Has_Runtime_Error")
					execution_succeeded:=false
				else
					json_object.put_boolean (false, "Has_Runtime_Error")
				end

				if runtime_timeout=false and compile_timeout=false then
					res.set_status_code ({HTTP_STATUS_CODE}.ok)
				else
					res.set_status_code ({HTTP_STATUS_CODE}.gateway_timeout)
					execution_succeeded:=false
				end

				json_object.put_boolean (execution_succeeded, "Execution_Succeeded")

				json_array.add (json_object)
				res_string.append (json_array.representation)
				res_string.replace_substring_all ("<br>", "\n")
			end

			--Set the response header with the id value
			header.add_header_key_value ("id", id)
			res.put_header_text (header.string)
			res.put_string (res_string)
		end

	--Function that returns the interface view of a class
	get_interface_view (req: WSF_REQUEST; res: WSF_RESPONSE)
		require
--			project_path_empty: project_path /= Void and not project_path.is_empty
--			project_name_empty: project_path /= Void and not project_name.is_empty
--			target_set: needs_target=false
		local
			res_string:STRING
			json_object:JSON_OBJECT
			header:HTTP_HEADER
			id:STRING
			class_string:STRING
		do
			--Find interface_view for class name
			create header.make
			--Extract the unique user id
			id:=extract_req_parameter(req,"id")
			if id.is_empty then
				--Give error, as it should not be empty
			else
				--Set the project_path from id
				create project_path.make_empty
				create project_name.make_empty
				set_project_path_from_id(id)

				--Will be true only if the id given is not valid
				if project_path.is_empty then
					--Give error
					project_timeout:=true
				end
			end

			--Extract the class
			class_string:=extract_req_parameter(req,"class")
			if class_string.is_empty then
				--Give error, as it should not be empty
			end

			create res_string.make_from_string("[{%"result%" : %"")
			res_string.append("Interface View is here%"}]")
			header.add_header_key_value ("id", id)
			res.put_header_text (header.string)
			res.put_string (res_string)
		end

	--Function that returns the flat view of a class
	get_flat_view (req: WSF_REQUEST; res: WSF_RESPONSE)
--		require
--			project_path_empty: project_path /= Void and not project_path.is_empty
--			project_name_empty: project_path /= Void and not project_name.is_empty
--			target_set: needs_target=false
		local
			res_string:STRING
			json_object:JSON_OBJECT
			header:HTTP_HEADER
			id:STRING
			class_string:STRING
			json_array:JSON_ARRAY
		do
			--find flat_view for class_name
			create header.make
			create res_string.make_empty
			create json_array.make_array
			create json_object.make
			create error_message.make_empty
			create output_message.make_empty
			create warning_message.make_empty
			create dump_message.make_empty
			create syntax_message.make_empty
			create compile_message.make_empty

			--Setting values
			has_class_error:=false
			has_error:=false
			has_syntax_error:=false
			has_warning:=false
			compile_timeout:=false
			project_timeout:=false

			--Extract the unique user id
			id:=extract_req_parameter(req,"id")
			if id.is_empty then
				--Give error, as it should not be empty
			else
				--Set the project_path from id
				create project_path.make_empty
				create project_name.make_empty
				set_project_path_from_id(id)

				--Will be true only if the id given is not valid
				if project_path.is_empty then
					--Give error
					project_timeout:=true
				end
			end

			--Extract the class
			class_string:=extract_req_parameter(req,"class")
			if class_string.is_empty then
				--Give error, as it should not be empty
			end

			--Setting the command line for the flat view
			command_line:="ec -flat "+class_string+" -config "+ project_name

			--If target is to also to be provided, then specifying the target here
			if not target.is_empty then
				command_line.append (" -target "+target)
			end

			if project_timeout=false then
				class_functions_helper (class_string,id)
			end

			--If the project no longer exists, then return a gone message
			if project_timeout=true then
				res.set_status_code ({HTTP_STATUS_CODE}.gone)
			else
				json_object.put_string (output_message, "Flat_View")
				if not syntax_message.is_empty then
					error_message:=syntax_message
				end
				json_object.put_string (error_message, "Error_Message")
				if not error_message.is_empty and has_class_error=false then
					json_object.put_boolean (true, "Has_Compilation_Error")
					json_object.put_boolean (false, "Has_Flat_View")
				else
					json_object.put_boolean (false, "Has_Compilation_Error")
					json_object.put_boolean (not has_class_error, "Has_Flat_View")
				end
				--json_object.put_string (syntax_message, "Syntax_Message")
				json_object.put_string (warning_message, "Warning_Message")

				if not warning_message.is_empty then
					json_object.put_boolean (true, "Has_Warning")
				else
					json_object.put_boolean (false, "Has_Warning")
				end
				json_object.put_string (dump_message, "Dump")
				json_object.put (get_error_list, "Errors")
				json_object.put (get_warning_list, "Warnings")

				if compile_timeout=false then
					res.set_status_code ({HTTP_STATUS_CODE}.ok)
				else
					res.set_status_code ({HTTP_STATUS_CODE}.gateway_timeout)
					json_object.replace_with_boolean (false, "Has_Flat_View")
				end

				json_array.add (json_object)

				--Prepare the response string
				res_string.append (json_array.representation)
				res_string.replace_substring_all ("<br>", "\n")
			end

			--Set the response header with the id value
			header.add_header_key_value ("id", id)
			res.put_header_text (header.string)
			res.put_string (res_string)
		end

	--Function that returns the contract view of a class
	get_contract_view (req: WSF_REQUEST; res: WSF_RESPONSE)
--		require
--			project_path_empty: project_path /= Void and not project_path.is_empty
--			project_name_empty: project_path /= Void and not project_name.is_empty
--			target_set: needs_target=false
		local
			res_string:STRING
			json_object:JSON_OBJECT
			header:HTTP_HEADER
			id:STRING
			class_string:STRING
			json_array:JSON_ARRAY
		do
			--Find contract view for class_name here
			create header.make
			create res_string.make_empty
			create json_array.make_array
			create json_object.make
			create error_message.make_empty
			create output_message.make_empty
			create warning_message.make_empty
			create dump_message.make_empty
			create syntax_message.make_empty
			create compile_message.make_empty

			--Setting values
			has_class_error:=false
			has_error:=false
			has_syntax_error:=false
			has_warning:=false
			compile_timeout:=false
			project_timeout:=false

			--Extract the unique user id
			id:=extract_req_parameter(req,"id")
			if id.is_empty then
				--Give error, as it should not be empty
			else
				--Set the project_path from id
				create project_path.make_empty
				create project_name.make_empty
				set_project_path_from_id(id)

				--Will be true only if the id given is not valid
				if project_path.is_empty then
					--Give error
					project_timeout:=true
				end
			end

			--Extract the class
			class_string:=extract_req_parameter(req,"class")
			if class_string.is_empty then
				--Give error, as it should not be empty
			end

			--Setting the command line for the contract view
			command_line:="ec -short "+class_string+" -config "+ project_name

			--If target is to also to be provided, then Specifying the target here
			if not target.is_empty then
				command_line.append (" -target "+target)
			end

			if project_timeout=false then
				class_functions_helper (class_string,id)
			end

			--If the project no longer exists, then return a gone message
			if project_timeout=true then
				res.set_status_code ({HTTP_STATUS_CODE}.gone)
			else
				json_object.put_string (output_message, "Contract_View")
				if not syntax_message.is_empty then
					error_message:=syntax_message
				end
				json_object.put_string (error_message, "Error_Message")
				if not error_message.is_empty and has_class_error=false then
					json_object.put_boolean (true, "Has_Compilation_Error")
					json_object.put_boolean (false, "Has_Contract_View")
				else
					json_object.put_boolean (false, "Has_Compilation_Error")
					json_object.put_boolean (not has_class_error, "Has_Contract_View")
				end
				--json_object.put_string (syntax_message, "Syntax_Message")
				json_object.put_string (warning_message, "Warning_Message")

				if not warning_message.is_empty then
					json_object.put_boolean (true, "Has_Warning")
				else
					json_object.put_boolean (false, "Has_Warning")
				end
				json_object.put_string (dump_message, "Dump")
				json_object.put (get_error_list, "Errors")
				json_object.put (get_warning_list, "Warnings")

				if compile_timeout=false then
					res.set_status_code ({HTTP_STATUS_CODE}.ok)
				else
					res.set_status_code ({HTTP_STATUS_CODE}.gateway_timeout)
					json_object.replace_with_boolean (false, "Has_Contract_View")
				end

				json_array.add (json_object)

				--Prepare the response string
				res_string.append (json_array.representation)
				res_string.replace_substring_all ("<br>", "\n")
			end

			--Set the response header with the id value
			header.add_header_key_value ("id", id)
			res.put_header_text (header.string)
			res.put_string (res_string)
		end

	--Function that returns the class Descendants of a class
	get_class_descendants (req: WSF_REQUEST; res: WSF_RESPONSE)
--		require
--			project_path_empty: project_path /= Void and not project_path.is_empty
--			project_name_empty: project_path /= Void and not project_name.is_empty
--			target_set: needs_target=false
		local
			res_string:STRING
			json_object:JSON_OBJECT
			header:HTTP_HEADER
			id:STRING
			class_string:STRING
			json_array:JSON_ARRAY
		do
			--Find class descendants for class_name here
			create header.make
			create res_string.make_empty
			create json_array.make_array
			create json_object.make
			create error_message.make_empty
			create output_message.make_empty
			create warning_message.make_empty
			create dump_message.make_empty
			create syntax_message.make_empty
			create compile_message.make_empty

			--Setting values
			has_class_error:=false
			has_error:=false
			has_syntax_error:=false
			has_warning:=false
			compile_timeout:=false
			project_timeout:=false

			--Extract the unique user id
			id:=extract_req_parameter(req,"id")
			if id.is_empty then
				--Give error, as it should not be empty
			else
				--Set the project_path from id
				create project_path.make_empty
				create project_name.make_empty
				set_project_path_from_id(id)

				--Will be true only if the id given is not valid
				if project_path.is_empty then
					--Give error
					project_timeout:=true
				end
			end

			--Extract the class
			class_string:=extract_req_parameter(req,"class")
			if class_string.is_empty then
				--Give error, as it should not be empty
			end

			--Setting the command line for the class descendants
			command_line:="ec -descendants "+class_string+" -config "+ project_name

			--If target is to also to be provided, then Specifying the target here
			if not target.is_empty then
				command_line.append (" -target "+target)
			end

			if project_timeout=false then
				class_functions_helper (class_string,id)
			end

			--If the project no longer exists, then return a gone message
			if project_timeout=true then
				res.set_status_code ({HTTP_STATUS_CODE}.gone)
			else
				json_object.put_string (output_message, "Class_Descendants_Dump")
				if not syntax_message.is_empty then
					error_message:=syntax_message
				end
				json_object.put_string (error_message, "Error_Message")
				if not error_message.is_empty and has_class_error=false then
					json_object.put_boolean (true, "Has_Compilation_Error")
					json_object.put_boolean (false, "Has_Descendants")
				else
					json_object.put_boolean (false, "Has_Compilation_Error")
					json_object.put_boolean (not has_class_error, "Has_Descendants")
				end
				--json_object.put_string (syntax_message, "Syntax_Message")
				json_object.put_string (warning_message, "Warning_Message")

				if not warning_message.is_empty then
					json_object.put_boolean (true, "Has_Warning")
				else
					json_object.put_boolean (false, "Has_Warning")
				end
				json_object.put_string (dump_message, "Dump")
				json_object.put (get_error_list, "Errors")
				json_object.put (get_warning_list, "Warnings")

				--Parse the descendants
				if not has_error and not has_syntax_error then
					class_string.to_upper
					if not error_message.has_substring (class_string+ " is not in the universe") then
						--Parse the descendants here
						--The 1 in the argument indicates we are parsing descendants
						json_object.put (get_archi_list(class_string,1), "Descendants")
					else
						json_object.put (create {JSON_ARRAY}.make_array, "Descendants")
					end
				end

				if compile_timeout=false then
					res.set_status_code ({HTTP_STATUS_CODE}.ok)
				else
					res.set_status_code ({HTTP_STATUS_CODE}.gateway_timeout)
					json_object.replace_with_boolean (false, "Has_Descendants")
				end

				json_array.add (json_object)

				--Prepare the response string
				res_string.append (json_array.representation)
				res_string.replace_substring_all ("<br>", "\n")
			end

			--Set the response header with the id value
			header.add_header_key_value ("id", id)
			res.put_header_text (header.string)
			res.put_string (res_string)
		end

	--Function that returns the class Ancestors of a class
	get_class_ancestors (req: WSF_REQUEST; res: WSF_RESPONSE)
--		require
--			project_path_empty: project_path /= Void and not project_path.is_empty
--			project_name_empty: project_path /= Void and not project_name.is_empty
--			target_set: needs_target=false
		local
			res_string:STRING
			json_object:JSON_OBJECT
			header:HTTP_HEADER
			id:STRING
			class_string:STRING
			json_array:JSON_ARRAY
		do
			--Find class ancestors for class_name here
			create header.make
			create res_string.make_empty
			create json_array.make_array
			create json_object.make
			create error_message.make_empty
			create output_message.make_empty
			create warning_message.make_empty
			create dump_message.make_empty
			create syntax_message.make_empty
			create compile_message.make_empty

			--Setting values
			has_class_error:=false
			has_error:=false
			has_syntax_error:=false
			has_warning:=false
			compile_timeout:=false
			project_timeout:=false

			--Extract the unique user id
			id:=extract_req_parameter(req,"id")
			if id.is_empty then
				--Give error, as it should not be empty
			else
				--Set the project_path from id
				create project_path.make_empty
				create project_name.make_empty
				set_project_path_from_id(id)

				--Will be true only if the id given is not valid
				if project_path.is_empty then
					--Give error
					project_timeout:=true
				end
			end

			--Extract the class
			class_string:=extract_req_parameter(req,"class")
			if class_string.is_empty then
				--Give error, as it should not be empty
			end

			--Setting the command line for the class ancestors
			command_line:="ec -ancestors "+class_string+" -config "+ project_name

			--If target is to also to be provided, then Specifying the target here
			if not target.is_empty then
				command_line.append (" -target "+target)
			end

			if project_timeout=false then
				class_functions_helper (class_string,id)
			end

			--If the project no longer exists, then return a gone message
			if project_timeout=true then
				res.set_status_code ({HTTP_STATUS_CODE}.gone)
			else
				json_object.put_string (output_message, "Class_Ancestors_Dump")
				if not syntax_message.is_empty then
					error_message:=syntax_message
				end
				json_object.put_string (error_message, "Error_Message")
				if not error_message.is_empty and has_class_error=false then
					json_object.put_boolean (true, "Has_Compilation_Error")
					json_object.put_boolean (false, "Has_Ancestors")
				else
					json_object.put_boolean (false, "Has_Compilation_Error")
					json_object.put_boolean (not has_class_error, "Has_Ancestors")
				end
				--json_object.put_string (syntax_message, "Syntax_Message")
				json_object.put_string (warning_message, "Warning_Message")

				if not warning_message.is_empty then
					json_object.put_boolean (true, "Has_Warning")
				else
					json_object.put_boolean (false, "Has_Warning")
				end
				json_object.put_string (dump_message, "Dump")
				json_object.put (get_error_list, "Errors")
				json_object.put (get_warning_list, "Warnings")

				--Parse the ancestors
				if not has_error and not has_syntax_error then
					class_string.to_upper
					if not error_message.has_substring (class_string+ " is not in the universe") then
						--Parse the ancestors here
						--The 2 in the argument indicates we are parsing ancestors
						json_object.put (get_archi_list(class_string,2), "Ancestors")
					else
						json_object.put (create {JSON_ARRAY}.make_array, "Ancestors")
					end
				end

				if compile_timeout=false then
					res.set_status_code ({HTTP_STATUS_CODE}.ok)
				else
					res.set_status_code ({HTTP_STATUS_CODE}.gateway_timeout)
					json_object.replace_with_boolean (false, "Has_Ancestors")
				end

				json_array.add (json_object)

				--Prepare the response string
				res_string.append (json_array.representation)
				res_string.replace_substring_all ("<br>", "\n")
			end

			--Set the response header with the id value
			header.add_header_key_value ("id", id)
			res.put_header_text (header.string)
			res.put_string (res_string)
		end

	--Function that returns the clients of a class
	get_class_clients (req: WSF_REQUEST; res: WSF_RESPONSE)
--		require
--			project_path_empty: project_path /= Void and not project_path.is_empty
--			project_name_empty: project_path /= Void and not project_name.is_empty
--			target_set: needs_target=false
		local
			res_string:STRING
			json_object:JSON_OBJECT
			header:HTTP_HEADER
			id:STRING
			class_string:STRING
			json_array:JSON_ARRAY
		do
			--Find clients for class_name here
			create header.make
			create res_string.make_empty
			create json_array.make_array
			create json_object.make
			create error_message.make_empty
			create output_message.make_empty
			create warning_message.make_empty
			create dump_message.make_empty
			create syntax_message.make_empty
			create compile_message.make_empty

			--Setting values
			has_class_error:=false
			has_error:=false
			has_syntax_error:=false
			has_warning:=false
			compile_timeout:=false
			project_timeout:=false

			--Extract the unique user id
			id:=extract_req_parameter(req,"id")
			if id.is_empty then
				--Give error, as it should not be empty
			else
				--Set the project_path from id
				create project_path.make_empty
				create project_name.make_empty
				set_project_path_from_id(id)

				--Will be true only if the id given is not valid
				if project_path.is_empty then
					--Give error
					project_timeout:=true
				end
			end

			--Extract the class
			class_string:=extract_req_parameter(req,"class")
			if class_string.is_empty then
				--Give error, as it should not be empty
			end

			--Setting the command line for the class clients
			command_line:="ec -clients "+class_string+" -config "+ project_name

			--If target is to also to be provided, then Specifying the target here
			if not target.is_empty then
				command_line.append (" -target "+target)
			end

			if project_timeout=false then
				class_functions_helper (class_string,id)
			end

			--If the project no longer exists, then return a gone message
			if project_timeout=true then
				res.set_status_code ({HTTP_STATUS_CODE}.gone)
			else
				json_object.put_string (output_message, "Class_Clients_Dump")
				if not syntax_message.is_empty then
					error_message:=syntax_message
				end
				json_object.put_string (error_message, "Error_Message")
				if not error_message.is_empty and has_class_error=false then
					json_object.put_boolean (true, "Has_Compilation_Error")
					json_object.put_boolean (false, "Has_Clients")
				else
					json_object.put_boolean (false, "Has_Compilation_Error")
					json_object.put_boolean (not has_class_error, "Has_Clients")
				end
				--json_object.put_string (syntax_message, "Syntax_Message")
				json_object.put_string (warning_message, "Warning_Message")

				if not warning_message.is_empty then
					json_object.put_boolean (true, "Has_Warning")
				else
					json_object.put_boolean (false, "Has_Warning")
				end
				json_object.put_string (dump_message, "Dump")
				json_object.put (get_error_list, "Errors")
				json_object.put (get_warning_list, "Warnings")

				--Parse the clients
				if not has_error and not has_syntax_error then
					class_string.to_upper
					if not error_message.has_substring (class_string+ " is not in the universe") then
						--Parse the clients here
						json_object.put (get_client_supplier_list(class_string), "Clients")
					else
						json_object.put (create {JSON_ARRAY}.make_array, "Clients")
					end
				end

				if compile_timeout=false then
					res.set_status_code ({HTTP_STATUS_CODE}.ok)
				else
					res.set_status_code ({HTTP_STATUS_CODE}.gateway_timeout)
					json_object.replace_with_boolean (false, "Has_Clients")
				end

				json_array.add (json_object)

				--Prepare the response string
				res_string.append (json_array.representation)
				res_string.replace_substring_all ("<br>", "\n")
			end

			--Set the response header with the id value
			header.add_header_key_value ("id", id)
			res.put_header_text (header.string)
			res.put_string (res_string)
		end

		--Function that returns the suppliers of a class
		get_class_suppliers (req: WSF_REQUEST; res: WSF_RESPONSE)
--			require
--				project_path_empty: project_path /= Void and not project_path.is_empty
--				project_name_empty: project_path /= Void and not project_name.is_empty
--				target_set: needs_target=false
			local
				res_string:STRING
				json_object:JSON_OBJECT
				header:HTTP_HEADER
				id:STRING
				class_string:STRING
				json_array:JSON_ARRAY
			do
				--Find suppliers for class_name here
				create header.make
				create res_string.make_empty
				create json_array.make_array
				create json_object.make
				create error_message.make_empty
				create output_message.make_empty
				create warning_message.make_empty
				create dump_message.make_empty
				create syntax_message.make_empty
				create compile_message.make_empty

				--Setting values
				has_class_error:=false
				has_error:=false
				has_syntax_error:=false
				has_warning:=false
				compile_timeout:=false
				project_timeout:=false

				--Extract the unique user id
				id:=extract_req_parameter(req,"id")
				if id.is_empty then
					--Give error, as it should not be empty
				else
					--Set the project_path from id
					create project_path.make_empty
					create project_name.make_empty
					set_project_path_from_id(id)

					--Will be true only if the id given is not valid
					if project_path.is_empty then
						--Give error
						project_timeout:=true
					end
				end

				--Extract the class
				class_string:=extract_req_parameter(req,"class")
				if class_string.is_empty then
					--Give error, as it should not be empty
				end

				--Setting the command line for the class suppliers
				command_line:="ec -suppliers "+class_string+" -config "+ project_name

				--If target is to also to be provided, then Specifying the target here
				if not target.is_empty then
					command_line.append (" -target "+target)
				end

				if project_timeout=false then
					class_functions_helper (class_string,id)
				end

				--If the project no longer exists, then return a gone message
				if project_timeout=true then
					res.set_status_code ({HTTP_STATUS_CODE}.gone)
				else
					json_object.put_string (output_message, "Class_Suppliers_Dump")
					if not syntax_message.is_empty then
						error_message:=syntax_message
					end
					json_object.put_string (error_message, "Error_Message")
					if not error_message.is_empty and has_class_error=false then
						json_object.put_boolean (true, "Has_Compilation_Error")
						json_object.put_boolean (false, "Has_Suppliers")
					else
						json_object.put_boolean (false, "Has_Compilation_Error")
						json_object.put_boolean (not has_class_error, "Has_Suppliers")
					end
					--json_object.put_string (syntax_message, "Syntax_Message")
					json_object.put_string (warning_message, "Warning_Message")

					if not warning_message.is_empty then
						json_object.put_boolean (true, "Has_Warning")
					else
						json_object.put_boolean (false, "Has_Warning")
					end
					json_object.put_string (dump_message, "Dump")
					json_object.put (get_error_list, "Errors")
					json_object.put (get_warning_list, "Warnings")

					--Parse the suppliers
					if not has_error and not has_syntax_error then
						class_string.to_upper
						if not error_message.has_substring (class_string+ " is not in the universe") then
							--Parse the suppliers here
							json_object.put (get_client_supplier_list(class_string), "Suppliers")
						else
							json_object.put (create {JSON_ARRAY}.make_array, "Suppliers")
						end
					end

					if compile_timeout=false then
						res.set_status_code ({HTTP_STATUS_CODE}.ok)
					else
						res.set_status_code ({HTTP_STATUS_CODE}.gateway_timeout)
						json_object.replace_with_boolean (false, "Has_Suppliers")
					end
					json_array.add (json_object)

					--Prepare the response string
					res_string.append (json_array.representation)
					res_string.replace_substring_all ("<br>", "\n")
				end

				--Set the response header with the id value
				header.add_header_key_value ("id", id)
				res.put_header_text (header.string)
				res.put_string (res_string)
			end

		--Function that returns the callers of a feature of a class
		get_feature_callers (req: WSF_REQUEST; res: WSF_RESPONSE)
--			require
--				project_path_empty: project_path /= Void and not project_path.is_empty
--				project_name_empty: project_path /= Void and not project_name.is_empty
--				target_set: needs_target=false
			local
				res_string:STRING
				json_object:JSON_OBJECT
				header:HTTP_HEADER
				id:STRING
				class_string:STRING
				feature_string:STRING
				json_array:JSON_ARRAY
			do
				--Find callers for the feature
				create header.make
				create res_string.make_empty
				create json_array.make_array
				create json_object.make
				create error_message.make_empty
				create output_message.make_empty
				create warning_message.make_empty
				create dump_message.make_empty
				create syntax_message.make_empty
				create compile_message.make_empty

				--Setting values
				has_feature_error:=false
				has_error:=false
				has_syntax_error:=false
				has_warning:=false
				compile_timeout:=false
				project_timeout:=false

				--Extract the unique user id
				id:=extract_req_parameter(req,"id")
				if id.is_empty then
					--Give error, as it should not be empty
				else
					--Set the project_path from id
					create project_path.make_empty
					create project_name.make_empty
					set_project_path_from_id(id)

					--Will be true only if the id given is not valid
					if project_path.is_empty then
						--Give error
						project_timeout:=true
					end
				end

				--Extract the class
				class_string:=extract_req_parameter(req,"class")
				if class_string.is_empty then
					--Give error, as it should not be empty
				end

				--Extract the feature
				feature_string:=extract_req_parameter(req,"feature")
				if feature_string.is_empty then
					--Give error, as it should not be empty
				end

				--Setting the command line for the feature callers
				command_line:="ec -callers "+class_string+ " " + feature_string + " -config "+ project_name

				--If target is to also to be provided, then Specifying the target here
				if not target.is_empty then
					command_line.append (" -target "+target)
				end

				if project_timeout=false then
					feature_functions_helper (class_string,feature_string,id)
				end

				--If the project no longer exists, then return a gone message
				if project_timeout=true then
					res.set_status_code ({HTTP_STATUS_CODE}.gone)
				else
					json_object.put_string (output_message, "Feature_Callers_Dump")
					if not syntax_message.is_empty then
						error_message:=syntax_message
					end
					json_object.put_string (error_message, "Error_Message")
					if not error_message.is_empty and has_feature_error=false then
						json_object.put_boolean (true, "Has_Compilation_Error")
						json_object.put_boolean (false, "Has_Feature_Callers")
					else
						json_object.put_boolean (false, "Has_Compilation_Error")
						json_object.put_boolean (not has_feature_error, "Has_Feature_Callers")
					end
					--json_object.put_string (syntax_message, "Syntax_Message")
					json_object.put_string (warning_message, "Warning_Message")

					if not warning_message.is_empty then
						json_object.put_boolean (true, "Has_Warning")
					else
						json_object.put_boolean (false, "Has_Warning")
					end
					json_object.put_string (dump_message, "Dump")
					json_object.put (get_error_list, "Errors")
					json_object.put (get_warning_list, "Warnings")

					--Parse the callers
					if not has_error and not has_syntax_error then
						class_string.to_upper
						feature_string.to_lower
						if not error_message.has_substring (class_string+ " is not in the universe") and not error_message.has_substring (feature_string+ " is not a feature of "+class_string) then
							--Parse the callers here
							json_object.put (get_feature_callers_list(class_string,feature_string), "Callers")
						else
							json_object.put (create {JSON_ARRAY}.make_array, "Callers")
						end
					end

					if compile_timeout=false then
						res.set_status_code ({HTTP_STATUS_CODE}.ok)
					else
						res.set_status_code ({HTTP_STATUS_CODE}.gateway_timeout)
						json_object.replace_with_boolean (false, "Has_Feature_Callers")
					end

					json_array.add (json_object)

					--Prepare the response string
					res_string.append (json_array.representation)
					res_string.replace_substring_all ("<br>", "\n")
				end

				--Set the response header with the id value
				header.add_header_key_value ("id", id)
				res.put_header_text (header.string)
				res.put_string (res_string)
			end

		--Function that returns the dump of the command line given by the user
		get_user_command_line (req: WSF_REQUEST; res: WSF_RESPONSE)
--			require
--				project_path_empty: project_path /= Void and not project_path.is_empty
--				project_name_empty: project_path /= Void and not project_name.is_empty
--				--target_set: needs_target=false
			local
				res_string:STRING
				json_object:JSON_OBJECT
				header:HTTP_HEADER
				id:STRING
				json_array:JSON_ARRAY
			do
				--Find callers for the feature
				create header.make
				create res_string.make_empty
				create json_array.make_array
				create json_object.make
				create output_message.make_empty

				--Setting values
				compile_timeout:=false
				project_timeout:=false

				--Extract the unique user id
				id:=extract_req_parameter(req,"id")
				if id.is_empty then
					--Give error, as it should not be empty
				else
					--Set the project_path from id
					create project_path.make_empty
					create project_name.make_empty
					set_project_path_from_id(id)

					--Will be true only if the id given is not valid
					if project_path.is_empty then
						--Give error
						project_timeout:=true
					end
				end

				--Extract the command line
				command_line:=extract_req_parameter(req,"command_line")
				if command_line.is_empty then
					--Give error, as it should not be empty
				end

				if project_timeout=false then
					user_command_line_helper(id)
				end

				--If the project no longer exists, then return a gone message
				if project_timeout=true then
					res.set_status_code ({HTTP_STATUS_CODE}.gone)
				else
					json_object.put_string (output_message, "Command_Line_Dump")
					json_array.add (json_object)

					--Prepare the response string
					res_string.append (json_array.representation)
					res_string.replace_substring_all ("<br>", "\n")

					if compile_timeout=false then
						res.set_status_code ({HTTP_STATUS_CODE}.ok)
					else
						res.set_status_code ({HTTP_STATUS_CODE}.gateway_timeout)
					end
				end

				--Set the response header with the id value
				header.add_header_key_value ("id", id)
				res.put_header_text (header.string)
				res.put_string (res_string)
			end

feature --Functions that return the parsed objects

	get_target_list : JSON_ARRAY
		--Function that returns the list of callers of a feature
		local
			target_list: EIFFEL_TARGETS
			target_array:JSON_ARRAY
		do
			if needs_target then
				--Dump message contains the unparsed list of targets
				create target_list.make (dump_message)
				target_array:=target_list.json_array
			end
			Result:=target_array
		end

	get_feature_callers_list(class_string:STRING;feature_string:STRING) : JSON_ARRAY
		--Function that returns the list of callers of a feature
		local
			callers_list: EIFFEL_FEATURE_CALLERS
			callers_array:JSON_ARRAY
		do
			create callers_list.make (output_message,class_string,feature_string)
			callers_array:=callers_list.json_array
			Result:=callers_array
		end

	get_client_supplier_list(class_string:STRING) : JSON_ARRAY
		--Function that returns the list of class clients and suppliers
		local
			cs_list: EIFFEL_CLIENT_SUPPLIER
			cs_array:JSON_ARRAY
		do
			create cs_list.make (output_message,class_string)
			cs_array:=cs_list.json_array
			Result:=cs_array
		end

	get_archi_list(class_string:STRING;a_flag:INTEGER) : JSON_ARRAY
		--Function that returns the list of class descendants and ancestors
		--If a_flag=1, we are parsing descendants, if a_flag=2 we are parsing ancestors
		local
			archi_list: EIFFEL_ARCHITECTURE
			archi_array:JSON_ARRAY
		do
			create archi_list.make (output_message,class_string,a_flag)
			archi_array:=archi_list.json_arr
			Result:=archi_array
		end

	get_runtime_error_list : JSON_ARRAY
		--Function that returns the set of runtime errors
		local
			error_list:EIFFEL_RUNTIME
			error_array:JSON_ARRAY
		do
			if has_runtime_error=True then
				create error_list.make (error_message)
				error_array:=error_list.json_array
				runtime_text:=error_list.runtime_text
			end
			Result:=error_array
		end

	get_error_list : JSON_ARRAY
		--Function that returns the set of error_list
		local
			error_list:EIFFEL_ERRORS
			error_array: JSON_ARRAY
		do
			--Getting error list
			if has_error=True then
				create error_list.make (error_message)
				error_array:=error_list.json_array
			end
			if has_syntax_error then
				create error_list.make (syntax_message)
				error_array:=error_list.json_array
			end
			Result:=error_array
		end

	get_warning_list : JSON_ARRAY
		--Function that returns the set of warnings
		local
			warning_list:EIFFEL_WARNINGS
			warning_array:JSON_ARRAY
		do
			if has_warning=True then
				create warning_list.make (warning_message)
				warning_array:=warning_list.json_array
			end
			Result:=warning_array
		end

feature --Helper functions

	set_project_path(a_str:STRING; id:STRING):STRING
		--Helper function that sets the path and creates a new directory for the compile command
		local
			string_array: LIST[STRING]
			exists:BOOLEAN
			temp:STRING
			index:INTEGER
			dst_path:STRING
			src:RAW_FILE
			dst:RAW_FILE
			unique_value:STRING
--			date_time:DATE_TIME
--			table_path:STRING
		do
			--If the id is blank, create a new unique value here
			if id.is_empty then
				unique_value:=uuid_generator.generate_uuid.out
			else
				unique_value:=id
			end

			--Extract file name and path
			string_array:=a_str.split ('/')
			project_name:=string_array.at (string_array.count)
			project_path:=a_str.substring (1, a_str.count-project_name.count-1)

			index:=project_name.substring_index (".ecf", 1)
			temp:=project_name.substring (1, index-1)
			dst_path:=fixed_project_path+temp+"_"+unique_value

			--Create the new directory (unique value is the value that uniquely identifies the project
			exists:=file_exists(fixed_project_path+temp+"_"+unique_value+"/"+project_name)
			--If the directory exists use it, else create a new one
			if exists=false then
				--Create the new project directory here
				--Copy from project_path to dst_directory

--				create date_time.make_now
--				create table_path.make_from_string (temp+"_"+unique_value)
--				table.put_string (date_time.out, table_path)
--				write_my_table_to_file
--				--Update the timer thread table
--				my_thread.update_table (table)

--				--Make the project deletion thread wait for some time here, till the new project is copied
--				my_thread.go_to_sleep

				create src.make_with_path (create {PATH}.make_from_string (project_path))
				create dst.make_with_path (create {PATH}.make_from_string (dst_path))
				recursive_copy (src, dst)

			end
			--Assign to the new project path
			project_path:=dst_path

			Result:=unique_value

		ensure
			project_path_empty: project_path /= Void and not project_path.is_empty
			project_name_empty: project_path /= Void and not project_name.is_empty
		end

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

	send_json_boolean_value (obj:JSON_OBJECT; key: STRING):BOOLEAN
		--Sends the string representation of the JSON value	
		do
			Result:=false
			if attached {JSON_BOOLEAN} obj.item(key) as str then
				Result:=str.item
			end
		end

	extract_req_parameter (req:WSF_REQUEST;str:STRING):STRING
		--Function that extracts the value of str from the request object
		do
			Result:=""
			if attached {WSF_STRING} req.query_parameter (str) as p_str then
				Result := p_str.value
			end
		end

	extract_boolean_req_parameter (req:WSF_REQUEST; str:STRING):BOOLEAN
		--Function that extracts the boolean value of str from the request object
		do
			Result:=false
			if attached {WSF_STRING} req.query_parameter (str) as p_str then
				Result := p_str.value.to_boolean
			end
		end

	file_exists (fn: READABLE_STRING_GENERAL): BOOLEAN
		--Check if file exists or not
		local
			f: RAW_FILE
		do
			create f.make_with_name (fn)
			Result := f.exists and then f.is_readable
		end

	uuid_generator: UUID_GENERATOR
		--Generates the unique id
		once
			create Result
		end

	recursive_copy (src, dst:RAW_FILE)
		--Recursively copies the directories
		local
			dst_dir:DIRECTORY
			src_dir:DIRECTORY
			srcFile:RAW_FILE
			dstFile:RAW_FILE
			srcPath:PATH
			dstPath:PATH
			p:PATH
		do
			--if the src file is a directory, then recursively copy
			if src.is_directory then
				create dst_dir.make_with_path (dst.path)
				if not dst_dir.exists then
					dst_dir.recursive_create_dir
				end
				create src_dir.make_with_path (src.path)

				--Extract the directory list here
				across src_dir.entries as ic loop
					p:= ic.item
					if p.utf_8_name.at (1)/='.' then
						create srcPath.make_from_string (src.path.utf_8_name+"/"+p.utf_8_name)
						create dstPath.make_from_string (dst.path.utf_8_name+"/"+p.utf_8_name)
						create srcFile.make_with_path (srcPath)
						create dstFile.make_with_path (dstPath)
						recursive_copy (srcFile, dstFile)
					end
				end
			else
				--The src file is a file, so simply coy it
				create srcFile.make_open_read (src.path.utf_8_name)
				create dstFile.make_create_read_write (dst.path.utf_8_name)
				srcFile.copy_to (dstFile)
				srcFile.close
				dstFile.close
			end
		end

		set_project_path_from_id (id:STRING)
			--This feature will set the project path and the project name from the id of the project
			local
				main_dir:DIRECTORY
				p:PATH
				s:LIST[STRING]
				i:INTEGER
			do
				create main_dir.make_with_path (create {PATH}.make_from_string (fixed_project_path))
				--Extract the list of projects here
				across main_dir.entries as ic loop
					p:= ic.item
					if p.utf_8_name.at (1)/='.' then
						if p.utf_8_name.has_substring (id) then
							s:=p.utf_8_name.split ('_')
							project_name:=s.at (1)
							from
								i:=2
							until
								i>s.count-1
							loop
								project_name:=project_name+"_"+s.at(i)
								i:=i+1
							end
							project_name:=project_name+".ecf"
							project_path:=fixed_project_path+p.utf_8_name
						end
					end
				end
			end

		initialize_timeouts_from_file
			--This feature initializes the compile and the runtime timeouts
		local
			file:PLAIN_TEXT_FILE
			s:STRING
			parser:JSON_PARSER
			json_object:JSON_OBJECT
		do
			--create file.make_with_path (create {PATH}.make_from_string ("C:\Users\Manav\Desktop\eve_server\server_app\www\config.json"))
			create file.make_with_path (create {PATH}.make_from_string (".\www\config.json"))
			file.open_read
			file.read_stream (file.count)
			s:=file.last_string

			create parser.make_parser (s)

			if attached {JSON_OBJECT} parser.parse as jv and parser.is_parsed then
				json_object:=jv
				compilation_timeout:=send_json_value (json_object, "Compilation_Timeout").to_integer
				execution_timeout:=send_json_value (json_object, "Runtime_Timeout").to_integer
--				periodic_time:=send_json_value (json_object, "Periodic_Time").to_integer
--				project_duration:=send_json_value (json_object, "Project_Duration").to_integer
--				pre_project_duration:=send_json_value (json_object, "Pre_Project_Duration").to_integer
--				initial_sleep_time:=send_json_value (json_object, "Initial_Sleep_Time").to_integer
--				wait_time:=send_json_value (json_object, "New_Project_Wait_Time").to_integer_64
			end
		end

		initialize_timeouts_from_arguments
			--This feature initializes the compile and runtime timeouts from the arguments given at runtime
			do
				if argument_count=2 then
					compilation_timeout:=argument(1).to_integer
					execution_timeout:=argument(2).to_integer
				else
					--Parameters not provided
					--Give error
				end
			end

		create_file_with_content (file_array:JSON_ARRAY; id:STRING) :STRING
			--Helper function that sets the path and creates a new directory for the compile command
		local
			string_array: LIST[STRING]
			exists:BOOLEAN
			recursive_address:STRING
			temp:STRING
			index:INTEGER
			dst_path:STRING
			src:RAW_FILE
			dst:RAW_FILE
			unique_value:STRING
			json_filename:STRING
			json_file_content:STRING
			i,j:INTEGER
--			date_time:DATE_TIME
--			table_path:STRING
		do
			--If the id is blank, create a new unique value here
			if id.is_empty then
				unique_value:=uuid_generator.generate_uuid.out
			else
				unique_value:=id
			end

			--Extract the name of the project from the ecf file
			from
				i:=1
			until
				i>file_array.count
			loop
				if attached {JSON_OBJECT} file_array.i_th (i) as j_obj then
					json_filename:=send_json_value (j_obj, "filename")
					json_file_content:=send_json_value (j_obj, "content")
					if json_filename.has_substring (".ecf") then
						string_array:=json_filename.split ('/')
						project_name:=string_array.at (string_array.count)
					end
				end
				i:=i+1
			end

			--Extract file name and fix the project path
			temp:=project_name.substring (1, project_name.substring_index (".ecf", 1)-1)
			dst_path:=fixed_project_path+temp+"_"+unique_value

			from
				i:=1
			until
				i>file_array.count
			loop
				if attached {JSON_OBJECT} file_array.i_th (i) as j_obj then
					json_filename:=send_json_value (j_obj, "filename")
					json_file_content:=send_json_value (j_obj, "content")

					string_array:=json_filename.split ('/')

					if not string_array.at (1).is_equal (".") then
						create recursive_address.make_from_string (string_array.at (1))
					end
					from
						j:=2
					until
						j>=string_array.count
					loop
						recursive_address:=recursive_address+"/"+string_array.at (j)
						j:=j+1
					end
					if string_array.count/=1 then
						json_filename:=string_array.at (string_array.count)
					else
						recursive_address:=""
					end
					write_file(json_filename,json_file_content,dst_path+recursive_address)
				end
				i:=i+1
			end

			--Assign to the new project path
			project_path:=dst_path

			Result:=unique_value

		ensure
			project_path_empty: project_path /= Void and not project_path.is_empty
			project_name_empty: project_path /= Void and not project_name.is_empty
		end

		write_file (name:STRING; content:STRING; location:STRING)
			--Write the table to file
			local
				my_file: PLAIN_TEXT_FILE
				f: RAW_FILE
				dir:DIRECTORY
			do
				create f.make_with_name (location)
				if not f.exists then
					create dir.make_with_path (f.path)
					dir.recursive_create_dir
				end
				create my_file.make(location+"/"+name)
				my_file.open_write
				my_file.put_string (content)
				my_file.close
			end

feature -- Commands to the command line

	--This feature is used to start compilation
	compile_helper(path:STRING;id: STRING)
		local
			ec_process:PROCESS
			e_parser:EIFFEL_PARSER
--			start_time:DATE_TIME
--			current_time:DATE_TIME
--			l_duration:DATE_TIME_DURATION
--			duration:INTEGER_64
--			thread_string:STRING
		do
			--Compile

			--Resolve synchronisation with the thread

--			if my_thread.sub_path/=Void then
--				thread_string:=my_thread.sub_path.out
--				thread_string.replace_substring_all ("\", "/")
--				thread_string.replace_substring_all ("/EIFGENs", "")
--				if thread_string.is_equal (project_path) then
--					my_thread.sleep (sleep_time)
--				end
--			end

--			--Initialize the start_time with the timestamp of the project
--			table_string:=project_name+"_"+id
--			table_string.replace_substring_all (".ecf", "")

--			--If the difference between current time and start time is more than compilation_timeout, the server returns a timeout message
--			create start_time.make_from_string_default (send_json_value (table, table_string))
--			create current_time.make_now
--			l_duration:=current_time.relative_duration (start_time)
--			duration:= l_duration.seconds_count

--			if duration>=pre_project_duration then
--				--Return Gone message
--				project_timeout:=true
--			else
--				--Modify the timestamp of the current project
--				table.replace_with_string (current_time.out, table_string)
--				write_my_table_to_file
--				--Update the timer thread table
--				my_thread.update_table (table)

				ec_process:=p_factory.process_launcher_with_command_line (command_line,path)
			--	ec_process:=p_factory.process_launcher_with_command_line ("ec -config sample_1.ecf -c_compile -batch","C:/Users/Manav/Desktop/eve_server/sample_1")
				ec_process.enable_launch_in_new_process_group
				ec_process.set_separate_console (true)
				ec_process.redirect_error_to_agent (agent handle_error_compilation)
				ec_process.redirect_output_to_agent (agent handle_output_compilation(?, ec_process))
				--ec_process.redirect_output_to_file ("C:/Users/Manav/Desktop/output.txt")
				--ec_process.redirect_error_to_file ("C:/Users/Manav/Desktop/error.txt")
				ec_process.launch

				--Wait for the compilation to finish.

				ec_process.wait_for_exit_with_timeout (compilation_timeout)
				if ec_process.is_last_wait_timeout then
					compile_timeout:=true
					ec_process.terminate
				end

			--Not needed, but still keep it for future reference
	--			flag:=ec_process.is_running
	--			timeout:=false
	--			create start_time.make_now
	--			from
	--			until
	--				flag=false
	--			loop
	--				flag:=ec_process.is_running

	--				--Extract the current time here.
	--				--If the difference between current time and start time is more than compilation_timeout, the server returns a timeout message
	--				create current_time.make_now
	--				l_duration:=current_time.relative_duration (start_time)
	--				duration:= l_duration.seconds_count

	--				if duration>=compilation_timeout then
	--					flag:=false
	--					timeout:=true
	--					ec_process.terminate
	--				end
	--			end

				if compile_timeout=false then
					compile_message.replace_substring_all ("%R%N", "<br>")
					output_message.replace_substring_all ("%R%N", "<br>")

					if dump_message.is_empty then
						dump_message:=compile_message
					end

					--Check if target is non empty, it must be valid
					if not target.is_empty and output_message.has_substring ("Choose among the following target(s)") then
						needs_target:=true
						create compile_message.make_empty
						dump_message:=output_message
						create output_message.make_empty
					else
						--The target is valid, so now parse the command line
						--Parsing the command line string for errors and messages
						create e_parser.make (compile_message)
						compile_message:=e_parser.compile_message
						compile_message:=compile_message.substring (1, compile_message.substring_index ("Recompiled.", 1)+10)
						--If the project was finish_freezed then the errors, warnings would be lost if they are again allowed to modify.
						if path.substring_index ("W_code", 1)=0 then
							error_message:=e_parser.error_message
							warning_message:=e_parser.warning_message
							syntax_message:=e_parser.syntax_error
						end
						if not error_message.is_empty then
							has_error:=true
						end
						if not warning_message.is_empty then
							has_warning:=true
						end
						if not syntax_message.is_empty then
							has_syntax_error:=true
						end
					end
				end
--			end
		end

	--This feature is used to start execution
	execution_helper(id:STRING)
		local
			ec_process:PROCESS
--			start_time:DATE_TIME
--			current_time:DATE_TIME
--			l_duration:DATE_TIME_DURATION
--			duration:INTEGER_64
--			thread_string:STRING
--			socket:HTTP_STREAM_SOCKET
		do
			--Run the project

--			--Initialize the start_time with the timestamp of the project
--			table_string:=project_name+"_"+id
--			table_string.replace_substring_all (".ecf", "")

--			--If the difference between current time and start time is more than compilation_timeout, the server returns a timeout message
--			create start_time.make_from_string_default (send_json_value (table, table_string))
--			create current_time.make_now
--			l_duration:=current_time.relative_duration (start_time)
--			duration:= l_duration.seconds_count

--			if duration>=pre_project_duration then
--				--Return Gone message
--				project_timeout:=true
--			else
--				--Modify the timestamp of the current project
--				table.replace_with_string (current_time.out, table_string)
--				write_my_table_to_file
--				--Update the timer thread table
--				my_thread.update_table (table)

				command_line:=project_path+"/EIFGENs/"+project_name+"/W_code/"+project_name+".exe"
				command_line.replace_substring_all (".ecf", "")

--				app_handler:=server_thread.app_factory.handler
--				--Set the command line for the websocket here
--				app_handler.set_command_line (command_line)

				--Call the websocket here
--				if attached app_handler.client_socket as l_socket then
--					socket:=l_socket
--					app_handler.send_from_server (socket, "", execution_timeout)
--					--Set error_message, output_message, has_runtime_error, runtime_timeout here
--					error_message:=app_handler.error_message
--					output_message:=app_handler.output_message
--					has_runtime_error:=app_handler.has_runtime_error
--					runtime_timeout:=app_handler.runtime_timeout
--				else
					ec_process:=p_factory.process_launcher_with_command_line (command_line,"")
					ec_process.enable_launch_in_new_process_group
					ec_process.set_separate_console (true)
					ec_process.redirect_error_to_agent (agent handle_error_execution)
					ec_process.redirect_output_to_agent (agent handle_output_execution)
					ec_process.launch

					--Wait for the execution to finish.
					ec_process.wait_for_exit_with_timeout (execution_timeout)
					if ec_process.is_last_wait_timeout then
						runtime_timeout:=true
						ec_process.terminate
					end
--				end


--				ec_process:=p_factory.process_launcher_with_command_line (command_line,"")
--				ec_process.enable_launch_in_new_process_group
--				ec_process.set_separate_console (true)
--				ec_process.redirect_error_to_agent (agent handle_error_execution)
--				ec_process.redirect_output_to_agent (agent handle_output_execution)
--				ec_process.launch

--				--Wait for the execution to finish.
--				ec_process.wait_for_exit_with_timeout (execution_timeout)
--				if ec_process.is_last_wait_timeout then
--					runtime_timeout:=true
--					ec_process.terminate
--				end

				if runtime_timeout=false then
					error_message.replace_substring_all ("%R%N", "<br>")
					output_message.replace_substring_all ("%R%N", "<br>")
				end
--			end
		end

	--This feature is used to start a process when a class related function is called
	class_functions_helper (class_string:STRING;id:STRING)
		local
			ec_process:PROCESS
			e_parser:EIFFEL_PARSER
--			start_time:DATE_TIME
--			current_time:DATE_TIME
--			l_duration:DATE_TIME_DURATION
--			duration:INTEGER_64
--			thread_string:STRING
		do
			--Get the class views
--			--Initialize the start_time with the timestamp of the project
--			table_string:=project_name+"_"+id
--			table_string.replace_substring_all (".ecf", "")

--			--If the difference between current time and start time is more than compilation_timeout, the server returns a timeout message
--			create start_time.make_from_string_default (send_json_value (table, table_string))
--			create current_time.make_now
--			l_duration:=current_time.relative_duration (start_time)
--			duration:= l_duration.seconds_count

--			if duration>=pre_project_duration then
--				--Return Gone message
--				project_timeout:=true
--			else
--				--Modify the timestamp of the current project
--				table.replace_with_string (current_time.out, table_string)
--				write_my_table_to_file
--				--Update the timer thread table
--				my_thread.update_table (table)

				ec_process:=p_factory.process_launcher_with_command_line (command_line,project_path)
				ec_process.enable_launch_in_new_process_group
				ec_process.set_separate_console (true)
				ec_process.redirect_error_to_agent (agent handle_error_class)
				ec_process.redirect_output_to_agent (agent handle_output_class)
				ec_process.launch

				--Wait for the execution to finish.
				--Do Something to wait till compilation is over
				ec_process.wait_for_exit_with_timeout (compilation_timeout)
				if ec_process.is_last_wait_timeout then
					compile_timeout:=true
					ec_process.terminate
				end

				if compile_timeout=false then
					error_message.replace_substring_all ("%R%N", "<br>")
					output_message.replace_substring_all ("%R%N", "<br>")

					if dump_message.is_empty then
						dump_message:=error_message
					end

					--Parsing the command line string for errors and messages
					create e_parser.make (error_message)
					output_message:=e_parser.output_message
					error_message:=e_parser.error_message
					warning_message:=e_parser.warning_message
					syntax_message:=e_parser.syntax_error

					if not error_message.is_empty then
						has_error:=true
					end
					if not warning_message.is_empty then
						has_warning:=true
					end
					if not syntax_message.is_empty then
						has_syntax_error:=true
					end

					if not has_error and not has_syntax_error then
						class_string.to_upper
						if output_message.has_substring (class_string+ " is not in the universe") then
							error_message:=output_message
							output_message:=""
							has_class_error:=true
						end
					end
				else
					compile_message:=error_message
					create error_message.make_empty
				end
--			end
		end

		--This feature is used to start a process when a feature related function is called
		feature_functions_helper (class_string:STRING; feature_string: STRING;id:STRING)
		local
			ec_process:PROCESS
			e_parser:EIFFEL_PARSER
--			start_time:DATE_TIME
--			current_time:DATE_TIME
--			l_duration:DATE_TIME_DURATION
--			duration:INTEGER_64
--			thread_string:STRING
		do
			--Get the class views

--			--Initialize the start_time with the timestamp of the project
--			table_string:=project_name+"_"+id
--			table_string.replace_substring_all (".ecf", "")

--			--If the difference between current time and start time is more than compilation_timeout, the server returns a timeout message
--			create start_time.make_from_string_default (send_json_value (table, table_string))
--			create current_time.make_now
--			l_duration:=current_time.relative_duration (start_time)
--			duration:= l_duration.seconds_count

--			if duration>=pre_project_duration then
--				--Return Gone message
--				project_timeout:=true
--			else
--				--Modify the timestamp of the current project
--				table.replace_with_string (current_time.out, table_string)
--				write_my_table_to_file
--				--Update the timer thread table
--				my_thread.update_table (table)

				ec_process:=p_factory.process_launcher_with_command_line (command_line,project_path)
				ec_process.enable_launch_in_new_process_group
				ec_process.set_separate_console (true)
				ec_process.redirect_error_to_agent (agent handle_error_feature)
				ec_process.redirect_output_to_agent (agent handle_output_feature)
				ec_process.launch

				--Wait for the execution to finish.
				--Do Something to wait till compilation is over
				ec_process.wait_for_exit_with_timeout (compilation_timeout)
				if ec_process.is_last_wait_timeout then
					compile_timeout:=true
					ec_process.terminate
				end

				if compile_timeout=false then
					error_message.replace_substring_all ("%R%N", "<br>")
					output_message.replace_substring_all ("%R%N", "<br>")

					if dump_message.is_empty then
						dump_message:=error_message
					end

					--Parsing the command line string for errors and messages
					create e_parser.make (error_message)
					output_message:=e_parser.output_message
					error_message:=e_parser.error_message
					warning_message:=e_parser.warning_message
					syntax_message:=e_parser.syntax_error

					if not error_message.is_empty then
						has_error:=true
					end
					if not warning_message.is_empty then
						has_warning:=true
					end
					if not syntax_message.is_empty then
						has_syntax_error:=true
					end

					if not has_error and not has_syntax_error then
						class_string.to_upper
						feature_string.to_lower
						if output_message.has_substring (class_string+ " is not in the universe") or output_message.has_substring (feature_string+ " is not a feature of "+class_string) then
							error_message:=output_message
							output_message:=""
							has_feature_error:=true
						end
					end
				else
					compile_message:=error_message
					create error_message.make_empty
				end
--			end
		end

		--This feature is used to start the process when the user supplies the command line
		user_command_line_helper(id:STRING)
		local
			ec_process:PROCESS
--			start_time:DATE_TIME
--			current_time:DATE_TIME
--			l_duration:DATE_TIME_DURATION
--			duration:INTEGER_64
--			thread_string:STRING
		do
			--Get the command line output

			--Initialize the start_time with the timestamp of the project
--			table_string:=project_name+"_"+id
--			table_string.replace_substring_all (".ecf", "")

--			--If the difference between current time and start time is more than compilation_timeout, the server returns a timeout message
--			create start_time.make_from_string_default (send_json_value (table, table_string))
--			create current_time.make_now
--			l_duration:=current_time.relative_duration (start_time)
--			duration:= l_duration.seconds_count

--			if duration>=pre_project_duration then
--				--Return Gone message
--				project_timeout:=true
--			else
--				--Modify the timestamp of the current project
--				table.replace_with_string (current_time.out, table_string)
--				write_my_table_to_file
--				--Update the timer thread table
--				my_thread.update_table (table)

				ec_process:=p_factory.process_launcher_with_command_line (command_line,project_path)
				ec_process.enable_launch_in_new_process_group
				ec_process.set_separate_console (true)
				ec_process.redirect_error_to_agent (agent handle_error_user_command_line)
				ec_process.redirect_output_to_agent (agent handle_output_user_command_line)
				ec_process.launch

				--Wait for the execution to finish.
				--Do Something to wait till compilation is over
				ec_process.wait_for_exit_with_timeout (compilation_timeout)
				if ec_process.is_last_wait_timeout then
					compile_timeout:=true
					ec_process.terminate
				end

				if compile_timeout=false then
					output_message.replace_substring_all ("%R%N", "<br>")
				end
--			end
		end


feature --input, output and error agents

	handle_error_compilation (a_str:STRING)
		--Agent that handles the error messages from the compilation
		do
--			io.put_string (a_str)
--			if a_str.has_substring ("Error code") then
--				--Error has occured. Deal with it
--				has_error:=True
--			end
--			if a_str.has_substring ("Warning code") then
--				--There is a warning in the project
--				has_warning:=True
--			end
--			if a_str.has_substring ("Syntax error") then
--				--There is a syntax error in the project
--				has_syntax_error:=True
--			end
			compile_message.append (a_str)
		end

	handle_output_compilation (a_str:STRING; ec_process:PROCESS)
		--Agent that handles the output from the compilation
		do
--			io.put_string (a_str)
			--io.output.flush
			if not a_str.is_empty and a_str/=Void then
				output_message.append(a_str)
			end
			if output_message.has_substring ("Choose among the following target(s)") then
				ec_process.terminate
			end
		end

	handle_output_execution (a_str:STRING)
		--Agent that handles the output from the execution
		do
			--io.put_string (a_str)
			--io.output.flush
			if not a_str.is_empty and a_str/=Void then
				output_message.append(a_str)
			end
		end

	handle_error_execution (a_str:STRING)
		--Agent that handles the error from the execution
		do
			--io.put_string (a_str)
			has_runtime_error:=true
			error_message.append (a_str)
		end

	handle_output_class (a_str:STRING)
		--Agent that handles the output from the class functions
		do
--			io.put_string (a_str)
			--io.output.flush
			if not a_str.is_empty and a_str/=Void then
				output_message.append(a_str)
			end
		end

	handle_error_class (a_str:STRING)
		--Agent that handles the error from the class functions
		do
--			io.put_string (a_str)
			error_message.append (a_str)
		end

	handle_output_feature (a_str:STRING)
		--Agent that handles the output from the feature functions
		do
--			io.put_string (a_str)
			--io.output.flush
			if not a_str.is_empty and a_str/=Void then
				output_message.append(a_str)
			end
		end

	handle_error_feature (a_str:STRING)
		--Agent that handles the error from the feature functions
		do
--			io.put_string (a_str)
			error_message.append (a_str)
		end

	handle_output_user_command_line (a_str:STRING)
		--Agent that handles the output from the command line that the user entered
		do
--			io.put_string (a_str)
			if not a_str.is_empty and a_str/=Void then
				output_message.append(a_str)
			end
		end

	handle_error_user_command_line (a_str:STRING)
		--Agent that handles the error from the command line that the user entered
		do
--			io.put_string (a_str)
			output_message.append (a_str)
		end

end
