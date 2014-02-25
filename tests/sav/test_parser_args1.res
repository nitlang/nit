Start ../src/test_parser.nit:17,1--110,1
  AModule ../src/test_parser.nit:17,1--109,3
    AModuledecl ../src/test_parser.nit:17,1--18,18
      ADoc ../src/test_parser.nit:17,1--18,0
        TComment "# Program used to test the NIT parser\n" ../src/test_parser.nit:17,1--18,0
      TKwmodule "module" ../src/test_parser.nit:18,1--6
      AModuleName ../src/test_parser.nit:18,8--18
        TId "test_parser" ../src/test_parser.nit:18,8--18
    AStdImport ../src/test_parser.nit:20,1--13
      APublicVisibility ../src/test_parser.nit:20,1
      TKwimport "import" ../src/test_parser.nit:20,1--6
      AModuleName ../src/test_parser.nit:20,8--13
        TId "parser" ../src/test_parser.nit:20,8--13
    AStdClassdef ../src/test_parser.nit:22,1--41,3
      APublicVisibility ../src/test_parser.nit:22,1
      AConcreteClasskind ../src/test_parser.nit:22,1--5
        TKwclass "class" ../src/test_parser.nit:22,1--5
      TClassid "PrintTreeVisitor" ../src/test_parser.nit:22,7--22
      ASuperclass ../src/test_parser.nit:23,2--14
        TKwsuper "super" ../src/test_parser.nit:23,2--6
        AType ../src/test_parser.nit:23,8--14
          TClassid "Visitor" ../src/test_parser.nit:23,8--14
      AAttrPropdef ../src/test_parser.nit:24,2--15
        APublicVisibility ../src/test_parser.nit:24,2
        TKwvar "var" ../src/test_parser.nit:24,2--4
        TAttrid "_rank" ../src/test_parser.nit:24,6--10
        AType ../src/test_parser.nit:24,13--15
          TClassid "Int" ../src/test_parser.nit:24,13--15
      AConcreteMethPropdef ../src/test_parser.nit:25,2--35,4
        TKwredef "redef" ../src/test_parser.nit:25,2--6
        APublicVisibility ../src/test_parser.nit:25,8
        TKwmeth "fun" ../src/test_parser.nit:25,8--10
        AIdMethid ../src/test_parser.nit:25,12--16
          TId "visit" ../src/test_parser.nit:25,12--16
        ASignature ../src/test_parser.nit:25,17--19
          TOpar "(" ../src/test_parser.nit:25,17
          AParam ../src/test_parser.nit:25,18
            TId "n" ../src/test_parser.nit:25,18
          TCpar ")" ../src/test_parser.nit:25,19
        ABlockExpr ../src/test_parser.nit:27,3--35,4
          AIfExpr ../src/test_parser.nit:27,3--31,5
            TKwif "if" ../src/test_parser.nit:27,3--4
            AIsaExpr ../src/test_parser.nit:27,6--16
              ACallExpr ../src/test_parser.nit:27,6
                AImplicitSelfExpr ../src/test_parser.nit:27,6
                TId "n" ../src/test_parser.nit:27,6
                AListExprs ../src/test_parser.nit:27,6
              AType ../src/test_parser.nit:27,12--16
                TClassid "Token" ../src/test_parser.nit:27,12--16
            ABlockExpr ../src/test_parser.nit:28,4--89
              ACallExpr ../src/test_parser.nit:28,4--89
                AImplicitSelfExpr ../src/test_parser.nit:28,4
                TId "printn" ../src/test_parser.nit:28,4--9
                AParExprs ../src/test_parser.nit:28,10--89
                  TOpar "(" ../src/test_parser.nit:28,10
                  AStarExpr ../src/test_parser.nit:28,11--22
                    AStringExpr ../src/test_parser.nit:28,11--14
                      TString "\"  \"" ../src/test_parser.nit:28,11--14
                    AAttrExpr ../src/test_parser.nit:28,18--22
                      AImplicitSelfExpr ../src/test_parser.nit:28,18
                      TAttrid "_rank" ../src/test_parser.nit:28,18--22
                  ACallExpr ../src/test_parser.nit:28,25--36
                    ACallExpr ../src/test_parser.nit:28,25
                      AImplicitSelfExpr ../src/test_parser.nit:28,25
                      TId "n" ../src/test_parser.nit:28,25
                      AListExprs ../src/test_parser.nit:28,25
                    TId "class_name" ../src/test_parser.nit:28,27--36
                    AListExprs ../src/test_parser.nit:28,36
                  AStringExpr ../src/test_parser.nit:28,39--43
                    TString "\" \\\"\"" ../src/test_parser.nit:28,39--43
                  ACallExpr ../src/test_parser.nit:28,46--63
                    ACallExpr ../src/test_parser.nit:28,46--51
                      ACallExpr ../src/test_parser.nit:28,46
                        AImplicitSelfExpr ../src/test_parser.nit:28,46
                        TId "n" ../src/test_parser.nit:28,46
                        AListExprs ../src/test_parser.nit:28,46
                      TId "text" ../src/test_parser.nit:28,48--51
                      AListExprs ../src/test_parser.nit:28,51
                    TId "escape_to_c" ../src/test_parser.nit:28,53--63
                    AListExprs ../src/test_parser.nit:28,63
                  AStringExpr ../src/test_parser.nit:28,66--70
                    TString "\"\\\" \"" ../src/test_parser.nit:28,66--70
                  ACallExpr ../src/test_parser.nit:28,73--82
                    ACallExpr ../src/test_parser.nit:28,73
                      AImplicitSelfExpr ../src/test_parser.nit:28,73
                      TId "n" ../src/test_parser.nit:28,73
                      AListExprs ../src/test_parser.nit:28,73
                    TId "location" ../src/test_parser.nit:28,75--82
                    AListExprs ../src/test_parser.nit:28,82
                  AStringExpr ../src/test_parser.nit:28,85--88
                    TString "\"\\n\"" ../src/test_parser.nit:28,85--88
                  TCpar ")" ../src/test_parser.nit:28,89
            ABlockExpr ../src/test_parser.nit:30,4--31,5
              ACallExpr ../src/test_parser.nit:30,4--60
                AImplicitSelfExpr ../src/test_parser.nit:30,4
                TId "printn" ../src/test_parser.nit:30,4--9
                AParExprs ../src/test_parser.nit:30,10--60
                  TOpar "(" ../src/test_parser.nit:30,10
                  AStarExpr ../src/test_parser.nit:30,11--22
                    AStringExpr ../src/test_parser.nit:30,11--14
                      TString "\"  \"" ../src/test_parser.nit:30,11--14
                    AAttrExpr ../src/test_parser.nit:30,18--22
                      AImplicitSelfExpr ../src/test_parser.nit:30,18
                      TAttrid "_rank" ../src/test_parser.nit:30,18--22
                  ACallExpr ../src/test_parser.nit:30,25--36
                    ACallExpr ../src/test_parser.nit:30,25
                      AImplicitSelfExpr ../src/test_parser.nit:30,25
                      TId "n" ../src/test_parser.nit:30,25
                      AListExprs ../src/test_parser.nit:30,25
                    TId "class_name" ../src/test_parser.nit:30,27--36
                    AListExprs ../src/test_parser.nit:30,36
                  AStringExpr ../src/test_parser.nit:30,39--41
                    TString "\" \"" ../src/test_parser.nit:30,39--41
                  ACallExpr ../src/test_parser.nit:30,44--53
                    ACallExpr ../src/test_parser.nit:30,44
                      AImplicitSelfExpr ../src/test_parser.nit:30,44
                      TId "n" ../src/test_parser.nit:30,44
                      AListExprs ../src/test_parser.nit:30,44
                    TId "location" ../src/test_parser.nit:30,46--53
                    AListExprs ../src/test_parser.nit:30,53
                  AStringExpr ../src/test_parser.nit:30,56--59
                    TString "\"\\n\"" ../src/test_parser.nit:30,56--59
                  TCpar ")" ../src/test_parser.nit:30,60
              TKwend "end" ../src/test_parser.nit:31,3--5
          AAttrAssignExpr ../src/test_parser.nit:32,3--19
            AImplicitSelfExpr ../src/test_parser.nit:32,3
            TAttrid "_rank" ../src/test_parser.nit:32,3--7
            TAssign "=" ../src/test_parser.nit:32,9
            APlusExpr ../src/test_parser.nit:32,11--19
              AAttrExpr ../src/test_parser.nit:32,11--15
                AImplicitSelfExpr ../src/test_parser.nit:32,11
                TAttrid "_rank" ../src/test_parser.nit:32,11--15
              AIntExpr ../src/test_parser.nit:32,19
                TNumber "1" ../src/test_parser.nit:32,19
          ACallExpr ../src/test_parser.nit:33,3--19
            ACallExpr ../src/test_parser.nit:33,3
              AImplicitSelfExpr ../src/test_parser.nit:33,3
              TId "n" ../src/test_parser.nit:33,3
              AListExprs ../src/test_parser.nit:33,3
            TId "visit_all" ../src/test_parser.nit:33,5--13
            AParExprs ../src/test_parser.nit:33,14--19
              TOpar "(" ../src/test_parser.nit:33,14
              ASelfExpr ../src/test_parser.nit:33,15--18
                TKwself "self" ../src/test_parser.nit:33,15--18
              TCpar ")" ../src/test_parser.nit:33,19
          AAttrAssignExpr ../src/test_parser.nit:34,3--19
            AImplicitSelfExpr ../src/test_parser.nit:34,3
            TAttrid "_rank" ../src/test_parser.nit:34,3--7
            TAssign "=" ../src/test_parser.nit:34,9
            AMinusExpr ../src/test_parser.nit:34,11--19
              AAttrExpr ../src/test_parser.nit:34,11--15
                AImplicitSelfExpr ../src/test_parser.nit:34,11
                TAttrid "_rank" ../src/test_parser.nit:34,11--15
              AIntExpr ../src/test_parser.nit:34,19
                TNumber "1" ../src/test_parser.nit:34,19
          TKwend "end" ../src/test_parser.nit:35,2--4
      AConcreteInitPropdef ../src/test_parser.nit:37,2--40,4
        APublicVisibility ../src/test_parser.nit:37,2
        TKwinit "init" ../src/test_parser.nit:37,2--5
        ASignature ../src/test_parser.nit:39,3
        ABlockExpr ../src/test_parser.nit:39,3--40,4
          AAttrAssignExpr ../src/test_parser.nit:39,3--11
            AImplicitSelfExpr ../src/test_parser.nit:39,3
            TAttrid "_rank" ../src/test_parser.nit:39,3--7
            TAssign "=" ../src/test_parser.nit:39,9
            AIntExpr ../src/test_parser.nit:39,11
              TNumber "0" ../src/test_parser.nit:39,11
          TKwend "end" ../src/test_parser.nit:40,2--4
      TKwend "end" ../src/test_parser.nit:41,1--3
    AMainClassdef ../src/test_parser.nit:43,1--109,3
      AMainMethPropdef ../src/test_parser.nit:43,1--109,3
        ABlockExpr ../src/test_parser.nit:43,1--109,3
          AVardeclExpr ../src/test_parser.nit:43,1--20
            TKwvar "var" ../src/test_parser.nit:43,1--3
            TId "no_print" ../src/test_parser.nit:43,5--12
            TAssign "=" ../src/test_parser.nit:43,14
            AFalseExpr ../src/test_parser.nit:43,16--20
              TKwfalse "false" ../src/test_parser.nit:43,16--20
          AVardeclExpr ../src/test_parser.nit:44,1--22
            TKwvar "var" ../src/test_parser.nit:44,1--3
            TId "only_lexer" ../src/test_parser.nit:44,5--14
            TAssign "=" ../src/test_parser.nit:44,16
            AFalseExpr ../src/test_parser.nit:44,18--22
              TKwfalse "false" ../src/test_parser.nit:44,18--22
          AVardeclExpr ../src/test_parser.nit:45,1--21
            TKwvar "var" ../src/test_parser.nit:45,1--3
            TId "need_help" ../src/test_parser.nit:45,5--13
            TAssign "=" ../src/test_parser.nit:45,15
            AFalseExpr ../src/test_parser.nit:45,17--21
              TKwfalse "false" ../src/test_parser.nit:45,17--21
          AVardeclExpr ../src/test_parser.nit:46,1--19
            TKwvar "var" ../src/test_parser.nit:46,1--3
            TId "no_file" ../src/test_parser.nit:46,5--11
            TAssign "=" ../src/test_parser.nit:46,13
            AFalseExpr ../src/test_parser.nit:46,15--19
              TKwfalse "false" ../src/test_parser.nit:46,15--19
          AWhileExpr ../src/test_parser.nit:48,1--64,3
            TKwwhile "while" ../src/test_parser.nit:48,1--5
            AAndExpr ../src/test_parser.nit:48,7--57
              ANotExpr ../src/test_parser.nit:48,7--23
                TKwnot "not" ../src/test_parser.nit:48,7--9
                ACallExpr ../src/test_parser.nit:48,11--23
                  ACallExpr ../src/test_parser.nit:48,11--14
                    AImplicitSelfExpr ../src/test_parser.nit:48,11
                    TId "args" ../src/test_parser.nit:48,11--14
                    AListExprs ../src/test_parser.nit:48,14
                  TId "is_empty" ../src/test_parser.nit:48,16--23
                  AListExprs ../src/test_parser.nit:48,23
              AEqExpr ../src/test_parser.nit:48,29--57
                ACallExpr ../src/test_parser.nit:48,29--50
                  ACallExpr ../src/test_parser.nit:48,29--44
                    ACallExpr ../src/test_parser.nit:48,29--38
                      ACallExpr ../src/test_parser.nit:48,29--32
                        AImplicitSelfExpr ../src/test_parser.nit:48,29
                        TId "args" ../src/test_parser.nit:48,29--32
                        AListExprs ../src/test_parser.nit:48,32
                      TId "first" ../src/test_parser.nit:48,34--38
                      AListExprs ../src/test_parser.nit:48,38
                    TId "chars" ../src/test_parser.nit:48,40--44
                    AListExprs ../src/test_parser.nit:48,44
                  TId "first" ../src/test_parser.nit:48,46--50
                  AListExprs ../src/test_parser.nit:48,50
                ACharExpr ../src/test_parser.nit:48,55--57
                  TChar "\'-\'" ../src/test_parser.nit:48,55--57
            TKwdo "do" ../src/test_parser.nit:48,59--60
            ABlockExpr ../src/test_parser.nit:49,2--64,3
              AIfExpr ../src/test_parser.nit:49,2--62,4
                TKwif "if" ../src/test_parser.nit:49,2--3
                AEqExpr ../src/test_parser.nit:49,5--22
                  ACallExpr ../src/test_parser.nit:49,5--14
                    ACallExpr ../src/test_parser.nit:49,5--8
                      AImplicitSelfExpr ../src/test_parser.nit:49,5
                      TId "args" ../src/test_parser.nit:49,5--8
                      AListExprs ../src/test_parser.nit:49,8
                    TId "first" ../src/test_parser.nit:49,10--14
                    AListExprs ../src/test_parser.nit:49,14
                  AStringExpr ../src/test_parser.nit:49,19--22
                    TString "\"-n\"" ../src/test_parser.nit:49,19--22
                ABlockExpr ../src/test_parser.nit:50,3--17
                  ACallAssignExpr ../src/test_parser.nit:50,3--17
                    AImplicitSelfExpr ../src/test_parser.nit:50,3
                    TId "no_print" ../src/test_parser.nit:50,3--10
                    AListExprs ../src/test_parser.nit:50,12
                    TAssign "=" ../src/test_parser.nit:50,12
                    ATrueExpr ../src/test_parser.nit:50,14--17
                      TKwtrue "true" ../src/test_parser.nit:50,14--17
                AIfExpr ../src/test_parser.nit:51,7--62,4
                  TKwif "if" ../src/test_parser.nit:51,7--8
                  AEqExpr ../src/test_parser.nit:51,10--27
                    ACallExpr ../src/test_parser.nit:51,10--19
                      ACallExpr ../src/test_parser.nit:51,10--13
                        AImplicitSelfExpr ../src/test_parser.nit:51,10
                        TId "args" ../src/test_parser.nit:51,10--13
                        AListExprs ../src/test_parser.nit:51,13
                      TId "first" ../src/test_parser.nit:51,15--19
                      AListExprs ../src/test_parser.nit:51,19
                    AStringExpr ../src/test_parser.nit:51,24--27
                      TString "\"-l\"" ../src/test_parser.nit:51,24--27
                  ABlockExpr ../src/test_parser.nit:52,3--19
                    ACallAssignExpr ../src/test_parser.nit:52,3--19
                      AImplicitSelfExpr ../src/test_parser.nit:52,3
                      TId "only_lexer" ../src/test_parser.nit:52,3--12
                      AListExprs ../src/test_parser.nit:52,14
                      TAssign "=" ../src/test_parser.nit:52,14
                      ATrueExpr ../src/test_parser.nit:52,16--19
                        TKwtrue "true" ../src/test_parser.nit:52,16--19
                  AIfExpr ../src/test_parser.nit:53,7--62,4
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
                        TString "\"-p\"" ../src/test_parser.nit:53,24--27
                    ABlockExpr ../src/test_parser.nit:54,3--20
                      ACallAssignExpr ../src/test_parser.nit:54,3--20
                        AImplicitSelfExpr ../src/test_parser.nit:54,3
                        TId "only_lexer" ../src/test_parser.nit:54,3--12
                        AListExprs ../src/test_parser.nit:54,14
                        TAssign "=" ../src/test_parser.nit:54,14
                        AFalseExpr ../src/test_parser.nit:54,16--20
                          TKwfalse "false" ../src/test_parser.nit:54,16--20
                    AIfExpr ../src/test_parser.nit:55,7--62,4
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
                          TString "\"-e\"" ../src/test_parser.nit:55,24--27
                      ABlockExpr ../src/test_parser.nit:56,3--16
                        ACallAssignExpr ../src/test_parser.nit:56,3--16
                          AImplicitSelfExpr ../src/test_parser.nit:56,3
                          TId "no_file" ../src/test_parser.nit:56,3--9
                          AListExprs ../src/test_parser.nit:56,11
                          TAssign "=" ../src/test_parser.nit:56,11
                          ATrueExpr ../src/test_parser.nit:56,13--16
                            TKwtrue "true" ../src/test_parser.nit:56,13--16
                      AIfExpr ../src/test_parser.nit:57,7--62,4
                        TKwif "if" ../src/test_parser.nit:57,7--8
                        AOrExpr ../src/test_parser.nit:57,10--49
                          AEqExpr ../src/test_parser.nit:57,10--27
                            ACallExpr ../src/test_parser.nit:57,10--19
                              ACallExpr ../src/test_parser.nit:57,10--13
                                AImplicitSelfExpr ../src/test_parser.nit:57,10
                                TId "args" ../src/test_parser.nit:57,10--13
                                AListExprs ../src/test_parser.nit:57,13
                              TId "first" ../src/test_parser.nit:57,15--19
                              AListExprs ../src/test_parser.nit:57,19
                            AStringExpr ../src/test_parser.nit:57,24--27
                              TString "\"-h\"" ../src/test_parser.nit:57,24--27
                          AEqExpr ../src/test_parser.nit:57,32--49
                            ACallExpr ../src/test_parser.nit:57,32--41
                              ACallExpr ../src/test_parser.nit:57,32--35
                                AImplicitSelfExpr ../src/test_parser.nit:57,32
                                TId "args" ../src/test_parser.nit:57,32--35
                                AListExprs ../src/test_parser.nit:57,35
                              TId "first" ../src/test_parser.nit:57,37--41
                              AListExprs ../src/test_parser.nit:57,41
                            AStringExpr ../src/test_parser.nit:57,46--49
                              TString "\"-?\"" ../src/test_parser.nit:57,46--49
                        ABlockExpr ../src/test_parser.nit:58,3--18
                          ACallAssignExpr ../src/test_parser.nit:58,3--18
                            AImplicitSelfExpr ../src/test_parser.nit:58,3
                            TId "need_help" ../src/test_parser.nit:58,3--11
                            AListExprs ../src/test_parser.nit:58,13
                            TAssign "=" ../src/test_parser.nit:58,13
                            ATrueExpr ../src/test_parser.nit:58,15--18
                              TKwtrue "true" ../src/test_parser.nit:58,15--18
                        ABlockExpr ../src/test_parser.nit:60,3--62,4
                          ACallExpr ../src/test_parser.nit:60,3--48
                            ACallExpr ../src/test_parser.nit:60,3--8
                              AImplicitSelfExpr ../src/test_parser.nit:60,3
                              TId "stderr" ../src/test_parser.nit:60,3--8
                              AListExprs ../src/test_parser.nit:60,8
                            TId "write" ../src/test_parser.nit:60,10--14
                            AParExprs ../src/test_parser.nit:60,15--48
                              TOpar "(" ../src/test_parser.nit:60,15
                              ASuperstringExpr ../src/test_parser.nit:60,16--47
                                AStartStringExpr ../src/test_parser.nit:60,16--32
                                  TStartString "\"Unknown option {" ../src/test_parser.nit:60,16--32
                                ACallExpr ../src/test_parser.nit:60,33--42
                                  ACallExpr ../src/test_parser.nit:60,33--36
                                    AImplicitSelfExpr ../src/test_parser.nit:60,33
                                    TId "args" ../src/test_parser.nit:60,33--36
                                    AListExprs ../src/test_parser.nit:60,36
                                  TId "first" ../src/test_parser.nit:60,38--42
                                  AListExprs ../src/test_parser.nit:60,42
                                AEndStringExpr ../src/test_parser.nit:60,43--47
                                  TEndString "}.\\n\"" ../src/test_parser.nit:60,43--47
                              TCpar ")" ../src/test_parser.nit:60,48
                          ACallExpr ../src/test_parser.nit:61,3--9
                            AImplicitSelfExpr ../src/test_parser.nit:61,3
                            TId "exit" ../src/test_parser.nit:61,3--6
                            AParExprs ../src/test_parser.nit:61,7--9
                              TOpar "(" ../src/test_parser.nit:61,7
                              AIntExpr ../src/test_parser.nit:61,8
                                TNumber "0" ../src/test_parser.nit:61,8
                              TCpar ")" ../src/test_parser.nit:61,9
                          TKwend "end" ../src/test_parser.nit:62,2--4
              ACallExpr ../src/test_parser.nit:63,2--11
                ACallExpr ../src/test_parser.nit:63,2--5
                  AImplicitSelfExpr ../src/test_parser.nit:63,2
                  TId "args" ../src/test_parser.nit:63,2--5
                  AListExprs ../src/test_parser.nit:63,5
                TId "shift" ../src/test_parser.nit:63,7--11
                AListExprs ../src/test_parser.nit:63,11
              TKwend "end" ../src/test_parser.nit:64,1--3
          AIfExpr ../src/test_parser.nit:66,1--109,3
            TKwif "if" ../src/test_parser.nit:66,1--2
            AOrExpr ../src/test_parser.nit:66,4--29
              ACallExpr ../src/test_parser.nit:66,4--16
                ACallExpr ../src/test_parser.nit:66,4--7
                  AImplicitSelfExpr ../src/test_parser.nit:66,4
                  TId "args" ../src/test_parser.nit:66,4--7
                  AListExprs ../src/test_parser.nit:66,7
                TId "is_empty" ../src/test_parser.nit:66,9--16
                AListExprs ../src/test_parser.nit:66,16
              ACallExpr ../src/test_parser.nit:66,21--29
                AImplicitSelfExpr ../src/test_parser.nit:66,21
                TId "need_help" ../src/test_parser.nit:66,21--29
                AListExprs ../src/test_parser.nit:66,29
            ABlockExpr ../src/test_parser.nit:67,2--74,30
              ACallExpr ../src/test_parser.nit:67,2--16
                AImplicitSelfExpr ../src/test_parser.nit:67,2
                TId "print" ../src/test_parser.nit:67,2--6
                AParExprs ../src/test_parser.nit:67,7--16
                  TOpar "(" ../src/test_parser.nit:67,7
                  AStringExpr ../src/test_parser.nit:67,8--15
                    TString "\"usage:\"" ../src/test_parser.nit:67,8--15
                  TCpar ")" ../src/test_parser.nit:67,16
              ACallExpr ../src/test_parser.nit:68,2--54
                AImplicitSelfExpr ../src/test_parser.nit:68,2
                TId "print" ../src/test_parser.nit:68,2--6
                AParExprs ../src/test_parser.nit:68,7--54
                  TOpar "(" ../src/test_parser.nit:68,7
                  AStringExpr ../src/test_parser.nit:68,8--53
                    TString "\"  test_parser [options]... <filename.nit>...\"" ../src/test_parser.nit:68,8--53
                  TCpar ")" ../src/test_parser.nit:68,54
              ACallExpr ../src/test_parser.nit:69,2--18
                AImplicitSelfExpr ../src/test_parser.nit:69,2
                TId "print" ../src/test_parser.nit:69,2--6
                AParExprs ../src/test_parser.nit:69,7--18
                  TOpar "(" ../src/test_parser.nit:69,7
                  AStringExpr ../src/test_parser.nit:69,8--17
                    TString "\"options:\"" ../src/test_parser.nit:69,8--17
                  TCpar ")" ../src/test_parser.nit:69,18
              ACallExpr ../src/test_parser.nit:70,2--36
                AImplicitSelfExpr ../src/test_parser.nit:70,2
                TId "print" ../src/test_parser.nit:70,2--6
                AParExprs ../src/test_parser.nit:70,7--36
                  TOpar "(" ../src/test_parser.nit:70,7
                  AStringExpr ../src/test_parser.nit:70,8--35
                    TString "\"  -n\11do not print anything\"" ../src/test_parser.nit:70,8--35
                  TCpar ")" ../src/test_parser.nit:70,36
              ACallExpr ../src/test_parser.nit:71,2--25
                AImplicitSelfExpr ../src/test_parser.nit:71,2
                TId "print" ../src/test_parser.nit:71,2--6
                AParExprs ../src/test_parser.nit:71,7--25
                  TOpar "(" ../src/test_parser.nit:71,7
                  AStringExpr ../src/test_parser.nit:71,8--24
                    TString "\"  -l\11only lexer\"" ../src/test_parser.nit:71,8--24
                  TCpar ")" ../src/test_parser.nit:71,25
              ACallExpr ../src/test_parser.nit:72,2--41
                AImplicitSelfExpr ../src/test_parser.nit:72,2
                TId "print" ../src/test_parser.nit:72,2--6
                AParExprs ../src/test_parser.nit:72,7--41
                  TOpar "(" ../src/test_parser.nit:72,7
                  AStringExpr ../src/test_parser.nit:72,8--40
                    TString "\"  -p\11lexer and parser (default)\"" ../src/test_parser.nit:72,8--40
                  TCpar ")" ../src/test_parser.nit:72,41
              ACallExpr ../src/test_parser.nit:73,2--68
                AImplicitSelfExpr ../src/test_parser.nit:73,2
                TId "print" ../src/test_parser.nit:73,2--6
                AParExprs ../src/test_parser.nit:73,7--68
                  TOpar "(" ../src/test_parser.nit:73,7
                  AStringExpr ../src/test_parser.nit:73,8--67
                    TString "\"  -e\11instead on files, each argument is a content to parse\"" ../src/test_parser.nit:73,8--67
                  TCpar ")" ../src/test_parser.nit:73,68
              ACallExpr ../src/test_parser.nit:74,2--30
                AImplicitSelfExpr ../src/test_parser.nit:74,2
                TId "print" ../src/test_parser.nit:74,2--6
                AParExprs ../src/test_parser.nit:74,7--30
                  TOpar "(" ../src/test_parser.nit:74,7
                  AStringExpr ../src/test_parser.nit:74,8--29
                    TString "\"  -h\11print this help\"" ../src/test_parser.nit:74,8--29
                  TCpar ")" ../src/test_parser.nit:74,30
            ABlockExpr ../src/test_parser.nit:76,2--109,3
              AForExpr ../src/test_parser.nit:76,2--108,4
                TKwfor "for" ../src/test_parser.nit:76,2--4
                TId "a" ../src/test_parser.nit:76,6
                ACallExpr ../src/test_parser.nit:76,11--14
                  AImplicitSelfExpr ../src/test_parser.nit:76,11
                  TId "args" ../src/test_parser.nit:76,11--14
                  AListExprs ../src/test_parser.nit:76,14
                TKwdo "do" ../src/test_parser.nit:76,16--17
                ABlockExpr ../src/test_parser.nit:77,3--108,4
                  AVardeclExpr ../src/test_parser.nit:77,3--12
                    TKwvar "var" ../src/test_parser.nit:77,3--5
                    TId "source" ../src/test_parser.nit:77,7--12
                  AIfExpr ../src/test_parser.nit:78,3--84,5
                    TKwif "if" ../src/test_parser.nit:78,3--4
                    ACallExpr ../src/test_parser.nit:78,6--12
                      AImplicitSelfExpr ../src/test_parser.nit:78,6
                      TId "no_file" ../src/test_parser.nit:78,6--12
                      AListExprs ../src/test_parser.nit:78,12
                    ABlockExpr ../src/test_parser.nit:79,4--45
                      ACallAssignExpr ../src/test_parser.nit:79,4--45
                        AImplicitSelfExpr ../src/test_parser.nit:79,4
                        TId "source" ../src/test_parser.nit:79,4--9
                        AListExprs ../src/test_parser.nit:79,11
                        TAssign "=" ../src/test_parser.nit:79,11
                        ANewExpr ../src/test_parser.nit:79,13--45
                          TKwnew "new" ../src/test_parser.nit:79,13--15
                          AType ../src/test_parser.nit:79,17--26
                            TClassid "SourceFile" ../src/test_parser.nit:79,17--26
                          TId "from_string" ../src/test_parser.nit:79,28--38
                          AParExprs ../src/test_parser.nit:79,39--45
                            TOpar "(" ../src/test_parser.nit:79,39
                            AStringExpr ../src/test_parser.nit:79,40--41
                              TString "\"\"" ../src/test_parser.nit:79,40--41
                            ACallExpr ../src/test_parser.nit:79,44
                              AImplicitSelfExpr ../src/test_parser.nit:79,44
                              TId "a" ../src/test_parser.nit:79,44
                              AListExprs ../src/test_parser.nit:79,44
                            TCpar ")" ../src/test_parser.nit:79,45
                    ABlockExpr ../src/test_parser.nit:81,4--84,5
                      AVardeclExpr ../src/test_parser.nit:81,4--31
                        TKwvar "var" ../src/test_parser.nit:81,4--6
                        TId "f" ../src/test_parser.nit:81,8
                        TAssign "=" ../src/test_parser.nit:81,10
                        ANewExpr ../src/test_parser.nit:81,12--31
                          TKwnew "new" ../src/test_parser.nit:81,12--14
                          AType ../src/test_parser.nit:81,16--23
                            TClassid "IFStream" ../src/test_parser.nit:81,16--23
                          TId "open" ../src/test_parser.nit:81,25--28
                          AParExprs ../src/test_parser.nit:81,29--31
                            TOpar "(" ../src/test_parser.nit:81,29
                            ACallExpr ../src/test_parser.nit:81,30
                              AImplicitSelfExpr ../src/test_parser.nit:81,30
                              TId "a" ../src/test_parser.nit:81,30
                              AListExprs ../src/test_parser.nit:81,30
                            TCpar ")" ../src/test_parser.nit:81,31
                      ACallAssignExpr ../src/test_parser.nit:82,4--32
                        AImplicitSelfExpr ../src/test_parser.nit:82,4
                        TId "source" ../src/test_parser.nit:82,4--9
                        AListExprs ../src/test_parser.nit:82,11
                        TAssign "=" ../src/test_parser.nit:82,11
                        ANewExpr ../src/test_parser.nit:82,13--32
                          TKwnew "new" ../src/test_parser.nit:82,13--15
                          AType ../src/test_parser.nit:82,17--26
                            TClassid "SourceFile" ../src/test_parser.nit:82,17--26
                          AParExprs ../src/test_parser.nit:82,27--32
                            TOpar "(" ../src/test_parser.nit:82,27
                            ACallExpr ../src/test_parser.nit:82,28
                              AImplicitSelfExpr ../src/test_parser.nit:82,28
                              TId "a" ../src/test_parser.nit:82,28
                              AListExprs ../src/test_parser.nit:82,28
                            ACallExpr ../src/test_parser.nit:82,31
                              AImplicitSelfExpr ../src/test_parser.nit:82,31
                              TId "f" ../src/test_parser.nit:82,31
                              AListExprs ../src/test_parser.nit:82,31
                            TCpar ")" ../src/test_parser.nit:82,32
                      ACallExpr ../src/test_parser.nit:83,4--10
                        ACallExpr ../src/test_parser.nit:83,4
                          AImplicitSelfExpr ../src/test_parser.nit:83,4
                          TId "f" ../src/test_parser.nit:83,4
                          AListExprs ../src/test_parser.nit:83,4
                        TId "close" ../src/test_parser.nit:83,6--10
                        AListExprs ../src/test_parser.nit:83,10
                      TKwend "end" ../src/test_parser.nit:84,3--5
                  AVardeclExpr ../src/test_parser.nit:85,3--31
                    TKwvar "var" ../src/test_parser.nit:85,3--5
                    TId "lexer" ../src/test_parser.nit:85,7--11
                    TAssign "=" ../src/test_parser.nit:85,13
                    ANewExpr ../src/test_parser.nit:85,15--31
                      TKwnew "new" ../src/test_parser.nit:85,15--17
                      AType ../src/test_parser.nit:85,19--23
                        TClassid "Lexer" ../src/test_parser.nit:85,19--23
                      AParExprs ../src/test_parser.nit:85,24--31
                        TOpar "(" ../src/test_parser.nit:85,24
                        ACallExpr ../src/test_parser.nit:85,25--30
                          AImplicitSelfExpr ../src/test_parser.nit:85,25
                          TId "source" ../src/test_parser.nit:85,25--30
                          AListExprs ../src/test_parser.nit:85,30
                        TCpar ")" ../src/test_parser.nit:85,31
                  AIfExpr ../src/test_parser.nit:86,3--107,5
                    TKwif "if" ../src/test_parser.nit:86,3--4
                    ACallExpr ../src/test_parser.nit:86,6--15
                      AImplicitSelfExpr ../src/test_parser.nit:86,6
                      TId "only_lexer" ../src/test_parser.nit:86,6--15
                      AListExprs ../src/test_parser.nit:86,15
                    ABlockExpr ../src/test_parser.nit:87,4--93,6
                      AVardeclExpr ../src/test_parser.nit:87,4--25
                        TKwvar "var" ../src/test_parser.nit:87,4--6
                        TId "token" ../src/test_parser.nit:87,8--12
                        TAssign "=" ../src/test_parser.nit:87,14
                        ACallExpr ../src/test_parser.nit:87,16--25
                          ACallExpr ../src/test_parser.nit:87,16--20
                            AImplicitSelfExpr ../src/test_parser.nit:87,16
                            TId "lexer" ../src/test_parser.nit:87,16--20
                            AListExprs ../src/test_parser.nit:87,20
                          TId "next" ../src/test_parser.nit:87,22--25
                          AListExprs ../src/test_parser.nit:87,25
                      AWhileExpr ../src/test_parser.nit:88,4--93,6
                        TKwwhile "while" ../src/test_parser.nit:88,4--8
                        ANotExpr ../src/test_parser.nit:88,10--26
                          TKwnot "not" ../src/test_parser.nit:88,10--12
                          AIsaExpr ../src/test_parser.nit:88,14--26
                            ACallExpr ../src/test_parser.nit:88,14--18
                              AImplicitSelfExpr ../src/test_parser.nit:88,14
                              TId "token" ../src/test_parser.nit:88,14--18
                              AListExprs ../src/test_parser.nit:88,18
                            AType ../src/test_parser.nit:88,24--26
                              TClassid "EOF" ../src/test_parser.nit:88,24--26
                        TKwdo "do" ../src/test_parser.nit:88,28--29
                        ABlockExpr ../src/test_parser.nit:89,5--93,6
                          AIfExpr ../src/test_parser.nit:89,5--91,7
                            TKwif "if" ../src/test_parser.nit:89,5--6
                            ANotExpr ../src/test_parser.nit:89,8--19
                              TKwnot "not" ../src/test_parser.nit:89,8--10
                              ACallExpr ../src/test_parser.nit:89,12--19
                                AImplicitSelfExpr ../src/test_parser.nit:89,12
                                TId "no_print" ../src/test_parser.nit:89,12--19
                                AListExprs ../src/test_parser.nit:89,19
                            ABlockExpr ../src/test_parser.nit:90,6--64
                              ACallExpr ../src/test_parser.nit:90,6--64
                                AImplicitSelfExpr ../src/test_parser.nit:90,6
                                TId "print" ../src/test_parser.nit:90,6--10
                                AParExprs ../src/test_parser.nit:90,11--64
                                  TOpar "(" ../src/test_parser.nit:90,11
                                  ASuperstringExpr ../src/test_parser.nit:90,12--63
                                    AStartStringExpr ../src/test_parser.nit:90,12--27
                                      TStartString "\"Read token at {" ../src/test_parser.nit:90,12--27
                                    ACallExpr ../src/test_parser.nit:90,28--41
                                      ACallExpr ../src/test_parser.nit:90,28--32
                                        AImplicitSelfExpr ../src/test_parser.nit:90,28
                                        TId "token" ../src/test_parser.nit:90,28--32
                                        AListExprs ../src/test_parser.nit:90,32
                                      TId "location" ../src/test_parser.nit:90,34--41
                                      AListExprs ../src/test_parser.nit:90,41
                                    AMidStringExpr ../src/test_parser.nit:90,42--50
                                      TMidString "} text=\'{" ../src/test_parser.nit:90,42--50
                                    ACallExpr ../src/test_parser.nit:90,51--60
                                      ACallExpr ../src/test_parser.nit:90,51--55
                                        AImplicitSelfExpr ../src/test_parser.nit:90,51
                                        TId "token" ../src/test_parser.nit:90,51--55
                                        AListExprs ../src/test_parser.nit:90,55
                                      TId "text" ../src/test_parser.nit:90,57--60
                                      AListExprs ../src/test_parser.nit:90,60
                                    AEndStringExpr ../src/test_parser.nit:90,61--63
                                      TEndString "}\'\"" ../src/test_parser.nit:90,61--63
                                  TCpar ")" ../src/test_parser.nit:90,64
                            ABlockExpr ../src/test_parser.nit:91,5--7
                              TKwend "end" ../src/test_parser.nit:91,5--7
                          ACallAssignExpr ../src/test_parser.nit:92,5--22
                            AImplicitSelfExpr ../src/test_parser.nit:92,5
                            TId "token" ../src/test_parser.nit:92,5--9
                            AListExprs ../src/test_parser.nit:92,11
                            TAssign "=" ../src/test_parser.nit:92,11
                            ACallExpr ../src/test_parser.nit:92,13--22
                              ACallExpr ../src/test_parser.nit:92,13--17
                                AImplicitSelfExpr ../src/test_parser.nit:92,13
                                TId "lexer" ../src/test_parser.nit:92,13--17
                                AListExprs ../src/test_parser.nit:92,17
                              TId "next" ../src/test_parser.nit:92,19--22
                              AListExprs ../src/test_parser.nit:92,22
                          TKwend "end" ../src/test_parser.nit:93,4--6
                    ABlockExpr ../src/test_parser.nit:95,4--107,5
                      AVardeclExpr ../src/test_parser.nit:95,4--33
                        TKwvar "var" ../src/test_parser.nit:95,4--6
                        TId "parser" ../src/test_parser.nit:95,8--13
                        TAssign "=" ../src/test_parser.nit:95,15
                        ANewExpr ../src/test_parser.nit:95,17--33
                          TKwnew "new" ../src/test_parser.nit:95,17--19
                          AType ../src/test_parser.nit:95,21--26
                            TClassid "Parser" ../src/test_parser.nit:95,21--26
                          AParExprs ../src/test_parser.nit:95,27--33
                            TOpar "(" ../src/test_parser.nit:95,27
                            ACallExpr ../src/test_parser.nit:95,28--32
                              AImplicitSelfExpr ../src/test_parser.nit:95,28
                              TId "lexer" ../src/test_parser.nit:95,28--32
                              AListExprs ../src/test_parser.nit:95,32
                            TCpar ")" ../src/test_parser.nit:95,33
                      AVardeclExpr ../src/test_parser.nit:96,4--26
                        TKwvar "var" ../src/test_parser.nit:96,4--6
                        TId "tree" ../src/test_parser.nit:96,8--11
                        TAssign "=" ../src/test_parser.nit:96,13
                        ACallExpr ../src/test_parser.nit:96,15--26
                          ACallExpr ../src/test_parser.nit:96,15--20
                            AImplicitSelfExpr ../src/test_parser.nit:96,15
                            TId "parser" ../src/test_parser.nit:96,15--20
                            AListExprs ../src/test_parser.nit:96,20
                          TId "parse" ../src/test_parser.nit:96,22--26
                          AListExprs ../src/test_parser.nit:96,26
                      AVardeclExpr ../src/test_parser.nit:98,4--25
                        TKwvar "var" ../src/test_parser.nit:98,4--6
                        TId "error" ../src/test_parser.nit:98,8--12
                        TAssign "=" ../src/test_parser.nit:98,14
                        ACallExpr ../src/test_parser.nit:98,16--25
                          ACallExpr ../src/test_parser.nit:98,16--19
                            AImplicitSelfExpr ../src/test_parser.nit:98,16
                            TId "tree" ../src/test_parser.nit:98,16--19
                            AListExprs ../src/test_parser.nit:98,19
                          TId "n_eof" ../src/test_parser.nit:98,21--25
                          AListExprs ../src/test_parser.nit:98,25
                      AIfExpr ../src/test_parser.nit:99,4--102,6
                        TKwif "if" ../src/test_parser.nit:99,4--5
                        AIsaExpr ../src/test_parser.nit:99,7--22
                          ACallExpr ../src/test_parser.nit:99,7--11
                            AImplicitSelfExpr ../src/test_parser.nit:99,7
                            TId "error" ../src/test_parser.nit:99,7--11
                            AListExprs ../src/test_parser.nit:99,11
                          AType ../src/test_parser.nit:99,17--22
                            TClassid "AError" ../src/test_parser.nit:99,17--22
                        ABlockExpr ../src/test_parser.nit:100,5--101,10
                          ACallExpr ../src/test_parser.nit:100,5--58
                            AImplicitSelfExpr ../src/test_parser.nit:100,5
                            TId "print" ../src/test_parser.nit:100,5--9
                            AParExprs ../src/test_parser.nit:100,10--58
                              TOpar "(" ../src/test_parser.nit:100,10
                              ASuperstringExpr ../src/test_parser.nit:100,11--57
                                AStartStringExpr ../src/test_parser.nit:100,11--21
                                  TStartString "\"Error at {" ../src/test_parser.nit:100,11--21
                                ACallExpr ../src/test_parser.nit:100,22--35
                                  ACallExpr ../src/test_parser.nit:100,22--26
                                    AImplicitSelfExpr ../src/test_parser.nit:100,22
                                    TId "error" ../src/test_parser.nit:100,22--26
                                    AListExprs ../src/test_parser.nit:100,26
                                  TId "location" ../src/test_parser.nit:100,28--35
                                  AListExprs ../src/test_parser.nit:100,35
                                AMidStringExpr ../src/test_parser.nit:100,36--42
                                  TMidString "}:\\n\\t{" ../src/test_parser.nit:100,36--42
                                ACallExpr ../src/test_parser.nit:100,43--55
                                  ACallExpr ../src/test_parser.nit:100,43--47
                                    AImplicitSelfExpr ../src/test_parser.nit:100,43
                                    TId "error" ../src/test_parser.nit:100,43--47
                                    AListExprs ../src/test_parser.nit:100,47
                                  TId "message" ../src/test_parser.nit:100,49--55
                                  AListExprs ../src/test_parser.nit:100,55
                                AEndStringExpr ../src/test_parser.nit:100,56--57
                                  TEndString "}\"" ../src/test_parser.nit:100,56--57
                              TCpar ")" ../src/test_parser.nit:100,58
                          AReturnExpr ../src/test_parser.nit:101,5--10
                            TKwreturn "return" ../src/test_parser.nit:101,5--10
                        ABlockExpr ../src/test_parser.nit:102,4--6
                          TKwend "end" ../src/test_parser.nit:102,4--6
                      AIfExpr ../src/test_parser.nit:104,4--106,6
                        TKwif "if" ../src/test_parser.nit:104,4--5
                        ANotExpr ../src/test_parser.nit:104,7--18
                          TKwnot "not" ../src/test_parser.nit:104,7--9
                          ACallExpr ../src/test_parser.nit:104,11--18
                            AImplicitSelfExpr ../src/test_parser.nit:104,11
                            TId "no_print" ../src/test_parser.nit:104,11--18
                            AListExprs ../src/test_parser.nit:104,18
                        ABlockExpr ../src/test_parser.nit:105,5--44
                          ACallExpr ../src/test_parser.nit:105,5--44
                            AParExpr ../src/test_parser.nit:105,5--26
                              TOpar "(" ../src/test_parser.nit:105,5
                              ANewExpr ../src/test_parser.nit:105,6--25
                                TKwnew "new" ../src/test_parser.nit:105,6--8
                                AType ../src/test_parser.nit:105,10--25
                                  TClassid "PrintTreeVisitor" ../src/test_parser.nit:105,10--25
                                AListExprs ../src/test_parser.nit:105,25
                              TCpar ")" ../src/test_parser.nit:105,26
                            TId "enter_visit" ../src/test_parser.nit:105,28--38
                            AParExprs ../src/test_parser.nit:105,39--44
                              TOpar "(" ../src/test_parser.nit:105,39
                              ACallExpr ../src/test_parser.nit:105,40--43
                                AImplicitSelfExpr ../src/test_parser.nit:105,40
                                TId "tree" ../src/test_parser.nit:105,40--43
                                AListExprs ../src/test_parser.nit:105,43
                              TCpar ")" ../src/test_parser.nit:105,44
                        ABlockExpr ../src/test_parser.nit:106,4--6
                          TKwend "end" ../src/test_parser.nit:106,4--6
                      TKwend "end" ../src/test_parser.nit:107,3--5
                  TKwend "end" ../src/test_parser.nit:108,2--4
              TKwend "end" ../src/test_parser.nit:109,1--3
  EOF "" ../src/test_parser.nit:110,1
