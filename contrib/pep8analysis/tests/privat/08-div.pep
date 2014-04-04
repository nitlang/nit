; Programme et sous programme de division entière
; Jean Privat (c) 2010
         DECI    num,d       
         LDA     num,d       
         DECI    num,d       
         LDX     num,d       
         CALL    div         
         STA     num,d       
         DECO    num,d       
         CHARO   ' ',i       
         STX     num,d       
         DECO    num,d       
         STOP                
num:     .BLOCK  2           ; #2d
;
; div: calcule le quotient et le reste d'une division
; Passage des arguments et résultats par registres
; Utilisation d'une variable globale
; IN:  A=dividende
;      X=diviseur
; OUT: A=reste
;      X=quotient
div:     STX     diviseur,d  
         LDX     0,i         ; X = 0
div_loop:CPA     diviseur,d  
         BRLT    div_fin     ; while(A>=diviseur) {
         SUBA    diviseur,d  ;   A -= diviseur;
         ADDX    1,i         ;   X++;
         BR      div_loop    ; } // fin while
div_fin: RET0                
diviseur:.BLOCK  2           ; Variable globale #2d
         .END                  
