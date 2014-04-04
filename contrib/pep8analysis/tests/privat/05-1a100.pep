; Semaine 5
; Programme qui compte de 1 jusqu'à 100
; Jean Privat (C) 2010
         LDA     1,i         
loop:    CPA     100,i       
         BRGT    fin         ; for(val=1; val<=100; val++) {
         STA     val,d       
         DECO    val,d       
         CHARO   '\n',i      ;   print(val, "\n");
         ADDA    1,d         
         BR      loop        ; } // end of for
fin:     STOP                
val:     .BLOCK  2           
         .END                  