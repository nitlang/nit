class XMLDocument 
	special Graph 

	redef var nodes: Array[XMLNode] = new Array[XMLNode]

	redef fun add_node(node: XMLNode) 
	do
		super(node)
	end
end
