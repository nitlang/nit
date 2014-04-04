; Semaine 5
; Simulation de l'adressage indexé avec l'adressage indirect
; Jean Privat (C) 2010
;
; Version originale
         LDX     index,d     ; X = mem[index] = 4
         CHARO   mot,x       ; mem[mot+X] = mem[mot+4] = 'X'
; Version simulée
         LDA     mot,i       ; A <- mot
         ADDA    index,d     ; A <- A+mem[index] = mot+4
         STA     ptr,d       ; mem[ptr] <- A = mot+4
         CHARO   ptr,n       ; mem[mem[ptr]] = mem[mot+4] = 'X'
         STOP                
index:   .WORD   4           
mot:     .ASCII  "....X...." 
ptr:     .BLOCK  2           ; #2h
         .END                  