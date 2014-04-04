; Ce programme prend 5 valeurs entières saisies par l'utilisateur
; les stocke dans un tableau
; trie le tableau
; affiche le contenu du tableau trié

; cas limites :
; le programme retourne une erreur si l'utilisateur ne saisie pas 5 entiers
; Alexandre Terrasa (c) 2012

; init du programme
         LDA     len, i      ; A = len
         SUBA    2, i        ; A --
         STA     maxlen, d   ; maxlen = A

; saisie du tableau
         LDX     0, i        ; X = 0
saisie:  DECI    tab, x      ; do { tab[X] = getInt()
         ADDX    2, i        ;    X++
         CPX     len, i
         BRLT    saisie      ; } while (X < len)

; trie du tableau
trie:    LDA     1, i        ; do { A = 1
         STA     flag, d     ;    flag = A // init le flag à false

; boucle interne
         LDX     0, i        ;    do { X = 0
loop:    LDA     tab, x      ;        A = tab[X]

         ; comparer les valeurs
         ADDX    2, i        ;        X ++
         CPA     tab, x
         BRLE    next        ;        if (A > tab[X]) {
                             ;            // echanger les valeurs
         STA     tmp, d      ;            tmp = A
         LDA     tab, x      ;            A = tab[x]
         SUBX    2, i        ;            X --
         STA     tab, x      ;            tab[x] = A
         ADDX    2, i        ;            X ++
         LDA     tmp, d      ;            A = tmp
         STA     tab, x      ;            tab[x] = A
                             ;            // passer flag à 0
         LDA     0, i        ;            A = 0
         STA     flag, d     ;            flag = A
                             ;        }

next:    CPX     maxlen, d
         BRLT    loop        ;    } while(X < maxlen)

         LDA     flag, d     ;    A = flag
         CPA     0, i
         BREQ    trie        ; } while(flag == 0)

; affichage le tableau
         LDX     0, i        ; X = 0
aff:     DECO    tab, x      ; do { print (tab[X])
         ADDX    2, i        ;    X++
         CPX     len, i
         BRLT    aff         ; } while (X < len)

         STOP

tab:     .BLOCK  10          ; #2d5a tableau d'entiers
len:     .EQUATE 10          ; taille du tableau
maxlen:  .BLOCK  2           ; #2d case max - 1
flag:    .BLOCK  2           ; #2d flag 'aucun_echange'
tmp:     .BLOCK  2           ; #2d variable temporaire pour les permutations

         .END
