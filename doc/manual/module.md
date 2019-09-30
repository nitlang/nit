# Modules

`module` declares the name of a module. While optional it is recommended to use it, at least for documentation purpose. The basename of the source file must match the name declared with `module`. The extension of the source file must be `nit`.

A module is made of, in order:

-   the module declaration;
-   module importations;
-   class definitions (and refinements) ;
-   top-level function definitions (and redefinitions) ;
-   main instructions .

## Module Importation

`import` declares dependencies between modules. By default (that is without any `import` declaration), a module publicly imports the module `standard`. Dependencies must not produce cycles. By importing a module, the importer module can see and use classes and properties defined in the imported module.

-   `import` indicates a public importation. Importers of a given module will also import its publicly imported modules. An analogy is using `#include` in a header file (`.h`) in C/C++.

-   `private import` indicates a private importation. Importers of a given module will not  automatically import its privately imported modules. An analogy is using `#include` in a body file (`.c`) in C/C++.

-   `intrude import` indicates an intrusive importation. `intrude` `import` bypasses the `private` visibility and gives to the importer module a full access on the imported module. Such an import may only be considered when modules are strongly bounded and developed together. The closest, but insufficient, analogy is something like including a body file in a body file in C/C++.

## Visibility

By default, all classes, methods, constructors and virtual types are public which means freely usable by any importer module. Once something is public it belongs to the API of the module and should not be changed.

`private` indicates classes and methods that do not belong to the API. They are still freely usable inside the module but are invisible in other modules (except those that use `intrude import`).

`protected` indicates restricted methods and constructors. Such methods belong to the API of the module but they can only be used with the `self` receiver. Basically, `protected` methods are limited to the current class and its subclasses. Note that inside the module (and in
intrude importers), there is still no restriction.

Visibility of attributes is more specific and is detailed in its own section.

~~~nitish
module m1
class Foo
    fun pub do ...
    protected fun pro
    do ...
    private fun pri
    do ...
end
private class Bar
    fun pri2 do ...
end
var x: Foo = ...
var y: Bar = ...
# All OK, it is
# inside the module
x.foo
x.pro
x.pro
y.pri2
~~~

<!-- -->

~~~nitish
module m2
import m1
class Baz
    super Foo
    fun derp
    do
        self.pro # OK
    end
end
var x: Foo = ...
x.pub # OK
x.pro # Compile error:
      # pro is protected
x.pri # Compile error:
      # unknown method pri

var y: Bar
# Compile error:
# unknown class Bar
~~~

## Visibility Coherence

In order to guarantee the coherence in the visibility, the following rules apply:

-   Classes and properties privately imported are considered private:     they are not exported and do not belong to the API of the importer.

-   Properties defined in a private class are private.

-   A static type is private if it contains a private class or a private     virtual type.

-   Signatures of public and protected properties cannot contain a private static type.

-   Bounds of public generic class and public virtual types cannot contain a private static type.
