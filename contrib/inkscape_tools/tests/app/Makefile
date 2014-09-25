all: images icons linux

linux:
	mkdir -p bin
	../../../../bin/nitg -o bin/s2pn src/s2pn_linux.nit

android:
	mkdir -p bin
	../../../../bin/nitg -o bin/s2pn.apk src/s2pn_android.nit

images:
	mkdir -p assets/images
	../../bin/svg_to_png_and_nit art/drawing.svg --assets assets --src src

icons:
	mkdir -p res1 res2 res3
	#../../bin/svg_to_icons art/icon.svg --large --out res1
	../../bin/svg_to_icons art/drawing.svg --large --out res2 --id 0circle
	#../../bin/svg_to_icons art/icon.svg --android --out res3
