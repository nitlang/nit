var set = new ArraySet[String]
var a = "Coucou"
var b = "Coucou"

set.add(a)
print set.has(b) # true : le set contient déjà la chaîne "Coucou"
