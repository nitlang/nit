Automatic Dangling SHIFT/REDUCE on state 12 exp '+' exp for token '+':
	reduce: exp→ exp '+' exp·, Eof/'+'/'-'/'*'/int/'('/')'
	shift:  exp→ exp·'+' exp
Automatic Dangling SHIFT/REDUCE on state 12 exp '+' exp for token '-':
	reduce: exp→ exp '+' exp·, Eof/'+'/'-'/'*'/int/'('/')'
	shift:  exp→ exp·'-' exp
Automatic Dangling SHIFT/REDUCE on state 12 exp '+' exp for token '*':
	reduce: exp→ exp '+' exp·, Eof/'+'/'-'/'*'/int/'('/')'
	shift:  exp→ exp·'*' exp
Automatic Dangling SHIFT/REDUCE on state 13 exp '-' exp for token '+':
	reduce: exp→ exp '-' exp·, '+'/'*'/'-'/Eof/int/'('/')'
	shift:  exp→ exp·'+' exp
Automatic Dangling SHIFT/REDUCE on state 13 exp '-' exp for token '*':
	reduce: exp→ exp '-' exp·, '+'/'*'/'-'/Eof/int/'('/')'
	shift:  exp→ exp·'*' exp
Automatic Dangling SHIFT/REDUCE on state 13 exp '-' exp for token '-':
	reduce: exp→ exp '-' exp·, '+'/'*'/'-'/Eof/int/'('/')'
	shift:  exp→ exp·'-' exp
Automatic Dangling SHIFT/REDUCE on state 14 exp '*' exp for token '+':
	reduce: exp→ exp '*' exp·, '+'/'-'/'*'/Eof/int/'('/')'
	shift:  exp→ exp·'+' exp
Automatic Dangling SHIFT/REDUCE on state 14 exp '*' exp for token '-':
	reduce: exp→ exp '*' exp·, '+'/'-'/'*'/Eof/int/'('/')'
	shift:  exp→ exp·'-' exp
Automatic Dangling SHIFT/REDUCE on state 14 exp '*' exp for token '*':
	reduce: exp→ exp '*' exp·, '+'/'-'/'*'/Eof/int/'('/')'
	shift:  exp→ exp·'*' exp
