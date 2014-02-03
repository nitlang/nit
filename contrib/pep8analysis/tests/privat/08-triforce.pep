; Programme simple qui triforce
; Jean Privat (c) 2010
         CALL    force       
         CALL    force       
         CALL    force       
         STOP                
;
force:   STRO    f1,d        
         STRO    f2,d        
         STRO    f3,d        
         RET0                
f1:      .ASCII  "  *\n\x00" 
f2:      .ASCII  " ***\n\x00"
f3:      .ASCII  "*****\n\x00"
         .END                  