default: linux

linux:
	mkdir -p bin
	../../bin/nitc -o bin/simple src/simple_linux.nit

android:
	mkdir -p bin
	../../bin/nitc -o bin/complete.apk src/complete_simple_android.nit --semi-global
	../../bin/nitc -o bin/minimal.apk src/simple_android.nit --semi-global

android-release:
	mkdir -p bin
	../../bin/nitc -o bin/complete.apk src/complete_simple_android.nit --semi-global --release
	../../bin/nitc -o bin/minimal.apk src/simple_android.nit --semi-global --release

clean:
	rm -rf bin
