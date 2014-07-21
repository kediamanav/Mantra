note
	description: "Summary description for {MY_THREAD}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MY_THREAD

inherit
	THREAD

create
	make_here,make

feature
	make_here(a_integer:INTEGER)
		do
			a:=a_integer
			make
		end

feature --Variable
	a:INTEGER

feature --Execute
	execute
		local
			c: INTEGER
		do
			io.put_string ("foo")
			from
				c:=1
			until
				c=a
			loop
				io.put_string (c.out)
				io.put_new_line
				sleep(100000000)
				c:=c+1
			end
		end
end
