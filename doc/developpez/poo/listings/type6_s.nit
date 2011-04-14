abstract class Graph
	type NODE: Node
	
	var nodes: Array[NODE] = new Array[NODE]

	fun add_node(node: NODE) 
	do
		nodes.add(node)
	end
end

class Node end

class XMLDocument 
	super Graph 

	redef type NODE: XMLNode
end

class XMLNode super Node end

var doc = new XMLDocument

doc.add_node(new XMLNode) 
#doc.add_node(new Node) # Cet ajout déclenche une erreur de type à la compilation
