import kernel

class A
	init ca
	do
		'A'.output
	end

	fun foo
	do
		'a'.output
		'\n'.output
	end
end

class M
	super A
	redef fun foo
	do
		'm'.output
		super
	end
end

class B
	super A
	init cb
	do
		'B'.output
		'{'.output
		ca
		'}'.output
	end

	redef fun foo
	do
		'b'.output
		super
	end
end

class N
	super A
	redef fun foo
	do
		'n'.output
		super
	end
end

class O
	super M
	super B
	redef fun foo
	do
		'o'.output
		super
	end
end

class P
	super B
	super N
	redef fun foo
	do
		'p'.output
		super
	end
end

class Q
	#alt0#super M
	#alt0#super B
	#alt0#super N

	#alt1#super O
	#alt1#super N

	#alt2#super M
	#alt2#super P
	
	#alt3#super O
	#alt3#super P

	redef fun foo
	do
		'q'.output
		super
	end
end

(new A.ca).foo
(new M.ca).foo
(new B.cb).foo
(new N.ca).foo
(new O.cb).foo
(new P.cb).foo
(new Q.cb).foo

