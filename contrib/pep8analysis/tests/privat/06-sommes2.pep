; Semaine 6
; Programme calcule et compare deux sommes
; Version sans sous-programme + pseudo-boucle (variable étape)
; Jean Privat (C) 2010
debut:   STRO    msgNum1,d   ; do {
         DECI    num,d       
         LDA     num,d       
         STRO    msgNum2,d   
         DECI    num,d       
         ADDA    num,d       
         STA     num,d       
         STRO    msgSomme,d  
         DECO    num,d       
         CHARO   '\n',i      ;   Lecture, calcul et affichage somme 1
         LDA     etape,d     ;   if (etape == 0) {
         BRNE    fin         
         STA     sum1,d      ;     sauvegarde somme 1;
         LDA     1,i         
         STA     etape,d     ;     etape = 1; }
         BR      debut       ; } while(etape==0);
fin:     CPA     sum1,d      ; if (somme2>somme1) {
         BRGT    plus        
         STOP                
plus:    STRO    msgPlus,d   ;   print ... }
         STOP                ; exit;
num:     .BLOCK  2           ; #2d
sum1:    .BLOCK  2           ; #2d
etape:   .BLOCK  2           ; #2d 0=on calcule la premier somme, 1=on cacule la 2eme somme
msgNum1: .ASCII  "Entrez un nombre : \x00"
msgNum2: .ASCII  "Entrez un autre nombre : \x00"
msgSomme:.ASCII  "Leur somme est : \x00"
msgPlus: .ASCII  "Celle-ci est plus grande.\x00"
         .END                  
