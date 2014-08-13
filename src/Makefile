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

NITCOPT=
OLDNITCOPT=
OBJS=nitdoc nitmetrics nitg nit nitx nitunit nitlight nitls nitdbg_client nitserial
SRCS=$(patsubst %,%.nit,$(OBJS))
BINS=$(patsubst %,../bin/%,$(OBJS))

all: $(BINS)

nitg_0: ../c_src/nitg parser/parser.nit
	@echo '***************************************************************'
	@echo '* Compile nitg_0 from NIT source files                        *'
	@echo '***************************************************************'
	./git-gen-version.sh
	../c_src/nitg ${OLDNITCOPT} -o nitg_0 -v nitg.nit

$(BINS): nitg_0 parser/parser.nit
	@echo '***************************************************************'
	@echo '* Compile binaries from NIT source files                      *'
	@echo '***************************************************************'
	./git-gen-version.sh
	./nitg_0 ${NITCOPT} -v --dir ../bin $(SRCS)

$(OBJS): nitg_0 parser/parser.nit
	./git-gen-version.sh
	./nitg_0 ${NITCOPT} -v $@.nit

../c_src/nitg: ../c_src/*.c ../c_src/*.h ../c_src/Makefile
	@echo '***************************************************************'
	@echo '* Compile nitg from C source files                            *'
	@echo '***************************************************************'
	cd ../c_src; make

parser/parser.nit:
	@echo '***************************************************************'
	@echo '* Generate nit parser                                         *'
	@echo '***************************************************************'
	cd parser; make

clean:
	rm -rf -- .nit_compile* version.nit 2> /dev/null || true
	cd parser; make clean

distclean: clean
	cd parser; make distclean
