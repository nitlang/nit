# Classes

`interface`, `abstract class`, `class` and `enum` are the four kinds of classes. All these classes can be in multiple inheritance, can define new methods and redefine inherited method (yes, even interfaces).

Here are the differences:

-   interfaces can only specialize other interfaces, cannot have     attributes, cannot have constructors, cannot be instantiated.

-   abstract classes cannot specialize enums, can have attributes, must have constructors, cannot be instantiated.

-   concrete classes (i.e. `class`) cannot specialize enums, can have attributes, must have constructors, can be instantiated.

-   enums (e.g. `Int` or `Bool`) can only specialize interfaces, cannot have attributes, cannot have constructors, have proper instances but they are not instantiated by the programmer—it means no `new Int`. Note that at this point there is no user-defined enums.

All kinds of classes must have a name, can have some superclasses and can have some definitions of properties. Properties are methods, attributes, constructors and virtual types. All kinds of classes can also be generic. When we talk about “classes” in general, it means all these four kinds. We say “concrete classes” to designate only the classes declared with the `class` keyword alone.

## Class Specialization

`super` declares superclasses. Classes inherit methods, attributes and virtual-types defined in their superclasses. Currently, constructors are inherited in a specific manner.

`Object` is the root of the class hierarchy. It is an interface and all other kinds of classes are implicitly a subclass of `Object`.

There is no repeated inheritance nor private inheritance. The specialization between classes is transitive, therefore `super` declarations are superfluous (thus ignored).

## Class Refinement

`redef` allows modules to refine imported classes (even basic ones). Refining a class means:

-   adding new properties: methods, attributes, constructors, virtual types;

-   redefining existing properties: methods and constructors;

-   adding new superclasses.

Note that the kind or the visibility of a class cannot be changed by a refinement. Therefore, it is allowed to just write `redef class X` whatever is the kind or the visibility of `X`.

In programs, the real instantiated classes are always the combination of all their refinements.

~~~
redef class Int
    fun fib: Int
    do
        if self < 2 then return self
        return (self-1).fib + (self-2).fib
    end
end
# Now all integers have the fib method
print 15.fib # outputs 610
~~~
