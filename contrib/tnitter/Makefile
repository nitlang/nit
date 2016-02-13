SERVER ?= localhost:8080

all: bin/tnitter_server bin/tnitter

bin/tnitter_server: $(shell ../../bin/nitls -M src/tnitter.nit)
	mkdir -p bin/
	../../bin/nitc -o bin/tnitter_server src/tnitter.nit -D tnitter_interface=$(SERVER)

bin/tnitter: $(shell ../../bin/nitls -M src/tnitter_app.nit)
	mkdir -p bin/
	../../bin/nitc -o bin/tnitter src/tnitter_app.nit -m linux -D tnitter_server_uri=http://$(SERVER)

# ---
# Android

android: bin/tnitter.apk
bin/tnitter.apk: $(shell ../../bin/nitls -M src/tnitter_app_android.nit) res/drawable-ldpi/icon.png
	mkdir -p bin/
	../../bin/nitc -o bin/tnitter.apk src/tnitter_app_android.nit -D tnitter_server_uri=http://$(SERVER)

android-release: $(shell ../../bin/nitls -M src/tnitter_app_android.nit) res/drawable-ldpi/icon.png
	mkdir -p bin/
	../../bin/nitc -o bin/tnitter.apk src/tnitter_app_android.nit --release -D tnitter_server_uri=http://tnitter.xymus.net

res/drawable-ldpi/icon.png: art/icon.svg
	mkdir -p res
	../inkscape_tools/bin/svg_to_icons art/icon.svg --android --out res/

# ---
# iOS

ios: bin/tnitter.app
bin/tnitter.app: $(shell ../../bin/nitls -M src/tnitter_app.nit ios) ios/AppIcon.appiconset/Contents.json
	mkdir -p bin/
	../../bin/nitc -o bin/tnitter.app src/tnitter_app.nit -m ios -D tnitter_server_uri=http://$(SERVER)

ios-release: $(shell ../../bin/nitls -M src/tnitter_app.nit ios) ios/AppIcon.appiconset/Contents.json
	mkdir -p bin/
	../../bin/nitc -o bin/tnitter.app src/tnitter_app.nit -m ios -D tnitter_server_uri=http://tnitter.xymus.net

ios/AppIcon.appiconset/Contents.json: art/icon-ios.svg
	mkdir -p ios
	../inkscape_tools/bin/svg_to_icons art/icon-ios.svg --ios --out ios/AppIcon.appiconset/

# ---
# Misc

clean:
	rm -r res bin
