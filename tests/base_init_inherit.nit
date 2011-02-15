import kernel

class A
	init ca
	do
		'A'.output
	end

	init ca2
	do
		'A'.output
		'2'.output
	end

	fun foo
	do
		'a'.output
		'\n'.output
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

class C
	super B
	init cc
	do
		'C'.output
		'{'.output
		cb
		'}'.output
	end

	redef fun foo
	do
		'c'.output
		super
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

class N
	super B
	super M
	redef fun foo
	do
		'n'.output
		super
	end
end

class O
	super N
	super C
	init co
	do
		'O'.output
		'{'.output
		cc
		'}'.output
	end
	redef fun foo
	do
		'o'.output
		super
	end
end

(new A.ca).foo
(new A.ca2).foo
(new B.cb).foo
#alt1#(new B.ca).foo
#alt1#(new B.ca2).foo
(new C.cc).foo
#alt1#(new C.ca).foo
#alt1#(new C.ca2).foo
#alt1#(new C.cb).foo
(new M.ca).foo
(new M.ca2).foo
(new N.cb).foo
#alt1#(new N.ca).foo
#alt1#(new N.ca2).foo
(new O.co).foo
#alt1#(new O.ca).foo
#alt1#(new O.ca2).foo
#alt1#(new O.cb).foo
#alt1#(new O.cc).foo

