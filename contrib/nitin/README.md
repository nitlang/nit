# An experimental Nit interactive interpreter

This tool is outside src/ because:

1. Is is greatly experimental
2. It can depend on readline (GPL3) whereas the rest of nitc is Apache2.
   Both are compatible but the final binary result is GLP3.

## Features

* use GNU readline to read lines
* use importation/refinement to handle incremental execution (so basically everything works out of the box)
* maintain an interpreter and live objects (the model grows but the interpreter and runtime data are reused)
* runtime errors/aborts return to the interactive loop
* top-level variables are preserved but are only visible at the top level
* Basic FFI

Main missing feature

* No model/object inspection

## Examples

`-->` is the prompt, `...` the continuation prompt. What follows is the user input.
The rest is the output.

### Basic instructions

~~~raw
$ nitin
--> print 5+2
7
--> var a = 5
--> print a + 3
8
~~~

### Complex and control statements

~~~raw
-->var sum=0
-->for i in [0..5[ do
...print i
...sum += i
...end
0
1
2
3
4
-->print sum
10
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

Class refinement is available

~~~raw
-->redef class String
...fun foo: String do return self + "foo"
...end
-->print "hello".foo
hellofoo
~~~

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

Already instantiated objects gain the new methods, attributes and specializations.

~~~raw
-->class A
...end
-->var a = new A
-->print a
--><A:#561daea16660>
-->redef class A
...redef fun to_s do return "A"
...end
-->print a
A
~~~

However, the new attributes are left uninitialized (default values or init are not recomputed on existing objects)

~~~raw
-->redef class A
...var v = "foo"
...redef fun to_s do return "A:{v}"
...end
--->print a
Runtime error: Uninitialized attribute _v
	redef fun to_s do return "A:{v}"
	                             ^
,---- Stack trace -- - -  -
| input-6$A$to_s (13,30)
| file$Sys$print (lib/core/file.nit:1694,19--29)
| input-7$Sys$main (15,1--7)
`------------------- - -  -
-->a.v = "bar"
-->print a
A:bar
~~~

### Dynamic importation

~~~raw
-->print([0..10[.to_a.to_json)
1,20--26: Error: method `to_json` does not exists in `Array[Int]`.
	print([0..10[.to_a.to_json)
	                   ^
-->import json
-->print([0..10[.to_a.to_json)
[0,1,2,3,4,5,6,7,8,9]
~~~

### FFI

The FFI is handled as with the non-interactive interpreter.

~~~raw
-->fun hello `{
...puts("Hello, world");
...`}
-->hello
Hello, world
~~~
