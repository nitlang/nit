; Branchements
; Programme qui affiche si le nombre saisi par l'utilisateur est égal à 0 ou non
;
; Alexandre Terrasa (c) 2013

         deci    nb, d       ; nb = deci()
         lda     nb, d       ; A = nb
         deco    nb, d       ; print(nb)
         
         cpa     zero, i     ;
         breq    eq0         ; if( A != 0 ) {
         cpa     zero, i     ;
         brgt    gt0         ;    if( A < 0 ) {
         stro    strLt0, d   ;        print(strLt0)
         stop                ;    } else {
gt0:     stro    strGt0, d   ;        print(strGt0)
         stop                ;    }
                             ; } else {
eq0:     stro    strEq0, d   ;    print(strEq0)
         stop                ; }

; variables
nb:      .block  2           ; on reserve 2 block pour l'entier saisi
strLt0:  .ascii  " est negatif\x00"
strEq0:  .ascii  " est nul\x00"
strGt0:  .ascii  " est positif\x00"
zero:    .equate 0           ; constante pour le test de branchement

         .END
