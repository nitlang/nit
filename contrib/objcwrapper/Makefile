all: bin/objcwrapper

pre-build: src/objc_parser.nit

../nitcc/src/nitcc:
	cd ../nitcc && $(MAKE)

src/objc_parser.nit: ../nitcc/src/nitcc grammar/objc.sablecc
	../nitcc/src/nitcc grammar/objc.sablecc
	mv *.nit src/
	mv objc* gen/

bin/objcwrapper: $(shell nitls -M src/objcwrapper.nit) src/objc_parser.nit
	nitc -o bin/objcwrapper src/objcwrapper.nit --semi-global

bin/objc_test_parser: $(shell nitls -M src/objc_test_parser.nit)
	nitc -o bin/objc_test_parser src/objc_test_parser.nit --semi-global

check: bin/objc_test_parser bin/objcwrapper
	# Test the parser
	bin/objc_test_parser tests/MyClass.h

	# Test objcwrapper
	bin/objcwrapper tests/MyClass.h -o tests/MyClass.nit
	nitpick tests/MyClass.nit

# Test on classes of libgnustep-base-dev
check-gnustep: bin/objcwrapper
	bin/objcwrapper /usr/include/GNUstep/Foundation/*.h -o tests/gnustep.nit -p "-I /usr/include/GNUstep/ -Wno-deprecated -Wno-cpp"
	nitpick tests/nsarray.nit

# Test on classes of the Apple Foundation framework
check-apple: bin/objcwrapper
	bin/objcwrapper /System/Library/Frameworks/Foundation.framework/Versions/C/Headers/NSArray.h -o tests/nsarray.nit
	nitpick tests/nsarray.nit

	bin/objcwrapper /System/Library/Frameworks/AppKit.framework/Headers/NSAlert.h -o tests/nsalert.nit
	nitpick tests/nsalert.nit

bin/header_static: $(shell nitls -M src/header_static.nit)
	nitc --dir bin src/header_static.nit

clean:
	rm -rf -- ./bin/* ./gen/objc.* ./objc.*
	rm -f -- ./objc_lexer.nit ./objc_parser.nit ./objc_test_parser.nit
	rm -f -- ./src/objc_lexer.nit ./src/objc_parser.nit ./src/objc_test_parser.nit
	rm -f -- ./tests/MyClass.nit ./tests/nsarray.nit ./tests/nsalert.nit
