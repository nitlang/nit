; Programme qui manipule des produits
; Jean Privat (c) 2010
;
; Programme principal
         CALL    main1       
         CALL    main2       
         CALL    main3       
         STOP                
;
; ****** main1: Initialise et affiche un produit global
main1:   LDA     1,i         
         LDX     prCode,i    
         STA     produitA,x  ; produitA->code = 1;
         LDA     1495,i      
         LDX     prPrix,i    
         STA     produitA,x  ; produitA->prix = 1495;
         LDA     nomA,i      
         LDX     prNom,i     
         STA     produitA,x  ; produitA->nom = nomA;
         LDA     produitA,i  
         CALL    prprod      ; prprod(produitA);
         RET0                ; return;
produitA:.BLOCK  6           ; #prCode #prPrix #prNom
nomA:    .ASCII  "Un clavier\x00"
;
; ****** main2: Initialise et affiche un produit local (dans la pile)
main2:   SUBSP   6,i         ; #prNom #prPrix #prCode
         LDA     2,i         
         LDX     prCode,i    
         STA     produitB,sx ; produitB->code = 2;
         LDA     1395,i      
         LDX     prPrix,i    
         STA     produitB,sx ; produitB->prix = 1395;
         LDA     nomB,i      
         LDX     prNom,i     
         STA     produitB,sx ; produitB->nom = nomB;
         MOVSPA              
         ADDA    produitB,i  
         CALL    prprod      ; prprod(produitB);
         RET6                ; #prNom #prPrix #prCode
produitB:.EQUATE 0           ; #prCode #prPrix #prNom
nomB:    .ASCII  "Une souris\x00"
;
; ****** main3: Initialise et affiche un produit dans le tas
main3:   SUBSP   2,i         ; #produitC
         LDA     6,i         
         CALL    new         ; produitC = malloc(6) #prCode #prPrix #prNom
         STX     produitC,s  
         LDA     3,i         
         STA     prCode,x    ; produitC->code = 3;
         LDA     1995,i      
         STA     prPrix,x    ; procduitC->prix = 1995;
         LDA     nomC,i      
         STA     prNom,x     ; produitC->nom = nomC;
         LDA     produitC,s  
         CALL    prprod      ; prprod(produitC);
         RET2                ; #produitC
produitC:.EQUATE 0           ; #2h
nomC:    .ASCII  "Clé usb\x00"
; ****** Structure produit
prCode:  .EQUATE 0           ; #2d code du produit
prPrix:  .EQUATE 2           ; #2d prix du produit en cents
prNom:   .EQUATE 4           ; #2h nom du produit (pointeur vers chaîne)
;
; ****** prprod: Affiche un produit
; IN A=adresse du produit (#2h)
prprodA: .EQUATE 0           ; #2h paramètre A
prprodX: .EQUATE 2           ; #2h sauve X
prprdstr:.EQUATE 4           ; #2h adresse du nom du produit (pour STRO)
prprod:  SUBSP   6,i         ; #prprdstr #prprodX #prprodA
         STA     prprodA,s   ; range A
         STX     prprodX,s   ; sauve X
         LDX     prCode,i    
         DECO    prprodA,sxf ; print(prprodA->prCode)
         CHARO   ':',i       ; print(":")
         LDX     prNom,i     
         LDA     prprodA,sxf 
         STA     prprdstr,s  
         STRO    prprdstr,sf ; print(prprodA->prNom)
         CHARO   ' ',i       ; print(" ")
         LDX     prPrix,i    
         DECO    prprodA,sxf ; print(prprodA->prPrix)
         CHARO   '\n',i      ; print("\n")
         LDA     prprodA,s   ; restaure A
         LDX     prprodX,s   ; restaure X
         RET6                ; #prprdstr #prprodX #prprodA
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