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

all: bin/nitc bin/nitdoc doc/stdlib/index.html

bin/nitc: c_src/nitc src/parser/parser.nit
	@echo '***************************************************************'
	@echo '* Compile nitc from NIT source files                          *'
	@echo '***************************************************************'
	cp c_src/nitc bin/nitc
	bin/nitc ${NITCOPT} -o bin/nitc -O src/nitc.nit

bin/nitdoc: bin/nitc
	@echo '***************************************************************'
	@echo '* Compile nitdoc from NIT source files                        *'
	@echo '***************************************************************'
	bin/nitc ${NITCOPT} -o bin/nitdoc -O src/nitdoc.nit

doc/stdlib/index.html: bin/nitdoc
	@echo '***************************************************************'
	@echo '* Generate doc for NIT standard library                       *'
	@echo '***************************************************************'
	bin/nitdoc lib/*.nit -d doc/stdlib

c_src/nitc:
	@echo '***************************************************************'
	@echo '* Compile nitc from C source files                            *'
	@echo '***************************************************************'
	make -C c_src

src/parser/parser.nit:
	@echo '***************************************************************'
	@echo '* Generate nit parser                                         *'
	@echo '***************************************************************'
	make -C src/parser

clean:
	rm -rf -- .nit_compile 2> /dev/null || true
	make -C c_src clean 
	make -C src/parser clean 
	make -C tests clean 

dist-clean: clean
	make -C c_src dist-clean
	make -C src/parser dist-clean
	rm -rf -- bin/nitc bin/nitdoc doc/stdlib

