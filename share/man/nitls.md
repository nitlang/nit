# NAME

nitls - lists the projects, groups and paths of Nit sources files.

# SYNOPSIS

nitls [*options*] [*FILE*]...

# DESCRIPTION

`nitls` is used to list Nit files in directories and extract the module-group-project relation.

It is basically a `ls` or a simple `find` specialized on `.nit` source files.

By default `nitls` works with the current directory (`.`).

Each file can then be:

* A Nit module (file).
  In this case, only this single module is considered
* A Nit group (directory).
  In this case, all the modules of the groups (and recursively the sub-groups) are considered
* A normal directory.
  In this case, all its entries are analysed.
  Files that are Nit modules and directories that are Nit groups are considered.
  Other files and directories are ignored.

# EXAMPLES

Show the tree of modules from the current directory.

    $ nitls -t

Show the list of projects imported by the modules of the current directory.

    $ nitls -d -P *.nit

# OPTIONS

Each combination of option

## PRESENTATION MODE

Three presentation modes are available.

### `-P`, `--project`
List projects in a flat list (default).

Only project are displayed (and not the individual files).

### `-t`, `--tree`
List source files in their groups and projects.

Each `.nit` file is presented in a tree of projects and groups.

### `-s`, `--source`
List source files in a flat list.

Each `.nit` file is presented indivitually.

The three modes are exclusives.

The default mode is `--project` unless one on the argument is a group, then it is `--group`.

## COLLECT

### `-r`, `--recursive`
Process directories recursively.

All `.nit` files found in the specified directory and subdirectories are considered.

### `-d`, `--depends`
List dependencies of given modules

All imported modules are also considered.

In --tree and --source modes, the modules direclty imported are also displayed.

### `-k`, `--keep`
Ignore errors and files that are not a Nit source file.

When a file that is not a valid Nit module is encoutered, it is ignored and the rest of the files are
processed.

Without this option, an error message is displayed and nitls terminates on such a case.

## PRESENTATION OPTIONS

### `-p`, `--path`
List only path (instead of name + path).

Paths are displayed uncolored.

### `-M`
List dependencies suitable for a rule in a Makefile.

Alias for `-d`, `-p` and `-s`.

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
