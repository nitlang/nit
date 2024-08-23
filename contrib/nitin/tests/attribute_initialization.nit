class A
var hello = "Hello"
end
var a1 = new A
print a1.hello
redef class A
var world = "World"
end
var a2 = new A
print a2.hello
print a2.world
print a1.world
a1.world = "Monde"
print a1.world
