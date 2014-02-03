; Sous-programme qui lit un tableau d'entier
; -> utilise des variables globales (c'est pas bien)
; Jean Privat (c) 2011
;
; Programme principal. Invoque simplement la fonction.
         LDA     tab,i       
         LDX     tabLen,i    
         CALL    readTab     
         STOP                
tab:     .BLOCK  10          ; un tableau d'entiers #2d5a
tabLen:  .EQUATE 10          ; taille de tab en octets
;
; readTab: lit un tableau d'entiers (de l'input)
; IN: A=tableau d'entiers (mots signés #2d)
;     X=taille du tableau en octets
; En cas de probleme de lecture, le programme s'arrete.
readTab: STA     addrt,d     ; sauvegarde le parametre A
         STX     taille,d    ; sauvegarde le parametre X
         ADDX    addrt,d     
         STX     addrfin,d   ; addrfin = addrt + taille
         LDX     addrt,d     ; for (X=addrt; X<addrfin; X+=2) {
readLoop:CPX     addrfin,d   
         BRGE    rTfin       
         DECI    0,x         ;   *addrt = readInt();
         ADDX    2,i         
         BR      readLoop    ; } // fin for
rTfin:   LDX     taille,d    ; restaure X
         RET0                
; variables ``locales'' du sous-programme
taille:  .BLOCK  2           ; la taille du tableau en octets #2d
addrt:   .BLOCK  2           ; l'adresse du tableau #2h
addrfin: .BLOCK  2           ; l'adresse de fin du tableau #2h
         .END                  
