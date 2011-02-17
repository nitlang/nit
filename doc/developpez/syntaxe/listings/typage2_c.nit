# Exemple simple
var x: Object = "une string"
if x isa Int then
	# Le type statique de x devient Int
	print x * 10 # Ok
end

# Exemple basé sur les opérateurs booléens
var a: Array[Object] = new Array[Object]

for i in a do
	# Le type statique de i est Object
	if not i isa Int then continue
	# Le type statique de i devient Int
	print i * 10 # Ok
end

# Encore plus fort
var max = 0

for i in a do
	if i isa Int and i > max then max = 1
	# Le > est valide puisque dans la partie à gauche du 'and' le type statique de i est Int
end
