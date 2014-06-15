ADDA    123,d ; use of unitialized data
LDBYTEA 12,d
ADDA    123,d ; use of partially uninitialized data
LDA     12,d
LDBYTEA 12,d
ADDA    123,d ; use of partial word partial byte
STOP
.WORD   1
.END
