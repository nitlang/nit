1	var toto: Toto = new Toto.toto(toto+toto)
Start  @1,1--42
|--AModule  @1,1--41
|  `--AMainClassdef  @1,1--41
|     `--AMainMethPropdef  @1,1--41
|        `--ABlockExpr  @1,1--41
|           `--AVardeclExpr  @1,1--41
|              |--TKwvar  var @1,1--3
|              |--TId  toto @1,5--8
|              |--AType  @1,11--14
|              |  `--AQclassid  @1,11--14
|              |     `--TClassid  Toto @1,11--14
|              |--TAssign  = @1,16
|              `--ANewExpr  @1,18--41
|                 |--TKwnew  new @1,18--20
|                 |--AType  @1,22--25
|                 |  `--AQclassid  @1,22--25
|                 |     `--TClassid  Toto @1,22--25
|                 |--AQid  @1,27--30
|                 |  `--TId  toto @1,27--30
|                 `--AParExprs  @1,31--41
|                    |--TOpar  ( @1,31
|                    |--APlusExpr  @1,32--40
|                    |  |--ACallExpr  @1,32--35
|                    |  |  |--AImplicitSelfExpr  @1,32
|                    |  |  |--AQid  @1,32--35
|                    |  |  |  `--TId  toto @1,32--35
|                    |  |  `--AListExprs  @1,35
|                    |  |--TPlus  + @1,36
|                    |  `--ACallExpr  @1,37--40
|                    |     |--AImplicitSelfExpr  @1,37
|                    |     |--AQid  @1,37--40
|                    |     |  `--TId  toto @1,37--40
|                    |     `--AListExprs  @1,40
|                    `--TCpar  ) @1,41
`--EOF   @1,42
