# NAME

nit - interprets and debugs Nit programs.

# SYNOPSIS

nit [*options*] FILE [ARG]...

nit [*options*] - [ARG]...

nit [*options*] -e COMMAND [ARG]...

# DESCRIPTION

`nit` is the current official interpreter.
It takes the main module of a program as the first argument then the options and commands of the program.

    $ nit examples/hello_world.nit
    hello world

If `-` is used instead of a module, then the program is read from the standard input.
The whole program is read before its interpretation starts.

The Nit interpreter is usable and valid as a *shebang* interpreted directive.
It is however recommended to use with `/usr/bin/env` because the location of the executable is not standardized.

    #!/usr/bin/env nit
    print "hello world"

The interpreter includes an interactive debugger, it supports basic commands used for debugging a program much like GDB or such.
See the `DEBUGGER` section for details.


The behavior of the interpreter may differs slightly from the compiler.

First, the interpreted is the reference implementation for the specification of the Nit language.
That means if `nitc` and `nit` have a different behavior on a same program, it is likely that `nit` is right and `nitc` is wrong.

Second, the FFI is not yet implemented in the interpreter.
Only a subset of the standard methods are implemented with some hard-coded behaviors.
While it is enough to use most of the standard library, a lot of additional libraries may not be usable by the interpreter.

Last, `nit` is the *Naive Interpretation Tool*, it means that it is slow and may take an average of 50.000% in overhead comparatively to `nitc`(it also means that `nitc` is fast).
In practice, the slowness is not an issue for simple Nit scripts;
it is not a big deal if `nit` takes  millisecond to execute programs even if `nitc` only need microseconds.


# OPTIONS

Most options are the same than `nitc(1)`.
Here, only the specific one are indicated.

Note that, unlike in other Nit tools, the options *MUST* be indicated before the main module of a program.
Whatever follows it is used as arguments of the interpreted program.

    $ nit -e 'print args.first' -v
    -v

## COMMAND

### `-e`
Specifies the program from command-line.

The `-e` option runs a program written on the command line.
Like with ruby, perl, bash and other script language.

    $ nit -e 'print 5+5'
    10

### `-n`
Repeatedly run the program for each line in file-name arguments.

If no arguments are given, then `nit` iterates over the lines of the standard input (stdin).

    $ echo "hello world" | nit -n -e 'print sys.line.capitalized'
    Hello World

If some arguments are given, then `nit` considers that each argument is a filepath then it iterates on their lines.

## INTERPRETATION OPTIONS

### `--discover-call-trace`
Trace calls of the first invocation of methods.

Each time a method is invoked for the first time, its information is printed on the standard output for error (`stderr`).

This option helps the user to have a simplified but humanly readable overview of the behavior of a particular program execution.

## DEBUGGER OPTIONS

### `-d`
Launches the target program with the debugger attached to it.

### `-c`
Launches the target program with the interpreter, such as when the program fails, the debugging prompt is summoned.

## OTHER OPTIONS

### `--vm`
Run the virtual machine instead of the naive interpreter (experimental).

The virtual machine is currently under heavy development and, unless you are developing the vm, there is no reason to use this option yet.

### `-o`
Does nothing. Used for compatibility.


# DEBUGGER

To use use the debugger, launch your program using the nit interpreter `nit` with `-d` option.

It is also possible to execute the program normally until an error is encountered using the `-c` option.

A remote debugger is also available, it can be used with the client-side executable `nitdbg_client`.

On the client side, the debugger works like the previous one, input some commands when debugging a program, except you have to launch the server before trying to debug.

## DEBUGGER FEATURES

When using a debugger, a must-have is the possibility to control execution of your program by stepping over, in and out of a line/snippet of code. The nit debugger allows you to do that.

You can add/remove breakpoints on instructions, so that the execution will stop when the execution reaches the specified line of the specified file.

When an error is encountered, the debugger gives you the chance of inputting commands before exiting.

The debugger also gives the possibility of printing the values of the requested variables.

The modification of variables at runtime is possible too, but only if the variables are of primitive types (until it becomes possible).

Also, you probably won't want to type a long variable name every time you wish to print its value, the debugger has the possibility of setting aliases to replace the awfully long and cryptic name of that variable you try to access by a beautiful alias.

If you want to trace the modifications or uses of a variable of your choice, the trace command will be perfect for you as it will print or break when encountering the variable of your choice.

## DEBUGGER COMMANDS

### `n`
Proceeds to the next instruction (step-over)

### `s`
Steps in an instruction

### `finish`
Steps out of an instruction

### `c`
Continues the execution until a breakpoint is encountered or until an error/end of program

### `b/break line_number`
Adds a breakpoint on line *line_number* for the current file

### `b/break file line_number`
Adds a breakpoint on line *line_number* for the file *file* (Don't forget to add the .nit extension to the command)

### `d/delete line_number`
Removes a breakpoint on line *line_number* for the current file

### `d/delete file line_number`
Removes a breakpoint on line *line_number* for the file *file*

### `kill`
Kills the current program (produces a stack trace)

### `variable = value`
Sets the value of *variable* to *value* (Only supports primitive types for now : Bool, Char, Int, Float)

### `p/print variable_name`
Prints the value of the variable *variable_name*

### `p/print stack`
Prints a stack trace starting with the current frame

### `p/print variable_name[index]`
Prints the value of the variable contained at the index *index* of variable *variable_name* (*variable_name* must be a subtype of SequenceRead)

### `p/print variable_name[index_from..index_to]`
Prints the values of all the variables contained from index *index_from* up to *index_to* in the variable *variable_name*

All the print commands also work on any dimension SequenceRead collection.

### `variable_name as alias`
Sets an alias *alias* for the variable *variable_name*

### `trace variable_name [break/print]`
Traces the uses of the variable you chose to trace by printing the statement it appears in or by breaking on each use. (The [break/print] part is not mandatory, by default, the print option will be used)

### `untrace variable_name`
Removes the trace on the variable you chose to trace earlier in the program


# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
