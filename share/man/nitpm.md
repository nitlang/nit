# NAME

nitpm - Nit package manager

# SYNOPSIS

nitpm [--help] [--verbose] <command> [<args>]

# OPTIONS

### `-h`, `--help`

Show the help message.

### `-v`, `--verbose`

Print more information, may be useful for debugging.

# COMMANDS

### install

Install a package by searching for its name or directly from a Git repository URL.

	nitpm install hello_nitpm
	nitpm install https://gitlab.com/xymus/hello_nitpm.git

### list

List installed packages.

	nitpm list

### upgrade

Upgrade a package.

	nitpm upgrade hello_nitpm

### uninstall

Uninstall a package.

	nitpm uninstall hello_nitpm

### help

Show general help message or the help for a command.

	nitpm help
	nitpm help install

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
