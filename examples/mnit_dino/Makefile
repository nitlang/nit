default: linux

linux:
	mkdir -p bin
	../../bin/nitg -o bin/dino src/dino_linux.nit

android: android-icons
	mkdir -p bin
	../../bin/nitg -o bin/dino.apk src/dino_android.nit

../../contrib/inkscape_tools/bin/svg_to_icons:
	$(MAKE) -C ../../contrib/inkscape_tools

android-icons: ../../contrib/inkscape_tools/bin/svg_to_icons
	mkdir -p res
	../../contrib/inkscape_tools/bin/svg_to_icons art/icon.svg --android --out res/

doc:
	mkdir -p doc
	../../bin/nitdoc -d doc/ src/dino.nit src/dino_linux.nit

pngs:
	mkdir -p assets/images
	tools/svg-to-pngs art/drawing.svg assets/images

clean:
	rm -rf bin/ doc/
