default: linux

linux:
	mkdir -p bin
	../../bin/nitg --global -o bin/moles src/moles_linux.nit

android:
	mkdir -p bin
	../../bin/nitg --global --no-stacktrace -o bin/moles.apk src/moles_android.nit

clean:
	rm -rf bin
