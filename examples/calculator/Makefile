all:
	mkdir -p bin/
	../../bin/nitg --dir bin/ src/calculator_gtk.nit src/calculator_test.nit

android:
	mkdir -p bin/ res/
	../../contrib/inkscape_tools/bin/svg_to_icons art/icon.svg --android --out res/
	../../bin/nitg -o bin/calculator.apk src/calculator_android.nit
