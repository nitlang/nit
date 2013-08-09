../src/test_parser.nit:17,1--110,1
  ../src/test_parser.nit:17,1--109,3
    ../src/test_parser.nit:17,1--18,19
      ../src/test_parser.nit:17,1--18,0
        '# Program used to test the NIT parser
' ... ../src/test_parser.nit:17,1--18,0
      keyword 'package' ... ../src/test_parser.nit:18,1--7
      ../src/test_parser.nit:18,9--19
        identifier 'test_parser' ... ../src/test_parser.nit:18,9--19
    ../src/test_parser.nit:20,1--13
      ../src/test_parser.nit:20,8
      keyword 'import' ... ../src/test_parser.nit:20,1--6
      ../src/test_parser.nit:20,8--13
        identifier 'parser' ... ../src/test_parser.nit:20,8--13
    ../src/test_parser.nit:22,1--41,3
      ../src/test_parser.nit:22,1
      ../src/test_parser.nit:22,1--5
        keyword 'class' ... ../src/test_parser.nit:22,1--5
      type identifier 'PrintTreeVisitor' ... ../src/test_parser.nit:22,7--22
      ../src/test_parser.nit:23,2--14
        keyword 'super' ... ../src/test_parser.nit:23,2--6
        ../src/test_parser.nit:23,8--14
          type identifier 'Visitor' ... ../src/test_parser.nit:23,8--14
      ../src/test_parser.nit:24,2--15
        ../src/test_parser.nit:24,13
        keyword 'var' ... ../src/test_parser.nit:24,2--4
        attribute '_rank' ... ../src/test_parser.nit:24,6--10
        ../src/test_parser.nit:24,13--15
          type identifier 'Int' ... ../src/test_parser.nit:24,13--15
      ../src/test_parser.nit:25,2--35,4
        keyword 'redef' ... ../src/test_parser.nit:25,2--6
        ../src/test_parser.nit:25,12
        keyword 'fun' ... ../src/test_parser.nit:25,8--10
        ../src/test_parser.nit:25,12--16
          identifier 'visit' ... ../src/test_parser.nit:25,12--16
        ../src/test_parser.nit:25,17--19
          '(' ... ../src/test_parser.nit:25,17
          ../src/test_parser.nit:25,18
            identifier 'n' ... ../src/test_parser.nit:25,18
          ')' ... ../src/test_parser.nit:25,19
        ../src/test_parser.nit:27,3--35,4
          ../src/test_parser.nit:27,3--31,5
            keyword 'if' ... ../src/test_parser.nit:27,3--4
            ../src/test_parser.nit:27,6--16
              ../src/test_parser.nit:27,6
                ../src/test_parser.nit:27,6
                identifier 'n' ... ../src/test_parser.nit:27,6
                ../src/test_parser.nit:27,6
              ../src/test_parser.nit:27,12--16
                type identifier 'Token' ... ../src/test_parser.nit:27,12--16
            ../src/test_parser.nit:28,4--58
              ../src/test_parser.nit:28,4--58
                ../src/test_parser.nit:28,11
                identifier 'printn' ... ../src/test_parser.nit:28,4--9
                ../src/test_parser.nit:28,10--58
                  '(' ... ../src/test_parser.nit:28,10
                  ../src/test_parser.nit:28,11--22
                    ../src/test_parser.nit:28,11--14
                      literal value '"  "' ... ../src/test_parser.nit:28,11--14
                    ../src/test_parser.nit:28,18--22
                      ../src/test_parser.nit:28,18
                      attribute '_rank' ... ../src/test_parser.nit:28,18--22
                  ../src/test_parser.nit:28,25--30
                    ../src/test_parser.nit:28,25
                      ../src/test_parser.nit:28,25
                      identifier 'n' ... ../src/test_parser.nit:28,25
                      ../src/test_parser.nit:28,25
                    identifier 'to_s' ... ../src/test_parser.nit:28,27--30
                    ../src/test_parser.nit:28,25
                  ../src/test_parser.nit:28,33--39
                    literal value '" ... "' ... ../src/test_parser.nit:28,33--39
                  ../src/test_parser.nit:28,42--51
                    ../src/test_parser.nit:28,42
                      ../src/test_parser.nit:28,42
                      identifier 'n' ... ../src/test_parser.nit:28,42
                      ../src/test_parser.nit:28,42
                    identifier 'location' ... ../src/test_parser.nit:28,44--51
                    ../src/test_parser.nit:28,42
                  ../src/test_parser.nit:28,54--57
                    literal value '"\n"' ... ../src/test_parser.nit:28,54--57
                  ')' ... ../src/test_parser.nit:28,58
            ../src/test_parser.nit:30,4--31,5
              ../src/test_parser.nit:30,4--41
                ../src/test_parser.nit:30,11
                identifier 'printn' ... ../src/test_parser.nit:30,4--9
                ../src/test_parser.nit:30,10--41
                  '(' ... ../src/test_parser.nit:30,10
                  ../src/test_parser.nit:30,11--22
                    ../src/test_parser.nit:30,11--14
                      literal value '"  "' ... ../src/test_parser.nit:30,11--14
                    ../src/test_parser.nit:30,18--22
                      ../src/test_parser.nit:30,18
                      attribute '_rank' ... ../src/test_parser.nit:30,18--22
                  ../src/test_parser.nit:30,25--34
                    ../src/test_parser.nit:30,25
                      ../src/test_parser.nit:30,25
                      identifier 'n' ... ../src/test_parser.nit:30,25
                      ../src/test_parser.nit:30,25
                    identifier 'location' ... ../src/test_parser.nit:30,27--34
                    ../src/test_parser.nit:30,25
                  ../src/test_parser.nit:30,37--40
                    literal value '"\n"' ... ../src/test_parser.nit:30,37--40
                  ')' ... ../src/test_parser.nit:30,41
              keyword 'end' ... ../src/test_parser.nit:31,3--5
          ../src/test_parser.nit:32,3--19
            ../src/test_parser.nit:32,11
            attribute '_rank' ... ../src/test_parser.nit:32,3--7
            '=' ... ../src/test_parser.nit:32,9
            ../src/test_parser.nit:32,11--19
              ../src/test_parser.nit:32,11--15
                ../src/test_parser.nit:32,11
                attribute '_rank' ... ../src/test_parser.nit:32,11--15
              ../src/test_parser.nit:32,19
                literal value '1' ... ../src/test_parser.nit:32,19
          ../src/test_parser.nit:33,3--19
            ../src/test_parser.nit:33,3
              ../src/test_parser.nit:33,3
              identifier 'n' ... ../src/test_parser.nit:33,3
              ../src/test_parser.nit:33,3
            identifier 'visit_all' ... ../src/test_parser.nit:33,5--13
            ../src/test_parser.nit:33,14--19
              '(' ... ../src/test_parser.nit:33,14
              ../src/test_parser.nit:33,15--18
                keyword 'self' ... ../src/test_parser.nit:33,15--18
              ')' ... ../src/test_parser.nit:33,19
          ../src/test_parser.nit:34,3--19
            ../src/test_parser.nit:34,11
            attribute '_rank' ... ../src/test_parser.nit:34,3--7
            '=' ... ../src/test_parser.nit:34,9
            ../src/test_parser.nit:34,11--19
              ../src/test_parser.nit:34,11--15
                ../src/test_parser.nit:34,11
                attribute '_rank' ... ../src/test_parser.nit:34,11--15
              ../src/test_parser.nit:34,19
                literal value '1' ... ../src/test_parser.nit:34,19
          keyword 'end' ... ../src/test_parser.nit:35,2--4
      ../src/test_parser.nit:37,2--40,4
        ../src/test_parser.nit:39,11
        keyword 'init' ... ../src/test_parser.nit:37,2--5
        ../src/test_parser.nit:39,11
        ../src/test_parser.nit:39,3--40,4
          ../src/test_parser.nit:39,3--11
            ../src/test_parser.nit:39,11
            attribute '_rank' ... ../src/test_parser.nit:39,3--7
            '=' ... ../src/test_parser.nit:39,9
            ../src/test_parser.nit:39,11
              literal value '0' ... ../src/test_parser.nit:39,11
          keyword 'end' ... ../src/test_parser.nit:40,2--4
      keyword 'end' ... ../src/test_parser.nit:41,1--3
    ../src/test_parser.nit:43,1--109,3
      ../src/test_parser.nit:43,1--109,3
        ../src/test_parser.nit:43,1--109,3
          ../src/test_parser.nit:43,1--20
            keyword 'var' ... ../src/test_parser.nit:43,1--3
            identifier 'no_print' ... ../src/test_parser.nit:43,5--12
            '=' ... ../src/test_parser.nit:43,14
            ../src/test_parser.nit:43,16--20
              keyword 'false' ... ../src/test_parser.nit:43,16--20
          ../src/test_parser.nit:44,1--22
            keyword 'var' ... ../src/test_parser.nit:44,1--3
            identifier 'only_lexer' ... ../src/test_parser.nit:44,5--14
            '=' ... ../src/test_parser.nit:44,16
            ../src/test_parser.nit:44,18--22
              keyword 'false' ... ../src/test_parser.nit:44,18--22
          ../src/test_parser.nit:45,1--21
            keyword 'var' ... ../src/test_parser.nit:45,1--3
            identifier 'need_help' ... ../src/test_parser.nit:45,5--13
            '=' ... ../src/test_parser.nit:45,15
            ../src/test_parser.nit:45,17--21
              keyword 'false' ... ../src/test_parser.nit:45,17--21
          ../src/test_parser.nit:46,1--19
            keyword 'var' ... ../src/test_parser.nit:46,1--3
            identifier 'no_file' ... ../src/test_parser.nit:46,5--11
            '=' ... ../src/test_parser.nit:46,13
            ../src/test_parser.nit:46,15--19
              keyword 'false' ... ../src/test_parser.nit:46,15--19
          ../src/test_parser.nit:48,1--64,3
            keyword 'while' ... ../src/test_parser.nit:48,1--5
            ../src/test_parser.nit:48,7--51
              ../src/test_parser.nit:48,7--23
                keyword 'not' ... ../src/test_parser.nit:48,7--9
                ../src/test_parser.nit:48,11--23
                  ../src/test_parser.nit:48,11--14
                    ../src/test_parser.nit:48,11
                    identifier 'args' ... ../src/test_parser.nit:48,11--14
                    ../src/test_parser.nit:48,11
                  identifier 'is_empty' ... ../src/test_parser.nit:48,16--23
                  ../src/test_parser.nit:48,11
              ../src/test_parser.nit:48,29--51
                ../src/test_parser.nit:48,29--44
                  ../src/test_parser.nit:48,29--38
                    ../src/test_parser.nit:48,29--32
                      ../src/test_parser.nit:48,29
                      identifier 'args' ... ../src/test_parser.nit:48,29--32
                      ../src/test_parser.nit:48,29
                    identifier 'first' ... ../src/test_parser.nit:48,34--38
                    ../src/test_parser.nit:48,29
                  identifier 'first' ... ../src/test_parser.nit:48,40--44
                  ../src/test_parser.nit:48,29
                ../src/test_parser.nit:48,49--51
                  literal value ''-'' ... ../src/test_parser.nit:48,49--51
            keyword 'do' ... ../src/test_parser.nit:48,53--54
            ../src/test_parser.nit:49,2--64,3
              ../src/test_parser.nit:49,2--62,4
                keyword 'if' ... ../src/test_parser.nit:49,2--3
                ../src/test_parser.nit:49,5--22
                  ../src/test_parser.nit:49,5--14
                    ../src/test_parser.nit:49,5--8
                      ../src/test_parser.nit:49,5
                      identifier 'args' ... ../src/test_parser.nit:49,5--8
                      ../src/test_parser.nit:49,5
                    identifier 'first' ... ../src/test_parser.nit:49,10--14
                    ../src/test_parser.nit:49,5
                  ../src/test_parser.nit:49,19--22
                    literal value '"-n"' ... ../src/test_parser.nit:49,19--22
                ../src/test_parser.nit:50,3--17
                  ../src/test_parser.nit:50,3--17
                    ../src/test_parser.nit:50,14
                    identifier 'no_print' ... ../src/test_parser.nit:50,3--10
                    ../src/test_parser.nit:50,14
                    '=' ... ../src/test_parser.nit:50,12
                    ../src/test_parser.nit:50,14--17
                      keyword 'true' ... ../src/test_parser.nit:50,14--17
                ../src/test_parser.nit:51,7--62,4
                  keyword 'if' ... ../src/test_parser.nit:51,7--8
                  ../src/test_parser.nit:51,10--27
                    ../src/test_parser.nit:51,10--19
                      ../src/test_parser.nit:51,10--13
                        ../src/test_parser.nit:51,10
                        identifier 'args' ... ../src/test_parser.nit:51,10--13
                        ../src/test_parser.nit:51,10
                      identifier 'first' ... ../src/test_parser.nit:51,15--19
                      ../src/test_parser.nit:51,10
                    ../src/test_parser.nit:51,24--27
                      literal value '"-l"' ... ../src/test_parser.nit:51,24--27
                  ../src/test_parser.nit:52,3--19
                    ../src/test_parser.nit:52,3--19
                      ../src/test_parser.nit:52,16
                      identifier 'only_lexer' ... ../src/test_parser.nit:52,3--12
                      ../src/test_parser.nit:52,16
                      '=' ... ../src/test_parser.nit:52,14
                      ../src/test_parser.nit:52,16--19
                        keyword 'true' ... ../src/test_parser.nit:52,16--19
                  ../src/test_parser.nit:53,7--62,4
                    keyword 'if' ... ../src/test_parser.nit:53,7--8
                    ../src/test_parser.nit:53,10--27
                      ../src/test_parser.nit:53,10--19
                        ../src/test_parser.nit:53,10--13
                          ../src/test_parser.nit:53,10
                          identifier 'args' ... ../src/test_parser.nit:53,10--13
                          ../src/test_parser.nit:53,10
                        identifier 'first' ... ../src/test_parser.nit:53,15--19
                        ../src/test_parser.nit:53,10
                      ../src/test_parser.nit:53,24--27
                        literal value '"-p"' ... ../src/test_parser.nit:53,24--27
                    ../src/test_parser.nit:54,3--20
                      ../src/test_parser.nit:54,3--20
                        ../src/test_parser.nit:54,16
                        identifier 'only_lexer' ... ../src/test_parser.nit:54,3--12
                        ../src/test_parser.nit:54,16
                        '=' ... ../src/test_parser.nit:54,14
                        ../src/test_parser.nit:54,16--20
                          keyword 'false' ... ../src/test_parser.nit:54,16--20
                    ../src/test_parser.nit:55,7--62,4
                      keyword 'if' ... ../src/test_parser.nit:55,7--8
                      ../src/test_parser.nit:55,10--27
                        ../src/test_parser.nit:55,10--19
                          ../src/test_parser.nit:55,10--13
                            ../src/test_parser.nit:55,10
                            identifier 'args' ... ../src/test_parser.nit:55,10--13
                            ../src/test_parser.nit:55,10
                          identifier 'first' ... ../src/test_parser.nit:55,15--19
                          ../src/test_parser.nit:55,10
                        ../src/test_parser.nit:55,24--27
                          literal value '"-e"' ... ../src/test_parser.nit:55,24--27
                      ../src/test_parser.nit:56,3--16
                        ../src/test_parser.nit:56,3--16
                          ../src/test_parser.nit:56,13
                          identifier 'no_file' ... ../src/test_parser.nit:56,3--9
                          ../src/test_parser.nit:56,13
                          '=' ... ../src/test_parser.nit:56,11
                          ../src/test_parser.nit:56,13--16
                            keyword 'true' ... ../src/test_parser.nit:56,13--16
                      ../src/test_parser.nit:57,7--62,4
                        keyword 'if' ... ../src/test_parser.nit:57,7--8
                        ../src/test_parser.nit:57,10--49
                          ../src/test_parser.nit:57,10--27
                            ../src/test_parser.nit:57,10--19
                              ../src/test_parser.nit:57,10--13
                                ../src/test_parser.nit:57,10
                                identifier 'args' ... ../src/test_parser.nit:57,10--13
                                ../src/test_parser.nit:57,10
                              identifier 'first' ... ../src/test_parser.nit:57,15--19
                              ../src/test_parser.nit:57,10
                            ../src/test_parser.nit:57,24--27
                              literal value '"-h"' ... ../src/test_parser.nit:57,24--27
                          ../src/test_parser.nit:57,32--49
                            ../src/test_parser.nit:57,32--41
                              ../src/test_parser.nit:57,32--35
                                ../src/test_parser.nit:57,32
                                identifier 'args' ... ../src/test_parser.nit:57,32--35
                                ../src/test_parser.nit:57,32
                              identifier 'first' ... ../src/test_parser.nit:57,37--41
                              ../src/test_parser.nit:57,32
                            ../src/test_parser.nit:57,46--49
                              literal value '"-?"' ... ../src/test_parser.nit:57,46--49
                        ../src/test_parser.nit:58,3--18
                          ../src/test_parser.nit:58,3--18
                            ../src/test_parser.nit:58,15
                            identifier 'need_help' ... ../src/test_parser.nit:58,3--11
                            ../src/test_parser.nit:58,15
                            '=' ... ../src/test_parser.nit:58,13
                            ../src/test_parser.nit:58,15--18
                              keyword 'true' ... ../src/test_parser.nit:58,15--18
                        ../src/test_parser.nit:60,3--62,4
                          ../src/test_parser.nit:60,3--48
                            ../src/test_parser.nit:60,3--8
                              ../src/test_parser.nit:60,3
                              identifier 'stderr' ... ../src/test_parser.nit:60,3--8
                              ../src/test_parser.nit:60,3
                            identifier 'write' ... ../src/test_parser.nit:60,10--14
                            ../src/test_parser.nit:60,15--48
                              '(' ... ../src/test_parser.nit:60,15
                              ../src/test_parser.nit:60,16--47
                                ../src/test_parser.nit:60,16--32
                                  literal value '"Unknown option {' ... ../src/test_parser.nit:60,16--32
                                ../src/test_parser.nit:60,33--42
                                  ../src/test_parser.nit:60,33--36
                                    ../src/test_parser.nit:60,33
                                    identifier 'args' ... ../src/test_parser.nit:60,33--36
                                    ../src/test_parser.nit:60,33
                                  identifier 'first' ... ../src/test_parser.nit:60,38--42
                                  ../src/test_parser.nit:60,33
                                ../src/test_parser.nit:60,43--47
                                  '}.\n"' ... ../src/test_parser.nit:60,43--47
                              ')' ... ../src/test_parser.nit:60,48
                          ../src/test_parser.nit:61,3--9
                            ../src/test_parser.nit:61,8
                            identifier 'exit' ... ../src/test_parser.nit:61,3--6
                            ../src/test_parser.nit:61,7--9
                              '(' ... ../src/test_parser.nit:61,7
                              ../src/test_parser.nit:61,8
                                literal value '0' ... ../src/test_parser.nit:61,8
                              ')' ... ../src/test_parser.nit:61,9
                          keyword 'end' ... ../src/test_parser.nit:62,2--4
              ../src/test_parser.nit:63,2--11
                ../src/test_parser.nit:63,2--5
                  ../src/test_parser.nit:63,2
                  identifier 'args' ... ../src/test_parser.nit:63,2--5
                  ../src/test_parser.nit:63,2
                identifier 'shift' ... ../src/test_parser.nit:63,7--11
                ../src/test_parser.nit:63,2
              keyword 'end' ... ../src/test_parser.nit:64,1--3
          ../src/test_parser.nit:66,1--109,3
            keyword 'if' ... ../src/test_parser.nit:66,1--2
            ../src/test_parser.nit:66,4--29
              ../src/test_parser.nit:66,4--16
                ../src/test_parser.nit:66,4--7
                  ../src/test_parser.nit:66,4
                  identifier 'args' ... ../src/test_parser.nit:66,4--7
                  ../src/test_parser.nit:66,4
                identifier 'is_empty' ... ../src/test_parser.nit:66,9--16
                ../src/test_parser.nit:66,4
              ../src/test_parser.nit:66,21--29
                ../src/test_parser.nit:66,21
                identifier 'need_help' ... ../src/test_parser.nit:66,21--29
                ../src/test_parser.nit:66,21
            ../src/test_parser.nit:67,2--74,30
              ../src/test_parser.nit:67,2--16
                ../src/test_parser.nit:67,8
                identifier 'print' ... ../src/test_parser.nit:67,2--6
                ../src/test_parser.nit:67,7--16
                  '(' ... ../src/test_parser.nit:67,7
                  ../src/test_parser.nit:67,8--15
                    literal value '"usage:"' ... ../src/test_parser.nit:67,8--15
                  ')' ... ../src/test_parser.nit:67,16
              ../src/test_parser.nit:68,2--54
                ../src/test_parser.nit:68,8
                identifier 'print' ... ../src/test_parser.nit:68,2--6
                ../src/test_parser.nit:68,7--54
                  '(' ... ../src/test_parser.nit:68,7
                  ../src/test_parser.nit:68,8--53
                    literal value '"  test_parser [options]... <filename.nit>..."' ... ../src/test_parser.nit:68,8--53
                  ')' ... ../src/test_parser.nit:68,54
              ../src/test_parser.nit:69,2--18
                ../src/test_parser.nit:69,8
                identifier 'print' ... ../src/test_parser.nit:69,2--6
                ../src/test_parser.nit:69,7--18
                  '(' ... ../src/test_parser.nit:69,7
                  ../src/test_parser.nit:69,8--17
                    literal value '"options:"' ... ../src/test_parser.nit:69,8--17
                  ')' ... ../src/test_parser.nit:69,18
              ../src/test_parser.nit:70,2--36
                ../src/test_parser.nit:70,8
                identifier 'print' ... ../src/test_parser.nit:70,2--6
                ../src/test_parser.nit:70,7--36
                  '(' ... ../src/test_parser.nit:70,7
                  ../src/test_parser.nit:70,8--35
                    literal value '"  -n	do not print anything"' ... ../src/test_parser.nit:70,8--35
                  ')' ... ../src/test_parser.nit:70,36
              ../src/test_parser.nit:71,2--25
                ../src/test_parser.nit:71,8
                identifier 'print' ... ../src/test_parser.nit:71,2--6
                ../src/test_parser.nit:71,7--25
                  '(' ... ../src/test_parser.nit:71,7
                  ../src/test_parser.nit:71,8--24
                    literal value '"  -l	only lexer"' ... ../src/test_parser.nit:71,8--24
                  ')' ... ../src/test_parser.nit:71,25
              ../src/test_parser.nit:72,2--41
                ../src/test_parser.nit:72,8
                identifier 'print' ... ../src/test_parser.nit:72,2--6
                ../src/test_parser.nit:72,7--41
                  '(' ... ../src/test_parser.nit:72,7
                  ../src/test_parser.nit:72,8--40
                    literal value '"  -p	lexer and parser (default)"' ... ../src/test_parser.nit:72,8--40
                  ')' ... ../src/test_parser.nit:72,41
              ../src/test_parser.nit:73,2--68
                ../src/test_parser.nit:73,8
                identifier 'print' ... ../src/test_parser.nit:73,2--6
                ../src/test_parser.nit:73,7--68
                  '(' ... ../src/test_parser.nit:73,7
                  ../src/test_parser.nit:73,8--67
                    literal value '"  -e	instead on files, each argument is a content to parse"' ... ../src/test_parser.nit:73,8--67
                  ')' ... ../src/test_parser.nit:73,68
              ../src/test_parser.nit:74,2--30
                ../src/test_parser.nit:74,8
                identifier 'print' ... ../src/test_parser.nit:74,2--6
                ../src/test_parser.nit:74,7--30
                  '(' ... ../src/test_parser.nit:74,7
                  ../src/test_parser.nit:74,8--29
                    literal value '"  -h	print this help"' ... ../src/test_parser.nit:74,8--29
                  ')' ... ../src/test_parser.nit:74,30
            ../src/test_parser.nit:76,2--109,3
              ../src/test_parser.nit:76,2--108,4
                keyword 'for' ... ../src/test_parser.nit:76,2--4
                identifier 'a' ... ../src/test_parser.nit:76,6
                ../src/test_parser.nit:76,11--14
                  ../src/test_parser.nit:76,11
                  identifier 'args' ... ../src/test_parser.nit:76,11--14
                  ../src/test_parser.nit:76,11
                keyword 'do' ... ../src/test_parser.nit:76,16--17
                ../src/test_parser.nit:77,3--108,4
                  ../src/test_parser.nit:77,3--12
                    keyword 'var' ... ../src/test_parser.nit:77,3--5
                    identifier 'source' ... ../src/test_parser.nit:77,7--12
                  ../src/test_parser.nit:78,3--84,5
                    keyword 'if' ... ../src/test_parser.nit:78,3--4
                    ../src/test_parser.nit:78,6--12
                      ../src/test_parser.nit:78,6
                      identifier 'no_file' ... ../src/test_parser.nit:78,6--12
                      ../src/test_parser.nit:78,6
                    ../src/test_parser.nit:79,4--45
                      ../src/test_parser.nit:79,4--45
                        ../src/test_parser.nit:79,17
                        identifier 'source' ... ../src/test_parser.nit:79,4--9
                        ../src/test_parser.nit:79,17
                        '=' ... ../src/test_parser.nit:79,11
                        ../src/test_parser.nit:79,13--45
                          keyword 'new' ... ../src/test_parser.nit:79,13--15
                          ../src/test_parser.nit:79,17--26
                            type identifier 'SourceFile' ... ../src/test_parser.nit:79,17--26
                          identifier 'from_string' ... ../src/test_parser.nit:79,28--38
                          ../src/test_parser.nit:79,39--45
                            '(' ... ../src/test_parser.nit:79,39
                            ../src/test_parser.nit:79,40--41
                              literal value '""' ... ../src/test_parser.nit:79,40--41
                            ../src/test_parser.nit:79,44
                              ../src/test_parser.nit:79,44
                              identifier 'a' ... ../src/test_parser.nit:79,44
                              ../src/test_parser.nit:79,44
                            ')' ... ../src/test_parser.nit:79,45
                    ../src/test_parser.nit:81,4--84,5
                      ../src/test_parser.nit:81,4--31
                        keyword 'var' ... ../src/test_parser.nit:81,4--6
                        identifier 'f' ... ../src/test_parser.nit:81,8
                        '=' ... ../src/test_parser.nit:81,10
                        ../src/test_parser.nit:81,12--31
                          keyword 'new' ... ../src/test_parser.nit:81,12--14
                          ../src/test_parser.nit:81,16--23
                            type identifier 'IFStream' ... ../src/test_parser.nit:81,16--23
                          identifier 'open' ... ../src/test_parser.nit:81,25--28
                          ../src/test_parser.nit:81,29--31
                            '(' ... ../src/test_parser.nit:81,29
                            ../src/test_parser.nit:81,30
                              ../src/test_parser.nit:81,30
                              identifier 'a' ... ../src/test_parser.nit:81,30
                              ../src/test_parser.nit:81,30
                            ')' ... ../src/test_parser.nit:81,31
                      ../src/test_parser.nit:82,4--32
                        ../src/test_parser.nit:82,17
                        identifier 'source' ... ../src/test_parser.nit:82,4--9
                        ../src/test_parser.nit:82,17
                        '=' ... ../src/test_parser.nit:82,11
                        ../src/test_parser.nit:82,13--32
                          keyword 'new' ... ../src/test_parser.nit:82,13--15
                          ../src/test_parser.nit:82,17--26
                            type identifier 'SourceFile' ... ../src/test_parser.nit:82,17--26
                          ../src/test_parser.nit:82,27--32
                            '(' ... ../src/test_parser.nit:82,27
                            ../src/test_parser.nit:82,28
                              ../src/test_parser.nit:82,28
                              identifier 'a' ... ../src/test_parser.nit:82,28
                              ../src/test_parser.nit:82,28
                            ../src/test_parser.nit:82,31
                              ../src/test_parser.nit:82,31
                              identifier 'f' ... ../src/test_parser.nit:82,31
                              ../src/test_parser.nit:82,31
                            ')' ... ../src/test_parser.nit:82,32
                      ../src/test_parser.nit:83,4--10
                        ../src/test_parser.nit:83,4
                          ../src/test_parser.nit:83,4
                          identifier 'f' ... ../src/test_parser.nit:83,4
                          ../src/test_parser.nit:83,4
                        identifier 'close' ... ../src/test_parser.nit:83,6--10
                        ../src/test_parser.nit:83,4
                      keyword 'end' ... ../src/test_parser.nit:84,3--5
                  ../src/test_parser.nit:85,3--31
                    keyword 'var' ... ../src/test_parser.nit:85,3--5
                    identifier 'lexer' ... ../src/test_parser.nit:85,7--11
                    '=' ... ../src/test_parser.nit:85,13
                    ../src/test_parser.nit:85,15--31
                      keyword 'new' ... ../src/test_parser.nit:85,15--17
                      ../src/test_parser.nit:85,19--23
                        type identifier 'Lexer' ... ../src/test_parser.nit:85,19--23
                      ../src/test_parser.nit:85,24--31
                        '(' ... ../src/test_parser.nit:85,24
                        ../src/test_parser.nit:85,25--30
                          ../src/test_parser.nit:85,25
                          identifier 'source' ... ../src/test_parser.nit:85,25--30
                          ../src/test_parser.nit:85,25
                        ')' ... ../src/test_parser.nit:85,31
                  ../src/test_parser.nit:86,3--107,5
                    keyword 'if' ... ../src/test_parser.nit:86,3--4
                    ../src/test_parser.nit:86,6--15
                      ../src/test_parser.nit:86,6
                      identifier 'only_lexer' ... ../src/test_parser.nit:86,6--15
                      ../src/test_parser.nit:86,6
                    ../src/test_parser.nit:87,4--93,6
                      ../src/test_parser.nit:87,4--25
                        keyword 'var' ... ../src/test_parser.nit:87,4--6
                        identifier 'token' ... ../src/test_parser.nit:87,8--12
                        '=' ... ../src/test_parser.nit:87,14
                        ../src/test_parser.nit:87,16--25
                          ../src/test_parser.nit:87,16--20
                            ../src/test_parser.nit:87,16
                            identifier 'lexer' ... ../src/test_parser.nit:87,16--20
                            ../src/test_parser.nit:87,16
                          identifier 'next' ... ../src/test_parser.nit:87,22--25
                          ../src/test_parser.nit:87,16
                      ../src/test_parser.nit:88,4--93,6
                        keyword 'while' ... ../src/test_parser.nit:88,4--8
                        ../src/test_parser.nit:88,10--26
                          keyword 'not' ... ../src/test_parser.nit:88,10--12
                          ../src/test_parser.nit:88,14--26
                            ../src/test_parser.nit:88,14--18
                              ../src/test_parser.nit:88,14
                              identifier 'token' ... ../src/test_parser.nit:88,14--18
                              ../src/test_parser.nit:88,14
                            ../src/test_parser.nit:88,24--26
                              type identifier 'EOF' ... ../src/test_parser.nit:88,24--26
                        keyword 'do' ... ../src/test_parser.nit:88,28--29
                        ../src/test_parser.nit:89,5--93,6
                          ../src/test_parser.nit:89,5--91,7
                            keyword 'if' ... ../src/test_parser.nit:89,5--6
                            ../src/test_parser.nit:89,8--19
                              keyword 'not' ... ../src/test_parser.nit:89,8--10
                              ../src/test_parser.nit:89,12--19
                                ../src/test_parser.nit:89,12
                                identifier 'no_print' ... ../src/test_parser.nit:89,12--19
                                ../src/test_parser.nit:89,12
                            ../src/test_parser.nit:90,6--64
                              ../src/test_parser.nit:90,6--64
                                ../src/test_parser.nit:90,12
                                identifier 'print' ... ../src/test_parser.nit:90,6--10
                                ../src/test_parser.nit:90,11--64
                                  '(' ... ../src/test_parser.nit:90,11
                                  ../src/test_parser.nit:90,12--63
                                    ../src/test_parser.nit:90,12--27
                                      literal value '"Read token at {' ... ../src/test_parser.nit:90,12--27
                                    ../src/test_parser.nit:90,28--41
                                      ../src/test_parser.nit:90,28--32
                                        ../src/test_parser.nit:90,28
                                        identifier 'token' ... ../src/test_parser.nit:90,28--32
                                        ../src/test_parser.nit:90,28
                                      identifier 'location' ... ../src/test_parser.nit:90,34--41
                                      ../src/test_parser.nit:90,28
                                    ../src/test_parser.nit:90,42--50
                                      literal value '} text='{' ... ../src/test_parser.nit:90,42--50
                                    ../src/test_parser.nit:90,51--60
                                      ../src/test_parser.nit:90,51--55
                                        ../src/test_parser.nit:90,51
                                        identifier 'token' ... ../src/test_parser.nit:90,51--55
                                        ../src/test_parser.nit:90,51
                                      identifier 'text' ... ../src/test_parser.nit:90,57--60
                                      ../src/test_parser.nit:90,51
                                    ../src/test_parser.nit:90,61--63
                                      '}'"' ... ../src/test_parser.nit:90,61--63
                                  ')' ... ../src/test_parser.nit:90,64
                            ../src/test_parser.nit:91,5--7
                              keyword 'end' ... ../src/test_parser.nit:91,5--7
                          ../src/test_parser.nit:92,5--22
                            ../src/test_parser.nit:92,13
                            identifier 'token' ... ../src/test_parser.nit:92,5--9
                            ../src/test_parser.nit:92,13
                            '=' ... ../src/test_parser.nit:92,11
                            ../src/test_parser.nit:92,13--22
                              ../src/test_parser.nit:92,13--17
                                ../src/test_parser.nit:92,13
                                identifier 'lexer' ... ../src/test_parser.nit:92,13--17
                                ../src/test_parser.nit:92,13
                              identifier 'next' ... ../src/test_parser.nit:92,19--22
                              ../src/test_parser.nit:92,13
                          keyword 'end' ... ../src/test_parser.nit:93,4--6
                    ../src/test_parser.nit:95,4--107,5
                      ../src/test_parser.nit:95,4--33
                        keyword 'var' ... ../src/test_parser.nit:95,4--6
                        identifier 'parser' ... ../src/test_parser.nit:95,8--13
                        '=' ... ../src/test_parser.nit:95,15
                        ../src/test_parser.nit:95,17--33
                          keyword 'new' ... ../src/test_parser.nit:95,17--19
                          ../src/test_parser.nit:95,21--26
                            type identifier 'Parser' ... ../src/test_parser.nit:95,21--26
                          ../src/test_parser.nit:95,27--33
                            '(' ... ../src/test_parser.nit:95,27
                            ../src/test_parser.nit:95,28--32
                              ../src/test_parser.nit:95,28
                              identifier 'lexer' ... ../src/test_parser.nit:95,28--32
                              ../src/test_parser.nit:95,28
                            ')' ... ../src/test_parser.nit:95,33
                      ../src/test_parser.nit:96,4--26
                        keyword 'var' ... ../src/test_parser.nit:96,4--6
                        identifier 'tree' ... ../src/test_parser.nit:96,8--11
                        '=' ... ../src/test_parser.nit:96,13
                        ../src/test_parser.nit:96,15--26
                          ../src/test_parser.nit:96,15--20
                            ../src/test_parser.nit:96,15
                            identifier 'parser' ... ../src/test_parser.nit:96,15--20
                            ../src/test_parser.nit:96,15
                          identifier 'parse' ... ../src/test_parser.nit:96,22--26
                          ../src/test_parser.nit:96,15
                      ../src/test_parser.nit:98,4--25
                        keyword 'var' ... ../src/test_parser.nit:98,4--6
                        identifier 'error' ... ../src/test_parser.nit:98,8--12
                        '=' ... ../src/test_parser.nit:98,14
                        ../src/test_parser.nit:98,16--25
                          ../src/test_parser.nit:98,16--19
                            ../src/test_parser.nit:98,16
                            identifier 'tree' ... ../src/test_parser.nit:98,16--19
                            ../src/test_parser.nit:98,16
                          identifier 'n_eof' ... ../src/test_parser.nit:98,21--25
                          ../src/test_parser.nit:98,16
                      ../src/test_parser.nit:99,4--102,6
                        keyword 'if' ... ../src/test_parser.nit:99,4--5
                        ../src/test_parser.nit:99,7--22
                          ../src/test_parser.nit:99,7--11
                            ../src/test_parser.nit:99,7
                            identifier 'error' ... ../src/test_parser.nit:99,7--11
                            ../src/test_parser.nit:99,7
                          ../src/test_parser.nit:99,17--22
                            type identifier 'AError' ... ../src/test_parser.nit:99,17--22
                        ../src/test_parser.nit:100,5--101,10
                          ../src/test_parser.nit:100,5--58
                            ../src/test_parser.nit:100,11
                            identifier 'print' ... ../src/test_parser.nit:100,5--9
                            ../src/test_parser.nit:100,10--58
                              '(' ... ../src/test_parser.nit:100,10
                              ../src/test_parser.nit:100,11--57
                                ../src/test_parser.nit:100,11--21
                                  literal value '"Error at {' ... ../src/test_parser.nit:100,11--21
                                ../src/test_parser.nit:100,22--35
                                  ../src/test_parser.nit:100,22--26
                                    ../src/test_parser.nit:100,22
                                    identifier 'error' ... ../src/test_parser.nit:100,22--26
                                    ../src/test_parser.nit:100,22
                                  identifier 'location' ... ../src/test_parser.nit:100,28--35
                                  ../src/test_parser.nit:100,22
                                ../src/test_parser.nit:100,36--42
                                  literal value '}:\n\t{' ... ../src/test_parser.nit:100,36--42
                                ../src/test_parser.nit:100,43--55
                                  ../src/test_parser.nit:100,43--47
                                    ../src/test_parser.nit:100,43
                                    identifier 'error' ... ../src/test_parser.nit:100,43--47
                                    ../src/test_parser.nit:100,43
                                  identifier 'message' ... ../src/test_parser.nit:100,49--55
                                  ../src/test_parser.nit:100,43
                                ../src/test_parser.nit:100,56--57
                                  '}"' ... ../src/test_parser.nit:100,56--57
                              ')' ... ../src/test_parser.nit:100,58
                          ../src/test_parser.nit:101,5--10
                            keyword 'return' ... ../src/test_parser.nit:101,5--10
                        ../src/test_parser.nit:102,4--6
                          keyword 'end' ... ../src/test_parser.nit:102,4--6
                      ../src/test_parser.nit:104,4--106,6
                        keyword 'if' ... ../src/test_parser.nit:104,4--5
                        ../src/test_parser.nit:104,7--18
                          keyword 'not' ... ../src/test_parser.nit:104,7--9
                          ../src/test_parser.nit:104,11--18
                            ../src/test_parser.nit:104,11
                            identifier 'no_print' ... ../src/test_parser.nit:104,11--18
                            ../src/test_parser.nit:104,11
                        ../src/test_parser.nit:105,5--44
                          ../src/test_parser.nit:105,5--44
                            ../src/test_parser.nit:105,5--26
                              '(' ... ../src/test_parser.nit:105,5
                              ../src/test_parser.nit:105,6--25
                                keyword 'new' ... ../src/test_parser.nit:105,6--8
                                ../src/test_parser.nit:105,10--25
                                  type identifier 'PrintTreeVisitor' ... ../src/test_parser.nit:105,10--25
                                ../src/test_parser.nit:105,6
                              ')' ... ../src/test_parser.nit:105,26
                            identifier 'enter_visit' ... ../src/test_parser.nit:105,28--38
                            ../src/test_parser.nit:105,39--44
                              '(' ... ../src/test_parser.nit:105,39
                              ../src/test_parser.nit:105,40--43
                                ../src/test_parser.nit:105,40
                                identifier 'tree' ... ../src/test_parser.nit:105,40--43
                                ../src/test_parser.nit:105,40
                              ')' ... ../src/test_parser.nit:105,44
                        ../src/test_parser.nit:106,4--6
                          keyword 'end' ... ../src/test_parser.nit:106,4--6
                      keyword 'end' ... ../src/test_parser.nit:107,3--5
                  keyword 'end' ... ../src/test_parser.nit:108,2--4
              keyword 'end' ... ../src/test_parser.nit:109,1--3
  end of file ... ../src/test_parser.nit:110,1
