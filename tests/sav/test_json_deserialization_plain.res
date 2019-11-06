# JSON: {"__kind": "obj", "__id": 0, "__class": "MyClass", "i": 123, "s": "hello", "f": 123.456, "a": ["one", "two"], "o": null}
# Nit: <MyClass i:123 s:hello f:123.456 a:[one, two] o:<null>>

# JSON: {"__class": "MyClass", "i": 123, "s": "hello", "f": 123.456, "a": ["one", "two"], "o": null}
# Nit: <MyClass i:123 s:hello f:123.456 a:[one, two] o:<null>>

# JSON: {"s": "hello", "o": null, "i": 123, "f": 123.456, "__class": "MyClass", "a": ["one", "two"]}
# Nit: <MyClass i:123 s:hello f:123.456 a:[one, two] o:<null>>

# JSON: {"__class": "MyClass", "i": 123, "s": "hello", "f": 123.456, "o": null, "a": ["one", "two"], "Some random attribute": 777}
# Nit: <MyClass i:123 s:hello f:123.456 a:[one, two] o:<null>>

# JSON: {"__class": "MyClass", "i": 123, "s": "hello", "f": 123.456, "a": ["one", "two"]}
# Nit: <MyClass i:123 s:hello f:123.456 a:[one, two] o:<null>>

# JSON: {"__class": "MyClass", "i": 123, "s": "hello", "f": 123.456, "a": ["one", "two"], "o":
	{"__class": "MyClass", "i": 456, "s": "world", "f": 654.321, "a": ["1", "2"], "o": null}}
# Nit: <MyClass i:123 s:hello f:123.456 a:[one, two] o:<MyClass i:456 s:world f:654.321 a:[1, 2] o:<null>>>

# JSON: {"i": 123, "s": "hello", "f": 123.456, "a": ["one", "two"], "o": null}
# Errors: 'Deserialization Error: JSON object declaration does not declare a `__class`.'
# Nit: <JsonObject i:123, s:hello, f:123.456, a:[one,two], o:<null>>

# JSON: {"__class": "MyClass", "i": 123, "s": "hello", "f": 123.456, "a": ["one", "two"], "o": "Not the right type"}
# Errors: 'Deserialization Error: Wrong type on `MyClass::o` expected `nullable MyClass`, got `ASCIIFlatString`'
# Nit: <MyClass i:123 s:hello f:123.456 a:[one, two] o:<null>>

# JSON: not valid json
# Errors: 'Error: bad JSON entity'
# Nit: null

