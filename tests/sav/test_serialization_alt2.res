alt/test_serialization_alt2.nit:22,1--38,3: Warning: superfluous use of `serialize`.
alt/test_serialization_alt2.nit:53,1--62,3: Warning: superfluous use of `auto_serializable`.
alt/test_serialization_alt2.nit:64,1--72,3: Warning: superfluous use of `auto_serializable`.
# Nit:
<A: true a 0.123 1234 asdf false>

# Json:
{"__kind": "obj", "__id": 0, "__class": "A","b":true,"f":0.123,"i":1234,"s":"asdf","n":null,"array":{"__kind": "obj", "__id": 1, "__class": "Array[nullable Object]","__items": [88,"hello",null]}}

# Nit:
<B: <A: false b 123.123 2345 hjkl true> 1111 qwer>

# Json:
{"__kind": "obj", "__id": 0, "__class": "B","b":false,"f":123.123,"i":2345,"s":"hjkl","n":12,"array":{"__kind": "obj", "__id": 1, "__class": "Array[nullable Object]","__items": [88,"hello",null]}}

# Nit:
<C: <A: true a 0.123 1234 asdf false> <B: <A: false b 123.123 2345 hjkl true> 1111 qwer>>

# Json:
{"__kind": "obj", "__id": 0, "__class": "C","a":{"__kind": "obj", "__id": 1, "__class": "A","b":true,"f":0.123,"i":1234,"s":"asdf","n":null,"array":{"__kind": "obj", "__id": 2, "__class": "Array[nullable Object]","__items": [88,"hello",null]}},"b":{"__kind": "obj", "__id": 3, "__class": "B","b":false,"f":123.123,"i":2345,"s":"hjkl","n":12,"array":{"__kind": "obj", "__id": 4, "__class": "Array[nullable Object]","__items": [88,"hello",null]}},"aa":{"__kind": "ref", "__id": 1}}

# Nit:
<D: <B: <A: false b 123.123 2345 new line ->
<- false> 1111 	f"\/> true>

# Json:
{"__kind": "obj", "__id": 0, "__class": "D","b":false,"f":123.123,"i":2345,"s":"new line ->\n<-","n":null,"array":{"__kind": "obj", "__id": 1, "__class": "Array[nullable Object]","__items": [88,"hello",null]},"d":{"__kind": "ref", "__id": 0}}

