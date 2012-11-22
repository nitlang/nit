import kernel

fun test(d: Discrete)
do
	(d<5).output
	#alt1#(3<d).output
	(d<=d).output
	#alt2#(d<='a').output
	#alt3#(5.as(Discrete)<=d).output
end

test(4)
