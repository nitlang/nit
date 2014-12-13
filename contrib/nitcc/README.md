# nitcc, a parser and lexer generator for Nit

nitcc is a simple LR generator for Nit programs.
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

    nitc file_test_parser.nit
    ./file_test_parser an_input_file_to_parse

## Examples and regression tests

The sub-directory `examples/` contains simple grammars and interpretors.

The sub-directory `tests/` contains regression tests.

## Features (aka TODO list)

 - [x] command line tool (`nitcc`)
 - [x] Grammar syntax of SableCC4 (with pieces of SableCC3)
 - [x] Generates a Lexer
 - [x] Generates a SLR parser
 - [ ] Generates a LALR parser
 - [x] Generates classes for the AST and utils

For the tool (and the code)

 - [x] usable
 - [x] bootstrap itself (see `nitcc.sablecc`)

For the lexer (and regexp, NFA, and DFA)

 - [x] Any
 - [x] interval of characters and subtraction of characters
 - [x] implicit priorities (by inclusion of languages)
 - [x] Except and And
 - [x] Shortest and Longest (but dummy semantic without lookahead)
 - [x] efficient implementation of intervals
 - [x] DFA minimization

For the parser (and grammar and LR)

 - [x] Modifiers (`?`, `*`, `+`)
 - [x] Ignored
 - [x] Rejected
 - [x] Empty (but not mandatory)
 - [ ] Opportunistic
 - [x] Precedence
 - [ ] Separator
 - [x] Dangling (automatic, so mitigate the SLR limitations)
 - [x] simple transformation (unchecked)
 - [x] simple inlining (non automatic, except for `?` and `*`)

For the AST (generated classes, utils and their API)

 - [x] Common runtime-library `nitcc_runtime.nit`
 - [x] Terminal nodes; see `NToken`.
 - [x] Heterogeneous non-terminal nodes with named fields; see `NProd`.
 - [x] Homogeneous non-terminal nodes for lists (`+` and `*`); see `Nodes`.
 - [x] Visitor design pattern; see `Visitor`.
 - [x] Syntactic and lexical errors; see `NError`.
 - [x] positions of tokens in the input stream; see `Position`
 - [ ] positions of non-terminal nodes.
 - [ ] API for the *input source*
 - [ ] sane API to invoke/initialize the parser (and the lexer)

## BUGS and limitations

* Limited error checking; bad grammars can produce uncompilable, or worse buggy, nit code.
* The SLR automaton is not very expressive; do not except to parse big and complex language like Nit or Java.
* The generated Nit code is inefficient and large; even if you get an acceptable grammar, do not except to parse efficiently big and complex language like Nit or Java.
* No real unicode support.
* Advanced features of SableCC4 are not planed.

