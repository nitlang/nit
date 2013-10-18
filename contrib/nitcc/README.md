# nitcc, a parser and lexer generator for Nit

nitcc is a simple LALR generator for Nit programs.
It features a small subset of the functionalities of [SableCC] 3 and 4.

  [SableCC]: http://sablecc.org

## How to compile

Have a valid compiler in `bin/`
Just run `make` in the `contrib/nitcc/` directory

## How to run

Usage:

    nitcc file.sablecc

nitcc generates a bunches of control files, a lexer, a parser, and a tester.

To compile and run the tester:

    nitg file_test_parser.nit
    ./file_test_parser an_input_file_to_parse

## Examples and regression tests

The sub-directory `examples/` contains simple grammars and interpretors.

The sub-directory `tests/` contains regression tests.

## Features (aka TODO list)

[X] command line tool (`nitcc`)
[X] Grammar syntax of SableCC4 (with pieces of SableCC3)
[X] Generates a Lexer
[X] Generates a LALR parser
[X] Generates classes for the AST and utils

For the tool (and the code)

[X] usable
[X] bootstrap itself (see `nitcc.sablecc`)

For the lexer (and regexp, NFA en DFA)

[X] Any
[X] interval of characters and subtraction of characters
[X] implicit priorities (by inclusion of languages)
[ ] Shortest
[ ] DFA minimization
[ ] efficient implementation of intervals

For the parser (and grammar and LR)

[X] Modifiers (`?`, `*`, `+`)
[X] Ignored
[ ] Rejected
[ ] Opportunistic
[ ] Precedence
[ ] Separator
[ ] Dangling
[X] simple transformation
[x] simple inlining

For the AST (generated classes, utils and their API)

[X] Common runtime-library `nitcc_runtime.nit`
[X] Terminal nodes; see `NToken`.
[X] Heterogeneous non-terminal nodes: named fields; see `NProd`.
[X] Homogeneous nodes for lists (`+` and `*`); see `Nodes`.
[X] Visitor design pattern; see `Visitor`.
[X] Syntactic and lexical errors; see `Nerror`.
[X] positions of tokens in the input stream; see `Position`

## BUGS and limitations

* Limited error checking; bad grammars can produce uncompilable, or worse buggy, nit code.
* The LALR automaton is buggy; do not except to parse big and complex language like Nit or Java.
* The generated Nit code is inefficient and large; do not except to parse big and complex language like Nit or Java.
* No unicode.
* Advanced features of SableCC4 are not planed.

