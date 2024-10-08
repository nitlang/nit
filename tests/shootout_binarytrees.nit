# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2005-2008 Jean Privat <jean@pryen.org>
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

# The Comptuer Language Shootout Benchmarks
# http://shootout.alioth.debian.org
#
# contributed by Jean Privat

class TreeNode
    var left: nullable TreeNode
    var right: nullable TreeNode
    var item: Int


    init(left: nullable TreeNode, right: nullable TreeNode, item: Int)
	do
	    _left = left
	    _right = right
	    _item = item
	end


    fun item_check: Int
	do
	    if _left == null then
		return _item
	    else
		return _item + _left.item_check - _right.item_check
	    end
	end
end

fun bottom_up_tree(item: Int, depth: Int): TreeNode
    do
	if depth > 0 then
	    var item_item = 2 * item
	    depth = depth - 1
	    return new TreeNode(bottom_up_tree(item_item - 1, depth), bottom_up_tree(item_item, depth), item)
	else
	    return new TreeNode(null, null, item)
	end
end

var max_depth = 4
if not args.is_empty then
	max_depth = args.first.to_i
end
var min_depth = 4

if min_depth + 2 > max_depth then
	max_depth = min_depth + 2
end

var stretch_depth = max_depth + 1
var stretch_tree: nullable TreeNode = bottom_up_tree(0, stretch_depth)

print("stretch tree of depth {stretch_depth}\t check: {stretch_tree.item_check}")

stretch_tree = null

var long_lived_tree = bottom_up_tree(0, max_depth)

var depth = min_depth
while depth <= max_depth do
    var iterations = 1 << (max_depth - depth + min_depth)
    var check_res = 0

    for i in [1..(iterations+1)[ do
	var temp_tree = bottom_up_tree(i, depth)
	check_res = check_res + temp_tree.item_check

	temp_tree = bottom_up_tree(-i, depth)
	check_res = check_res + temp_tree.item_check
    end
    
    print("{iterations * 2}\t trees of depth {depth}\t check: {check_res}")
    
    depth = depth + 2
end

print("long lived tree of depth {max_depth}\t check: {long_lived_tree.item_check}")
