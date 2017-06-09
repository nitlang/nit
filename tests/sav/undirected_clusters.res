graph "G" {
subgraph "clusterA" {
"a" -- "b" ;
subgraph "clusterB" {
"c" -- "d" ;
};
};
subgraph "clusterC" {
"e" -- "g" ;
};
"e" -- "d" ;
"f" -- "g" ;
}
