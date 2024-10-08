#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Visualize a tree
# SEE: <http://rosettacode.org/wiki/Visualize a tree>
module visualize_a_tree

# The library `ordered_tree` offers basic visualization services for trees.
import ordered_tree

var tree = new OrderedTree[String]
tree.add(null, "a")
tree.add("a", "ab")
tree.add("ab", "abc")
tree.add("a", "ac")
tree.add("ac", "acd")
tree.add(null, "b")
tree.add("b", "bc")

tree.write_to(stdout)
