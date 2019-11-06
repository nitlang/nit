SERVER ?= localhost:8080

all: bin/tnitter_server bin/tnitter

bin/tnitter_server: $(shell nitls -M src/tnitter.nit)
	mkdir -p bin/
	nitc -o bin/tnitter_server src/tnitter.nit -D tnitter_interface=$(SERVER)

bin/tnitter: $(shell nitls -M src/tnitter_app.nit -m linux)
	mkdir -p bin/
	nitc -o bin/tnitter src/tnitter_app.nit -m linux -D tnitter_server_uri=http://$(SERVER)

# ---
# Android

android: bin/tnitter.apk
bin/tnitter.apk: $(shell nitls -M src/tnitter_app_android.nit) android/res/
	mkdir -p bin/
	nitc -o bin/tnitter.apk src/tnitter_app_android.nit -D tnitter_server_uri=http://$(SERVER)

android-release: $(shell nitls -M src/tnitter_app_android.nit) android/res/
	mkdir -p bin/
	nitc -o bin/tnitter.apk src/tnitter_app_android.nit --release -D tnitter_server_uri=http://tnitter.xymus.net

android/res/: art/icon.svg
	mkdir -p android
	../inkscape_tools/bin/svg_to_icons art/icon.svg --android --out android/res/

# ---
# iOS

ios: bin/tnitter.app
bin/tnitter.app: $(shell nitls -M src/tnitter_app.nit -m ios) ios/AppIcon.appiconset/Contents.json
	mkdir -p bin/
	nitc -o bin/tnitter.app src/tnitter_app.nit -m ios -D tnitter_server_uri=http://$(SERVER)

ios-release: $(shell nitls -M src/tnitter_app.nit -m ios) ios/AppIcon.appiconset/Contents.json
	mkdir -p bin/
	nitc -o bin/tnitter.app src/tnitter_app.nit -m ios -D tnitter_server_uri=http://tnitter.xymus.net

ios/AppIcon.appiconset/Contents.json: art/icon-ios.svg
	mkdir -p ios
	../inkscape_tools/bin/svg_to_icons art/icon-ios.svg --ios --out ios/AppIcon.appiconset/

# ---
# Misc

clean:
	rm -r res bin
