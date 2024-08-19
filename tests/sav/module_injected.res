1	print 42
AModule  @1,1--8
`--AMainClassdef  @1,1--8
   `--AMainMethPropdef  @1,1--8
      `--ABlockExpr  @1,1--8
         `--ACallExpr  call=Sys.file$Sys$print(object: Object) @1,1--8
            |--AImplicitSelfExpr :Sys @1,1
            |--AQid  @1,1--5
            |  `--TId  print @1,1--5
            `--AListExprs  @1,7--8
               `--AIntegerExpr :Int @1,7--8
                  `--TInteger  42 @1,7--8
print(42)
42
