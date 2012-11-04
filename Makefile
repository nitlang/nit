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

all: tools doc/stdlib/index.html

docs: doc/stdlib/index.html doc/nitc/index.html
	cd doc; make

tools:
	cd src; make

doc/stdlib/index.html: tools
	@echo '***************************************************************'
	@echo '* Generate doc for NIT standard library                       *'
	@echo '***************************************************************'
	bin/nitdoc lib/*.nit -d doc/stdlib --public --custom-overview-text '<p>Documentation for the standard library of Nit</p>' --custom-footer-text 'Nit standard library. Version '`git describe`'.'

doc/nitc/index.html: tools
	bin/nitdoc src/nitc.nit src/nitdoc.nit -d doc/nitc --custom-overview-text '<p>Documentation for the nit compiler</p>' --custom-footer-text 'Nit compiler. Version '`git describe`'.'

clean:
	rm -rf -- .nit_compile 2> /dev/null || true
	cd c_src; make clean
	cd src; make clean
	cd doc; make clean
	cd tests; make clean

distclean: clean
	rm -rf -- bin/nitc bin/nitdoc bin/nits doc/stdlib doc/nitc/ 2> /dev/null || true
	cd c_src; make distclean
	cd src/parser; make distclean
	cd doc; make distclean
	cd tests; make distclean
