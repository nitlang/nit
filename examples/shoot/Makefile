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

images:
	mkdir -p assets/images
	../mnit_dino/tools/svg-to-pngs art/ships.svg assets/

clean:
	rm -rf bin
