; Programme qui attends deux nombre et affiche le plus grand
; Jean Privat (c) 2010
         DECI    x,d         ; x = getInt();
         DECI    y,d         ; y = getInt();
         LDA     x,d         
         CPA     y,d         
         BRLE    out_y       ; if (x > y) {
         DECO    x,d         ;   print x;
         STOP                ;   exit();
out_y:   DECO    y,d         ; } else { print y;
         STOP                ;   exit(); }
x:       .BLOCK  2           ; Premier nombre saisi
y:       .BLOCK  2           ; Second nombre saisi
         .END                  