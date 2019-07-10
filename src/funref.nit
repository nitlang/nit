import functional

fun toto(x: Int): Int
do
       return x + 1
end

class A
        fun titi(x: Int): Int
        do
                return x + 1
        end
end

var a = new A
var f = &a.titi
