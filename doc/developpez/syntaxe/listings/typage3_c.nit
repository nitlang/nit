var x : nullable Int = 10

if x != null then
	# Ici le type statique de x devient Int (sans nullable)
	print x + 6
end
# Le type statique de x redevient nullable Int
