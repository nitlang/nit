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

docs: doc/stdlib/index.html doc/nitc/index.html doc/newmodel/index.html
	#cd doc; make

tools:
	cd src; make

bin/nitdoc:
	cd src; make ../bin/nitdoc

doc/stdlib/index.html: bin/nitdoc
	@echo '***************************************************************'
	@echo '* Generate doc for NIT standard library                       *'
	@echo '***************************************************************'
	bin/nitdoc lib/*.nit $$(find lib/* -maxdepth 0 -type d ) -d doc/stdlib --public \
		--custom-title "Nit Standard Library" \
		--custom-menu-items "<li><a href=\"http://nitlanguage.org/\">Nitlanguage.org</a></li>" \
		--custom-overview-text "<p>Documentation for the standard library of Nit<br/>Version $$(git describe)<br/>Date: $$(git show --format="%cd" | head -1)</p>" \
		--custom-footer-text "Nit standard library. Version $$(git describe)." \
		--github nit \
		--source "https://github.com/privat/nit/blob/$$(git show --format="%H" | head -1)/%f#L%l-%L"

doc/nitc/index.html: bin/nitdoc
	bin/nitdoc src/nitc.nit src/nitdoc.nit src/nits.nit -d doc/nitc \
		--custom-title "Nit Compiler and Tools" \
		--custom-menu-items "<li><a href=\"http://nitlanguage.org/\">Nitlanguage.org</a></li>" \
		--custom-overview-text "<p>Documentation for the Nit compiler and tools<br/>Version $$(git describe)<br/>Date: $$(git show --format="%cd" | head -1)</p>" \
		--custom-footer-text "Nit compiler. Version $$(git describe)." \
		--github nit \
		--source "https://github.com/privat/nit/blob/$$(git show --format="%H" | head -1)/%f#L%l-%L"

doc/newmodel/index.html: bin/nitdoc
	bin/nitdoc src/nit.nit src/nitmetrics.nit src/nitg.nit -d doc/newmodel \
		--custom-title "Nit New Model" \
		--custom-menu-items "<li><a href=\"http://nitlanguage.org/\">Nitlanguage.org</a></li>" \
		--custom-overview-text "<p>Documentation for the Nit tools based on the new metamodel<br/>Version $$(git describe)<br/>Date: $$(git show --format="%cd" | head -1)</p>" \
		--custom-footer-text "Nit new metamodel. Version $$(git describe)." \
		--github nit \
		--source "https://github.com/privat/nit/blob/$$(git show --format="%H" | head -1)/%f#L%l-%L"

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
