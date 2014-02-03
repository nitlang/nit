; Passage des arguments et résultats par registres
; Utilisation d'une variable globale
         DECI    num,d       
         LDA     num,d       
         DECI    num,d       
         LDX     num,d       
;
         SUBSP   8,i         ; réserve params #divreste #divquoti #dividend #diviseur
         STX     0,s         ; empile #diviseur
         STA     2,s         ; empile #dividend
         CALL    div         
         LDX     4,s         ; recupère #divquoti
         LDA     6,s         ; recupère #divreste
         ADDSP   8,i         ; libère params #divreste #divquoti #dividend #diviseur
;
         STA     num,d       
         DECO    num,d       
         CHARO   ' ',i       
         STX     num,d       
         DECO    num,d       
         STOP                
num:     .BLOCK  2           ; #2d
;
; div: calcule le quotient et le reste d'une division
; IN:  PP+0=diviseur
;      PP+2=dividend
; OUT: PP+4=divquoti
;      PP+6=divreste
divreste:.EQUATE 12          ; Résultat #2d
divquoti:.EQUATE 10          ; Résultat #2d
dividend:.EQUATE 8           ; Paramètre #2d
diviseur:.EQUATE 6           ; Paramètre #2d
divsavA: .EQUATE 2           ; Variable locale #2d
divsavX: .EQUATE 0           ; Variable locale #2d
div:     SUBSP   4,i         ; empile #divsavA #divsavX
         STA     divsavA,s   ; sauve A
         STX     divsavX,s   ; sauve X
         LDA     dividend,s  ; A = dividende
         LDX     0,i         ; X = 0
div_loop:CPA     diviseur,s  
         BRLT    div_fin     ; while(A>=diviseur) {
         SUBA    diviseur,s  ;   A -= diviseur;
         ADDX    1,i         ;   X++;
         BR      div_loop    ; } // fin while
div_fin: STA     divreste,s  ; divreste = A
         STX     divquoti,s  ; divquoti = X
         LDA     divsavA,s   ; restaure A
         LDX     divsavX,s   ; restaure X
         RET4                ; depile #divsavA #divsavX
         .END                  