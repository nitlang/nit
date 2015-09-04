# Pep/8 Analysis, static checker to detect bugs and bad programming practices in Pep/8 programs

For more information about the Pep/8 assembly language visit http://code.google.com/p/pep8-1/.

# Installation

Make sure you have a Nit compiler installed (http://nitlanguage.org) and the environment variable NIT\_DIR correctly set to the Nit installation directory.

Clone the source from http://github.com/xymus/pep8analysis.git and compile with `make`.

# Usage

For basic results, execute on the Pep/8 program prog.pep with `bin/pep8analyzer prog.pep`.

Call `bin/pep8analyer --help` for a description of the available (and up to date) options.

The tools provides its results in two ways, the final report and an annotated CFG (usually created in the out directory).

# Analyses

## Dead code and possible execution of data

The tools analyses statically the program according to possbile branches and function calls to find wrongfully placed instructions and directives. It reports dead code blocks and possibly executed data blocks.

## Range analysis

The range analysis reports the value of registers and memory on the annotated CFG.

## Reaching definitions

The reaching definitions analysis tracks what lines may have assigned values to register and memory. Its results are on the anotated CFG. They can be used to better understand a program.

## Types analysis

The types analysis detects wrongful use of types or of uninitialized data. It reports possible errors in the final report.
