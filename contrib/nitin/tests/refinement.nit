var i = 42
redef class Int
fun foo: Int do return self + 1
end
print(i.foo)
