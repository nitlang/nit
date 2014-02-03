; Introduction à PEP8
; Programme qui affiche le caractère saisi par l'utilisateur
;
; Alexandre Terrasa (c) 2013     

         stro    msg1, d     ; print(msg1)
         chari   char, d     ; char = chari()
         stro    msg2, d     ; print(msg2)
         charo   char, d     ; print(char)
         stop

char:    .BYTE   0           ; on réserve un octet (initialisé à 0) pour stocker le caractère

msg1:    .ASCII  "Veuillez saisir un caractère: \x00"
msg2:    .ASCII  "\nLe caractère saisi est: \"\x00"

         .END