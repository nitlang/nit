digraph "G" {
subgraph "cluster_0" {
label="process #1";
style="filled";
color="lightgrey";
node[style="filled",color="white",];
"a0" ;
"a1" ;
"a2" ;
"a3" ;
"a0" -> "a1" ;
"a1" -> "a2" ;
"a2" -> "a3" ;
};
subgraph "cluster_1" {
label="process #2";
color="blue";
node[style="filled",];
"b0" ;
"b1" ;
"b2" ;
"b3" ;
"b0" -> "b1" ;
"b1" -> "b2" ;
"b2" -> "b3" ;
};
"start" [shape="Mdiamond",];
"end" [shape="Msquare",];
"start" -> "a0" ;
"start" -> "b0" ;
"a1" -> "b3" ;
"b2" -> "a3" ;
"a3" -> "a0" ;
"a3" -> "end" ;
"b3" -> "end" ;
}
