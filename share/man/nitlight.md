# NAME

nitlight - generates HTML of highlighted code from Nit source files.

# SYNOPSIS

nitlight [*options*] FILE...

# DESCRIPTION

Unlike generic lexical or syntactic highlighter, nitlight use semantic information on programs to improve the rendered result.

# OPTIONS

Common options of the Nit tools are understood.
Here, only the specific one are indicated.

### `--txt`
Generate text with ANSI coloring escape sequences.

Instead of HTML, this generate text files with ANSI escape sequence for colors.
The options `-f`, `--line-id-prefix` and `--ast` are ignored in this mode.

### `-f`, `--fragment`
Omit document header and footer.

By default, a complete autonomous HTML document is generated.
If `-f` is given, only the inside of the body part is generated such that it could be integrated
into a HTML document.

### `--line-id-prefix`
Prefix of the id of each line `<span>` element.

By default, each line is enclosed in its own `<span>` element with an `id` attribute made of the line number prefixed by `L` (e.g. `L1` for the first line).

This option changes the prefix used.
If an empty string is used, then the `<span>` are generated without `id` attributes.

This option is especially useful with `--fragment` when more than one highlighted code is
included in the same HTML document.
Each fragment can thus be generated with its own distinct prefix, or the id can be disabled altogether.

### `--first-line`
Start the source file at this line (default: 1).

The generated HTML will only contains lines bellow the specified one.

### `--last-line`
End the source file at this line (default: to the end).

The generated HTML will only contains lines above the specified one.

### `-d`, `--dir`
Output html files in a specific directory (required if more than one module).

By default the generated HTML is outputted on the screen.
If this option is used, then HTML files are generated in the specified directory.

A basic `index.heml` and a `style.css` file are also generated in the directory.

### `--full`
Process also imported modules.

By default, only the modules indicated on the command line are highlighted.

With the `--full` option, all imported modules (even those in standard) are also precessed.

### `--no-infobox`
Disable the generation of infoboxes.

### `--ast`
Generate specific HTML elements for each Node of the AST.

Additional `<span>` elements are generated for each node of the AST.
The HTML generated can become quite large.

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
