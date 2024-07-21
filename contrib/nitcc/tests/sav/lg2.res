Automatic Dangling SHIFT/REDUCE on state 9 e '<' e for token '<':
	reduce: e→ e '<' e·, Eof/'<'/'>'
	shift:  e→ e·'<' e
SHIFT/REDUCE Conflict on state 9 e '<' e for token '>':
SHIFT on item: e→ e·'>' e, '<'/'>'/Eof
REDUCE on item: e→ e '<' e·, Eof/'<'/'>'
Automatic Dangling SHIFT/REDUCE on state 10 e '>' e for token '<':
	reduce: e→ e '>' e·, '<'/'>'/Eof
	shift:  e→ e·'<' e
SHIFT/REDUCE Conflict on state 10 e '>' e for token '>':
SHIFT on item: e→ e·'>' e, '<'/'>'/Eof
REDUCE on item: e→ e '>' e·, '<'/'>'/Eof
SHIFT/REDUCE Conflict on state 11 '<' e '>' for token '<':
SHIFT on item: e→·'<' e '>', '>'/'<'
REDUCE on item: e→ '<' e '>'·, '<'/'>'/Eof
Error: there is conflicts
