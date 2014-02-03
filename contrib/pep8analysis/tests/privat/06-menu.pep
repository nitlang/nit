; Semaine 6
; Programme qui affiche un menu
; Jean Privat (C) 2010
menu:    STRO    menuTxt,d   ; print(menu)
         DECI    opt,d       ; opt = readNumber()
         LDX     opt,d       
         CPX     1,i         
         BRLT    err         
         CPX     5,i         
         BRGT    err         ; if (opt<1 || opt>5) throws new Error();
         SUBX    1,i         
         ASLX                
         BR      case,x      ; switch(opt) { // X = (opt-1)*2
case:    .ADDRSS cas1        
         .ADDRSS cas2        
         .ADDRSS cas3        
         .ADDRSS cas4        
cas1:    STRO    cas1Msg,d   ; case 1: ...
         BR      menu        ; break;
cas2:    STRO    cas2Msg,d   ; case 2: ...
         BR      menu        ; break;
cas3:    STRO    cas3Msg,d   ; case 3: ...
         BR      menu        ; break;
cas4:    STOP                ; case 4: ...
err:     STRO    errMsg,d    
         BR      menu        
menuTxt: .ASCII  "******************\n"
         .ASCII  "*     M E N U    *\n"
         .ASCII  "* [1]-raz        *\n"
         .ASCII  "* [2]-ajouter    *\n"
         .ASCII  "* [3]-soustraire *\n"
         .ASCII  "* [4]-quitter    *\n"
         .ASCII  "******************\n"
         .ASCII  "Votre choix : \x00"
opt:     .BLOCK  2           
errMsg:  .ASCII  "Erreur: Option invalide\n\x00"
cas1Msg: .ASCII  "RAZ\n\x00" 
cas2Msg: .ASCII  "...\n\x00" 
cas3Msg: .ASCII  "...\n\x00" 
         .END                  