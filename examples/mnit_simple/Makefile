default: linux

linux:
	mkdir -p bin
	../../bin/nitc -o bin/simple src/simple_linux.nit

android:
	mkdir -p bin
	../../bin/nitc -o bin/simple.apk src/complete_simple_android.nit

clean:
	rm -rf bin
