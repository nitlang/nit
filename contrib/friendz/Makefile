default: linux

linux:
	mkdir -p bin
	../../bin/nitc -o bin/friendz src/friendz_linux.nit

android: res/drawable-hdpi/icon.png
	mkdir -p bin
	../../bin/nitc -o bin/friendz.apk src/friendz_android.nit

android-release: res/drawable-hdpi/icon.png
	mkdir -p bin
	../../bin/nitc -o bin/friendz.apk src/friendz_android.nit --release

res/drawable-hdpi/icon.png: art/icon.svg
	mkdir -p res
	../inkscape_tools/bin/svg_to_icons art/icon.svg --android --out res/

doc:
	mkdir -p doc
	../../bin/nitdoc -d doc/ src/friendz.nit src/friendz_linux.nit

clean:
	rm -rf bin/ doc/ res/
