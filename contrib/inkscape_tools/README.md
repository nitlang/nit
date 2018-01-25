tools to extract images from SVG files: `svg_to_icons` for app icons and `svg_to_png_and_nit` for game sprites

Both tools use Inkscape for to read the SVG files and extract the images.

# Create applications icons

`svg_to_icons` creates icons for Android, iOS and the stores from an SVG file.
The icons are generated with the formats and minimum file structure expected by the target platform.
This tools works especially well with _app.nit_.

## Variations

The `--android` option generates the folders drawable-hdpi, drawable-xhdpi, etc. with the corresponding icon within.

The `--ios` option generates many different icon formats for different iOS devices,
along with the `Contents.json` file as expected by Xcode.

## Usage examples

See the portable applications at `contrib/tnitter` and `examples/calculator` for practical usages of this tool.

# Create game sprites and a module to load them

`svg_to_png_and_nit` prepares sprite assets for Nit applications from a single SVG file.
It selects the objects to extract from the SVG file when their id begins with `0`.

It produces two files:

* A Nit source file that declares a single class with an attribute for each selected object.
	The attribute usually holds a single texture, except if the id ends with a digit, then it will be an array.

* A single PNG image file that contains all the selected objects.
	With the option `--pow2`, the image size is rounded to the next power of 2.

## Usage

1. Create a new Inkscape document.
2. Create objects and set their ids to begin with `0`.
3. Save the document to `drawing.svg` (for this example), the name of the file is used to name the Nit class.
4. Execute `bin/svg_to_png_and_nit drawing.svg`
5. From your code, import the generated source file at `src/drawing.nit`.
6. Use the class `DrawingImages` and its attributes.
