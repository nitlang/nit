# Nit:
<A: true 0.123 1234 asdf false>

# Json:
{"__kind": "obj", "__id": 0, "__class": "A", "b": true, "f": 0.123, "i": 1234, "s": "asdf", "n": null}

# Back in Nit:
<A: true 0.123 1234 asdf false>

# Nit:
<B: <A: false 123.123 2345 hjkl false> 1111 qwer>

# Json:
{"__kind": "obj", "__id": 0, "__class": "B", "b": false, "f": 123.123, "i": 2345, "s": "hjkl", "n": null, "ii": 1111, "ss": "qwer"}

# Back in Nit:
<B: <A: false 123.123 2345 hjkl false> 1111 qwer>

# Nit:
<C: <A: true 0.123 1234 asdf false> <B: <A: false 123.123 2345 hjkl false> 1111 qwer>>

# Json:
{"__kind": "obj", "__id": 0, "__class": "C", "a": {"__kind": "obj", "__id": 1, "__class": "A", "b": true, "f": 0.123, "i": 1234, "s": "asdf", "n": null}, "b": {"__kind": "obj", "__id": 2, "__class": "B", "b": false, "f": 123.123, "i": 2345, "s": "hjkl", "n": null, "ii": 1111, "ss": "qwer"}, "aa": {"__kind": "ref", "__id": 1}}

# Back in Nit:
<C: <A: true 0.123 1234 asdf false> <B: <A: false 123.123 2345 hjkl false> 1111 qwer>>

# Nit:
<D: <B: <A: false 123.123 2345 new line ->
<- false> 1111 	f"\/> true>

# Json:
{"__kind": "obj", "__id": 0, "__class": "D", "b": false, "f": 123.123, "i": 2345, "s": "new line ->\n<-", "n": null, "ii": 1111, "ss": "\tf\"\r\\\/", "d": {"__kind": "ref", "__id": 0}}

# Back in Nit:
<D: <B: <A: false 123.123 2345 new line ->
<- false> 1111 	f"\/> true>

