# Local Variables and Static Typing

`var` declares local variables. In fact, there is no global variable in Nit, so in this document *variable* always refers to a local variable. A variable is visible up to the end of the current
control structure. Two variables with the same name cannot coexist: no nesting nor masking.

Variables are bound to values. A variable cannot be used unless it has a value in all control flow paths (à la Java).

~~~
var exp = 10
# ...
var a
if exp > 0 then
    a = 5
else
    a = 7
end
print a # OK
~~~

~~~nitish
var b
if exp > 0 then
    b = 6
end
print b # Compile error: y is possibly not initialized
~~~

## Adaptive Typing

Nit features adaptive typing, which means that the static type of a variable can change according to: the assignments of variables, the control flow, and some special operators (`and`, `or`,
`or else`, `==`, `!=`, and `isa`).

~~~
var c # a variable
c = 5
# static type is Int
print c + 1 # outputs 6
c = [6, 7]
# static type is Array[Int]
print c[0] # outputs "6"
~~~

~~~
# ...
var d
if exp > 0 then
    d = 5
else
    d = 6
end
# Static type is Int
print d + 1
~~~

## Variable Upper Bound

An optional type information can be added to a variable declaration. This type is used as an upper bound of the type of the variable. When an initial value is given in a variable declaration without a specific type information, the static type of the initial value is used as an upper bound. If no type and no initial value are given, the upper bound is set to `nullable Object`.

~~~nitish
var e: Int # Upper bound is Int
e = "Hello" # Compile error: expected Int

var f = 5 # Upper bound is Int
f = "Hello" # Compile error: expected Int
~~~

~~~
var g: Object # Upper bound is Object
g = 5 # OK since Int specializes Object

var h: Object = 5 # Upper bound is Object
h = "Hello" # OK
~~~

The adaptive typing flow is straightforward, therefore loops (`for`, `while`, `loop`) have a special requirement: on entry, the upper bound is set to the current static type; on exit, the upper bound is reset to its previous value.

~~~nitish
var l: Object
# static type is Object, upper bound is Object
l = 5
# static type is Int, bound remains Object
while l > 0 do
    # static type remains Int, bound sets to Int
    l -= 1 # OK
    l = "Hello" # Compile error: expected Int
end
# static type is Int, bound reset to Object
l = "Hello" # OK
~~~

## Type Checks

`isa` tests if an object is an instance of a given type. If the expression used in an `isa` is a variable, then its static type is automatically adapted, therefore avoiding the need of a specific cast.

~~~
var m: Object = 5
# ...
if m isa Int then
    # static type of m is Int
    print m * 10 # OK
end
~~~

Remember that adaptive typing follows the control flow, including the Boolean operators.

~~~
var n = new Array[Object]
n.add(1)
n.add(true)
n.add("one")
n.add(11)

for i in n do
    # the static type of i is Object
    if not i isa Int then continue
    # now the static type of i is Int
    print i * 10 # OK
end
~~~

An interesting example:

~~~
var max = 0
for i in n do
    if i isa Int and i > max then max = i
    # the > is valid since, in the right part
    # of the "and", the static type of i is Int
end
print max # outputs 11
~~~

Note that type adaptation occurs only in an `isa` if the target type is more specific than the current type.

~~~
var col: Collection[Int] = [1, 2, 3]
if col isa Comparable then
    # the static type is still Collection[Int]
    # even if the dynamic type of a is a subclass
    # of both Collection[Int] and Comparable
    # ...
end
~~~

## Nullable Types

`null` is a literal value that is only accepted by some specific static types. However, thanks to adaptive typing, the static type management can be mainly automatic.

`nullable` annotates types that can accept `null` or an expression of a compatible nullable static type.

~~~
var o: nullable Int
var p: Int
o = 1 # OK
p = 1 # OK
o = null # OK
o = p # OK
~~~

~~~nitish
p = null # Compile error
p = o # Compile error
~~~

Adaptive typing works well with nullable types.

~~~
var q
if exp > 0 then
    q = 5
else
    q = null
end
# The static type of q is nullable Int
~~~

Moreover, like the `isa` keyword, the `==` and `!=` operators can adapt the static type of a variable when compared to `null`.

~~~
var r: nullable Int = 10
# ...
if r != null then
    # The static type of r is Int (without nullable)
    print r + 6
end
# The static type of r is nullable Int
~~~

And another example:

~~~
var s: nullable Int = 10
# ...
loop
    if s == null then break
    # The static type of s is Int
    print s + 1

    s = null
    # The static type of s is null
end
~~~

`or else` can be used to compose a nullable expression with any other expression. The value of `x or else y` is `x` if `x` is not `null` and is `y` if `x` is null. The static type of `x or else y` is the combination of the type of `y` and the not null version of the type of `x`.

~~~
var t: nullable Int = 10
# ...
var u = t or else 0
# the static type of u is Int (without nullable)
~~~

Note that nullable types require a special management for [[attributes|attribute]] and [[constructors|constructor]].

## Explicit Cast

`as` casts an expression to a type. The expression is either casted successfully or there is an `abort`.

~~~
var v: Object = 5 # static type of v is Object
print v.as(Int) * 10 # outputs 50
~~~

~~~nitish
print v.as(String) # aborts: cast failed
~~~

Note that `as` does not change the object nor does perform conversion.

~~~
var w: Object = 5 # static type of w is Object
print w.as(Int) + 10 # outputs "15"
print w.to_s + "10" # outputs "510"
~~~

Because of type adaptation, `as` is rarely used on variables. `isa` (sometime coupled with `assert`) is preferred.

~~~
var x: Object = 5 # static type of x is Object
assert x isa Int
# static type of x is now Int
print x * 10 # outputs 50
~~~

`as(not null)` can be used to cast an expression typed by a nullable type to its non nullable version. This form keeps the programmer from writing explicit static types.

~~~
var y: nullable Int = 5 # static type of y is nullable Int
print y.as(not null) * 10 # cast, outputs 50
print y.as(Int) * 10 # same cast, outputs 50
assert y != null # same cast, but type of y is now Int
print y * 10 # outputs 50
~~~

## Static Type Combination Rule

Adaptive typing, literal arrays, and `or else` need to determine a static type by combining other static types. This is done by using the following rule:

-   The final type is `nullable` if at least one of the types is `nullable`.

-   The final type is the static type that is more general than all the other types.

-   If there is no such a type, and the thing typed is a variable, then the final type is the upper bound type of the variable; else there is a compilation error.

<!-- -->

~~~
var dis: Discrete = 'a'
# Note: Int < Discrete < Object
var z
if exp > 0 then z = 1 else z = dis
# static type is Discrete
if exp < 0 then z = 1 else z = "1"
# static type is nullable Object (upper bound)
var a1 = [1, dis] # a1 is a Array[Discrete]
~~~

~~~nitish
var a2 = [1, "1"] # Compile error:
        # incompatible types Int and String
~~~
