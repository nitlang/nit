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
OLDNITCOPT= --no-stacktrace

all: ../bin/nitdoc ../bin/nitmetrics ../bin/nitg ../bin/nit ../bin/nitx ../bin/nitunit ../bin/nitlight ../bin/nitls ../bin/nitdbg_client

nitg_0: ../c_src/nitg parser/parser.nit
	@echo '***************************************************************'
	@echo '* Compile nitg_0 from NIT source files                          *'
	@echo '***************************************************************'
	./git-gen-version.sh
	../c_src/nitg ${OLDNITCOPT} -o nitg_0 -v nitg.nit

../bin/nitg: nitg_0 parser/parser.nit
	@echo '***************************************************************'
	@echo '* Compile nitg from NIT source files                          *'
	@echo '***************************************************************'
	./git-gen-version.sh
	./nitg_0 ${NITCOPT} -o ../bin/nitg -v nitg.nit

../bin/nitdoc: ../bin/nitg
	@echo '***************************************************************'
	@echo '* Compile nitdoc from NIT source files                        *'
	@echo '***************************************************************'
	./git-gen-version.sh
	../bin/nitg ${NITCOPT} -o ../bin/nitdoc -v nitdoc.nit

../bin/nitmetrics: ../bin/nitg
	@echo '***************************************************************'
	@echo '* Compile nitmetrics from NIT source files                     *'
	@echo '***************************************************************'
	./git-gen-version.sh
	../bin/nitg ${NITCOPT} -o ../bin/nitmetrics -v nitmetrics.nit

../bin/nit: ../bin/nitg
	@echo '***************************************************************'
	@echo '* Compile nit from NIT source files                           *'
	@echo '***************************************************************'
	./git-gen-version.sh
	../bin/nitg ${NITCOPT} -o ../bin/nit -v nit.nit

../bin/nitdbg_client : ../bin/nitg
	@echo '***************************************************************'
	@echo '* Compile nitdbg_client from NIT source files                 *'
	@echo '***************************************************************'
	./git-gen-version.sh
	../bin/nitg ${NITCOPT} -o ../bin/nitdbg_client -v nitdbg_client.nit

../bin/nitx: ../bin/nitg
	@echo '***************************************************************'
	@echo '* Compile nitx from NIT source files                          *'
	@echo '***************************************************************'
	./git-gen-version.sh
	../bin/nitg ${NITCOPT} -o ../bin/nitx -v nitx.nit

../bin/nitunit : ../bin/nitg
	@echo '***************************************************************'
	@echo '* Compile nitunit from NIT source files                       *'
	@echo '***************************************************************'
	./git-gen-version.sh
	../bin/nitg ${NITCOPT} -o ../bin/nitunit -v nitunit.nit

../bin/nitlight : ../bin/nitg
	@echo '***************************************************************'
	@echo '* Compile nitlight from NIT source files                      *'
	@echo '***************************************************************'
	./git-gen-version.sh
	../bin/nitg ${NITCOPT} -o ../bin/nitlight -v nitlight.nit

../bin/nitls : ../bin/nitg
	@echo '***************************************************************'
	@echo '* Compile nitls from NIT source files                         *'
	@echo '***************************************************************'
	./git-gen-version.sh
	../bin/nitg ${NITCOPT} -o ../bin/nitls -v nitls.nit

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
