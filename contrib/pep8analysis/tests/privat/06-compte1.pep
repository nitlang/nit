; Semaine 6
; Programme qui compte le nombre de bits à 1
; Jean Privat (C) 2010
         LDX     0,i         ; cpt = 0;
         DECI    num,d       
         LDA     num,d       ; num = getNumber();
loop:    BREQ    fin         ; while (num!=0) {
         ASLA                ;   num<<1
         BRC     un          ;   if (bit perdu == 1) {
         BR      loop        
un:      ADDX    1,i         ;     cpt++; }
         BR      loop        ; } // fin while
fin:     STX     num,d       
         DECO    num,d       
         STRO    msg,d       ; print ...
         STOP                
num:     .BLOCK  2           
msg:     .ASCII  " un(s) trouvé(s).\n\x00"
         .END                  