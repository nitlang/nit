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

class InitArrayFn[E]
        super ConstFn[Array[E]]

        var initial_val: nullable E

        redef fun call: Array[E]
        do
                var xs = new Array[E]
                if initial_val != null then
                        xs.push(initial_val)
                end
                return xs
        end
end

class SnakeCaseFn
        super Func1[String,String]

        redef fun call(x: String): String
        do
                return x.to_snake_case
        end
end

class UpperCaseFn
        super Func1[String, String]

        redef fun call(x: String): String
        do
                return x.to_upper
        end
end

class IsLetterFn
        super Func1[Char, Bool]

        redef fun call(c: Char): Bool
        do
                return c.is_letter
        end
end

class AddOneFn
        super Func1[Int,Int]

        redef fun call(x: Int): Int
        do
                return x + 1
        end
end

class CharsFn
        super Func1[String, Iterator[Char]]

        redef fun call(str): Iterator[Char]
        do
                return str.chars.iterator
        end
end

class A

        fun titi: A
        do
                return new A
        end
end

class B
        super A

        fun toto
        do
                print "B::toto"
        end

        redef fun titi: B
        do
                return new B
        end
end

class TotoFn
        super Func1[B, Unit]

        redef fun call(b: B): Unit
        do
                b.toto
                return new Unit
        end
end

class TitiFn
        super Func1[A,A]
        redef fun call(a: A): A
        do
                return a.titi
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


fun new_int_arr(x: nullable Int): InitArrayFn[Int]
do
        return new InitArrayFn[Int](x)
end

fun snake_case_fn: SnakeCaseFn
do
        return new SnakeCaseFn
end

fun upper_fn: UpperCaseFn
do
        return new UpperCaseFn
end

fun is_letter_fn: IsLetterFn
do
        return new IsLetterFn
end

fun add_one: AddOneFn
do
        return new AddOneFn
end

fun chars_fn: CharsFn
do
        return new CharsFn
end


########
# Demo #
########

var xs = [1,2,3,4,5]
print xs.iterator.fold(0, sum_fn)
#print xs.iterator.foldl1(min_int_fn)


var ys = [45,424,11,43,7,5,8,9,1,-100]
print ys.iterator.fold1(min_int_fn)


var zs = ["helloWorld", "worldHello", "testCase"]
print zs.iterator.map(snake_case_fn).map(upper_fn).to_array

var hmap = new HashMap[Int, Array[Int]]
var vs = hmap.entry(1)
        .or_insert_with(new_int_arr(1))
        .
print hmap[1]


var cs = "aaa123b4bb3333c1c32c"
assert cs.iterator.filter(is_letter_fn).collect(new StringCollector) == "aaabbbccc"

var cs2 = "123456"

assert not cs2.iterator.any(is_letter_fn)
assert cs.iterator.any(is_letter_fn)
assert not cs.iterator.all(is_letter_fn)

print xs.iterator.enumerate.to_array

zs = ["aaa","bbb","ccc"]
assert zs.iterator.flat_map(chars_fn).collect(new StringCollector) == "aaabbbccc"




#var ls = [new A, new A, new A]
#ls.iterator.for_each(new TotoFn)

var b: A = new B
var ls = [b, new A, new A]

print ls.iterator.map(new TitiFn).to_array
