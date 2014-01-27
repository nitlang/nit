# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Exemple commenté d'un programme en NIT
# Cet exemple est tiré du dernier TP C++ de l'année des IUP1

# Attention, NIT est un langage enrichi en sucre (syntaxique) et en déclaration 
# implicite. Cet exemple en introduit petit à petit. Et chaque utilisation est 
# abondamment commentée. D'ailleurs, a propos de commentaires, il est peut-être
# trop tard pour dire que ceux-ci commencent par un dièse (#)

# Les points suivants sont couverts par cet exemple :
# - définition des modules
# - définition des classes
# - définition des propriétés (attributs, procédures, fonctions)
# - structures de contrôles (blocs, boucles, conditions)
# - variables locales
# - accesseurs universels
# - constructeurs et constructions d'instances
# - chaînes de caractères

# Les points suivants sont aperçus :
# - classes génériques
# - protection (visibilité des propriétés)
# - collections
# - héritage et redéfinition

# Les points suivants ne sont pas abordés :
# - accesseurs implicites
# - (re)définition des opérateurs
# - paramètres implicites
# - méthodes à arité variable
# - méthodes retardées (virtuelles pures)
# - constructeurs universels
# - appel à super
# - héritage multiple
# - covariance des types
# - raffinement de classes

# Un fichier = un module. Les classes d'un module sont définies dans le fichier.
# Au début des fichiers, les modules à importer doivent être déclarés (via le
# mot clé "import"). Implicitement, tout module importe le module nommé
# "standard" qui définit les classes usuelles.

# On va étudier une représentation d'un entrepôt de produits variés.
class Entrepot
private
# Dans un bloc "private", les propriétés déclarées sont seulement accessibles au
# receveur ("self")

# Les attributs sont déclarés par le mot clé "fun" et commencent par un "@"
	var _nom_: String 		# Un entrepôt a un nom (de type chaîne).
	var _rayons: Array[Rayon] 	# Il est composé d'un ensemble de rayon.
	# "Array" est une classe paramétrée, les crochets en sont la marque.
	# La classe "Rayon" est définie plus loin


# Les propriétés déclarées dans un bloc "public" sont accessibles à tout le
# monde.

# Les méthodes (fonctions et procédures) sont déclarées par le mot clé "fun"
	# nom est une fonction qui retourne une chaîne
	fun nom: String
	do
		# "return" sort de la fonction
		return _nom_
		# En fait, les attributs et les méthodes sont dans deux espaces
		# de noms distincts.
		# Le @ peut se prononcer "at" ce qui rappelle le mot attribut
	end
	
	# set_nom est une procédure qui prend une chaîne en paramètre
	fun set_nom(n: String)
	do
		_nom_ = n		# "=" désigne l'affectation
		# Les affectations sont des instructions et ne sont pas
		# chaînées
	end

	fun add_rayon(r: Rayon)
	do
		_rayons.add(r)		# "add" ajoute un élément
	end

	# to_s est la méthode implicitement appelée par "print" et "println"
	# Il s'agit de la représentation "humaine" d'un objet
	redef fun to_s: String
	do
		# Les variables sont déclarées par "var", leur portée va de leur
		# déclaration jusqu'au "end" correspondant
		var s = new FlatBuffer		# Là où on calcule le résultat
		# Les chaînes littérales sont déclarées avec des guillemets
		s.append("*** Entrepôt ")	# On initialise "s"
		# puis on concatène des chaînes à "s"
		s.append(_nom_)		# la méthode "append" concatène
		s.append(" ***\n")
		# Les conditions sont de la forme "if then else if else end"
		if _rayons.is_empty then
			s.append("L'entrepôt est vide\n")
		else
			var i: Iterator[Rayon]	
			# Les itérateurs permettent de traverser les collections
			i = _rayons.iterator # "iterator" retourne un nouvel itérateur 
			# La forme des boucles est "while do end"	
			while i.is_ok do	# on pointe un élément valide ?	
				# "item" retourne l'élément pointé par
				# un iterateur
				s.append(i.item.to_s)
				i.next	# passe à l'élément suivant
			end
			s.add('\n')	# "add" ajoute un caractère à la fin.
			# Comme en C, les caractères sont entre simples cotes.
		end
		return s.to_s
	end


# Dans un bloc "constructor", les méthodes déclarées sont celles utilisées pour
# créer des instances

	# init sans paramètre est le constructeur implicite
	init
	do
		_nom_ = "sans nom"
		# "new" permet d'instancier une classe. 
		_rayons = new Array[Rayon]
		# Un nouveau tableau est implicitement vide
		# On aurait pu prévoir une capacité en utilisant un autre
		# constructeur et en écrivant :
		#	_rayons = new Array[Rayon].with_capacity(50)
	end
	
	# Plusieurs constructeurs peuvent être définis
	init with_nom(n: String)
	do
		_nom_ = n
		_rayons = new Array[Rayon]
	end

# Une classe qui ne possède pas de méthode définie dans un bloc "constructor"
# est une classe abstraite : elle ne peut être instanciée.
end

class Produit
private
	var _nom_: String 		# Désignation du produit
	var _qte_: Int 			# Quantité en stock



	# Comme nous l'avons vu, les accesseurs en lecture sont
	# généralement homonymes aux attributs (au @ près).
	fun nom: String
	do
		return _nom_
	end

	fun qte: Int
	do
		return _qte_
	end

	# Toutefois, pour les accesseurs en écriture, il est d'usage en NIT 
	# d'utiliser un type de méthode particulier appelé "accesseur universel"
	# son nom se caractérise par un "=" final
	fun qte=(i: Int)
	do
		_qte_ = i
	end
	# La méthode s'utilise alors de façon élégante :
	# pour p de type statique Produit, l'expression
	#	p.qte
	# correspond à un envoi de message vers la fonction "qte" et retourne
	# la quantité d'un produit. Tandis que l'instruction
	# 	p.qte = 16
	# correspond à un envoi de message vers la méthode "qte=" et affecte
	# la quantité d'un produit.


	redef fun to_s: String
	do
		# On peut aussi utiliser "+" pour concaténer les chaînes
		return _nom_ + ":" + _qte_.to_s
		# Mais ce n'est pas très efficace car cela crée des objets
		# intermédiaires.
	end


	init(nom: String, qte: Int)
	do
		_nom_ = nom
		_qte_ = qte
	end
end

class Rayon
private
	var _stock: Array[Produit]		# Des produits en stock
	var _rubrique: String			# La catégorie des produits stockés

	# Cette fonction est utilisé par to_s pour afficher un petit titre
	fun to_s_head: String
	do
		# Les déclarations de type sont optionnelles dans un bloc "var".
		# Si une expression est passée comme valeur initiale d'une
		# variable, le type statique de la variable est implicitement
		# celui de l'expression.
		var s = new FlatBuffer
		s.append("* Rayon : ")
		# Ici, le type statique de s est implicitement String

		s.append(_rubrique)
		s.add('\n')
		return s.to_s
	end

	fun cherche_produit(n: String): nullable Produit
	do
		var i = _stock.iterator
		while i.is_ok do
			var p = i.item
			# "=" est l'opérateur égalité de valeur.
			if p.nom == n then
				return p
			end
			i.next
		end
		# "null" correspond à l'objet vide
		return null
	end


	redef fun to_s: String
	do
		var s = new FlatBuffer
		s.append(to_s_head)
		# Les boucles en NIT sont des structures puissantes, toutefois
		# la manipulation des itérateurs peut être facilité par la
		# structure "for in"
		for p in _stock do
		# L'expression de droite doit être sous-type de Collection
		# (ce qui est le cas pour Array[Produit]).
		# La variable p est automatiquement déclarée, son type 
		# automatiquement déduit (ici Produit) et la collection est 
		# automatiquement parcourue
		# En réalité, la structure "for in" n'est que du sucre
		# syntaxique pour une boucle sur une collection via des
		# itérateur comme celle écrite dans la fonction
		# "cherche_produit" précédente
			s.append(p.to_s)
			s.add('\n')
		end
		return s.to_s
	end


	# Cette fonction permet de retourner la quantité d'un produit donné
	# Ce service est très simple à implémenter si on utilise cherche_produit
	fun quantite(n: String): Int
	do
		var p = cherche_produit(n)
		# "==" est l'opérateur d'égalité d'identité
		if p == null then
			return 0
		else
			return p.qte
		end
	end

	# Le service dual consiste à définir la quantité d'un produit
	# En NIT, il est d'usage de définir ce genre de service par un accesseur
	# universel :
	fun quantite=(n: String, i: Int)
	do
		var p = cherche_produit(n)
		if p == null then
			# On Construit un nouveau produit que l'on ajoute
			_stock.add(new Produit(n, i))
		else
			# On change la quantité du produit trouvé 
			p.qte = i
		end
	end
	# Les accesseurs universels s'utilise de façon toujours aussi élégante.
	# Pour r de type Rayon, on écrira donc :
	# 	r.quantite("clous")
	# pour obtenir la quantité de clous dans le rayon, et :
	#	r.quantite("clous") = 15
	# pour mettre le nombre de clous à 15

	init do end
end

class RayonNormal
	super Rayon

	init(r: String)
	do
		_rubrique = r
		_stock = new Array[Produit]
	end
end

class RayonFroid
# Les super-classes sont déclarés avec le mot clé "special".
# Implicitement, c'est "Object", la classe de tous les objets.
	super Rayon

# Tant qu'on parle d'implicite, en l'absence de bloc de propriétés,
# celles-ci sont déclarées en tant que "public"
	fun temp_max: Int
	do
		return _temp_max_	# Attribut défini juste en dessous
	end

	var _temp_max_: Int 		# Une température maximale
	# Les autres attributs sont bien sûr hérités !

	redef fun to_s_head: String 		# On redéfinit cette méthode
	do
	# nous avons vu le "append" et le "+" sur les chaînes, mais la
	# méthode la plus simple reste la construction "{}" qui
	# permet l'inclusion automatique d'expressions. C'est aussi la méthode
	# la plus efficace.
	return "* Rayon Réfrigéré : {_rubrique} - t° max : {_temp_max_}\n"
	end


	init(r: String, t: Int)
	do
		_temp_max_ = t
		_rubrique = r
		_stock = new Array[Produit]
	end
end



# Le main (point d'entrée du programme) peut être déclaré directement à la fin
# des définitions de classes

# Constructeur implicite ("init")
var e = new Entrepot
# "println" affiche un truc et ajoute un \n à la fin
print(e.nom)			# affiche "sans nom"
# "print" affiche un truc mais sans le \n à la fin			
printn('\n') 			# va à la de ligne

e.set_nom("Montpellier")
printn(e.nom, "\n\n")			
# Affiche "Montpellier" et saute une ligne.
# Contrairement à "println", "print" peut prendre plusieurs paramètres

# Constructeur explicite ("with_nom")
e = new Entrepot.with_nom("Lunel")	# on perd l'ancien entrepôt
printn(e, '\n')
# affiche "*** Entrepot Lunel *** L'entrepôt est vide"

var p = new Produit("Carotte", 15)
print(p)				# affiche Carotte:15
p.qte = 20
print(p)				# affiche Carotte:20
printn('\n')

var r = new RayonNormal("Légumes")
printn(r, '\n')

r.quantite("Carotte") = 15
r.quantite("Navet") = 10
r.quantite("Chou") = 3
printn(r)
r.quantite("Chou") = 13
r.quantite("Courge") = 1
printn(r, '\n')

e.add_rayon(r)

var r2 = new RayonFroid("Surgelés", -5)
e.add_rayon(r2)
r2.quantite("Pizza") =  12
r2.quantite("Poisson pané") = 4
printn(e)
