note
	description : "sample application root class"
	date        : "$Date$"
	revision    : "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		local
			bal:ACCOUNT
			my_thread:MY_THREAD
			a,c:INTEGER
		do
			--| Add your code here
			io.put_string ("Hello Eiffel World!%N")
			extra_feature(0)

			io.read_integer
			a:=io.last_integer

			create my_thread.make_here (a)
			my_thread.launch


			my_thread.join

			create bal.make (10)
			bal.withdraw (5)
		end


	extra_feature (a:INTEGER)
		require
			number_out_of_range: a=0
		local
			s:STRING
		do
			io.put_string ("In extra feature")
			io.put_new_line
		ensure
			number_out_of_range: a=0
		end
end
