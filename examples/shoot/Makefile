default: linux

linux:
	mkdir -p bin
	../../bin/nitc -o bin/shoot src/shoot_linux.nit

android:
	mkdir -p bin
	../../bin/nitc -o bin/shoot.apk src/shoot_android.nit

clean:
	rm -rf bin
