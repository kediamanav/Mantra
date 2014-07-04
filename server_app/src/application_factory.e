note
	description: "Summary description for {APPLICATION_FACTORY}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION_FACTORY

inherit
	HTTP_REQUEST_HANDLER_FACTORY

--create
--	make_handler

--feature --make
--	make_handler(a_handler: APPLICATION_CONNECTION_HANDLER)
--		do
--			handler:=a_handler
--		end

feature -- Access
	handler:APPLICATION_CONNECTION_HANDLER

feature -- Factory

	new_handler: separate APPLICATION_CONNECTION_HANDLER
		do
			create handler.make
			Result:=handler
			--create Result.make
--			Result.set_is_verbose (is_verbose)
		end

note
	copyright: "2011-2013, Javier Velilla, Jocelyn Fiat and others"
	license: "Eiffel Forum License v2 (see http://www.eiffel.com/licensing/forum.txt)"
end
