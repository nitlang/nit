; Semaine 7
; Programme qui trie un tableau de 10 entiers
; Jean Privat (c) 2010
;
; Attention, 2 octets par mot.
; Étape 1 : lit 10 entier et les range dans vecteur
         LDX     0,i         
in_loop: CPX     20,i        
         BRGE    trier       ; for(X=0;X<20;X+=2) {
         DECI    vecteur,x   ;   vecteur[X] = getInt();
         ADDX    2,i         
         BR      in_loop     ; } // fin for
; Étape 2 : trie le vecteur (algo: tri par permutation)
trier:   LDX     18,i        
         STX     ix,d        
loop_ix: BRLT    afficher    ; for(ix=18;ix>=0;ix-=2) {
         SUBX    2,i         
         STX     jx,d        ;   for(jx=ix-2;jx>=0;jx-=2) {
loop_jx: BRLT    next_ix     
         LDA     vecteur,x   
         LDX     ix,d        
         CPA     vecteur,x   
         BRLE    next_jx     ;     if (vecteur[jx] > vecteur[ix]) {
         STA     tmp,d       ;       tmp = vecteur[jx];
         LDX     ix,d        
         LDA     vecteur,x   
         LDX     jx,d        
         STA     vecteur,x   ;       vecteur[jx] = vecteur[ix];
         LDA     tmp,d       
         LDX     ix,d        
         STA     vecteur,x   ;       vecteur[ix] = tmp;
next_jx: LDX     jx,d        
         SUBX    2,i         
         STX     jx,d        
         BR      loop_jx     ;     } // fin for jx
next_ix: LDX     ix,d        
         SUBX    2,i         
         STX     ix,d        
         BR      loop_ix     ;   } // fin for ix
; Étape 3 : affiche le tableau trié
afficher:LDX     0,i         
out_loop:CPX     20,i        
         BRGE    fin         ; for(X=0;X<20;X++) {
         DECO    vecteur,x   
         CHARO   '\n',i      ;   print(vecteur[X], "\n");
         ADDX    2,i         
         BR      out_loop    ; } // fin for
fin:     STOP                ; exit();
; Variables globales
vecteur: .BLOCK  20          ; #2d10a vecteur de 10 entiers
ix:      .BLOCK  2           ; #2d itérateur ix pour tri
jx:      .BLOCK  2           ; #2d itérateur jx pour tri
tmp:     .BLOCK  2           ; #2d variable temporaire pour échange
         .END                  
