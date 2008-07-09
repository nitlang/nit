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

import end

# Base Classes

class Object
end

class Hashable
special Object
end
# Ancestor:	"Object" on "Hashable"

class Comparable
special Object
end

class Int
special Hashable
special Comparable
end

# Complex Classes

class Pair[E]
special Object
end
class Pair[F: Hashable]
special Hashable
end
# Ancestor:	"ANY": "Object" on "Pair[E: Object]"
#		"HASHABLE": "Hashable" on "Pair[F: Hashable]"

class PairCmp[G: Comparable]
special Pair[G]
special Comparable
end
# Ancestor:	"PAIR": "Pair[G]" on "PairCmp[G: Comparable]"
#	=>	"ANY": "Object" on "PairCmp[G: Comparable]"
#	=>	"HASHABLE": "Hashable" on "PairCmp[G: Comparable+Hahsable]"
# Ancestor:	"COMPARABLE": "Comparable" on "PairCmp[G: Comparable]"

class Complex
special PairCmp[Int]
end
# Ancestor:	"PAIRCMP": "PairCmp[Int]" on "Complex"
#	=>	"PAIR": "Pair[Int]" on "Complex"
#	=>	"ANY": "Object" on "Complex"
#	=>	"HASHABLE": "Hashable" on "Complex"

# Un ancètre d'une classe c est un couple de types (ancetre, héritier) où héritier est dérivé de c
# les ancètres indirects de c par la filiation (a, h) sont
# pour chaque ancètres (aa, ha) de la classe de a
# 

# un type a un contexte. 
# Les ancetres d'une classes c sont un tas de types dont le contexte est dérivé de la classe c


# application: type1 x type2 x type3 -> type4 (ex "A[U]" x "A[E: T]" x "B[E,C]" -> "B[U,C]")
#   * map: type1 x type2 -> hash (ex "A[U] x A[E: T]" -> {E->U})
#   * betared: hash x type3 -> type4 (ex {E->U} x "B[E,C]" -> "B[U,C]"
#   * application(x,y,z) = betared(map(x,y), z)
# remarques : 
#   * type2 est la liste des parametres formels
#   * type1 peut contenir des paramètres formels
# ... l'application est plus compliquée

# application("Pair[Comparable]", "Pair[E: Comparable]", )
