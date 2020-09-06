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
subgraph clusterbase_prot_sig2 {
label = "base_prot_sig2"
base_prot_sig2C [
	label = "{C|- _vpriA: nullable A\l- _vpriA2: A\l|- priA(a: A)\l- vpriA(): nullable A\l- vpriA=(vpriA: nullable A)\l- vpriA2(): A\l- vpriA2=(vpriA2: A)\l+ init()\l+ defaultinit()\l}"color="#58B26A"
]
base_prot_sig2D [
	label = "{D|- _vpubA: nullable A\l- _vpriA: nullable A\l- _vpubA2: A\l- _vpriA2: A\l|- pubA(a: A)\l- priA(a: A)\l- vpubA(): nullable A\l- vpubA=(vpubA: nullable A)\l- vpriA(): nullable A\l- vpriA=(vpriA: nullable A)\l- vpubA2(): A\l- vpubA2=(vpubA2: A)\l- vpriA2(): A\l- vpriA2=(vpriA2: A)\l+ init()\l+ defaultinit()\l}"color="#58B26A"
]
}
}
