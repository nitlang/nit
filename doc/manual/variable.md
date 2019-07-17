# Local Variables and Static Typing

`var` declares local variables. In fact there is no global variable in Nit, so in this document *variable* always refers to a local variable. A variable is visible up to the end of the current
control structure. Two variables with the same name cannot coexist: no nesting nor masking.

Variables are bound to values. A variable cannot be used unless it has a value in all control flow paths (à la Java).

~~~
var x
var y
if whatever then
    x = 5
    y = 6
else
    x = 7
end
print x # OK
print y # Compile error: y is possibly not initialized
~~~

## Adaptive Typing

Nit features adaptive typing, which means that the static type of a variable can change according to: the assignments of variables, the control flow, and some special operators (`and`, `or`,
`or else`, `==`, `!=`, and `isa`).

~~~
var x # a variable
x = 5
# static type is Int
print x + 1 # outputs 6
x = [6, 7]
# static type is Array[Int]
print x[0] # outputs "6"

var x
if whatever then
    x = 5
else
    x = 6
end
# Static type is Int
~~~

## Variable Upper Bound

An optional type information can be added to a variable declaration. This type is used as an upper bound of the type of the variable. When a initial value is given in a variable declaration without a specific type information, the static type of the initial value is used as an upper bound. If no type and no initial value are given, the upper bound is set to `nullable Object`.

~~~
var x: Int # Upper bound is Int
x = "Hello" # Compile error: expected Int
var y: Object # Upper bound is Object
y = 5 # OK since Int specializes Object
var z = 5 # Upper bound is Int
z = "Hello" # Compile error: expected Int
var t: Object = 5 # Upper bound is Object
t = "Hello" # OK
~~~

The adaptive typing flow is straightforward, therefore loops (`for`, `while`, `loop`) have a special requirement: on entry, the upper bound is set to the current static type; on exit, the upper bound is reset to its previous value.

~~~
var x: Object = ...
# static type is Object, upper bound is Object
x = 5
# static type is Int, bound remains Object
while x > 0 do
    # static type remains Int, bound sets to Int
    x -= 1 # OK
    x = "Hello" # Compile error: expected Int
end
# static type is Int, bound reset to Object
x = "Hello" # OK
~~~

## Type Checks

`isa` tests if an object is an instance of a given type. If the expression used in an `isa` is a variable, then its static type is automatically adapted, therefore avoiding the need of a specific cast.

~~~
var x: Object = whatever
if x isa Int then
    # static type of x is Int
    print x * 10 # OK
end
~~~

Remember that adaptive typing follows the control flow, including the Boolean operators.

~~~
var a: Array[Object] = ...
for i in a do
    # the static type of i is Object
    if not i isa Int then continue
    # now the static type of i is Int
    print i * 10 # OK
end
~~~

An interesting example:

~~~
var max = 0
for i in whatever do
    if i isa Int and i > max then max = i
    # the > is valid since, in the right part
    # of the "and", the static type of i is Int
end
~~~

Note that type adaptation occurs only in an `isa` if the target type is more specific that the current type.

~~~
var a: Collection[Int] = ...
if a isa Comparable then
    # the static type is still Collection[Int]
    # even if the dynamic type of a is a subclass
    # of both Collection[Int] and Comparable
    ...
end
~~~

## Nullable Types

`null` is a literal value that is only accepted by some specific static types. However, thanks to adaptive typing, the static type management can be mainly automatic.

`nullable` annotates types that can accept `null` or an expression of a compatible nullable static type.

~~~
var x: nullable Int
var y: Int
x = 1 # OK
y = 1 # OK
x = null # OK
y = null # Compile error
x = y # OK
y = x # Compile error
~~~

Adaptive typing works well with nullable types.

~~~
var x
if whatever then
    x = 5
else
    x = null
end
# The static type of x is nullable Int
~~~

Moreover, like the `isa` keyword, the `==` and `!=` operators can adapt the static type of a variable when compared to `null`.

~~~
var x: nullable Int = whatever
if x != null then
    # The static type of x is Int (without nullable)
    print x + 6
end
# The static type of x is nullable Int
~~~

And another example:

~~~
var x: nullable Int = whatever
loop
    if x == null then continue
    # The static type of x is Int
end
~~~

`or else` can be used to compose a nullable expression with any other expression. The value of `x or else y` is `x` if `x` is not `null` and is `y` if `x` is null. The static type of `x or else y` is the combination of the type of `y` and the not null version of the type of `x`.

~~~
var i: nullable Int = ...
var j = i or else 0
# the static type of j is Int (without nullable)
~~~

Note that nullable types require a special management for [[attributes|attribute]] and [[constructors|constructor]].

## Explicit Cast

`as` casts an expression to a type. The expression is either casted successfully or there is an `abort`.

~~~
var x: Object = 5 # static type of x is Object
print x.as(Int) * 10 # outputs 50
print x.as(String) # aborts: cast failed
~~~

Note that `as` does not change the object nor does perform conversion.

~~~
var x: Object = 5 # static type of x is Object
print x.as(Int) + 10 # outputs "15"
print x.to_s + "10" # outputs "510"
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
var x: nullable Int = 5 # static type of x is nullable Int
print x.as(not null) * 10 # cast, outputs 50
print x.as(Int) * 10 # same cast, outputs 50
assert x != null # same cast, but type of x is now Int
print x * 10 # outputs 50
~~~

## Static Type Combination Rule

Adaptive typing, literal arrays, and `or else` need to determine a static type by combining other static types. This is done by using the following rule:

-   The final type is `nullable` if at least one of the types is `nullable`.

-   The final type is the static type that is more general than all the other types.

-   If there is no such a type, and the thing typed is a variable, then the final type is the upper bound type of the variable; else there is a compilation error.

<!-- -->

~~~
var d: Discrete = ...
# Note: Int < Discrete < Object
var x
if whatever then x = 1 else x = d
# static type is Discrete
if whatever then x = 1 else x = "1"
# static type is nullable Object (upper bound)
var a1 = [1, d] # a1 is a Array[Discrete]
var a2 = [1, "1"] # Compile error:
        # incompatible types Int and String
~~~
