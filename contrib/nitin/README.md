# An experimental Nit interactive interpreter

This tool is outside src/ because:

1. Is is greatly experimental
2. It can depend on readline (GPL3) whereas the rest of nitc is Apache2.
   Both are compatible but the final binary result is GLP3.

## Features

* use GNU readline to read lines
* use importation/refinement to handle incremental execution (so basically everything works out of the box)
* maintain an interpreter and live objects (the model grows but the interpreter and runtime data are reused)

Main missing features

* top-level variables are local
* runtime error/aborts just abort the interactive loop
* FFI is strange
* No model/object inspection

## Examples

`-->` is the prompt, `...` the continuation prompt. What follows is the user input.
The rest is the output.

### Basic instructions

~~~raw
$ nitin
--> print 5+2
7
~~~

### Complex and control statements

~~~raw
-->for i in [0..5[ do
...print i
...end
0
1
2
3
4
~~~

You can use `do` blocks to delay the execution and control the scope of variables.

~~~raw
-->do
...var sum=0
...for i in [0..50[ do
...sum += i
...end
...print sum
...end
1225
~~~

### Classes and methods

~~~raw
-->class A
...fun foo do
...print "hello"
...end
...end
-->(new A).foo
hello
~~~

### Error management

In case of static errors, the history (up arrow) can be reused and updated.

~~~raw
-->class
...end
	end
	^: Syntax Error: unexpected keyword 'end'.
-->class A   **up arrow and update, thanks readline**
end
1,7: Redef Error: `A` is an imported class. Add the `redef` keyword to refine it.
	class A
	      ^
-->redef class A **up arrow and update again, thanks readline**
redef fun foo do print "Bye"
end
-->(new A).foo
bye
~~~

### Class refinement

Already instantiated objects gain the new methods, attributes and specializations.
However, the new attributes are left uninitialized (default values or init are not recomputed on existing objects)

Top-level methods automatically refine Sys.

~~~raw
-->foo
1,1--3: Error: method or variable `foo` unknown in `Sys`.
	foo
	^
-->fun foo do
...print "I'm sys"
...end
-->foo
I'm sys
~~~

You can store global variables as attributes of Sys

~~~raw
-->redef class Sys
...var my_int: Int is writable
...end
-->my_int = 5
-->print my_int
5
~~~

### Dynamic importation

~~~
-->print([0..10[.to_a.to_json)
1,20--26: Error: method `to_json` does not exists in `Array[Int]`.
	print([0..10[.to_a.to_json)
	                   ^
-->import json
-->print([0..10[.to_a.to_json)
[0,1,2,3,4,5,6,7,8,9]
~~~
