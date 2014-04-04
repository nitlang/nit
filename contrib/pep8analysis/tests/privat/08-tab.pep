; Programme qui alloue un tableau dans la pile
; Jean Privat (c) 2010
         CALL    main        
         STOP                
;
; main: programme principal
main:    SUBSP   len,i       ; réserve le tableau #tab
;                            ; // initialise le tableau à partir de l'input
         LDX     0,i         
lit_loop:CPX     len,i       
         BRGE    affich      ; for(X=0; X<len; X+=2) {
         DECI    tab,sx      ;   tab[X] = getInt();
         ADDX    2,i         
         BR      lit_loop    ; } // fin for
;
;                            ; // affiche a l'envers
affich:  LDX     len,i       
aff_loop:SUBX    2,i         
         BRLT    somme       ; for(X=len-2; X>=0; X-=2) {
         DECO    tab,sx      
         CHARO   ' ',i       ;   print(tab[X] + " ");
         BR      aff_loop    ; } // fin for
;
;                            ; // calcule la somme des éléments du tableau
somme:   MOVSPA              
         ADDA    tab,i       ; A = adresse du tableau
         SUBSP   2,i         ; // réserve #sumTab
         STA     0,s         
         CALL    sum         
         ADDSP   2,i         ; // déréserve #sumTab
         STA     num,d       ; num = sum(A)
         CHARO   '=',i       
         DECO    num,d       ; print("=" + num);
;
fin:     ADDSP   len,i       ; déréserve #tab
         RET0                
;
; variables globales
tab:     .EQUATE 0           ; variable locale: tableau de 4 mots #2d4a
len:     .EQUATE 8           ; taille du tableau #tab en octets
num:     .BLOCK  2           ; variable pour affichage
;
; sum: calcule la somme d'un tableau de 4 mots
; IN : PP+0=l'addresse du tableau (#2h)
; OUT: A=somme du tableau (#2d)
sumTab:  .EQUATE 4           ; #2h paramètre
sumX:    .EQUATE 0           ; #2d sauvegarde X
sum:     SUBSP   2,i         ; réserve #sumX
         STX     sumX,s      ; sauve X
         LDA     0,i         ; A = 0
         LDX     0,i         
sum_loop:CPX     len,i       
         BRGE    sum_fin     ; for(X=0; X<len; X+=2) {
         ADDA    sumTab,sxf  ;   A += sumTab[X];
         ADDX    2,i         
         BR      sum_loop    ; } // fin for
sum_fin: LDX     sumX,s      ; restaure X
         RET2                ; déréserve #sumX
         .END                  