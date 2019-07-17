# Constructors

Constructors in Nit behave differently.

Their objective is double :

* be compatible with full multiple-inheritance
* be simple enough to be KISS and compatible with the principle of least surprise.


## `new` construction and simple classes

Classes in OO models are often a simple aggregates of attributes and methods.

By default, the `new` construction require a value for each attribute defined in a class without a default value.

~~~
class Product
	var id: String
	var description: String
	var price: Float
end
var p = new Product("ABC", "Bla bla", 15.95)
assert p.id == "ABC"
~~~

In subclasses, additional attributes are automatically collected.

~~~
class Book
	super Product
	var author: String
end

var book = new Book("ABC", "Bla bla", 15.95, "John Doe")
~~~


## special `init` method

The special init method is automatically invoked after the end of a `new` construction.
It is used to perform additional systematic tasks.

Because the `init` is run at the end of the initialization sequence, initialized attributes are usable in the body.

~~~
class OverpricedProduct
	super Product
	init
	do
		price = price * 10.0
	end
end
var op = new OverpricedProduct("ABC", "Bla bla", 15.95)
assert op.price == 159.50
~~~


## Uncollected attributes

There is three cases for an attributes to not be collected in the `new`.

* Attributes with a default value
* Attributes with the annotation `noinit`
* Attributes introduced in refinement of classes

~~~
class TaxedProduct
	super Product
	var tax_rate = 9.90
	var total_price: Float is noinit
	init
	do
		total_price = price * (1.0 + tax_rate/100.0)
	end
end
var tp = new TaxedProduct("ABC", "Bla bla", 15.95)
assert tp.total_price == 17.52905
~~~

Note: The orchestration here is important. In order, the following is executed:

1. All defauts values are computed and set
2. Setters are invoked.
3. `init` is invoked.

Therefore, `total_price` cannot be initialised with a default value, because at the time of the computation of the default values, the attribute `price` in not yet initialised.


## Generalized initializers

Initializers are methods that are automatically invoked by the new.
In fact, by default, the setter of an attribute is used as a initializer.

`autoinit` is used to register a method as a setter.

~~~
class FooProduct
	super Product
	fun set_xy(x, y: Int) is autoinit do z = x * 10 + y
	var z: Int is noinit
end
var fp = new FooProduct("ABC", "Bla bla", 15.96, 1, 3)
assert fp.z == 13
~~~

Generalized setters are a powerful tool but often needed in only rare specific cases.
In most case, there is no reason that an argument of a `new` construction is not stored in the object as a real attribute.


## Inheritance

As explained above, one of the main advantage of these constructors is their compatibility with multiple inheritance.

~~~
class MultiProduct
	super OverpricedProduct
	super TaxedProduct
	super FooProduct
end
var mp = new MultiProduct("ABC", "Bla bla", 15.96, 1, 3)
assert mp.id == "ABC"
assert mp.price == 159.6
assert mp.total_price == 175.4
assert mp.z == 13
~~~


## Named init

Named `init` are less flexible trough inheritance, thus should no be used.
They allow to have additional constructor for classes and more control in the construction mechanism.

~~~
class Point
	var x: Float
	var y: Float

	init origin
	do
		init(0.0, 0.0)
	end

	init polar(r, phi: Float)
	do
		var x = r * phi.cos
		var y = r * phi.sin
		init(x, y)
	end

	redef fun to_s do return "({x},{y})"
end
var p1 = new Point(1.0, 2.0)
assert p1.to_s ==  "(1,2)"
var p2 = new Point.origin
assert p2.to_s ==  "(0,0)"
var p3 = new Point.polar(1.0, 2.0)
assert p3.to_s ==  "(-0.4161,0.9092)"
~~~


## Legacy `init`

nameless `init` defined with argument or with an explicit visibility are still accepted as a fallback of the old-constructors.
They should not be used since they will be removed in a near future.


## `new` factories

`new` factories permit to completely shortcut the class instantiation mechanim.
It could be used to provide `new` syntax on non-concrete class (mainly `extern class`).

`new` factories behave like a top-level function that return the result of the construction.
It is basically some kind of syntactic sugar.

~~~
abstract class Person
	var age: Int
	new(age: Int)
	do
		if age >= 18 then
			return new Adult(age)
		else
			return new Child(age)
		end
	end
end
class Adult
	super Person
	# ...
end
class Child
	super Person
	# ...
end
~~~
