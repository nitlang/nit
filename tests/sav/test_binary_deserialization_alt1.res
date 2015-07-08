# Src:
<A: true a 0.123 1234 asdf false p4ssw0rd>
# Dst:
<A: true a 0.123 1234 asdf false p4ssw0rd>

# Src:
<B: <A: false b 123.123 2345 hjkl false p4ssw0rd> 1111 qwer>
# Dst:
<B: <A: false b 123.123 2345 hjkl false p4ssw0rd> 1111 qwer>

# Src:
<C: <A: true a 0.123 1234 asdf false p4ssw0rd> <B: <A: false b 123.123 2345 hjkl false p4ssw0rd> 1111 qwer>>
# Dst:
<C: <A: true a 0.123 1234 asdf false p4ssw0rd> <B: <A: false b 123.123 2345 hjkl false p4ssw0rd> 1111 qwer>>

# Src:
<D: <B: <A: false b 123.123 2345 new line ->
<- false p4ssw0rd> 1111 	f"\/> true>
# Dst:
<D: <B: <A: false b 123.123 2345 new line ->
<- false p4ssw0rd> 1111 	f"\/> true>

# Src:
<E: a: hello, 1234, 123.4; b: hella, 2345, 234.5>
# Dst:
<E: a: hello, 1234, 123.4; b: hella, 2345, 234.5>

# Src:
<E: 2222>
# Dst:
<E: 2222>

# Src:
<E: 33.33>
# Dst:
<E: 33.33>

# Src:
<G: hs: -1, 0; s: one, two; hm: one. 1, two. 2; am: three. 3, four. 4>
# Dst:
<G: hs: -1, 0; s: one, two; hm: one. 1, two. 2; am: three. 3, four. 4>

