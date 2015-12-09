import kernel

class A
	init do 'A'.output
	init init2 do 'a'.output
	fun foo do '\n'.output
end

class B
	super A
	#alt1#redef init do '1'.output
	init do '1'.output #alt1#
	#alt1#redef init init2 do '2'.output
	redef init init2 do '2'.output #alt1#
	#alt1#redef init init3 do '3'.output
	init init3 do '3'.output #alt1#
end

(new A).foo
(new A.init2).foo
(new B).foo
(new B.init2).foo
(new B.init3).foo

