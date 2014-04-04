; Branchements
; Programme qui calcule le produit de deux nombres saisis par l'utilisateur
; LIMITE: a >= 0 && b >= 0
;
; Alexandre Terrasa (c) 2013

         stro    strA, d     ; print(strA)
         deci    a, d        ; a = deci()

         ldx     a, d        ; X = a
         cpx     0, i        ;
         brge    notErrA     ; if( X < 0 ) {
         stro    strErr, d   ;    print(strErr)
         stop                ; }

notErrA: stro    strB, d     ; print(strB)
         deci    b, d        ; b = deci()

         ldx     b, d        ; X = b
         cpx     0, i        ;
         brge    notErrB     ; if( X < 0 ) {
         stro    strErr, d   ;    print(strErr)
         stop                ; }

notErrB: lda     0, i        ; A = 0
         ldx     a, d        ; X = a
add:     cpx     0, i         
         breq    end         ; if(X !=0 ) {
                             ;   do {
         adda    b, d        ;     A = A + b
         subx    1, i        ;     X = X - 1
         cpx     0, i         
         brne    add         ;   } while(X != 0)
                                ; }

end:     sta     p, d        ; p = A
         stro    strP, d     ; print(strP)
         deco    p, d        ; print(p)
         stop

; variables
strA:    .ASCII "a = \x00"
strB:    .ASCII "b = \x00"
strP:    .ASCII "a * b = \x00"
strErr:  .ASCII "Erreur: La valeur saisie doit etre positive\x00"

a:       .BLOCK 2            ; a
b:       .BLOCK 2            ;
p:       .BLOCK 2            ; pour stocker le produit avant affichage

         .END
