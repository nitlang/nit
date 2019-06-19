
import functional
import func_collections

class SumFn
        super Func2[Int,Int,Int]

        redef fun call(x: Int, y: Int): Int
        do
                return x + y
        end
end

class MinFn[E: Comparable]
        super Func2[E,E,E]

        redef fun call(x: E, y: E): E
        do
                if x < y then
                        return x
                end
                return y
        end
end

fun sum_fn: SumFn
do
        return new SumFn
end

fun min_int_fn: MinFn[Int]
do
        return new MinFn[Int]
end

var xs = [1,2,3,4,5]
print xs.foldl(sum_fn, 0)
print xs.foldl1(min_int_fn)


var ys = [45,424,11,43,7,5,8,9,1,-100]
print ys.foldl1(min_int_fn)
