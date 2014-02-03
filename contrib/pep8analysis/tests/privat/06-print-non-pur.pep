; Semaine 6
; Programme non pur qui affiche une chaîne
; Jean Privat (C) 2010
loop:    LDA     0,i         
         LDBYTEA msg,d       
         BREQ    fin         ; while(msg[0]!=0) {
         CHARO   msg,d       ;   print msg[0];
         LDA     op1,d       
         ADDA    1,i         
         STA     op1,d       
         STA     op2,d       ;   msg++;
         BR      loop        ; }
fin:     STOP                
msg:     .ASCII  "Hello World\x00"
op1:     .EQUATE 0x0004      ; Adresse de l'opérande du LDBYTEA msg
op2:     .EQUATE 0x000A      ; Adresse de l'opérande du CHARO msg
         .END                  