# On enregistre les notes des étudiants dans une HashMap
var notes = new HashMap[String, Int] #(String : Code Etudiant, Int : Note)

notes["ATE1234"] = 12
notes["BRE2345"] = 13
notes["RUY3456"] = 9
notes["FIO4567"] = 10
notes["XUH5678"] = 16
notes["COP6789"] = 6

# Affiche une note
print "Note de l'étudiant BRE2345 : {notes["BRE2345"]}"

# Calcule la moyenne
var somme = 0

for note in notes do
	somme += note	
end

var moyenne = somme / notes.length

print "Moyenne de la classe : {moyenne}"
