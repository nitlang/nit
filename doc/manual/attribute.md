# Attributes

`var`, used inside concrete and abstract classes, declares attributes. Attributes require a static type and can possibly have an initial value (it may be any kind of expression, even including
`self`)

~~~
class Foo
    var i: Int = 5
    fun dec(x: Int)
    do
        var k = self.i
        if k > x then self.i = k - x else self.i = 0
    end
end
~~~

Note that from an API point of view, there is no way to distinguish the read access of an attribute with a normal method neither to distinguish a write access of an attribute with a setter. Therefore, the read access of an attribute is called a getter while the write access is called a setter.

~~~
var x = foo.bar # Is bar an attribute or a method?
foo.bar = y # Is bar an attribute or a setter?
# In fact, we do not need to know.
~~~

## Visibility of Attributes

By default, a getter is public and a setter is private. The visibility of getters can be precised with the `private` or `protected` keywords. The visibility of setters can be specified with an
additional `writable` keyword.

~~~
class Foo
    var pub_pri: X
    protected var pro_pri: X
    var pub_pub: X is writable
    private var pri_pro: X is protected writable
    var pub_pri2: X is private writable # the default
end
~~~

## Redefinition of Attributes

Getters and setters of attributes behave like genuine methods that can be inherited and redefined. Getters and setters can also redefine inherited methods. `redef var` declares that the getter is
a redefinition while `redef writable` declares that the setter is a redefinition.

~~~
interface Foo
    fun derp: Int is abstract
    fun derp=(o: Int) is abstract
end
class Bar
    super Foo
    redef var derp: Int redef writable
end
class Baz
    super Bar
    redef fun derp do ...
    redef fun derp=(o) do ...
end
~~~
