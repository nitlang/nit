# Generic Classes

Generic classes are defined with formal generic parameters
declared within brackets. Formal generic parameters can then be used as
a regular type inside the class. Generic classes must always be
qualified when used.

~~~
class Pair[E]
    var first: E
    var second: E
    fun is_same: Bool
    do
        return self.first == self.second
    end
end
var p1 = new Pair[Int](1, 2)
print p1.second * 10 # outputs "20"
print p1.is_same # outputs "false"
var p2 = new Pair[String]("hello", "world")
p2.first = "world"
print p2.is_same # outputs "true"
~~~

Unlike many object-oriented languages, generic classes in Nit yield a
kind of sub-typing. For example, `Pair[Int]` is a subtype of
`Pair[Object]`.
