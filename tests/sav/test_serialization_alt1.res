# Nit:
<A: true a 0.123 1234 asdf false>

# Json:
{"b": true, "c": "a", "f": 0.123, "i": 1234, "s": "asdf", "n": null, "array": [88, "hello", null]}

# Nit:
<B: <A: false b 123.123 2345 hjkl false> 1111 qwer>

# Json:
{"b": false, "c": "b", "f": 123.123, "i": 2345, "s": "hjkl", "n": null, "array": [88, "hello", null], "ii": 1111, "ss": "qwer"}

# Nit:
<C: <A: true a 0.123 1234 asdf false> <B: <A: false b 123.123 2345 hjkl false> 1111 qwer>>

# Json:
{"a": {"b": true, "c": "a", "f": 0.123, "i": 1234, "s": "asdf", "n": null, "array": [88, "hello", null]}, "b": {"b": false, "c": "b", "f": 123.123, "i": 2345, "s": "hjkl", "n": null, "array": [88, "hello", null], "ii": 1111, "ss": "qwer"}, "aa": {"b": true, "c": "a", "f": 0.123, "i": 1234, "s": "asdf", "n": null, "array": [88, "hello", null]}}

# Nit:
<D: <B: <A: false b 123.123 2345 new line ->
<- false> 1111 	f"\/> true>

# Json:
{"b": false, "c": "b", "f": 123.123, "i": 2345, "s": "new line ->\n<-", "n": null, "array": [88, "hello", null], "ii": 1111, "ss": "\tf\"\r\\\/", "d": null}

