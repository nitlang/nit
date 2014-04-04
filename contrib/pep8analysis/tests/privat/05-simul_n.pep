; Semaine 5
; Simulation de l'adressage indirect avec l'adressage indexé
; Jean Privat (C) 2010
;
; Version originale
         CHARO   b,n         ; A <- mem[mem[b]] = mem[c] = '!'
; Version simulée
         LDX     b,d         ; X <- mem[b] = c
         CHARO   0,x         ; A <- mem[0+X] = mem[c] = '!'
         STOP                
b:       .ADDRSS c           ; mem[b] contient l'adresse de c (sur 2 octets)
c:       .BYTE   '!'         
         .END                  