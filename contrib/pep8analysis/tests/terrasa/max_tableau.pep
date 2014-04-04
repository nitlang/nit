; Programme qui trouve le plus grand élément d'un tableau d'entiers positifs
; LIMITES: Les valeurs stockées dans le tableaux doivent être positives
;
; Alexandre Terrasa (c) 2012

         STRO    strStart, d ; print(strStart) 
         LDX     0,i         ; X = 0
                             ; 
loop:    LDA     vecteur, x  ; do { A = vecteur[X]
         DECO    vecteur, x  ; print(vecteur[X])
         CHARO   " ", i      ; print(" ")
         CPA     max, d      ; 
         BRLE    next        ;   if(vecteur[X] > max) {
         STA     max, d      ;        max = vecteur[X] 
                             ;   }
next:    ADDX    2,i         ;   X++
         CPX     lenVec,i    
         BRLT    loop        ; } while (X < lenVec);
         
         STRO    strMax, d   ; print(strMax); 
         DECO    max,d       ; print(max);
         STOP       

; Déclaration du tableau         
vecteur: .WORD   5           ; un vecteur d'octets
         .WORD   6           
         .WORD   12           
         .WORD   7           
         .WORD   8           
lenVec:  .EQUATE 10          ; taille du vecteur (en octets)

; Autres variables
max:     .WORD   -1        ; #2d max du vecteur
strStart:.ASCII  "Valeurs contenues dans le tableau: \x00"
strMax:  .ASCII  "\nMax: \x00"

         .END                  