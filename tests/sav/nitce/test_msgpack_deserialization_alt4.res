# 1. Nit source:
<A: true a 0.123 1234 asdf false p4ssw0rd>

# 2. MsgPack:
\x93\xD4\x7B\x00\x92\xD4\x7B\x01\xA1\x41\x86\x92\xD4\x7B\x02\xA1\x62\xC3\x92\xD4\x7B\x03\xA1\x63\xD4\x7C\x61\x92\xD4\x7B\x04\xA1\x66\xCB\x3F\xBF\x97\x24\x74\x53\x8E\xF3\x92\xD4\x7B\x05\xA1\x69\xCD\x04\xD2\x92\xD4\x7B\x06\xBB\x73\x65\x72\x69\x61\x6C\x69\x7A\x61\x74\x69\x6F\x6E\x5F\x73\x70\x65\x63\x69\x66\x69\x63\x5F\x6E\x61\x6D\x65\xA4\x61\x73\x64\x66\x92\xD4\x7B\x07\xA1\x6E\xC0

# 3. JSON:
[{
	"typ": 123,
	"data": [0]
}, [{
	"typ": 123,
	"data": [1]
}, "A"], {
	"[<MsgPackExt typ: 0x7b, data: \\x02>,b]": true,
	"[<MsgPackExt typ: 0x7b, data: \\x03>,c]": {
		"typ": 124,
		"data": [97]
	},
	"[<MsgPackExt typ: 0x7b, data: \\x04>,f]": 0.123,
	"[<MsgPackExt typ: 0x7b, data: \\x05>,i]": 1234,
	"[<MsgPackExt typ: 0x7b, data: \\x06>,serialization_specific_name]": "asdf",
	"[<MsgPackExt typ: 0x7b, data: \\x07>,n]": null
}]

# 4. Back in Nit (with metadata):
<A: true a 0.123 1234 asdf false p4ssw0rd>

# 1. Nit source:
<B: <A: false b 123.123 2345 hjkl true p4ssw0rd> 1111 qwer>

# 2. MsgPack:
\x93\xD4\x7B\x00\x92\xD4\x7B\x01\xA1\x42\x88\x92\xD4\x7B\x02\xA1\x62\xC2\x92\xD4\x7B\x03\xA1\x63\xD4\x7C\x62\x92\xD4\x7B\x04\xA1\x66\xCB\x40\x5E\xC7\xDF\x3B\x64\x5A\x1D\x92\xD4\x7B\x05\xA1\x69\xCD\x09\x29\x92\xD4\x7B\x06\xBB\x73\x65\x72\x69\x61\x6C\x69\x7A\x61\x74\x69\x6F\x6E\x5F\x73\x70\x65\x63\x69\x66\x69\x63\x5F\x6E\x61\x6D\x65\xA4\x68\x6A\x6B\x6C\x92\xD4\x7B\x07\xA1\x6E\x0C\x92\xD4\x7B\x08\xA2\x69\x69\xCD\x04\x57\x92\xD4\x7B\x09\xA2\x73\x73\xA4\x71\x77\x65\x72

# 3. JSON:
[{
	"typ": 123,
	"data": [0]
}, [{
	"typ": 123,
	"data": [1]
}, "B"], {
	"[<MsgPackExt typ: 0x7b, data: \\x02>,b]": false,
	"[<MsgPackExt typ: 0x7b, data: \\x03>,c]": {
		"typ": 124,
		"data": [98]
	},
	"[<MsgPackExt typ: 0x7b, data: \\x04>,f]": 123.123,
	"[<MsgPackExt typ: 0x7b, data: \\x05>,i]": 2345,
	"[<MsgPackExt typ: 0x7b, data: \\x06>,serialization_specific_name]": "hjkl",
	"[<MsgPackExt typ: 0x7b, data: \\x07>,n]": 12,
	"[<MsgPackExt typ: 0x7b, data: \\x08>,ii]": 1111,
	"[<MsgPackExt typ: 0x7b, data: \\x09>,ss]": "qwer"
}]

# 4. Back in Nit (with metadata):
<B: <A: false b 123.123 2345 hjkl true p4ssw0rd> 1111 qwer>

# 1. Nit source:
<C: <A: true a 0.123 1234 asdf false p4ssw0rd> <B: <A: false b 123.123 2345 hjkl true p4ssw0rd> 1111 qwer>>

# 2. MsgPack:
\x93\xD4\x7B\x00\x92\xD4\x7B\x01\xA1\x43\x83\x92\xD4\x7B\x02\xA1\x61\x93\xD4\x7B\x03\x92\xD4\x7B\x04\xA1\x41\x86\x92\xD4\x7B\x05\xA1\x62\xC3\x92\xD4\x7B\x06\xA1\x63\xD4\x7C\x61\x92\xD4\x7B\x07\xA1\x66\xCB\x3F\xBF\x97\x24\x74\x53\x8E\xF3\x92\xD4\x7B\x08\xA1\x69\xCD\x04\xD2\x92\xD4\x7B\x09\xBB\x73\x65\x72\x69\x61\x6C\x69\x7A\x61\x74\x69\x6F\x6E\x5F\x73\x70\x65\x63\x69\x66\x69\x63\x5F\x6E\x61\x6D\x65\xA4\x61\x73\x64\x66\x92\xD4\x7B\x0A\xA1\x6E\xC0\xD4\x7D\x05\x93\xD4\x7B\x0B\x92\xD4\x7B\x0C\xA1\x42\x88\xD4\x7D\x05\xC2\xD4\x7D\x06\xD4\x7C\x62\xD4\x7D\x07\xCB\x40\x5E\xC7\xDF\x3B\x64\x5A\x1D\xD4\x7D\x08\xCD\x09\x29\xD4\x7D\x09\xA4\x68\x6A\x6B\x6C\xD4\x7D\x0A\x0C\x92\xD4\x7B\x0D\xA2\x69\x69\xCD\x04\x57\x92\xD4\x7B\x0E\xA2\x73\x73\xA4\x71\x77\x65\x72\x92\xD4\x7B\x0F\xA2\x61\x61\xD4\x7D\x03

# 3. JSON:
[{
	"typ": 123,
	"data": [0]
}, [{
	"typ": 123,
	"data": [1]
}, "C"], {
	"[<MsgPackExt typ: 0x7b, data: \\x02>,a]": [{
		"typ": 123,
		"data": [3]
	}, [{
		"typ": 123,
		"data": [4]
	}, "A"], {
		"[<MsgPackExt typ: 0x7b, data: \\x05>,b]": true,
		"[<MsgPackExt typ: 0x7b, data: \\x06>,c]": {
			"typ": 124,
			"data": [97]
		},
		"[<MsgPackExt typ: 0x7b, data: \\x07>,f]": 0.123,
		"[<MsgPackExt typ: 0x7b, data: \\x08>,i]": 1234,
		"[<MsgPackExt typ: 0x7b, data: \\x09>,serialization_specific_name]": "asdf",
		"[<MsgPackExt typ: 0x7b, data: \\x0A>,n]": null
	}],
	"<MsgPackExt typ: 0x7d, data: \\x05>": [{
		"typ": 123,
		"data": [11]
	}, [{
		"typ": 123,
		"data": [12]
	}, "B"], {
		"<MsgPackExt typ: 0x7d, data: \\x05>": false,
		"<MsgPackExt typ: 0x7d, data: \\x06>": {
			"typ": 124,
			"data": [98]
		},
		"<MsgPackExt typ: 0x7d, data: \\x07>": 123.123,
		"<MsgPackExt typ: 0x7d, data: \\x08>": 2345,
		"<MsgPackExt typ: 0x7d, data: \\x09>": "hjkl",
		"<MsgPackExt typ: 0x7d, data: \\x0A>": 12,
		"[<MsgPackExt typ: 0x7b, data: \\x0D>,ii]": 1111,
		"[<MsgPackExt typ: 0x7b, data: \\x0E>,ss]": "qwer"
	}],
	"[<MsgPackExt typ: 0x7b, data: \\x0F>,aa]": {
		"typ": 125,
		"data": [3]
	}
}]

# 4. Back in Nit (with metadata):
<C: <A: true a 0.123 1234 asdf false p4ssw0rd> <B: <A: false b 123.123 2345 hjkl true p4ssw0rd> 1111 qwer>>

# 1. Nit source:
<D: <B: <A: false b 123.123 2345 new line ->
<- false p4ssw0rd> 1111 	f"\/> true>

# 2. MsgPack:
\x93\xD4\x7B\x00\x92\xD4\x7B\x01\xA1\x44\x89\x92\xD4\x7B\x02\xA1\x62\xC2\x92\xD4\x7B\x03\xA1\x63\xD4\x7C\x62\x92\xD4\x7B\x04\xA1\x66\xCB\x40\x5E\xC7\xDF\x3B\x64\x5A\x1D\x92\xD4\x7B\x05\xA1\x69\xCD\x09\x29\x92\xD4\x7B\x06\xBB\x73\x65\x72\x69\x61\x6C\x69\x7A\x61\x74\x69\x6F\x6E\x5F\x73\x70\x65\x63\x69\x66\x69\x63\x5F\x6E\x61\x6D\x65\xAE\x6E\x65\x77\x20\x6C\x69\x6E\x65\x20\x2D\x3E\x0A\x3C\x2D\x92\xD4\x7B\x07\xA1\x6E\xC0\x92\xD4\x7B\x08\xA2\x69\x69\xCD\x04\x57\x92\xD4\x7B\x09\xA2\x73\x73\xA6\x09\x66\x22\x0D\x5C\x2F\x92\xD4\x7B\x0A\xA1\x64\xD4\x7D\x00

# 3. JSON:
[{
	"typ": 123,
	"data": [0]
}, [{
	"typ": 123,
	"data": [1]
}, "D"], {
	"[<MsgPackExt typ: 0x7b, data: \\x02>,b]": false,
	"[<MsgPackExt typ: 0x7b, data: \\x03>,c]": {
		"typ": 124,
		"data": [98]
	},
	"[<MsgPackExt typ: 0x7b, data: \\x04>,f]": 123.123,
	"[<MsgPackExt typ: 0x7b, data: \\x05>,i]": 2345,
	"[<MsgPackExt typ: 0x7b, data: \\x06>,serialization_specific_name]": "new line ->\n<-",
	"[<MsgPackExt typ: 0x7b, data: \\x07>,n]": null,
	"[<MsgPackExt typ: 0x7b, data: \\x08>,ii]": 1111,
	"[<MsgPackExt typ: 0x7b, data: \\x09>,ss]": "\tf\"\r\\/",
	"[<MsgPackExt typ: 0x7b, data: \\x0A>,d]": {
		"typ": 125,
		"data": [0]
	}
}]

# 4. Back in Nit (with metadata):
<D: <B: <A: false b 123.123 2345 new line ->
<- false p4ssw0rd> 1111 	f"\/> true>

# 1. Nit source:
<E: a: hello, 1234, 123.4; b: hella, 2345, 234.5>

# 2. MsgPack:
\x93\xD4\x7B\x00\x92\xD4\x7B\x01\xA1\x45\x82\x92\xD4\x7B\x02\xA1\x61\x93\xD4\x7B\x03\x92\xD4\x7B\x04\xA5\x41\x72\x72\x61\x79\x93\xA5\x68\x65\x6C\x6C\x6F\xCD\x04\xD2\xCB\x40\x5E\xD9\x99\x99\x99\x99\x9A\x92\xD4\x7B\x05\xA1\x62\x93\xD4\x7B\x06\xD4\x7D\x04\x93\xA5\x68\x65\x6C\x6C\x61\xCD\x09\x29\xCB\x40\x6D\x50\x00\x00\x00\x00\x00

# 3. JSON:
[{
	"typ": 123,
	"data": [0]
}, [{
	"typ": 123,
	"data": [1]
}, "E"], {
	"[<MsgPackExt typ: 0x7b, data: \\x02>,a]": [{
		"typ": 123,
		"data": [3]
	}, [{
		"typ": 123,
		"data": [4]
	}, "Array"], ["hello", 1234, 123.4]],
	"[<MsgPackExt typ: 0x7b, data: \\x05>,b]": [{
		"typ": 123,
		"data": [6]
	}, {
		"typ": 125,
		"data": [4]
	}, ["hella", 2345, 234.5]]
}]

# 4. Back in Nit (with metadata):
<E: a: hello, 1234, 123.4; b: hella, 2345, 234.5>

# 1. Nit source:
<F: 2222>

# 2. MsgPack:
\x93\xD4\x7B\x00\x92\xD4\x7B\x01\xA1\x46\x81\x92\xD4\x7B\x02\xA1\x6E\xCD\x08\xAE

# 3. JSON:
[{
	"typ": 123,
	"data": [0]
}, [{
	"typ": 123,
	"data": [1]
}, "F"], {
	"[<MsgPackExt typ: 0x7b, data: \\x02>,n]": 2222
}]

# 4. Back in Nit (with metadata):
null

# 1. Nit source:
<F: 33.33>

# 2. MsgPack:
\x93\xD4\x7B\x00\x92\xD4\x7B\x01\xA1\x46\x81\x92\xD4\x7B\x02\xA1\x6E\xCB\x40\x40\xAA\x3D\x70\xA3\xD7\x0A

# 3. JSON:
[{
	"typ": 123,
	"data": [0]
}, [{
	"typ": 123,
	"data": [1]
}, "F"], {
	"[<MsgPackExt typ: 0x7b, data: \\x02>,n]": 33.33
}]

# 4. Back in Nit (with metadata):
null

# 1. Nit source:
<G: hs: -1, 0; s: one, two; hm: one. 1, two. 2; am: three. 3, four. 4>

# 2. MsgPack:
\x93\xD4\x7B\x00\x92\xD4\x7B\x01\xA1\x47\x84\x92\xD4\x7B\x02\xA2\x68\x73\x93\xD4\x7B\x03\x92\xD4\x7B\x04\xA7\x48\x61\x73\x68\x53\x65\x74\x92\xFF\x00\x92\xD4\x7B\x05\xA1\x73\x93\xD4\x7B\x06\x92\xD4\x7B\x07\xA8\x41\x72\x72\x61\x79\x53\x65\x74\x92\xA3\x6F\x6E\x65\xA3\x74\x77\x6F\x92\xD4\x7B\x08\xA2\x68\x6D\x93\xD4\x7B\x09\x92\xD4\x7B\x0A\xA7\x48\x61\x73\x68\x4D\x61\x70\x82\xA3\x6F\x6E\x65\x01\xA3\x74\x77\x6F\x02\x92\xD4\x7B\x0B\xA2\x61\x6D\x93\xD4\x7B\x0C\x92\xD4\x7B\x0D\xA8\x41\x72\x72\x61\x79\x4D\x61\x70\x82\xA5\x74\x68\x72\x65\x65\xA1\x33\xA4\x66\x6F\x75\x72\xA1\x34

# 3. JSON:
[{
	"typ": 123,
	"data": [0]
}, [{
	"typ": 123,
	"data": [1]
}, "G"], {
	"[<MsgPackExt typ: 0x7b, data: \\x02>,hs]": [{
		"typ": 123,
		"data": [3]
	}, [{
		"typ": 123,
		"data": [4]
	}, "HashSet"], [-1, 0]],
	"[<MsgPackExt typ: 0x7b, data: \\x05>,s]": [{
		"typ": 123,
		"data": [6]
	}, [{
		"typ": 123,
		"data": [7]
	}, "ArraySet"], ["one", "two"]],
	"[<MsgPackExt typ: 0x7b, data: \\x08>,hm]": [{
		"typ": 123,
		"data": [9]
	}, [{
		"typ": 123,
		"data": [10]
	}, "HashMap"], {
		"one": 1,
		"two": 2
	}],
	"[<MsgPackExt typ: 0x7b, data: \\x0B>,am]": [{
		"typ": 123,
		"data": [12]
	}, [{
		"typ": 123,
		"data": [13]
	}, "ArrayMap"], {
		"three": "3",
		"four": "4"
	}]
}]

# 4. Back in Nit (with metadata):
<G: hs: ; s: ; hm: ; am: >

