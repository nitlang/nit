all: bin/objcwrapper

pre-build: src/objc_parser.nit

../nitcc/src/nitcc:
	make -C ../nitcc

src/objc_parser.nit: ../nitcc/src/nitcc grammar/objc.sablecc
	../nitcc/src/nitcc grammar/objc.sablecc
	mv *.nit src/
	mv objc* gen/

bin/objcwrapper: $(shell ../../bin/nitls -M src/objcwrapper.nit) src/objc_parser.nit
	../../bin/nitc -o bin/objcwrapper src/objcwrapper.nit --semi-global

bin/objc_test_parser: $(shell ../../bin/nitls -M src/objc_test_parser.nit)
	../../bin/nitc -o bin/objc_test_parser src/objc_test_parser.nit --semi-global

check: bin/objc_test_parser bin/objcwrapper
	# Test the parser
	bin/objc_test_parser tests/MyClass.h

	# Test objcwrapper
	bin/objcwrapper tests/MyClass.h -o tests/MyClass.nit
	../../bin/nitpick tests/MyClass.nit

# Test on classes of libgnustep-base-dev
check-gnustep: bin/objcwrapper
	bin/objcwrapper /usr/include/GNUstep/Foundation/*.h -o tests/gnustep.nit -p "-I /usr/include/GNUstep/ -Wno-deprecated -Wno-cpp"
	../../bin/nitpick tests/nsarray.nit

# Test on classes of the Apple Foundation framework
check-apple: bin/objcwrapper
	bin/objcwrapper /System/Library/Frameworks/Foundation.framework/Versions/C/Headers/NSArray.h -o tests/nsarray.nit
	../../bin/nitpick tests/nsarray.nit

	bin/objcwrapper /System/Library/Frameworks/AppKit.framework/Headers/NSAlert.h -o tests/nsalert.nit
	../../bin/nitpick tests/nsalert.nit

bin/header_static: $(shell ../../bin/nitls -M src/header_static.nit)
	../../bin/nitc --dir bin src/header_static.nit
