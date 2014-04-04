; Programme qui manipule une liste chaînée
; Jean Privat (c) 2010
;
;                            ; // Lit la liste (à l'envers)
         LDA     10,i        
         STA     cpt,d       
loop_in: CPA     0,i         
         BRLE    out         ; for(cpt=10; cpt>0; cpt--) {
         LDA     mLength,i   
         CALL    new         ;   X = new Maillon(); #mVal #mNext
         DECI    mVal,x      ;   X.val = getInt();
         LDA     head,d      
         STA     mNext,x     ;   X.next = head;
         STX     head,d      ;   head = X;
         LDA     cpt,d       
         SUBA    1,i         
         STA     cpt,d       
         BR      loop_in     ; } // fin for
;
;                            ; // Affiche la liste
out:     LDX     head,d      
loop_out:CPX     0,i         
         BREQ    fin         ; for (X=head; X!=null; X=X.next) {
         DECO    mVal,x      
         CHARO   ' ',i       ;   print(X.val + " ");
         LDX     mNext,x     
         BR      loop_out    ; } // fin for
fin:     STOP                
head:    .BLOCK  2           ; #2h tête de liste (null (aka 0) si liste vide)
cpt:     .BLOCK  2           ; #2d compteur de boucle
;
;******* Structure de liste d'entiers
; Une liste est constituée d'une chaîne de maillons.
; Chaque maillon contient une valeur et l'adresse du maillon suivant
; La fin de la liste est marquée arbitrairement par l'adresse 0
mVal:    .EQUATE 0           ; #2d valeur de l'élément dans le maillon
mNext:   .EQUATE 2           ; #2h maillon suivant (null (aka 0) pour fin de liste)
mLength: .EQUATE 4           ; taille d'un maillon en octets
;
;
;******* operator new
;        Precondition: A contains number of bytes
;        Postcondition: X contains pointer to bytes
new:     LDX     hpPtr,d     ;returned pointer
         ADDA    hpPtr,d     ;allocate from heap
         STA     hpPtr,d     ;update hpPtr
         RET0                
hpPtr:   .ADDRSS heap        ;address of next free byte
heap:    .BLOCK  1           ;first byte in the heap
         .END                  