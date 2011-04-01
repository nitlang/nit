import kernel

class G[E]
end

#alt1# class H[E: Fail] end

class A
	#alt2#super Fail
	#alt3#super G[Fail]
	#alt2#super Fail[G]

	#alt4#var v: Fail
	#alt4#fun f(f: Fail): Fail do return f + 1
	#alt5#var v: Fail
	#alt5#fun f(f: Fail): Fail do return f + 1

	fun f2 do
		#alt6#var x: Fail 
		#alt7#var y = new Fail
		var z = 1
		var b = z isa Fail
		z = b + 1
		var c = z.as(Fail)
		z = c + 1
	end
end
		
class B
	super A
	#alt4# redef fun v do return super + 1
	#alt4# redef fun f(f) do return f + 1
	#alt5# redef fun v: Fail do return super + 1
	#alt5# redef fun f(f: Fail): Fail do return f + 1
end
