# NAME

nitx - displays specific pieces of API information from Nit source files.

# SYNOPSIS

nitx [*options*] FILE [COMMAND]

# DESCRIPTION

`nitx` in an interactive tool that displays informations about programs and libraries.

A command that query some information can be given as parameter.
This will immediately displays the information then terminates the programs.

If no command are given, the program starts an interactive session where commands are entered until `:q` is given.

# COMMANDS

### `name`
lookup module, class and property with the corresponding 'name'.

### `param: Type`
lookup methods using the corresponding 'Type' as parameter.

### `return: Type`
lookup methods returning the corresponding 'Type'.

### `new: Type`
lookup methods creating new instances of 'Type'.

### `call: Property`
lookup calls to 'Property'.

### `doc: name`
lookup documentation pages about 'name'.

### `code: name`
lookup source code related to 'name'.

### `:h`
display an help message about the commands.

### `:q`
exit the tool.

# OPTIONS

### `-c`, `--command`
Nitx command to perform.

Execute a command, display results in the console, then quit.

### `--no-attributes`
Ignore the attributes.

### `--private`
Also generate private API.

### `--catalog`
Use catalog.

Allow queries to catalog data (can be long on large code base).

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
