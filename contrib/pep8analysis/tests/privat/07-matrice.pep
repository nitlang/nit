; Semaine 7
; Programme qui lit un matrice 4x3 d'entiers et affiche la transposée
; Jean Privat (c) 2010
;
; Attention, 2 octets par mot.
         LDX     0,i         
in_loop: CPX     24,i        
         BRGE    afficher    ; for(X=0;X<24;X+=2) {
         DECI    vecteur,x   ;   vecteur[X] = getInt();
         ADDX    2,i         
         BR      in_loop     ; } // fin for
afficher:LDX     0,i         
         STX     ix,d        
loop_ix: CPX     8,i         
         BRGE    fin         ; for(ix=0;ix<8;ix+=2) {
         LDX     0,i         
         STX     jx,d        
loop_jx: CPX     24,i        
         BRGE    next_ix     ;   for(jx=0;jx<24;jx+=8) {
         ADDX    ix,d        
         DECO    vecteur,x   
         CHARO   ' ',i       ;     print(vecteur[ix+jx], " ");
         LDX     jx,d        
         ADDX    8,i         
         STX     jx,d        
         BR      loop_jx     ;   } // fin for jx
next_ix: CHARO   '\n',i      ;
         LDX     ix,d        
         ADDX    2,i         
         STX     ix,d        
         BR      loop_ix     ; } // fin for ix
fin:     STOP                ; exit();
; Variables globales
vecteur: .BLOCK  24          ; #2d12a vecteur de 10 entiers
ix:      .BLOCK  2           ; #2d itérateur ix pour tri
jx:      .BLOCK  2           ; #2d itérateur jx pour tri
         .END                  