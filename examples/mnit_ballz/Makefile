default: android

android: icon
	mkdir -p bin
	../../bin/nitg -o bin/ballz.apk src/ballz_android.nit

icon:
	mkdir -p res
	../../contrib/inkscape_tools/bin/svg_to_icons art/ball.svg --android --out res/

clean:
	rm -rf bin
