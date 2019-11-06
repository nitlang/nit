# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

NITCOPT=--semi-global
OLDNITCOPT=--semi-global
OBJS=nitc nitpick nit nitls nitunit nitx nitlight nitserial nitrestful nitpackage
SRCS=$(patsubst %,%.nit,$(OBJS))
BINS=$(patsubst %,../bin/%,$(OBJS))
MOREOBJS=nitdoc nitweb nitcatalog nitmetrics nitpretty nitweb nitpm
MORESRCS=$(patsubst %,%.nit,$(MOREOBJS))
MOREBINS=$(patsubst %,../bin/%,$(MOREOBJS))
DEPS=$(wildcard *.nit */*.nit) parser/parser.nit

# Workaround: Cygwin requires peflags to bootstrap
peflags := ${shell which peflags 2>/dev/null}

all: ../bin/nitc

more: ../bin/nitdoc

pre-build:
	./git-gen-version.sh

nitc_0: ../c_src/nitc $(DEPS)
	@echo '***************************************************************'
	@echo '* Compile nitc_0 from NIT source files                        *'
	@echo '***************************************************************'
	./git-gen-version.sh
	../c_src/nitc ${OLDNITCOPT} -o nitc_0 -v nitc.nit
ifdef peflags
	${peflags} --cygwin-heap=2048 nitc_0
endif

../bin/nitc: nitc_0 $(DEPS)
	@echo '***************************************************************'
	@echo '* Compile binaries from NIT source files                      *'
	@echo '***************************************************************'
	./git-gen-version.sh
	test -d ../bin || mkdir ../bin
	./nitc_0 ${NITCOPT} -v --dir ../bin $(SRCS)

../bin/nitdoc: ../bin/nitc $(DEPS)
	../bin/nitc ${NITCOPT} -v --dir ../bin $(MORESRCS)

$(OBJS): nitc_0 $(DEPS)
	./git-gen-version.sh
	./nitc_0 ${NITCOPT} -v $@.nit

../c_src/nitc: ../c_src/*.c ../c_src/*.h ../c_src/Makefile
	@echo '***************************************************************'
	@echo '* Compile nitc from C source files                            *'
	@echo '***************************************************************'
	cd ../c_src; make
	rm ../c_src/*.o || true # to reduce disc used
ifdef peflags
	${peflags} --cygwin-heap=2048 ../c_src/nitc
endif

parser/parser.nit:
	@echo '***************************************************************'
	@echo '* Generate nit parser                                         *'
	@echo '***************************************************************'
	cd parser; make

clean:
	rm -rf -- version.nit nitc_0 2> /dev/null || true
	cd parser; make clean
