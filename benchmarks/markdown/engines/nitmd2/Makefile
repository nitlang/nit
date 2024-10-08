# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2015 Alexandre Terrasa <alexandre@moz-code.org>
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

NITC=../../../../bin/nitc

all: nitmd2 nitmd2-o

nitmd2:
	$(NITC) nitmd2.nit

nitmd2-o:
	$(NITC) --semi-global nitmd2.nit -o $@

test: all
	./nitmd2 ../../benches/hello.md 5
	./nitmd2-o ../../benches/hello.md 5

clean:
	rm -rf nitmd2 nitmd2-o
