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

## Install

The simpler way to install nit for vim is with [pathogen][1].

    cd ~/.vim/bundle
    ln -s /full/path/to/nit/misc/vim nit

Ensure that `~/.vimrc` contains

    call pathogen#infect()
    syntax on
    filetype plugin indent on

  [1]: https://github.com/tpope/vim-pathogen

## Features

 * Syntax highlighting
 * Automatic indentation
 * Syntax checker (require [Syntastic][2]).
 * Autocomplete for whole projects using module importations
 * Show documentation in preview window

  [2]: https://github.com/scrooloose/syntastic

## Autocomplete

The Nit plugin offers two kinds of autocompletion: complete and omnifunc.

You can use both completion at the same time. They each have their own strengths and weaknesses.

### Complete

The Nit plugin can configure the `complete` option by scanning all projects in the
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

### Omnifunc

The Nit plugin also defines an omnifunc which uses metadata files produced by nitpick which
is called by syntastic.
It is activated by default when editing a Nit source file, launch it using `ctrl-x ctrl-o`.
It will suggest entities names from the current context and display the corresponding documentation.
Once the correct completion has been selected, you can close the documentation preview window with `:pc`.

The omnifunc applies a simple heuristic to recognize what kind of entities to display:
(This is a simplification some behaviors are missing.)

* If the cursor follows `import`, it will list known modules.
* If it follows `new` it will list known classes with their constructors.
* If it follows `super`, `class`, `isa` or `as` it will list known classes.
* If it follows a `.`, it will list properties.
* If on an extern method declaration, it will list classes and properties.
* Otherwise, it will list keywords and properties.

Make sure to save your Nit module if using syntastic or to manually call nitpick the generate
the metadata files before using the omnifunc. If there is no locally available metadata, it
will use general metadata in the plugin directory.

The metadata files from nitpick are stored in `~/.vim/nit/`. This location can be customized with
the environment variable `NIT_VIM_DIR`.

## Documentation in preview window

You can display the documentation for the entity under the cursor with `:call Nitdoc()`.
It will use the same metadata files as the omnifunc and the preview window.
You may want to map the function to a shortcut by adding the following code to `~/.vimrc`.

~~~
" Map displaying Nitdoc to Ctrl-D
map <C-d> :call Nitdoc()<enter>
~~~
