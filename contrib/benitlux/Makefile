SERVER ?= localhost:8080

all: server bin/report bin/benitlux

server: bin/benitlux_daily bin/benitlux_web
bin/benitlux_daily: $(shell nitls -M src/server/benitlux_daily.nit)
	mkdir -p bin/
	nitc -o $@ src/server/benitlux_daily.nit

bin/benitlux_web: $(shell nitls -M src/server/server.nit) src/server/benitlux_restful.nit
	mkdir -p bin/
	nitc -o $@ src/server/server.nit -D iface=$(SERVER)

pre-build: src/server/benitlux_restful.nit
src/server/benitlux_restful.nit: $(shell nitls -M src/server/benitlux_controller.nit)
	nitrestful -o $@ src/server/benitlux_controller.nit

# ---
# Report

bin/report: $(shell nitls -M src/report.nit)
	nitc -o bin/report src/report.nit

report: bin/report
	bin/report

# ---
# GTK+ client

bin/benitlux: $(shell nitls -M src/client/client.nit)
	mkdir -p bin/
	nitc -o bin/benitlux src/client/client.nit -m linux -D benitlux_rest_server_uri=http://$(SERVER)/

# ---
# Android

# Main icon
android/res/drawable-hdpi/icon.png:
	../inkscape_tools/bin/svg_to_icons art/icon.svg --android --out android/res/

# Notification icon, white only
android/res/drawable-hdpi/notif.png:
	../inkscape_tools/bin/svg_to_icons art/notif.svg --android --out android/res/ --name notif

android-res: android/res/drawable-hdpi/icon.png android/res/drawable-hdpi/notif.png

# Dev / debug app
android: bin/benitlux.apk
bin/benitlux.apk: $(shell nitls -M src/client/android.nit) android-res
	mkdir -p bin/ res/
	nitc -o $@ src/client/android.nit -m src/client/features/debug.nit \
		-D benitlux_rest_server_uri=http://$(SERVER)/

# Pure portable prototype, for comparison
bin/proto.apk: $(shell nitls -M src/client/android_proto.nit) android-res
	mkdir -p bin/ res/
	nitc -o $@ src/client/android_proto.nit \
		-D benitlux_rest_server_uri=http://$(SERVER)/

# Release version
android-release: $(shell nitls -M src/client/android.nit) android-res
	mkdir -p bin/ res/
	nitc -o bin/benitlux.apk src/client/android.nit \
		-D benitlux_rest_server_uri=http://xymus.net/benitlux/ --release

# ---
# iOS

ios: bin/benitlux.app
bin/benitlux.app: $(shell nitls -M src/client/ios.nit) ios/AppIcon.appiconset/Contents.json
	mkdir -p bin/
	rm -rf bin/benitlux.app/
	nitc -o bin/benitlux.app src/client/ios.nit -D benitlux_rest_server_uri=http://$(SERVER)/

bin/proto.app: $(shell nitls -M src/client/ios_proto.nit) ios/AppIcon.appiconset/Contents.json
	mkdir -p bin/ res/
	nitc -o $@ src/client/ios_proto.nit \
		-D benitlux_rest_server_uri=http://$(SERVER)/

ios-release: $(shell nitls -M src/client/ios.nit) ios/AppIcon.appiconset/Contents.json
	mkdir -p bin/
	nitc -o bin/benitlux.app src/client/ios.nit \
		-D benitlux_rest_server_uri=http://xymus.net/benitlux/ --release \
		--compile-dir nit_compile

ios/AppIcon.appiconset/Contents.json: art/icon.svg
	mkdir -p ios
	../inkscape_tools/bin/svg_to_icons art/icon.svg --ios --out ios/AppIcon.appiconset/
