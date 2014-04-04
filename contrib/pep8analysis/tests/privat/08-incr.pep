; Sous-programme qui incrémente un mot passé par référence
; Jean Privat (c) 2010
         LDA     5,i         
         STA     mot,d       ; mot = 5;
         DECO    mot,d       ; print(mot);
         SUBSP   2,i         ; réserve #incrVar
         LDA     mot,i       
         STA     0,s         ; incrVar = &mot
         CALL    incr        
         ADDSP   2,i         ; libère #incrVar
         CHARO   ' ',i       
         DECO    mot,d       ; print(' '+mot);
         STOP                
mot:     .BLOCK  2           ; #2d un mot
;
; incr: incrémente un mot passé par référence
; IN : PP+0=l'adresse du mot à incrémenter (#2h)
incrVar: .EQUATE 4           ; #2h le paramètre
incrA:   .EQUATE 0           ; #2d variable locale : sauvegarde de A
incr:    SUBSP   2,i         ; réserve #incrA
         STA     incrA,s     ; sauve A
;                            ; // incrémentation : (*incrVar)++
         LDA     incrVar,sf  ; A = *incrVar
         ADDA    1,i         ; A++
         STA     incrVar,sf  ; *incrVar = A
;                            ; // fin sous-programme
         LDA     incrA,s     ; restaure A
         RET2                ; libère #incrA
         .END                  