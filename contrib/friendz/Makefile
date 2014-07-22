default: linux

linux:
	mkdir -p bin
	../../bin/nitg -o bin/friendz src/friendz_linux.nit

android:
	mkdir -p bin
	../../bin/nitg -o bin/friendz.apk src/friendz_android.nit

doc:
	mkdir -p doc
	../../bin/nitdoc -d doc/ src/friendz.nit src/friendz_linux.nit

clean:
	rm -rf bin/ doc/
