# Basic Syntax of Nit

The syntax of Nit follows the Pascal tradition and is
inspired by various script languages (especially Ruby). Its main objective is
readability.

Indentation is not meaningful in Nit; blocks usually starts with a
specific keyword and finish with `end`. Newlines are only meaningful at
the end of declarations, at the end of statements, and after some
specific keywords. The philosophy is that the newline is ignored if
something (a statement, a declaration, or whatever) obviously needs more
input; while the newline terminates lines that seems completed. See the
complete Nit grammar for more details.

~~~
# a first complete statement that outputs "2"
print 1 + 1
# the second statement is not yet finished
print 2 +
# the end of the second statement, outputs "4"
2
~~~

Nit aims to achieve some uniformity in its usage of the common
punctuation: equal (`=`) is for assignment, double equal (`==`) is for
equality test, column (`:`) is for type declaration, dot (`.`) is for
polymorphism, comma (`,`) separates elements, and quad (`::`) is for
explicit designation.

## Identifiers

Identifiers of modules, variables, methods, attributes and
labels must begin with a lowercase letter and can be followed by
letters, digits, or underscores. However, the usage of uppercase letters
(and camelcase) is discouraged and the usage of underscore to separate
words in identifiers is preferred: `some_identifier`.

Identifiers of classes and types must begin with an uppercase letter and
can be followed by letters, digits, or underscores. However
the usage of camelcase is preferred for class identifiers while formal types should be written in all uppercase: `SomeClass` and `SOME_VIRTUAL_TYPE`.

## Style

While Nit does not enforce any kind of source code formatting, the
following is encouraged:

- indentation uses the tabulation character and is displayed
  as 8 spaces;

- lines are less than 80 characters long;

- binary operators have spaces around them: `4 + 5`, `x = 5`;

- columns (`:`) and commas (`,`) have a space after them but not
  before: `var x: X`, `[1, 2, 3]`;

- parenthesis and brackets do not need spaces around them;

- superfluous parenthesis should be avoided;

- the `do` of methods and the single `do` is on its own line and not
  indented;

- the other `do` are not on a newline.

## Comments and Documentation

As in many script languages, comments begin with a sharp (`#`)
and run up to the end of the line. Currently, there is no
multiline-comments.

A comment block right before any definition of module, class, or
property, is considered as its documentation and will be displayed as
such by the autodoc. At this point, documentation is displayed verbatim
(no special formatting or meta-information).

~~~
# doc. of foo
module foo

# doc. of Bar
class Bar
   # doc. of baz
   fun baz do end
end
~~~
