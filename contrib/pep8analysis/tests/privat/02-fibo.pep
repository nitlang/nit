;    Trouve et imprime le premier terme de la suite de Fibonacci
;    supérieur à 500.
;       Ph. Gabrini    septembre 2005
;
		STA dernier,d
Fibo:   LDA     somme,d    ;
Boucle: CPA     500,i      ; while(somme < 500)
        BRGE    Affiche    ; {
        LDA     dernier,d  ;
        STA     avant,d    ;   avant = dernier;
        LDA     somme,d    ;
        STA     dernier,d  ;   dernier = somme;
        ADDA    avant,d    ;
        STA     somme,d    ;   somme = avant + dernier;
        BR      Boucle     ; }//while
Affiche:STRO    msg1,d     ; cout << "Premier ... "
        DECO    somme,d    ;      << somme
        CHARO   '\n',i     ;      << endl;
        STOP
avant:  .WORD  0        ; int avant = 0;
dernier:.WORD  1        ; int dernier = 1;
somme:  .WORD  1        ; int somme = 1;  
msg1:   .ASCII  "Premier terme de la suite de Fibonacci > 500: \x00"
        .END
