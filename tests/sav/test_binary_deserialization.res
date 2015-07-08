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

