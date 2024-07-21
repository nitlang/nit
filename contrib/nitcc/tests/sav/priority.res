Automatic Dangling SHIFT/REDUCE on state 7 e '+' e for token '+':
	reduce: e→ e '+' e·, Eof/'+'/'-'/'*'
	shift:  e→ e·'+' e
Automatic Dangling SHIFT/REDUCE on state 7 e '+' e for token '-':
	reduce: e→ e '+' e·, Eof/'+'/'-'/'*'
	shift:  e→ e·'-' e
Automatic Dangling SHIFT/REDUCE on state 7 e '+' e for token '*':
	reduce: e→ e '+' e·, Eof/'+'/'-'/'*'
	shift:  e→ e·'*' e
Automatic Dangling SHIFT/REDUCE on state 8 e '-' e for token '+':
	reduce: e→ e '-' e·, '+'/'*'/'-'/Eof
	shift:  e→ e·'+' e
Automatic Dangling SHIFT/REDUCE on state 8 e '-' e for token '*':
	reduce: e→ e '-' e·, '+'/'*'/'-'/Eof
	shift:  e→ e·'*' e
Automatic Dangling SHIFT/REDUCE on state 8 e '-' e for token '-':
	reduce: e→ e '-' e·, '+'/'*'/'-'/Eof
	shift:  e→ e·'-' e
Automatic Dangling SHIFT/REDUCE on state 9 e '*' e for token '+':
	reduce: e→ e '*' e·, '+'/'-'/'*'/Eof
	shift:  e→ e·'+' e
Automatic Dangling SHIFT/REDUCE on state 9 e '*' e for token '-':
	reduce: e→ e '*' e·, '+'/'-'/'*'/Eof
	shift:  e→ e·'-' e
Automatic Dangling SHIFT/REDUCE on state 9 e '*' e for token '*':
	reduce: e→ e '*' e·, '+'/'-'/'*'/Eof
	shift:  e→ e·'*' e
