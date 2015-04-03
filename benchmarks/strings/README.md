# Strings

Strings are a building block of programming.
Since they are that necessary, we must keep them as performing as possible.

This series of benchmarks works on different structures for handling strings on the most common operations done on them.

## Structures

Some more structures are susceptible to be added as the project advances.
At the moment, what is available consists of

* Flat strings
* Flat buffers
* Rope strings
* Rope buffers

A String is defined as an immutable string.
A Buffer is defined as a mutable string.

Flat strings are arrays of characters, the most basic implementation of a string.
Ropes are a tree-like structure where strings are bound through concatenation nodes.

## Tests

`concat`: Benches the concatenation speed of strings and buffers.

`iter`: Benches the time of iteration of a string, through iterators or indexed access

`substr`: Benches the time required to produce a substring.

`arraytos`: Special bench, it measures the speed of `Array::to_s` through the use of various strategies.

## Usage

To pass a series of benches you can use the `make` command to bench all the aforementioned tests with default values.

Each bench will be executed 5 times and the mean time will be represented in the final graph.

The alternative is to use `bench_strings.sh` with custom arguments to it.
For more information on the arguments and the format, execute it with the -h option for help.
