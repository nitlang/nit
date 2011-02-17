var s1 = "toto"
var s2 = "toto"
var i1 = 12

print s1 == s2 #true
print s1 is s2 #false

print s1.is_same_type(s2) #true
print s1.is_same_type(i1) #false
