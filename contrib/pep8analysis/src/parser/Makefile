# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2008-2009 Jean Privat <jean@pryen.org>
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

SABLECC3ALTGEN ?= sablecc3

all: parser.nit

# Preprocess the extended sablecc gramar
#.pep8.sablecc3: pep8.sablecc3xx
	#./prescc.sh $< $@

# Note that parser_nodes is no more automatically synced with the grammar
parser.nit: xss/*.xss
	@${SABLECC3ALTGEN -license} >/dev/null 2>/dev/null || ( echo "***\n*** sablecc3 altgen version is needed.\n*** Set the environment variable SABLECC3ALTGEN to the executable.\n*** Aborting...\n***" ; exit 1 )
	@${SABLECC3ALTGEN} | grep altgen >/dev/null 2>/dev/null || ( echo "***\n*** $$SABLECC3ALTGEN is not the sablecc3 altgen version.\n*** Set the environment variable SABLECC3ALTGEN to the executable.\n*** Aborting...\n***"; exit 1 )
	${SABLECC3ALTGEN} -c pep8.sablecc3.dump -t xss/main.xss -p usermodule parser_nodes pep8.sablecc3
	mv -f -- parser.nit .parser-nofact.nit
	./fact_parser.pl .parser-nofact.nit > parser.nit
	perl -np -i.orig -e 's/([ \[])P([A-Z])/\1A\2/g;' -e 's/"{"/"\\{"/g;' parser.nit parser_abs.nit parser_prod.nit lexer.nit

clean:
	rm -f -- pep8.sablecc3 pep8.sablecc3.dump .parser-nofact.nit || true

distclean: clean

maintainer-clean: clean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f -- parser.nit parser_abs.nit parser_prod.nit lexer.nit || true

merge:
	meld parser_nodes.nit parser_abs.nit

.PHONY: parser.nit
