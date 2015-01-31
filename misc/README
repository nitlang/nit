# gtksourceview (gedit and other GTK editors)
To install in your home, just link (or copy) the language definition file in ~/.local/share/gtksourceview-2.0/language-specs

# syntaxhighlighter

Nit brush for the Alex Gorbatchev's JS syntaxhighlighter.

To install the JS syntaxhighlighter, please refer to http://alexgorbatchev.com/SyntaxHighlighter/

Then can add the brush to your html page:

	<script type="text/javascript" src="shBrushNit.js"></script>

# Vim

Vim is a powerful text editor and a favorite of the Nit team.
The `misc/vim` directory provides Vim support for Nit source files.

### Install

The simpler way to install nit for vim is with [pathogen][1].

    cd ~/.vim/bundle
    ln -s /full/path/to/nit/misc/vim nit

Ensure that `~/.vimrc` contains

    call pathogen#infect()
    syntax on
    filetype plugin indent on

  [1]: https://github.com/tpope/vim-pathogen

### Features

 * Syntax highlighting
 * Automatic indentation
 * Syntax checker (require [Syntastic][2]).
 * Autocomplete for whole projects using module importations

  [2]: https://github.com/scrooloose/syntastic

### Autocomplete

The Nit plugin offers better autocomplete by scanning all projects in the
current directory, and their dependencies.

Add the following code to `~/.vimrc`, then use `ctrl-n` to open the
autocomplete popup.

~~~
" Compute Nit module dependencies for autocomplete on loading our first Nit module
autocmd Filetype nit call NitComplete()

" Map reloading Nit module dependencies to F2
map <F2> :call ForceNitComplete()<enter>
~~~

The plugin is compatible with, and optimized for, [AutoComplPop][3].

Look at the functions defined in `misc/vim/plugin/nit.vim` for all possible
usages.

  [3]: http://www.vim.org/scripts/script.php?script_id=1879
