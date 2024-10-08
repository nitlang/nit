# This file is part of NIT ( https://nitlanguage.org ).
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

# Support for translating the app to different languages, implements French
module translations

redef class Text
	# Translate `self` according to the current language `sys.lang`
	fun t: String
	do
		var lang = sys.lang_map
		if lang == null then return to_s

		if lang.keys.has(self) then return lang[self]

		print "Translation miss ({sys.lang}): {self}"
		return to_s
	end
end

redef class Sys
	# Name of the language in use
	var lang = "C"

	# Translation map for the language in use
	var lang_map: nullable Map[Text, String] = null
end

# Set French as the current language
fun set_fr
do
	var map = new Map[Text, String]

	# Home views
	map["Welcome %0"] = "Bienvenue %0"
	map["Welcome"] = "Bienvenue"
	map["Beer Menu"] = "Menu de bières"
	map["View all"] = "Menu complet"
	map["Preferences"] = "Préférences"
	map["Friends"] = "Amis"
	map["Manage"] = "Gérer"
	map["Events"] = "Événements"
	map["Loading..."] = "Chargement..."
	map["Login or signup"] = "S'authentifier"
	map["On location?"] = "Sur place?"
	map["Leaving?"] = "Vous quittez?"

	# User/login views
	map["Account options"] = "Options du compte"
	map["Share options"] = "Options de partage"
	map["Notifications options"] = "Options de notification"
	map["Please login"] = "Veuillez vous identifier"
	map["Welcome %0!"] = "Bienvenue %0!"
	map["Logged in as %0"] = "Connecté en tant que %0"
	map["Username"] = "Nom d'utilisateur"
	map["Password"] = "Mot de passe"
	map["Repeat password"] = "Répéter le mot de passe"
	map["Email"] = "Courriel"
	map["Login"] = "Se connecter"
	map["Loging in..."] = "Authentification..."
	map["Logout"] = "Se déconnecter"
	map["Signup"] = "Créer un compte"
	map["Signing up..."] = "Création du compte..."

	map["Passwords must be composed of at least 6 characters."] = "Le mot de passe doit avoir au moins 6 charactères."
	map["Fill the following fields to sign up."] = "Remplissez les champs suivants pour créer un compte."

	map["Passwords do not match."] = "Les mots de passe ne correspondent pas."
	map["Invalid username."] = "Nom d'utilisateur invalide."
	map["Invalid password."] = "Mot de passe invalide."
	map["Username already in use."] = "Le nom d'utilisateur est déjà réservé."
	map["Invalid username and password combination."] = "La combinaison de nom et mot de passe n'est pas reconnue."

	# Social views
	map["Follow"] = "Suivre"
	map["Unfollow"] = "Ne plus suivre"
	map["Search"] = "Rechercher"
	map["Favorites: %0"] = "Favoris: %0"
	map["No favorites yet"] = "Pas de favoris"
	map["List followed"] = "Personnes suivies"
	map["List followers"] = "Personnes vous suivant"

	# Beer views
	map["Review %0"] = "Évaluer %0"
	map["%0★ %1 reviews"] = "%0★ %1 avis"
	map["No reviews yet"] = "Aucun avis"
	map[", friends: %0☆ %1 reviews"] = ", amis: %0☆ %1 avis"
	map[" (New)"] = " (Nouveau)"
	map["Similar to %0."] = "Similaire à %0."
	map["Favorite beer on the menu."] = "Bière préférée sur le menu."
	map["Favorite of %0"] = "Préférée de %0"

	# Preferences
	map["Notify when a friend checks in"] = "Lorsqu'un ami est sur place"
	map["Show the menu every work day"] = "Menu journalier en semaine"
	map["Notify when there are new beers"] = "Lorsqu'il y a de nouvelles bières"
	map["Share checkins with your friends"] = "Partager lorsque vous êtes sur place"
	map["Passing by the Benelux?"] = "De passage au Bénélux?"

	# Update Sys
	sys.lang = "fr"
	sys.lang_map = map
end
