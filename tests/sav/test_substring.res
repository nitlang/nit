substring: toto
substring_from: toto.nit
has_substring: true
has_substring: true
has_substring: false
has_prefix: true
has_prefix: false
has_suffix: true
has_suffix: false
test[0] == 't' => true
test[1] == 'e' => true
test[2] == 's' => true
test[3] == 't' => true
test.substring(0,1) == "t" => true
test.substring(0,2) == "te" => true
test.substring(0,3) == "tes" => true
test.substring(0,4) == "test" => true
test.has_substring("t", 0) => true
test.has_substring("te", 0) => true
test.has_substring("tes", 0) => true
test.has_substring("test", 0) => true
test.has_substring("e", 1) => true
test.has_substring("es", 1) => true
test.has_substring("est", 1) => true
test.has_substring("s", 2) => true
test.has_substring("st", 2) => true
test.has_substring("t", 3) => true
test.has_substring("z", 3) => false
test.has_substring("ze", 0) => false
test.has_substring("bas", 0) => false
test.has_substring("foot", 0) => false
test.has_prefix("t") => true
test.has_prefix("te") => true
test.has_prefix("tes") => true
test.has_prefix("test") => true
test.has_prefix("ze") => false
test.has_prefix("bas") => false
test.has_prefix("foot") => false
test.has_suffix("t") => true
test.has_suffix("st") => true
test.has_suffix("est") => true
test.has_suffix("test") => true
test.has_suffix("bt") => false
test.has_suffix("bat") => false
test.has_suffix("foot") => false
........

........
