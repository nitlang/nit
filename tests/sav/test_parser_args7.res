--> 1	1
AIntegerExpr  @1,1
`--TInteger  1 @1,1
--> 1	hello world
ABlockExpr  @1,1--11
`--ACallExpr  @1,1--11
   |--AImplicitSelfExpr  @1,1
   |--AQid  @1,1--5
   |  `--TId  hello @1,1--5
   `--AListExprs  @1,7--11
      `--ACallExpr  @1,7--11
         |--AImplicitSelfExpr  @1,7
         |--AQid  @1,7--11
         |  `--TId  world @1,7--11
         `--AListExprs  @1,11
--> 1	"hello world"
AStringExpr  @1,1--13
`--TString  \"hello world\" @1,1--13
--> 1	for i in x do p
AForExpr  @1,1--15
|--TKwfor  for @1,1--3
|--AForGroup  @1,5--10
|  |--TId  i @1,5
|  |--TKwin  in @1,7--8
|  `--ACallExpr  @1,10
|     |--AImplicitSelfExpr  @1,10
|     |--AQid  @1,10
|     |  `--TId  x @1,10
|     `--AListExprs  @1,10
|--TKwdo  do @1,12--13
`--ACallExpr  @1,15
   |--AImplicitSelfExpr  @1,15
   |--AQid  @1,15
   |  `--TId  p @1,15
   `--AListExprs  @1,15
--> 1	fun foo do z
AModule  @1,1--12
`--ATopClassdef  @1,1--12
   `--AMethPropdef  @1,1--12
      |--APublicVisibility  @1,1
      |--TKwmeth  fun @1,1--3
      |--AIdMethid  @1,5--7
      |  `--TId  foo @1,5--7
      |--ASignature  @1,9
      |--TKwdo  do @1,9--10
      `--ACallExpr  @1,12
         |--AImplicitSelfExpr  @1,12
         |--AQid  @1,12
         |  `--TId  z @1,12
         `--AListExprs  @1,12
--> ... ... 1	for i in x do
AForExpr  @1,1--3,3
|--TKwfor  for @1,1--3
|--AForGroup  @1,5--10
|  |--TId  i @1,5
|  |--TKwin  in @1,7--8
|  `--ACallExpr  @1,10
|     |--AImplicitSelfExpr  @1,10
|     |--AQid  @1,10
|     |  `--TId  x @1,10
|     `--AListExprs  @1,10
|--TKwdo  do @1,12--13
2	p
`--ABlockExpr  @2,1--3,3
   |--ACallExpr  @2,1
   |  |--AImplicitSelfExpr  @2,1
   |  |--AQid  @2,1
   |  |  `--TId  p @2,1
   |  `--AListExprs  @2,1
3	end
   `--TKwend  end @3,1--3
--> ... ... ... ... 1	fun foo do
AModule  @1,1--5,3
`--ATopClassdef  @1,1--5,3
   `--AMethPropdef  @1,1--5,3
      |--APublicVisibility  @1,1
      |--TKwmeth  fun @1,1--3
      |--AIdMethid  @1,5--7
      |  `--TId  foo @1,5--7
      |--ASignature  @1,9
      |--TKwdo  do @1,9--10
2	for i in x do
      `--ABlockExpr  @2,1--5,3
         |--AForExpr  @2,1--4,3
         |  |--TKwfor  for @2,1--3
         |  |--AForGroup  @2,5--10
         |  |  |--TId  i @2,5
         |  |  |--TKwin  in @2,7--8
         |  |  `--ACallExpr  @2,10
         |  |     |--AImplicitSelfExpr  @2,10
         |  |     |--AQid  @2,10
         |  |     |  `--TId  x @2,10
         |  |     `--AListExprs  @2,10
         |  |--TKwdo  do @2,12--13
3	p
         |  `--ABlockExpr  @3,1--4,3
         |     |--ACallExpr  @3,1
         |     |  |--AImplicitSelfExpr  @3,1
         |     |  |--AQid  @3,1
         |     |  |  `--TId  p @3,1
         |     |  `--AListExprs  @3,1
4	end
         |     `--TKwend  end @4,1--3
5	end
         `--TKwend  end @5,1--3
--> ... 	fun [0;31mfun[0m fun fu
	    ^: Syntax Error: unexpected keyword 'fun'.
--> 	%[0;31m$[0m&^*
	 ^: Syntax Error: unknown token `$`.
--> 