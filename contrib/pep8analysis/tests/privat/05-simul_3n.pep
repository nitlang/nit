; Semaine 5
; Simulation de l'adressage indirect triple
; Jean Privat (C) 2010
;
; Expression à simuler (n'existe pas en Pep/8)
; CHARO b,3n ; mem[mem[mem[mem[b]]]]
;
; Simulation avec adressages immédiats et indexés
         LDX     b,i         ; X <- b
         LDX     0,x         ; X <- mem[X+0] = mem[b] = c
         LDX     0,x         ; X <- mem[X+0] = mem[c] = d
         LDX     0,x         ; X <- mem[X+0] = mem[d] = e
         CHARO   0,x         ; mem[X+0] = mem[e] = '!'
;
; Simulation avec adressages directs et indirects
         LDA     b,n         ; A <- mem[mem[b]] = mem[c] = d
         STA     ptr,d       ; mem[ptr] <- A = d
         LDA     ptr,n       ; A <- mem[mem[ptr]] = mem[d] = e
         STA     ptr,d       ; mem[ptr] <- A = e
         CHARO   ptr,n       ; mem[mem[ptr]] = mem[e] = '!'
;
         STOP                
b:       .ADDRSS c           
c:       .ADDRSS d           
d:       .ADDRSS e           
e:       .BYTE   '!'         
ptr:     .BLOCK  2           ; #2h
         .END                  