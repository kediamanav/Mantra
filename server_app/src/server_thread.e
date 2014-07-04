note
	description: "Summary description for {SERVER_THREAD}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SERVER_THREAD

inherit
	THREAD

create
	make, make_with_port

feature
	make_with_port (a_port: INTEGER)
			-- Run application.
		local
			cfg: HTTP_SERVER_CONFIGURATION
		do
			make
			create cfg.make
			setup (cfg, a_port)
			create app_factory
			create server.make (cfg, app_factory)
		end

		setup (a_cfg: HTTP_SERVER_CONFIGURATION; a_port: INTEGER)
		do
--			if a_cfg.has_ssl_support then
--				a_cfg.mark_secure
--				a_cfg.set_ca_crt ("C:\OpenSSL-Win64\bin\ca.crt") -- Change to use your own crt file.
--				a_cfg.set_ca_key ("C:\OpenSSL-Win64\bin\ca.key") -- Change to use your own key file.
--				a_cfg.set_ssl_protocol_to_ssl_3
--			end

			a_cfg.http_server_port := a_port
			a_cfg.set_max_concurrent_connections (50)
			debug ("nino")
				a_cfg.set_is_verbose (True)
			end
		end

feature --Execute

	execute
		do
			server.launch
		end

feature -- Access

	server: HTTP_SERVER

	default_document_root: STRING = "webroot"

	app_factory: APPLICATION_FACTORY

end
