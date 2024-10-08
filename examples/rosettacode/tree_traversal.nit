#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Tree traversal
#
# SEE: http://rosettacode.org/wiki/Tree_traversal
module tree_traversal

class Node
	var value: Int
	var left: nullable Node
	var right: nullable Node

	fun preorder
	do
		print value
		var l = left
		if l != null then l.preorder
		var r = right
		if r != null then r.preorder
	end

	fun inorder
	do
		var l = left
		if l != null then l.inorder
		print value
		var r = right
		if r != null then r.inorder
	end

	fun postorder
	do
		var l = left
		if l != null then l.postorder
		var r = right
		if r != null then r.postorder
		print value
	end

	fun levelorder
	do
		var q = new List[Node]
		q.add self
		while q.not_empty do
			var n = q.shift
			print n.value
			var l = n.left
			if l != null then q.push l
			var r = n.right
			if r != null then q.push r
		end
	end
end

var tree = new Node(1,
	new Node(2,
		new Node(4,
			new Node(7)),
		new Node(5)),
	new Node(3,
		new Node(6,
			new Node(8),
			new Node(9))))

print "preorder:"
tree.preorder
print "inorder:"
tree.inorder
print "postorder:"
tree.postorder
print "levelorder:"
tree.levelorder
