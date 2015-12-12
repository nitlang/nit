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

import assembly_required_lexer
import assembly_required_parser

redef class Node
	fun visit(circ: Map[String, WNode]) is abstract
end

redef class Nprog
	redef fun visit(circ) do
		for i in n_e.children do i.visit(circ)
	end
end

redef class Nvalue
	fun name: String is abstract

	fun value(circ: Map[String, WNode]): WNode is abstract
end

redef class Nvalue_num

	redef fun name do return n_number.text

	redef fun value(circ) do
		if not circ.has_key(name) then circ[name] = new WNodeStatic(name.to_i.to_u16)
		return circ[name]
	end
end

redef class Nvalue_id

	redef fun name do return n_id.text

	redef fun value(circ) do
		if not circ.has_key(name) then circ[name] = new WNodeDynamic
		return circ[name]
	end
end

redef class Nid
	fun value(circ: Map[String, WNode]): WNode do
		if not circ.has_key(text) then circ[text] = new WNodeDynamic
		return circ[text]
	end
end

redef class Ne_op
	redef fun visit(circ) do
		var lnode = n_value.value(circ)
		var rnode = n_value2.value(circ)
		var to = n_id.value(circ)
		assert to isa WNodeDynamic
		n_bin_binop.make_link(lnode, rnode, to)
	end
end

redef class Ne_unary
	redef fun visit(circ) do
		var from = n_id.value(circ)
		var to = n_id2.value(circ)
		assert to isa WNodeDynamic
		var d = new WUnNot(to, from)
	end
end

redef class Ne_ass
	redef fun visit(circ) do
		var from = n_value.value(circ)
		var to = n_id.value(circ)
		assert to isa WNodeDynamic
		var d = new WUnDirect(to, from)
	end
end

redef class Nbin_binop
	fun make_link(from1, from2: WNode, to: WNodeDynamic) is abstract
end

redef class Nbin_binop_lsh
	redef fun make_link(f1, f2, to) do var d = new WBinlsh(to, f1, f2)
end

redef class Nbin_binop_rsh
	redef fun make_link(f1, f2, to) do var d = new WBinrsh(to, f1, f2)
end

redef class Nbin_binop_and
	redef fun make_link(f1, f2, to) do var d = new WBinand(to, f1, f2)
end

redef class Nbin_binop_or
	redef fun make_link(f1, f2, to) do var d = new WBinor(to, f1, f2)
end

class WLink
	var to: WNodeDynamic

	fun compute: UInt16 is abstract

	init do to.links.add(self)
end

class WBinlink
	super WLink
	var from1: WNode
	var from2: WNode
end

class WBinand
	super WBinlink
	redef fun compute do return from1.value & from2.value
end

class WBinor
	super WBinlink
	redef fun compute do return from1.value | from2.value
end

class WBinlsh
	super WBinlink
	redef fun compute do return from1.value << from2.value.to_i
end

class WBinrsh
	super WBinlink
	redef fun compute do return from1.value >> from2.value.to_i
end

class WUnlink
	super WLink
	var from: WNode
end

class WUnNot
	super WUnlink
	redef fun compute do return ~from.value
end

class WUnDirect
	super WUnlink
	redef fun compute do return from.value
end

abstract class WNode
	fun value: UInt16 is abstract
end

class WNodeStatic
	super WNode
	redef var value
end

class WNodeDynamic
	super WNode
	var links = new Array[WLink]
	redef var value is lazy do
		var total = 0u16
		for i in links do total += i.compute
		return total
	end
end

if args.is_empty then
	print "Usage: ./assembly_required input"
	exit -1
end

var input = args[0].to_path.read_all

var lex = new Lexer_assembly_required(input)
var parser = new Parser_assembly_required
var tokens = lex.lex
parser.tokens.add_all(tokens)
var root = parser.parse

if root isa NStart then
	var wires = new HashMap[String, WNode]
	root.n_0.visit(wires)
	print wires["a"].value
else abort
