class Solo
	var valeur: Object writable
end

var val: Solo = new Solo(10)

var x: Int = val.valeur.as(Int)
