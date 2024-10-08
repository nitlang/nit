# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

class Foo
	fun bar: Bool do return true

	fun foo(other: Foo): Foo
	do
		if other.bar then
			return other
		else
			return self
		end
	end

	fun baz: Int do
		var nb = 0

		while nb < 10 do
			print nb
			nb += 1
		end # 1

		return nb
	end

	fun gaz: Int
	do
		if bar then # 3
			return 1
		else
			return -1 # 4
		end
	end
end

class Test[E]
	var heap: ArrayHeap[E]
	init to(comparator: Comparator[E]) do heap = new ArrayHeap[E](comparator)

	init from(comparator: Comparator[E], items: Collection[E]) do
		heap = new ArrayHeap[E].from(comparator, items.to_a)
	end

	fun count(k: E): Int do
		if heap.has(k) then
			return 1
		else
			return 0
		end
	end

	fun node_at_idx(i: Int, k: E) do
		while heap != null do
			if heap.is_empty or i == k then # FIXME prefilter because the compiler is not smart enought yet
				break
			end
		end
	end

	fun save_those_nodes(nodes: Collection[Object]) do
		for node in nodes do count(node)
	end
end

fun foo do
	if last_slash > 0 then
		return substring(last_slash + 1, length)
	else
		return null
	end
end

print "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam tincidunt sapien et velit fringilla varius at non eros. Nunc ut ultricies metus, sit amet lacinia felis. Donec in facilisis neque, non laoreet nibh. Etiam nec purus eu orci congue iaculis eu quis lorem. Ut et blandit erat. Cras fermentum pellentesque ante, ut dapibus ipsum placerat sit amet. Vivamus pharetra, sem vitae consequat venenatis, diam risus placerat est, sed hendrerit purus justo vitae lectus. In id quam mattis, rutrum augue eu, vehicula ipsum. Nulla nec egestas turpis, nec ullamcorper odio. Pellentesque vitae arcu justo. Aliquam sed pharetra lacus."

var lorem = "lorem"
var ipsum = "ipsum" # for fun

print "We also need to handle super strings: {lorem} {ipsum} dolor sit amet, consectetur adipiscing elit. Aliquam tincidunt sapien et velit fringilla varius at non eros. Nunc ut ultricies metus, sit amet lacinia felis. Donec in facilisis neque, non laoreet nibh. Etiam nec purus eu orci congue iaculis eu quis {lorem}. Ut et blandit erat. Cras fermentum pellentesque ante, ut dapibus {ipsum} placerat sit amet. Vivamus pharetra, sem vitae consequat venenatis, diam risus placerat est, sed hendrerit purus justo vitae lectus. In id quam mattis, rutrum augue eu, vehicula ipsum. Nulla nec egestas turpis, nec ullamcorper odio. Pellentesque vitae arcu justo. Aliquam sed pharetra lacus." # ending

var title = "title"
var links = new Array[String] # why not?

var body = """
<!DOCTYPE html>
<head>
	<meta charset="utf-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<link rel="stylesheet" href="//maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
	<title>{{{title}}}</title>
</head>
<body>
	<div class="container">
		<h1>{{{title}}}</h1>
		<ul>
			<li>{{{links.join("</li>\n\t\t\t<li>")}}}</li>
		</ul>
	</div>
</body>
</html>"""
