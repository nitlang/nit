17	# Program used to test the NIT parser
Start  @../src/test_parser.nit:17,1--139,1
|--AModule  @../src/test_parser.nit:17,1--138,3
|  |--AModuledecl  @../src/test_parser.nit:17,1--18,18
|  |  |--ADoc  @../src/test_parser.nit:17,1--18,0
|  |  |  `--TComment  # Program used to test the NIT parser\n @../src/test_parser.nit:17,1--18,0
18	module test_parser
|  |  |--APublicVisibility  @../src/test_parser.nit:18,1
|  |  |--TKwmodule  module @../src/test_parser.nit:18,1--6
|  |  `--AModuleName  @../src/test_parser.nit:18,8--18
|  |     `--TId  test_parser @../src/test_parser.nit:18,8--18
19	
import parser
20	import parser
|  |--AStdImport  @../src/test_parser.nit:20,1--13
|  |  |--APublicVisibility  @../src/test_parser.nit:20,1
|  |  |--TKwimport  import @../src/test_parser.nit:20,1--6
|  |  `--AModuleName  @../src/test_parser.nit:20,8--13
|  |     `--TId  parser @../src/test_parser.nit:20,8--13
21	import parser_util
|  |--AStdImport  @../src/test_parser.nit:21,1--18
|  |  |--APublicVisibility  @../src/test_parser.nit:21,1
|  |  |--TKwimport  import @../src/test_parser.nit:21,1--6
|  |  `--AModuleName  @../src/test_parser.nit:21,8--18
|  |     `--TId  parser_util @../src/test_parser.nit:21,8--18
22	import astutil
|  |--AStdImport  @../src/test_parser.nit:22,1--14
|  |  |--APublicVisibility  @../src/test_parser.nit:22,1
|  |  |--TKwimport  import @../src/test_parser.nit:22,1--6
|  |  `--AModuleName  @../src/test_parser.nit:22,8--14
|  |     `--TId  astutil @../src/test_parser.nit:22,8--14
23	
var no_print = false
24	var no_print = false
|  `--AMainClassdef  @../src/test_parser.nit:24,1--138,3
|     `--AMainMethPropdef  @../src/test_parser.nit:24,1--138,3
|        `--ABlockExpr  @../src/test_parser.nit:24,1--138,3
|           |--AVardeclExpr  @../src/test_parser.nit:24,1--20
|           |  |--TKwvar  var @../src/test_parser.nit:24,1--3
|           |  |--TId  no_print @../src/test_parser.nit:24,5--12
|           |  |--TAssign  = @../src/test_parser.nit:24,14
|           |  `--AFalseExpr  @../src/test_parser.nit:24,16--20
|           |     `--TKwfalse  false @../src/test_parser.nit:24,16--20
25	var only_lexer = false
|           |--AVardeclExpr  @../src/test_parser.nit:25,1--22
|           |  |--TKwvar  var @../src/test_parser.nit:25,1--3
|           |  |--TId  only_lexer @../src/test_parser.nit:25,5--14
|           |  |--TAssign  = @../src/test_parser.nit:25,16
|           |  `--AFalseExpr  @../src/test_parser.nit:25,18--22
|           |     `--TKwfalse  false @../src/test_parser.nit:25,18--22
26	var need_help = false
|           |--AVardeclExpr  @../src/test_parser.nit:26,1--21
|           |  |--TKwvar  var @../src/test_parser.nit:26,1--3
|           |  |--TId  need_help @../src/test_parser.nit:26,5--13
|           |  |--TAssign  = @../src/test_parser.nit:26,15
|           |  `--AFalseExpr  @../src/test_parser.nit:26,17--21
|           |     `--TKwfalse  false @../src/test_parser.nit:26,17--21
27	var no_file = false
|           |--AVardeclExpr  @../src/test_parser.nit:27,1--19
|           |  |--TKwvar  var @../src/test_parser.nit:27,1--3
|           |  |--TId  no_file @../src/test_parser.nit:27,5--11
|           |  |--TAssign  = @../src/test_parser.nit:27,13
|           |  `--AFalseExpr  @../src/test_parser.nit:27,15--19
|           |     `--TKwfalse  false @../src/test_parser.nit:27,15--19
28	var interactive = false
|           |--AVardeclExpr  @../src/test_parser.nit:28,1--23
|           |  |--TKwvar  var @../src/test_parser.nit:28,1--3
|           |  |--TId  interactive @../src/test_parser.nit:28,5--15
|           |  |--TAssign  = @../src/test_parser.nit:28,17
|           |  `--AFalseExpr  @../src/test_parser.nit:28,19--23
|           |     `--TKwfalse  false @../src/test_parser.nit:28,19--23
29	var xml = false
|           |--AVardeclExpr  @../src/test_parser.nit:29,1--15
|           |  |--TKwvar  var @../src/test_parser.nit:29,1--3
|           |  |--TId  xml @../src/test_parser.nit:29,5--7
|           |  |--TAssign  = @../src/test_parser.nit:29,9
|           |  `--AFalseExpr  @../src/test_parser.nit:29,11--15
|           |     `--TKwfalse  false @../src/test_parser.nit:29,11--15
30	
while not args.is_empty and args.first.chars.first == '-' do
31	while not args.is_empty and args.first.chars.first == '-' do
|           |--AWhileExpr  @../src/test_parser.nit:31,1--51,3
|           |  |--TKwwhile  while @../src/test_parser.nit:31,1--5
|           |  |--AAndExpr  @../src/test_parser.nit:31,7--57
|           |  |  |--ANotExpr  @../src/test_parser.nit:31,7--23
|           |  |  |  |--TKwnot  not @../src/test_parser.nit:31,7--9
|           |  |  |  `--ACallExpr  @../src/test_parser.nit:31,11--23
|           |  |  |     |--ACallExpr  @../src/test_parser.nit:31,11--14
|           |  |  |     |  |--AImplicitSelfExpr  @../src/test_parser.nit:31,11
|           |  |  |     |  |--AQid  @../src/test_parser.nit:31,11--14
|           |  |  |     |  |  `--TId  args @../src/test_parser.nit:31,11--14
|           |  |  |     |  `--AListExprs  @../src/test_parser.nit:31,14
|           |  |  |     |--AQid  @../src/test_parser.nit:31,16--23
|           |  |  |     |  `--TId  is_empty @../src/test_parser.nit:31,16--23
|           |  |  |     `--AListExprs  @../src/test_parser.nit:31,23
|           |  |  |--TKwand  and @../src/test_parser.nit:31,25--27
|           |  |  `--AEqExpr  @../src/test_parser.nit:31,29--57
|           |  |     |--ACallExpr  @../src/test_parser.nit:31,29--50
|           |  |     |  |--ACallExpr  @../src/test_parser.nit:31,29--44
|           |  |     |  |  |--ACallExpr  @../src/test_parser.nit:31,29--38
|           |  |     |  |  |  |--ACallExpr  @../src/test_parser.nit:31,29--32
|           |  |     |  |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:31,29
|           |  |     |  |  |  |  |--AQid  @../src/test_parser.nit:31,29--32
|           |  |     |  |  |  |  |  `--TId  args @../src/test_parser.nit:31,29--32
|           |  |     |  |  |  |  `--AListExprs  @../src/test_parser.nit:31,32
|           |  |     |  |  |  |--AQid  @../src/test_parser.nit:31,34--38
|           |  |     |  |  |  |  `--TId  first @../src/test_parser.nit:31,34--38
|           |  |     |  |  |  `--AListExprs  @../src/test_parser.nit:31,38
|           |  |     |  |  |--AQid  @../src/test_parser.nit:31,40--44
|           |  |     |  |  |  `--TId  chars @../src/test_parser.nit:31,40--44
|           |  |     |  |  `--AListExprs  @../src/test_parser.nit:31,44
|           |  |     |  |--AQid  @../src/test_parser.nit:31,46--50
|           |  |     |  |  `--TId  first @../src/test_parser.nit:31,46--50
|           |  |     |  `--AListExprs  @../src/test_parser.nit:31,50
|           |  |     |--TEq  == @../src/test_parser.nit:31,52--53
|           |  |     `--ACharExpr  @../src/test_parser.nit:31,55--57
|           |  |        `--TChar  \'-\' @../src/test_parser.nit:31,55--57
|           |  |--TKwdo  do @../src/test_parser.nit:31,59--60
32		if args.first == "-n" then
|           |  `--ABlockExpr  @../src/test_parser.nit:32,2--51,3
|           |     |--AIfExpr  @../src/test_parser.nit:32,2--49,4
|           |     |  |--TKwif  if @../src/test_parser.nit:32,2--3
|           |     |  |--AEqExpr  @../src/test_parser.nit:32,5--22
|           |     |  |  |--ACallExpr  @../src/test_parser.nit:32,5--14
|           |     |  |  |  |--ACallExpr  @../src/test_parser.nit:32,5--8
|           |     |  |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:32,5
|           |     |  |  |  |  |--AQid  @../src/test_parser.nit:32,5--8
|           |     |  |  |  |  |  `--TId  args @../src/test_parser.nit:32,5--8
|           |     |  |  |  |  `--AListExprs  @../src/test_parser.nit:32,8
|           |     |  |  |  |--AQid  @../src/test_parser.nit:32,10--14
|           |     |  |  |  |  `--TId  first @../src/test_parser.nit:32,10--14
|           |     |  |  |  `--AListExprs  @../src/test_parser.nit:32,14
|           |     |  |  |--TEq  == @../src/test_parser.nit:32,16--17
|           |     |  |  `--AStringExpr  @../src/test_parser.nit:32,19--22
|           |     |  |     `--TString  \"-n\" @../src/test_parser.nit:32,19--22
|           |     |  |--TKwthen  then @../src/test_parser.nit:32,24--27
33			no_print = true
|           |     |  |--ABlockExpr  @../src/test_parser.nit:33,3--17
|           |     |  |  `--ACallAssignExpr  @../src/test_parser.nit:33,3--17
|           |     |  |     |--AImplicitSelfExpr  @../src/test_parser.nit:33,3
|           |     |  |     |--AQid  @../src/test_parser.nit:33,3--10
|           |     |  |     |  `--TId  no_print @../src/test_parser.nit:33,3--10
|           |     |  |     |--AListExprs  @../src/test_parser.nit:33,12
|           |     |  |     |--TAssign  = @../src/test_parser.nit:33,12
|           |     |  |     `--ATrueExpr  @../src/test_parser.nit:33,14--17
|           |     |  |        `--TKwtrue  true @../src/test_parser.nit:33,14--17
34		else if args.first == "-l" then
|           |     |  |--TKwelse  else @../src/test_parser.nit:34,2--5
|           |     |  `--AIfExpr  @../src/test_parser.nit:34,7--49,4
|           |     |     |--TKwif  if @../src/test_parser.nit:34,7--8
|           |     |     |--AEqExpr  @../src/test_parser.nit:34,10--27
|           |     |     |  |--ACallExpr  @../src/test_parser.nit:34,10--19
|           |     |     |  |  |--ACallExpr  @../src/test_parser.nit:34,10--13
|           |     |     |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:34,10
|           |     |     |  |  |  |--AQid  @../src/test_parser.nit:34,10--13
|           |     |     |  |  |  |  `--TId  args @../src/test_parser.nit:34,10--13
|           |     |     |  |  |  `--AListExprs  @../src/test_parser.nit:34,13
|           |     |     |  |  |--AQid  @../src/test_parser.nit:34,15--19
|           |     |     |  |  |  `--TId  first @../src/test_parser.nit:34,15--19
|           |     |     |  |  `--AListExprs  @../src/test_parser.nit:34,19
|           |     |     |  |--TEq  == @../src/test_parser.nit:34,21--22
|           |     |     |  `--AStringExpr  @../src/test_parser.nit:34,24--27
|           |     |     |     `--TString  \"-l\" @../src/test_parser.nit:34,24--27
|           |     |     |--TKwthen  then @../src/test_parser.nit:34,29--32
35			only_lexer = true
|           |     |     |--ABlockExpr  @../src/test_parser.nit:35,3--19
|           |     |     |  `--ACallAssignExpr  @../src/test_parser.nit:35,3--19
|           |     |     |     |--AImplicitSelfExpr  @../src/test_parser.nit:35,3
|           |     |     |     |--AQid  @../src/test_parser.nit:35,3--12
|           |     |     |     |  `--TId  only_lexer @../src/test_parser.nit:35,3--12
|           |     |     |     |--AListExprs  @../src/test_parser.nit:35,14
|           |     |     |     |--TAssign  = @../src/test_parser.nit:35,14
|           |     |     |     `--ATrueExpr  @../src/test_parser.nit:35,16--19
|           |     |     |        `--TKwtrue  true @../src/test_parser.nit:35,16--19
36		else if args.first == "-p" then
|           |     |     |--TKwelse  else @../src/test_parser.nit:36,2--5
|           |     |     `--AIfExpr  @../src/test_parser.nit:36,7--49,4
|           |     |        |--TKwif  if @../src/test_parser.nit:36,7--8
|           |     |        |--AEqExpr  @../src/test_parser.nit:36,10--27
|           |     |        |  |--ACallExpr  @../src/test_parser.nit:36,10--19
|           |     |        |  |  |--ACallExpr  @../src/test_parser.nit:36,10--13
|           |     |        |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:36,10
|           |     |        |  |  |  |--AQid  @../src/test_parser.nit:36,10--13
|           |     |        |  |  |  |  `--TId  args @../src/test_parser.nit:36,10--13
|           |     |        |  |  |  `--AListExprs  @../src/test_parser.nit:36,13
|           |     |        |  |  |--AQid  @../src/test_parser.nit:36,15--19
|           |     |        |  |  |  `--TId  first @../src/test_parser.nit:36,15--19
|           |     |        |  |  `--AListExprs  @../src/test_parser.nit:36,19
|           |     |        |  |--TEq  == @../src/test_parser.nit:36,21--22
|           |     |        |  `--AStringExpr  @../src/test_parser.nit:36,24--27
|           |     |        |     `--TString  \"-p\" @../src/test_parser.nit:36,24--27
|           |     |        |--TKwthen  then @../src/test_parser.nit:36,29--32
37			only_lexer = false
|           |     |        |--ABlockExpr  @../src/test_parser.nit:37,3--20
|           |     |        |  `--ACallAssignExpr  @../src/test_parser.nit:37,3--20
|           |     |        |     |--AImplicitSelfExpr  @../src/test_parser.nit:37,3
|           |     |        |     |--AQid  @../src/test_parser.nit:37,3--12
|           |     |        |     |  `--TId  only_lexer @../src/test_parser.nit:37,3--12
|           |     |        |     |--AListExprs  @../src/test_parser.nit:37,14
|           |     |        |     |--TAssign  = @../src/test_parser.nit:37,14
|           |     |        |     `--AFalseExpr  @../src/test_parser.nit:37,16--20
|           |     |        |        `--TKwfalse  false @../src/test_parser.nit:37,16--20
38		else if args.first == "-x" then
|           |     |        |--TKwelse  else @../src/test_parser.nit:38,2--5
|           |     |        `--AIfExpr  @../src/test_parser.nit:38,7--49,4
|           |     |           |--TKwif  if @../src/test_parser.nit:38,7--8
|           |     |           |--AEqExpr  @../src/test_parser.nit:38,10--27
|           |     |           |  |--ACallExpr  @../src/test_parser.nit:38,10--19
|           |     |           |  |  |--ACallExpr  @../src/test_parser.nit:38,10--13
|           |     |           |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:38,10
|           |     |           |  |  |  |--AQid  @../src/test_parser.nit:38,10--13
|           |     |           |  |  |  |  `--TId  args @../src/test_parser.nit:38,10--13
|           |     |           |  |  |  `--AListExprs  @../src/test_parser.nit:38,13
|           |     |           |  |  |--AQid  @../src/test_parser.nit:38,15--19
|           |     |           |  |  |  `--TId  first @../src/test_parser.nit:38,15--19
|           |     |           |  |  `--AListExprs  @../src/test_parser.nit:38,19
|           |     |           |  |--TEq  == @../src/test_parser.nit:38,21--22
|           |     |           |  `--AStringExpr  @../src/test_parser.nit:38,24--27
|           |     |           |     `--TString  \"-x\" @../src/test_parser.nit:38,24--27
|           |     |           |--TKwthen  then @../src/test_parser.nit:38,29--32
39			xml = true
|           |     |           |--ABlockExpr  @../src/test_parser.nit:39,3--12
|           |     |           |  `--ACallAssignExpr  @../src/test_parser.nit:39,3--12
|           |     |           |     |--AImplicitSelfExpr  @../src/test_parser.nit:39,3
|           |     |           |     |--AQid  @../src/test_parser.nit:39,3--5
|           |     |           |     |  `--TId  xml @../src/test_parser.nit:39,3--5
|           |     |           |     |--AListExprs  @../src/test_parser.nit:39,7
|           |     |           |     |--TAssign  = @../src/test_parser.nit:39,7
|           |     |           |     `--ATrueExpr  @../src/test_parser.nit:39,9--12
|           |     |           |        `--TKwtrue  true @../src/test_parser.nit:39,9--12
40		else if args.first == "-e" then
|           |     |           |--TKwelse  else @../src/test_parser.nit:40,2--5
|           |     |           `--AIfExpr  @../src/test_parser.nit:40,7--49,4
|           |     |              |--TKwif  if @../src/test_parser.nit:40,7--8
|           |     |              |--AEqExpr  @../src/test_parser.nit:40,10--27
|           |     |              |  |--ACallExpr  @../src/test_parser.nit:40,10--19
|           |     |              |  |  |--ACallExpr  @../src/test_parser.nit:40,10--13
|           |     |              |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:40,10
|           |     |              |  |  |  |--AQid  @../src/test_parser.nit:40,10--13
|           |     |              |  |  |  |  `--TId  args @../src/test_parser.nit:40,10--13
|           |     |              |  |  |  `--AListExprs  @../src/test_parser.nit:40,13
|           |     |              |  |  |--AQid  @../src/test_parser.nit:40,15--19
|           |     |              |  |  |  `--TId  first @../src/test_parser.nit:40,15--19
|           |     |              |  |  `--AListExprs  @../src/test_parser.nit:40,19
|           |     |              |  |--TEq  == @../src/test_parser.nit:40,21--22
|           |     |              |  `--AStringExpr  @../src/test_parser.nit:40,24--27
|           |     |              |     `--TString  \"-e\" @../src/test_parser.nit:40,24--27
|           |     |              |--TKwthen  then @../src/test_parser.nit:40,29--32
41			no_file = true
|           |     |              |--ABlockExpr  @../src/test_parser.nit:41,3--16
|           |     |              |  `--ACallAssignExpr  @../src/test_parser.nit:41,3--16
|           |     |              |     |--AImplicitSelfExpr  @../src/test_parser.nit:41,3
|           |     |              |     |--AQid  @../src/test_parser.nit:41,3--9
|           |     |              |     |  `--TId  no_file @../src/test_parser.nit:41,3--9
|           |     |              |     |--AListExprs  @../src/test_parser.nit:41,11
|           |     |              |     |--TAssign  = @../src/test_parser.nit:41,11
|           |     |              |     `--ATrueExpr  @../src/test_parser.nit:41,13--16
|           |     |              |        `--TKwtrue  true @../src/test_parser.nit:41,13--16
42		else if args.first == "-i" then
|           |     |              |--TKwelse  else @../src/test_parser.nit:42,2--5
|           |     |              `--AIfExpr  @../src/test_parser.nit:42,7--49,4
|           |     |                 |--TKwif  if @../src/test_parser.nit:42,7--8
|           |     |                 |--AEqExpr  @../src/test_parser.nit:42,10--27
|           |     |                 |  |--ACallExpr  @../src/test_parser.nit:42,10--19
|           |     |                 |  |  |--ACallExpr  @../src/test_parser.nit:42,10--13
|           |     |                 |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:42,10
|           |     |                 |  |  |  |--AQid  @../src/test_parser.nit:42,10--13
|           |     |                 |  |  |  |  `--TId  args @../src/test_parser.nit:42,10--13
|           |     |                 |  |  |  `--AListExprs  @../src/test_parser.nit:42,13
|           |     |                 |  |  |--AQid  @../src/test_parser.nit:42,15--19
|           |     |                 |  |  |  `--TId  first @../src/test_parser.nit:42,15--19
|           |     |                 |  |  `--AListExprs  @../src/test_parser.nit:42,19
|           |     |                 |  |--TEq  == @../src/test_parser.nit:42,21--22
|           |     |                 |  `--AStringExpr  @../src/test_parser.nit:42,24--27
|           |     |                 |     `--TString  \"-i\" @../src/test_parser.nit:42,24--27
|           |     |                 |--TKwthen  then @../src/test_parser.nit:42,29--32
43			interactive = true
|           |     |                 |--ABlockExpr  @../src/test_parser.nit:43,3--20
|           |     |                 |  `--ACallAssignExpr  @../src/test_parser.nit:43,3--20
|           |     |                 |     |--AImplicitSelfExpr  @../src/test_parser.nit:43,3
|           |     |                 |     |--AQid  @../src/test_parser.nit:43,3--13
|           |     |                 |     |  `--TId  interactive @../src/test_parser.nit:43,3--13
|           |     |                 |     |--AListExprs  @../src/test_parser.nit:43,15
|           |     |                 |     |--TAssign  = @../src/test_parser.nit:43,15
|           |     |                 |     `--ATrueExpr  @../src/test_parser.nit:43,17--20
|           |     |                 |        `--TKwtrue  true @../src/test_parser.nit:43,17--20
44		else if args.first == "-h" or args.first == "-?" then
|           |     |                 |--TKwelse  else @../src/test_parser.nit:44,2--5
|           |     |                 `--AIfExpr  @../src/test_parser.nit:44,7--49,4
|           |     |                    |--TKwif  if @../src/test_parser.nit:44,7--8
|           |     |                    |--AOrExpr  @../src/test_parser.nit:44,10--49
|           |     |                    |  |--AEqExpr  @../src/test_parser.nit:44,10--27
|           |     |                    |  |  |--ACallExpr  @../src/test_parser.nit:44,10--19
|           |     |                    |  |  |  |--ACallExpr  @../src/test_parser.nit:44,10--13
|           |     |                    |  |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:44,10
|           |     |                    |  |  |  |  |--AQid  @../src/test_parser.nit:44,10--13
|           |     |                    |  |  |  |  |  `--TId  args @../src/test_parser.nit:44,10--13
|           |     |                    |  |  |  |  `--AListExprs  @../src/test_parser.nit:44,13
|           |     |                    |  |  |  |--AQid  @../src/test_parser.nit:44,15--19
|           |     |                    |  |  |  |  `--TId  first @../src/test_parser.nit:44,15--19
|           |     |                    |  |  |  `--AListExprs  @../src/test_parser.nit:44,19
|           |     |                    |  |  |--TEq  == @../src/test_parser.nit:44,21--22
|           |     |                    |  |  `--AStringExpr  @../src/test_parser.nit:44,24--27
|           |     |                    |  |     `--TString  \"-h\" @../src/test_parser.nit:44,24--27
|           |     |                    |  |--TKwor  or @../src/test_parser.nit:44,29--30
|           |     |                    |  `--AEqExpr  @../src/test_parser.nit:44,32--49
|           |     |                    |     |--ACallExpr  @../src/test_parser.nit:44,32--41
|           |     |                    |     |  |--ACallExpr  @../src/test_parser.nit:44,32--35
|           |     |                    |     |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:44,32
|           |     |                    |     |  |  |--AQid  @../src/test_parser.nit:44,32--35
|           |     |                    |     |  |  |  `--TId  args @../src/test_parser.nit:44,32--35
|           |     |                    |     |  |  `--AListExprs  @../src/test_parser.nit:44,35
|           |     |                    |     |  |--AQid  @../src/test_parser.nit:44,37--41
|           |     |                    |     |  |  `--TId  first @../src/test_parser.nit:44,37--41
|           |     |                    |     |  `--AListExprs  @../src/test_parser.nit:44,41
|           |     |                    |     |--TEq  == @../src/test_parser.nit:44,43--44
|           |     |                    |     `--AStringExpr  @../src/test_parser.nit:44,46--49
|           |     |                    |        `--TString  \"-?\" @../src/test_parser.nit:44,46--49
|           |     |                    |--TKwthen  then @../src/test_parser.nit:44,51--54
45			need_help = true
|           |     |                    |--ABlockExpr  @../src/test_parser.nit:45,3--18
|           |     |                    |  `--ACallAssignExpr  @../src/test_parser.nit:45,3--18
|           |     |                    |     |--AImplicitSelfExpr  @../src/test_parser.nit:45,3
|           |     |                    |     |--AQid  @../src/test_parser.nit:45,3--11
|           |     |                    |     |  `--TId  need_help @../src/test_parser.nit:45,3--11
|           |     |                    |     |--AListExprs  @../src/test_parser.nit:45,13
|           |     |                    |     |--TAssign  = @../src/test_parser.nit:45,13
|           |     |                    |     `--ATrueExpr  @../src/test_parser.nit:45,15--18
|           |     |                    |        `--TKwtrue  true @../src/test_parser.nit:45,15--18
46		else
|           |     |                    |--TKwelse  else @../src/test_parser.nit:46,2--5
47			stderr.write("Unknown option {args.first}.\n")
|           |     |                    `--ABlockExpr  @../src/test_parser.nit:47,3--49,4
|           |     |                       |--ACallExpr  @../src/test_parser.nit:47,3--48
|           |     |                       |  |--ACallExpr  @../src/test_parser.nit:47,3--8
|           |     |                       |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:47,3
|           |     |                       |  |  |--AQid  @../src/test_parser.nit:47,3--8
|           |     |                       |  |  |  `--TId  stderr @../src/test_parser.nit:47,3--8
|           |     |                       |  |  `--AListExprs  @../src/test_parser.nit:47,8
|           |     |                       |  |--AQid  @../src/test_parser.nit:47,10--14
|           |     |                       |  |  `--TId  write @../src/test_parser.nit:47,10--14
|           |     |                       |  `--AParExprs  @../src/test_parser.nit:47,15--48
|           |     |                       |     |--TOpar  ( @../src/test_parser.nit:47,15
|           |     |                       |     |--ASuperstringExpr  @../src/test_parser.nit:47,16--47
|           |     |                       |     |  |--AStartStringExpr  @../src/test_parser.nit:47,16--32
|           |     |                       |     |  |  `--TStartString  \"Unknown option { @../src/test_parser.nit:47,16--32
|           |     |                       |     |  |--ACallExpr  @../src/test_parser.nit:47,33--42
|           |     |                       |     |  |  |--ACallExpr  @../src/test_parser.nit:47,33--36
|           |     |                       |     |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:47,33
|           |     |                       |     |  |  |  |--AQid  @../src/test_parser.nit:47,33--36
|           |     |                       |     |  |  |  |  `--TId  args @../src/test_parser.nit:47,33--36
|           |     |                       |     |  |  |  `--AListExprs  @../src/test_parser.nit:47,36
|           |     |                       |     |  |  |--AQid  @../src/test_parser.nit:47,38--42
|           |     |                       |     |  |  |  `--TId  first @../src/test_parser.nit:47,38--42
|           |     |                       |     |  |  `--AListExprs  @../src/test_parser.nit:47,42
|           |     |                       |     |  `--AEndStringExpr  @../src/test_parser.nit:47,43--47
|           |     |                       |     |     `--TEndString  }.\\n\" @../src/test_parser.nit:47,43--47
|           |     |                       |     `--TCpar  ) @../src/test_parser.nit:47,48
48			exit(0)
|           |     |                       |--ACallExpr  @../src/test_parser.nit:48,3--9
|           |     |                       |  |--AImplicitSelfExpr  @../src/test_parser.nit:48,3
|           |     |                       |  |--AQid  @../src/test_parser.nit:48,3--6
|           |     |                       |  |  `--TId  exit @../src/test_parser.nit:48,3--6
|           |     |                       |  `--AParExprs  @../src/test_parser.nit:48,7--9
|           |     |                       |     |--TOpar  ( @../src/test_parser.nit:48,7
|           |     |                       |     |--AIntegerExpr  @../src/test_parser.nit:48,8
|           |     |                       |     |  `--TInteger  0 @../src/test_parser.nit:48,8
|           |     |                       |     `--TCpar  ) @../src/test_parser.nit:48,9
49		end
|           |     |                       `--TKwend  end @../src/test_parser.nit:49,2--4
50		args.shift
|           |     |--ACallExpr  @../src/test_parser.nit:50,2--11
|           |     |  |--ACallExpr  @../src/test_parser.nit:50,2--5
|           |     |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:50,2
|           |     |  |  |--AQid  @../src/test_parser.nit:50,2--5
|           |     |  |  |  `--TId  args @../src/test_parser.nit:50,2--5
|           |     |  |  `--AListExprs  @../src/test_parser.nit:50,5
|           |     |  |--AQid  @../src/test_parser.nit:50,7--11
|           |     |  |  `--TId  shift @../src/test_parser.nit:50,7--11
|           |     |  `--AListExprs  @../src/test_parser.nit:50,11
51	end
|           |     `--TKwend  end @../src/test_parser.nit:51,1--3
52	
if (args.is_empty and not interactive) or need_help then
53	if (args.is_empty and not interactive) or need_help then
|           `--AIfExpr  @../src/test_parser.nit:53,1--138,3
|              |--TKwif  if @../src/test_parser.nit:53,1--2
|              |--AOrExpr  @../src/test_parser.nit:53,4--51
|              |  |--AParExpr  @../src/test_parser.nit:53,4--38
|              |  |  |--TOpar  ( @../src/test_parser.nit:53,4
|              |  |  |--AAndExpr  @../src/test_parser.nit:53,5--37
|              |  |  |  |--ACallExpr  @../src/test_parser.nit:53,5--17
|              |  |  |  |  |--ACallExpr  @../src/test_parser.nit:53,5--8
|              |  |  |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:53,5
|              |  |  |  |  |  |--AQid  @../src/test_parser.nit:53,5--8
|              |  |  |  |  |  |  `--TId  args @../src/test_parser.nit:53,5--8
|              |  |  |  |  |  `--AListExprs  @../src/test_parser.nit:53,8
|              |  |  |  |  |--AQid  @../src/test_parser.nit:53,10--17
|              |  |  |  |  |  `--TId  is_empty @../src/test_parser.nit:53,10--17
|              |  |  |  |  `--AListExprs  @../src/test_parser.nit:53,17
|              |  |  |  |--TKwand  and @../src/test_parser.nit:53,19--21
|              |  |  |  `--ANotExpr  @../src/test_parser.nit:53,23--37
|              |  |  |     |--TKwnot  not @../src/test_parser.nit:53,23--25
|              |  |  |     `--ACallExpr  @../src/test_parser.nit:53,27--37
|              |  |  |        |--AImplicitSelfExpr  @../src/test_parser.nit:53,27
|              |  |  |        |--AQid  @../src/test_parser.nit:53,27--37
|              |  |  |        |  `--TId  interactive @../src/test_parser.nit:53,27--37
|              |  |  |        `--AListExprs  @../src/test_parser.nit:53,37
|              |  |  `--TCpar  ) @../src/test_parser.nit:53,38
|              |  |--TKwor  or @../src/test_parser.nit:53,40--41
|              |  `--ACallExpr  @../src/test_parser.nit:53,43--51
|              |     |--AImplicitSelfExpr  @../src/test_parser.nit:53,43
|              |     |--AQid  @../src/test_parser.nit:53,43--51
|              |     |  `--TId  need_help @../src/test_parser.nit:53,43--51
|              |     `--AListExprs  @../src/test_parser.nit:53,51
|              |--TKwthen  then @../src/test_parser.nit:53,53--56
54		print("usage:")
|              |--ABlockExpr  @../src/test_parser.nit:54,2--65,30
|              |  |--ACallExpr  @../src/test_parser.nit:54,2--16
|              |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:54,2
|              |  |  |--AQid  @../src/test_parser.nit:54,2--6
|              |  |  |  `--TId  print @../src/test_parser.nit:54,2--6
|              |  |  `--AParExprs  @../src/test_parser.nit:54,7--16
|              |  |     |--TOpar  ( @../src/test_parser.nit:54,7
|              |  |     |--AStringExpr  @../src/test_parser.nit:54,8--15
|              |  |     |  `--TString  \"usage:\" @../src/test_parser.nit:54,8--15
|              |  |     `--TCpar  ) @../src/test_parser.nit:54,16
55		print("  test_parser [options]... <filename.nit>...")
|              |  |--ACallExpr  @../src/test_parser.nit:55,2--54
|              |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:55,2
|              |  |  |--AQid  @../src/test_parser.nit:55,2--6
|              |  |  |  `--TId  print @../src/test_parser.nit:55,2--6
|              |  |  `--AParExprs  @../src/test_parser.nit:55,7--54
|              |  |     |--TOpar  ( @../src/test_parser.nit:55,7
|              |  |     |--AStringExpr  @../src/test_parser.nit:55,8--53
|              |  |     |  `--TString  \"  test_parser [options]... <filename.nit>...\" @../src/test_parser.nit:55,8--53
|              |  |     `--TCpar  ) @../src/test_parser.nit:55,54
56		print("  test_parser -e [options]... <text>...")
|              |  |--ACallExpr  @../src/test_parser.nit:56,2--49
|              |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:56,2
|              |  |  |--AQid  @../src/test_parser.nit:56,2--6
|              |  |  |  `--TId  print @../src/test_parser.nit:56,2--6
|              |  |  `--AParExprs  @../src/test_parser.nit:56,7--49
|              |  |     |--TOpar  ( @../src/test_parser.nit:56,7
|              |  |     |--AStringExpr  @../src/test_parser.nit:56,8--48
|              |  |     |  `--TString  \"  test_parser -e [options]... <text>...\" @../src/test_parser.nit:56,8--48
|              |  |     `--TCpar  ) @../src/test_parser.nit:56,49
57		print("  test_parser -i [options]...")
|              |  |--ACallExpr  @../src/test_parser.nit:57,2--39
|              |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:57,2
|              |  |  |--AQid  @../src/test_parser.nit:57,2--6
|              |  |  |  `--TId  print @../src/test_parser.nit:57,2--6
|              |  |  `--AParExprs  @../src/test_parser.nit:57,7--39
|              |  |     |--TOpar  ( @../src/test_parser.nit:57,7
|              |  |     |--AStringExpr  @../src/test_parser.nit:57,8--38
|              |  |     |  `--TString  \"  test_parser -i [options]...\" @../src/test_parser.nit:57,8--38
|              |  |     `--TCpar  ) @../src/test_parser.nit:57,39
58		print("options:")
|              |  |--ACallExpr  @../src/test_parser.nit:58,2--18
|              |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:58,2
|              |  |  |--AQid  @../src/test_parser.nit:58,2--6
|              |  |  |  `--TId  print @../src/test_parser.nit:58,2--6
|              |  |  `--AParExprs  @../src/test_parser.nit:58,7--18
|              |  |     |--TOpar  ( @../src/test_parser.nit:58,7
|              |  |     |--AStringExpr  @../src/test_parser.nit:58,8--17
|              |  |     |  `--TString  \"options:\" @../src/test_parser.nit:58,8--17
|              |  |     `--TCpar  ) @../src/test_parser.nit:58,18
59		print("  -n	do not print anything")
|              |  |--ACallExpr  @../src/test_parser.nit:59,2--36
|              |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:59,2
|              |  |  |--AQid  @../src/test_parser.nit:59,2--6
|              |  |  |  `--TId  print @../src/test_parser.nit:59,2--6
|              |  |  `--AParExprs  @../src/test_parser.nit:59,7--36
|              |  |     |--TOpar  ( @../src/test_parser.nit:59,7
|              |  |     |--AStringExpr  @../src/test_parser.nit:59,8--35
|              |  |     |  `--TString  \"  -n\tdo not print anything\" @../src/test_parser.nit:59,8--35
|              |  |     `--TCpar  ) @../src/test_parser.nit:59,36
60		print("  -l	only lexer")
|              |  |--ACallExpr  @../src/test_parser.nit:60,2--25
|              |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:60,2
|              |  |  |--AQid  @../src/test_parser.nit:60,2--6
|              |  |  |  `--TId  print @../src/test_parser.nit:60,2--6
|              |  |  `--AParExprs  @../src/test_parser.nit:60,7--25
|              |  |     |--TOpar  ( @../src/test_parser.nit:60,7
|              |  |     |--AStringExpr  @../src/test_parser.nit:60,8--24
|              |  |     |  `--TString  \"  -l\tonly lexer\" @../src/test_parser.nit:60,8--24
|              |  |     `--TCpar  ) @../src/test_parser.nit:60,25
61		print("  -p	lexer and parser (default)")
|              |  |--ACallExpr  @../src/test_parser.nit:61,2--41
|              |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:61,2
|              |  |  |--AQid  @../src/test_parser.nit:61,2--6
|              |  |  |  `--TId  print @../src/test_parser.nit:61,2--6
|              |  |  `--AParExprs  @../src/test_parser.nit:61,7--41
|              |  |     |--TOpar  ( @../src/test_parser.nit:61,7
|              |  |     |--AStringExpr  @../src/test_parser.nit:61,8--40
|              |  |     |  `--TString  \"  -p\tlexer and parser (default)\" @../src/test_parser.nit:61,8--40
|              |  |     `--TCpar  ) @../src/test_parser.nit:61,41
62		print("  -x	instead of a ascii tree, output a XML document")
|              |  |--ACallExpr  @../src/test_parser.nit:62,2--61
|              |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:62,2
|              |  |  |--AQid  @../src/test_parser.nit:62,2--6
|              |  |  |  `--TId  print @../src/test_parser.nit:62,2--6
|              |  |  `--AParExprs  @../src/test_parser.nit:62,7--61
|              |  |     |--TOpar  ( @../src/test_parser.nit:62,7
|              |  |     |--AStringExpr  @../src/test_parser.nit:62,8--60
|              |  |     |  `--TString  \"  -x\tinstead of a ascii tree, output a XML document\" @../src/test_parser.nit:62,8--60
|              |  |     `--TCpar  ) @../src/test_parser.nit:62,61
63		print("  -e	instead on files, each argument is a content to parse")
|              |  |--ACallExpr  @../src/test_parser.nit:63,2--68
|              |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:63,2
|              |  |  |--AQid  @../src/test_parser.nit:63,2--6
|              |  |  |  `--TId  print @../src/test_parser.nit:63,2--6
|              |  |  `--AParExprs  @../src/test_parser.nit:63,7--68
|              |  |     |--TOpar  ( @../src/test_parser.nit:63,7
|              |  |     |--AStringExpr  @../src/test_parser.nit:63,8--67
|              |  |     |  `--TString  \"  -e\tinstead on files, each argument is a content to parse\" @../src/test_parser.nit:63,8--67
|              |  |     `--TCpar  ) @../src/test_parser.nit:63,68
64		print("  -i	tree to parse are read interactively")
|              |  |--ACallExpr  @../src/test_parser.nit:64,2--51
|              |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:64,2
|              |  |  |--AQid  @../src/test_parser.nit:64,2--6
|              |  |  |  `--TId  print @../src/test_parser.nit:64,2--6
|              |  |  `--AParExprs  @../src/test_parser.nit:64,7--51
|              |  |     |--TOpar  ( @../src/test_parser.nit:64,7
|              |  |     |--AStringExpr  @../src/test_parser.nit:64,8--50
|              |  |     |  `--TString  \"  -i\ttree to parse are read interactively\" @../src/test_parser.nit:64,8--50
|              |  |     `--TCpar  ) @../src/test_parser.nit:64,51
65		print("  -h	print this help")
|              |  `--ACallExpr  @../src/test_parser.nit:65,2--30
|              |     |--AImplicitSelfExpr  @../src/test_parser.nit:65,2
|              |     |--AQid  @../src/test_parser.nit:65,2--6
|              |     |  `--TId  print @../src/test_parser.nit:65,2--6
|              |     `--AParExprs  @../src/test_parser.nit:65,7--30
|              |        |--TOpar  ( @../src/test_parser.nit:65,7
|              |        |--AStringExpr  @../src/test_parser.nit:65,8--29
|              |        |  `--TString  \"  -h\tprint this help\" @../src/test_parser.nit:65,8--29
|              |        `--TCpar  ) @../src/test_parser.nit:65,30
66	else if interactive then
|              |--TKwelse  else @../src/test_parser.nit:66,1--4
|              `--AIfExpr  @../src/test_parser.nit:66,6--138,3
|                 |--TKwif  if @../src/test_parser.nit:66,6--7
|                 |--ACallExpr  @../src/test_parser.nit:66,9--19
|                 |  |--AImplicitSelfExpr  @../src/test_parser.nit:66,9
|                 |  |--AQid  @../src/test_parser.nit:66,9--19
|                 |  |  `--TId  interactive @../src/test_parser.nit:66,9--19
|                 |  `--AListExprs  @../src/test_parser.nit:66,19
|                 |--TKwthen  then @../src/test_parser.nit:66,21--24
67		if only_lexer then
|                 |--ABlockExpr  @../src/test_parser.nit:67,2--100,4
|                 |  |--AIfExpr  @../src/test_parser.nit:67,2--76,4
|                 |  |  |--TKwif  if @../src/test_parser.nit:67,2--3
|                 |  |  |--ACallExpr  @../src/test_parser.nit:67,5--14
|                 |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:67,5
|                 |  |  |  |--AQid  @../src/test_parser.nit:67,5--14
|                 |  |  |  |  `--TId  only_lexer @../src/test_parser.nit:67,5--14
|                 |  |  |  `--AListExprs  @../src/test_parser.nit:67,14
|                 |  |  |--TKwthen  then @../src/test_parser.nit:67,16--19
68			print "Error: -l and -i are incompatible"
|                 |  |  |--ABlockExpr  @../src/test_parser.nit:68,3--69,8
|                 |  |  |  |--ACallExpr  @../src/test_parser.nit:68,3--43
|                 |  |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:68,3
|                 |  |  |  |  |--AQid  @../src/test_parser.nit:68,3--7
|                 |  |  |  |  |  `--TId  print @../src/test_parser.nit:68,3--7
|                 |  |  |  |  `--AListExprs  @../src/test_parser.nit:68,9--43
|                 |  |  |  |     `--AStringExpr  @../src/test_parser.nit:68,9--43
|                 |  |  |  |        `--TString  \"Error: -l and -i are incompatible\" @../src/test_parser.nit:68,9--43
69			exit 1
|                 |  |  |  `--ACallExpr  @../src/test_parser.nit:69,3--8
|                 |  |  |     |--AImplicitSelfExpr  @../src/test_parser.nit:69,3
|                 |  |  |     |--AQid  @../src/test_parser.nit:69,3--6
|                 |  |  |     |  `--TId  exit @../src/test_parser.nit:69,3--6
|                 |  |  |     `--AListExprs  @../src/test_parser.nit:69,8
|                 |  |  |        `--AIntegerExpr  @../src/test_parser.nit:69,8
|                 |  |  |           `--TInteger  1 @../src/test_parser.nit:69,8
70		else if no_file then
|                 |  |  |--TKwelse  else @../src/test_parser.nit:70,2--5
|                 |  |  `--AIfExpr  @../src/test_parser.nit:70,7--76,4
|                 |  |     |--TKwif  if @../src/test_parser.nit:70,7--8
|                 |  |     |--ACallExpr  @../src/test_parser.nit:70,10--16
|                 |  |     |  |--AImplicitSelfExpr  @../src/test_parser.nit:70,10
|                 |  |     |  |--AQid  @../src/test_parser.nit:70,10--16
|                 |  |     |  |  `--TId  no_file @../src/test_parser.nit:70,10--16
|                 |  |     |  `--AListExprs  @../src/test_parser.nit:70,16
|                 |  |     |--TKwthen  then @../src/test_parser.nit:70,18--21
71			print "Error: -e and -i are incompatible"
|                 |  |     |--ABlockExpr  @../src/test_parser.nit:71,3--72,8
|                 |  |     |  |--ACallExpr  @../src/test_parser.nit:71,3--43
|                 |  |     |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:71,3
|                 |  |     |  |  |--AQid  @../src/test_parser.nit:71,3--7
|                 |  |     |  |  |  `--TId  print @../src/test_parser.nit:71,3--7
|                 |  |     |  |  `--AListExprs  @../src/test_parser.nit:71,9--43
|                 |  |     |  |     `--AStringExpr  @../src/test_parser.nit:71,9--43
|                 |  |     |  |        `--TString  \"Error: -e and -i are incompatible\" @../src/test_parser.nit:71,9--43
72			exit 1
|                 |  |     |  `--ACallExpr  @../src/test_parser.nit:72,3--8
|                 |  |     |     |--AImplicitSelfExpr  @../src/test_parser.nit:72,3
|                 |  |     |     |--AQid  @../src/test_parser.nit:72,3--6
|                 |  |     |     |  `--TId  exit @../src/test_parser.nit:72,3--6
|                 |  |     |     `--AListExprs  @../src/test_parser.nit:72,8
|                 |  |     |        `--AIntegerExpr  @../src/test_parser.nit:72,8
|                 |  |     |           `--TInteger  1 @../src/test_parser.nit:72,8
73		else if not args.is_empty then
|                 |  |     |--TKwelse  else @../src/test_parser.nit:73,2--5
|                 |  |     `--AIfExpr  @../src/test_parser.nit:73,7--76,4
|                 |  |        |--TKwif  if @../src/test_parser.nit:73,7--8
|                 |  |        |--ANotExpr  @../src/test_parser.nit:73,10--26
|                 |  |        |  |--TKwnot  not @../src/test_parser.nit:73,10--12
|                 |  |        |  `--ACallExpr  @../src/test_parser.nit:73,14--26
|                 |  |        |     |--ACallExpr  @../src/test_parser.nit:73,14--17
|                 |  |        |     |  |--AImplicitSelfExpr  @../src/test_parser.nit:73,14
|                 |  |        |     |  |--AQid  @../src/test_parser.nit:73,14--17
|                 |  |        |     |  |  `--TId  args @../src/test_parser.nit:73,14--17
|                 |  |        |     |  `--AListExprs  @../src/test_parser.nit:73,17
|                 |  |        |     |--AQid  @../src/test_parser.nit:73,19--26
|                 |  |        |     |  `--TId  is_empty @../src/test_parser.nit:73,19--26
|                 |  |        |     `--AListExprs  @../src/test_parser.nit:73,26
|                 |  |        |--TKwthen  then @../src/test_parser.nit:73,28--31
74			print "Error: -i works without arguments"
|                 |  |        |--ABlockExpr  @../src/test_parser.nit:74,3--75,8
|                 |  |        |  |--ACallExpr  @../src/test_parser.nit:74,3--43
|                 |  |        |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:74,3
|                 |  |        |  |  |--AQid  @../src/test_parser.nit:74,3--7
|                 |  |        |  |  |  `--TId  print @../src/test_parser.nit:74,3--7
|                 |  |        |  |  `--AListExprs  @../src/test_parser.nit:74,9--43
|                 |  |        |  |     `--AStringExpr  @../src/test_parser.nit:74,9--43
|                 |  |        |  |        `--TString  \"Error: -i works without arguments\" @../src/test_parser.nit:74,9--43
75			exit 1
|                 |  |        |  `--ACallExpr  @../src/test_parser.nit:75,3--8
|                 |  |        |     |--AImplicitSelfExpr  @../src/test_parser.nit:75,3
|                 |  |        |     |--AQid  @../src/test_parser.nit:75,3--6
|                 |  |        |     |  `--TId  exit @../src/test_parser.nit:75,3--6
|                 |  |        |     `--AListExprs  @../src/test_parser.nit:75,8
|                 |  |        |        `--AIntegerExpr  @../src/test_parser.nit:75,8
|                 |  |        |           `--TInteger  1 @../src/test_parser.nit:75,8
76		end
|                 |  |        `--ABlockExpr  @../src/test_parser.nit:76,2--4
|                 |  |           `--TKwend  end @../src/test_parser.nit:76,2--4
77	
	var tc = new ToolContext
78		var tc = new ToolContext
|                 |  |--AVardeclExpr  @../src/test_parser.nit:78,2--25
|                 |  |  |--TKwvar  var @../src/test_parser.nit:78,2--4
|                 |  |  |--TId  tc @../src/test_parser.nit:78,6--7
|                 |  |  |--TAssign  = @../src/test_parser.nit:78,9
|                 |  |  `--ANewExpr  @../src/test_parser.nit:78,11--25
|                 |  |     |--TKwnew  new @../src/test_parser.nit:78,11--13
|                 |  |     |--AType  @../src/test_parser.nit:78,15--25
|                 |  |     |  `--AQclassid  @../src/test_parser.nit:78,15--25
|                 |  |     |     `--TClassid  ToolContext @../src/test_parser.nit:78,15--25
|                 |  |     `--AListExprs  @../src/test_parser.nit:78,25
79	
	loop
80		loop
|                 |  `--ALoopExpr  @../src/test_parser.nit:80,2--100,4
|                 |     |--TKwloop  loop @../src/test_parser.nit:80,2--5
81			var n = tc.interactive_parse("-->")
|                 |     `--ABlockExpr  @../src/test_parser.nit:81,3--100,4
|                 |        |--AVardeclExpr  @../src/test_parser.nit:81,3--37
|                 |        |  |--TKwvar  var @../src/test_parser.nit:81,3--5
|                 |        |  |--TId  n @../src/test_parser.nit:81,7
|                 |        |  |--TAssign  = @../src/test_parser.nit:81,9
|                 |        |  `--ACallExpr  @../src/test_parser.nit:81,11--37
|                 |        |     |--ACallExpr  @../src/test_parser.nit:81,11--12
|                 |        |     |  |--AImplicitSelfExpr  @../src/test_parser.nit:81,11
|                 |        |     |  |--AQid  @../src/test_parser.nit:81,11--12
|                 |        |     |  |  `--TId  tc @../src/test_parser.nit:81,11--12
|                 |        |     |  `--AListExprs  @../src/test_parser.nit:81,12
|                 |        |     |--AQid  @../src/test_parser.nit:81,14--30
|                 |        |     |  `--TId  interactive_parse @../src/test_parser.nit:81,14--30
|                 |        |     `--AParExprs  @../src/test_parser.nit:81,31--37
|                 |        |        |--TOpar  ( @../src/test_parser.nit:81,31
|                 |        |        |--AStringExpr  @../src/test_parser.nit:81,32--36
|                 |        |        |  `--TString  \"-->\" @../src/test_parser.nit:81,32--36
|                 |        |        `--TCpar  ) @../src/test_parser.nit:81,37
82			if n isa TString then
|                 |        |--AIfExpr  @../src/test_parser.nit:82,3--90,5
|                 |        |  |--TKwif  if @../src/test_parser.nit:82,3--4
|                 |        |  |--AIsaExpr  @../src/test_parser.nit:82,6--18
|                 |        |  |  |--ACallExpr  @../src/test_parser.nit:82,6
|                 |        |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:82,6
|                 |        |  |  |  |--AQid  @../src/test_parser.nit:82,6
|                 |        |  |  |  |  `--TId  n @../src/test_parser.nit:82,6
|                 |        |  |  |  `--AListExprs  @../src/test_parser.nit:82,6
|                 |        |  |  |--TKwisa  isa @../src/test_parser.nit:82,8--10
|                 |        |  |  `--AType  @../src/test_parser.nit:82,12--18
|                 |        |  |     `--AQclassid  @../src/test_parser.nit:82,12--18
|                 |        |  |        `--TClassid  TString @../src/test_parser.nit:82,12--18
|                 |        |  |--TKwthen  then @../src/test_parser.nit:82,20--23
83				var s = n.text
|                 |        |  |--ABlockExpr  @../src/test_parser.nit:83,4--89,11
|                 |        |  |  |--AVardeclExpr  @../src/test_parser.nit:83,4--17
|                 |        |  |  |  |--TKwvar  var @../src/test_parser.nit:83,4--6
|                 |        |  |  |  |--TId  s @../src/test_parser.nit:83,8
|                 |        |  |  |  |--TAssign  = @../src/test_parser.nit:83,10
|                 |        |  |  |  `--ACallExpr  @../src/test_parser.nit:83,12--17
|                 |        |  |  |     |--ACallExpr  @../src/test_parser.nit:83,12
|                 |        |  |  |     |  |--AImplicitSelfExpr  @../src/test_parser.nit:83,12
|                 |        |  |  |     |  |--AQid  @../src/test_parser.nit:83,12
|                 |        |  |  |     |  |  `--TId  n @../src/test_parser.nit:83,12
|                 |        |  |  |     |  `--AListExprs  @../src/test_parser.nit:83,12
|                 |        |  |  |     |--AQid  @../src/test_parser.nit:83,14--17
|                 |        |  |  |     |  `--TId  text @../src/test_parser.nit:83,14--17
|                 |        |  |  |     `--AListExprs  @../src/test_parser.nit:83,17
84				if s == ":q" then
|                 |        |  |  |--AIfExpr  @../src/test_parser.nit:84,4--88,6
|                 |        |  |  |  |--TKwif  if @../src/test_parser.nit:84,4--5
|                 |        |  |  |  |--AEqExpr  @../src/test_parser.nit:84,7--15
|                 |        |  |  |  |  |--ACallExpr  @../src/test_parser.nit:84,7
|                 |        |  |  |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:84,7
|                 |        |  |  |  |  |  |--AQid  @../src/test_parser.nit:84,7
|                 |        |  |  |  |  |  |  `--TId  s @../src/test_parser.nit:84,7
|                 |        |  |  |  |  |  `--AListExprs  @../src/test_parser.nit:84,7
|                 |        |  |  |  |  |--TEq  == @../src/test_parser.nit:84,9--10
|                 |        |  |  |  |  `--AStringExpr  @../src/test_parser.nit:84,12--15
|                 |        |  |  |  |     `--TString  \":q\" @../src/test_parser.nit:84,12--15
|                 |        |  |  |  |--TKwthen  then @../src/test_parser.nit:84,17--20
85					break
|                 |        |  |  |  |--ABlockExpr  @../src/test_parser.nit:85,5--9
|                 |        |  |  |  |  `--ABreakExpr  @../src/test_parser.nit:85,5--9
|                 |        |  |  |  |     `--TKwbreak  break @../src/test_parser.nit:85,5--9
86				else
|                 |        |  |  |  |--TKwelse  else @../src/test_parser.nit:86,4--7
87					print "`:q` to quit"
|                 |        |  |  |  `--ABlockExpr  @../src/test_parser.nit:87,5--88,6
|                 |        |  |  |     |--ACallExpr  @../src/test_parser.nit:87,5--24
|                 |        |  |  |     |  |--AImplicitSelfExpr  @../src/test_parser.nit:87,5
|                 |        |  |  |     |  |--AQid  @../src/test_parser.nit:87,5--9
|                 |        |  |  |     |  |  `--TId  print @../src/test_parser.nit:87,5--9
|                 |        |  |  |     |  `--AListExprs  @../src/test_parser.nit:87,11--24
|                 |        |  |  |     |     `--AStringExpr  @../src/test_parser.nit:87,11--24
|                 |        |  |  |     |        `--TString  \"`:q` to quit\" @../src/test_parser.nit:87,11--24
88				end
|                 |        |  |  |     `--TKwend  end @../src/test_parser.nit:88,4--6
89				continue
|                 |        |  |  `--AContinueExpr  @../src/test_parser.nit:89,4--11
|                 |        |  |     `--TKwcontinue  continue @../src/test_parser.nit:89,4--11
90			end
|                 |        |  `--ABlockExpr  @../src/test_parser.nit:90,3--5
|                 |        |     `--TKwend  end @../src/test_parser.nit:90,3--5
91	
		if n isa AError then
92			if n isa AError then
|                 |        |--AIfExpr  @../src/test_parser.nit:92,3--95,5
|                 |        |  |--TKwif  if @../src/test_parser.nit:92,3--4
|                 |        |  |--AIsaExpr  @../src/test_parser.nit:92,6--17
|                 |        |  |  |--ACallExpr  @../src/test_parser.nit:92,6
|                 |        |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:92,6
|                 |        |  |  |  |--AQid  @../src/test_parser.nit:92,6
|                 |        |  |  |  |  `--TId  n @../src/test_parser.nit:92,6
|                 |        |  |  |  `--AListExprs  @../src/test_parser.nit:92,6
|                 |        |  |  |--TKwisa  isa @../src/test_parser.nit:92,8--10
|                 |        |  |  `--AType  @../src/test_parser.nit:92,12--17
|                 |        |  |     `--AQclassid  @../src/test_parser.nit:92,12--17
|                 |        |  |        `--TClassid  AError @../src/test_parser.nit:92,12--17
|                 |        |  |--TKwthen  then @../src/test_parser.nit:92,19--22
93				print "{n.location.colored_line("0;31")}: {n.message}"
|                 |        |  |--ABlockExpr  @../src/test_parser.nit:93,4--94,11
|                 |        |  |  |--ACallExpr  @../src/test_parser.nit:93,4--57
|                 |        |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:93,4
|                 |        |  |  |  |--AQid  @../src/test_parser.nit:93,4--8
|                 |        |  |  |  |  `--TId  print @../src/test_parser.nit:93,4--8
|                 |        |  |  |  `--AListExprs  @../src/test_parser.nit:93,10--57
|                 |        |  |  |     `--ASuperstringExpr  @../src/test_parser.nit:93,10--57
|                 |        |  |  |        |--AStartStringExpr  @../src/test_parser.nit:93,10--11
|                 |        |  |  |        |  `--TStartString  \"{ @../src/test_parser.nit:93,10--11
|                 |        |  |  |        |--ACallExpr  @../src/test_parser.nit:93,12--42
|                 |        |  |  |        |  |--ACallExpr  @../src/test_parser.nit:93,12--21
|                 |        |  |  |        |  |  |--ACallExpr  @../src/test_parser.nit:93,12
|                 |        |  |  |        |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:93,12
|                 |        |  |  |        |  |  |  |--AQid  @../src/test_parser.nit:93,12
|                 |        |  |  |        |  |  |  |  `--TId  n @../src/test_parser.nit:93,12
|                 |        |  |  |        |  |  |  `--AListExprs  @../src/test_parser.nit:93,12
|                 |        |  |  |        |  |  |--AQid  @../src/test_parser.nit:93,14--21
|                 |        |  |  |        |  |  |  `--TId  location @../src/test_parser.nit:93,14--21
|                 |        |  |  |        |  |  `--AListExprs  @../src/test_parser.nit:93,21
|                 |        |  |  |        |  |--AQid  @../src/test_parser.nit:93,23--34
|                 |        |  |  |        |  |  `--TId  colored_line @../src/test_parser.nit:93,23--34
|                 |        |  |  |        |  `--AParExprs  @../src/test_parser.nit:93,35--42
|                 |        |  |  |        |     |--TOpar  ( @../src/test_parser.nit:93,35
|                 |        |  |  |        |     |--AStringExpr  @../src/test_parser.nit:93,36--41
|                 |        |  |  |        |     |  `--TString  \"0;31\" @../src/test_parser.nit:93,36--41
|                 |        |  |  |        |     `--TCpar  ) @../src/test_parser.nit:93,42
|                 |        |  |  |        |--AMidStringExpr  @../src/test_parser.nit:93,43--46
|                 |        |  |  |        |  `--TMidString  }: { @../src/test_parser.nit:93,43--46
|                 |        |  |  |        |--ACallExpr  @../src/test_parser.nit:93,47--55
|                 |        |  |  |        |  |--ACallExpr  @../src/test_parser.nit:93,47
|                 |        |  |  |        |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:93,47
|                 |        |  |  |        |  |  |--AQid  @../src/test_parser.nit:93,47
|                 |        |  |  |        |  |  |  `--TId  n @../src/test_parser.nit:93,47
|                 |        |  |  |        |  |  `--AListExprs  @../src/test_parser.nit:93,47
|                 |        |  |  |        |  |--AQid  @../src/test_parser.nit:93,49--55
|                 |        |  |  |        |  |  `--TId  message @../src/test_parser.nit:93,49--55
|                 |        |  |  |        |  `--AListExprs  @../src/test_parser.nit:93,55
|                 |        |  |  |        `--AEndStringExpr  @../src/test_parser.nit:93,56--57
|                 |        |  |  |           `--TEndString  }\" @../src/test_parser.nit:93,56--57
94				continue
|                 |        |  |  `--AContinueExpr  @../src/test_parser.nit:94,4--11
|                 |        |  |     `--TKwcontinue  continue @../src/test_parser.nit:94,4--11
95			end
|                 |        |  `--ABlockExpr  @../src/test_parser.nit:95,3--5
|                 |        |     `--TKwend  end @../src/test_parser.nit:95,3--5
96	
		if not no_print then
97			if not no_print then
|                 |        |--AIfExpr  @../src/test_parser.nit:97,3--99,5
|                 |        |  |--TKwif  if @../src/test_parser.nit:97,3--4
|                 |        |  |--ANotExpr  @../src/test_parser.nit:97,6--17
|                 |        |  |  |--TKwnot  not @../src/test_parser.nit:97,6--8
|                 |        |  |  `--ACallExpr  @../src/test_parser.nit:97,10--17
|                 |        |  |     |--AImplicitSelfExpr  @../src/test_parser.nit:97,10
|                 |        |  |     |--AQid  @../src/test_parser.nit:97,10--17
|                 |        |  |     |  `--TId  no_print @../src/test_parser.nit:97,10--17
|                 |        |  |     `--AListExprs  @../src/test_parser.nit:97,17
|                 |        |  |--TKwthen  then @../src/test_parser.nit:97,19--22
98				n.dump_tree
|                 |        |  |--ABlockExpr  @../src/test_parser.nit:98,4--14
|                 |        |  |  `--ACallExpr  @../src/test_parser.nit:98,4--14
|                 |        |  |     |--ACallExpr  @../src/test_parser.nit:98,4
|                 |        |  |     |  |--AImplicitSelfExpr  @../src/test_parser.nit:98,4
|                 |        |  |     |  |--AQid  @../src/test_parser.nit:98,4
|                 |        |  |     |  |  `--TId  n @../src/test_parser.nit:98,4
|                 |        |  |     |  `--AListExprs  @../src/test_parser.nit:98,4
|                 |        |  |     |--AQid  @../src/test_parser.nit:98,6--14
|                 |        |  |     |  `--TId  dump_tree @../src/test_parser.nit:98,6--14
|                 |        |  |     `--AListExprs  @../src/test_parser.nit:98,14
99			end
|                 |        |  `--ABlockExpr  @../src/test_parser.nit:99,3--5
|                 |        |     `--TKwend  end @../src/test_parser.nit:99,3--5
100		end
|                 |        `--TKwend  end @../src/test_parser.nit:100,2--4
101	else
|                 |--TKwelse  else @../src/test_parser.nit:101,1--4
102		for a in args do
|                 `--ABlockExpr  @../src/test_parser.nit:102,2--138,3
|                    |--AForExpr  @../src/test_parser.nit:102,2--137,4
|                    |  |--TKwfor  for @../src/test_parser.nit:102,2--4
|                    |  |--AForGroup  @../src/test_parser.nit:102,6--14
|                    |  |  |--TId  a @../src/test_parser.nit:102,6
|                    |  |  |--TKwin  in @../src/test_parser.nit:102,8--9
|                    |  |  `--ACallExpr  @../src/test_parser.nit:102,11--14
|                    |  |     |--AImplicitSelfExpr  @../src/test_parser.nit:102,11
|                    |  |     |--AQid  @../src/test_parser.nit:102,11--14
|                    |  |     |  `--TId  args @../src/test_parser.nit:102,11--14
|                    |  |     `--AListExprs  @../src/test_parser.nit:102,14
|                    |  |--TKwdo  do @../src/test_parser.nit:102,16--17
103			var source
|                    |  `--ABlockExpr  @../src/test_parser.nit:103,3--137,4
|                    |     |--AVardeclExpr  @../src/test_parser.nit:103,3--12
|                    |     |  |--TKwvar  var @../src/test_parser.nit:103,3--5
|                    |     |  `--TId  source @../src/test_parser.nit:103,7--12
104			if no_file then
|                    |     |--AIfExpr  @../src/test_parser.nit:104,3--110,5
|                    |     |  |--TKwif  if @../src/test_parser.nit:104,3--4
|                    |     |  |--ACallExpr  @../src/test_parser.nit:104,6--12
|                    |     |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:104,6
|                    |     |  |  |--AQid  @../src/test_parser.nit:104,6--12
|                    |     |  |  |  `--TId  no_file @../src/test_parser.nit:104,6--12
|                    |     |  |  `--AListExprs  @../src/test_parser.nit:104,12
|                    |     |  |--TKwthen  then @../src/test_parser.nit:104,14--17
105				source = new SourceFile.from_string("", a)
|                    |     |  |--ABlockExpr  @../src/test_parser.nit:105,4--45
|                    |     |  |  `--ACallAssignExpr  @../src/test_parser.nit:105,4--45
|                    |     |  |     |--AImplicitSelfExpr  @../src/test_parser.nit:105,4
|                    |     |  |     |--AQid  @../src/test_parser.nit:105,4--9
|                    |     |  |     |  `--TId  source @../src/test_parser.nit:105,4--9
|                    |     |  |     |--AListExprs  @../src/test_parser.nit:105,11
|                    |     |  |     |--TAssign  = @../src/test_parser.nit:105,11
|                    |     |  |     `--ANewExpr  @../src/test_parser.nit:105,13--45
|                    |     |  |        |--TKwnew  new @../src/test_parser.nit:105,13--15
|                    |     |  |        |--AType  @../src/test_parser.nit:105,17--26
|                    |     |  |        |  `--AQclassid  @../src/test_parser.nit:105,17--26
|                    |     |  |        |     `--TClassid  SourceFile @../src/test_parser.nit:105,17--26
|                    |     |  |        |--AQid  @../src/test_parser.nit:105,28--38
|                    |     |  |        |  `--TId  from_string @../src/test_parser.nit:105,28--38
|                    |     |  |        `--AParExprs  @../src/test_parser.nit:105,39--45
|                    |     |  |           |--TOpar  ( @../src/test_parser.nit:105,39
|                    |     |  |           |--AStringExpr  @../src/test_parser.nit:105,40--41
|                    |     |  |           |  `--TString  \"\" @../src/test_parser.nit:105,40--41
|                    |     |  |           |--ACallExpr  @../src/test_parser.nit:105,44
|                    |     |  |           |  |--AImplicitSelfExpr  @../src/test_parser.nit:105,44
|                    |     |  |           |  |--AQid  @../src/test_parser.nit:105,44
|                    |     |  |           |  |  `--TId  a @../src/test_parser.nit:105,44
|                    |     |  |           |  `--AListExprs  @../src/test_parser.nit:105,44
|                    |     |  |           `--TCpar  ) @../src/test_parser.nit:105,45
106			else
|                    |     |  |--TKwelse  else @../src/test_parser.nit:106,3--6
107				var f = new FileReader.open(a)
|                    |     |  `--ABlockExpr  @../src/test_parser.nit:107,4--110,5
|                    |     |     |--AVardeclExpr  @../src/test_parser.nit:107,4--33
|                    |     |     |  |--TKwvar  var @../src/test_parser.nit:107,4--6
|                    |     |     |  |--TId  f @../src/test_parser.nit:107,8
|                    |     |     |  |--TAssign  = @../src/test_parser.nit:107,10
|                    |     |     |  `--ANewExpr  @../src/test_parser.nit:107,12--33
|                    |     |     |     |--TKwnew  new @../src/test_parser.nit:107,12--14
|                    |     |     |     |--AType  @../src/test_parser.nit:107,16--25
|                    |     |     |     |  `--AQclassid  @../src/test_parser.nit:107,16--25
|                    |     |     |     |     `--TClassid  FileReader @../src/test_parser.nit:107,16--25
|                    |     |     |     |--AQid  @../src/test_parser.nit:107,27--30
|                    |     |     |     |  `--TId  open @../src/test_parser.nit:107,27--30
|                    |     |     |     `--AParExprs  @../src/test_parser.nit:107,31--33
|                    |     |     |        |--TOpar  ( @../src/test_parser.nit:107,31
|                    |     |     |        |--ACallExpr  @../src/test_parser.nit:107,32
|                    |     |     |        |  |--AImplicitSelfExpr  @../src/test_parser.nit:107,32
|                    |     |     |        |  |--AQid  @../src/test_parser.nit:107,32
|                    |     |     |        |  |  `--TId  a @../src/test_parser.nit:107,32
|                    |     |     |        |  `--AListExprs  @../src/test_parser.nit:107,32
|                    |     |     |        `--TCpar  ) @../src/test_parser.nit:107,33
108				source = new SourceFile(a, f)
|                    |     |     |--ACallAssignExpr  @../src/test_parser.nit:108,4--32
|                    |     |     |  |--AImplicitSelfExpr  @../src/test_parser.nit:108,4
|                    |     |     |  |--AQid  @../src/test_parser.nit:108,4--9
|                    |     |     |  |  `--TId  source @../src/test_parser.nit:108,4--9
|                    |     |     |  |--AListExprs  @../src/test_parser.nit:108,11
|                    |     |     |  |--TAssign  = @../src/test_parser.nit:108,11
|                    |     |     |  `--ANewExpr  @../src/test_parser.nit:108,13--32
|                    |     |     |     |--TKwnew  new @../src/test_parser.nit:108,13--15
|                    |     |     |     |--AType  @../src/test_parser.nit:108,17--26
|                    |     |     |     |  `--AQclassid  @../src/test_parser.nit:108,17--26
|                    |     |     |     |     `--TClassid  SourceFile @../src/test_parser.nit:108,17--26
|                    |     |     |     `--AParExprs  @../src/test_parser.nit:108,27--32
|                    |     |     |        |--TOpar  ( @../src/test_parser.nit:108,27
|                    |     |     |        |--ACallExpr  @../src/test_parser.nit:108,28
|                    |     |     |        |  |--AImplicitSelfExpr  @../src/test_parser.nit:108,28
|                    |     |     |        |  |--AQid  @../src/test_parser.nit:108,28
|                    |     |     |        |  |  `--TId  a @../src/test_parser.nit:108,28
|                    |     |     |        |  `--AListExprs  @../src/test_parser.nit:108,28
|                    |     |     |        |--ACallExpr  @../src/test_parser.nit:108,31
|                    |     |     |        |  |--AImplicitSelfExpr  @../src/test_parser.nit:108,31
|                    |     |     |        |  |--AQid  @../src/test_parser.nit:108,31
|                    |     |     |        |  |  `--TId  f @../src/test_parser.nit:108,31
|                    |     |     |        |  `--AListExprs  @../src/test_parser.nit:108,31
|                    |     |     |        `--TCpar  ) @../src/test_parser.nit:108,32
109				f.close
|                    |     |     |--ACallExpr  @../src/test_parser.nit:109,4--10
|                    |     |     |  |--ACallExpr  @../src/test_parser.nit:109,4
|                    |     |     |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:109,4
|                    |     |     |  |  |--AQid  @../src/test_parser.nit:109,4
|                    |     |     |  |  |  `--TId  f @../src/test_parser.nit:109,4
|                    |     |     |  |  `--AListExprs  @../src/test_parser.nit:109,4
|                    |     |     |  |--AQid  @../src/test_parser.nit:109,6--10
|                    |     |     |  |  `--TId  close @../src/test_parser.nit:109,6--10
|                    |     |     |  `--AListExprs  @../src/test_parser.nit:109,10
110			end
|                    |     |     `--TKwend  end @../src/test_parser.nit:110,3--5
111			var lexer = new Lexer(source)
|                    |     |--AVardeclExpr  @../src/test_parser.nit:111,3--31
|                    |     |  |--TKwvar  var @../src/test_parser.nit:111,3--5
|                    |     |  |--TId  lexer @../src/test_parser.nit:111,7--11
|                    |     |  |--TAssign  = @../src/test_parser.nit:111,13
|                    |     |  `--ANewExpr  @../src/test_parser.nit:111,15--31
|                    |     |     |--TKwnew  new @../src/test_parser.nit:111,15--17
|                    |     |     |--AType  @../src/test_parser.nit:111,19--23
|                    |     |     |  `--AQclassid  @../src/test_parser.nit:111,19--23
|                    |     |     |     `--TClassid  Lexer @../src/test_parser.nit:111,19--23
|                    |     |     `--AParExprs  @../src/test_parser.nit:111,24--31
|                    |     |        |--TOpar  ( @../src/test_parser.nit:111,24
|                    |     |        |--ACallExpr  @../src/test_parser.nit:111,25--30
|                    |     |        |  |--AImplicitSelfExpr  @../src/test_parser.nit:111,25
|                    |     |        |  |--AQid  @../src/test_parser.nit:111,25--30
|                    |     |        |  |  `--TId  source @../src/test_parser.nit:111,25--30
|                    |     |        |  `--AListExprs  @../src/test_parser.nit:111,30
|                    |     |        `--TCpar  ) @../src/test_parser.nit:111,31
112			if only_lexer then
|                    |     |--AIfExpr  @../src/test_parser.nit:112,3--136,5
|                    |     |  |--TKwif  if @../src/test_parser.nit:112,3--4
|                    |     |  |--ACallExpr  @../src/test_parser.nit:112,6--15
|                    |     |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:112,6
|                    |     |  |  |--AQid  @../src/test_parser.nit:112,6--15
|                    |     |  |  |  `--TId  only_lexer @../src/test_parser.nit:112,6--15
|                    |     |  |  `--AListExprs  @../src/test_parser.nit:112,15
|                    |     |  |--TKwthen  then @../src/test_parser.nit:112,17--20
113				var token = lexer.next
|                    |     |  |--ABlockExpr  @../src/test_parser.nit:113,4--119,6
|                    |     |  |  |--AVardeclExpr  @../src/test_parser.nit:113,4--25
|                    |     |  |  |  |--TKwvar  var @../src/test_parser.nit:113,4--6
|                    |     |  |  |  |--TId  token @../src/test_parser.nit:113,8--12
|                    |     |  |  |  |--TAssign  = @../src/test_parser.nit:113,14
|                    |     |  |  |  `--ACallExpr  @../src/test_parser.nit:113,16--25
|                    |     |  |  |     |--ACallExpr  @../src/test_parser.nit:113,16--20
|                    |     |  |  |     |  |--AImplicitSelfExpr  @../src/test_parser.nit:113,16
|                    |     |  |  |     |  |--AQid  @../src/test_parser.nit:113,16--20
|                    |     |  |  |     |  |  `--TId  lexer @../src/test_parser.nit:113,16--20
|                    |     |  |  |     |  `--AListExprs  @../src/test_parser.nit:113,20
|                    |     |  |  |     |--AQid  @../src/test_parser.nit:113,22--25
|                    |     |  |  |     |  `--TId  next @../src/test_parser.nit:113,22--25
|                    |     |  |  |     `--AListExprs  @../src/test_parser.nit:113,25
114				while not token isa EOF do
|                    |     |  |  `--AWhileExpr  @../src/test_parser.nit:114,4--119,6
|                    |     |  |     |--TKwwhile  while @../src/test_parser.nit:114,4--8
|                    |     |  |     |--ANotExpr  @../src/test_parser.nit:114,10--26
|                    |     |  |     |  |--TKwnot  not @../src/test_parser.nit:114,10--12
|                    |     |  |     |  `--AIsaExpr  @../src/test_parser.nit:114,14--26
|                    |     |  |     |     |--ACallExpr  @../src/test_parser.nit:114,14--18
|                    |     |  |     |     |  |--AImplicitSelfExpr  @../src/test_parser.nit:114,14
|                    |     |  |     |     |  |--AQid  @../src/test_parser.nit:114,14--18
|                    |     |  |     |     |  |  `--TId  token @../src/test_parser.nit:114,14--18
|                    |     |  |     |     |  `--AListExprs  @../src/test_parser.nit:114,18
|                    |     |  |     |     |--TKwisa  isa @../src/test_parser.nit:114,20--22
|                    |     |  |     |     `--AType  @../src/test_parser.nit:114,24--26
|                    |     |  |     |        `--AQclassid  @../src/test_parser.nit:114,24--26
|                    |     |  |     |           `--TClassid  EOF @../src/test_parser.nit:114,24--26
|                    |     |  |     |--TKwdo  do @../src/test_parser.nit:114,28--29
115					if not no_print then
|                    |     |  |     `--ABlockExpr  @../src/test_parser.nit:115,5--119,6
|                    |     |  |        |--AIfExpr  @../src/test_parser.nit:115,5--117,7
|                    |     |  |        |  |--TKwif  if @../src/test_parser.nit:115,5--6
|                    |     |  |        |  |--ANotExpr  @../src/test_parser.nit:115,8--19
|                    |     |  |        |  |  |--TKwnot  not @../src/test_parser.nit:115,8--10
|                    |     |  |        |  |  `--ACallExpr  @../src/test_parser.nit:115,12--19
|                    |     |  |        |  |     |--AImplicitSelfExpr  @../src/test_parser.nit:115,12
|                    |     |  |        |  |     |--AQid  @../src/test_parser.nit:115,12--19
|                    |     |  |        |  |     |  `--TId  no_print @../src/test_parser.nit:115,12--19
|                    |     |  |        |  |     `--AListExprs  @../src/test_parser.nit:115,19
|                    |     |  |        |  |--TKwthen  then @../src/test_parser.nit:115,21--24
116						print("Read token at {token.location} text='{token.text}'")
|                    |     |  |        |  |--ABlockExpr  @../src/test_parser.nit:116,6--64
|                    |     |  |        |  |  `--ACallExpr  @../src/test_parser.nit:116,6--64
|                    |     |  |        |  |     |--AImplicitSelfExpr  @../src/test_parser.nit:116,6
|                    |     |  |        |  |     |--AQid  @../src/test_parser.nit:116,6--10
|                    |     |  |        |  |     |  `--TId  print @../src/test_parser.nit:116,6--10
|                    |     |  |        |  |     `--AParExprs  @../src/test_parser.nit:116,11--64
|                    |     |  |        |  |        |--TOpar  ( @../src/test_parser.nit:116,11
|                    |     |  |        |  |        |--ASuperstringExpr  @../src/test_parser.nit:116,12--63
|                    |     |  |        |  |        |  |--AStartStringExpr  @../src/test_parser.nit:116,12--27
|                    |     |  |        |  |        |  |  `--TStartString  \"Read token at { @../src/test_parser.nit:116,12--27
|                    |     |  |        |  |        |  |--ACallExpr  @../src/test_parser.nit:116,28--41
|                    |     |  |        |  |        |  |  |--ACallExpr  @../src/test_parser.nit:116,28--32
|                    |     |  |        |  |        |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:116,28
|                    |     |  |        |  |        |  |  |  |--AQid  @../src/test_parser.nit:116,28--32
|                    |     |  |        |  |        |  |  |  |  `--TId  token @../src/test_parser.nit:116,28--32
|                    |     |  |        |  |        |  |  |  `--AListExprs  @../src/test_parser.nit:116,32
|                    |     |  |        |  |        |  |  |--AQid  @../src/test_parser.nit:116,34--41
|                    |     |  |        |  |        |  |  |  `--TId  location @../src/test_parser.nit:116,34--41
|                    |     |  |        |  |        |  |  `--AListExprs  @../src/test_parser.nit:116,41
|                    |     |  |        |  |        |  |--AMidStringExpr  @../src/test_parser.nit:116,42--50
|                    |     |  |        |  |        |  |  `--TMidString  } text=\'{ @../src/test_parser.nit:116,42--50
|                    |     |  |        |  |        |  |--ACallExpr  @../src/test_parser.nit:116,51--60
|                    |     |  |        |  |        |  |  |--ACallExpr  @../src/test_parser.nit:116,51--55
|                    |     |  |        |  |        |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:116,51
|                    |     |  |        |  |        |  |  |  |--AQid  @../src/test_parser.nit:116,51--55
|                    |     |  |        |  |        |  |  |  |  `--TId  token @../src/test_parser.nit:116,51--55
|                    |     |  |        |  |        |  |  |  `--AListExprs  @../src/test_parser.nit:116,55
|                    |     |  |        |  |        |  |  |--AQid  @../src/test_parser.nit:116,57--60
|                    |     |  |        |  |        |  |  |  `--TId  text @../src/test_parser.nit:116,57--60
|                    |     |  |        |  |        |  |  `--AListExprs  @../src/test_parser.nit:116,60
|                    |     |  |        |  |        |  `--AEndStringExpr  @../src/test_parser.nit:116,61--63
|                    |     |  |        |  |        |     `--TEndString  }\'\" @../src/test_parser.nit:116,61--63
|                    |     |  |        |  |        `--TCpar  ) @../src/test_parser.nit:116,64
117					end
|                    |     |  |        |  `--ABlockExpr  @../src/test_parser.nit:117,5--7
|                    |     |  |        |     `--TKwend  end @../src/test_parser.nit:117,5--7
118					token = lexer.next
|                    |     |  |        |--ACallAssignExpr  @../src/test_parser.nit:118,5--22
|                    |     |  |        |  |--AImplicitSelfExpr  @../src/test_parser.nit:118,5
|                    |     |  |        |  |--AQid  @../src/test_parser.nit:118,5--9
|                    |     |  |        |  |  `--TId  token @../src/test_parser.nit:118,5--9
|                    |     |  |        |  |--AListExprs  @../src/test_parser.nit:118,11
|                    |     |  |        |  |--TAssign  = @../src/test_parser.nit:118,11
|                    |     |  |        |  `--ACallExpr  @../src/test_parser.nit:118,13--22
|                    |     |  |        |     |--ACallExpr  @../src/test_parser.nit:118,13--17
|                    |     |  |        |     |  |--AImplicitSelfExpr  @../src/test_parser.nit:118,13
|                    |     |  |        |     |  |--AQid  @../src/test_parser.nit:118,13--17
|                    |     |  |        |     |  |  `--TId  lexer @../src/test_parser.nit:118,13--17
|                    |     |  |        |     |  `--AListExprs  @../src/test_parser.nit:118,17
|                    |     |  |        |     |--AQid  @../src/test_parser.nit:118,19--22
|                    |     |  |        |     |  `--TId  next @../src/test_parser.nit:118,19--22
|                    |     |  |        |     `--AListExprs  @../src/test_parser.nit:118,22
119				end
|                    |     |  |        `--TKwend  end @../src/test_parser.nit:119,4--6
120			else
|                    |     |  |--TKwelse  else @../src/test_parser.nit:120,3--6
121				var parser = new Parser(lexer)
|                    |     |  `--ABlockExpr  @../src/test_parser.nit:121,4--136,5
|                    |     |     |--AVardeclExpr  @../src/test_parser.nit:121,4--33
|                    |     |     |  |--TKwvar  var @../src/test_parser.nit:121,4--6
|                    |     |     |  |--TId  parser @../src/test_parser.nit:121,8--13
|                    |     |     |  |--TAssign  = @../src/test_parser.nit:121,15
|                    |     |     |  `--ANewExpr  @../src/test_parser.nit:121,17--33
|                    |     |     |     |--TKwnew  new @../src/test_parser.nit:121,17--19
|                    |     |     |     |--AType  @../src/test_parser.nit:121,21--26
|                    |     |     |     |  `--AQclassid  @../src/test_parser.nit:121,21--26
|                    |     |     |     |     `--TClassid  Parser @../src/test_parser.nit:121,21--26
|                    |     |     |     `--AParExprs  @../src/test_parser.nit:121,27--33
|                    |     |     |        |--TOpar  ( @../src/test_parser.nit:121,27
|                    |     |     |        |--ACallExpr  @../src/test_parser.nit:121,28--32
|                    |     |     |        |  |--AImplicitSelfExpr  @../src/test_parser.nit:121,28
|                    |     |     |        |  |--AQid  @../src/test_parser.nit:121,28--32
|                    |     |     |        |  |  `--TId  lexer @../src/test_parser.nit:121,28--32
|                    |     |     |        |  `--AListExprs  @../src/test_parser.nit:121,32
|                    |     |     |        `--TCpar  ) @../src/test_parser.nit:121,33
122				var tree = parser.parse
|                    |     |     |--AVardeclExpr  @../src/test_parser.nit:122,4--26
|                    |     |     |  |--TKwvar  var @../src/test_parser.nit:122,4--6
|                    |     |     |  |--TId  tree @../src/test_parser.nit:122,8--11
|                    |     |     |  |--TAssign  = @../src/test_parser.nit:122,13
|                    |     |     |  `--ACallExpr  @../src/test_parser.nit:122,15--26
|                    |     |     |     |--ACallExpr  @../src/test_parser.nit:122,15--20
|                    |     |     |     |  |--AImplicitSelfExpr  @../src/test_parser.nit:122,15
|                    |     |     |     |  |--AQid  @../src/test_parser.nit:122,15--20
|                    |     |     |     |  |  `--TId  parser @../src/test_parser.nit:122,15--20
|                    |     |     |     |  `--AListExprs  @../src/test_parser.nit:122,20
|                    |     |     |     |--AQid  @../src/test_parser.nit:122,22--26
|                    |     |     |     |  `--TId  parse @../src/test_parser.nit:122,22--26
|                    |     |     |     `--AListExprs  @../src/test_parser.nit:122,26
123	
			var error = tree.n_eof
124				var error = tree.n_eof
|                    |     |     |--AVardeclExpr  @../src/test_parser.nit:124,4--25
|                    |     |     |  |--TKwvar  var @../src/test_parser.nit:124,4--6
|                    |     |     |  |--TId  error @../src/test_parser.nit:124,8--12
|                    |     |     |  |--TAssign  = @../src/test_parser.nit:124,14
|                    |     |     |  `--ACallExpr  @../src/test_parser.nit:124,16--25
|                    |     |     |     |--ACallExpr  @../src/test_parser.nit:124,16--19
|                    |     |     |     |  |--AImplicitSelfExpr  @../src/test_parser.nit:124,16
|                    |     |     |     |  |--AQid  @../src/test_parser.nit:124,16--19
|                    |     |     |     |  |  `--TId  tree @../src/test_parser.nit:124,16--19
|                    |     |     |     |  `--AListExprs  @../src/test_parser.nit:124,19
|                    |     |     |     |--AQid  @../src/test_parser.nit:124,21--25
|                    |     |     |     |  `--TId  n_eof @../src/test_parser.nit:124,21--25
|                    |     |     |     `--AListExprs  @../src/test_parser.nit:124,25
125				if error isa AError then
|                    |     |     |--AIfExpr  @../src/test_parser.nit:125,4--128,6
|                    |     |     |  |--TKwif  if @../src/test_parser.nit:125,4--5
|                    |     |     |  |--AIsaExpr  @../src/test_parser.nit:125,7--22
|                    |     |     |  |  |--ACallExpr  @../src/test_parser.nit:125,7--11
|                    |     |     |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:125,7
|                    |     |     |  |  |  |--AQid  @../src/test_parser.nit:125,7--11
|                    |     |     |  |  |  |  `--TId  error @../src/test_parser.nit:125,7--11
|                    |     |     |  |  |  `--AListExprs  @../src/test_parser.nit:125,11
|                    |     |     |  |  |--TKwisa  isa @../src/test_parser.nit:125,13--15
|                    |     |     |  |  `--AType  @../src/test_parser.nit:125,17--22
|                    |     |     |  |     `--AQclassid  @../src/test_parser.nit:125,17--22
|                    |     |     |  |        `--TClassid  AError @../src/test_parser.nit:125,17--22
|                    |     |     |  |--TKwthen  then @../src/test_parser.nit:125,24--27
126					print("Error at {error.location}:\n\t{error.message}")
|                    |     |     |  |--ABlockExpr  @../src/test_parser.nit:126,5--127,10
|                    |     |     |  |  |--ACallExpr  @../src/test_parser.nit:126,5--58
|                    |     |     |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:126,5
|                    |     |     |  |  |  |--AQid  @../src/test_parser.nit:126,5--9
|                    |     |     |  |  |  |  `--TId  print @../src/test_parser.nit:126,5--9
|                    |     |     |  |  |  `--AParExprs  @../src/test_parser.nit:126,10--58
|                    |     |     |  |  |     |--TOpar  ( @../src/test_parser.nit:126,10
|                    |     |     |  |  |     |--ASuperstringExpr  @../src/test_parser.nit:126,11--57
|                    |     |     |  |  |     |  |--AStartStringExpr  @../src/test_parser.nit:126,11--21
|                    |     |     |  |  |     |  |  `--TStartString  \"Error at { @../src/test_parser.nit:126,11--21
|                    |     |     |  |  |     |  |--ACallExpr  @../src/test_parser.nit:126,22--35
|                    |     |     |  |  |     |  |  |--ACallExpr  @../src/test_parser.nit:126,22--26
|                    |     |     |  |  |     |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:126,22
|                    |     |     |  |  |     |  |  |  |--AQid  @../src/test_parser.nit:126,22--26
|                    |     |     |  |  |     |  |  |  |  `--TId  error @../src/test_parser.nit:126,22--26
|                    |     |     |  |  |     |  |  |  `--AListExprs  @../src/test_parser.nit:126,26
|                    |     |     |  |  |     |  |  |--AQid  @../src/test_parser.nit:126,28--35
|                    |     |     |  |  |     |  |  |  `--TId  location @../src/test_parser.nit:126,28--35
|                    |     |     |  |  |     |  |  `--AListExprs  @../src/test_parser.nit:126,35
|                    |     |     |  |  |     |  |--AMidStringExpr  @../src/test_parser.nit:126,36--42
|                    |     |     |  |  |     |  |  `--TMidString  }:\\n\\t{ @../src/test_parser.nit:126,36--42
|                    |     |     |  |  |     |  |--ACallExpr  @../src/test_parser.nit:126,43--55
|                    |     |     |  |  |     |  |  |--ACallExpr  @../src/test_parser.nit:126,43--47
|                    |     |     |  |  |     |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:126,43
|                    |     |     |  |  |     |  |  |  |--AQid  @../src/test_parser.nit:126,43--47
|                    |     |     |  |  |     |  |  |  |  `--TId  error @../src/test_parser.nit:126,43--47
|                    |     |     |  |  |     |  |  |  `--AListExprs  @../src/test_parser.nit:126,47
|                    |     |     |  |  |     |  |  |--AQid  @../src/test_parser.nit:126,49--55
|                    |     |     |  |  |     |  |  |  `--TId  message @../src/test_parser.nit:126,49--55
|                    |     |     |  |  |     |  |  `--AListExprs  @../src/test_parser.nit:126,55
|                    |     |     |  |  |     |  `--AEndStringExpr  @../src/test_parser.nit:126,56--57
|                    |     |     |  |  |     |     `--TEndString  }\" @../src/test_parser.nit:126,56--57
|                    |     |     |  |  |     `--TCpar  ) @../src/test_parser.nit:126,58
127					return
|                    |     |     |  |  `--AReturnExpr  @../src/test_parser.nit:127,5--10
|                    |     |     |  |     `--TKwreturn  return @../src/test_parser.nit:127,5--10
128				end
|                    |     |     |  `--ABlockExpr  @../src/test_parser.nit:128,4--6
|                    |     |     |     `--TKwend  end @../src/test_parser.nit:128,4--6
129	
			if xml then
130				if xml then
|                    |     |     |--AIfExpr  @../src/test_parser.nit:130,4--135,6
|                    |     |     |  |--TKwif  if @../src/test_parser.nit:130,4--5
|                    |     |     |  |--ACallExpr  @../src/test_parser.nit:130,7--9
|                    |     |     |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:130,7
|                    |     |     |  |  |--AQid  @../src/test_parser.nit:130,7--9
|                    |     |     |  |  |  `--TId  xml @../src/test_parser.nit:130,7--9
|                    |     |     |  |  `--AListExprs  @../src/test_parser.nit:130,9
|                    |     |     |  |--TKwthen  then @../src/test_parser.nit:130,11--14
131					tree.parentize_tokens
|                    |     |     |  |--ABlockExpr  @../src/test_parser.nit:131,5--132,32
|                    |     |     |  |  |--ACallExpr  @../src/test_parser.nit:131,5--25
|                    |     |     |  |  |  |--ACallExpr  @../src/test_parser.nit:131,5--8
|                    |     |     |  |  |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:131,5
|                    |     |     |  |  |  |  |--AQid  @../src/test_parser.nit:131,5--8
|                    |     |     |  |  |  |  |  `--TId  tree @../src/test_parser.nit:131,5--8
|                    |     |     |  |  |  |  `--AListExprs  @../src/test_parser.nit:131,8
|                    |     |     |  |  |  |--AQid  @../src/test_parser.nit:131,10--25
|                    |     |     |  |  |  |  `--TId  parentize_tokens @../src/test_parser.nit:131,10--25
|                    |     |     |  |  |  `--AListExprs  @../src/test_parser.nit:131,25
132					tree.to_xml.write_to(stdout)
|                    |     |     |  |  `--ACallExpr  @../src/test_parser.nit:132,5--32
|                    |     |     |  |     |--ACallExpr  @../src/test_parser.nit:132,5--15
|                    |     |     |  |     |  |--ACallExpr  @../src/test_parser.nit:132,5--8
|                    |     |     |  |     |  |  |--AImplicitSelfExpr  @../src/test_parser.nit:132,5
|                    |     |     |  |     |  |  |--AQid  @../src/test_parser.nit:132,5--8
|                    |     |     |  |     |  |  |  `--TId  tree @../src/test_parser.nit:132,5--8
|                    |     |     |  |     |  |  `--AListExprs  @../src/test_parser.nit:132,8
|                    |     |     |  |     |  |--AQid  @../src/test_parser.nit:132,10--15
|                    |     |     |  |     |  |  `--TId  to_xml @../src/test_parser.nit:132,10--15
|                    |     |     |  |     |  `--AListExprs  @../src/test_parser.nit:132,15
|                    |     |     |  |     |--AQid  @../src/test_parser.nit:132,17--24
|                    |     |     |  |     |  `--TId  write_to @../src/test_parser.nit:132,17--24
|                    |     |     |  |     `--AParExprs  @../src/test_parser.nit:132,25--32
|                    |     |     |  |        |--TOpar  ( @../src/test_parser.nit:132,25
|                    |     |     |  |        |--ACallExpr  @../src/test_parser.nit:132,26--31
|                    |     |     |  |        |  |--AImplicitSelfExpr  @../src/test_parser.nit:132,26
|                    |     |     |  |        |  |--AQid  @../src/test_parser.nit:132,26--31
|                    |     |     |  |        |  |  `--TId  stdout @../src/test_parser.nit:132,26--31
|                    |     |     |  |        |  `--AListExprs  @../src/test_parser.nit:132,31
|                    |     |     |  |        `--TCpar  ) @../src/test_parser.nit:132,32
133				else if not no_print then
|                    |     |     |  |--TKwelse  else @../src/test_parser.nit:133,4--7
|                    |     |     |  `--AIfExpr  @../src/test_parser.nit:133,9--135,6
|                    |     |     |     |--TKwif  if @../src/test_parser.nit:133,9--10
|                    |     |     |     |--ANotExpr  @../src/test_parser.nit:133,12--23
|                    |     |     |     |  |--TKwnot  not @../src/test_parser.nit:133,12--14
|                    |     |     |     |  `--ACallExpr  @../src/test_parser.nit:133,16--23
|                    |     |     |     |     |--AImplicitSelfExpr  @../src/test_parser.nit:133,16
|                    |     |     |     |     |--AQid  @../src/test_parser.nit:133,16--23
|                    |     |     |     |     |  `--TId  no_print @../src/test_parser.nit:133,16--23
|                    |     |     |     |     `--AListExprs  @../src/test_parser.nit:133,23
|                    |     |     |     |--TKwthen  then @../src/test_parser.nit:133,25--28
134					tree.dump_tree
|                    |     |     |     |--ABlockExpr  @../src/test_parser.nit:134,5--18
|                    |     |     |     |  `--ACallExpr  @../src/test_parser.nit:134,5--18
|                    |     |     |     |     |--ACallExpr  @../src/test_parser.nit:134,5--8
|                    |     |     |     |     |  |--AImplicitSelfExpr  @../src/test_parser.nit:134,5
|                    |     |     |     |     |  |--AQid  @../src/test_parser.nit:134,5--8
|                    |     |     |     |     |  |  `--TId  tree @../src/test_parser.nit:134,5--8
|                    |     |     |     |     |  `--AListExprs  @../src/test_parser.nit:134,8
|                    |     |     |     |     |--AQid  @../src/test_parser.nit:134,10--18
|                    |     |     |     |     |  `--TId  dump_tree @../src/test_parser.nit:134,10--18
|                    |     |     |     |     `--AListExprs  @../src/test_parser.nit:134,18
135				end
|                    |     |     |     `--ABlockExpr  @../src/test_parser.nit:135,4--6
|                    |     |     |        `--TKwend  end @../src/test_parser.nit:135,4--6
136			end
|                    |     |     `--TKwend  end @../src/test_parser.nit:136,3--5
137		end
|                    |     `--TKwend  end @../src/test_parser.nit:137,2--4
138	end
|                    `--TKwend  end @../src/test_parser.nit:138,1--3
139	
`--EOF   @../src/test_parser.nit:139,1
