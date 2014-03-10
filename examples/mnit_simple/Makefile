default: linux

linux:
	mkdir -p bin
	../../bin/nitg --global -o bin/simple src/simple_linux.nit

android:
	mkdir -p bin
	../../bin/nitg --global --no-stacktrace -o bin/simple.apk src/simple_android.nit

clean:
	rm -rf bin
