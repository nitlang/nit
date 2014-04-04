; Semaine 6
; Programme qui vérifie si un nombre est une puissance de 2
; Jean Privat (C) 2010
         DECI    num,d       
         LDA     num,d       ; num = getNombre()
         BREQ    non         ; if (num == 0) pas puissance de 2
         BRGE    positif     ; if (num < 0) {
         NEGA                
         STA     num,d       ; num = -num; }
positif: SUBA    1,i         
         ANDA    num,d       ; A = num & num-1
         BRNE    non         ; if (A != 0) pas puissance de 2
         STRO    puiMsg,d    ; print ...
         STOP                
non:     STRO    pasMsg,d    ; print ...
         STOP                
num:     .BLOCK  2           ; #2d
pasMsg:  .ASCII  "Pas une puissance de 2.\n\x00"
puiMsg:  .ASCII  "C'est une puissance de 2.\n\x00"
         .END                  