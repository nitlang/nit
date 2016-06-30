:
f:      Zg==
fo:     Zm8=
foo:    Zm9v
foob:   Zm9vYg==
fooba:  Zm9vYmE=
foobar: Zm9vYmFy
:
Zg==:     f
Zm8=:     fo
Zm9v:     foo
Zm9vYg==: foob
Zm9vYmE=: fooba
Zm9vYmFy: foobar
Zm9vYg: foob
Zm9vYmE: fooba
Zm9v*Yg: foob
:
Znm=.is_base64? true
Znm===.is_base64? false
Z.sd=.is_base64? false
Z==D.is_base64? false
:
Znm=: No error
Znm===: Invalid padding length
Z.sd=: Invalid Base64 character at position 1: .
Z==D: Invalid padding character D at position 3
