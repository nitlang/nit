all: bin/objcwrapper

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
check-gnustep:
	gcc -E /usr/include/GNUstep/Foundation/NSArray.h -I /usr/include/GNUstep/ -Wno-deprecated \
	| ../header_keeper/bin/header_keeper /usr/include/GNUstep/Foundation/NSArray.h \
	| bin/header_static > tests/NSArray.pre.h
	bin/objcwrapper tests/NSArray.pre.h
	../../bin/nitpick NSArray.nit

# Test on classes of the Apple Foundation framework
check-apple:
	gcc -E /System/Library/Frameworks/Foundation.framework/Versions/C/Headers/NSArray.h \
	| ../header_keeper/bin/header_keeper /System/Library/Frameworks/Foundation.framework/Versions/C/Headers/NSArray.h \
	| bin/header_static > tests/NSArray.pre.h
	bin/objcwrapper tests/NSArray.pre.h
	../../bin/nitpick NSArray.nit
