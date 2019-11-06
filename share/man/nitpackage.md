# NAME

nitpackage - provide useful features to manage Nit packages.


# SYNOPSIS

nitpackage [*options*] FILE...


# DESCRIPTION

`nitpackage` provide packages related features.

For now, only one thing is implemented: the *package expansion*.

## Expanding packages

The `--expand` option is used to move singleton packages in their own directory.

For example, to move all singleton packages from `lib/` into directories, one can
use the following command.

~~~sh
nitpackage --expand lib/
~~~

## Generating `package.ini` files

The `--gen-ini` option is used to create `package.ini` files.

For example, the following command will create a `package.ini` stub for each package
that does not already have a one.

~~~sh
nitpackage --gen-ini lib/
~~~

The `--force` option can be used to force the creation of the INI stub even if the package
already contains one.

~~~sh
nitpackage --gen-ini -f lib/
~~~

# OPTIONS

### `--expand`
Move singleton packages to their own directory.

### `--gen-ini`
Generate package.ini files.

### `--check-ini`
Check package.ini files.

### `--gen-makefile`
Generate Makefile files.

### `--check-makefile`
Check Makefile files.

### `--check-man`
Check manpages files.

### `--gen-man`
Generate manpages files.

### `--check-readme`
Check README.md files.

### `-f`, `--force`
Force update of existing files.

### `-h`, `-?`, `--help`
Show Help (the list of options).
