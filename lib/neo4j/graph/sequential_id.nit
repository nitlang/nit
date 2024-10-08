# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Provides a sequential identification scheme for Neo4j nodes.
module neo4j::graph::sequential_id

import graph
private import pipeline


# A Neo4j node collection using a sequential identification scheme.
#
# The local IDs are sequential numbers (integers) starting at `1`.
#
# Note: When loading nodes, the local IDs should forms a mostly contiguous
# range starting at `1`. Else, this collection will consume a lot of memory.
# Futhermore, the local IDs **must** be positive.
#
# ~~~nit
# var nodes = new SequentialNodeCollection("id")
# var a = nodes.create_node
# var b = new NeoNode
# var c = new NeoNode
#
# nodes.register b
# c["id"] = 4
# nodes.add c
# assert a["id"] == 1
# assert b["id"] == 2
# assert c["id"] == 4
# assert nodes.to_a == [a, b, c]
# assert nodes.length == 3
#
# nodes.compact
# assert a["id"] == 1
# assert b["id"] == 2
# assert c["id"] == 3
# assert nodes.to_a == [a, b, c]
# assert nodes.length == 3
# ~~~
class SequentialNodeCollection
	super NeoNodeCollection

	redef type ID_TYPE: Int

	private var nodes = new Array[nullable NeoNode]

	redef var length = 0

	redef fun iterator do return new NullSkipper[NeoNode](self.nodes.iterator)

	redef fun [](id) do return nodes[id].as(NeoNode)

	redef fun get_or_null(id) do
		if id < 0 or id > nodes.length then return null
		return nodes[id]
	end

	redef fun has_id(id) do
		return id >= 0 and id < nodes.length and nodes[id] isa NeoNode
	end

	redef fun enlarge(cap) do nodes.enlarge(cap)

	redef fun register(node) do
		nodes.add node
		id_of(node) = nodes.length
		length += 1
	end

	redef fun add(node) do
		var id = node[id_property]
		assert id isa Int else
			sys.stderr.write "The local ID must be an `Int`.\n"
		end
		assert id >= 0 else
			sys.stderr.write "The local ID must be greater or equal to 0. Got {id}.\n"
		end
		# Pad with nulls.
		nodes.enlarge(id)
		var delta = id - nodes.length
		while delta > 0 do
			nodes.add null
			delta -= 1
		end
		nodes[id] = node
		length += 1
	end

	redef fun remove_at(id) do
		nodes[id] = null
		length -= 1
	end

	redef fun clear do
		nodes.clear
		length = 0
	end

	redef fun compact do
		var i = iterator

		nodes = new Array[nullable NeoNode]
		for n in i do
			nodes.add n
			id_of(n) = nodes.length
		end
	end
end
