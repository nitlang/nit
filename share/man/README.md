# Manual pages for nit commands

Pages, in markdown, in this directory where initially generated thanks to the `--stub-man` options of the commands.

Transformation to real man pages (troff) are done with `pandoc -t man -s` command.
See the `Makefile`.


Once generated, manpages can then be checked individually with `man -l`

~~~
man -l man1/nitc.1
~~~

For global access, one can set the `MANPATH` environment variable to this `man` directory (not the `man1` subdirectory).
Do not forget to append `$MANPATH` to keep existing manpages accessible.

~~~
export MANPATH=/path/to/nit/share/man:$MANPATH
man nitc
~~~
