# This file is part of NIT ( http://www.nitlanguage.org ).
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

all: nitmd/nitmd txtmark/Txtmark.class markdown4j/Markdown4j.class pandoc/pandoc

nitmd/nitmd:
	cd nitmd && $(MAKE)

txtmark/Txtmark.class:
	cd txtmark && $(MAKE)

markdown4j/Markdown4j.class:
	cd markdown4j && $(MAKE)

pandoc/pandoc:
	cd pandoc && $(MAKE)

clean:
	cd nitmd && $(MAKE) clean
	cd txtmark && $(MAKE) clean
	cd markdown4j && $(MAKE) clean
	cd pandoc && $(MAKE) clean
