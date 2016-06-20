all: http_request_example

http_request_example: $(shell nitls -M http_request_example.nit linux)
	nitc http_request_example.nit -m linux

http_request_example.apk: $(shell nitls -M http_request_example.nit android)
	nitc http_request_example.nit -m android

http_request_example.app: $(shell nitls -M http_request_example.nit ios)
	nitc http_request_example.nit -m ios
