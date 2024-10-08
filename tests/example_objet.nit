# This file is part of NIT ( https://nitlanguage.org ).
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

# Exemple comment� d'un programme en NIT
# Cet exemple est tir� du dernier TP C++ de l'ann�e des IUP1

# Attention, NIT est un langage enrichi en sucre (syntaxique) et en d�claration 
# implicite. Cet exemple en introduit petit � petit. Et chaque utilisation est 
# abondamment comment�e. D'ailleurs, a propos de commentaires, il est peut-�tre
# trop tard pour dire que ceux-ci commencent par un di�se (#)

# Les points suivants sont couverts par cet exemple :
# - d�finition des modules
# - d�finition des classes
# - d�finition des propri�t�s (attributs, proc�dures, fonctions)
# - structures de contr�les (blocs, boucles, conditions)
# - variables locales
# - accesseurs universels
# - constructeurs et constructions d'instances
# - cha�nes de caract�res

# Les points suivants sont aper�us :
# - classes g�n�riques
# - protection (visibilit� des propri�t�s)
# - collections
# - h�ritage et red�finition

# Les points suivants ne sont pas abord�s :
# - accesseurs implicites
# - (re)d�finition des op�rateurs
# - param�tres implicites
# - m�thodes � arit� variable
# - m�thodes retard�es (virtuelles pures)
# - constructeurs universels
# - appel � super
# - h�ritage multiple
# - covariance des types
# - raffinement de classes

# Un fichier = un module. Les classes d'un module sont d�finies dans le fichier.
# Au d�but des fichiers, les modules � importer doivent �tre d�clar�s (via le
# mot cl� "import"). Implicitement, tout module importe le module nomm�
# "core" qui d�finit les classes usuelles.

# On va �tudier une repr�sentation d'un entrep�t de produits vari�s.
class Entrepot
private
# Dans un bloc "private", les propri�t�s d�clar�es sont seulement accessibles au
# receveur ("self")

# Les attributs sont d�clar�s par le mot cl� "fun" et commencent par un "@"
	var nom_: String is noinit 		# Un entrep�t a un nom (de type cha�ne).
	var rayons: Array[Rayon] is noinit 	# Il est compos� d'un ensemble de rayon.
	# "Array" est une classe param�tr�e, les crochets en sont la marque.
	# La classe "Rayon" est d�finie plus loin


# Les propri�t�s d�clar�es dans un bloc "public" sont accessibles � tout le
# monde.

# Les m�thodes (fonctions et proc�dures) sont d�clar�es par le mot cl� "fun"
	# nom est une fonction qui retourne une cha�ne
	fun nom: String
	do
		# "return" sort de la fonction
		return _nom_
		# En fait, les attributs et les m�thodes sont dans deux espaces
		# de noms distincts.
		# Le @ peut se prononcer "at" ce qui rappelle le mot attribut
	end
	
	# set_nom est une proc�dure qui prend une cha�ne en param�tre
	fun set_nom(n: String)
	do
		_nom_ = n		# "=" d�signe l'affectation
		# Les affectations sont des instructions et ne sont pas
		# cha�n�es
	end

	fun add_rayon(r: Rayon)
	do
		_rayons.add(r)		# "add" ajoute un �l�ment
	end

	# to_s est la m�thode implicitement appel�e par "print" et "println"
	# Il s'agit de la repr�sentation "humaine" d'un objet
	redef fun to_s: String
	do
		# Les variables sont d�clar�es par "var", leur port�e va de leur
		# d�claration jusqu'au "end" correspondant
		var s = new FlatBuffer		# L� o� on calcule le r�sultat
		# Les cha�nes litt�rales sont d�clar�es avec des guillemets
		s.append("*** Entrep�t ")	# On initialise "s"
		# puis on concat�ne des cha�nes � "s"
		s.append(_nom_)		# la m�thode "append" concat�ne
		s.append(" ***\n")
		# Les conditions sont de la forme "if then else if else end"
		if _rayons.is_empty then
			s.append("L'entrep�t est vide\n")
		else
			var i: Iterator[Rayon]	
			# Les it�rateurs permettent de traverser les collections
			i = _rayons.iterator # "iterator" retourne un nouvel it�rateur 
			# La forme des boucles est "while do end"	
			while i.is_ok do	# on pointe un �l�ment valide ?	
				# "item" retourne l'�l�ment point� par
				# un iterateur
				s.append(i.item.to_s)
				i.next	# passe � l'�l�ment suivant
			end
			s.add('\n')	# "add" ajoute un caract�re � la fin.
			# Comme en C, les caract�res sont entre simples cotes.
		end
		return s.to_s
	end


# Dans un bloc "constructor", les m�thodes d�clar�es sont celles utilis�es pour
# cr�er des instances

	# init sans param�tre est le constructeur implicite
	init
	do
		_nom_ = "sans nom"
		# "new" permet d'instancier une classe. 
		_rayons = new Array[Rayon]
		# Un nouveau tableau est implicitement vide
		# On aurait pu pr�voir une capacit� en utilisant un autre
		# constructeur et en �crivant :
		#	_rayons = new Array[Rayon].with_capacity(50)
	end
	
	# Plusieurs constructeurs peuvent �tre d�finis
	init with_nom(n: String)
	do
		_nom_ = n
		_rayons = new Array[Rayon]
	end

# Une classe qui ne poss�de pas de m�thode d�finie dans un bloc "constructor"
# est une classe abstraite : elle ne peut �tre instanci�e.
end

class Produit
private
	var nom_: String 		# D�signation du produit
	var qte_: Int 			# Quantit� en stock



	# Comme nous l'avons vu, les accesseurs en lecture sont
	# g�n�ralement homonymes aux attributs (au @ pr�s).
	fun nom: String
	do
		return _nom_
	end

	fun qte: Int
	do
		return _qte_
	end

	# Toutefois, pour les accesseurs en �criture, il est d'usage en NIT 
	# d'utiliser un type de m�thode particulier appel� "accesseur universel"
	# son nom se caract�rise par un "=" final
	fun qte=(i: Int)
	do
		_qte_ = i
	end
	# La m�thode s'utilise alors de fa�on �l�gante :
	# pour p de type statique Produit, l'expression
	#	p.qte
	# correspond � un envoi de message vers la fonction "qte" et retourne
	# la quantit� d'un produit. Tandis que l'instruction
	# 	p.qte = 16
	# correspond � un envoi de message vers la m�thode "qte=" et affecte
	# la quantit� d'un produit.


	redef fun to_s: String
	do
		# On peut aussi utiliser "+" pour concat�ner les cha�nes
		return _nom_ + ":" + _qte_.to_s
		# Mais ce n'est pas tr�s efficace car cela cr�e des objets
		# interm�diaires.
	end


	init(nom: String, qte: Int)
	do
		_nom_ = nom
		_qte_ = qte
	end
end

class Rayon
private
	var stock: Array[Produit] is noinit		# Des produits en stock
	var rubrique: String is noinit			# La cat�gorie des produits stock�s

	# Cette fonction est utilis� par to_s pour afficher un petit titre
	fun to_s_head: String
	do
		# Les d�clarations de type sont optionnelles dans un bloc "var".
		# Si une expression est pass�e comme valeur initiale d'une
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
			# "=" est l'op�rateur �galit� de valeur.
			if p.nom == n then
				return p
			end
			i.next
		end
		# "null" correspond � l'objet vide
		return null
	end


	redef fun to_s: String
	do
		var s = new FlatBuffer
		s.append(to_s_head)
		# Les boucles en NIT sont des structures puissantes, toutefois
		# la manipulation des it�rateurs peut �tre facilit� par la
		# structure "for in"
		for p in _stock do
		# L'expression de droite doit �tre sous-type de Collection
		# (ce qui est le cas pour Array[Produit]).
		# La variable p est automatiquement d�clar�e, son type 
		# automatiquement d�duit (ici Produit) et la collection est 
		# automatiquement parcourue
		# En r�alit�, la structure "for in" n'est que du sucre
		# syntaxique pour une boucle sur une collection via des
		# it�rateur comme celle �crite dans la fonction
		# "cherche_produit" pr�c�dente
			s.append(p.to_s)
			s.add('\n')
		end
		return s.to_s
	end


	# Cette fonction permet de retourner la quantit� d'un produit donn�
	# Ce service est tr�s simple � impl�menter si on utilise cherche_produit
	fun quantite(n: String): Int
	do
		var p = cherche_produit(n)
		# "==" est l'op�rateur d'�galit� d'identit�
		if p == null then
			return 0
		else
			return p.qte
		end
	end

	# Le service dual consiste � d�finir la quantit� d'un produit
	# En NIT, il est d'usage de d�finir ce genre de service par un accesseur
	# universel :
	fun quantite=(n: String, i: Int)
	do
		var p = cherche_produit(n)
		if p == null then
			# On Construit un nouveau produit que l'on ajoute
			_stock.add(new Produit(n, i))
		else
			# On change la quantit� du produit trouv� 
			p.qte = i
		end
	end
	# Les accesseurs universels s'utilise de fa�on toujours aussi �l�gante.
	# Pour r de type Rayon, on �crira donc :
	# 	r.quantite("clous")
	# pour obtenir la quantit� de clous dans le rayon, et :
	#	r.quantite("clous") = 15
	# pour mettre le nombre de clous � 15
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
# Les super-classes sont d�clar�s avec le mot cl� "special".
# Implicitement, c'est "Object", la classe de tous les objets.
	super Rayon

# Tant qu'on parle d'implicite, en l'absence de bloc de propri�t�s,
# celles-ci sont d�clar�es en tant que "public"
	fun temp_max: Int
	do
		return _temp_max_	# Attribut d�fini juste en dessous
	end

	var temp_max_: Int 		# Une temp�rature maximale
	# Les autres attributs sont bien s�r h�rit�s !

	redef fun to_s_head: String 		# On red�finit cette m�thode
	do
	# nous avons vu le "append" et le "+" sur les cha�nes, mais la
	# m�thode la plus simple reste la construction "{}" qui
	# permet l'inclusion automatique d'expressions. C'est aussi la m�thode
	# la plus efficace.
	return "* Rayon R�frig�r� : {_rubrique} - t� max : {_temp_max_}\n"
	end


	init(r: String, t: Int)
	do
		_temp_max_ = t
		_rubrique = r
		_stock = new Array[Produit]
	end
end



# Le main (point d'entr�e du programme) peut �tre d�clar� directement � la fin
# des d�finitions de classes

# Constructeur implicite ("init")
var e = new Entrepot
# "println" affiche un truc et ajoute un \n � la fin
print(e.nom)			# affiche "sans nom"
# "print" affiche un truc mais sans le \n � la fin			
printn('\n') 			# va � la de ligne

e.set_nom("Montpellier")
printn(e.nom, "\n\n")			
# Affiche "Montpellier" et saute une ligne.
# Contrairement � "println", "print" peut prendre plusieurs param�tres

# Constructeur explicite ("with_nom")
e = new Entrepot.with_nom("Lunel")	# on perd l'ancien entrep�t
printn(e, '\n')
# affiche "*** Entrepot Lunel *** L'entrep�t est vide"

var p = new Produit("Carotte", 15)
print(p)				# affiche Carotte:15
p.qte = 20
print(p)				# affiche Carotte:20
printn('\n')

var r = new RayonNormal("L�gumes")
printn(r, '\n')

r.quantite("Carotte") = 15
r.quantite("Navet") = 10
r.quantite("Chou") = 3
printn(r)
r.quantite("Chou") = 13
r.quantite("Courge") = 1
printn(r, '\n')

e.add_rayon(r)

var r2 = new RayonFroid("Surgel�s", -5)
e.add_rayon(r2)
r2.quantite("Pizza") =  12
r2.quantite("Poisson pan�") = 4
printn(e)
