; Programme qui abuse de la pile
; Jean Privat (c) 2010
         CALL    la          
         STOP                
la:      LDA     ici,i       
         STA     0,s         
         RET0                
         STOP                
ici:     CHARO   '*',i       
         STOP                
         .END                  