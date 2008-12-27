import kernel

class A
	init ca(a: Char)
	do
		'A'.output
		a.output
	end

	meth foo
	do
		'a'.output
		'\n'.output
	end
end

class B
special A
	init cb(a, b: Char)
	do
		'B'.output
		b.output
		'{'.output
		ca(a)
		'}'.output
	end

	redef meth foo
	do
		'b'.output
		super
	end
end

class C
special B
	init cc(a,b,c: Char)
	do
		'C'.output
		c.output
		'{'.output
		cb(a,b)
		'}'.output
	end

	redef meth foo
	do
		'c'.output
		super
	end
end

class M
special A
	redef meth foo
	do
		'm'.output
		super
	end
end

class N
special B
special M
	redef meth foo
	do
		'n'.output
		super
	end
end

class O
special N
special C
	init co(a,b,c,o: Char)
	do
		'O'.output
		o.output
		'{'.output
		cc(a,b,c)
		'}'.output
	end
	redef meth foo
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

