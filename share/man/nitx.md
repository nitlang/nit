% NITX(1)

# NAME

nitx - displays specific pieces of API information from Nit source files.

# SYNOPSIS

nitx [*options*] FILE [COMMAND]

# DESCRIPTION

`nitx` in an interactive tool that display information about programs and libraries.

A command that query some information can be given as and argument.
This will immediately displays the information then terminates the programs.

If no command are given, the program starts an interactive session where commands are entered until `:q` is given.

# COMMANDS

`name`
:   lookup module, class and property with the corresponding 'name'.

`param: Type`
:   lookup methods using the corresponding 'Type' as parameter.

`return: Type`
:   lookup methods returning the corresponding 'Type'.

`new: Type`
:   lookup methods creating new instances of 'Type'.

`:h`
:   display an help message about the commands.

`:q`
:   exit the tool.

# OPTIONS

Only common options of the Nit tools are understood.

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
