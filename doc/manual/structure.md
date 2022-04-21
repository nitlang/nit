# Control Structures

Traditional procedural control structures exist in Nit. They
also often exist in two versions: a one-liner and a block version.

## Control Flow

Control structures dictate the control flow of the
program. Nit heavily refers to the control flow in its specification:

-   No unreachable statement;

-   No usage of undefined variables;

-   No function without a `return` with a value;

-   Adaptive typing.

Some structures alter the control flow, but are not described in this
section: `and`, `or`, `not`, `or else` and `return`.

Note that the control flow is determined only from the position, the
order and the nesting of the control structures. The real value of the
expressions used has no effect on the control flow analyses.

~~~nitish
if true then
    return
else
    return
end
print 1 # Compile error: unreachable statement
~~~

~~~
if true then
    return
end
print 1 # OK, but never executed
~~~

## if

~~~
var exp = true
# ...
if exp then print 1
if exp then print 2 else print 2
if exp then
    print 1
    print 2
end

if exp then
    print 1
    print 2
else if exp then
    print 10
    print 20
else
    print 100
    print 200
end
~~~

Note that the following example is invalid since the first line is
syntactically complete thus the newline terminate the whole `if`
structure; then an error is signaled since a statement cannot begin with
`else`.

~~~nitish
if exp then print 1 # OK: complete 'if' structure
else print 2 # Syntax error: unexpected 'else'
~~~

## while

~~~
var x = 0
while x < 10 do x += 1
print x # outputs 10

while x < 20 do
    print x # outputs 10 11 ... 19
    x += 1
end
~~~

## for

`for` declares an automatic variable used to iterates on `Collection` (`Array` and `Range` are both `Collection`).

~~~
for i in [1..5] do print i # outputs 1 2 3 4 5
for i in [1, 4, 6] do
    print i # outputs 1 4 6
end
~~~

`for` can also be used with reversed ranges to iterate in reverse order.

Step can also be used to specify the size of each increment at the end of a for cycle.

~~~
for i in [9 .. 4].step(-1) do print i # outputs 9 8 7 6 5 4
for i in [9 .. 4[.step(-2) do print i # outputs 9 7 5
~~~

## loop

Infinite loops are mainly used with breaks. They are useful to implement *until* loops or to simulate the *exit when* control of Ada.

~~~
loop
    print 1
    if exp then break
    print 2
end
~~~

Note that `loop` is different from `while true` because the control flow does not consider the values of expressions.

## do

Single `do` are used to create scoped variables or to be attached with labeled breaks.

~~~
do
    var j = 5
    print j
end
# j is not defined here
~~~

## break, continue and label

Unlabeled `break` exits the current `for`, `while`, `loop`, Unlabeled `continue` skips the current `for`, `while`, `loop`.

`label` can be used with `break` or `continue` to act on a specific control structure (not necessary the current one). The corresponding `label` must be defined after the `end` keyword of the designated control structure.

~~~
for i in [0..10[ do
    for j in [0..10[ do
        if i + j > 15 then break label outer_loop
	print "{i},{j}"
        # The 'break' breaks the 'for i' loop
    end
end label outer_loop
~~~

`label` can also be used with `break` and single `do` structures.

~~~
do
    print 1 # printed
    if exp then break label block
    print 2 # not printed because exp is true
end label block
~~~

## abort

`abort` stops the program with a fatal error and prints a stack trace. Since there is currently no exception nor run-time-errors, abort is somewhat used to simulate them.

## assert

`assert` verifies that a given Boolean expression is true, or else it aborts. An optional label can be precised, it will be displayed on the error message. An optional `else` can also be added and will be executed before the abort.

~~~
assert bla: exp else
    # `bla` is the label
    # `exp` is the expression to verify
    print "Fatal error in module blablabla."
    print "Please contact the customer service."
end
~~~
