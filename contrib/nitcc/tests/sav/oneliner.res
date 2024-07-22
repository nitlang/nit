SHIFT/REDUCE Conflict on state 15 if_block stmt for token 'end':
SHIFT on item: stmt_or_end→ stmt·'end', eol/Eof/'end'/'else'/'then'
REDUCE on item: stmt_or_end→ stmt·, eol/Eof/'end'/'else'/'then'
SHIFT/REDUCE Conflict on state 15 if_block stmt for token 'else':
SHIFT on item: stmt_else→ stmt·'else', 'end'/'id'/'if'/eol/Eof/'else'/'then'
REDUCE on item: stmt_or_end→ stmt·, eol/Eof/'end'/'else'/'then'
SHIFT/REDUCE Conflict on state 23 if_block stmt_else stmt for token 'end':
SHIFT on item: stmt_or_end→ stmt·'end', eol/Eof/'end'/'else'/'then'
REDUCE on item: stmt_or_end→ stmt·, eol/Eof/'end'/'else'/'then'
Error: there is conflicts
