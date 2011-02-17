class Solo[T]
	var valeur: T writable
end

var solo_int = new Solo[Int](10)
var x: Int = solo_int.valeur

var solo_string = new Solo[String]("toto")
var x: String = solo_string.valeur
