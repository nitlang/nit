all: http_request_example ui_example

android: http_request_example.apk ui_example.apk

ios: http_request_example.app ui_example.app

http_request_example: $(shell nitls -M http_request_example.nit -m linux)
	nitc http_request_example.nit -m linux

http_request_example.apk: $(shell nitls -M http_request_example.nit -m android)
	nitc http_request_example.nit -m android

http_request_example.app: $(shell nitls -M http_request_example.nit -m ios)
	nitc http_request_example.nit -m ios

ui_example: $(shell nitls -M ui_example.nit -m linux)
	nitc ui_example.nit -m linux

ui_example.apk: $(shell nitls -M ui_example.nit -m android)
	nitc ui_example.nit -m android

ui_example.app: $(shell nitls -M ui_example.nit -m ios)
	nitc ui_example.nit -m ios

clean:
	rm -rf http_request_example http_request_example.apk http_request_example.app ui_example ui_example.apk ui_example.app
