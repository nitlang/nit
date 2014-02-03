; Programme qui calcule a = 7 + (b+5) - (c-4)
         LDA     7,i         
         ADDA    b,d         
         ADDA    5,i         
         SUBA    c,d         
         ADDA    4,i         
         STA     a,d         
; Meme chose mais regroupe les litéraux
         LDA     16,i        
         ADDA    b,i         
         SUBA    c,d         
         ADDA    4,i         
         STA     a,d         
         STOP                
a:       .BLOCK  2           ;#2a
b:       .WORD   1           
c:       .WORD   2           
         .END                
