abstract class Graph
	var nodes: Array[Node] = new Array[Node]

	fun add_node(node: Node) 
	do
		nodes.add(node)
	end
end

class Node end
