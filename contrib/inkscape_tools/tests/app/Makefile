all: images linux

linux:
	mkdir -p bin
	../../../../bin/nitg -o bin/s2pn src/s2pn_linux.nit

android:
	mkdir -p bin
	../../../../bin/nitg -o bin/s2pn.apk src/s2pn_android.nit

images:
	mkdir -p assets/images
	../../bin/svg_to_png_and_nit art/drawing.svg --assets assets --src src
