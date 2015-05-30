# Nit:
<A: true a 0.123 1234 asdf false p4ssw0rd>

# Json:
{"b": true, "c": "a", "f": 0.123, "i": 1234, "s": "asdf", "n": null}

# Nit:
<B: <A: false b 123.123 2345 hjkl false p4ssw0rd> 1111 qwer>

# Json:
{"b": false, "c": "b", "f": 123.123, "i": 2345, "s": "hjkl", "n": null, "ii": 1111, "ss": "qwer"}

# Nit:
<C: <A: true a 0.123 1234 asdf false p4ssw0rd> <B: <A: false b 123.123 2345 hjkl false p4ssw0rd> 1111 qwer>>

# Json:
{"a": {"b": true, "c": "a", "f": 0.123, "i": 1234, "s": "asdf", "n": null}, "b": {"b": false, "c": "b", "f": 123.123, "i": 2345, "s": "hjkl", "n": null, "ii": 1111, "ss": "qwer"}, "aa": {"b": true, "c": "a", "f": 0.123, "i": 1234, "s": "asdf", "n": null}}

# Nit:
<D: <B: <A: false b 123.123 2345 new line ->
<- false p4ssw0rd> 1111 	f"\/> true>

# Json:
{"b": false, "c": "b", "f": 123.123, "i": 2345, "s": "new line ->\n<-", "n": null, "ii": 1111, "ss": "\tf\"\r\\\/", "d": null}

# Nit:
<E: a: hello, 1234, 123.4; b: hella, 2345, 234.5>

# Json:
{"a": ["hello", 1234, 123.4], "b": ["hella", 2345, 234.5]}

# Nit:
<E: 2222>

# Json:
{"n": 2222}

# Nit:
<E: 33.33>

# Json:
{"n": 33.33}

# Nit:
<G: hs: -1, 0; s: one, two; hm: one. 1, two. 2; am: three. 3, four. 4>

# Json:
{"hs": [-1, 0], "s": ["one", "two"], "hm": {"one": 1, "two": 2}, "am": {"three": "3", "four": "4"}}

