fun foo !k
do
	' '.output
	'<'.output
	1.output
	k
	' '.output
	'>'.output
	1.output
end

fun test
do
	var a = [10, 20, 30]
	'<'.output
	0.output
	var i = 0
	while i < 3 do
		foo !k do
			' '.output
			' '.output
			'<'.output
			2.output
			' '.output
			' '.output
			'='.output
			a[i].output # a[i] is usually inlined
			if i == 1 then
				#alt1#break
			end
			' '.output
			' '.output
			'>'.output
			2.output
		end
		i += 1
	end
	'>'.output
	0.output
end

test
