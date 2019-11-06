# Brainfuck

Brainfuck is as its name implies a simple Brainfuck interpreter written in Nit.

It has almost as much purposes as the language itself, except it provides a good example for Nit programs that work while being concise.

[Specification](http://www.muppetlabs.com/~breadbox/bf/)

The language is designed to need only a few things :

* One instruction pointer to the current instruction
* One array of Bytes for all manipulations of data
* One data pointer to select where to write/read data

Brainfuck a small instruction set, only eight instructions :

* `>`: Increments the data pointer
* `<`: Decrements the data pointer
* `+`: Increments the byte in the current cell
* `-`: Decrements the byte in the current cell
* `[`: If the current cell's value is 0, jumps to the matching `]`
* `]`: If the current cell's value is non-zero, jumps to the matching `[`
* `.`: Writes the current cell's value to stdout
* `,`: Reads a char from stdin and stores it in the current cell

## How to use

First, compile the interpreter with the Nit compiler/interpreter, and launch the program on a brainfuck source file for interpretation.

Example:
~~~sh
nitc ./brainfuck.nit
./brainfuck ./examples/hello.bf
~~~
