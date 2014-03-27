string: "A simple example" ; pattern: " "
searches:
* [1, 2[ = " "
* [8, 9[ = " "
splits:
* "A"
* "simple"
* "example"
join: A, simple, example
string: "A simple example" ; pattern: "ple"
searches:
* [5, 8[ = "ple"
* [13, 16[ = "ple"
splits:
* "A sim"
* " exam"
* ""
join: A sim,  exam, 
string: "A simple example" ; pattern: "ple"
searches:
* [5, 8[ = "ple"
* [13, 16[ = "ple"
splits:
* "A sim"
* " exam"
* ""
join: A sim,  exam, 
