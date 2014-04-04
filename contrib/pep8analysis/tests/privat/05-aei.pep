; Semaine 5
; Programme qui lit un ligne et transforme les 'a' en 4, les 'e' en '3' et les 'i' en '1'.
; Jean Privat (C) 2010
lit_char:LDA     0,i         ; do {
         CHARI   c,d         
         LDBYTEA c,d         ;   A = getChar();
         CPA     'a',i       
         BRNE    pas_a       ;   if (A == 'a') {
         CHARO   '4',i       ;     print('4');
         BR      lit_char    
pas_a:   CPA     'e',i       
         BRNE    pas_e       ;   } else if (A == 'e') {
         CHARO   '3',i       ;     print('3');
         BR      lit_char    
pas_e:   CPA     'i',i       
         BRNE    pas_i       ;   } else if (A == 'i') {
         CHARO   '1',i       ;     print('1');
         BR      lit_char    
pas_i:   CHARO   c,d         ;   } else print(A);
         CPA     '\n',i      
         BRNE    lit_char    ; } while (A != '\n');
         STOP                ; exit;
c:       .BLOCK  1           ; #1c Caractère lu et éventuellemet écrit
         .END                  