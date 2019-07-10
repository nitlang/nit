# Virtual Types

`type` declares a virtual types in a class. A bound type is
mandatory. Virtual types can then be used as regular types in the class
and its subclasses. Subclasses can also redefine it with a more specific
bound type. One can see a virtual type as an internal formal generic
parameter or as a redefinable *typedef*.

~~~
class Foo
    type E: Object
    var derp: E
end
class Bar
    super Foo
    redef type E: Int
end
var b = new Bar(5)
print b.derp + 1 # outputs 6
~~~
