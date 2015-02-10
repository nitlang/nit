Start ../src/test_parser.nit:17,1--147,1
  AModule ../src/test_parser.nit:17,1--146,3
    AModuledecl ../src/test_parser.nit:17,1--18,18
      ADoc ../src/test_parser.nit:17,1--18,0
        TComment "# Program used to test the NIT parser\n" ../src/test_parser.nit:17,1--18,0
      APublicVisibility ../src/test_parser.nit:18,1
      TKwmodule "module" ../src/test_parser.nit:18,1--6
      AModuleName ../src/test_parser.nit:18,8--18
        TId "test_parser" ../src/test_parser.nit:18,8--18
    AStdImport ../src/test_parser.nit:20,1--13
      APublicVisibility ../src/test_parser.nit:20,1
      TKwimport "import" ../src/test_parser.nit:20,1--6
      AModuleName ../src/test_parser.nit:20,8--13
        TId "parser" ../src/test_parser.nit:20,8--13
    AStdImport ../src/test_parser.nit:21,1--18
      APublicVisibility ../src/test_parser.nit:21,1
      TKwimport "import" ../src/test_parser.nit:21,1--6
      AModuleName ../src/test_parser.nit:21,8--18
        TId "parser_util" ../src/test_parser.nit:21,8--18
    AStdClassdef ../src/test_parser.nit:23,1--37,3
      APublicVisibility ../src/test_parser.nit:23,1
      AConcreteClasskind ../src/test_parser.nit:23,1--5
        TKwclass "class" ../src/test_parser.nit:23,1--5
      TClassid "PrintTreeVisitor" ../src/test_parser.nit:23,7--22
      ASuperclass ../src/test_parser.nit:24,2--14
        TKwsuper "super" ../src/test_parser.nit:24,2--6
        AType ../src/test_parser.nit:24,8--14
          TClassid "Visitor" ../src/test_parser.nit:24,8--14
      AAttrPropdef ../src/test_parser.nit:25,2--26
        APrivateVisibility ../src/test_parser.nit:25,2--8
          TKwprivate "private" ../src/test_parser.nit:25,2--8
        TKwvar "var" ../src/test_parser.nit:25,10--12
        TId "rank" ../src/test_parser.nit:25,14--17
        AType ../src/test_parser.nit:25,20--22
          TClassid "Int" ../src/test_parser.nit:25,20--22
        ADecIntExpr ../src/test_parser.nit:25,26
          TNumber "0" ../src/test_parser.nit:25,26
      AMethPropdef ../src/test_parser.nit:26,2--36,4
        TKwredef "redef" ../src/test_parser.nit:26,2--6
        APublicVisibility ../src/test_parser.nit:26,8
        TKwmeth "fun" ../src/test_parser.nit:26,8--10
        AIdMethid ../src/test_parser.nit:26,12--16
          TId "visit" ../src/test_parser.nit:26,12--16
        ASignature ../src/test_parser.nit:26,17--19
          TOpar "(" ../src/test_parser.nit:26,17
          AParam ../src/test_parser.nit:26,18
            TId "n" ../src/test_parser.nit:26,18
          TCpar ")" ../src/test_parser.nit:26,19
        ABlockExpr ../src/test_parser.nit:28,3--36,4
          AIfExpr ../src/test_parser.nit:28,3--32,5
            TKwif "if" ../src/test_parser.nit:28,3--4
            AIsaExpr ../src/test_parser.nit:28,6--16
              ACallExpr ../src/test_parser.nit:28,6
                AImplicitSelfExpr ../src/test_parser.nit:28,6
                TId "n" ../src/test_parser.nit:28,6
                AListExprs ../src/test_parser.nit:28,6
              AType ../src/test_parser.nit:28,12--16
                TClassid "Token" ../src/test_parser.nit:28,12--16
            ABlockExpr ../src/test_parser.nit:29,4--88
              ACallExpr ../src/test_parser.nit:29,4--88
                AImplicitSelfExpr ../src/test_parser.nit:29,4
                TId "printn" ../src/test_parser.nit:29,4--9
                AParExprs ../src/test_parser.nit:29,10--88
                  TOpar "(" ../src/test_parser.nit:29,10
                  AStarExpr ../src/test_parser.nit:29,11--21
                    AStringExpr ../src/test_parser.nit:29,11--14
                      TString "\"  \"" ../src/test_parser.nit:29,11--14
                    ACallExpr ../src/test_parser.nit:29,18--21
                      AImplicitSelfExpr ../src/test_parser.nit:29,18
                      TId "rank" ../src/test_parser.nit:29,18--21
                      AListExprs ../src/test_parser.nit:29,21
                  ACallExpr ../src/test_parser.nit:29,24--35
                    ACallExpr ../src/test_parser.nit:29,24
                      AImplicitSelfExpr ../src/test_parser.nit:29,24
                      TId "n" ../src/test_parser.nit:29,24
                      AListExprs ../src/test_parser.nit:29,24
                    TId "class_name" ../src/test_parser.nit:29,26--35
                    AListExprs ../src/test_parser.nit:29,35
                  AStringExpr ../src/test_parser.nit:29,38--42
                    TString "\" \\\"\"" ../src/test_parser.nit:29,38--42
                  ACallExpr ../src/test_parser.nit:29,45--62
                    ACallExpr ../src/test_parser.nit:29,45--50
                      ACallExpr ../src/test_parser.nit:29,45
                        AImplicitSelfExpr ../src/test_parser.nit:29,45
                        TId "n" ../src/test_parser.nit:29,45
                        AListExprs ../src/test_parser.nit:29,45
                      TId "text" ../src/test_parser.nit:29,47--50
                      AListExprs ../src/test_parser.nit:29,50
                    TId "escape_to_c" ../src/test_parser.nit:29,52--62
                    AListExprs ../src/test_parser.nit:29,62
                  AStringExpr ../src/test_parser.nit:29,65--69
                    TString "\"\\\" \"" ../src/test_parser.nit:29,65--69
                  ACallExpr ../src/test_parser.nit:29,72--81
                    ACallExpr ../src/test_parser.nit:29,72
                      AImplicitSelfExpr ../src/test_parser.nit:29,72
                      TId "n" ../src/test_parser.nit:29,72
                      AListExprs ../src/test_parser.nit:29,72
                    TId "location" ../src/test_parser.nit:29,74--81
                    AListExprs ../src/test_parser.nit:29,81
                  AStringExpr ../src/test_parser.nit:29,84--87
                    TString "\"\\n\"" ../src/test_parser.nit:29,84--87
                  TCpar ")" ../src/test_parser.nit:29,88
            ABlockExpr ../src/test_parser.nit:31,4--32,5
              ACallExpr ../src/test_parser.nit:31,4--59
                AImplicitSelfExpr ../src/test_parser.nit:31,4
                TId "printn" ../src/test_parser.nit:31,4--9
                AParExprs ../src/test_parser.nit:31,10--59
                  TOpar "(" ../src/test_parser.nit:31,10
                  AStarExpr ../src/test_parser.nit:31,11--21
                    AStringExpr ../src/test_parser.nit:31,11--14
                      TString "\"  \"" ../src/test_parser.nit:31,11--14
                    ACallExpr ../src/test_parser.nit:31,18--21
                      AImplicitSelfExpr ../src/test_parser.nit:31,18
                      TId "rank" ../src/test_parser.nit:31,18--21
                      AListExprs ../src/test_parser.nit:31,21
                  ACallExpr ../src/test_parser.nit:31,24--35
                    ACallExpr ../src/test_parser.nit:31,24
                      AImplicitSelfExpr ../src/test_parser.nit:31,24
                      TId "n" ../src/test_parser.nit:31,24
                      AListExprs ../src/test_parser.nit:31,24
                    TId "class_name" ../src/test_parser.nit:31,26--35
                    AListExprs ../src/test_parser.nit:31,35
                  AStringExpr ../src/test_parser.nit:31,38--40
                    TString "\" \"" ../src/test_parser.nit:31,38--40
                  ACallExpr ../src/test_parser.nit:31,43--52
                    ACallExpr ../src/test_parser.nit:31,43
                      AImplicitSelfExpr ../src/test_parser.nit:31,43
                      TId "n" ../src/test_parser.nit:31,43
                      AListExprs ../src/test_parser.nit:31,43
                    TId "location" ../src/test_parser.nit:31,45--52
                    AListExprs ../src/test_parser.nit:31,52
                  AStringExpr ../src/test_parser.nit:31,55--58
                    TString "\"\\n\"" ../src/test_parser.nit:31,55--58
                  TCpar ")" ../src/test_parser.nit:31,59
              TKwend "end" ../src/test_parser.nit:32,3--5
          ACallAssignExpr ../src/test_parser.nit:33,3--17
            AImplicitSelfExpr ../src/test_parser.nit:33,3
            TId "rank" ../src/test_parser.nit:33,3--6
            AListExprs ../src/test_parser.nit:33,8
            TAssign "=" ../src/test_parser.nit:33,8
            APlusExpr ../src/test_parser.nit:33,10--17
              ACallExpr ../src/test_parser.nit:33,10--13
                AImplicitSelfExpr ../src/test_parser.nit:33,10
                TId "rank" ../src/test_parser.nit:33,10--13
                AListExprs ../src/test_parser.nit:33,13
              ADecIntExpr ../src/test_parser.nit:33,17
                TNumber "1" ../src/test_parser.nit:33,17
          ACallExpr ../src/test_parser.nit:34,3--19
            ACallExpr ../src/test_parser.nit:34,3
              AImplicitSelfExpr ../src/test_parser.nit:34,3
              TId "n" ../src/test_parser.nit:34,3
              AListExprs ../src/test_parser.nit:34,3
            TId "visit_all" ../src/test_parser.nit:34,5--13
            AParExprs ../src/test_parser.nit:34,14--19
              TOpar "(" ../src/test_parser.nit:34,14
              ASelfExpr ../src/test_parser.nit:34,15--18
                TKwself "self" ../src/test_parser.nit:34,15--18
              TCpar ")" ../src/test_parser.nit:34,19
          ACallAssignExpr ../src/test_parser.nit:35,3--17
            AImplicitSelfExpr ../src/test_parser.nit:35,3
            TId "rank" ../src/test_parser.nit:35,3--6
            AListExprs ../src/test_parser.nit:35,8
            TAssign "=" ../src/test_parser.nit:35,8
            AMinusExpr ../src/test_parser.nit:35,10--17
              ACallExpr ../src/test_parser.nit:35,10--13
                AImplicitSelfExpr ../src/test_parser.nit:35,10
                TId "rank" ../src/test_parser.nit:35,10--13
                AListExprs ../src/test_parser.nit:35,13
              ADecIntExpr ../src/test_parser.nit:35,17
                TNumber "1" ../src/test_parser.nit:35,17
          TKwend "end" ../src/test_parser.nit:36,2--4
      TKwend "end" ../src/test_parser.nit:37,1--3
    AMainClassdef ../src/test_parser.nit:39,1--146,3
      AMainMethPropdef ../src/test_parser.nit:39,1--146,3
        ABlockExpr ../src/test_parser.nit:39,1--146,3
          AVardeclExpr ../src/test_parser.nit:39,1--20
            TKwvar "var" ../src/test_parser.nit:39,1--3
            TId "no_print" ../src/test_parser.nit:39,5--12
            TAssign "=" ../src/test_parser.nit:39,14
            AFalseExpr ../src/test_parser.nit:39,16--20
              TKwfalse "false" ../src/test_parser.nit:39,16--20
          AVardeclExpr ../src/test_parser.nit:40,1--22
            TKwvar "var" ../src/test_parser.nit:40,1--3
            TId "only_lexer" ../src/test_parser.nit:40,5--14
            TAssign "=" ../src/test_parser.nit:40,16
            AFalseExpr ../src/test_parser.nit:40,18--22
              TKwfalse "false" ../src/test_parser.nit:40,18--22
          AVardeclExpr ../src/test_parser.nit:41,1--21
            TKwvar "var" ../src/test_parser.nit:41,1--3
            TId "need_help" ../src/test_parser.nit:41,5--13
            TAssign "=" ../src/test_parser.nit:41,15
            AFalseExpr ../src/test_parser.nit:41,17--21
              TKwfalse "false" ../src/test_parser.nit:41,17--21
          AVardeclExpr ../src/test_parser.nit:42,1--19
            TKwvar "var" ../src/test_parser.nit:42,1--3
            TId "no_file" ../src/test_parser.nit:42,5--11
            TAssign "=" ../src/test_parser.nit:42,13
            AFalseExpr ../src/test_parser.nit:42,15--19
              TKwfalse "false" ../src/test_parser.nit:42,15--19
          AVardeclExpr ../src/test_parser.nit:43,1--23
            TKwvar "var" ../src/test_parser.nit:43,1--3
            TId "interactive" ../src/test_parser.nit:43,5--15
            TAssign "=" ../src/test_parser.nit:43,17
            AFalseExpr ../src/test_parser.nit:43,19--23
              TKwfalse "false" ../src/test_parser.nit:43,19--23
          AWhileExpr ../src/test_parser.nit:45,1--63,3
            TKwwhile "while" ../src/test_parser.nit:45,1--5
            AAndExpr ../src/test_parser.nit:45,7--57
              ANotExpr ../src/test_parser.nit:45,7--23
                TKwnot "not" ../src/test_parser.nit:45,7--9
                ACallExpr ../src/test_parser.nit:45,11--23
                  ACallExpr ../src/test_parser.nit:45,11--14
                    AImplicitSelfExpr ../src/test_parser.nit:45,11
                    TId "args" ../src/test_parser.nit:45,11--14
                    AListExprs ../src/test_parser.nit:45,14
                  TId "is_empty" ../src/test_parser.nit:45,16--23
                  AListExprs ../src/test_parser.nit:45,23
              AEqExpr ../src/test_parser.nit:45,29--57
                ACallExpr ../src/test_parser.nit:45,29--50
                  ACallExpr ../src/test_parser.nit:45,29--44
                    ACallExpr ../src/test_parser.nit:45,29--38
                      ACallExpr ../src/test_parser.nit:45,29--32
                        AImplicitSelfExpr ../src/test_parser.nit:45,29
                        TId "args" ../src/test_parser.nit:45,29--32
                        AListExprs ../src/test_parser.nit:45,32
                      TId "first" ../src/test_parser.nit:45,34--38
                      AListExprs ../src/test_parser.nit:45,38
                    TId "chars" ../src/test_parser.nit:45,40--44
                    AListExprs ../src/test_parser.nit:45,44
                  TId "first" ../src/test_parser.nit:45,46--50
                  AListExprs ../src/test_parser.nit:45,50
                ACharExpr ../src/test_parser.nit:45,55--57
                  TChar "\'-\'" ../src/test_parser.nit:45,55--57
            TKwdo "do" ../src/test_parser.nit:45,59--60
            ABlockExpr ../src/test_parser.nit:46,2--63,3
              AIfExpr ../src/test_parser.nit:46,2--61,4
                TKwif "if" ../src/test_parser.nit:46,2--3
                AEqExpr ../src/test_parser.nit:46,5--22
                  ACallExpr ../src/test_parser.nit:46,5--14
                    ACallExpr ../src/test_parser.nit:46,5--8
                      AImplicitSelfExpr ../src/test_parser.nit:46,5
                      TId "args" ../src/test_parser.nit:46,5--8
                      AListExprs ../src/test_parser.nit:46,8
                    TId "first" ../src/test_parser.nit:46,10--14
                    AListExprs ../src/test_parser.nit:46,14
                  AStringExpr ../src/test_parser.nit:46,19--22
                    TString "\"-n\"" ../src/test_parser.nit:46,19--22
                ABlockExpr ../src/test_parser.nit:47,3--17
                  ACallAssignExpr ../src/test_parser.nit:47,3--17
                    AImplicitSelfExpr ../src/test_parser.nit:47,3
                    TId "no_print" ../src/test_parser.nit:47,3--10
                    AListExprs ../src/test_parser.nit:47,12
                    TAssign "=" ../src/test_parser.nit:47,12
                    ATrueExpr ../src/test_parser.nit:47,14--17
                      TKwtrue "true" ../src/test_parser.nit:47,14--17
                AIfExpr ../src/test_parser.nit:48,7--61,4
                  TKwif "if" ../src/test_parser.nit:48,7--8
                  AEqExpr ../src/test_parser.nit:48,10--27
                    ACallExpr ../src/test_parser.nit:48,10--19
                      ACallExpr ../src/test_parser.nit:48,10--13
                        AImplicitSelfExpr ../src/test_parser.nit:48,10
                        TId "args" ../src/test_parser.nit:48,10--13
                        AListExprs ../src/test_parser.nit:48,13
                      TId "first" ../src/test_parser.nit:48,15--19
                      AListExprs ../src/test_parser.nit:48,19
                    AStringExpr ../src/test_parser.nit:48,24--27
                      TString "\"-l\"" ../src/test_parser.nit:48,24--27
                  ABlockExpr ../src/test_parser.nit:49,3--19
                    ACallAssignExpr ../src/test_parser.nit:49,3--19
                      AImplicitSelfExpr ../src/test_parser.nit:49,3
                      TId "only_lexer" ../src/test_parser.nit:49,3--12
                      AListExprs ../src/test_parser.nit:49,14
                      TAssign "=" ../src/test_parser.nit:49,14
                      ATrueExpr ../src/test_parser.nit:49,16--19
                        TKwtrue "true" ../src/test_parser.nit:49,16--19
                  AIfExpr ../src/test_parser.nit:50,7--61,4
                    TKwif "if" ../src/test_parser.nit:50,7--8
                    AEqExpr ../src/test_parser.nit:50,10--27
                      ACallExpr ../src/test_parser.nit:50,10--19
                        ACallExpr ../src/test_parser.nit:50,10--13
                          AImplicitSelfExpr ../src/test_parser.nit:50,10
                          TId "args" ../src/test_parser.nit:50,10--13
                          AListExprs ../src/test_parser.nit:50,13
                        TId "first" ../src/test_parser.nit:50,15--19
                        AListExprs ../src/test_parser.nit:50,19
                      AStringExpr ../src/test_parser.nit:50,24--27
                        TString "\"-p\"" ../src/test_parser.nit:50,24--27
                    ABlockExpr ../src/test_parser.nit:51,3--20
                      ACallAssignExpr ../src/test_parser.nit:51,3--20
                        AImplicitSelfExpr ../src/test_parser.nit:51,3
                        TId "only_lexer" ../src/test_parser.nit:51,3--12
                        AListExprs ../src/test_parser.nit:51,14
                        TAssign "=" ../src/test_parser.nit:51,14
                        AFalseExpr ../src/test_parser.nit:51,16--20
                          TKwfalse "false" ../src/test_parser.nit:51,16--20
                    AIfExpr ../src/test_parser.nit:52,7--61,4
                      TKwif "if" ../src/test_parser.nit:52,7--8
                      AEqExpr ../src/test_parser.nit:52,10--27
                        ACallExpr ../src/test_parser.nit:52,10--19
                          ACallExpr ../src/test_parser.nit:52,10--13
                            AImplicitSelfExpr ../src/test_parser.nit:52,10
                            TId "args" ../src/test_parser.nit:52,10--13
                            AListExprs ../src/test_parser.nit:52,13
                          TId "first" ../src/test_parser.nit:52,15--19
                          AListExprs ../src/test_parser.nit:52,19
                        AStringExpr ../src/test_parser.nit:52,24--27
                          TString "\"-e\"" ../src/test_parser.nit:52,24--27
                      ABlockExpr ../src/test_parser.nit:53,3--16
                        ACallAssignExpr ../src/test_parser.nit:53,3--16
                          AImplicitSelfExpr ../src/test_parser.nit:53,3
                          TId "no_file" ../src/test_parser.nit:53,3--9
                          AListExprs ../src/test_parser.nit:53,11
                          TAssign "=" ../src/test_parser.nit:53,11
                          ATrueExpr ../src/test_parser.nit:53,13--16
                            TKwtrue "true" ../src/test_parser.nit:53,13--16
                      AIfExpr ../src/test_parser.nit:54,7--61,4
                        TKwif "if" ../src/test_parser.nit:54,7--8
                        AEqExpr ../src/test_parser.nit:54,10--27
                          ACallExpr ../src/test_parser.nit:54,10--19
                            ACallExpr ../src/test_parser.nit:54,10--13
                              AImplicitSelfExpr ../src/test_parser.nit:54,10
                              TId "args" ../src/test_parser.nit:54,10--13
                              AListExprs ../src/test_parser.nit:54,13
                            TId "first" ../src/test_parser.nit:54,15--19
                            AListExprs ../src/test_parser.nit:54,19
                          AStringExpr ../src/test_parser.nit:54,24--27
                            TString "\"-i\"" ../src/test_parser.nit:54,24--27
                        ABlockExpr ../src/test_parser.nit:55,3--20
                          ACallAssignExpr ../src/test_parser.nit:55,3--20
                            AImplicitSelfExpr ../src/test_parser.nit:55,3
                            TId "interactive" ../src/test_parser.nit:55,3--13
                            AListExprs ../src/test_parser.nit:55,15
                            TAssign "=" ../src/test_parser.nit:55,15
                            ATrueExpr ../src/test_parser.nit:55,17--20
                              TKwtrue "true" ../src/test_parser.nit:55,17--20
                        AIfExpr ../src/test_parser.nit:56,7--61,4
                          TKwif "if" ../src/test_parser.nit:56,7--8
                          AOrExpr ../src/test_parser.nit:56,10--49
                            AEqExpr ../src/test_parser.nit:56,10--27
                              ACallExpr ../src/test_parser.nit:56,10--19
                                ACallExpr ../src/test_parser.nit:56,10--13
                                  AImplicitSelfExpr ../src/test_parser.nit:56,10
                                  TId "args" ../src/test_parser.nit:56,10--13
                                  AListExprs ../src/test_parser.nit:56,13
                                TId "first" ../src/test_parser.nit:56,15--19
                                AListExprs ../src/test_parser.nit:56,19
                              AStringExpr ../src/test_parser.nit:56,24--27
                                TString "\"-h\"" ../src/test_parser.nit:56,24--27
                            AEqExpr ../src/test_parser.nit:56,32--49
                              ACallExpr ../src/test_parser.nit:56,32--41
                                ACallExpr ../src/test_parser.nit:56,32--35
                                  AImplicitSelfExpr ../src/test_parser.nit:56,32
                                  TId "args" ../src/test_parser.nit:56,32--35
                                  AListExprs ../src/test_parser.nit:56,35
                                TId "first" ../src/test_parser.nit:56,37--41
                                AListExprs ../src/test_parser.nit:56,41
                              AStringExpr ../src/test_parser.nit:56,46--49
                                TString "\"-?\"" ../src/test_parser.nit:56,46--49
                          ABlockExpr ../src/test_parser.nit:57,3--18
                            ACallAssignExpr ../src/test_parser.nit:57,3--18
                              AImplicitSelfExpr ../src/test_parser.nit:57,3
                              TId "need_help" ../src/test_parser.nit:57,3--11
                              AListExprs ../src/test_parser.nit:57,13
                              TAssign "=" ../src/test_parser.nit:57,13
                              ATrueExpr ../src/test_parser.nit:57,15--18
                                TKwtrue "true" ../src/test_parser.nit:57,15--18
                          ABlockExpr ../src/test_parser.nit:59,3--61,4
                            ACallExpr ../src/test_parser.nit:59,3--48
                              ACallExpr ../src/test_parser.nit:59,3--8
                                AImplicitSelfExpr ../src/test_parser.nit:59,3
                                TId "stderr" ../src/test_parser.nit:59,3--8
                                AListExprs ../src/test_parser.nit:59,8
                              TId "write" ../src/test_parser.nit:59,10--14
                              AParExprs ../src/test_parser.nit:59,15--48
                                TOpar "(" ../src/test_parser.nit:59,15
                                ASuperstringExpr ../src/test_parser.nit:59,16--47
                                  AStartStringExpr ../src/test_parser.nit:59,16--32
                                    TStartString "\"Unknown option {" ../src/test_parser.nit:59,16--32
                                  ACallExpr ../src/test_parser.nit:59,33--42
                                    ACallExpr ../src/test_parser.nit:59,33--36
                                      AImplicitSelfExpr ../src/test_parser.nit:59,33
                                      TId "args" ../src/test_parser.nit:59,33--36
                                      AListExprs ../src/test_parser.nit:59,36
                                    TId "first" ../src/test_parser.nit:59,38--42
                                    AListExprs ../src/test_parser.nit:59,42
                                  AEndStringExpr ../src/test_parser.nit:59,43--47
                                    TEndString "}.\\n\"" ../src/test_parser.nit:59,43--47
                                TCpar ")" ../src/test_parser.nit:59,48
                            ACallExpr ../src/test_parser.nit:60,3--9
                              AImplicitSelfExpr ../src/test_parser.nit:60,3
                              TId "exit" ../src/test_parser.nit:60,3--6
                              AParExprs ../src/test_parser.nit:60,7--9
                                TOpar "(" ../src/test_parser.nit:60,7
                                ADecIntExpr ../src/test_parser.nit:60,8
                                  TNumber "0" ../src/test_parser.nit:60,8
                                TCpar ")" ../src/test_parser.nit:60,9
                            TKwend "end" ../src/test_parser.nit:61,2--4
              ACallExpr ../src/test_parser.nit:62,2--11
                ACallExpr ../src/test_parser.nit:62,2--5
                  AImplicitSelfExpr ../src/test_parser.nit:62,2
                  TId "args" ../src/test_parser.nit:62,2--5
                  AListExprs ../src/test_parser.nit:62,5
                TId "shift" ../src/test_parser.nit:62,7--11
                AListExprs ../src/test_parser.nit:62,11
              TKwend "end" ../src/test_parser.nit:63,1--3
          AIfExpr ../src/test_parser.nit:65,1--146,3
            TKwif "if" ../src/test_parser.nit:65,1--2
            AOrExpr ../src/test_parser.nit:65,4--51
              AParExpr ../src/test_parser.nit:65,4--38
                TOpar "(" ../src/test_parser.nit:65,4
                AAndExpr ../src/test_parser.nit:65,5--37
                  ACallExpr ../src/test_parser.nit:65,5--17
                    ACallExpr ../src/test_parser.nit:65,5--8
                      AImplicitSelfExpr ../src/test_parser.nit:65,5
                      TId "args" ../src/test_parser.nit:65,5--8
                      AListExprs ../src/test_parser.nit:65,8
                    TId "is_empty" ../src/test_parser.nit:65,10--17
                    AListExprs ../src/test_parser.nit:65,17
                  ANotExpr ../src/test_parser.nit:65,23--37
                    TKwnot "not" ../src/test_parser.nit:65,23--25
                    ACallExpr ../src/test_parser.nit:65,27--37
                      AImplicitSelfExpr ../src/test_parser.nit:65,27
                      TId "interactive" ../src/test_parser.nit:65,27--37
                      AListExprs ../src/test_parser.nit:65,37
                TCpar ")" ../src/test_parser.nit:65,38
              ACallExpr ../src/test_parser.nit:65,43--51
                AImplicitSelfExpr ../src/test_parser.nit:65,43
                TId "need_help" ../src/test_parser.nit:65,43--51
                AListExprs ../src/test_parser.nit:65,51
            ABlockExpr ../src/test_parser.nit:66,2--76,30
              ACallExpr ../src/test_parser.nit:66,2--16
                AImplicitSelfExpr ../src/test_parser.nit:66,2
                TId "print" ../src/test_parser.nit:66,2--6
                AParExprs ../src/test_parser.nit:66,7--16
                  TOpar "(" ../src/test_parser.nit:66,7
                  AStringExpr ../src/test_parser.nit:66,8--15
                    TString "\"usage:\"" ../src/test_parser.nit:66,8--15
                  TCpar ")" ../src/test_parser.nit:66,16
              ACallExpr ../src/test_parser.nit:67,2--54
                AImplicitSelfExpr ../src/test_parser.nit:67,2
                TId "print" ../src/test_parser.nit:67,2--6
                AParExprs ../src/test_parser.nit:67,7--54
                  TOpar "(" ../src/test_parser.nit:67,7
                  AStringExpr ../src/test_parser.nit:67,8--53
                    TString "\"  test_parser [options]... <filename.nit>...\"" ../src/test_parser.nit:67,8--53
                  TCpar ")" ../src/test_parser.nit:67,54
              ACallExpr ../src/test_parser.nit:68,2--49
                AImplicitSelfExpr ../src/test_parser.nit:68,2
                TId "print" ../src/test_parser.nit:68,2--6
                AParExprs ../src/test_parser.nit:68,7--49
                  TOpar "(" ../src/test_parser.nit:68,7
                  AStringExpr ../src/test_parser.nit:68,8--48
                    TString "\"  test_parser -e [options]... <text>...\"" ../src/test_parser.nit:68,8--48
                  TCpar ")" ../src/test_parser.nit:68,49
              ACallExpr ../src/test_parser.nit:69,2--39
                AImplicitSelfExpr ../src/test_parser.nit:69,2
                TId "print" ../src/test_parser.nit:69,2--6
                AParExprs ../src/test_parser.nit:69,7--39
                  TOpar "(" ../src/test_parser.nit:69,7
                  AStringExpr ../src/test_parser.nit:69,8--38
                    TString "\"  test_parser -i [options]...\"" ../src/test_parser.nit:69,8--38
                  TCpar ")" ../src/test_parser.nit:69,39
              ACallExpr ../src/test_parser.nit:70,2--18
                AImplicitSelfExpr ../src/test_parser.nit:70,2
                TId "print" ../src/test_parser.nit:70,2--6
                AParExprs ../src/test_parser.nit:70,7--18
                  TOpar "(" ../src/test_parser.nit:70,7
                  AStringExpr ../src/test_parser.nit:70,8--17
                    TString "\"options:\"" ../src/test_parser.nit:70,8--17
                  TCpar ")" ../src/test_parser.nit:70,18
              ACallExpr ../src/test_parser.nit:71,2--36
                AImplicitSelfExpr ../src/test_parser.nit:71,2
                TId "print" ../src/test_parser.nit:71,2--6
                AParExprs ../src/test_parser.nit:71,7--36
                  TOpar "(" ../src/test_parser.nit:71,7
                  AStringExpr ../src/test_parser.nit:71,8--35
                    TString "\"  -n\11do not print anything\"" ../src/test_parser.nit:71,8--35
                  TCpar ")" ../src/test_parser.nit:71,36
              ACallExpr ../src/test_parser.nit:72,2--25
                AImplicitSelfExpr ../src/test_parser.nit:72,2
                TId "print" ../src/test_parser.nit:72,2--6
                AParExprs ../src/test_parser.nit:72,7--25
                  TOpar "(" ../src/test_parser.nit:72,7
                  AStringExpr ../src/test_parser.nit:72,8--24
                    TString "\"  -l\11only lexer\"" ../src/test_parser.nit:72,8--24
                  TCpar ")" ../src/test_parser.nit:72,25
              ACallExpr ../src/test_parser.nit:73,2--41
                AImplicitSelfExpr ../src/test_parser.nit:73,2
                TId "print" ../src/test_parser.nit:73,2--6
                AParExprs ../src/test_parser.nit:73,7--41
                  TOpar "(" ../src/test_parser.nit:73,7
                  AStringExpr ../src/test_parser.nit:73,8--40
                    TString "\"  -p\11lexer and parser (default)\"" ../src/test_parser.nit:73,8--40
                  TCpar ")" ../src/test_parser.nit:73,41
              ACallExpr ../src/test_parser.nit:74,2--68
                AImplicitSelfExpr ../src/test_parser.nit:74,2
                TId "print" ../src/test_parser.nit:74,2--6
                AParExprs ../src/test_parser.nit:74,7--68
                  TOpar "(" ../src/test_parser.nit:74,7
                  AStringExpr ../src/test_parser.nit:74,8--67
                    TString "\"  -e\11instead on files, each argument is a content to parse\"" ../src/test_parser.nit:74,8--67
                  TCpar ")" ../src/test_parser.nit:74,68
              ACallExpr ../src/test_parser.nit:75,2--51
                AImplicitSelfExpr ../src/test_parser.nit:75,2
                TId "print" ../src/test_parser.nit:75,2--6
                AParExprs ../src/test_parser.nit:75,7--51
                  TOpar "(" ../src/test_parser.nit:75,7
                  AStringExpr ../src/test_parser.nit:75,8--50
                    TString "\"  -i\11tree to parse are read interactively\"" ../src/test_parser.nit:75,8--50
                  TCpar ")" ../src/test_parser.nit:75,51
              ACallExpr ../src/test_parser.nit:76,2--30
                AImplicitSelfExpr ../src/test_parser.nit:76,2
                TId "print" ../src/test_parser.nit:76,2--6
                AParExprs ../src/test_parser.nit:76,7--30
                  TOpar "(" ../src/test_parser.nit:76,7
                  AStringExpr ../src/test_parser.nit:76,8--29
                    TString "\"  -h\11print this help\"" ../src/test_parser.nit:76,8--29
                  TCpar ")" ../src/test_parser.nit:76,30
            AIfExpr ../src/test_parser.nit:77,6--146,3
              TKwif "if" ../src/test_parser.nit:77,6--7
              ACallExpr ../src/test_parser.nit:77,9--19
                AImplicitSelfExpr ../src/test_parser.nit:77,9
                TId "interactive" ../src/test_parser.nit:77,9--19
                AListExprs ../src/test_parser.nit:77,19
              ABlockExpr ../src/test_parser.nit:78,2--111,4
                AIfExpr ../src/test_parser.nit:78,2--87,4
                  TKwif "if" ../src/test_parser.nit:78,2--3
                  ACallExpr ../src/test_parser.nit:78,5--14
                    AImplicitSelfExpr ../src/test_parser.nit:78,5
                    TId "only_lexer" ../src/test_parser.nit:78,5--14
                    AListExprs ../src/test_parser.nit:78,14
                  ABlockExpr ../src/test_parser.nit:79,3--80,8
                    ACallExpr ../src/test_parser.nit:79,3--44
                      AImplicitSelfExpr ../src/test_parser.nit:79,3
                      TId "print" ../src/test_parser.nit:79,3--7
                      AListExprs ../src/test_parser.nit:79,9--44
                        AStringExpr ../src/test_parser.nit:79,9--44
                          TString "\"Error: -l and -i are incompatibles\"" ../src/test_parser.nit:79,9--44
                    ACallExpr ../src/test_parser.nit:80,3--8
                      AImplicitSelfExpr ../src/test_parser.nit:80,3
                      TId "exit" ../src/test_parser.nit:80,3--6
                      AListExprs ../src/test_parser.nit:80,8
                        ADecIntExpr ../src/test_parser.nit:80,8
                          TNumber "1" ../src/test_parser.nit:80,8
                  AIfExpr ../src/test_parser.nit:81,7--87,4
                    TKwif "if" ../src/test_parser.nit:81,7--8
                    ACallExpr ../src/test_parser.nit:81,10--16
                      AImplicitSelfExpr ../src/test_parser.nit:81,10
                      TId "no_file" ../src/test_parser.nit:81,10--16
                      AListExprs ../src/test_parser.nit:81,16
                    ABlockExpr ../src/test_parser.nit:82,3--83,8
                      ACallExpr ../src/test_parser.nit:82,3--44
                        AImplicitSelfExpr ../src/test_parser.nit:82,3
                        TId "print" ../src/test_parser.nit:82,3--7
                        AListExprs ../src/test_parser.nit:82,9--44
                          AStringExpr ../src/test_parser.nit:82,9--44
                            TString "\"Error: -e and -i are incompatibles\"" ../src/test_parser.nit:82,9--44
                      ACallExpr ../src/test_parser.nit:83,3--8
                        AImplicitSelfExpr ../src/test_parser.nit:83,3
                        TId "exit" ../src/test_parser.nit:83,3--6
                        AListExprs ../src/test_parser.nit:83,8
                          ADecIntExpr ../src/test_parser.nit:83,8
                            TNumber "1" ../src/test_parser.nit:83,8
                    AIfExpr ../src/test_parser.nit:84,7--87,4
                      TKwif "if" ../src/test_parser.nit:84,7--8
                      ANotExpr ../src/test_parser.nit:84,10--26
                        TKwnot "not" ../src/test_parser.nit:84,10--12
                        ACallExpr ../src/test_parser.nit:84,14--26
                          ACallExpr ../src/test_parser.nit:84,14--17
                            AImplicitSelfExpr ../src/test_parser.nit:84,14
                            TId "args" ../src/test_parser.nit:84,14--17
                            AListExprs ../src/test_parser.nit:84,17
                          TId "is_empty" ../src/test_parser.nit:84,19--26
                          AListExprs ../src/test_parser.nit:84,26
                      ABlockExpr ../src/test_parser.nit:85,3--86,8
                        ACallExpr ../src/test_parser.nit:85,3--43
                          AImplicitSelfExpr ../src/test_parser.nit:85,3
                          TId "print" ../src/test_parser.nit:85,3--7
                          AListExprs ../src/test_parser.nit:85,9--43
                            AStringExpr ../src/test_parser.nit:85,9--43
                              TString "\"Error: -i works without arguments\"" ../src/test_parser.nit:85,9--43
                        ACallExpr ../src/test_parser.nit:86,3--8
                          AImplicitSelfExpr ../src/test_parser.nit:86,3
                          TId "exit" ../src/test_parser.nit:86,3--6
                          AListExprs ../src/test_parser.nit:86,8
                            ADecIntExpr ../src/test_parser.nit:86,8
                              TNumber "1" ../src/test_parser.nit:86,8
                      ABlockExpr ../src/test_parser.nit:87,2--4
                        TKwend "end" ../src/test_parser.nit:87,2--4
                AVardeclExpr ../src/test_parser.nit:89,2--25
                  TKwvar "var" ../src/test_parser.nit:89,2--4
                  TId "tc" ../src/test_parser.nit:89,6--7
                  TAssign "=" ../src/test_parser.nit:89,9
                  ANewExpr ../src/test_parser.nit:89,11--25
                    TKwnew "new" ../src/test_parser.nit:89,11--13
                    AType ../src/test_parser.nit:89,15--25
                      TClassid "ToolContext" ../src/test_parser.nit:89,15--25
                    AListExprs ../src/test_parser.nit:89,25
                ALoopExpr ../src/test_parser.nit:91,2--111,4
                  TKwloop "loop" ../src/test_parser.nit:91,2--5
                  ABlockExpr ../src/test_parser.nit:92,3--111,4
                    AVardeclExpr ../src/test_parser.nit:92,3--37
                      TKwvar "var" ../src/test_parser.nit:92,3--5
                      TId "n" ../src/test_parser.nit:92,7
                      TAssign "=" ../src/test_parser.nit:92,9
                      ACallExpr ../src/test_parser.nit:92,11--37
                        ACallExpr ../src/test_parser.nit:92,11--12
                          AImplicitSelfExpr ../src/test_parser.nit:92,11
                          TId "tc" ../src/test_parser.nit:92,11--12
                          AListExprs ../src/test_parser.nit:92,12
                        TId "interactive_parse" ../src/test_parser.nit:92,14--30
                        AParExprs ../src/test_parser.nit:92,31--37
                          TOpar "(" ../src/test_parser.nit:92,31
                          AStringExpr ../src/test_parser.nit:92,32--36
                            TString "\"-->\"" ../src/test_parser.nit:92,32--36
                          TCpar ")" ../src/test_parser.nit:92,37
                    AIfExpr ../src/test_parser.nit:93,3--101,5
                      TKwif "if" ../src/test_parser.nit:93,3--4
                      AIsaExpr ../src/test_parser.nit:93,6--18
                        ACallExpr ../src/test_parser.nit:93,6
                          AImplicitSelfExpr ../src/test_parser.nit:93,6
                          TId "n" ../src/test_parser.nit:93,6
                          AListExprs ../src/test_parser.nit:93,6
                        AType ../src/test_parser.nit:93,12--18
                          TClassid "TString" ../src/test_parser.nit:93,12--18
                      ABlockExpr ../src/test_parser.nit:94,4--100,11
                        AVardeclExpr ../src/test_parser.nit:94,4--17
                          TKwvar "var" ../src/test_parser.nit:94,4--6
                          TId "s" ../src/test_parser.nit:94,8
                          TAssign "=" ../src/test_parser.nit:94,10
                          ACallExpr ../src/test_parser.nit:94,12--17
                            ACallExpr ../src/test_parser.nit:94,12
                              AImplicitSelfExpr ../src/test_parser.nit:94,12
                              TId "n" ../src/test_parser.nit:94,12
                              AListExprs ../src/test_parser.nit:94,12
                            TId "text" ../src/test_parser.nit:94,14--17
                            AListExprs ../src/test_parser.nit:94,17
                        AIfExpr ../src/test_parser.nit:95,4--99,6
                          TKwif "if" ../src/test_parser.nit:95,4--5
                          AEqExpr ../src/test_parser.nit:95,7--15
                            ACallExpr ../src/test_parser.nit:95,7
                              AImplicitSelfExpr ../src/test_parser.nit:95,7
                              TId "s" ../src/test_parser.nit:95,7
                              AListExprs ../src/test_parser.nit:95,7
                            AStringExpr ../src/test_parser.nit:95,12--15
                              TString "\":q\"" ../src/test_parser.nit:95,12--15
                          ABlockExpr ../src/test_parser.nit:96,5--9
                            ABreakExpr ../src/test_parser.nit:96,5--9
                              TKwbreak "break" ../src/test_parser.nit:96,5--9
                          ABlockExpr ../src/test_parser.nit:98,5--99,6
                            ACallExpr ../src/test_parser.nit:98,5--24
                              AImplicitSelfExpr ../src/test_parser.nit:98,5
                              TId "print" ../src/test_parser.nit:98,5--9
                              AListExprs ../src/test_parser.nit:98,11--24
                                AStringExpr ../src/test_parser.nit:98,11--24
                                  TString "\"`:q` to quit\"" ../src/test_parser.nit:98,11--24
                            TKwend "end" ../src/test_parser.nit:99,4--6
                        AContinueExpr ../src/test_parser.nit:100,4--11
                          TKwcontinue "continue" ../src/test_parser.nit:100,4--11
                      ABlockExpr ../src/test_parser.nit:101,3--5
                        TKwend "end" ../src/test_parser.nit:101,3--5
                    AIfExpr ../src/test_parser.nit:103,3--106,5
                      TKwif "if" ../src/test_parser.nit:103,3--4
                      AIsaExpr ../src/test_parser.nit:103,6--17
                        ACallExpr ../src/test_parser.nit:103,6
                          AImplicitSelfExpr ../src/test_parser.nit:103,6
                          TId "n" ../src/test_parser.nit:103,6
                          AListExprs ../src/test_parser.nit:103,6
                        AType ../src/test_parser.nit:103,12--17
                          TClassid "AError" ../src/test_parser.nit:103,12--17
                      ABlockExpr ../src/test_parser.nit:104,4--105,11
                        ACallExpr ../src/test_parser.nit:104,4--57
                          AImplicitSelfExpr ../src/test_parser.nit:104,4
                          TId "print" ../src/test_parser.nit:104,4--8
                          AListExprs ../src/test_parser.nit:104,10--57
                            ASuperstringExpr ../src/test_parser.nit:104,10--57
                              AStartStringExpr ../src/test_parser.nit:104,10--11
                                TStartString "\"{" ../src/test_parser.nit:104,10--11
                              ACallExpr ../src/test_parser.nit:104,12--42
                                ACallExpr ../src/test_parser.nit:104,12--21
                                  ACallExpr ../src/test_parser.nit:104,12
                                    AImplicitSelfExpr ../src/test_parser.nit:104,12
                                    TId "n" ../src/test_parser.nit:104,12
                                    AListExprs ../src/test_parser.nit:104,12
                                  TId "location" ../src/test_parser.nit:104,14--21
                                  AListExprs ../src/test_parser.nit:104,21
                                TId "colored_line" ../src/test_parser.nit:104,23--34
                                AParExprs ../src/test_parser.nit:104,35--42
                                  TOpar "(" ../src/test_parser.nit:104,35
                                  AStringExpr ../src/test_parser.nit:104,36--41
                                    TString "\"0;31\"" ../src/test_parser.nit:104,36--41
                                  TCpar ")" ../src/test_parser.nit:104,42
                              AMidStringExpr ../src/test_parser.nit:104,43--46
                                TMidString "}: {" ../src/test_parser.nit:104,43--46
                              ACallExpr ../src/test_parser.nit:104,47--55
                                ACallExpr ../src/test_parser.nit:104,47
                                  AImplicitSelfExpr ../src/test_parser.nit:104,47
                                  TId "n" ../src/test_parser.nit:104,47
                                  AListExprs ../src/test_parser.nit:104,47
                                TId "message" ../src/test_parser.nit:104,49--55
                                AListExprs ../src/test_parser.nit:104,55
                              AEndStringExpr ../src/test_parser.nit:104,56--57
                                TEndString "}\"" ../src/test_parser.nit:104,56--57
                        AContinueExpr ../src/test_parser.nit:105,4--11
                          TKwcontinue "continue" ../src/test_parser.nit:105,4--11
                      ABlockExpr ../src/test_parser.nit:106,3--5
                        TKwend "end" ../src/test_parser.nit:106,3--5
                    AIfExpr ../src/test_parser.nit:108,3--110,5
                      TKwif "if" ../src/test_parser.nit:108,3--4
                      ANotExpr ../src/test_parser.nit:108,6--17
                        TKwnot "not" ../src/test_parser.nit:108,6--8
                        ACallExpr ../src/test_parser.nit:108,10--17
                          AImplicitSelfExpr ../src/test_parser.nit:108,10
                          TId "no_print" ../src/test_parser.nit:108,10--17
                          AListExprs ../src/test_parser.nit:108,17
                      ABlockExpr ../src/test_parser.nit:109,4--40
                        ACallExpr ../src/test_parser.nit:109,4--40
                          AParExpr ../src/test_parser.nit:109,4--25
                            TOpar "(" ../src/test_parser.nit:109,4
                            ANewExpr ../src/test_parser.nit:109,5--24
                              TKwnew "new" ../src/test_parser.nit:109,5--7
                              AType ../src/test_parser.nit:109,9--24
                                TClassid "PrintTreeVisitor" ../src/test_parser.nit:109,9--24
                              AListExprs ../src/test_parser.nit:109,24
                            TCpar ")" ../src/test_parser.nit:109,25
                          TId "enter_visit" ../src/test_parser.nit:109,27--37
                          AParExprs ../src/test_parser.nit:109,38--40
                            TOpar "(" ../src/test_parser.nit:109,38
                            ACallExpr ../src/test_parser.nit:109,39
                              AImplicitSelfExpr ../src/test_parser.nit:109,39
                              TId "n" ../src/test_parser.nit:109,39
                              AListExprs ../src/test_parser.nit:109,39
                            TCpar ")" ../src/test_parser.nit:109,40
                      ABlockExpr ../src/test_parser.nit:110,3--5
                        TKwend "end" ../src/test_parser.nit:110,3--5
                    TKwend "end" ../src/test_parser.nit:111,2--4
              ABlockExpr ../src/test_parser.nit:113,2--146,3
                AForExpr ../src/test_parser.nit:113,2--145,4
                  TKwfor "for" ../src/test_parser.nit:113,2--4
                  TId "a" ../src/test_parser.nit:113,6
                  ACallExpr ../src/test_parser.nit:113,11--14
                    AImplicitSelfExpr ../src/test_parser.nit:113,11
                    TId "args" ../src/test_parser.nit:113,11--14
                    AListExprs ../src/test_parser.nit:113,14
                  TKwdo "do" ../src/test_parser.nit:113,16--17
                  ABlockExpr ../src/test_parser.nit:114,3--145,4
                    AVardeclExpr ../src/test_parser.nit:114,3--12
                      TKwvar "var" ../src/test_parser.nit:114,3--5
                      TId "source" ../src/test_parser.nit:114,7--12
                    AIfExpr ../src/test_parser.nit:115,3--121,5
                      TKwif "if" ../src/test_parser.nit:115,3--4
                      ACallExpr ../src/test_parser.nit:115,6--12
                        AImplicitSelfExpr ../src/test_parser.nit:115,6
                        TId "no_file" ../src/test_parser.nit:115,6--12
                        AListExprs ../src/test_parser.nit:115,12
                      ABlockExpr ../src/test_parser.nit:116,4--45
                        ACallAssignExpr ../src/test_parser.nit:116,4--45
                          AImplicitSelfExpr ../src/test_parser.nit:116,4
                          TId "source" ../src/test_parser.nit:116,4--9
                          AListExprs ../src/test_parser.nit:116,11
                          TAssign "=" ../src/test_parser.nit:116,11
                          ANewExpr ../src/test_parser.nit:116,13--45
                            TKwnew "new" ../src/test_parser.nit:116,13--15
                            AType ../src/test_parser.nit:116,17--26
                              TClassid "SourceFile" ../src/test_parser.nit:116,17--26
                            TId "from_string" ../src/test_parser.nit:116,28--38
                            AParExprs ../src/test_parser.nit:116,39--45
                              TOpar "(" ../src/test_parser.nit:116,39
                              AStringExpr ../src/test_parser.nit:116,40--41
                                TString "\"\"" ../src/test_parser.nit:116,40--41
                              ACallExpr ../src/test_parser.nit:116,44
                                AImplicitSelfExpr ../src/test_parser.nit:116,44
                                TId "a" ../src/test_parser.nit:116,44
                                AListExprs ../src/test_parser.nit:116,44
                              TCpar ")" ../src/test_parser.nit:116,45
                      ABlockExpr ../src/test_parser.nit:118,4--121,5
                        AVardeclExpr ../src/test_parser.nit:118,4--33
                          TKwvar "var" ../src/test_parser.nit:118,4--6
                          TId "f" ../src/test_parser.nit:118,8
                          TAssign "=" ../src/test_parser.nit:118,10
                          ANewExpr ../src/test_parser.nit:118,12--33
                            TKwnew "new" ../src/test_parser.nit:118,12--14
                            AType ../src/test_parser.nit:118,16--25
                              TClassid "FileReader" ../src/test_parser.nit:118,16--25
                            TId "open" ../src/test_parser.nit:118,27--30
                            AParExprs ../src/test_parser.nit:118,31--33
                              TOpar "(" ../src/test_parser.nit:118,31
                              ACallExpr ../src/test_parser.nit:118,32
                                AImplicitSelfExpr ../src/test_parser.nit:118,32
                                TId "a" ../src/test_parser.nit:118,32
                                AListExprs ../src/test_parser.nit:118,32
                              TCpar ")" ../src/test_parser.nit:118,33
                        ACallAssignExpr ../src/test_parser.nit:119,4--32
                          AImplicitSelfExpr ../src/test_parser.nit:119,4
                          TId "source" ../src/test_parser.nit:119,4--9
                          AListExprs ../src/test_parser.nit:119,11
                          TAssign "=" ../src/test_parser.nit:119,11
                          ANewExpr ../src/test_parser.nit:119,13--32
                            TKwnew "new" ../src/test_parser.nit:119,13--15
                            AType ../src/test_parser.nit:119,17--26
                              TClassid "SourceFile" ../src/test_parser.nit:119,17--26
                            AParExprs ../src/test_parser.nit:119,27--32
                              TOpar "(" ../src/test_parser.nit:119,27
                              ACallExpr ../src/test_parser.nit:119,28
                                AImplicitSelfExpr ../src/test_parser.nit:119,28
                                TId "a" ../src/test_parser.nit:119,28
                                AListExprs ../src/test_parser.nit:119,28
                              ACallExpr ../src/test_parser.nit:119,31
                                AImplicitSelfExpr ../src/test_parser.nit:119,31
                                TId "f" ../src/test_parser.nit:119,31
                                AListExprs ../src/test_parser.nit:119,31
                              TCpar ")" ../src/test_parser.nit:119,32
                        ACallExpr ../src/test_parser.nit:120,4--10
                          ACallExpr ../src/test_parser.nit:120,4
                            AImplicitSelfExpr ../src/test_parser.nit:120,4
                            TId "f" ../src/test_parser.nit:120,4
                            AListExprs ../src/test_parser.nit:120,4
                          TId "close" ../src/test_parser.nit:120,6--10
                          AListExprs ../src/test_parser.nit:120,10
                        TKwend "end" ../src/test_parser.nit:121,3--5
                    AVardeclExpr ../src/test_parser.nit:122,3--31
                      TKwvar "var" ../src/test_parser.nit:122,3--5
                      TId "lexer" ../src/test_parser.nit:122,7--11
                      TAssign "=" ../src/test_parser.nit:122,13
                      ANewExpr ../src/test_parser.nit:122,15--31
                        TKwnew "new" ../src/test_parser.nit:122,15--17
                        AType ../src/test_parser.nit:122,19--23
                          TClassid "Lexer" ../src/test_parser.nit:122,19--23
                        AParExprs ../src/test_parser.nit:122,24--31
                          TOpar "(" ../src/test_parser.nit:122,24
                          ACallExpr ../src/test_parser.nit:122,25--30
                            AImplicitSelfExpr ../src/test_parser.nit:122,25
                            TId "source" ../src/test_parser.nit:122,25--30
                            AListExprs ../src/test_parser.nit:122,30
                          TCpar ")" ../src/test_parser.nit:122,31
                    AIfExpr ../src/test_parser.nit:123,3--144,5
                      TKwif "if" ../src/test_parser.nit:123,3--4
                      ACallExpr ../src/test_parser.nit:123,6--15
                        AImplicitSelfExpr ../src/test_parser.nit:123,6
                        TId "only_lexer" ../src/test_parser.nit:123,6--15
                        AListExprs ../src/test_parser.nit:123,15
                      ABlockExpr ../src/test_parser.nit:124,4--130,6
                        AVardeclExpr ../src/test_parser.nit:124,4--25
                          TKwvar "var" ../src/test_parser.nit:124,4--6
                          TId "token" ../src/test_parser.nit:124,8--12
                          TAssign "=" ../src/test_parser.nit:124,14
                          ACallExpr ../src/test_parser.nit:124,16--25
                            ACallExpr ../src/test_parser.nit:124,16--20
                              AImplicitSelfExpr ../src/test_parser.nit:124,16
                              TId "lexer" ../src/test_parser.nit:124,16--20
                              AListExprs ../src/test_parser.nit:124,20
                            TId "next" ../src/test_parser.nit:124,22--25
                            AListExprs ../src/test_parser.nit:124,25
                        AWhileExpr ../src/test_parser.nit:125,4--130,6
                          TKwwhile "while" ../src/test_parser.nit:125,4--8
                          ANotExpr ../src/test_parser.nit:125,10--26
                            TKwnot "not" ../src/test_parser.nit:125,10--12
                            AIsaExpr ../src/test_parser.nit:125,14--26
                              ACallExpr ../src/test_parser.nit:125,14--18
                                AImplicitSelfExpr ../src/test_parser.nit:125,14
                                TId "token" ../src/test_parser.nit:125,14--18
                                AListExprs ../src/test_parser.nit:125,18
                              AType ../src/test_parser.nit:125,24--26
                                TClassid "EOF" ../src/test_parser.nit:125,24--26
                          TKwdo "do" ../src/test_parser.nit:125,28--29
                          ABlockExpr ../src/test_parser.nit:126,5--130,6
                            AIfExpr ../src/test_parser.nit:126,5--128,7
                              TKwif "if" ../src/test_parser.nit:126,5--6
                              ANotExpr ../src/test_parser.nit:126,8--19
                                TKwnot "not" ../src/test_parser.nit:126,8--10
                                ACallExpr ../src/test_parser.nit:126,12--19
                                  AImplicitSelfExpr ../src/test_parser.nit:126,12
                                  TId "no_print" ../src/test_parser.nit:126,12--19
                                  AListExprs ../src/test_parser.nit:126,19
                              ABlockExpr ../src/test_parser.nit:127,6--64
                                ACallExpr ../src/test_parser.nit:127,6--64
                                  AImplicitSelfExpr ../src/test_parser.nit:127,6
                                  TId "print" ../src/test_parser.nit:127,6--10
                                  AParExprs ../src/test_parser.nit:127,11--64
                                    TOpar "(" ../src/test_parser.nit:127,11
                                    ASuperstringExpr ../src/test_parser.nit:127,12--63
                                      AStartStringExpr ../src/test_parser.nit:127,12--27
                                        TStartString "\"Read token at {" ../src/test_parser.nit:127,12--27
                                      ACallExpr ../src/test_parser.nit:127,28--41
                                        ACallExpr ../src/test_parser.nit:127,28--32
                                          AImplicitSelfExpr ../src/test_parser.nit:127,28
                                          TId "token" ../src/test_parser.nit:127,28--32
                                          AListExprs ../src/test_parser.nit:127,32
                                        TId "location" ../src/test_parser.nit:127,34--41
                                        AListExprs ../src/test_parser.nit:127,41
                                      AMidStringExpr ../src/test_parser.nit:127,42--50
                                        TMidString "} text=\'{" ../src/test_parser.nit:127,42--50
                                      ACallExpr ../src/test_parser.nit:127,51--60
                                        ACallExpr ../src/test_parser.nit:127,51--55
                                          AImplicitSelfExpr ../src/test_parser.nit:127,51
                                          TId "token" ../src/test_parser.nit:127,51--55
                                          AListExprs ../src/test_parser.nit:127,55
                                        TId "text" ../src/test_parser.nit:127,57--60
                                        AListExprs ../src/test_parser.nit:127,60
                                      AEndStringExpr ../src/test_parser.nit:127,61--63
                                        TEndString "}\'\"" ../src/test_parser.nit:127,61--63
                                    TCpar ")" ../src/test_parser.nit:127,64
                              ABlockExpr ../src/test_parser.nit:128,5--7
                                TKwend "end" ../src/test_parser.nit:128,5--7
                            ACallAssignExpr ../src/test_parser.nit:129,5--22
                              AImplicitSelfExpr ../src/test_parser.nit:129,5
                              TId "token" ../src/test_parser.nit:129,5--9
                              AListExprs ../src/test_parser.nit:129,11
                              TAssign "=" ../src/test_parser.nit:129,11
                              ACallExpr ../src/test_parser.nit:129,13--22
                                ACallExpr ../src/test_parser.nit:129,13--17
                                  AImplicitSelfExpr ../src/test_parser.nit:129,13
                                  TId "lexer" ../src/test_parser.nit:129,13--17
                                  AListExprs ../src/test_parser.nit:129,17
                                TId "next" ../src/test_parser.nit:129,19--22
                                AListExprs ../src/test_parser.nit:129,22
                            TKwend "end" ../src/test_parser.nit:130,4--6
                      ABlockExpr ../src/test_parser.nit:132,4--144,5
                        AVardeclExpr ../src/test_parser.nit:132,4--33
                          TKwvar "var" ../src/test_parser.nit:132,4--6
                          TId "parser" ../src/test_parser.nit:132,8--13
                          TAssign "=" ../src/test_parser.nit:132,15
                          ANewExpr ../src/test_parser.nit:132,17--33
                            TKwnew "new" ../src/test_parser.nit:132,17--19
                            AType ../src/test_parser.nit:132,21--26
                              TClassid "Parser" ../src/test_parser.nit:132,21--26
                            AParExprs ../src/test_parser.nit:132,27--33
                              TOpar "(" ../src/test_parser.nit:132,27
                              ACallExpr ../src/test_parser.nit:132,28--32
                                AImplicitSelfExpr ../src/test_parser.nit:132,28
                                TId "lexer" ../src/test_parser.nit:132,28--32
                                AListExprs ../src/test_parser.nit:132,32
                              TCpar ")" ../src/test_parser.nit:132,33
                        AVardeclExpr ../src/test_parser.nit:133,4--26
                          TKwvar "var" ../src/test_parser.nit:133,4--6
                          TId "tree" ../src/test_parser.nit:133,8--11
                          TAssign "=" ../src/test_parser.nit:133,13
                          ACallExpr ../src/test_parser.nit:133,15--26
                            ACallExpr ../src/test_parser.nit:133,15--20
                              AImplicitSelfExpr ../src/test_parser.nit:133,15
                              TId "parser" ../src/test_parser.nit:133,15--20
                              AListExprs ../src/test_parser.nit:133,20
                            TId "parse" ../src/test_parser.nit:133,22--26
                            AListExprs ../src/test_parser.nit:133,26
                        AVardeclExpr ../src/test_parser.nit:135,4--25
                          TKwvar "var" ../src/test_parser.nit:135,4--6
                          TId "error" ../src/test_parser.nit:135,8--12
                          TAssign "=" ../src/test_parser.nit:135,14
                          ACallExpr ../src/test_parser.nit:135,16--25
                            ACallExpr ../src/test_parser.nit:135,16--19
                              AImplicitSelfExpr ../src/test_parser.nit:135,16
                              TId "tree" ../src/test_parser.nit:135,16--19
                              AListExprs ../src/test_parser.nit:135,19
                            TId "n_eof" ../src/test_parser.nit:135,21--25
                            AListExprs ../src/test_parser.nit:135,25
                        AIfExpr ../src/test_parser.nit:136,4--139,6
                          TKwif "if" ../src/test_parser.nit:136,4--5
                          AIsaExpr ../src/test_parser.nit:136,7--22
                            ACallExpr ../src/test_parser.nit:136,7--11
                              AImplicitSelfExpr ../src/test_parser.nit:136,7
                              TId "error" ../src/test_parser.nit:136,7--11
                              AListExprs ../src/test_parser.nit:136,11
                            AType ../src/test_parser.nit:136,17--22
                              TClassid "AError" ../src/test_parser.nit:136,17--22
                          ABlockExpr ../src/test_parser.nit:137,5--138,10
                            ACallExpr ../src/test_parser.nit:137,5--58
                              AImplicitSelfExpr ../src/test_parser.nit:137,5
                              TId "print" ../src/test_parser.nit:137,5--9
                              AParExprs ../src/test_parser.nit:137,10--58
                                TOpar "(" ../src/test_parser.nit:137,10
                                ASuperstringExpr ../src/test_parser.nit:137,11--57
                                  AStartStringExpr ../src/test_parser.nit:137,11--21
                                    TStartString "\"Error at {" ../src/test_parser.nit:137,11--21
                                  ACallExpr ../src/test_parser.nit:137,22--35
                                    ACallExpr ../src/test_parser.nit:137,22--26
                                      AImplicitSelfExpr ../src/test_parser.nit:137,22
                                      TId "error" ../src/test_parser.nit:137,22--26
                                      AListExprs ../src/test_parser.nit:137,26
                                    TId "location" ../src/test_parser.nit:137,28--35
                                    AListExprs ../src/test_parser.nit:137,35
                                  AMidStringExpr ../src/test_parser.nit:137,36--42
                                    TMidString "}:\\n\\t{" ../src/test_parser.nit:137,36--42
                                  ACallExpr ../src/test_parser.nit:137,43--55
                                    ACallExpr ../src/test_parser.nit:137,43--47
                                      AImplicitSelfExpr ../src/test_parser.nit:137,43
                                      TId "error" ../src/test_parser.nit:137,43--47
                                      AListExprs ../src/test_parser.nit:137,47
                                    TId "message" ../src/test_parser.nit:137,49--55
                                    AListExprs ../src/test_parser.nit:137,55
                                  AEndStringExpr ../src/test_parser.nit:137,56--57
                                    TEndString "}\"" ../src/test_parser.nit:137,56--57
                                TCpar ")" ../src/test_parser.nit:137,58
                            AReturnExpr ../src/test_parser.nit:138,5--10
                              TKwreturn "return" ../src/test_parser.nit:138,5--10
                          ABlockExpr ../src/test_parser.nit:139,4--6
                            TKwend "end" ../src/test_parser.nit:139,4--6
                        AIfExpr ../src/test_parser.nit:141,4--143,6
                          TKwif "if" ../src/test_parser.nit:141,4--5
                          ANotExpr ../src/test_parser.nit:141,7--18
                            TKwnot "not" ../src/test_parser.nit:141,7--9
                            ACallExpr ../src/test_parser.nit:141,11--18
                              AImplicitSelfExpr ../src/test_parser.nit:141,11
                              TId "no_print" ../src/test_parser.nit:141,11--18
                              AListExprs ../src/test_parser.nit:141,18
                          ABlockExpr ../src/test_parser.nit:142,5--44
                            ACallExpr ../src/test_parser.nit:142,5--44
                              AParExpr ../src/test_parser.nit:142,5--26
                                TOpar "(" ../src/test_parser.nit:142,5
                                ANewExpr ../src/test_parser.nit:142,6--25
                                  TKwnew "new" ../src/test_parser.nit:142,6--8
                                  AType ../src/test_parser.nit:142,10--25
                                    TClassid "PrintTreeVisitor" ../src/test_parser.nit:142,10--25
                                  AListExprs ../src/test_parser.nit:142,25
                                TCpar ")" ../src/test_parser.nit:142,26
                              TId "enter_visit" ../src/test_parser.nit:142,28--38
                              AParExprs ../src/test_parser.nit:142,39--44
                                TOpar "(" ../src/test_parser.nit:142,39
                                ACallExpr ../src/test_parser.nit:142,40--43
                                  AImplicitSelfExpr ../src/test_parser.nit:142,40
                                  TId "tree" ../src/test_parser.nit:142,40--43
                                  AListExprs ../src/test_parser.nit:142,43
                                TCpar ")" ../src/test_parser.nit:142,44
                          ABlockExpr ../src/test_parser.nit:143,4--6
                            TKwend "end" ../src/test_parser.nit:143,4--6
                        TKwend "end" ../src/test_parser.nit:144,3--5
                    TKwend "end" ../src/test_parser.nit:145,2--4
                TKwend "end" ../src/test_parser.nit:146,1--3
  EOF "" ../src/test_parser.nit:147,1
