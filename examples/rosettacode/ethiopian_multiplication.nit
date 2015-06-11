module ethiopian_multiplication

redef class Int

	fun half: Int
	do
		return self/2
	end

	fun double: Int
	do
		return self*2
	end
end

fun ethiopian(x, y: Int): Int
   	do
    	var t = new HashMap[Int, Int]
    	t[x] = y
        print "{x}; {t[x]}"
    	var sum: Int
    	if x.is_even then 
    		sum = 0
    	else
    		sum = y
    	end

    	while x>1 do
    		x = x.half
    		y = y.double
    		t[x] = y
            print "{x}; {t[x]}"
    		if not x.is_even then sum = sum+y
    	end

        return sum
    end

var words = gets.split(" ")
print ethiopian(words[0].to_i, words[1].to_i)