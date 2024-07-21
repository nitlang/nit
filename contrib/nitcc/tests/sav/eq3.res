SHIFT/REDUCE Conflict on state 2 var for token '=':
SHIFT on item: e→ var·'=' e, Eof/'='
REDUCE on item: e→ var·, '='/Eof
Automatic Dangling SHIFT/REDUCE on state 8 e '=' e for token '=':
	reduce: c→ e '=' e·, Eof/'='
	shift:  c→ e·'=' e
SHIFT/REDUCE Conflict on state 9 var '=' e for token '=':
SHIFT on item: c→ e·'=' e, Eof/'='
REDUCE on item: e→ var '=' e·, Eof/'='
Error: there is conflicts
