default: linux

linux:
	mkdir -p bin
	../../bin/nitc -o bin/shoot src/shoot_linux.nit

android:
	mkdir -p bin
	../../bin/nitc -o bin/shoot.apk src/shoot_android.nit

null:
	mkdir -p bin
	../../bin/nitc -o bin/shoot_null src/shoot_null.nit

clean:
	rm -rf bin
