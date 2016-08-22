default: linux

linux:
	mkdir -p bin
	../../bin/nitc -o bin/dino src/dino_linux.nit

android: android/res/
	mkdir -p bin
	../../bin/nitc -o bin/dino.apk src/dino_android.nit

android-release: android/res/
	mkdir -p bin
	../../bin/nitc -o bin/dino.apk src/dino_android.nit --release

../../contrib/inkscape_tools/bin/svg_to_icons:
	cd ../../contrib/inkscape_tools && $(MAKE)

android/res/: ../../contrib/inkscape_tools/bin/svg_to_icons
	mkdir -p android/res/
	../../contrib/inkscape_tools/bin/svg_to_icons art/icon.svg --android --out android/res/

doc:
	mkdir -p doc
	../../bin/nitdoc -d doc/ src/dino.nit src/dino_linux.nit

pngs:
	mkdir -p assets/images
	tools/svg-to-pngs art/drawing.svg assets/images

clean:
	rm -rf bin/ doc/ res/
