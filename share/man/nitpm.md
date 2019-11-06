# NAME

nitpm - Nit package manager

# SYNOPSIS

nitpm [--help] [--verbose] <command> [<args>]

# OPTIONS

### `-h`, `--help`
Show help message.

### `-v`, `--verbose`
Print more information.

# COMMANDS

### `install`
Install packages by name, Git repository address or from the local package.ini.

	# Search and install package by name, e.g. hello_nitpm:
	nitpm install hello_nitpm

	# Install package from a Git repository:
	nitpm install https://gitlab.com/xymus/hello_nitpm.git

	# Search and install a specific branch or tag of a package, e.g. 1.0:
	nitpm install nitpm_test_versions=1.0

	# Install all packages declared in the local package.ini file:
	nitpm install

To support the last command, the package.ini file should list the required packages after `[package]` on an `import=` line:

	[package]
	name=my_package
	import=nitpm_test_versions=1.0,gamnit

### `list`
List installed packages.

	nitpm list

### `upgrade`
Upgrade a package.

	nitpm upgrade hello_nitpm

### `uninstall`
Uninstall packages.

	nitpm uninstall hello_nitpm

### `help`
Show general help message or the help for a command.

	nitpm help
	nitpm help install

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
