class Duo[T, S]
	var valeur1: T writable
	var valeur2: S writable
end

var duo = new Duo[Int, String](10, "toto")

var i: Int = duo.valeur1
var s: String = duo.valeur2
