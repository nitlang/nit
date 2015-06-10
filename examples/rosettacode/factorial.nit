module factorial

redef class Int

    fun fact: Int
    do
        if self < 1 then return 1
        return self * (self-1).fact
    end
end
var n = gets.to_i
print n.fact