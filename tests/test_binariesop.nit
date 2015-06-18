var a = 5
var b = 5

print a.bin_and(b) # 5
print a.bin_or(b)  # 5
print a.bin_xor(b) # 0
print a & b
print a | b
print a ^ b

a = 0
b = 5

print a.bin_and(b) # 0
print a.bin_or(b)  # 5
print a.bin_xor(b) # 5
print a & b
print a | b
print a ^ b

print a.bin_not
print ~a

var c = 5u8
var d = 5u8

print c.bin_and(d) # 0
print c.bin_or(d)  # 5
print c.bin_xor(d) # 5
print c & d
print c | d
print c ^ d

print c.bin_not
print ~c
