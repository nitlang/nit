# This file is part of NIT ( http://www.nitlanguage.org ).
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

all: parser_sablecc.nit

# Preprocess the extended sablecc gramar
.nit.sablecc3: nit.sablecc3xx
	./prescc.pl $< > $@

# Note that parser_nodes is no more automatically synced with the grammar
parser_sablecc.nit: .nit.sablecc3 xss/*.xss
	@${SABLECC3ALTGEN -license} >/dev/null 2>/dev/null || ( echo "***\n*** sablecc3 altgen version is needed.\n*** Set the environment variable SABLECC3ALTGEN to the executable.\n*** Aborting...\n***" ; exit 1 )
	@${SABLECC3ALTGEN} | grep altgen >/dev/null 2>/dev/null || ( echo "***\n*** $$SABLECC3ALTGEN is not the sablecc3 altgen version.\n*** Set the environment variable SABLECC3ALTGEN to the executable.\n*** Aborting...\n***"; exit 1 )
	${SABLECC3ALTGEN} -c .nit.sablecc3.dump -t xss/main.xss -p usermodule parser_nodes .nit.sablecc3
	mv -f -- parser_sablecc.nit .parser-nofact.nit
	./fact_parser.pl .parser-nofact.nit > parser_sablecc.nit
	perl -np -i.orig -e 's/([ (\[])P([A-Z])/\1A\2/g;' -e 's/"{"/"\\{"/g;' parser_sablecc.nit parser_abs.nit parser_prod.nit lexer.nit

clean:
	rm -f -- .nit.sablecc3 .nit.sablecc3.dump .parser-nofact.nit || true

maintainer-clean: clean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f -- parser_sablecc.nit parser_abs.nit parser_prod.nit lexer.nit || true

java: .nit.sablecc3
	rm -r org/nitlanguage/gen/analysis/ org/nitlanguage/gen/lexer/ org/nitlanguage/gen/node/ org/nitlanguage/gen/parser/
	${SABLECC3ALTGEN} .nit.sablecc3 -c .nit.sablecc3.dump
	javac org/nitlanguage/gen/TestParser.java
