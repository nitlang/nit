digraph G {
	fontname = "Bitstream Vera Sans"
				fontsize = 8
				node [
					fontname = "Bitstream Vera Sans"
					fontsize = 8
					shape = "record"
				]

				edge [
					fontname = "Bitstream Vera Sans"
					fontsize = 8
				]
Object [
 label = "{interface\nObject||+ object_id(): Int\l+ is_same_type(other: Object): Bool\l+ is_same_instance(other: nullable Object): Bool\l+ ==(other: nullable Object): Bool\l+ !=(other: nullable Object): Bool\l+ output()\l+ output_class_name()\l+ hash(): Int\l+ sys(): Sys\l+ init()\l+ defaultinit()\l}"
]

Sys [
 label = "{Sys||+ main()\l+ run()\l+ errno(): Int\l+ exit(exit_value: Int)\l+ is_windows(): Bool\l+ defaultinit()\l}"
]
Object -> Sys [dir=back arrowtail=open style=dashed];

Comparable [
 label = "{interface\nComparable||+ \<(other: OTHER): Bool\l+ \<=(other: OTHER): Bool\l+ \>=(other: OTHER): Bool\l+ \>(other: OTHER): Bool\l+ \<=\>(other: OTHER): Int\l+ is_between(c: OTHER, d: OTHER): Bool\l+ max(other: OTHER): OTHER\l+ min(c: OTHER): OTHER\l+ defaultinit()\l}"
]
Object -> Comparable [dir=back arrowtail=open style=dashed];

Discrete [
 label = "{interface\nDiscrete||+ successor(i: Int): OTHER\l+ predecessor(i: Int): OTHER\l+ distance(d: OTHER): Int\l+ defaultinit()\l}"
]
Comparable -> Discrete [dir=back arrowtail=open style=dashed];

Cloneable [
 label = "{interface\nCloneable||+ clone(): SELF\l+ defaultinit()\l}"
]
Object -> Cloneable [dir=back arrowtail=open style=dashed];

Numeric [
 label = "{interface\nNumeric||+ +(i: OTHER): OTHER\l+ -(i: OTHER): OTHER\l+ unary -(): OTHER\l+ *(i: OTHER): OTHER\l+ /(i: OTHER): OTHER\l+ to_i(): Int\l+ to_f(): Float\l+ to_b(): Byte\l+ is_zero(): Bool\l+ zero(): OTHER\l+ value_of(val: Numeric): OTHER\l+ defaultinit()\l}"
]
Comparable -> Numeric [dir=back arrowtail=open style=dashed];

Bool [
 label = "{Bool||+ to_i(): Int\l}"
]
Object -> Bool [dir=back arrowtail=open style=dashed];

Float [
 label = "{Float||+ is_approx(other: Float, precision: Float): Bool\l}"
]
Numeric -> Float [dir=back arrowtail=open style=dashed];

Byte [
 label = "{Byte||+ %(i: Byte): Byte\l+ \<\<(i: Int): Byte\l+ \>\>(i: Int): Byte\l+ is_whitespace(): Bool\l}"
]
Discrete -> Byte [dir=back arrowtail=open style=dashed];
Numeric -> Byte [dir=back arrowtail=open style=dashed];

Int [
 label = "{Int||+ %(i: Int): Int\l+ \<\<(i: Int): Int\l+ \>\>(i: Int): Int\l+ code_point(): Char\l+ digit_count(b: Int): Int\l+ digit_count_base_10(): Int\l+ to_c(): Char\l+ abs(): Int\l+ is_whitespace(): Bool\l}"
]
Discrete -> Int [dir=back arrowtail=open style=dashed];
Numeric -> Int [dir=back arrowtail=open style=dashed];

Char [
 label = "{Char||+ +(i: Int): Char\l+ -(i: Int): Char\l+ to_i(): Int\l+ code_point(): Int\l+ is_ascii(): Bool\l+ to_lower(): Char\l+ to_upper(): Char\l+ is_digit(): Bool\l+ is_lower(): Bool\l+ is_upper(): Bool\l+ is_letter(): Bool\l+ is_whitespace(): Bool\l}"
]
Discrete -> Char [dir=back arrowtail=open style=dashed];

Pointer [
 label = "{Pointer||+ nul(): Pointer\l+ address_is_null(): Bool\l+ free()\l- native_equals(o: Pointer): Bool\l+ defaultinit()\l}"
]
Object -> Pointer [dir=back arrowtail=open style=dashed];

Task [
 label = "{interface\nTask||+ main()\l+ defaultinit()\l}"
]
Object -> Task [dir=back arrowtail=open style=dashed];

A [
 label = "{A|- _vpubA: nullable A\l- _vproA: nullable A\l- _vpriA: nullable A\l- _vpubA2: A\l- _vproA2: A\l- _vpriA2: A\l- _vpriB: nullable B\l- _vpriB2: B\l|+ pubA(a: A)\l# proA(a: A)\l- priA(a: A)\l+ pubA2(): A\l# proA2(): A\l- priA2(): A\l+ vpubA(): nullable A\l+ vpubA=(vpubA: nullable A)\l# vproA(): nullable A\l# vproA=(vproA: nullable A)\l- vpriA(): nullable A\l- vpriA=(vpriA: nullable A)\l+ vpubA2(): A\l+ vpubA2=(vpubA2: A)\l# vproA2(): A\l# vproA2=(vproA2: A)\l- vpriA2(): A\l- vpriA2=(vpriA2: A)\l- priB(a: B)\l- priB2(): B\l- vpriB(): nullable B\l- vpriB=(vpriB: nullable B)\l- vpriB2(): B\l- vpriB2=(vpriB2: B)\l+ defaultinit()\l}"
]
Object -> A [dir=back arrowtail=open style=dashed];

B [
 label = "{B|- _vpubA: nullable A\l- _vpriA: nullable A\l- _vpubA2: A\l- _vpriA2: A\l- _vpubB: nullable B\l- _vpriB: nullable B\l- _vpubB2: B\l- _vpriB2: B\l|- pubA(a: A)\l- priA(a: A)\l- vpubA(): nullable A\l- vpubA=(vpubA: nullable A)\l- vpriA(): nullable A\l- vpriA=(vpriA: nullable A)\l- vpubA2(): A\l- vpubA2=(vpubA2: A)\l- vpriA2(): A\l- vpriA2=(vpriA2: A)\l- pubB(a: B)\l- priB(a: B)\l- vpubB(): nullable B\l- vpubB=(vpubB: nullable B)\l- vpriB(): nullable B\l- vpriB=(vpriB: nullable B)\l- vpubB2(): B\l- vpubB2=(vpubB2: B)\l- vpriB2(): B\l- vpriB2=(vpriB2: B)\l+ defaultinit()\l}"
]
Object -> B [dir=back arrowtail=open style=dashed];

C [
 label = "{C|- _vpriA: nullable A\l- _vpriA2: A\l|- priA(a: A)\l- vpriA(): nullable A\l- vpriA=(vpriA: nullable A)\l- vpriA2(): A\l- vpriA2=(vpriA2: A)\l+ defaultinit()\l}"
]
Object -> C [dir=back arrowtail=open style=dashed];

D [
 label = "{D|- _vpubA: nullable A\l- _vpriA: nullable A\l- _vpubA2: A\l- _vpriA2: A\l|- pubA(a: A)\l- priA(a: A)\l- vpubA(): nullable A\l- vpubA=(vpubA: nullable A)\l- vpriA(): nullable A\l- vpriA=(vpriA: nullable A)\l- vpubA2(): A\l- vpubA2=(vpubA2: A)\l- vpriA2(): A\l- vpriA2=(vpriA2: A)\l+ defaultinit()\l}"
]
Object -> D [dir=back arrowtail=open style=dashed];

}
