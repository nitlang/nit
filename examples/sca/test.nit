# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Johann DUBOIS <johann.dubois@outlook.com>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Exemple de fonctionnement du module SCA
module test

import sca
import addition
import multiplication
import calculatrice

# Exemple d'une calculatrice en SCA
# Avec utilisation de deux composants : addition et multiplication
# Le composant calculatrice fait appel aux deux autres pour réaliser les opérations


# on créé le composite
var composite = new SCAComposite.with_name("calculatrice")

# le composant addition
var c_addition = new Addition(composite)

# le composant mulitiplication
var c_multiplication = new Multiplication(composite)

# le composant calculatrice qui va utiliser les deux autres
var c_calculatrice = new Calculatrice(composite)


# Utilisation de la calculatrice
# on récupère le composant calculatrice
var calculatrice = composite.get("calculatrice").as(Calculatrice)
# on effectue une somme ...
var somme = calculatrice.addition(10, 10) 
# ... une multiplication
var resultat = calculatrice.multiplication(somme, 2)

# on affiche les résultats
print "calculatrice.addition(10, 10) : {somme}"
print "calculatrice.multiplication({somme}, 2) : {resultat}"
