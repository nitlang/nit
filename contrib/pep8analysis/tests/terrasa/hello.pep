; Hello World en PEP8
		 
         stro msg, d              
         stop                     ; Arrete l'execution ici pour eviter de traiter les variables comme des instructions

msg:     .ASCII "Hello World\x00" ; Le \x00 represente le caractere null

         .END

Tout ce qui se trouve apres le .END est considere comme du commentaire.