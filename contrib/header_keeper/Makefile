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

NITC ?= nitc
NITLS ?= nitls
NITUNIT ?= nitunit
NITDOC ?= nitdoc

.PHONY: all
all: bin/header_keeper

bin/header_keeper: $(shell $(NITLS) -M src/header_keeper.nit)
	mkdir -p bin/
	$(NITC) src/header_keeper.nit -o bin/header_keeper

.PHONY: check
check: tests
	$(NITUNIT) .

.PHONY: tests
tests: bin/header_keeper
	gcc -E /usr/include/SDL/SDL_image.h | bin/header_keeper SDL_image.h
	gcc -E /usr/include/GLES2/gl2.h | bin/header_keeper gl2.h

.PHONY: doc
doc:
	$(NITDOC) . -o doc/

.PHONY: clean
clean:
	rm -rf bin/
	rm -rf doc/
