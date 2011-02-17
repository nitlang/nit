class Solo[T: Animal]
	var valeur: T writable
end

var soloAnimal = new Solo[Animal](new Animal)
var soloVache = new Solo[Vache](new Vache)

soloAnimal = soloVache
