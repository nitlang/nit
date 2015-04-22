# SVG to PNG and Nit

This tool uses Inkscape to prepare assets for Nit applications from a single SVG file.
It selects objects to extract from the SVG file when their id begins with `0`.

It will produce two files:

* A Nit source file that declares a single class with an attribute for each selected object.
  The attribute usually holds a single texture, except if the the id ends with a digit, then it will be an array.

* A single PNG image file that contains all the selected objects.
  With the option `--pow2`, the image size is rounded to the next of 2.

## Usage

1. Create a new Inkscape document.
2. Create objects and set their ids to begin with `0`.
3. Save the document to `drawing.svg` (for this example), the name of the file is used to name the Nit class.
4. Execute `bin/svg_to_png_and_nit drawing.svg`
5. From your code, import the generated source file at `src/drawing.nit`.
6. Use the class `DrawingImages` and its attributes.

## Examples

The minimal test in `tests/app/` shows the basic usage of this tool.

The Dino example `../../../../examples/mnit_dino` also uses this tool and is a more complete and practical example.

# Authors

Alexis Laferrière <alexis.laf@xymus.net>
