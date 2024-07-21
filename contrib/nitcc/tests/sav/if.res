Automatic Dangling SHIFT/REDUCE on state 15 'e' 'if' e 'then' e for token 'else':
	reduce: e→ 'if' e 'then' e·, Eof/'then'/'else'
	shift:  else→·'else' e
	core shift: e→ 'if' e 'then' e·else, Eof/'then'/'else'
Automatic Dangling SHIFT/REDUCE on state 16 'f' 'if' f 'then' f for token 'else':
	reduce: f→ 'if' f 'then' f·, Eof/'then'/'else'
	shift:  f→ 'if' f 'then' f·'else' f
