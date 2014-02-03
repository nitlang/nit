; Semaine 6
; Programme qui transforme les minuscules en majuscules
; Jean Privat (C) 2010
loop:    CHARI   c,d         ; do {
         LDA     0,i         
         LDBYTEA c,d         ; c = getChar();
         CPA     'a',i       
         BRLT    out         
         CPA     'z',i       
         BRGT    out         ; if (c>='a' && c<='z') {
         ANDA    0x00DF,i    
         STBYTEA c,d         ; c = c & 0xDF; // mise en majuscule }
out:     CHARO   c,d         ; print(c);
         CPA     '\n',i      
         BRNE    loop        ; } while (c != '\n')
fin:     STOP                
c:       .BLOCK  1           ; #1c
         .END                  