; Semaine 6
; Programme calcule et compare deux sommes
; Version avec sous-programme
; Jean Privat (C) 2010
         CALL    getSomme    
         STA     sum1,d      ; sauvegarde somme 1;
         CALL    getSomme    
fin:     CPA     sum1,d      ; if (somme2>somme2) {
         BRGT    plus        
         STOP                
plus:    STRO    msgPlus,d   ;   print ... }
         STOP                ; exit;
sum1:    .BLOCK  2           ; #2d
;
; getSomme: Demande deux nombres et affiche leur somme
; OUT: A=somme des nombres
getSomme:STRO    msgNum1,d   ; do {
         DECI    num,d       
         LDA     num,d       
         STRO    msgNum2,d   
         DECI    num,d       
         ADDA    num,d       
         STA     num,d       
         STRO    msgSomme,d  
         DECO    num,d       
         CHARO   '\n',i      
         RET0                
num:     .BLOCK  2           ; #2d
msgNum1: .ASCII  "Entrez un nombre : \x00"
msgNum2: .ASCII  "Entrez un autre nombre : \x00"
msgSomme:.ASCII  "Leur somme est : \x00"
msgPlus: .ASCII  "Celle-ci est plus grande.\x00"
         .END                  