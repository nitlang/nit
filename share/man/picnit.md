# NAME

picnit - Nit package manager

# SYNOPSIS

picnit [--help] [--verbose] <command> [<args>]

# OPTIONS

### `-h`, `--help`

Show the help message.

### `-v`, `--verbose`

Print more information, may be useful for debugging.

# COMMANDS

### install

Install a package by searching for its name or directly from a Git repository URL.

	picnit install hello_picnit
	picnit install https://gitlab.com/xymus/hello_picnit.git

### list

List installed packages.

	picnit list

### upgrade

Upgrade a package.

	picnit upgrade hello_picnit

### uninstall

Uninstall a package.

	picnit uninstall hello_picnit

### help

Show general help message or the help for a command.

	picnit help
	picnit help install

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
