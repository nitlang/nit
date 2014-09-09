Runtime error: Aborted (../lib/serialization.nit:72)
# Nit:
<A: true a 0.123 1234 asdf false>

# Json:
{"__kind": "obj", "__id": 0, "__class": "A", "b": true, "c": {"__kind": "char", "__val": "a"}, "f": 0.123, "i": 1234, "s": "asdf", "n": null}

# Back in Nit:
<A: true a 0.123 1234 asdf false>

# Nit:
<B: <A: false b 123.123 2345 hjkl false> 1111 qwer>

# Json:
{"__kind": "obj", "__id": 0, "__class": "B", "b": false, "c": {"__kind": "char", "__val": "b"}, "f": 123.123, "i": 2345, "s": "hjkl", "n": null, "ii": 1111, "ss": "qwer"}

# Back in Nit:
<B: <A: false b 123.123 2345 hjkl false> 1111 qwer>

# Nit:
<C: <A: true a 0.123 1234 asdf false> <B: <A: false b 123.123 2345 hjkl false> 1111 qwer>>

# Json:
{"__kind": "obj", "__id": 0, "__class": "C", "a": {"__kind": "obj", "__id": 1, "__class": "A", "b": true, "c": {"__kind": "char", "__val": "a"}, "f": 0.123, "i": 1234, "s": "asdf", "n": null}, "b": {"__kind": "obj", "__id": 2, "__class": "B", "b": false, "c": {"__kind": "char", "__val": "b"}, "f": 123.123, "i": 2345, "s": "hjkl", "n": null, "ii": 1111, "ss": "qwer"}, "aa": {"__kind": "ref", "__id": 1}}

# Back in Nit:
<C: <A: true a 0.123 1234 asdf false> <B: <A: false b 123.123 2345 hjkl false> 1111 qwer>>

# Nit:
<D: <B: <A: false b 123.123 2345 new line ->
<- false> 1111 	f"\/> true>

# Json:
{"__kind": "obj", "__id": 0, "__class": "D", "b": false, "c": {"__kind": "char", "__val": "b"}, "f": 123.123, "i": 2345, "s": "new line ->\n<-", "n": null, "ii": 1111, "ss": "\tf\"\r\\\/", "d": {"__kind": "ref", "__id": 0}}

# Back in Nit:
<D: <B: <A: false b 123.123 2345 new line ->
<- false> 1111 	f"\/> true>

Error: doesn't know how to deserialize class "Array[Object]"
