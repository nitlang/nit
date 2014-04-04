; Branchements
; Programme qui affiche si le nombre saisi par l'utilisateur est égal à 0 ou non
;
; Alexandre Terrasa (c) 2013

         DECI    nb,d        ; nb = deci()
         LDA     nb,d        ; A = nb
         BREQ    eq0         ; if( A != 0 ) {
         STRO    strNot0,d   ;    print(strNot0)
         STOP                ; } else {
eq0:     STRO    strEq0,d    ;    print(strEq0)
         STOP                ; }
; variables
nb:      .BLOCK  2           ; on reserve 2 block pour l'entier saisi
strNot0: .ASCII  "Different de 0\x00"
strEq0:  .ASCII  "Egal a 0\x00"
         .END
