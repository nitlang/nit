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

Some structures alter the control flow but are not described in this
section: `and`, `or`, `not`, `or else` and `return`.

Note that the control flow is determined only from the position, the
order and the nesting of the control structures. The real value of the
expressions used has no effect on the control flow analyses.

~~~
if true then
    return
else
    return
end
print 1 # Compile error: unreachable statement

if true then
    return
end
print 1 # OK, but never executed
~~~

## if

~~~
if exp then stm
if exp then stm else stm
if exp then
    stms
end

if exp then
    stms
else if exp then
    stms
else
    stms
end
~~~

Note that the following example is invalid since the first line is
syntactically complete thus the newline terminate the whole `if`
structure; then an error is signaled since a statement cannot begin with
`else`.

~~~
if exp then stm # OK: complete 'if' structure
else stm # Syntax error: unexpected 'else'
~~~

## while

~~~
while exp do stm
while exp do
    stms
end
~~~

## for

`for` declares an automatic variable used to iterates on `Collection` (`Array` and `Range` are both `Collection`).

~~~
for x in [1..5] do print x # outputs 1 2 3 4 5
for x in [1, 4, 6] do
    print x # outputs 1 4 6
end
~~~

`for` can also be used with reversed ranges to iterate in reverse order.

Step can also be used to specify the size of each increment at the end of a for cycle.

~~~
for x in [9 .. 4].step(-1) do print x # outputs 9 8 7 6 5 4
for x in [9 .. 4[.step(-2) do print x # outputs 9 7 5
~~~

## loop

Infinite loops are mainly used with breaks. They are useful to implement *until* loops or to simulate the *exit when* control of Ada.

~~~
loop
    stms
    if exp then break
    stms
end
~~~

Note that `loop` is different from `while true` because the control flow does not consider the values of expression.

## do

Single `do` are used to create scope for variables or to be attached with labeled breaks.

~~~
do
    var x = 5
    print x
end
# x is not defined here
~~~

## break, continue and label

Unlabeled `break` exits the current `for`, `while`, `loop`, Unlabeled `continue` skips the current `for`, `while`, `loop`.

`label` can be used with `break` or `continue` to act on a specific control structure (not necessary the current one). The corresponding `label` must be defined after the `end` keyword of the designated control structure.

~~~
for i in [0..width[ do
    for j in [0..height[ do
        if foo(i, j) then break label outer_loop
        # The 'break' breaks the 'for i' loop
    end
end label outer_loop
~~~

`label` can also be used with `break` and single `do` structures.

~~~
do
    stmts
    if expr then break label block
    stmts
end label block
~~~

## abort

`abort` stops the program with a fatal error and prints a stack trace. Since there is currently no exception nor run-time-errors, abort is somewhat used to simulate them.

## assert

`assert` verifies that a given Boolean expression is true, or else it aborts. An optional label can be precised, it will be displayed on the error message. An optional `else` can also be added and will be executed before the abort.

~~~
assert bla: whatever else
    # "bla" is the label
    # "whatever" is the expression to verify
    print "Fatal error in module blablabla."
    print "Please contact the customer service."
end
~~~
