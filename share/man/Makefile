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

IN=$(wildcard nit*.md)
OUT=$(patsubst %.md,man1/%.1,$(IN))

MARKDOWN=../../lib/markdown
NITMD=$(MARKDOWN)/bin/nitmd

all: $(OUT)


man1/%.1: %.md $(NITMD)
	mkdir -p man1
	echo ".TH $* 1" > $@
	$(NITMD) $< -t man >> $@


$(NITMD):
	$(MAKE) -C $(MARKDOWN)

# Rule to produce md files for nitiwiki that will be used at http://nitlanguage.org/tools/
web:
	rm -r www 2>/dev/null || true
	mkdir -p www
	cp nit*.md www
	sed -i -e '/SEE ALSO/,$$d' www/*.md

pdf:
	mkdir -p pdf.out
	for x in nit*.md; do echo $$x; pandoc -V header-includes='\usepackage{savetrees}' $$x -o pdf.out/$$x.pdf; done
	pdfjoin pdf.out/*.pdf -o man.pdf

clean:
	rm -r www pdf.out || true
