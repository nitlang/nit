SHIFT/REDUCE Conflict on state 3 'id' for token '[':
SHIFT on item: e→·'[' e ']', '['/Eof/']'/'..'
SHIFT on item: e→·'[' e '..' e '[', '['/Eof/']'/'..'
SHIFT on item: e→·'[' e '..' e ']', '['/Eof/']'/'..'
REDUCE on item: e→ 'id'·, '['/Eof/']'/'..'
SHIFT/REDUCE Conflict on state 7 'id' e for token '[':
SHIFT on item: e→ e·'[' e ']', '['/Eof/']'/'..'
REDUCE on item: e→ 'id' e·, '['/Eof/']'/'..'
SHIFT/REDUCE Conflict on state 13 '[' e '..' e '[' for token '[':
SHIFT on item: e→·'[' e ']', '['/']'
SHIFT on item: e→·'[' e '..' e '[', '['/']'
SHIFT on item: e→·'[' e '..' e ']', '['/']'
REDUCE on item: e→ '[' e '..' e '['·, '['/Eof/']'/'..'
Error: there is conflicts
