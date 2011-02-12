import kernel

class A
	init ca(a: Char)
	do
		'A'.output
		a.output
	end

	fun foo
	do
		'a'.output
		'\n'.output
	end
end

class B
	super A
	init cb(a, b: Char)
	do
		'B'.output
		b.output
		'{'.output
		ca(a)
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
	init cc(a,b,c: Char)
	do
		'C'.output
		c.output
		'{'.output
		cb(a,b)
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
	init co(a,b,c,o: Char)
	do
		'O'.output
		o.output
		'{'.output
		cc(a,b,c)
		'}'.output
	end
	redef fun foo
	do
		'o'.output
		super
	end
end

(new A.ca('1')).foo
(new B.cb('1','2')).foo
(new C.cc('1','2','3')).foo
(new M.ca('1')).foo
(new N.cb('1','2')).foo
(new O.co('1','2','3','4')).foo

