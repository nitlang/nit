; Branchements
; Programme qui calcule une division entière entre deux nombres
; puis affiche le quotient et le reste
; LIMITE: a >= 0
; LIMITE: b > 0
;
; Alexandre Terrasa (c) 2013

         stro    strA, d     ; print(strA)
         deci    a, d        ; a = deci()

         ldx     a, d        ; X = a
         cpx     0, i        ;
         brgt    notErrA     ; if( X < 0 ) {
         stro    strErrA, d  ;    print(strErrA)
         stop                ; }

notErrA: stro    strB, d     ; print(strB)
         deci    b, d        ; b = deci()

         ldx     b, d        ; X = a
         cpx     0, i        ;
         brgt    notErrB      ; if( X < 0 ) {
         stro    strErrB, d   ;    print(strErrB)
         stop                ; }

notErrB: lda     a, d        ; A = a
         ldx     0, i        ; X = 0
sub:     cpa     b, d        
         brlt    end         ; while(A >= b) {
         suba    b, d        ;   A = A - b
         addx    1, i        ;   X++
         br      sub         ; }

end:     sta     r, d        ; r = A     
         stx     q, d        ; q = X
         stro    strQ, d     ; print(strQ)
         deco    q, d        ; print(q)
         stro    strR, d     ; print(strR)
         deco    r, d        ; print(r)
         stop

; variables
strA:    .ASCII "a = \x00"
strB:    .ASCII "b = \x00"
strQ:    .ASCII "a / b = \x00"
strR:    .ASCII " reste \x00"
strErrA: .ASCII "Erreur: a doit etre strictement positif\x00"
strErrB: .ASCII "Erreur: b doit etre strictement supperieur a 0\x00"

a:       .BLOCK 2
b:       .BLOCK 2
q:       .BLOCK 2
r:       .BLOCK 2

         .END
