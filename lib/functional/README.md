# Nit functional types and Iterator API

Functional type classes hierarchy and functional `Iterator` API.

## Functional Types

There are two fundamental types: `FunX[0..X, RES]` and `Proc[0..X]`, both inherits
`Routine`. The `X` represents the arity of the routine, eg :

~~~
import functional

class A

        # to_s isa `Fun0[String]`.
        redef fun to_s do return "greeting from A"
end

# f isa `Fun2[Int,Int,Int]`
fun f(x: Int, y: Int): Int do return x + y

# g isa `Proc2[Int,Int]`
fun g(x: Int, y: Int) do print "{x + y}"
~~~

For a `FunX` type the arity doesn't count the return type.

**Note**: The arity doesn't count the receiver of the current class where the
method belongs.

## Iterator API

The new `Iterator` API provides all the classical functional style transformation:
map, for\_each, fold, fold1, flatmap, enumerate, any and all.

Most methods return a new `Iterator`, this allow us to chain them.
Here's an example in nitish:

~~~nitish
import functional

fun addone(x: Int): Int do return x + 1
fun square(x: Int): Int do return x * x
fun add(x:Int, y: Int): Int do return x + y

var xs = [1,2,3,4,5,6,7,8,9,10]

assert xs.iterator.map(&square).map(&addone).fold(0, &add) == 395
~~~

Some functions collapse the iterator into one value : `all`, `any`, `fold`,
`fold1`, `for_each` (void-like).

**Note**: Most of the new methods tries to be lazy. However, `Iterator::order_by`
consume the entire iterator and `Iterator::filter` might consume the entire iterator.

## Usage

To use the new API you must include in your file `import functional`.

## Notes

- The module `functional::functional_gen` is only used to generate `functional::functional_types`.
