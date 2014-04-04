; Semaine 5
; Programme qui lit un tableau à l'envers
; Alexandre Terrasa (C) 2012

         STRO    strF, d     ; print(strF)
         LDX     0, i        ; X = 0
loopf:   DECO    vecteur, x  ; do { print(vecteur[X])
         CHARO   " ", i      ; print(" ")
         CPX     lenVec, i   ; 
         ADDX    2,i         ;   X++
         CPX     lenVec,i    
         BRLT    loopf       ; } while (X < lenVec); 

         STRO    strB, d     ; print(strB)
         LDX     lenVec,i    ; X = lenVec
loopb:   SUBX    2, i        ; do { X--
         DECO    vecteur,x   ;    print(vecteur[X])
         CHARO   ' ', i      ;    print(" ")
         CPX     0,i    
         BRGT    loopb       ; } while (X > 0)
         
         STOP       

; Déclaration du tableau
vecteur: .WORD   5           ; un vecteur d'octets
         .WORD   6           
         .WORD   2           
         .WORD   7           
         .WORD   8           
lenVec:  .EQUATE 10          ; taille du vecteur (en octets)

; Autres variables
strF:    .ASCII "Valeurs à l'endroit: \x00"
strB:    .ASCII "\nValeurs à l'envers: \x00"

         .END             