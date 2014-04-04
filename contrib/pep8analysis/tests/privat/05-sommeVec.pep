; Semaine 5
; Programme qui calcule la somme des éléments d'un tableau
; Jean Privat (C) 2010
         LDA     0,i         ; somme = 0
         LDX     0,i         ; X = 0
loop:    ADDA    vecteur,x   ; do{ somme += vecteur[X]
         ADDX    2,i         ;   X++;
         CPX     lenVec,i    
         BRLT    loop        ; } while (X<lenVec);
         STA     somme,d     
         DECO    somme,d     ; print(somme);
         STOP                
vecteur: .WORD   5           ; un vecteur d'octets
         .WORD   6           
         .WORD   2           
         .WORD   7           
         .WORD   8           
lenVec:  .EQUATE 10          ; taille du vecteur (en octets)
somme:   .BLOCK  2           ; #2d somme calculée du vecteur
         .END                  