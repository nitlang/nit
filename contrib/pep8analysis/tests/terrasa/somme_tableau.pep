; Semaine 5
; Programme qui calcule la somme des éléments d'un tableau
; Jean Privat (C) 2010
; Alexandre Terrasa (C) 2012

         STRO    strStart, d ; print(strStart)

         LDA     0,i         ; somme = 0
         LDX     0,i         ; X = 0
loop:    ADDA    vecteur,x   ; do{ somme += vecteur[X]
         DECO    vecteur,x   ;   print(vecteur[X]);
         CHARO   ' ', i      ;   print(" ");
         ADDX    2,i         ;   X++;
         CPX     lenVec,i    
         BRLT    loop        ; } while (X < lenVec);
         
         CHARO   0x0A, i     ; print("\n");
         STRO    strSum, d   ; print(strSum);
         STA     somme,d     
         DECO    somme,d     ; print(somme);
         STOP       

; Déclaration du tableau         
vecteur: .WORD   5           ; un vecteur d'octets
         .WORD   6           
         .WORD   2           
         .WORD   7           
         .WORD   8           
lenVec:  .EQUATE 10          ; taille du vecteur (en octets)

; Autres variables
somme:   .BLOCK  2           ; #2d somme calculée du vecteur

strStart:.ASCII  "Valeurs contenues dans le tableau: \x00"
strSum:  .ASCII  "Somme: \x00"

         .END             