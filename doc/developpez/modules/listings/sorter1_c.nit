var tab = ["a", "c", "b"] # Un tableau non trié

print tab # acb

var sorter = new ComparableSorter[String] # On instancie le sorter ComparableSorter en précisant le type que l'on veut trier, ici des String

sorter.sort(tab) # On trie le tableau

print tab # abc
