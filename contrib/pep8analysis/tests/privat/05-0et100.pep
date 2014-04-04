; Semaine 5
; Programme qui demande (poliment) un nombre ;
; indique s'il est négatif, compris entre 0 et 100 ou plus grand que 100 ;
; puis dit au revoir.
; Jean Privat (C) 2010
         STRO    bjourMsg,d  ; print ...
         DECI    nb,d        
         LDA     nb,d        ; A = readInt();
         CPA     min,i       
         BRGE    pasNeg      ; if (A<min) {
         STRO    negMsg,d    ;   print ...
         BR      bye         
pasNeg:  CPA     max,i       
         BRGT    pasMoyen    ; } else if (a<=max) {
         STRO    moyenMsg,d  ;   print...
         BR      bye         ; } else {
pasMoyen:STRO    grandMsg,d  ;   print ... }
bye:     STRO    byeMsg,d    ; print ...
         STOP                
bjourMsg:.ASCII  "Entrez un nombre (SVP) : \x00"
moyenMsg:.ASCII  "Compris entre 0 et 100\n\x00"
grandMsg:.ASCII  "Plus grand que 100\n\x00"
negMsg:  .ASCII  "Négatif\n\x00"
byeMsg:  .ASCII  "Au revoir.\n\x00"
nb:      .BLOCK  2           
min:     .EQUATE 0           
max:     .EQUATE 100         
         .END                  