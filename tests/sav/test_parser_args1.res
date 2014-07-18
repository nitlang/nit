Start ../src/test_parser.nit:17,1--152,1
  AModule ../src/test_parser.nit:17,1--151,3
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
    AStdClassdef ../src/test_parser.nit:23,1--42,3
      APublicVisibility ../src/test_parser.nit:23,1
      AConcreteClasskind ../src/test_parser.nit:23,1--5
        TKwclass "class" ../src/test_parser.nit:23,1--5
      TClassid "PrintTreeVisitor" ../src/test_parser.nit:23,7--22
      ASuperclass ../src/test_parser.nit:24,2--14
        TKwsuper "super" ../src/test_parser.nit:24,2--6
        AType ../src/test_parser.nit:24,8--14
          TClassid "Visitor" ../src/test_parser.nit:24,8--14
      AAttrPropdef ../src/test_parser.nit:25,2--22
        APrivateVisibility ../src/test_parser.nit:25,2--8
          TKwprivate "private" ../src/test_parser.nit:25,2--8
        TKwvar "var" ../src/test_parser.nit:25,10--12
        TId "rank" ../src/test_parser.nit:25,14--17
        AType ../src/test_parser.nit:25,20--22
          TClassid "Int" ../src/test_parser.nit:25,20--22
      AConcreteMethPropdef ../src/test_parser.nit:26,2--36,4
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
      AConcreteInitPropdef ../src/test_parser.nit:38,2--41,4
        APublicVisibility ../src/test_parser.nit:38,2
        TKwinit "init" ../src/test_parser.nit:38,2--5
        ASignature ../src/test_parser.nit:40,3
        ABlockExpr ../src/test_parser.nit:40,3--41,4
          ACallAssignExpr ../src/test_parser.nit:40,3--10
            AImplicitSelfExpr ../src/test_parser.nit:40,3
            TId "rank" ../src/test_parser.nit:40,3--6
            AListExprs ../src/test_parser.nit:40,8
            TAssign "=" ../src/test_parser.nit:40,8
            ADecIntExpr ../src/test_parser.nit:40,10
              TNumber "0" ../src/test_parser.nit:40,10
          TKwend "end" ../src/test_parser.nit:41,2--4
      TKwend "end" ../src/test_parser.nit:42,1--3
    AMainClassdef ../src/test_parser.nit:44,1--151,3
      AMainMethPropdef ../src/test_parser.nit:44,1--151,3
        ABlockExpr ../src/test_parser.nit:44,1--151,3
          AVardeclExpr ../src/test_parser.nit:44,1--20
            TKwvar "var" ../src/test_parser.nit:44,1--3
            TId "no_print" ../src/test_parser.nit:44,5--12
            TAssign "=" ../src/test_parser.nit:44,14
            AFalseExpr ../src/test_parser.nit:44,16--20
              TKwfalse "false" ../src/test_parser.nit:44,16--20
          AVardeclExpr ../src/test_parser.nit:45,1--22
            TKwvar "var" ../src/test_parser.nit:45,1--3
            TId "only_lexer" ../src/test_parser.nit:45,5--14
            TAssign "=" ../src/test_parser.nit:45,16
            AFalseExpr ../src/test_parser.nit:45,18--22
              TKwfalse "false" ../src/test_parser.nit:45,18--22
          AVardeclExpr ../src/test_parser.nit:46,1--21
            TKwvar "var" ../src/test_parser.nit:46,1--3
            TId "need_help" ../src/test_parser.nit:46,5--13
            TAssign "=" ../src/test_parser.nit:46,15
            AFalseExpr ../src/test_parser.nit:46,17--21
              TKwfalse "false" ../src/test_parser.nit:46,17--21
          AVardeclExpr ../src/test_parser.nit:47,1--19
            TKwvar "var" ../src/test_parser.nit:47,1--3
            TId "no_file" ../src/test_parser.nit:47,5--11
            TAssign "=" ../src/test_parser.nit:47,13
            AFalseExpr ../src/test_parser.nit:47,15--19
              TKwfalse "false" ../src/test_parser.nit:47,15--19
          AVardeclExpr ../src/test_parser.nit:48,1--23
            TKwvar "var" ../src/test_parser.nit:48,1--3
            TId "interactive" ../src/test_parser.nit:48,5--15
            TAssign "=" ../src/test_parser.nit:48,17
            AFalseExpr ../src/test_parser.nit:48,19--23
              TKwfalse "false" ../src/test_parser.nit:48,19--23
          AWhileExpr ../src/test_parser.nit:50,1--68,3
            TKwwhile "while" ../src/test_parser.nit:50,1--5
            AAndExpr ../src/test_parser.nit:50,7--57
              ANotExpr ../src/test_parser.nit:50,7--23
                TKwnot "not" ../src/test_parser.nit:50,7--9
                ACallExpr ../src/test_parser.nit:50,11--23
                  ACallExpr ../src/test_parser.nit:50,11--14
                    AImplicitSelfExpr ../src/test_parser.nit:50,11
                    TId "args" ../src/test_parser.nit:50,11--14
                    AListExprs ../src/test_parser.nit:50,14
                  TId "is_empty" ../src/test_parser.nit:50,16--23
                  AListExprs ../src/test_parser.nit:50,23
              AEqExpr ../src/test_parser.nit:50,29--57
                ACallExpr ../src/test_parser.nit:50,29--50
                  ACallExpr ../src/test_parser.nit:50,29--44
                    ACallExpr ../src/test_parser.nit:50,29--38
                      ACallExpr ../src/test_parser.nit:50,29--32
                        AImplicitSelfExpr ../src/test_parser.nit:50,29
                        TId "args" ../src/test_parser.nit:50,29--32
                        AListExprs ../src/test_parser.nit:50,32
                      TId "first" ../src/test_parser.nit:50,34--38
                      AListExprs ../src/test_parser.nit:50,38
                    TId "chars" ../src/test_parser.nit:50,40--44
                    AListExprs ../src/test_parser.nit:50,44
                  TId "first" ../src/test_parser.nit:50,46--50
                  AListExprs ../src/test_parser.nit:50,50
                ACharExpr ../src/test_parser.nit:50,55--57
                  TChar "\'-\'" ../src/test_parser.nit:50,55--57
            TKwdo "do" ../src/test_parser.nit:50,59--60
            ABlockExpr ../src/test_parser.nit:51,2--68,3
              AIfExpr ../src/test_parser.nit:51,2--66,4
                TKwif "if" ../src/test_parser.nit:51,2--3
                AEqExpr ../src/test_parser.nit:51,5--22
                  ACallExpr ../src/test_parser.nit:51,5--14
                    ACallExpr ../src/test_parser.nit:51,5--8
                      AImplicitSelfExpr ../src/test_parser.nit:51,5
                      TId "args" ../src/test_parser.nit:51,5--8
                      AListExprs ../src/test_parser.nit:51,8
                    TId "first" ../src/test_parser.nit:51,10--14
                    AListExprs ../src/test_parser.nit:51,14
                  AStringExpr ../src/test_parser.nit:51,19--22
                    TString "\"-n\"" ../src/test_parser.nit:51,19--22
                ABlockExpr ../src/test_parser.nit:52,3--17
                  ACallAssignExpr ../src/test_parser.nit:52,3--17
                    AImplicitSelfExpr ../src/test_parser.nit:52,3
                    TId "no_print" ../src/test_parser.nit:52,3--10
                    AListExprs ../src/test_parser.nit:52,12
                    TAssign "=" ../src/test_parser.nit:52,12
                    ATrueExpr ../src/test_parser.nit:52,14--17
                      TKwtrue "true" ../src/test_parser.nit:52,14--17
                AIfExpr ../src/test_parser.nit:53,7--66,4
                  TKwif "if" ../src/test_parser.nit:53,7--8
                  AEqExpr ../src/test_parser.nit:53,10--27
                    ACallExpr ../src/test_parser.nit:53,10--19
                      ACallExpr ../src/test_parser.nit:53,10--13
                        AImplicitSelfExpr ../src/test_parser.nit:53,10
                        TId "args" ../src/test_parser.nit:53,10--13
                        AListExprs ../src/test_parser.nit:53,13
                      TId "first" ../src/test_parser.nit:53,15--19
                      AListExprs ../src/test_parser.nit:53,19
                    AStringExpr ../src/test_parser.nit:53,24--27
                      TString "\"-l\"" ../src/test_parser.nit:53,24--27
                  ABlockExpr ../src/test_parser.nit:54,3--19
                    ACallAssignExpr ../src/test_parser.nit:54,3--19
                      AImplicitSelfExpr ../src/test_parser.nit:54,3
                      TId "only_lexer" ../src/test_parser.nit:54,3--12
                      AListExprs ../src/test_parser.nit:54,14
                      TAssign "=" ../src/test_parser.nit:54,14
                      ATrueExpr ../src/test_parser.nit:54,16--19
                        TKwtrue "true" ../src/test_parser.nit:54,16--19
                  AIfExpr ../src/test_parser.nit:55,7--66,4
                    TKwif "if" ../src/test_parser.nit:55,7--8
                    AEqExpr ../src/test_parser.nit:55,10--27
                      ACallExpr ../src/test_parser.nit:55,10--19
                        ACallExpr ../src/test_parser.nit:55,10--13
                          AImplicitSelfExpr ../src/test_parser.nit:55,10
                          TId "args" ../src/test_parser.nit:55,10--13
                          AListExprs ../src/test_parser.nit:55,13
                        TId "first" ../src/test_parser.nit:55,15--19
                        AListExprs ../src/test_parser.nit:55,19
                      AStringExpr ../src/test_parser.nit:55,24--27
                        TString "\"-p\"" ../src/test_parser.nit:55,24--27
                    ABlockExpr ../src/test_parser.nit:56,3--20
                      ACallAssignExpr ../src/test_parser.nit:56,3--20
                        AImplicitSelfExpr ../src/test_parser.nit:56,3
                        TId "only_lexer" ../src/test_parser.nit:56,3--12
                        AListExprs ../src/test_parser.nit:56,14
                        TAssign "=" ../src/test_parser.nit:56,14
                        AFalseExpr ../src/test_parser.nit:56,16--20
                          TKwfalse "false" ../src/test_parser.nit:56,16--20
                    AIfExpr ../src/test_parser.nit:57,7--66,4
                      TKwif "if" ../src/test_parser.nit:57,7--8
                      AEqExpr ../src/test_parser.nit:57,10--27
                        ACallExpr ../src/test_parser.nit:57,10--19
                          ACallExpr ../src/test_parser.nit:57,10--13
                            AImplicitSelfExpr ../src/test_parser.nit:57,10
                            TId "args" ../src/test_parser.nit:57,10--13
                            AListExprs ../src/test_parser.nit:57,13
                          TId "first" ../src/test_parser.nit:57,15--19
                          AListExprs ../src/test_parser.nit:57,19
                        AStringExpr ../src/test_parser.nit:57,24--27
                          TString "\"-e\"" ../src/test_parser.nit:57,24--27
                      ABlockExpr ../src/test_parser.nit:58,3--16
                        ACallAssignExpr ../src/test_parser.nit:58,3--16
                          AImplicitSelfExpr ../src/test_parser.nit:58,3
                          TId "no_file" ../src/test_parser.nit:58,3--9
                          AListExprs ../src/test_parser.nit:58,11
                          TAssign "=" ../src/test_parser.nit:58,11
                          ATrueExpr ../src/test_parser.nit:58,13--16
                            TKwtrue "true" ../src/test_parser.nit:58,13--16
                      AIfExpr ../src/test_parser.nit:59,7--66,4
                        TKwif "if" ../src/test_parser.nit:59,7--8
                        AEqExpr ../src/test_parser.nit:59,10--27
                          ACallExpr ../src/test_parser.nit:59,10--19
                            ACallExpr ../src/test_parser.nit:59,10--13
                              AImplicitSelfExpr ../src/test_parser.nit:59,10
                              TId "args" ../src/test_parser.nit:59,10--13
                              AListExprs ../src/test_parser.nit:59,13
                            TId "first" ../src/test_parser.nit:59,15--19
                            AListExprs ../src/test_parser.nit:59,19
                          AStringExpr ../src/test_parser.nit:59,24--27
                            TString "\"-i\"" ../src/test_parser.nit:59,24--27
                        ABlockExpr ../src/test_parser.nit:60,3--20
                          ACallAssignExpr ../src/test_parser.nit:60,3--20
                            AImplicitSelfExpr ../src/test_parser.nit:60,3
                            TId "interactive" ../src/test_parser.nit:60,3--13
                            AListExprs ../src/test_parser.nit:60,15
                            TAssign "=" ../src/test_parser.nit:60,15
                            ATrueExpr ../src/test_parser.nit:60,17--20
                              TKwtrue "true" ../src/test_parser.nit:60,17--20
                        AIfExpr ../src/test_parser.nit:61,7--66,4
                          TKwif "if" ../src/test_parser.nit:61,7--8
                          AOrExpr ../src/test_parser.nit:61,10--49
                            AEqExpr ../src/test_parser.nit:61,10--27
                              ACallExpr ../src/test_parser.nit:61,10--19
                                ACallExpr ../src/test_parser.nit:61,10--13
                                  AImplicitSelfExpr ../src/test_parser.nit:61,10
                                  TId "args" ../src/test_parser.nit:61,10--13
                                  AListExprs ../src/test_parser.nit:61,13
                                TId "first" ../src/test_parser.nit:61,15--19
                                AListExprs ../src/test_parser.nit:61,19
                              AStringExpr ../src/test_parser.nit:61,24--27
                                TString "\"-h\"" ../src/test_parser.nit:61,24--27
                            AEqExpr ../src/test_parser.nit:61,32--49
                              ACallExpr ../src/test_parser.nit:61,32--41
                                ACallExpr ../src/test_parser.nit:61,32--35
                                  AImplicitSelfExpr ../src/test_parser.nit:61,32
                                  TId "args" ../src/test_parser.nit:61,32--35
                                  AListExprs ../src/test_parser.nit:61,35
                                TId "first" ../src/test_parser.nit:61,37--41
                                AListExprs ../src/test_parser.nit:61,41
                              AStringExpr ../src/test_parser.nit:61,46--49
                                TString "\"-?\"" ../src/test_parser.nit:61,46--49
                          ABlockExpr ../src/test_parser.nit:62,3--18
                            ACallAssignExpr ../src/test_parser.nit:62,3--18
                              AImplicitSelfExpr ../src/test_parser.nit:62,3
                              TId "need_help" ../src/test_parser.nit:62,3--11
                              AListExprs ../src/test_parser.nit:62,13
                              TAssign "=" ../src/test_parser.nit:62,13
                              ATrueExpr ../src/test_parser.nit:62,15--18
                                TKwtrue "true" ../src/test_parser.nit:62,15--18
                          ABlockExpr ../src/test_parser.nit:64,3--66,4
                            ACallExpr ../src/test_parser.nit:64,3--48
                              ACallExpr ../src/test_parser.nit:64,3--8
                                AImplicitSelfExpr ../src/test_parser.nit:64,3
                                TId "stderr" ../src/test_parser.nit:64,3--8
                                AListExprs ../src/test_parser.nit:64,8
                              TId "write" ../src/test_parser.nit:64,10--14
                              AParExprs ../src/test_parser.nit:64,15--48
                                TOpar "(" ../src/test_parser.nit:64,15
                                ASuperstringExpr ../src/test_parser.nit:64,16--47
                                  AStartStringExpr ../src/test_parser.nit:64,16--32
                                    TStartString "\"Unknown option {" ../src/test_parser.nit:64,16--32
                                  ACallExpr ../src/test_parser.nit:64,33--42
                                    ACallExpr ../src/test_parser.nit:64,33--36
                                      AImplicitSelfExpr ../src/test_parser.nit:64,33
                                      TId "args" ../src/test_parser.nit:64,33--36
                                      AListExprs ../src/test_parser.nit:64,36
                                    TId "first" ../src/test_parser.nit:64,38--42
                                    AListExprs ../src/test_parser.nit:64,42
                                  AEndStringExpr ../src/test_parser.nit:64,43--47
                                    TEndString "}.\\n\"" ../src/test_parser.nit:64,43--47
                                TCpar ")" ../src/test_parser.nit:64,48
                            ACallExpr ../src/test_parser.nit:65,3--9
                              AImplicitSelfExpr ../src/test_parser.nit:65,3
                              TId "exit" ../src/test_parser.nit:65,3--6
                              AParExprs ../src/test_parser.nit:65,7--9
                                TOpar "(" ../src/test_parser.nit:65,7
                                ADecIntExpr ../src/test_parser.nit:65,8
                                  TNumber "0" ../src/test_parser.nit:65,8
                                TCpar ")" ../src/test_parser.nit:65,9
                            TKwend "end" ../src/test_parser.nit:66,2--4
              ACallExpr ../src/test_parser.nit:67,2--11
                ACallExpr ../src/test_parser.nit:67,2--5
                  AImplicitSelfExpr ../src/test_parser.nit:67,2
                  TId "args" ../src/test_parser.nit:67,2--5
                  AListExprs ../src/test_parser.nit:67,5
                TId "shift" ../src/test_parser.nit:67,7--11
                AListExprs ../src/test_parser.nit:67,11
              TKwend "end" ../src/test_parser.nit:68,1--3
          AIfExpr ../src/test_parser.nit:70,1--151,3
            TKwif "if" ../src/test_parser.nit:70,1--2
            AOrExpr ../src/test_parser.nit:70,4--51
              AParExpr ../src/test_parser.nit:70,4--38
                TOpar "(" ../src/test_parser.nit:70,4
                AAndExpr ../src/test_parser.nit:70,5--37
                  ACallExpr ../src/test_parser.nit:70,5--17
                    ACallExpr ../src/test_parser.nit:70,5--8
                      AImplicitSelfExpr ../src/test_parser.nit:70,5
                      TId "args" ../src/test_parser.nit:70,5--8
                      AListExprs ../src/test_parser.nit:70,8
                    TId "is_empty" ../src/test_parser.nit:70,10--17
                    AListExprs ../src/test_parser.nit:70,17
                  ANotExpr ../src/test_parser.nit:70,23--37
                    TKwnot "not" ../src/test_parser.nit:70,23--25
                    ACallExpr ../src/test_parser.nit:70,27--37
                      AImplicitSelfExpr ../src/test_parser.nit:70,27
                      TId "interactive" ../src/test_parser.nit:70,27--37
                      AListExprs ../src/test_parser.nit:70,37
                TCpar ")" ../src/test_parser.nit:70,38
              ACallExpr ../src/test_parser.nit:70,43--51
                AImplicitSelfExpr ../src/test_parser.nit:70,43
                TId "need_help" ../src/test_parser.nit:70,43--51
                AListExprs ../src/test_parser.nit:70,51
            ABlockExpr ../src/test_parser.nit:71,2--81,30
              ACallExpr ../src/test_parser.nit:71,2--16
                AImplicitSelfExpr ../src/test_parser.nit:71,2
                TId "print" ../src/test_parser.nit:71,2--6
                AParExprs ../src/test_parser.nit:71,7--16
                  TOpar "(" ../src/test_parser.nit:71,7
                  AStringExpr ../src/test_parser.nit:71,8--15
                    TString "\"usage:\"" ../src/test_parser.nit:71,8--15
                  TCpar ")" ../src/test_parser.nit:71,16
              ACallExpr ../src/test_parser.nit:72,2--54
                AImplicitSelfExpr ../src/test_parser.nit:72,2
                TId "print" ../src/test_parser.nit:72,2--6
                AParExprs ../src/test_parser.nit:72,7--54
                  TOpar "(" ../src/test_parser.nit:72,7
                  AStringExpr ../src/test_parser.nit:72,8--53
                    TString "\"  test_parser [options]... <filename.nit>...\"" ../src/test_parser.nit:72,8--53
                  TCpar ")" ../src/test_parser.nit:72,54
              ACallExpr ../src/test_parser.nit:73,2--49
                AImplicitSelfExpr ../src/test_parser.nit:73,2
                TId "print" ../src/test_parser.nit:73,2--6
                AParExprs ../src/test_parser.nit:73,7--49
                  TOpar "(" ../src/test_parser.nit:73,7
                  AStringExpr ../src/test_parser.nit:73,8--48
                    TString "\"  test_parser -e [options]... <text>...\"" ../src/test_parser.nit:73,8--48
                  TCpar ")" ../src/test_parser.nit:73,49
              ACallExpr ../src/test_parser.nit:74,2--39
                AImplicitSelfExpr ../src/test_parser.nit:74,2
                TId "print" ../src/test_parser.nit:74,2--6
                AParExprs ../src/test_parser.nit:74,7--39
                  TOpar "(" ../src/test_parser.nit:74,7
                  AStringExpr ../src/test_parser.nit:74,8--38
                    TString "\"  test_parser -i [options]...\"" ../src/test_parser.nit:74,8--38
                  TCpar ")" ../src/test_parser.nit:74,39
              ACallExpr ../src/test_parser.nit:75,2--18
                AImplicitSelfExpr ../src/test_parser.nit:75,2
                TId "print" ../src/test_parser.nit:75,2--6
                AParExprs ../src/test_parser.nit:75,7--18
                  TOpar "(" ../src/test_parser.nit:75,7
                  AStringExpr ../src/test_parser.nit:75,8--17
                    TString "\"options:\"" ../src/test_parser.nit:75,8--17
                  TCpar ")" ../src/test_parser.nit:75,18
              ACallExpr ../src/test_parser.nit:76,2--36
                AImplicitSelfExpr ../src/test_parser.nit:76,2
                TId "print" ../src/test_parser.nit:76,2--6
                AParExprs ../src/test_parser.nit:76,7--36
                  TOpar "(" ../src/test_parser.nit:76,7
                  AStringExpr ../src/test_parser.nit:76,8--35
                    TString "\"  -n\11do not print anything\"" ../src/test_parser.nit:76,8--35
                  TCpar ")" ../src/test_parser.nit:76,36
              ACallExpr ../src/test_parser.nit:77,2--25
                AImplicitSelfExpr ../src/test_parser.nit:77,2
                TId "print" ../src/test_parser.nit:77,2--6
                AParExprs ../src/test_parser.nit:77,7--25
                  TOpar "(" ../src/test_parser.nit:77,7
                  AStringExpr ../src/test_parser.nit:77,8--24
                    TString "\"  -l\11only lexer\"" ../src/test_parser.nit:77,8--24
                  TCpar ")" ../src/test_parser.nit:77,25
              ACallExpr ../src/test_parser.nit:78,2--41
                AImplicitSelfExpr ../src/test_parser.nit:78,2
                TId "print" ../src/test_parser.nit:78,2--6
                AParExprs ../src/test_parser.nit:78,7--41
                  TOpar "(" ../src/test_parser.nit:78,7
                  AStringExpr ../src/test_parser.nit:78,8--40
                    TString "\"  -p\11lexer and parser (default)\"" ../src/test_parser.nit:78,8--40
                  TCpar ")" ../src/test_parser.nit:78,41
              ACallExpr ../src/test_parser.nit:79,2--68
                AImplicitSelfExpr ../src/test_parser.nit:79,2
                TId "print" ../src/test_parser.nit:79,2--6
                AParExprs ../src/test_parser.nit:79,7--68
                  TOpar "(" ../src/test_parser.nit:79,7
                  AStringExpr ../src/test_parser.nit:79,8--67
                    TString "\"  -e\11instead on files, each argument is a content to parse\"" ../src/test_parser.nit:79,8--67
                  TCpar ")" ../src/test_parser.nit:79,68
              ACallExpr ../src/test_parser.nit:80,2--51
                AImplicitSelfExpr ../src/test_parser.nit:80,2
                TId "print" ../src/test_parser.nit:80,2--6
                AParExprs ../src/test_parser.nit:80,7--51
                  TOpar "(" ../src/test_parser.nit:80,7
                  AStringExpr ../src/test_parser.nit:80,8--50
                    TString "\"  -i\11tree to parse are read interactively\"" ../src/test_parser.nit:80,8--50
                  TCpar ")" ../src/test_parser.nit:80,51
              ACallExpr ../src/test_parser.nit:81,2--30
                AImplicitSelfExpr ../src/test_parser.nit:81,2
                TId "print" ../src/test_parser.nit:81,2--6
                AParExprs ../src/test_parser.nit:81,7--30
                  TOpar "(" ../src/test_parser.nit:81,7
                  AStringExpr ../src/test_parser.nit:81,8--29
                    TString "\"  -h\11print this help\"" ../src/test_parser.nit:81,8--29
                  TCpar ")" ../src/test_parser.nit:81,30
            AIfExpr ../src/test_parser.nit:82,6--151,3
              TKwif "if" ../src/test_parser.nit:82,6--7
              ACallExpr ../src/test_parser.nit:82,9--19
                AImplicitSelfExpr ../src/test_parser.nit:82,9
                TId "interactive" ../src/test_parser.nit:82,9--19
                AListExprs ../src/test_parser.nit:82,19
              ABlockExpr ../src/test_parser.nit:83,2--116,4
                AIfExpr ../src/test_parser.nit:83,2--92,4
                  TKwif "if" ../src/test_parser.nit:83,2--3
                  ACallExpr ../src/test_parser.nit:83,5--14
                    AImplicitSelfExpr ../src/test_parser.nit:83,5
                    TId "only_lexer" ../src/test_parser.nit:83,5--14
                    AListExprs ../src/test_parser.nit:83,14
                  ABlockExpr ../src/test_parser.nit:84,3--85,8
                    ACallExpr ../src/test_parser.nit:84,3--44
                      AImplicitSelfExpr ../src/test_parser.nit:84,3
                      TId "print" ../src/test_parser.nit:84,3--7
                      AListExprs ../src/test_parser.nit:84,9--44
                        AStringExpr ../src/test_parser.nit:84,9--44
                          TString "\"Error: -l and -i are incompatibles\"" ../src/test_parser.nit:84,9--44
                    ACallExpr ../src/test_parser.nit:85,3--8
                      AImplicitSelfExpr ../src/test_parser.nit:85,3
                      TId "exit" ../src/test_parser.nit:85,3--6
                      AListExprs ../src/test_parser.nit:85,8
                        ADecIntExpr ../src/test_parser.nit:85,8
                          TNumber "1" ../src/test_parser.nit:85,8
                  AIfExpr ../src/test_parser.nit:86,7--92,4
                    TKwif "if" ../src/test_parser.nit:86,7--8
                    ACallExpr ../src/test_parser.nit:86,10--16
                      AImplicitSelfExpr ../src/test_parser.nit:86,10
                      TId "no_file" ../src/test_parser.nit:86,10--16
                      AListExprs ../src/test_parser.nit:86,16
                    ABlockExpr ../src/test_parser.nit:87,3--88,8
                      ACallExpr ../src/test_parser.nit:87,3--44
                        AImplicitSelfExpr ../src/test_parser.nit:87,3
                        TId "print" ../src/test_parser.nit:87,3--7
                        AListExprs ../src/test_parser.nit:87,9--44
                          AStringExpr ../src/test_parser.nit:87,9--44
                            TString "\"Error: -e and -i are incompatibles\"" ../src/test_parser.nit:87,9--44
                      ACallExpr ../src/test_parser.nit:88,3--8
                        AImplicitSelfExpr ../src/test_parser.nit:88,3
                        TId "exit" ../src/test_parser.nit:88,3--6
                        AListExprs ../src/test_parser.nit:88,8
                          ADecIntExpr ../src/test_parser.nit:88,8
                            TNumber "1" ../src/test_parser.nit:88,8
                    AIfExpr ../src/test_parser.nit:89,7--92,4
                      TKwif "if" ../src/test_parser.nit:89,7--8
                      ANotExpr ../src/test_parser.nit:89,10--26
                        TKwnot "not" ../src/test_parser.nit:89,10--12
                        ACallExpr ../src/test_parser.nit:89,14--26
                          ACallExpr ../src/test_parser.nit:89,14--17
                            AImplicitSelfExpr ../src/test_parser.nit:89,14
                            TId "args" ../src/test_parser.nit:89,14--17
                            AListExprs ../src/test_parser.nit:89,17
                          TId "is_empty" ../src/test_parser.nit:89,19--26
                          AListExprs ../src/test_parser.nit:89,26
                      ABlockExpr ../src/test_parser.nit:90,3--91,8
                        ACallExpr ../src/test_parser.nit:90,3--43
                          AImplicitSelfExpr ../src/test_parser.nit:90,3
                          TId "print" ../src/test_parser.nit:90,3--7
                          AListExprs ../src/test_parser.nit:90,9--43
                            AStringExpr ../src/test_parser.nit:90,9--43
                              TString "\"Error: -i works without arguments\"" ../src/test_parser.nit:90,9--43
                        ACallExpr ../src/test_parser.nit:91,3--8
                          AImplicitSelfExpr ../src/test_parser.nit:91,3
                          TId "exit" ../src/test_parser.nit:91,3--6
                          AListExprs ../src/test_parser.nit:91,8
                            ADecIntExpr ../src/test_parser.nit:91,8
                              TNumber "1" ../src/test_parser.nit:91,8
                      ABlockExpr ../src/test_parser.nit:92,2--4
                        TKwend "end" ../src/test_parser.nit:92,2--4
                AVardeclExpr ../src/test_parser.nit:94,2--25
                  TKwvar "var" ../src/test_parser.nit:94,2--4
                  TId "tc" ../src/test_parser.nit:94,6--7
                  TAssign "=" ../src/test_parser.nit:94,9
                  ANewExpr ../src/test_parser.nit:94,11--25
                    TKwnew "new" ../src/test_parser.nit:94,11--13
                    AType ../src/test_parser.nit:94,15--25
                      TClassid "ToolContext" ../src/test_parser.nit:94,15--25
                    AListExprs ../src/test_parser.nit:94,25
                ALoopExpr ../src/test_parser.nit:96,2--116,4
                  TKwloop "loop" ../src/test_parser.nit:96,2--5
                  ABlockExpr ../src/test_parser.nit:97,3--116,4
                    AVardeclExpr ../src/test_parser.nit:97,3--37
                      TKwvar "var" ../src/test_parser.nit:97,3--5
                      TId "n" ../src/test_parser.nit:97,7
                      TAssign "=" ../src/test_parser.nit:97,9
                      ACallExpr ../src/test_parser.nit:97,11--37
                        ACallExpr ../src/test_parser.nit:97,11--12
                          AImplicitSelfExpr ../src/test_parser.nit:97,11
                          TId "tc" ../src/test_parser.nit:97,11--12
                          AListExprs ../src/test_parser.nit:97,12
                        TId "interactive_parse" ../src/test_parser.nit:97,14--30
                        AParExprs ../src/test_parser.nit:97,31--37
                          TOpar "(" ../src/test_parser.nit:97,31
                          AStringExpr ../src/test_parser.nit:97,32--36
                            TString "\"-->\"" ../src/test_parser.nit:97,32--36
                          TCpar ")" ../src/test_parser.nit:97,37
                    AIfExpr ../src/test_parser.nit:98,3--106,5
                      TKwif "if" ../src/test_parser.nit:98,3--4
                      AIsaExpr ../src/test_parser.nit:98,6--18
                        ACallExpr ../src/test_parser.nit:98,6
                          AImplicitSelfExpr ../src/test_parser.nit:98,6
                          TId "n" ../src/test_parser.nit:98,6
                          AListExprs ../src/test_parser.nit:98,6
                        AType ../src/test_parser.nit:98,12--18
                          TClassid "TString" ../src/test_parser.nit:98,12--18
                      ABlockExpr ../src/test_parser.nit:99,4--105,11
                        AVardeclExpr ../src/test_parser.nit:99,4--17
                          TKwvar "var" ../src/test_parser.nit:99,4--6
                          TId "s" ../src/test_parser.nit:99,8
                          TAssign "=" ../src/test_parser.nit:99,10
                          ACallExpr ../src/test_parser.nit:99,12--17
                            ACallExpr ../src/test_parser.nit:99,12
                              AImplicitSelfExpr ../src/test_parser.nit:99,12
                              TId "n" ../src/test_parser.nit:99,12
                              AListExprs ../src/test_parser.nit:99,12
                            TId "text" ../src/test_parser.nit:99,14--17
                            AListExprs ../src/test_parser.nit:99,17
                        AIfExpr ../src/test_parser.nit:100,4--104,6
                          TKwif "if" ../src/test_parser.nit:100,4--5
                          AEqExpr ../src/test_parser.nit:100,7--15
                            ACallExpr ../src/test_parser.nit:100,7
                              AImplicitSelfExpr ../src/test_parser.nit:100,7
                              TId "s" ../src/test_parser.nit:100,7
                              AListExprs ../src/test_parser.nit:100,7
                            AStringExpr ../src/test_parser.nit:100,12--15
                              TString "\":q\"" ../src/test_parser.nit:100,12--15
                          ABlockExpr ../src/test_parser.nit:101,5--9
                            ABreakExpr ../src/test_parser.nit:101,5--9
                              TKwbreak "break" ../src/test_parser.nit:101,5--9
                          ABlockExpr ../src/test_parser.nit:103,5--104,6
                            ACallExpr ../src/test_parser.nit:103,5--24
                              AImplicitSelfExpr ../src/test_parser.nit:103,5
                              TId "print" ../src/test_parser.nit:103,5--9
                              AListExprs ../src/test_parser.nit:103,11--24
                                AStringExpr ../src/test_parser.nit:103,11--24
                                  TString "\"`:q` to quit\"" ../src/test_parser.nit:103,11--24
                            TKwend "end" ../src/test_parser.nit:104,4--6
                        AContinueExpr ../src/test_parser.nit:105,4--11
                          TKwcontinue "continue" ../src/test_parser.nit:105,4--11
                      ABlockExpr ../src/test_parser.nit:106,3--5
                        TKwend "end" ../src/test_parser.nit:106,3--5
                    AIfExpr ../src/test_parser.nit:108,3--111,5
                      TKwif "if" ../src/test_parser.nit:108,3--4
                      AIsaExpr ../src/test_parser.nit:108,6--17
                        ACallExpr ../src/test_parser.nit:108,6
                          AImplicitSelfExpr ../src/test_parser.nit:108,6
                          TId "n" ../src/test_parser.nit:108,6
                          AListExprs ../src/test_parser.nit:108,6
                        AType ../src/test_parser.nit:108,12--17
                          TClassid "AError" ../src/test_parser.nit:108,12--17
                      ABlockExpr ../src/test_parser.nit:109,4--110,11
                        ACallExpr ../src/test_parser.nit:109,4--57
                          AImplicitSelfExpr ../src/test_parser.nit:109,4
                          TId "print" ../src/test_parser.nit:109,4--8
                          AListExprs ../src/test_parser.nit:109,10--57
                            ASuperstringExpr ../src/test_parser.nit:109,10--57
                              AStartStringExpr ../src/test_parser.nit:109,10--11
                                TStartString "\"{" ../src/test_parser.nit:109,10--11
                              ACallExpr ../src/test_parser.nit:109,12--42
                                ACallExpr ../src/test_parser.nit:109,12--21
                                  ACallExpr ../src/test_parser.nit:109,12
                                    AImplicitSelfExpr ../src/test_parser.nit:109,12
                                    TId "n" ../src/test_parser.nit:109,12
                                    AListExprs ../src/test_parser.nit:109,12
                                  TId "location" ../src/test_parser.nit:109,14--21
                                  AListExprs ../src/test_parser.nit:109,21
                                TId "colored_line" ../src/test_parser.nit:109,23--34
                                AParExprs ../src/test_parser.nit:109,35--42
                                  TOpar "(" ../src/test_parser.nit:109,35
                                  AStringExpr ../src/test_parser.nit:109,36--41
                                    TString "\"0;31\"" ../src/test_parser.nit:109,36--41
                                  TCpar ")" ../src/test_parser.nit:109,42
                              AMidStringExpr ../src/test_parser.nit:109,43--46
                                TMidString "}: {" ../src/test_parser.nit:109,43--46
                              ACallExpr ../src/test_parser.nit:109,47--55
                                ACallExpr ../src/test_parser.nit:109,47
                                  AImplicitSelfExpr ../src/test_parser.nit:109,47
                                  TId "n" ../src/test_parser.nit:109,47
                                  AListExprs ../src/test_parser.nit:109,47
                                TId "message" ../src/test_parser.nit:109,49--55
                                AListExprs ../src/test_parser.nit:109,55
                              AEndStringExpr ../src/test_parser.nit:109,56--57
                                TEndString "}\"" ../src/test_parser.nit:109,56--57
                        AContinueExpr ../src/test_parser.nit:110,4--11
                          TKwcontinue "continue" ../src/test_parser.nit:110,4--11
                      ABlockExpr ../src/test_parser.nit:111,3--5
                        TKwend "end" ../src/test_parser.nit:111,3--5
                    AIfExpr ../src/test_parser.nit:113,3--115,5
                      TKwif "if" ../src/test_parser.nit:113,3--4
                      ANotExpr ../src/test_parser.nit:113,6--17
                        TKwnot "not" ../src/test_parser.nit:113,6--8
                        ACallExpr ../src/test_parser.nit:113,10--17
                          AImplicitSelfExpr ../src/test_parser.nit:113,10
                          TId "no_print" ../src/test_parser.nit:113,10--17
                          AListExprs ../src/test_parser.nit:113,17
                      ABlockExpr ../src/test_parser.nit:114,4--40
                        ACallExpr ../src/test_parser.nit:114,4--40
                          AParExpr ../src/test_parser.nit:114,4--25
                            TOpar "(" ../src/test_parser.nit:114,4
                            ANewExpr ../src/test_parser.nit:114,5--24
                              TKwnew "new" ../src/test_parser.nit:114,5--7
                              AType ../src/test_parser.nit:114,9--24
                                TClassid "PrintTreeVisitor" ../src/test_parser.nit:114,9--24
                              AListExprs ../src/test_parser.nit:114,24
                            TCpar ")" ../src/test_parser.nit:114,25
                          TId "enter_visit" ../src/test_parser.nit:114,27--37
                          AParExprs ../src/test_parser.nit:114,38--40
                            TOpar "(" ../src/test_parser.nit:114,38
                            ACallExpr ../src/test_parser.nit:114,39
                              AImplicitSelfExpr ../src/test_parser.nit:114,39
                              TId "n" ../src/test_parser.nit:114,39
                              AListExprs ../src/test_parser.nit:114,39
                            TCpar ")" ../src/test_parser.nit:114,40
                      ABlockExpr ../src/test_parser.nit:115,3--5
                        TKwend "end" ../src/test_parser.nit:115,3--5
                    TKwend "end" ../src/test_parser.nit:116,2--4
              ABlockExpr ../src/test_parser.nit:118,2--151,3
                AForExpr ../src/test_parser.nit:118,2--150,4
                  TKwfor "for" ../src/test_parser.nit:118,2--4
                  TId "a" ../src/test_parser.nit:118,6
                  ACallExpr ../src/test_parser.nit:118,11--14
                    AImplicitSelfExpr ../src/test_parser.nit:118,11
                    TId "args" ../src/test_parser.nit:118,11--14
                    AListExprs ../src/test_parser.nit:118,14
                  TKwdo "do" ../src/test_parser.nit:118,16--17
                  ABlockExpr ../src/test_parser.nit:119,3--150,4
                    AVardeclExpr ../src/test_parser.nit:119,3--12
                      TKwvar "var" ../src/test_parser.nit:119,3--5
                      TId "source" ../src/test_parser.nit:119,7--12
                    AIfExpr ../src/test_parser.nit:120,3--126,5
                      TKwif "if" ../src/test_parser.nit:120,3--4
                      ACallExpr ../src/test_parser.nit:120,6--12
                        AImplicitSelfExpr ../src/test_parser.nit:120,6
                        TId "no_file" ../src/test_parser.nit:120,6--12
                        AListExprs ../src/test_parser.nit:120,12
                      ABlockExpr ../src/test_parser.nit:121,4--45
                        ACallAssignExpr ../src/test_parser.nit:121,4--45
                          AImplicitSelfExpr ../src/test_parser.nit:121,4
                          TId "source" ../src/test_parser.nit:121,4--9
                          AListExprs ../src/test_parser.nit:121,11
                          TAssign "=" ../src/test_parser.nit:121,11
                          ANewExpr ../src/test_parser.nit:121,13--45
                            TKwnew "new" ../src/test_parser.nit:121,13--15
                            AType ../src/test_parser.nit:121,17--26
                              TClassid "SourceFile" ../src/test_parser.nit:121,17--26
                            TId "from_string" ../src/test_parser.nit:121,28--38
                            AParExprs ../src/test_parser.nit:121,39--45
                              TOpar "(" ../src/test_parser.nit:121,39
                              AStringExpr ../src/test_parser.nit:121,40--41
                                TString "\"\"" ../src/test_parser.nit:121,40--41
                              ACallExpr ../src/test_parser.nit:121,44
                                AImplicitSelfExpr ../src/test_parser.nit:121,44
                                TId "a" ../src/test_parser.nit:121,44
                                AListExprs ../src/test_parser.nit:121,44
                              TCpar ")" ../src/test_parser.nit:121,45
                      ABlockExpr ../src/test_parser.nit:123,4--126,5
                        AVardeclExpr ../src/test_parser.nit:123,4--31
                          TKwvar "var" ../src/test_parser.nit:123,4--6
                          TId "f" ../src/test_parser.nit:123,8
                          TAssign "=" ../src/test_parser.nit:123,10
                          ANewExpr ../src/test_parser.nit:123,12--31
                            TKwnew "new" ../src/test_parser.nit:123,12--14
                            AType ../src/test_parser.nit:123,16--23
                              TClassid "IFStream" ../src/test_parser.nit:123,16--23
                            TId "open" ../src/test_parser.nit:123,25--28
                            AParExprs ../src/test_parser.nit:123,29--31
                              TOpar "(" ../src/test_parser.nit:123,29
                              ACallExpr ../src/test_parser.nit:123,30
                                AImplicitSelfExpr ../src/test_parser.nit:123,30
                                TId "a" ../src/test_parser.nit:123,30
                                AListExprs ../src/test_parser.nit:123,30
                              TCpar ")" ../src/test_parser.nit:123,31
                        ACallAssignExpr ../src/test_parser.nit:124,4--32
                          AImplicitSelfExpr ../src/test_parser.nit:124,4
                          TId "source" ../src/test_parser.nit:124,4--9
                          AListExprs ../src/test_parser.nit:124,11
                          TAssign "=" ../src/test_parser.nit:124,11
                          ANewExpr ../src/test_parser.nit:124,13--32
                            TKwnew "new" ../src/test_parser.nit:124,13--15
                            AType ../src/test_parser.nit:124,17--26
                              TClassid "SourceFile" ../src/test_parser.nit:124,17--26
                            AParExprs ../src/test_parser.nit:124,27--32
                              TOpar "(" ../src/test_parser.nit:124,27
                              ACallExpr ../src/test_parser.nit:124,28
                                AImplicitSelfExpr ../src/test_parser.nit:124,28
                                TId "a" ../src/test_parser.nit:124,28
                                AListExprs ../src/test_parser.nit:124,28
                              ACallExpr ../src/test_parser.nit:124,31
                                AImplicitSelfExpr ../src/test_parser.nit:124,31
                                TId "f" ../src/test_parser.nit:124,31
                                AListExprs ../src/test_parser.nit:124,31
                              TCpar ")" ../src/test_parser.nit:124,32
                        ACallExpr ../src/test_parser.nit:125,4--10
                          ACallExpr ../src/test_parser.nit:125,4
                            AImplicitSelfExpr ../src/test_parser.nit:125,4
                            TId "f" ../src/test_parser.nit:125,4
                            AListExprs ../src/test_parser.nit:125,4
                          TId "close" ../src/test_parser.nit:125,6--10
                          AListExprs ../src/test_parser.nit:125,10
                        TKwend "end" ../src/test_parser.nit:126,3--5
                    AVardeclExpr ../src/test_parser.nit:127,3--31
                      TKwvar "var" ../src/test_parser.nit:127,3--5
                      TId "lexer" ../src/test_parser.nit:127,7--11
                      TAssign "=" ../src/test_parser.nit:127,13
                      ANewExpr ../src/test_parser.nit:127,15--31
                        TKwnew "new" ../src/test_parser.nit:127,15--17
                        AType ../src/test_parser.nit:127,19--23
                          TClassid "Lexer" ../src/test_parser.nit:127,19--23
                        AParExprs ../src/test_parser.nit:127,24--31
                          TOpar "(" ../src/test_parser.nit:127,24
                          ACallExpr ../src/test_parser.nit:127,25--30
                            AImplicitSelfExpr ../src/test_parser.nit:127,25
                            TId "source" ../src/test_parser.nit:127,25--30
                            AListExprs ../src/test_parser.nit:127,30
                          TCpar ")" ../src/test_parser.nit:127,31
                    AIfExpr ../src/test_parser.nit:128,3--149,5
                      TKwif "if" ../src/test_parser.nit:128,3--4
                      ACallExpr ../src/test_parser.nit:128,6--15
                        AImplicitSelfExpr ../src/test_parser.nit:128,6
                        TId "only_lexer" ../src/test_parser.nit:128,6--15
                        AListExprs ../src/test_parser.nit:128,15
                      ABlockExpr ../src/test_parser.nit:129,4--135,6
                        AVardeclExpr ../src/test_parser.nit:129,4--25
                          TKwvar "var" ../src/test_parser.nit:129,4--6
                          TId "token" ../src/test_parser.nit:129,8--12
                          TAssign "=" ../src/test_parser.nit:129,14
                          ACallExpr ../src/test_parser.nit:129,16--25
                            ACallExpr ../src/test_parser.nit:129,16--20
                              AImplicitSelfExpr ../src/test_parser.nit:129,16
                              TId "lexer" ../src/test_parser.nit:129,16--20
                              AListExprs ../src/test_parser.nit:129,20
                            TId "next" ../src/test_parser.nit:129,22--25
                            AListExprs ../src/test_parser.nit:129,25
                        AWhileExpr ../src/test_parser.nit:130,4--135,6
                          TKwwhile "while" ../src/test_parser.nit:130,4--8
                          ANotExpr ../src/test_parser.nit:130,10--26
                            TKwnot "not" ../src/test_parser.nit:130,10--12
                            AIsaExpr ../src/test_parser.nit:130,14--26
                              ACallExpr ../src/test_parser.nit:130,14--18
                                AImplicitSelfExpr ../src/test_parser.nit:130,14
                                TId "token" ../src/test_parser.nit:130,14--18
                                AListExprs ../src/test_parser.nit:130,18
                              AType ../src/test_parser.nit:130,24--26
                                TClassid "EOF" ../src/test_parser.nit:130,24--26
                          TKwdo "do" ../src/test_parser.nit:130,28--29
                          ABlockExpr ../src/test_parser.nit:131,5--135,6
                            AIfExpr ../src/test_parser.nit:131,5--133,7
                              TKwif "if" ../src/test_parser.nit:131,5--6
                              ANotExpr ../src/test_parser.nit:131,8--19
                                TKwnot "not" ../src/test_parser.nit:131,8--10
                                ACallExpr ../src/test_parser.nit:131,12--19
                                  AImplicitSelfExpr ../src/test_parser.nit:131,12
                                  TId "no_print" ../src/test_parser.nit:131,12--19
                                  AListExprs ../src/test_parser.nit:131,19
                              ABlockExpr ../src/test_parser.nit:132,6--64
                                ACallExpr ../src/test_parser.nit:132,6--64
                                  AImplicitSelfExpr ../src/test_parser.nit:132,6
                                  TId "print" ../src/test_parser.nit:132,6--10
                                  AParExprs ../src/test_parser.nit:132,11--64
                                    TOpar "(" ../src/test_parser.nit:132,11
                                    ASuperstringExpr ../src/test_parser.nit:132,12--63
                                      AStartStringExpr ../src/test_parser.nit:132,12--27
                                        TStartString "\"Read token at {" ../src/test_parser.nit:132,12--27
                                      ACallExpr ../src/test_parser.nit:132,28--41
                                        ACallExpr ../src/test_parser.nit:132,28--32
                                          AImplicitSelfExpr ../src/test_parser.nit:132,28
                                          TId "token" ../src/test_parser.nit:132,28--32
                                          AListExprs ../src/test_parser.nit:132,32
                                        TId "location" ../src/test_parser.nit:132,34--41
                                        AListExprs ../src/test_parser.nit:132,41
                                      AMidStringExpr ../src/test_parser.nit:132,42--50
                                        TMidString "} text=\'{" ../src/test_parser.nit:132,42--50
                                      ACallExpr ../src/test_parser.nit:132,51--60
                                        ACallExpr ../src/test_parser.nit:132,51--55
                                          AImplicitSelfExpr ../src/test_parser.nit:132,51
                                          TId "token" ../src/test_parser.nit:132,51--55
                                          AListExprs ../src/test_parser.nit:132,55
                                        TId "text" ../src/test_parser.nit:132,57--60
                                        AListExprs ../src/test_parser.nit:132,60
                                      AEndStringExpr ../src/test_parser.nit:132,61--63
                                        TEndString "}\'\"" ../src/test_parser.nit:132,61--63
                                    TCpar ")" ../src/test_parser.nit:132,64
                              ABlockExpr ../src/test_parser.nit:133,5--7
                                TKwend "end" ../src/test_parser.nit:133,5--7
                            ACallAssignExpr ../src/test_parser.nit:134,5--22
                              AImplicitSelfExpr ../src/test_parser.nit:134,5
                              TId "token" ../src/test_parser.nit:134,5--9
                              AListExprs ../src/test_parser.nit:134,11
                              TAssign "=" ../src/test_parser.nit:134,11
                              ACallExpr ../src/test_parser.nit:134,13--22
                                ACallExpr ../src/test_parser.nit:134,13--17
                                  AImplicitSelfExpr ../src/test_parser.nit:134,13
                                  TId "lexer" ../src/test_parser.nit:134,13--17
                                  AListExprs ../src/test_parser.nit:134,17
                                TId "next" ../src/test_parser.nit:134,19--22
                                AListExprs ../src/test_parser.nit:134,22
                            TKwend "end" ../src/test_parser.nit:135,4--6
                      ABlockExpr ../src/test_parser.nit:137,4--149,5
                        AVardeclExpr ../src/test_parser.nit:137,4--33
                          TKwvar "var" ../src/test_parser.nit:137,4--6
                          TId "parser" ../src/test_parser.nit:137,8--13
                          TAssign "=" ../src/test_parser.nit:137,15
                          ANewExpr ../src/test_parser.nit:137,17--33
                            TKwnew "new" ../src/test_parser.nit:137,17--19
                            AType ../src/test_parser.nit:137,21--26
                              TClassid "Parser" ../src/test_parser.nit:137,21--26
                            AParExprs ../src/test_parser.nit:137,27--33
                              TOpar "(" ../src/test_parser.nit:137,27
                              ACallExpr ../src/test_parser.nit:137,28--32
                                AImplicitSelfExpr ../src/test_parser.nit:137,28
                                TId "lexer" ../src/test_parser.nit:137,28--32
                                AListExprs ../src/test_parser.nit:137,32
                              TCpar ")" ../src/test_parser.nit:137,33
                        AVardeclExpr ../src/test_parser.nit:138,4--26
                          TKwvar "var" ../src/test_parser.nit:138,4--6
                          TId "tree" ../src/test_parser.nit:138,8--11
                          TAssign "=" ../src/test_parser.nit:138,13
                          ACallExpr ../src/test_parser.nit:138,15--26
                            ACallExpr ../src/test_parser.nit:138,15--20
                              AImplicitSelfExpr ../src/test_parser.nit:138,15
                              TId "parser" ../src/test_parser.nit:138,15--20
                              AListExprs ../src/test_parser.nit:138,20
                            TId "parse" ../src/test_parser.nit:138,22--26
                            AListExprs ../src/test_parser.nit:138,26
                        AVardeclExpr ../src/test_parser.nit:140,4--25
                          TKwvar "var" ../src/test_parser.nit:140,4--6
                          TId "error" ../src/test_parser.nit:140,8--12
                          TAssign "=" ../src/test_parser.nit:140,14
                          ACallExpr ../src/test_parser.nit:140,16--25
                            ACallExpr ../src/test_parser.nit:140,16--19
                              AImplicitSelfExpr ../src/test_parser.nit:140,16
                              TId "tree" ../src/test_parser.nit:140,16--19
                              AListExprs ../src/test_parser.nit:140,19
                            TId "n_eof" ../src/test_parser.nit:140,21--25
                            AListExprs ../src/test_parser.nit:140,25
                        AIfExpr ../src/test_parser.nit:141,4--144,6
                          TKwif "if" ../src/test_parser.nit:141,4--5
                          AIsaExpr ../src/test_parser.nit:141,7--22
                            ACallExpr ../src/test_parser.nit:141,7--11
                              AImplicitSelfExpr ../src/test_parser.nit:141,7
                              TId "error" ../src/test_parser.nit:141,7--11
                              AListExprs ../src/test_parser.nit:141,11
                            AType ../src/test_parser.nit:141,17--22
                              TClassid "AError" ../src/test_parser.nit:141,17--22
                          ABlockExpr ../src/test_parser.nit:142,5--143,10
                            ACallExpr ../src/test_parser.nit:142,5--58
                              AImplicitSelfExpr ../src/test_parser.nit:142,5
                              TId "print" ../src/test_parser.nit:142,5--9
                              AParExprs ../src/test_parser.nit:142,10--58
                                TOpar "(" ../src/test_parser.nit:142,10
                                ASuperstringExpr ../src/test_parser.nit:142,11--57
                                  AStartStringExpr ../src/test_parser.nit:142,11--21
                                    TStartString "\"Error at {" ../src/test_parser.nit:142,11--21
                                  ACallExpr ../src/test_parser.nit:142,22--35
                                    ACallExpr ../src/test_parser.nit:142,22--26
                                      AImplicitSelfExpr ../src/test_parser.nit:142,22
                                      TId "error" ../src/test_parser.nit:142,22--26
                                      AListExprs ../src/test_parser.nit:142,26
                                    TId "location" ../src/test_parser.nit:142,28--35
                                    AListExprs ../src/test_parser.nit:142,35
                                  AMidStringExpr ../src/test_parser.nit:142,36--42
                                    TMidString "}:\\n\\t{" ../src/test_parser.nit:142,36--42
                                  ACallExpr ../src/test_parser.nit:142,43--55
                                    ACallExpr ../src/test_parser.nit:142,43--47
                                      AImplicitSelfExpr ../src/test_parser.nit:142,43
                                      TId "error" ../src/test_parser.nit:142,43--47
                                      AListExprs ../src/test_parser.nit:142,47
                                    TId "message" ../src/test_parser.nit:142,49--55
                                    AListExprs ../src/test_parser.nit:142,55
                                  AEndStringExpr ../src/test_parser.nit:142,56--57
                                    TEndString "}\"" ../src/test_parser.nit:142,56--57
                                TCpar ")" ../src/test_parser.nit:142,58
                            AReturnExpr ../src/test_parser.nit:143,5--10
                              TKwreturn "return" ../src/test_parser.nit:143,5--10
                          ABlockExpr ../src/test_parser.nit:144,4--6
                            TKwend "end" ../src/test_parser.nit:144,4--6
                        AIfExpr ../src/test_parser.nit:146,4--148,6
                          TKwif "if" ../src/test_parser.nit:146,4--5
                          ANotExpr ../src/test_parser.nit:146,7--18
                            TKwnot "not" ../src/test_parser.nit:146,7--9
                            ACallExpr ../src/test_parser.nit:146,11--18
                              AImplicitSelfExpr ../src/test_parser.nit:146,11
                              TId "no_print" ../src/test_parser.nit:146,11--18
                              AListExprs ../src/test_parser.nit:146,18
                          ABlockExpr ../src/test_parser.nit:147,5--44
                            ACallExpr ../src/test_parser.nit:147,5--44
                              AParExpr ../src/test_parser.nit:147,5--26
                                TOpar "(" ../src/test_parser.nit:147,5
                                ANewExpr ../src/test_parser.nit:147,6--25
                                  TKwnew "new" ../src/test_parser.nit:147,6--8
                                  AType ../src/test_parser.nit:147,10--25
                                    TClassid "PrintTreeVisitor" ../src/test_parser.nit:147,10--25
                                  AListExprs ../src/test_parser.nit:147,25
                                TCpar ")" ../src/test_parser.nit:147,26
                              TId "enter_visit" ../src/test_parser.nit:147,28--38
                              AParExprs ../src/test_parser.nit:147,39--44
                                TOpar "(" ../src/test_parser.nit:147,39
                                ACallExpr ../src/test_parser.nit:147,40--43
                                  AImplicitSelfExpr ../src/test_parser.nit:147,40
                                  TId "tree" ../src/test_parser.nit:147,40--43
                                  AListExprs ../src/test_parser.nit:147,43
                                TCpar ")" ../src/test_parser.nit:147,44
                          ABlockExpr ../src/test_parser.nit:148,4--6
                            TKwend "end" ../src/test_parser.nit:148,4--6
                        TKwend "end" ../src/test_parser.nit:149,3--5
                    TKwend "end" ../src/test_parser.nit:150,2--4
                TKwend "end" ../src/test_parser.nit:151,1--3
  EOF "" ../src/test_parser.nit:152,1
