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


contrib_dir = ./contrib
examples_dir = ./examples
all_contribs = $(dir $(wildcard $(contrib_dir)/*/Makefile))

# Additional program directories (contrib and examples) that are buildable
extras = $(filter-out $(contrib_dir)/nitc/,$(all_contribs))
extras += $(dir $(wildcard $(examples_dir)/*/Makefile))

all: tools man
	@echo ""
	@echo "Congratulations! Nit was succesfully compiled."
	@echo "To configure your shell environment, execute the following command:"
	@echo "    source misc/nit_env.sh install"

more:
	cd src; make more

# Compile all programs in `contrib`, `examples` and `src`.
#
# Furthermore, build the toolchain’s `man` pages.
full: all more
	for directory in $(extras); do \
		(cd "$${directory}" && $(MAKE)) || exit 1; \
	done

docs: doc/stdlib/index.html doc/nitc/index.html

tools:
	cd src; make

bin/nitdoc:
	cd src; make ../bin/nitdoc

bin/nitls:
	cd src; make

bin/nitunit:
	cd src; make

bin/nitpick:
	cd src; make

src/version.nit:
	cd src && ./git-gen-version.sh

doc/stdlib/index.html: bin/nitdoc bin/nitls
	@echo '***************************************************************'
	@echo '* Generate doc for NIT standard library                       *'
	@echo '***************************************************************'
	bin/nitdoc lib -d doc/stdlib \
		--custom-title "Nit Standard Library" \
		--custom-brand "<a href=\"http://nitlanguage.org/\">Nitlanguage.org</a>" \
		--custom-overview-text "<p>Documentation for the standard library of Nit<br/>Version $$(git describe)<br/>Date: $$(git show --format="%cd" | head -1)</p>" \
		--custom-footer-text "Nit standard library. Version $$(git describe)." \
		--piwik-tracker "pratchett.info.uqam.ca/piwik/" \
		--piwik-site-id "2" \

doc/nitc/index.html: bin/nitdoc bin/nitls
	bin/nitdoc lib src/nit*.nit src/test_*.nit -d doc/nitc \
		--private \
		--custom-title "Nit Compilers and Tools" \
		--custom-brand "<a href=\"http://nitlanguage.org/\">Nitlanguage.org</a>" \
		--custom-overview-text "<p>Documentation for the Nit tools<br/>Version $$(git describe)<br/>Date: $$(git show --format="%cd" | head -1)</p>" \
		--custom-footer-text "Nit tools. Version $$(git describe)." \
		--piwik-tracker "pratchett.info.uqam.ca/piwik/" \
		--piwik-site-id "3"

man:
	# Setup PATH to find nitc
	PATH=$$PWD/bin:$$PATH $(MAKE) -C share/man

clean:
	rm -rf -- doc/stdlib doc/nitc || true
	cd c_src; make clean
	cd src; make clean
	cd tests; make clean
	cd share/man; make clean
	-for directory in $(extras); do \
		(echo "CLEANING $$directory" && cd "$$directory" && $(MAKE) clean); \
	done
	@echo ""
	@echo "Nit was succesfully cleaned."

# BASIC CI-CD JOBS ########################################################

sanity-check:
	misc/jenkins/checkwhitespaces.sh
	misc/jenkins/checksignedoffby.sh
	misc/jenkins/checkbinaryfiles.sh
	misc/jenkins/checklicense.sh

nitunit-some: bin/nitls bin/nitunit src/version.nit
	misc/jenkins/nitunit-some.sh

nitpick-full: bin/nitls bin/nitpick src/version.nit
	bin/nitls lib src examples contrib
	bin/nitls -Pp lib src examples | grep -v -f tests/gitlab_ci.skip > list.txt || true # filter what is skipped by tests.sh
	xargs bin/nitpick < list.txt


# LIB, CONTRIB AND OOT ##############################################

nitunit-full: bin/nitls bin/nitunit src/version.nit
	bin/nitls -Pp lib src examples | grep -v -f tests/gitlab_ci.skip > list.txt || true # filter what is skipped by tests.sh
	ls -1 doc/manual/*.md >> list.txt
	xargs bin/nitunit -v < list.txt

nitunit-src: bin/nitls bin/nitunit src/version.nit
	bin/nitls -Pp src examples | grep -v -f tests/gitlab_ci.skip > list.txt || true # filter what is skipped by tests.sh
	xargs bin/nitunit -v < list.txt

test-contrib: src/version.nit
	misc/jenkins/check_contrib.sh all check
	grep 'error message' *.xml > status.txt || true
	test ! -s status.txt # no lines, no errors

# MISC ##############################################################

bootstrap-full:
	cd src && ./full_bootstrap && ./ncall.sh

bench-fast:
	cd benchmarks && ./bench_engines.sh --fast --fast --html options

nitunit-manual: bin/nitunit
	bin/nitunit doc/manual/*.md

# MORE TOOLS ########################################################

build-more-tools: more
	$(MAKE) -C contrib/nitcc

valgrind: src/version.nit
	mkdir -p valgrind.out
	bin/nitc src/nitc.nit # To warm-up the cache
	src/valgrind.sh --callgrind-out-file=valgrind.out/nitc.nitc.out bin/nitc src/nitc.nit -vv
	callgrind_annotate valgrind.out/nitc.nitc.out > valgrind.out/nitc.nitc.txt
	src/valgrind.sh --callgrind-out-file=valgrind.out/niti.niti.out bin/nit -- src/nit.nit tests/base_simple3.nit -vv
	callgrind_annotate valgrind.out/niti.niti.out > valgrind.out/niti.niti.txt

build-doc:
	nitdoc -d nitdoc.out --keep-going lib src

build-manual:
	# apt-get update && apt-get install --yes --no-install-recommends pandoc texlive texlive-latex-extra lmodern
	$(make) -C doc/manual

nitmetrics:
	mkdir -p nitmetrics.out
	nitmetrics --all --log --log-dir nitmetrics.out --dir nitmetrics.out --keep-going lib src | tee nitmetrics.out/metrics.txt

build-catalog:
	misc/jenkins/check_contrib.sh pre-build
	cd contrib && ./oot.sh update && ./oot.sh pre-build
	nitcatalog -d catalog.out lib/ examples/ contrib/ contrib/oot/
