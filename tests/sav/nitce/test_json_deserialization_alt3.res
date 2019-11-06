# Nit:
<A: true a 0.123 1234 asdf false p4ssw0rd>

# Json:
{
	"__kind": "obj", "__id": 0, "__class": "A",
	"b": true,
	"c": {"__kind": "char", "__val": "a"},
	"f": 0.123,
	"i": 1234,
	"serialization_specific_name": "asdf",
	"n": null
}

# Back in Nit:
<A: true a 0.123 1234 asdf false p4ssw0rd>

# Nit:
<B: <A: false b 123.123 2345 hjkl true p4ssw0rd> 1111 qwer>

# Json:
{
	"__kind": "obj", "__id": 0, "__class": "B",
	"b": false,
	"c": {"__kind": "char", "__val": "b"},
	"f": 123.123,
	"i": 2345,
	"serialization_specific_name": "hjkl",
	"n": 12,
	"ii": 1111,
	"ss": "qwer"
}

# Back in Nit:
<B: <A: false b 123.123 2345 hjkl true p4ssw0rd> 1111 qwer>

# Nit:
<C: <A: true a 0.123 1234 asdf false p4ssw0rd> <B: <A: false b 123.123 2345 hjkl true p4ssw0rd> 1111 qwer>>

# Json:
{
	"__kind": "obj", "__id": 0, "__class": "C",
	"a": {
		"__kind": "obj", "__id": 1, "__class": "A",
		"b": true,
		"c": {"__kind": "char", "__val": "a"},
		"f": 0.123,
		"i": 1234,
		"serialization_specific_name": "asdf",
		"n": null
	},
	"b": {
		"__kind": "obj", "__id": 2, "__class": "B",
		"b": false,
		"c": {"__kind": "char", "__val": "b"},
		"f": 123.123,
		"i": 2345,
		"serialization_specific_name": "hjkl",
		"n": 12,
		"ii": 1111,
		"ss": "qwer"
	},
	"aa": {
		"__kind": "ref", "__id": 1
	}
}

# Back in Nit:
<C: <A: true a 0.123 1234 asdf false p4ssw0rd> <B: <A: false b 123.123 2345 hjkl true p4ssw0rd> 1111 qwer>>

# Nit:
<D: <B: <A: false b 123.123 2345 new line ->
<- false p4ssw0rd> 1111 	f"\/> true>

# Json:
{
	"__kind": "obj", "__id": 0, "__class": "D",
	"b": false,
	"c": {"__kind": "char", "__val": "b"},
	"f": 123.123,
	"i": 2345,
	"serialization_specific_name": "new line ->\n<-",
	"n": null,
	"ii": 1111,
	"ss": "\tf\"\r\\/",
	"d": {
		"__kind": "ref", "__id": 0
	}
}

# Back in Nit:
<D: <B: <A: false b 123.123 2345 new line ->
<- false p4ssw0rd> 1111 	f"\/> true>

# Nit:
<E: a: hello, 1234, 123.4; b: hella, 2345, 234.5>

# Json:
{
	"__kind": "obj", "__id": 0, "__class": "E",
	"a": {
		"__kind": "obj", "__id": 1, "__class": "Array",
		"__items": ["hello", 1234, 123.4]
	},
	"b": {
		"__kind": "obj", "__id": 2, "__class": "Array",
		"__items": ["hella", 2345, 234.5]
	}
}

# Back in Nit:
<E: a: hello, 1234, 123.4; b: hella, 2345, 234.5>

Deserialization Error: Doesn't know how to deserialize class "Array"
Deserialization Error: Wrong type on `E::a` expected `Array[Object]`, got `null`
Deserialization Error: Doesn't know how to deserialize class "Array"
Deserialization Error: Wrong type on `E::b` expected `Array[nullable Serializable]`, got `null`
# Nit:
<F: 2222>

# Json:
{
	"__kind": "obj", "__id": 0, "__class": "F",
	"n": 2222
}

# Back in Nit:
null

Deserialization Error: Doesn't know how to deserialize class "F"
# Nit:
<F: 33.33>

# Json:
{
	"__kind": "obj", "__id": 0, "__class": "F",
	"n": 33.33
}

# Back in Nit:
null

Deserialization Error: Doesn't know how to deserialize class "F"
# Nit:
<G: hs: -1, 0; s: one, two; hm: one. 1, two. 2; am: three. 3, four. 4>

# Json:
{
	"__kind": "obj", "__id": 0, "__class": "G",
	"hs": {
		"__kind": "obj", "__id": 1, "__class": "HashSet",
		"__items": [-1, 0]
	},
	"s": {
		"__kind": "obj", "__id": 2, "__class": "ArraySet",
		"__items": ["one", "two"]
	},
	"hm": {
		"__kind": "obj", "__id": 3, "__class": "HashMap", "__length": 2,
		"__keys": ["one", "two"],
		"__values": [1, 2]
	},
	"am": {
		"__kind": "obj", "__id": 4, "__class": "ArrayMap", "__length": 2,
		"__keys": ["three", "four"],
		"__values": ["3", "4"]
	}
}

# Back in Nit:
<G: hs: ; s: ; hm: ; am: >

Deserialization Error: Doesn't know how to deserialize class "HashSet"
Deserialization Error: Wrong type on `G::hs` expected `HashSet[Int]`, got `null`
Deserialization Error: Doesn't know how to deserialize class "ArraySet"
Deserialization Error: Wrong type on `G::s` expected `Set[String]`, got `null`
Deserialization Error: Doesn't know how to deserialize class "HashMap"
Deserialization Error: Wrong type on `G::hm` expected `HashMap[String, Int]`, got `null`
Deserialization Error: Doesn't know how to deserialize class "ArrayMap"
Deserialization Error: Wrong type on `G::am` expected `ArrayMap[String, String]`, got `null`
