% NITPRETTY(1)

# NAME

nitpretty - pretty print Nit code from Nit source files.

# SYNOPSIS

nitpretty [*options*]... FILE

# OPTIONS

`--dir`
:   Working directory (default is '.nitpretty')

`-o`, `--output`
:   Output name (default is pretty.nit)

`--diff`
:   Show diff between source and output

`--meld`
:   Show diff between source and output using meld

`--check`
:   Check format of Nit source files

    This option creates a temporary pretty printed file then checks if the output
    of the diff command on the source file and the pretty printed one is empty.

`--break-strings`
:   Break too long string literals

`--inline-do`
:   Force do keyword on the same line as the method signature

`--skip-empty`
:   Force formatting of empty lines

    By default empty lines are kept as they were typed in the file.
    When enabling this option, `nitpretty` will decide where to break lines and
    will put empty lines to separate properties and code blocks.

# SPECIFICATION

The specification of the pretty printing is described here.

* Default indentation level is one `'\t'` character and is increased by one for
  each indentation level.
* Default line max-size is 80.

### COMMENTS

There is many categories of comments:

`Licence comments` are attached to the top of the file no blank line before,
one after.

~~~nitish
# This is a licence comment

# Documentation for module `foo`
module foo
~~~

`ADoc` are documentation comments attached to a `AModule`, `AClassdef`, `APropdef`.

They are printed before the definition with a blank line before and no after
at the same indentation level than the definition.

~~~nitish
# Documentation for module `foo`
module foo

# Documentation for class `Bar`
class Bar
     # Documentation for method `baz`
     fun baz do end
end
~~~

`Block comments` are comments composed of one or more line rattached to nothing.
They are displayed with one blank line before and after at current indent level.

~~~nitish
<blank>
# block
# comment
<blank>
~~~

`Attached comments` are comments attached to a production.
They are printed as this.

~~~nitish
fun foo do # attached comment
end
~~~

`nitpretty` automatically remove multiple blanks between comments:

~~~nitish
# Licence
# ...
<blank>
# Block comment
~~~

### INLINING

Productions are automatically inlined when possible.

Conditions:

* The production must be syntactically inlinable
* The inlined production length is less than `PrettyPrinterVisitor::max-size`
* The production do not contains any comments

### MODULES

* There is a blank between the module declaration and its imports
* There is no blank between imports and only one after
* There is a blank between each extern block definition
* There is a blank between each class definition
* There is no blank line at the end of the module

~~~nitish
# Documentation for module `foo`
module foo

import a
import b
import c

# Documentation for class `Bar`
class Bar end

class Baz end # not a `ADoc` comment
~~~

### CLASSES

* There is no blank between the class definition and its super-classes declarations
* There is no blank between two inlined property definition
* There is a blank between each block definition
* There no blank line at the end of the class definition

~~~nitish
# Documentation for class `Bar`
class Bar end

class Baz
    super Bar

    fun a is abstract
    private fun b do end

    fun c do
        # ...
    end
end
~~~

Generic types have no space after or before brackets and are separated by a comma and a space:

~~~nitish
class A[E: Type1, F: Type1] end
~~~

### BLOCKS

* Inlined productions have no blank lines between them
* Block productions have a blank before and after

~~~nitish
var a = 10
var b = 0

if a > b then
     is positive
     print "positive"
end

print "end"
~~~

### CALLS AND BINARY OPS

Arguments are always printed separated with a comma and a space:

~~~nitish
foo(a, b, c)
~~~

Binary ops are always printed wrapped with spaces:

~~~nitish
var c = 1 + 2
~~~

Calls and binary ops can be splitted to fit the `max-size` constraint.
Breaking priority is given to arguments declaration after the comma.

~~~nitish
return foo("aaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbb",
    "cccccccccccccccccccccccccc")
~~~

Binary ops can also be broken to fit the `max-size` limit:

~~~nitish
return "aaaaaaaaaaaaaaaaaaaaaaaaaa" + "bbbbbbbbbbbbbbbbbbbbbbbbbbb" +
    "cccccccccccccccccccccccccc"
~~~

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
