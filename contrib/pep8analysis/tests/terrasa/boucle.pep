; Branchements
; Programme qui toutes les valeurs entières entre deux valeurs saisies par l'utilisateur
; LIMITE: min <= max sinon erreur
;
; Alexandre Terrasa (c) 2013

         stro    strMin, d   ; print(strMin)
         deci    min, d      ; min = deci() 
         stro    strMax, d   ; print(strMax)
         deci    max, d      ; max = deci()
         stro    strLoop, d  ; print(strLoop)
         ldx     min, d      ; X = min
         lda     min, d      ; A = min

         cpa     max, d      ;
         brle    loop        ; if ( A > max ) {
         stro    strErr, d   ;    print(strErr)
         stop                ; }
         
loop:    cpx     max, d      ;
         breq    end         ; while(X != max) {
         stx     tmp, d      ;    tmp = X
         deco    tmp, d      ;    print(tmp)
         addx    1, i        ;    X ++
         charo   "\n", i     ;    print("\n")
         br      loop        ; }
end:     deco    max, d      ; print(max)
         stop

; variables
min:     .block  2           ; pour stocker le minimum saisi
max:     .block  2           ; pour stocker le maximum saisi
tmp:     .block  2           ; pour stocker la valeur a afficher
         
strMin:  .ascii  "Minimum ?\n\x00"
strMax:  .ascii  "Maximum ?\n\x00"
strLoop: .ascii  "Boucle :\n\x00"
strErr:  .ascii  "Erreur: Le minimum doit être inférieur ou égal au maximum !\x00"

         .END
