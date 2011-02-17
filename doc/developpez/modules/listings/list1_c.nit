var list = new List[Int] #Instancie une nouvelle liste
list.push(1) #Ajoute l'élément à la fin de la liste
list.push(2) #Ajoute l'élément à la fin de la liste
list.push(3) #Ajoute l'élément à la fin de la liste

print list.is_empty #false : la liste n'est pas vide

print list[1] #2 : Affiche l'élément à l'index 2 (sans le retirer)

print list.pop #3 : Retourne le dernier élément et le retire de la liste
print list.pop #2 : Retourne le dernier élément et le retire de la liste
print list.pop #1 : Retourne le dernier élément et le retire de la liste

print list.is_empty #true : la liste est vide
