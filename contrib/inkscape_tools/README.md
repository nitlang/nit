# SVG to PNG and Nit

This tool is used in combination with Inkscape to simplify assets creation for _mnit_ apps. It uses Inkscape to extract a PNG file from a SVG file. It will also create a Nit source file to create _mnit_ images for each objects with an id beginning by 0.

# Features

* Creates a sinlge PNG file per SVG source file
* Creates subimages for objects with an id beginning by 0.
* If the id ends with 0 to 9, will instead create an array of subimages.

# Usage

1. Create a new Inkscape document.
2. Create objects and set their ids to begin with 0
3. Save the document (ex: to `drawing.svg`) the name of the file is important
4. Execute `bin/svg_to_png_and_nit drawing.svg`
5. From your code, import the generated source file (at  src/drawing.nit`)
6. Use the class `DrawingImages` and its attributes.

# Examples

The minimal test in  tests/app/  shows the basic usage of this tool.

The Dino example `../../../../examples/mnit_dino` also uses this tool and is a more complete and practical example.

# Authors

Alexis Laferrière <alexis.laf@xymus.net>
