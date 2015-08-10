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
 label = "{interface\nObject||+ object_id(): Int\l+ is_same_type(other: Object): Bool\l+ is_same_instance(other: nullable Object): Bool\l+ ==(other: nullable Object): Bool\l+ !=(other: nullable Object): Bool\l+ output()\l+ output_class_name()\l+ hash(): Int\l+ sys(): Sys\l+ init()\l}"
]

Sys [
 label = "{Sys||+ main()\l+ run()\l+ errno(): Int\l+ exit(exit_value: Int)\l}"
]
Object -> Sys [dir=back arrowtail=open style=dashed];

Comparable [
 label = "{interface\nComparable||+ \<(other: OTHER): Bool\l+ \<=(other: OTHER): Bool\l+ \>=(other: OTHER): Bool\l+ \>(other: OTHER): Bool\l+ \<=\>(other: OTHER): Int\l+ is_between(c: OTHER, d: OTHER): Bool\l+ max(other: OTHER): OTHER\l+ min(c: OTHER): OTHER\l}"
]
Object -> Comparable [dir=back arrowtail=open style=dashed];

Discrete [
 label = "{interface\nDiscrete||+ successor(i: Int): OTHER\l+ predecessor(i: Int): OTHER\l+ distance(d: OTHER): Int\l}"
]
Comparable -> Discrete [dir=back arrowtail=open style=dashed];

Cloneable [
 label = "{interface\nCloneable||+ clone(): SELF\l}"
]
Object -> Cloneable [dir=back arrowtail=open style=dashed];

Numeric [
 label = "{interface\nNumeric||+ +(i: OTHER): OTHER\l+ -(i: OTHER): OTHER\l+ unary -(): OTHER\l+ *(i: OTHER): OTHER\l+ /(i: OTHER): OTHER\l+ to_i(): Int\l+ to_f(): Float\l+ to_b(): Byte\l+ is_zero(): Bool\l+ zero(): OTHER\l+ value_of(val: Numeric): OTHER\l}"
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
 label = "{Byte||+ %(i: Byte): Byte\l+ \<\<(i: Int): Byte\l+ \>\>(i: Int): Byte\l}"
]
Discrete -> Byte [dir=back arrowtail=open style=dashed];
Numeric -> Byte [dir=back arrowtail=open style=dashed];

Int [
 label = "{Int||+ %(i: Int): Int\l+ \<\<(i: Int): Int\l+ \>\>(i: Int): Int\l+ ascii(): Char\l+ digit_count(b: Int): Int\l+ digit_count_base_10(): Int\l+ to_c(): Char\l+ abs(): Int\l}"
]
Discrete -> Int [dir=back arrowtail=open style=dashed];
Numeric -> Int [dir=back arrowtail=open style=dashed];

Char [
 label = "{Char||+ to_i(): Int\l+ ascii(): Int\l+ to_lower(): Char\l+ to_upper(): Char\l+ is_digit(): Bool\l+ is_lower(): Bool\l+ is_upper(): Bool\l+ is_letter(): Bool\l+ is_whitespace(): Bool\l}"
]
Discrete -> Char [dir=back arrowtail=open style=dashed];

Pointer [
 label = "{Pointer||+ address_is_null(): Bool\l+ free()\l}"
]
Object -> Pointer [dir=back arrowtail=open style=dashed];

A [
 label = "{A||+ pubA(a: A)\l+ vpubA(): nullable A\l+ vpubA=(vpubA: nullable A)\l+ vpubA2(): A\l+ vpubA2=(vpubA2: A)\l}"
]
Object -> A [dir=back arrowtail=open style=dashed];

C [
 label = "{C||}"
]
Object -> C [dir=back arrowtail=open style=dashed];

}
