# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2006-2008 Floréal Morandat <morandat@lirmm.fr>
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

# Various functions for NIT tools
module utils

import symbol

# Mangle an array of symbol using only alphanums and underscores
fun cmangle(symbols: Symbol...): String
do
	var table = once cmangle_table
	var res = new FlatBuffer
	for sym in symbols do
		if not res.is_empty then
			res.add('_')
			res.add('_')
			res.add('_')
		end
		var underscore = false
		var normal = true
		var s = sym.to_s
		for c in s.chars do
			if (c >= 'a' and c <= 'z') or (c >='A' and c <= 'Z') or (c >= '0' and c <= '9') then
				res.add(c)
				underscore = false
				normal = true
			else if c == '_' and not underscore then
				res.add(c)
				underscore = true
				normal = true
			else if table.has_key(c) then
				if normal then
					res.add('_')
					res.add('_')
				end
				res.append(table[c])
				normal = false
				underscore = false
			end
		end
	end
	return res.to_s
end

# Build the table that associates character to mangle to string
private fun cmangle_table: HashMap[Char, String]
do
	var res = new HashMap[Char, String]
	res['+'] = "plus"
	res['-'] = "minus"
	res['*'] = "star"
	res['/'] = "slash"
	res['%'] = "percent"
	res['['] = "bra"
	res['='] = "eq"
	res['<'] = "l"
	res['>'] = "g"
	res['!'] = "n"
	res['_'] = "u"
	res['@'] = "at"
	return res
end

