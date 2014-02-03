; Programme qui lit 10 entiers, les trie et les affiche
; (c) Jean Privat 2012
; Note: Ce programme essaye d'être aussi lisible que possible, donc aucune optimisation assembleur n'est faite
;
; progamme princial
; le programme est découpé en trois étapes : - la lecture ; 2 - le tri ; 3 - l'affichage.
; Théoriquement, le tri et l'afichage aurait pu etre fusionés, mais cela compexifie la lecture et le gain en performance est minime.
         CALL    lire        ;
         CALL    trier       ;
         CALL    ecrire      ;
         STOP                
tab:     .BLOCK  20          ; int[10] tab // #2d10a Tableau de 10 entiers (1 mot par entier)
tablen:  .EQUATE 20          ; // taille du tableau (en octets)
;
;
;lire: lit les entiers de l'input et les range dans le tableau.
; l'algo utilise une simple boucle sur X pour lire toutes les cases
lire:    LDX     0,i         
lire_bcl:CPX     tablen,i    
         BRGE    lire_fin    ; for (X=0; X<tablen; X+=2) { // 2 car on compte les octets
         DECI    tab,x       ;   tab[X] = DECI();
         ADDX    2,i         
         BR      lire_bcl    ; } // fin for
lire_fin:RET0                ; return;
;
;
;ecrire: ecrit les entiers du tableau sur l'output en les séparants par des espaces et en terminant la ligne par un retour chariot.
; l'algo utilise une simple boucle sur X pour écrire toutes les cases
ecrire:  LDX     0,i         
ecri_bcl:CPX     tablen,i    
         BRGE    ecri_fin    ; for (X=0; X<tablen; X+=2) { // 2 car on compte les octets
         DECO    tab,x       
         CHARO   ' ',i       ;   print(tab[X], ' ');
         ADDX    2,i         
         BR      ecri_bcl    ; } // fin for
ecri_fin:CHARO   '\n',i      
         RET0                ; return;
;
;
;trier: trie par permutation du tableau.
; l'algo utilise deux boucles impriquées
trier:   LDX     0,i         
         STX     i,d         
tri_bcl1:LDX     i,d         
         CPX     tablen,i    
         BRGE    trie_fin    ; for(i=0; i<tablen; i+=2) { // grande boucle
;                            ;   // l'objectif de cette grande boucle est de mettre dans tab[i] le plus petit element restant
;                            ;   // l'invariant de boucle est que les éléments avant i sont déjà bien placés (triés)
;
         LDX     i,d         
         ADDX    2,i         
         STX     j,d         
tri_blc2:LDX     j,d         
         CPX     tablen,i    
         BRGE    blc2_fin    ;   for(j=i+2; j<tablen; j+=2) { // petite boucle
;                            ;     // l'objectif de cette petite boucle est de chercher via tab[j] le plus petit élément restant
;                            ;     // l'invariant de boucle est que tout élément entre i et j est plus grand que tab[i]
         LDX     i,d         
         LDA     tab,x       
         LDX     j,d         
         CPA     tab,x       
         BRLE    noswitch    ;     if (tab[i] > tab[j]) {
;                            ;       // pour respecter l'ordre, il faut inverser tab[i] et tab[j]
         LDX     i,d         
         LDA     tab,x       
         STA     tmp,d       ;       tmp = tab[i];
         LDX     j,d         
         LDA     tab,x       
         LDX     i,d         
         STA     tab,x       ;       tab[i] = tab[j];
         LDA     tmp,d       
         LDX     j,d         
         STA     tab,x       ;       tab[j] = tmp;
noswitch:NOP0                ;     } // fin if
;
         LDX     j,d         
         ADDX    2,i         
         STX     j,d         
         BR      tri_blc2    
blc2_fin:NOP0                ;   } // fin boucle j (cat j+=2)
;
         LDX     i,d         
         ADDX    2,i         
         STX     i,d         
         BR      tri_bcl1    ; } // fin boucle i (cad i+=2)
;
trie_fin:RET0                ; return;
; variables utiliées par la fonction `trier':
i:       .BLOCK  2           ; indice de la grande boucle
j:       .BLOCK  2           ; indice de la petite boucle
tmp:     .BLOCK  2           ; valeur temporaire pour la permutation
;
         .END                  