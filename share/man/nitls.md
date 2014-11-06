% NITLS(1)

# NAME

nitls - lists the projects, groups and paths of Nit sources files.

# SYNOPSIS

nitls [*options*] FILE...

# DESCRIPTION

`nitls` is used to list Nit files in directories and extract the module-group-project relation.

It is basically a `ls` or a simple `find` specialized on `.nit` source files.

# EXAMPLES

Show the tree of modules from the current directory and subdirectories.

    $ nitls -t -r .

Show the list of projects imported by the modules of the current directory.

    $ nitls -d -P *.nit

# OPTIONS

## COLLECT

`-r`, `--recursive`
:   Process directories recursively.

    All `.nit` files found in the specified directory and subdirectories are considered.

`-d`, `--depends`
:   List dependencies of given modules

    All imported modules are also considered.

`-k`, `--keep`
:   Ignore errors and files that are not a Nit source file.

    When a file that is not a valit Nit module is encoutered, it is ignored and the rest of the file are
    processed.

    Without this option, a error message is displayed and nitls terminates on such a case.

## PRESENTATION MODE

Three presentation modes are available.

`-P`, `--project`
:   List projects in a flat list (default).

    Only project are displayed (and not the individual files).

`-t`, `--tree`
:   List source files in their groups and projects.

    Each `.nit` file is presented in a tree of projects and groups.

`-s`, `--source`
:   List source files in a flat list.

    Each `.nit` file is presented indivitually.

## PRESENTATION OPTIONS

`-p`, `--path`
:   List only path (instead of name + path).

`-M`
:   List dependencies suitable for a rule in a Makefile.

    Alias for `-d`, `-p` and `-s`.

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
