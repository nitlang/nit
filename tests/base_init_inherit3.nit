import kernel

class A
	init ca
	do
		'A'.output
	end

	meth foo
	do
		'a'.output
		'\n'.output
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

class B
special A
	init cb
	do
		'B'.output
		'{'.output
		ca
		'}'.output
	end

	redef meth foo
	do
		'b'.output
		super
	end
end

class N
special A
	redef meth foo
	do
		'n'.output
		super
	end
end

class O
special M
special B
	redef meth foo
	do
		'o'.output
		super
	end
end

class P
special B
special N
	redef meth foo
	do
		'p'.output
		super
	end
end

class Q
#alt0#special M
#alt0#special B
#alt0#special N

#alt1#special O
#alt1#special N

#alt2#special M
#alt2#special P
	
#alt3#special O
#alt3#special P
	redef meth foo
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

