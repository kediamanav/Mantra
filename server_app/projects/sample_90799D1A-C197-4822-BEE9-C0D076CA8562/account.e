note
	description: "Summary description for {ACCOUNT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ACCOUNT
create
	make

feature
	make (a:DOUBLE)
		require
			bal_positive: a>0
		do
			balance:=a
		ensure
			bal_set: balance=a
		end

feature
	balance:DOUBLE

feature
	withdraw(amt:DOUBLE)
		require
			amt_positive: amt>0
		do
			balance:=balance-amt
		ensure
			balance=old balance-amt
		end

	deposit (amt:DOUBLE)
		require
			amt_positive: amt>0
		do
			balance:=balance+amt
		ensure
			balance=old balance +amt
		end

	invariant
		balance_positive: balance>0
end
