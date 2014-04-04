; Semaine 6
; Programme qui multiplie un nombre par 100
; Jean Privat (C) 2010
         DECI    num,d       
         LDA     num,d       ; num = getNumber()
         ASLA                
         ASLA                
         STA     x4,d        ; x4 = num*4
         ASLA                
         ASLA                
         ASLA                
         STA     x32,d       ; x32 = num*32
         ASLA                
         ADDA    x4,d        
         ADDA    x32,d       
         STA     num,d       ; num = num*64 + x4 + x32; // = num*100
         DECO    num,d       ; print num
         STOP                
num:     .BLOCK  2           
x4:      .BLOCK  2           
x32:     .BLOCK  2           
         .END                  