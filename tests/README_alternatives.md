# Produces alternatives of text files

alterner.pl is a simple tool that use alternation directives in a text file to produce variations (alternatives) of this text file.

alterner.pl was primarily developed to help the generation of regression tests for [SableCC][1] but now it aims to be a more generic and versatile tool.

  [1]: http://sablecc.org

Principles of alterner.pl
-------------------------

alterner works line by line and produces alternatives files where some lines are altered.

An line containing an alternation directive looks like

    standard text //alt1 alternative text

where `//alt1` is the alternation directive (note there is no space between the `//` and the `alt` nor between the `alt` and the number).

Note: an alternation directive can also be terminated by a `//`.
Eg.

    standard text //alt1// alternative text

The first principle is that the alternation is produced by swapping the right part of the directive with its left part.

The basic idea behind alterner.pl is that if `//` marks the start of a comment for your input language then:

* if the file is used unmodified, the useful part of the line will be `standard text`;
* if the alternative version is used, the useful part of the line will be `alternative text`.

Neither the left or the right part is mandatory.
Therefore, directives are often used to make some lines appear or disappear in the alternatives:

    this will disappear in the alternative //alt1
    //alt1 this will appear in the alternative


The second principle is that there could be many alternatives generated for a single base file.
Each alternation directive is numbered (`//alt1`, `//alt2`, `//alt3`, etc.) and, for a given alternative, all the associated directives are applied together.

Example:

    //alt1 this will appear in alternative 1
    this will disappear in alternative 2 //alt2
    this is in base and in alternative 2 //alt1 but this is in alternative 1

The last principle is that more than one directive can appear on a single line.
The first principle still apply: for a given alternative version, the left and right parts of the associated directives are swapped.
The trick is that the directives of other alternatives do not interfere.

Example:

    base version //alt1 version of alternative 1 //alt2 version of alternative 2


Lists and ranges
----------------

A single directive can be associated to more than one alternative version.
Directives for multiple alternatives are declared with a list (separated with a comma) or with a range (indicated with a dash).

Example:

    base version //alt1,3 version of alternative 1 and 3
    base version //alt2-4 version of alternatives 2, 3 and 4

Lists and ranges can be used together and multiple alternatives can appears on a single line.

    base //alt1,3-4 version for 1, 3, and 4 //alt2,5 version for 2 and 5


Combinations
------------

Each directive belong to a given group: either to the anonymous group (by default) or to a numbered group.
The number of the group is noted before the `alt`.

Example:

	base version //1alt1 first alternative of the first group
	base version //2alt1 first alternative of the second group
	base version //2alt2 second alternative of the second group

alterner.pl also produces alternative files by combining the groups.
With two groups, is means that at least three alternative files are created: one with the first group, one with the second group, and one with both.

If there is more than one alternative by group, even more alternative files are created.
With the previous example, 5 alternative files are created:

* one with 1alt1 activated
* one with 2alt1 activated
* one with 2alt2 activated
* one with 1alt1 and 2alt1 activated
* one with 1alt1 and 2alt2 activated

Be careful with groups since the number of alternative file generated increase rapidly.
For instance, with 4 groups of 4 alternatives each, 624 alternative files are generated.

Usage of alterner.pl
--------------------

    alterner.pl [options] input-file.ext

Produce alternatives of `input-file.ext` according to the alternation directives present in the file.
By default, alternatives are named `input-file.altX.ext` (where `X` is a number) and are generated in a `alt/` sub-directory.
If groups are used, the `altX` is replaced by `YaltX` (where `Y` is the number of the group) and the combination of multiple groups produce multiple `YaltX` (separated with dots).
If the directory does not exist, it is created.
The path of `input-file.ext` is not considered: only the base name of the file and its extension are used to name the alternatives.

alterner.pl also outputs the path of each generated alternative (a path by line).
This list can be used to know what are the generated alternatives.


Options
-------

* `-d` directory

  Generate the alternatives in the specified directory.
  By default, the directory is `alt/`.
  Use `.` for the current directory.

* `--start` pattern

  Alternation directives start with the specified pattern.
  This option is used to indicate what starts comments in the language.
  By default, the start pattern is `//`.
  For example, `--start '#'` means that the alternatives are `#alt1`, `#alt2`, etc.

  Note: an alternation directive can also be terminated by the start pattern.
  For example, `--start '#'` means that the alternatives can also be `#alt1#`, `#alt2#`, etc.

* `--end` pattern

  Lines with alternation directives end with the specified pattern.
  This option is used to indicate what end comments in the language when multiline comments are used.
  By default, the end pattern is the empty string.
  For example, start with `/*` and end with `*/` for using alternatives in a C file.

  The principle of the end pattern is that:

  1. alternation directives are ignored if the end pattern is not present at the end of the line;
  2. the end pattern is not swapped when a directive is applied (it means the end pattern stay at the end of the line).

* `--altsep` separator

  Separator used in the name of the generated file betwen the basename of the original file and the alternative mark.
  By default, it is `.`.

Examples
--------

Example with default options

    $ cat example.txt
    foo //alt1 bar
    foo //alt1 bar //alt2 baz

    $ alterner.pl example.txt
    alt/example.alt1.txt
    alt/example.alt2.txt

    $ echo alt/example.alt1.txt
    bar //alt1 foo
    bar //alt2 baz //alt1 foo

    $ echo alt/example.alt2.txt
    foo //alt1 bar
    baz //alt2 foo //alt1 bar


Example with directives in C comments.

    $ cat input-file.c
    base /*alt1 first /*alt2 second */

    $ alterner.pl --start '/*' --end '*/' input-file.c
    alt/input-file.alt1.c
    alt/input-file.alt2.c

    $ cat alt/input-file.alt1.c
    first /*alt2 second /*alt1 base */

    $ cat alt/input-file.alt2.c
    second /*alt2 base /*alt1 first */


Example with groups.

    $ cat example.txt
    first //alt1 second //alt2 third
    first //2alt1 second

    $ alterner.pl exaple.txt
    example.alt1.txt
    example.alt2.txt
    example.2alt1.txt
    example.alt1.2alt1.txt
    example.alt2.2alt1.txt
