; Semaine 7
; Programme qui lit une chaîne de caractère (et l'affiche deux fois)
; Jean Privat (c) 2010
         LDX     0,i
         STX     il,d
in_loop:         CPX     nblines,i 
         BRGE    afficher ; for(il=0;il<nblines;il++) {
         LDA     cursor,d    
         LDX     size,d      
         CALL    STRI        ;   X = STRI(cursor,size);
         CPX     0,i
         BREQ    afficher    ;   if (X==0) break;
         ADDX    1,i
         STX     used,d      ;   used = X + 1; 
         ADDX    cursor,d
         STX     cursor,d    ;   cursor += used;
         LDX     size,d
         SUBX    used,d
         STX     size,d      ;   size -= used;
         LDX     il,d
         ASLX
         STA     lines,x     ;   lines[il*2] = A; // old cursor
         ASRX
         ADDX    1,i
         STX     il,d        
         BR in_loop          ; } // fin for il
afficher: LDX    il,d
         SUBX 1,i
         ASLX
aff_loop:         BRLT fin ; for(X=(il-1)*2; X<=0; X-=2) {
         LDA lines,x
         STA cursor,d
         STRO cursor,n   
         CHARO '\n',i ;   print(lines[X] + "\n");
         SUBX 2,i 
         BR aff_loop ; } // fin for 
fin: STOP ; exit();

         STOP                ; exit();
;
buffer:  .BLOCK  200         ; Tampon pour les chaînes
cursor:  .ADDRSS buffer      ; Pointeur vers la partie libre du tampon
size:    .WORD   200         ; Nombre d'octets libres dans le tampon
used:    .BLOCK  2           ; Nombre d'octets utilisés par la dernière lecture
;
lines:   .BLOCK  20          ; Tableau de lignes
nblines: .EQUATE 20          ; Nombre maximum de lignes
il:      .BLOCK  2           ; #2d Index de boucle pour parcourir 'lines'
;
; STRI: lit une ligne dans un tampon et place '\x00' à la fin
; In:  A=Adresse du tampon
;      X=Taille du tampon en octet
; Out: A=Adresse du tampon (inchangé)
;      X=Nombre de caractères lu (ou offset du '\x00')
; Err: Avorte si le tampon n'est pas assez grand pour
;      stocker la ligne et le '\0' final
STRI:    STA     striPtr,d   ; sauve A;
         ADDX    striPtr,d   
         STX     striPtr2,d  ; striPtr2 = A+X;
         LDX     striPtr,d   ; X = striPtr;
striLoop:CPX     striPtr2,d  ; while(true) {
         BRGE    striErr     ;   if(X>=striPtr2) throws new Error();
         CHARI   0,x         ;   *X = getChar();
         LDA     0,i         
         LDBYTEA 0,x         
         CPA     '\n',i      
         BREQ    striFin     
         CPA     '\x00',i    
         BREQ    striFin     ;   if(*X=='\n' || *X=='\x00') break;
         ADDX    1,i         ;   X++;
         BR      striLoop    ; } // fin boucle infinie
striFin: LDBYTEA 0,i         
         STBYTEA 0,x         ; *X='\x00';
         SUBX    striPtr,d   ; X = X-striPtr
         LDA     striPtr,d   ; restaure A;
         RET0                ; return;
striErr: STRO    striEMsg,d  
         STOP                
striEMsg:.ASCII  "STRI erreur: débordement de capacité\n\x00"
striPtr: .BLOCK  2           ; #2d adresse de début du tampon
striPtr2:.BLOCK  2           ; #2d adresse de fin de tampon (à ne pas écrire)
         .END                  
