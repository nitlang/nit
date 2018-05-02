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

# OPTIONS

### `--expand`
Move singleton packages to their own directory.

### `-h`, `-?`, `--help`
Show Help (the list of options).
