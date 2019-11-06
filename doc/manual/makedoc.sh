#!/bin/sh
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

set -e

echo > blank
cat \
	syntax.md blank\
	basic_type.md blank\
	structure.md blank\
	variable.md blank\
	module.md blank\
	class.md blank\
	method.md blank\
	attribute.md blank\
	constructor.md blank\
	genericity.md blank\
	virtual_type.md\
	| sed -e '/\[\[!template/d' \
	-e 's/\[\[\([^|]*\)|\([^]]*\)\]\]/\1 \\goto{\2}/g' \
	-e 's/\[\[\([^]]*\)\]\]/\1 \\goto{\1}/g' \
	> nitreference-main.md
pandoc nitreference-main.md -f markdown -t latex --listings -o nitreference-main.tex
pdflatex nitreference.tex
pandoc nitreference-main.md -V title="Nit Reference" -f markdown -t epub -o nitreference.epub
