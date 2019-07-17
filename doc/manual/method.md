# Methods

`fun` declares methods. Methods must have a name, may have parameters, and may have a return type. Parameters are typed; however, a single type can be used for multiple parameters.

~~~
fun foo(x, y: Int, s: String): Bool ...
~~~

`do` declares the body of methods. Alike control structures, a one-liner version is available.
Therefore, the two following methods are equivalent.

~~~
fun next1(i: Int): Int
do
    return i + 1
end

fun next2(i: Int): Int do return i + 1
~~~

Inside the method body, parameters are considered as variables. They can be assigned and are subject to adaptive typing.

`self`, the current receiver, is a special parameter. It is not assignable but is subject to adaptive typing.

`return` exits the method and returns to the caller. In a function, the return value must be provided with a return in all control flow paths.

## Method Call

Calling a method is usually done with the dotted notation `x.foo(y, z)`. The dotted notation can be chained.

A method call with no argument does not need parentheses. Moreover, even with arguments, the parentheses are not required in the principal method of a statement.

~~~
var a = [1]
a.add 5 # no () for add
print a.length # no () for length, no () for print
~~~

However, this last facility requires that the first argument does not start with a parenthesis or a bracket.

~~~
foo (x).bar # will be interpreted as (foo(x)).bar
foo [x].bar # will be interpreted as (foo[x]).bar
~~~

## Method Redefinition

`redef` denotes methods that are redefined in subclasses or in class refinements. The number and the types of the parameters must be invariant. Thus, there is no need to reprecise the types of the parameters, only names are mandatory.

The return type can be redefined to be a more precise type. If same type is returned, there is no need to reprecise it.

The visibility, also, cannot be changed, thus there is also no need to reprecise it.

~~~
class Foo
    # implicitly an Object
    # therefore inherit '==' and 'to_s'
    var i: Int
    redef fun to_s do return "Foo{self.i}"
    redef fun ==(f) do return f isa Foo and f.i == self.i
end
~~~

## Abstract Methods

`is abstract` indicates methods defined without a body. Subclasses and refinements can then redefine it (the `redef` is still mandatory) with a proper body.

~~~
interface Foo
    fun derp(x: Int): Int is abstract
end
class Bar
    super Foo
    redef fun derp(x) do return x + 1
end
~~~

Concrete classes may have abstract methods. It is up to a refinement to provide a body.

## Call to Super

`super` calls the “previous” definition of the method. It is used in a redefinition of a method in a subclass or in a refinement, It can be used with or without arguments; in the latter case, the original arguments are implicitly used.

The `super` of Nit behave more like the `call-next-method` of CLOS that the `super` of Java or Smalltalk. It permits the traversal of complex class hierarchies and refinement. Basically, `super` is polymorphic: the method called by `super` is not only determined by the class of
definition of the method but also by the dynamic type of `self`.

The principle it to produce a strict order of the redefinitions of a method (the linearization). Each call to `super` call the next method definition in the linearization. From a technical point of view, the linearization algorithm used is based on C3. It ensures that:

-   A definition comes after its redefinition.

-   A redefinition in a refinement comes before a redefnition in its superclass.

-   The order of the declaration of the superclasses is used as the
    ultimate disambiguation.

<!-- -->

~~~
class A
    fun derp: String do return "A"
end
class B
    super A
    redef fun derp do return "B" + super
end
class C
    super A
    redef fun derp do return "C" + super
end
class D
    super B
    super C
    redef fun derp do return "D" + super
    # Here the linearization order of the class D is DBCA
    # D before B because D specializes B
    # B before A because B specializes A
    # D before C because D specializes C
    # C before A because C specializes A
    # B before C because in D 'super B' is before 'super C'
end
var b = new B
print b.derp # outputs "BA"
var d = new D
print d.derp # outputs "DBCA"
~~~

## Operators and Setters

Operators and setters are methods that require a special syntax for their definition and their invocation.

-   binary operators: `+`, `-`, `*`, `/`, `\%`, `==`, `<`, `>`, `<=`,`>=`, `<<`, `>>` and `<=>`. Their definitions require exactly one     parameter and a return value. Their invocation is done with `x + y` where `x` is the receiver, `+` is the operator, and `y` is the argument.

-   unary operator: `-`. Its definition requires a return value but no parameter. Its invocation is done with `-x` where `x` is the receiver.

-   bracket operator: `[]`. Its definition requires one parameter or more and a return value. Its invocation is done with `x[y, z]` where `x` is the receiver, `y` the first argument and `z` the second argument.

-   setters: `something=` where `something` can be any valid method identifier. Their definitions require one parameter or more and no return value. If there is only one parameter, the invocation is done with `x.something = y` where `x` is the receiver and y the argument. If there is more that one parameter, the invocation is done with `x.something(y, z) = t` where `x` is the receiver, `y` the first argument, `z` the second argument and `t` the last argument.

-   bracket setter: `[]=`. Its definition requires two parameters or more and no return value. Its invocation is done with `x[y, z] = t` where `x` is the receiver, `y` the first argument, `z` the second argument and `t` the last argument.

<!-- -->

~~~
class Foo
    fun +(a: Bar): Baz do ...
    fun -: Baz do ...
    fun [](a: Bar): Baz do ...
    fun derp(a: Bar): Baz do ...
    fun derp=(a: Bar, b: Baz) do ...
    fun []= (a: Bar, b: Baz) do ...
end
var a: Foo = ...
var b: Bar = ...
var c: Baz = ...
c = a + b
c = -b
c = a[b] # The bracket operator '[]'
c = a.derp(b) # A normal method 'derp'
a.derp(b) = c # A setter 'derp='
a[b] = c # The bracket setter '[]='
~~~

`+=` and `-=` are combinations of the assignment (`=`) and a binary operator. These feature are extended to setters where a single `+=` is in fact three method calls: a function call, the operator call, then a setter call.

~~~
a += c # equiv. a = a + c
a[b] += c # equiv. a[b] = a[b] + c
a.foo += c # equiv. a.foo = a.foo + c
a.bar(b) += c # equiv. a.bar(b) = a.bar(b) + c
~~~

## Variable Number of Arguments

A method can accept a variable number of arguments using ellipsis (`...`). The definition use `x: Foo...` where `x` is the name of the parameter and `Foo` a type. Inside the body, the static type of `x` is `Array[Foo]`. The caller can use 0, 1, or more arguments for the parameter `x`. Only one ellipsis is allowed in a signature.

~~~
fun foo(x: Int, y: Int..., z: Int)
do
    print "{x};{y.join(",")};{z}"
end
foo(1, 2, 3, 4, 5) # outputs "1;2,3,4;5"
foo(1, 2, 3) # outputs "1;2;3"
~~~

## Top-level Methods and Main Body

Some functions, like `print`, are usable everywhere simply without using a specific receiver. Such methods are just defined outside any classes. In fact, these methods are implicitly defined in the
`Object` interface, therefore inherited by all classes, therefore usable everywhere. However, this principle may change in a future version.

In a module, the main body is a bunch of statements at the end of a file. The main body of the main module is the program entry point. In fact, the main method of a program is implicitly defined as the redefinition of the method `main` of the `Sys` class; and the start of the program is the implicit statement `(Sys.new).main`. Note that because it is a redefinition, the main part can use `super` to call the “previous” main part in the imported modules. If there is no main part
in a module, it is inherited from imported modules.

Top-level methods coupled with the main body can be used to program in a pseudo-procedural way. Therefore, the following programs are valid:

~~~
print "Hello World!"
~~~

~~~
fun sum(i, j: Int): Int
do
    return i + j
end
print sum(4, 5)
~~~

## Intern and Extern Methods

`intern` and `extern` indicate concrete methods whose body is not written in Nit.

The body of `intern` methods is provided by the compiler itself for performance or bootstrap reasons. For the same reasons, some intern methods, like `+` in `Int` are not redefinable.

The body of `extern` methods is provided by libraries written in C; for instance, the system libraries required for input/output. Extern methods are always redefinable. See [[FFI]] for more information on `extern` methods.
