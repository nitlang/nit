# Custom:
<A: true a 0.123 1234 asdf false p4ssw0rd>

# Inspect:
<A#0 b:true, c:'a', f:0.123, i:1234, serialization_specific_name:"asdf", n:null>

# Custom:
<B: <A: false b 123.123 2345 hjkl true p4ssw0rd> 1111 qwer>

# Inspect:
<B#0 b:false, c:'b', f:123.123, i:2345, serialization_specific_name:"hjkl", n:…>

# Custom:
<C: <A: true a 0.123 1234 asdf false p4ssw0rd> <B: <A: false b 123.123 2345 hjkl true p4ssw0rd> 1111 qwer>>

# Inspect:
<C#0 a:<A#1>, b:<B#2>, aa:<A#1>>

# Custom:
<D: <B: <A: false b 123.123 2345 new line ->
<- false p4ssw0rd> 1111 	f"\/> true>

# Inspect:
<D#0 b:false, c:'b', f:123.123, i:2345, serialization_specific_name:"new line …>

# Custom:
<E: a: hello, 1234, 123.4; b: hella, 2345, 234.5>

# Inspect:
<E#0 a:<Array[Object]#1>, b:<Array[nullable Serializable]#2>>

# Custom:
<F: 2222>

# Inspect:
<F[Int]#0 n:2222>

# Custom:
<F: 33.33>

# Inspect:
<F[Float]#0 n:33.33>

# Custom:
<G: hs: -1, 0; s: one, two; hm: one. 1, two. 2; am: three. 3, four. 4>

# Inspect:
<G#0 hs:<HashSet[Int]#1>, s:<ArraySet[String]#2>, hm:<HashMap[String, Int]#3>,…>

