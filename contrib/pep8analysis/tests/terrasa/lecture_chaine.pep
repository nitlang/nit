; Programme qui lit une chaine caractère par caractère
; et s'arrête au premier caractère nul trouvé
;
; Alexandre Terrasa (c) 2012

         ldx     0,i          ; X = 0

rep:     ldbytea chaine, x    ; do { A = chaine[X] // if chaine[X] == null then Z = 1
         breq    fin          ;   if( A != null ) {
         charo   chaine,x     ;       print(chaine[X])
         charo   "\n",i       ;       print("\n")
         addx    1,i          ;       X++
                              ;   } else { break }
         br      rep          ; }

fin:     stop

chaine:  .ASCII  "Bonjour\x00" ; La chaine à lire en ASCII (1 caractère = 1 octet)

         .END