# This file is part of NIT ( http://www.nitlanguage.org ).
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

.SUFFIXES:

PROJECT_LIBDIR = ../../lib
PROJECT_MANDIR = .
PROJECT_MAN1DIR = $(PROJECT_MANDIR)/man1
PROJECT_WEBDIR = $(PROJECT_MANDIR)/www
PROJECT_PDFDIR = $(PROJECT_MANDIR)/pdf.out

IN = $(wildcard $(PROJECT_MANDIR)/nit*.md)
OUT = $(patsubst $(PROJECT_MANDIR)/%.md,$(PROJECT_MAN1DIR)/%.1,$(IN))

MARKDOWN = $(PROJECT_LIBDIR)/markdown
NITMD = $(MARKDOWN)/nitmd

.PHONY: all
all: $(OUT)


$(PROJECT_MAN1DIR)/%.1: $(PROJECT_MANDIR)/%.md $(NITMD)
	mkdir -p $(PROJECT_MAN1DIR)
	printf '.TH %s 1\n' $* > $@
	$(NITMD) $< -t man >> $@


$(NITMD):
	cd $(MARKDOWN) && $(MAKE)

# Rule to produce mdwn files for ikiwiki that will be used at http://nitlanguage.org/tools/
.PHONY: web
web:
	rm -r $(PROJECT_WEBDIR) 2>/dev/null || true
	mkdir -p $(PROJECT_WEBDIR)
	cp $(PROJECT_MANDIR)/nit*.md $(PROJECT_WEBDIR)
	rename '$$_ = "$${_}wn"' $(PROJECT_WEBDIR)/*.md
	sed -i -e '/SEE ALSO/,$$d' $(PROJECT_WEBDIR)/*.mdwn

.PHONY: publish
publish: web
	rsync $(PROJECT_WEBDIR)/* asimov:wiki/nitlanguage/doc/tools/
	ssh asimov make -C wiki/nitlanguage

.PHONY: pdf
pdf:
	mkdir -p $(PROJECT_PDFDIR)
	for x in $(PROJECT_MANDIR)/nit*.md; do printf '%s\n' "$$x"; pandoc -V header-includes='\usepackage{savetrees}' "$$x" -o $(PROJECT_PDFDIR)/"$$x".pdf; done
	pdfjoin pdf.out/*.pdf -o man.pdf

.PHONY: clean distclean mostlyclean maintainer-clean
clean distclean mostlyclean maintainer-clean:
	rm -rf -- $(PROJECT_WEBDIR) $(PROJECT_PDFDIR) $(PROJECT_MAN1DIR)
