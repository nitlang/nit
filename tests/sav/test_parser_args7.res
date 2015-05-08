--> ADecIntExpr 1,1
  TNumber "1" 1,1
--> ABlockExpr 1,1--11
  ACallExpr 1,1--11
    AImplicitSelfExpr 1,1
    TId "hello" 1,1--5
    AListExprs 1,7--11
      ACallExpr 1,7--11
        AImplicitSelfExpr 1,7
        TId "world" 1,7--11
        AListExprs 1,11
--> AStringExpr 1,1--13
  TString "\"hello world\"" 1,1--13
--> AForExpr 1,1--15
  TKwfor "for" 1,1--3
  TId "i" 1,5
  TKwin "in" 1,7--8
  ACallExpr 1,10
    AImplicitSelfExpr 1,10
    TId "x" 1,10
    AListExprs 1,10
  TKwdo "do" 1,12--13
  ACallExpr 1,15
    AImplicitSelfExpr 1,15
    TId "p" 1,15
    AListExprs 1,15
--> AModule 1,1--12
  ATopClassdef 1,1--12
    AMethPropdef 1,1--12
      APublicVisibility 1,1
      TKwmeth "fun" 1,1--3
      AIdMethid 1,5--7
        TId "foo" 1,5--7
      ASignature 1,9
      TKwdo "do" 1,9--10
      ACallExpr 1,12
        AImplicitSelfExpr 1,12
        TId "z" 1,12
        AListExprs 1,12
--> ... ... AForExpr 1,1--3,3
  TKwfor "for" 1,1--3
  TId "i" 1,5
  TKwin "in" 1,7--8
  ACallExpr 1,10
    AImplicitSelfExpr 1,10
    TId "x" 1,10
    AListExprs 1,10
  TKwdo "do" 1,12--13
  ABlockExpr 2,1--3,3
    ACallExpr 2,1
      AImplicitSelfExpr 2,1
      TId "p" 2,1
      AListExprs 2,1
    TKwend "end" 3,1--3
--> ... ... ... ... AModule 1,1--5,3
  ATopClassdef 1,1--5,3
    AMethPropdef 1,1--5,3
      APublicVisibility 1,1
      TKwmeth "fun" 1,1--3
      AIdMethid 1,5--7
        TId "foo" 1,5--7
      ASignature 1,9
      TKwdo "do" 1,9--10
      ABlockExpr 2,1--5,3
        AForExpr 2,1--4,3
          TKwfor "for" 2,1--3
          TId "i" 2,5
          TKwin "in" 2,7--8
          ACallExpr 2,10
            AImplicitSelfExpr 2,10
            TId "x" 2,10
            AListExprs 2,10
          TKwdo "do" 2,12--13
          ABlockExpr 3,1--4,3
            ACallExpr 3,1
              AImplicitSelfExpr 3,1
              TId "p" 3,1
              AListExprs 3,1
            TKwend "end" 4,1--3
        TKwend "end" 5,1--3
--> ... 	[0;31mfun[0m fun fun fu
	^: Syntax Error: unexpected keyword 'fun'.
--> 	%[0;31m$[0m&^*
	 ^: Syntax Error: unknown token `$`.
--> 