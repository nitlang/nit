default: linux

linux:
	mkdir -p bin
	../../bin/nitc -o bin/friendz src/friendz_linux.nit

android:
	mkdir -p bin res
	../inkscape_tools/bin/svg_to_icons art/icon.svg --android --out res/
	../../bin/nitc -o bin/friendz.apk src/friendz_android.nit

doc:
	mkdir -p doc
	../../bin/nitdoc -d doc/ src/friendz.nit src/friendz_linux.nit

clean:
	rm -rf bin/ doc/ res/
