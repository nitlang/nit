# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2005-2008 Jean Privat <jean@pryen.org>
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

# Ce programme contient les exemples utilisés dans la thèse

import kernel

class Client
	attr _credit: Int
	
	meth regarde(t: Tableau)
	do
		if t.joli and _credit >= t.etiquette.prix then
			achete(t)
		end
	end
	
	meth achete(t: Tableau) is abstract
end

class Tableau
	meth joli: Bool is abstract
	meth etiquette: Etiquette is abstract
end

class Etiquette
	meth prix: Int is abstract
end
