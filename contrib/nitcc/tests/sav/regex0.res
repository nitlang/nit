Automatic Dangling SHIFT/REDUCE on state 6 e e for token '|':
	reduce: e→ e e·, '|'/'*'/'a'/Eof
	shift:  e→ e·'|' e
Automatic Dangling SHIFT/REDUCE on state 6 e e for token '*':
	reduce: e→ e e·, '|'/'*'/'a'/Eof
	shift:  e→ e·'*'
Automatic Dangling SHIFT/REDUCE on state 6 e e for token 'a':
	reduce: e→ e e·, '|'/'*'/'a'/Eof
	shift:  a→·'a'
	core shift: e→·a, '|'/'a'/'*'/Eof
Automatic Dangling SHIFT/REDUCE on state 8 e '|' e for token '|':
	reduce: e→ e '|' e·, Eof/'|'/'a'/'*'
	shift:  e→ e·'|' e
Automatic Dangling SHIFT/REDUCE on state 8 e '|' e for token 'a':
	reduce: e→ e '|' e·, Eof/'|'/'a'/'*'
	shift:  a→·'a'
	core shift: e→·a, '|'/'a'/'*'/Eof
Automatic Dangling SHIFT/REDUCE on state 8 e '|' e for token '*':
	reduce: e→ e '|' e·, Eof/'|'/'a'/'*'
	shift:  e→ e·'*'
