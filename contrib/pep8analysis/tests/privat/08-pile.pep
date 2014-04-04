; Exemple simple d'empilage et de dépilage
; Jean Privat (c) 2011
         CALL    main        
         STOP                
main:    SUBSP   2,i         ; empile un mot #a
         LDA     10,i        
         STA     0,s         
;
         SUBSP   2,i         ; empile un autre mot #b
         LDA     20,i        
         STA     0,s         
;
         DECO    0,s         
         DECO    2,s         
;
         ADDSP   2,i         ; dépile un mot #b
         DECO    0,s         
;
         ADDSP   2,i         ; dépile un mot #a
         RET0                
a:       .EQUATE 0           ; #2d symbole utilisé pour activer le débogueur de Pep/8
b:       .EQUATE 0           ; #2d symbole utilisé pour activer le débogueur de Pep/8
         .END                  
