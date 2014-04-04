; Sous-programme qui lit un tableau d'entier
; -> utilise des vraies variables locales
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
; En cas de probleme de lecture, le programme s'arrete
readTab: SUBSP   6,i         ; reserve var locales #taille #addrt #addrfin
         STA     addrt,s     ; sauvegarde le parametre A
         STX     taille,s    ; sauvegarde le parametre X
         ADDX    addrt,s     
         STX     addrfin,s   ; addrfin = addrt + taille
         LDX     addrt,s     ; for (X=addrt; X<addrfin; X+=2) {
readLoop:CPX     addrfin,s   
         BRGE    rTfin       
         DECI    0,x         ;   *addrt = readInt();
         ADDX    2,i         
         BR      readLoop    ; } // fin for
rTfin:   LDX     taille,s    ; restaure X
         RET6                ; libere #taille #addrt #addrfin
taille:  .EQUATE 4           ; la taille du tableau en octets #2d
addrt:   .EQUATE 2           ; l'adresse du tableau #2h
addrfin: .EQUATE 0           ; l'adresse de fin du tableau #2h
         .END                  