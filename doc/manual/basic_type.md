# Basic Types

## Object

Nit is a full object language. Every value is an instance of a
class. Even the basic types described in this section.

`Object` is the root of the class hierarchy. All other classes,
including the basic ones, are a specialization of `Object`.

Classes, methods and operators presented in this section are defined in
the standard Nit library that is implicitly imported by every module.
Many other classes and methods are also defined in the standard library.
Please look at the specific standard library documentation for all
details.

## Int and Float

`1`, `-1` are `Int` literals, and `1.0`, `-0.1` are `Float`
literals. Standard arithmetic operators are available with a common
precedence rules: `*`, `/`, and `%` (modulo) ; then `+` and `-`. Some
operators can be composed with the assignment (`=`).

~~~
var i = 5
i += 2
print i # outputs 7
~~~

Conversion from `Int` to `Float` and `Float` to `Int` must be done with
the `to_f` and `to_i` methods.

## String

Literal strings are enclosed within quotes (`"`).
To insert a value
inside a literal string, include the values inside braces (`{}`).
Braces has to be escaped.
`+` is the concatenation operator but is less efficient than the brace form.

~~~
var j = 5
print "j={j}; j+1={j+1}" # outputs "j=5; j+1=6"
~~~

Common escaping sequences are available (`\"`, `\n`, `\t`, etc.) plus the escaped brace `\{`.

~~~
print "hel\"lo\nwo\{rld"
# outputs `hel"lo` on a first line
# and `wo{rld` on a second line
~~~

Multi-line strings are enclosed with triple quotes (`"""`).
Values are inserted with a triple braces (`{{{value}}}`).
The multi-line form thus allows verbatim new-lines, quotes and braces

~~~
print """some text
with line breaks
and characters like " and {
but {{{ 1+2 }}} is rendered as 3
"""
~~~

All objects have a `to_s` method that converts the object to a String.
`print` is a top-level method that takes any number of arguments and
prints to the standard output. `print` always add a newline, another
top-level method, `printn`, does not add the newline.

~~~
var x: String
x = 5.to_s # -> the String "5"
print x # outputs "5"
~~~

## Bool

`true` and `false` are the only two `Bool` values. Standard
Boolean operators are available with the standard precedence rule:
`not`; then `and`; then `or`.

Common comparison operators are available: `==` and `!=` on all objects;
`<`, `>`, `<=`, `>=` and `<=>` on `Comparable` objects (which include
`Int`, `String` and others).

- `==`, `<`, `>`, `<=`, `>=` and `<=>` are standard Nit operators (so they are redefinable).

- `and`, `or` and `not` are not standard Nit operators: they are not
  redefinable, also they are lazy and have adaptive typing flow
  effects.

- `==` is not for reference equality but for value equality (like
  `equals` in Java). There is a special reference equality operator,
  `is`, but it cannot be redefined and its usage is not recommended.
  Note also that while `==` is redefinable, it has a special adaptive
  typing flow effect when used with `null`.

- `!=` is not a standard Nit operator. In fact `x != y` is
  syntactically equivalent to `not x == y`.

## Array

`Array` is a generic class, thus `Array[Int]` denotes an array
of integers and `Array[Array[Bool]]` denotes an array of array of
Booleans. Literal arrays can be declared with the bracket notation
(`[]`). Empty arrays can also be instantiated with the `new` keyword and
elements added with the `add` method. Elements can be retrieved or
stored with the bracket operator.

~~~
var a = [1, 2, 3, 4] # A literal array of integers
print a.join(":") # outputs "1:2:3:4"
var b = new Array[Int] # A new empty array of integers
b.add(10)
b.add_all(a)
b.add(20)
print b[0] # outputs "10"
print b.length # outputs "6"
b[1] = 30
print b.join(", ") # outputs "10, 30, 2, 3, 4, 20"
~~~

Note that the type of literal arrays is deduced using the static type
combination rule.

## Range

`Range` is also a generic class but accepts only `Discrete`
types (`Int` is discrete). There are two kinds of literal ranges, the
open one `[1..5[` that excludes the last element, and the closed one
`[1..5]` that includes it.

~~~
print([1..5[.join(":")) # outputs "1:2:3:4"
print([1..5].join(":")) # outputs "1:2:3:4:5"
~~~

Ranges are mainly used in `for` loops.

## HashMap

`HashMap` is a generic class that associates keys with values.
There is no literal hashmap, therefore the `new` keyword is used to
create an empty `HashMap` and the bracket operators are used to store
and retrieve values.

~~~
var h = new HashMap[String, Int]
# h associates strings to integers
h["six"] = 6
print h["six"] + 1 # outputs "7"
~~~
