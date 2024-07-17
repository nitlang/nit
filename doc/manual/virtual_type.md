# Virtual Types

Virtual type is a way to define in a class a property that is associated with a type.
This property can be used to type parameters, return of functions, variables, etc.
Virtual types are inherited by subclasses and can be redefined.

Virtual types is a good solution when:

  * A class need to refer to the real itself
  * Two class hierarchy are somewhat parallel
  * You want covariance

### Usage

Example, we have employees who work in standard office and bosses, that are technically employees, but they work in boss offices (that are improved offices with a fridge).

One way to model this is to use virtual types.
Virtual types are defined inside class (like methods and attributes) but with the keyword `type`.
Inside the class, the virtual type can be used (almost) like any other static type.

Subclasses can redefine (with `redef`) the virtual types they want to change.
The only requirement is that the new bound is a sub-type of the previous bound.

The redefinition of a virtual type is used by the compiler to prevent some type errors.
For example, assuming that boss' offices have a fridge:

~~~nitish
class Employee
    type OFFICE: Office
    var office: OFFICE
end
class Office
    # ...
end

class Boss
    super Employee
    redef type OFFICE: BossOffice
end
class BossOffice
    super Office
end

var e: Employee = ...
e.office.fridge.open # Compilation Error! Office has no method fridge
var b: Boss = ...
b.office.fridge.open # OK!
~~~
