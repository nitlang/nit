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

# Ce module présente une utilisation de SCA avec des fichiers de context et de proxy
# Ces fichiers sont actuellement générés manuellement, mais il pourront être générés automatiquement en parsant le fichier de configuration "calculatrice.composite"
module test

import sca
import addition
import additionContext
import multiplication
import multiplicationContext
import calculatrice


# On charge le composite
var composite = new SCAComposite.with_name("calculatrice")

var additionContext = new AdditionContext.with_name("additionContext")
var multiplicationContext = new MultiplicationContext.with_name("multiplicationContext")
composite.add additionContext
composite.add multiplicationContext
# fin du chargement

# Utilisation de la calculatrice
var calculatrice = new Calculatrice(composite)

# Appel des méthodes
var somme = calculatrice.addition(20, 10) 
var resultat = calculatrice.multiplication(somme, 2)


print "calculatrice.addition(20, 10) : {somme}"
print "calculatrice.multiplication({somme}, 2) : {resultat}"
