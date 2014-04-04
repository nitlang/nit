; Introduction à PEP8
; Programme qui calcule la différence de deux nombres saisis par l'utilisateur
; et affiche le resultat.
;
; Alexandre Terrasa (c) 2013            

         stro    msgIn, d         ; print(mshIn)
         deci    nb, d            ; nb = deci()
         lda     nb, d            ; A = nb
         deci    nb, d            ; nb = deci()
         suba    nb, d            ; A -= nb
         sta     nb, d            ; nb = A
         stro    msgOut, d        ; print(msgOut)
         deco    nb, d            ; print(nb)

         stop

msgIn:   .ASCII  "Veuillez saisir deux nombres: \n\x00"  ; \x00 permet d'indiquer la fin de la chaîne
msgOut:  .ASCII  "La différence de"                         ; Ainsi, on peut ecrire un message
         .ASCII  " ces deux nombres est \x00"            ; sur plusieurs lignes...

nb:      .BLOCK  2                ; utilisé pour stocker les nombres saisis puis le résultat pour l'affichage

         .END