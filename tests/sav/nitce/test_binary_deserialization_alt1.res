# Src:
<A: true a 0.123 1234 asdf false p4ssw0rd>
# Dst:
<A: true a 0.123 1234 asdf false p4ssw0rd>

# Src:
<B: <A: false b 123.123 2345 hjkl true p4ssw0rd> 1111 qwer>
# Dst:
<B: <A: false b 123.123 2345 hjkl true p4ssw0rd> 1111 qwer>

# Src:
<C: <A: true a 0.123 1234 asdf false p4ssw0rd> <B: <A: false b 123.123 2345 hjkl true p4ssw0rd> 1111 qwer>>
# Dst:
<C: <A: true a 0.123 1234 asdf false p4ssw0rd> <B: <A: false b 123.123 2345 hjkl true p4ssw0rd> 1111 qwer>>

# Src:
<D: <B: <A: false b 123.123 2345 new line ->
<- false p4ssw0rd> 1111 	f"\/> true>
# Dst:
<D: <B: <A: false b 123.123 2345 new line ->
<- false p4ssw0rd> 1111 	f"\/> true>

Deserialization Error: Doesn't know how to deserialize class "Array", Deserialization Error: Wrong type on `E::a` expected `Array[Object]`, got `null`, Deserialization Error: Doesn't know how to deserialize class "Array", Deserialization Error: Wrong type on `E::b` expected `Array[nullable Serializable]`, got `null`
# Src:
<E: a: hello, 1234, 123.4; b: hella, 2345, 234.5>
# Dst:
<E: a: hello, 1234, 123.4; b: hella, 2345, 234.5>

Deserialization Error: Doesn't know how to deserialize class "F"
Deserialization Error: Doesn't know how to deserialize class "F"
Deserialization Error: Doesn't know how to deserialize class "HashSet", Deserialization Error: Wrong type on `G::hs` expected `HashSet[Int]`, got `null`, Deserialization Error: Doesn't know how to deserialize class "ArraySet", Deserialization Error: Wrong type on `G::s` expected `Set[String]`, got `null`, Deserialization Error: Doesn't know how to deserialize class "HashMap", Deserialization Error: Wrong type on `G::hm` expected `HashMap[String, Int]`, got `null`, Deserialization Error: Doesn't know how to deserialize class "ArrayMap", Deserialization Error: Wrong type on `G::am` expected `ArrayMap[String, String]`, got `null`
# Src:
<G: hs: -1, 0; s: one, two; hm: one. 1, two. 2; am: three. 3, four. 4>
# Dst:
<G: hs: ; s: ; hm: ; am: >

