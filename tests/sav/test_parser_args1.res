../src/test_parser.nit:17,1--111,1
  ../src/test_parser.nit:17,1--110,3
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
    ../src/test_parser.nit:22,1--42,3
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
      ../src/test_parser.nit:25,2--36,4
        keyword 'redef' ... ../src/test_parser.nit:25,2--6
        ../src/test_parser.nit:25,12
        keyword 'fun' ... ../src/test_parser.nit:25,8--10
        ../src/test_parser.nit:25,12--16
          identifier 'visit' ... ../src/test_parser.nit:25,12--16
        ../src/test_parser.nit:25,17--35
          '(' ... ../src/test_parser.nit:25,17
          ../src/test_parser.nit:25,18--34
            identifier 'n' ... ../src/test_parser.nit:25,18
            ../src/test_parser.nit:25,21--34
              keyword 'nullable' ... ../src/test_parser.nit:25,21--28
              type identifier 'ANode' ... ../src/test_parser.nit:25,30--34
          ')' ... ../src/test_parser.nit:25,35
        ../src/test_parser.nit:27,3--36,4
          ../src/test_parser.nit:27,3--26
            keyword 'if' ... ../src/test_parser.nit:27,3--4
            ../src/test_parser.nit:27,6--14
              ../src/test_parser.nit:27,6
                ../src/test_parser.nit:27,6
                identifier 'n' ... ../src/test_parser.nit:27,6
                ../src/test_parser.nit:27,6
              ../src/test_parser.nit:27,11--14
                keyword 'null' ... ../src/test_parser.nit:27,11--14
            ../src/test_parser.nit:27,21--26
              keyword 'return' ... ../src/test_parser.nit:27,21--26
          ../src/test_parser.nit:28,3--32,5
            keyword 'if' ... ../src/test_parser.nit:28,3--4
            ../src/test_parser.nit:28,6--16
              ../src/test_parser.nit:28,6
                ../src/test_parser.nit:28,6
                identifier 'n' ... ../src/test_parser.nit:28,6
                ../src/test_parser.nit:28,6
              ../src/test_parser.nit:28,12--16
                type identifier 'Token' ... ../src/test_parser.nit:28,12--16
            ../src/test_parser.nit:29,4--58
              ../src/test_parser.nit:29,4--58
                ../src/test_parser.nit:29,11
                identifier 'printn' ... ../src/test_parser.nit:29,4--9
                ../src/test_parser.nit:29,10--58
                  '(' ... ../src/test_parser.nit:29,10
                  ../src/test_parser.nit:29,11--22
                    ../src/test_parser.nit:29,11--14
                      literal value '"  "' ... ../src/test_parser.nit:29,11--14
                    ../src/test_parser.nit:29,18--22
                      ../src/test_parser.nit:29,18
                      attribute '_rank' ... ../src/test_parser.nit:29,18--22
                  ../src/test_parser.nit:29,25--30
                    ../src/test_parser.nit:29,25
                      ../src/test_parser.nit:29,25
                      identifier 'n' ... ../src/test_parser.nit:29,25
                      ../src/test_parser.nit:29,25
                    identifier 'to_s' ... ../src/test_parser.nit:29,27--30
                    ../src/test_parser.nit:29,25
                  ../src/test_parser.nit:29,33--39
                    literal value '" ... "' ... ../src/test_parser.nit:29,33--39
                  ../src/test_parser.nit:29,42--51
                    ../src/test_parser.nit:29,42
                      ../src/test_parser.nit:29,42
                      identifier 'n' ... ../src/test_parser.nit:29,42
                      ../src/test_parser.nit:29,42
                    identifier 'location' ... ../src/test_parser.nit:29,44--51
                    ../src/test_parser.nit:29,42
                  ../src/test_parser.nit:29,54--57
                    literal value '"\n"' ... ../src/test_parser.nit:29,54--57
                  ')' ... ../src/test_parser.nit:29,58
            ../src/test_parser.nit:31,4--32,5
              ../src/test_parser.nit:31,4--41
                ../src/test_parser.nit:31,11
                identifier 'printn' ... ../src/test_parser.nit:31,4--9
                ../src/test_parser.nit:31,10--41
                  '(' ... ../src/test_parser.nit:31,10
                  ../src/test_parser.nit:31,11--22
                    ../src/test_parser.nit:31,11--14
                      literal value '"  "' ... ../src/test_parser.nit:31,11--14
                    ../src/test_parser.nit:31,18--22
                      ../src/test_parser.nit:31,18
                      attribute '_rank' ... ../src/test_parser.nit:31,18--22
                  ../src/test_parser.nit:31,25--34
                    ../src/test_parser.nit:31,25
                      ../src/test_parser.nit:31,25
                      identifier 'n' ... ../src/test_parser.nit:31,25
                      ../src/test_parser.nit:31,25
                    identifier 'location' ... ../src/test_parser.nit:31,27--34
                    ../src/test_parser.nit:31,25
                  ../src/test_parser.nit:31,37--40
                    literal value '"\n"' ... ../src/test_parser.nit:31,37--40
                  ')' ... ../src/test_parser.nit:31,41
              keyword 'end' ... ../src/test_parser.nit:32,3--5
          ../src/test_parser.nit:33,3--19
            ../src/test_parser.nit:33,11
            attribute '_rank' ... ../src/test_parser.nit:33,3--7
            '=' ... ../src/test_parser.nit:33,9
            ../src/test_parser.nit:33,11--19
              ../src/test_parser.nit:33,11--15
                ../src/test_parser.nit:33,11
                attribute '_rank' ... ../src/test_parser.nit:33,11--15
              ../src/test_parser.nit:33,19
                literal value '1' ... ../src/test_parser.nit:33,19
          ../src/test_parser.nit:34,3--19
            ../src/test_parser.nit:34,3
              ../src/test_parser.nit:34,3
              identifier 'n' ... ../src/test_parser.nit:34,3
              ../src/test_parser.nit:34,3
            identifier 'visit_all' ... ../src/test_parser.nit:34,5--13
            ../src/test_parser.nit:34,14--19
              '(' ... ../src/test_parser.nit:34,14
              ../src/test_parser.nit:34,15--18
                keyword 'self' ... ../src/test_parser.nit:34,15--18
              ')' ... ../src/test_parser.nit:34,19
          ../src/test_parser.nit:35,3--19
            ../src/test_parser.nit:35,11
            attribute '_rank' ... ../src/test_parser.nit:35,3--7
            '=' ... ../src/test_parser.nit:35,9
            ../src/test_parser.nit:35,11--19
              ../src/test_parser.nit:35,11--15
                ../src/test_parser.nit:35,11
                attribute '_rank' ... ../src/test_parser.nit:35,11--15
              ../src/test_parser.nit:35,19
                literal value '1' ... ../src/test_parser.nit:35,19
          keyword 'end' ... ../src/test_parser.nit:36,2--4
      ../src/test_parser.nit:38,2--41,4
        ../src/test_parser.nit:40,11
        keyword 'init' ... ../src/test_parser.nit:38,2--5
        ../src/test_parser.nit:40,11
        ../src/test_parser.nit:40,3--41,4
          ../src/test_parser.nit:40,3--11
            ../src/test_parser.nit:40,11
            attribute '_rank' ... ../src/test_parser.nit:40,3--7
            '=' ... ../src/test_parser.nit:40,9
            ../src/test_parser.nit:40,11
              literal value '0' ... ../src/test_parser.nit:40,11
          keyword 'end' ... ../src/test_parser.nit:41,2--4
      keyword 'end' ... ../src/test_parser.nit:42,1--3
    ../src/test_parser.nit:44,1--110,3
      ../src/test_parser.nit:44,1--110,3
        ../src/test_parser.nit:44,1--110,3
          ../src/test_parser.nit:44,1--20
            keyword 'var' ... ../src/test_parser.nit:44,1--3
            identifier 'no_print' ... ../src/test_parser.nit:44,5--12
            '=' ... ../src/test_parser.nit:44,14
            ../src/test_parser.nit:44,16--20
              keyword 'false' ... ../src/test_parser.nit:44,16--20
          ../src/test_parser.nit:45,1--22
            keyword 'var' ... ../src/test_parser.nit:45,1--3
            identifier 'only_lexer' ... ../src/test_parser.nit:45,5--14
            '=' ... ../src/test_parser.nit:45,16
            ../src/test_parser.nit:45,18--22
              keyword 'false' ... ../src/test_parser.nit:45,18--22
          ../src/test_parser.nit:46,1--21
            keyword 'var' ... ../src/test_parser.nit:46,1--3
            identifier 'need_help' ... ../src/test_parser.nit:46,5--13
            '=' ... ../src/test_parser.nit:46,15
            ../src/test_parser.nit:46,17--21
              keyword 'false' ... ../src/test_parser.nit:46,17--21
          ../src/test_parser.nit:47,1--19
            keyword 'var' ... ../src/test_parser.nit:47,1--3
            identifier 'no_file' ... ../src/test_parser.nit:47,5--11
            '=' ... ../src/test_parser.nit:47,13
            ../src/test_parser.nit:47,15--19
              keyword 'false' ... ../src/test_parser.nit:47,15--19
          ../src/test_parser.nit:49,1--65,3
            keyword 'while' ... ../src/test_parser.nit:49,1--5
            ../src/test_parser.nit:49,7--51
              ../src/test_parser.nit:49,7--23
                keyword 'not' ... ../src/test_parser.nit:49,7--9
                ../src/test_parser.nit:49,11--23
                  ../src/test_parser.nit:49,11--14
                    ../src/test_parser.nit:49,11
                    identifier 'args' ... ../src/test_parser.nit:49,11--14
                    ../src/test_parser.nit:49,11
                  identifier 'is_empty' ... ../src/test_parser.nit:49,16--23
                  ../src/test_parser.nit:49,11
              ../src/test_parser.nit:49,29--51
                ../src/test_parser.nit:49,29--44
                  ../src/test_parser.nit:49,29--38
                    ../src/test_parser.nit:49,29--32
                      ../src/test_parser.nit:49,29
                      identifier 'args' ... ../src/test_parser.nit:49,29--32
                      ../src/test_parser.nit:49,29
                    identifier 'first' ... ../src/test_parser.nit:49,34--38
                    ../src/test_parser.nit:49,29
                  identifier 'first' ... ../src/test_parser.nit:49,40--44
                  ../src/test_parser.nit:49,29
                ../src/test_parser.nit:49,49--51
                  literal value ''-'' ... ../src/test_parser.nit:49,49--51
            keyword 'do' ... ../src/test_parser.nit:49,53--54
            ../src/test_parser.nit:50,2--65,3
              ../src/test_parser.nit:50,2--63,4
                keyword 'if' ... ../src/test_parser.nit:50,2--3
                ../src/test_parser.nit:50,5--22
                  ../src/test_parser.nit:50,5--14
                    ../src/test_parser.nit:50,5--8
                      ../src/test_parser.nit:50,5
                      identifier 'args' ... ../src/test_parser.nit:50,5--8
                      ../src/test_parser.nit:50,5
                    identifier 'first' ... ../src/test_parser.nit:50,10--14
                    ../src/test_parser.nit:50,5
                  ../src/test_parser.nit:50,19--22
                    literal value '"-n"' ... ../src/test_parser.nit:50,19--22
                ../src/test_parser.nit:51,3--17
                  ../src/test_parser.nit:51,3--17
                    ../src/test_parser.nit:51,14
                    identifier 'no_print' ... ../src/test_parser.nit:51,3--10
                    ../src/test_parser.nit:51,14
                    '=' ... ../src/test_parser.nit:51,12
                    ../src/test_parser.nit:51,14--17
                      keyword 'true' ... ../src/test_parser.nit:51,14--17
                ../src/test_parser.nit:52,7--63,4
                  keyword 'if' ... ../src/test_parser.nit:52,7--8
                  ../src/test_parser.nit:52,10--27
                    ../src/test_parser.nit:52,10--19
                      ../src/test_parser.nit:52,10--13
                        ../src/test_parser.nit:52,10
                        identifier 'args' ... ../src/test_parser.nit:52,10--13
                        ../src/test_parser.nit:52,10
                      identifier 'first' ... ../src/test_parser.nit:52,15--19
                      ../src/test_parser.nit:52,10
                    ../src/test_parser.nit:52,24--27
                      literal value '"-l"' ... ../src/test_parser.nit:52,24--27
                  ../src/test_parser.nit:53,3--19
                    ../src/test_parser.nit:53,3--19
                      ../src/test_parser.nit:53,16
                      identifier 'only_lexer' ... ../src/test_parser.nit:53,3--12
                      ../src/test_parser.nit:53,16
                      '=' ... ../src/test_parser.nit:53,14
                      ../src/test_parser.nit:53,16--19
                        keyword 'true' ... ../src/test_parser.nit:53,16--19
                  ../src/test_parser.nit:54,7--63,4
                    keyword 'if' ... ../src/test_parser.nit:54,7--8
                    ../src/test_parser.nit:54,10--27
                      ../src/test_parser.nit:54,10--19
                        ../src/test_parser.nit:54,10--13
                          ../src/test_parser.nit:54,10
                          identifier 'args' ... ../src/test_parser.nit:54,10--13
                          ../src/test_parser.nit:54,10
                        identifier 'first' ... ../src/test_parser.nit:54,15--19
                        ../src/test_parser.nit:54,10
                      ../src/test_parser.nit:54,24--27
                        literal value '"-p"' ... ../src/test_parser.nit:54,24--27
                    ../src/test_parser.nit:55,3--20
                      ../src/test_parser.nit:55,3--20
                        ../src/test_parser.nit:55,16
                        identifier 'only_lexer' ... ../src/test_parser.nit:55,3--12
                        ../src/test_parser.nit:55,16
                        '=' ... ../src/test_parser.nit:55,14
                        ../src/test_parser.nit:55,16--20
                          keyword 'false' ... ../src/test_parser.nit:55,16--20
                    ../src/test_parser.nit:56,7--63,4
                      keyword 'if' ... ../src/test_parser.nit:56,7--8
                      ../src/test_parser.nit:56,10--27
                        ../src/test_parser.nit:56,10--19
                          ../src/test_parser.nit:56,10--13
                            ../src/test_parser.nit:56,10
                            identifier 'args' ... ../src/test_parser.nit:56,10--13
                            ../src/test_parser.nit:56,10
                          identifier 'first' ... ../src/test_parser.nit:56,15--19
                          ../src/test_parser.nit:56,10
                        ../src/test_parser.nit:56,24--27
                          literal value '"-e"' ... ../src/test_parser.nit:56,24--27
                      ../src/test_parser.nit:57,3--16
                        ../src/test_parser.nit:57,3--16
                          ../src/test_parser.nit:57,13
                          identifier 'no_file' ... ../src/test_parser.nit:57,3--9
                          ../src/test_parser.nit:57,13
                          '=' ... ../src/test_parser.nit:57,11
                          ../src/test_parser.nit:57,13--16
                            keyword 'true' ... ../src/test_parser.nit:57,13--16
                      ../src/test_parser.nit:58,7--63,4
                        keyword 'if' ... ../src/test_parser.nit:58,7--8
                        ../src/test_parser.nit:58,10--49
                          ../src/test_parser.nit:58,10--27
                            ../src/test_parser.nit:58,10--19
                              ../src/test_parser.nit:58,10--13
                                ../src/test_parser.nit:58,10
                                identifier 'args' ... ../src/test_parser.nit:58,10--13
                                ../src/test_parser.nit:58,10
                              identifier 'first' ... ../src/test_parser.nit:58,15--19
                              ../src/test_parser.nit:58,10
                            ../src/test_parser.nit:58,24--27
                              literal value '"-h"' ... ../src/test_parser.nit:58,24--27
                          ../src/test_parser.nit:58,32--49
                            ../src/test_parser.nit:58,32--41
                              ../src/test_parser.nit:58,32--35
                                ../src/test_parser.nit:58,32
                                identifier 'args' ... ../src/test_parser.nit:58,32--35
                                ../src/test_parser.nit:58,32
                              identifier 'first' ... ../src/test_parser.nit:58,37--41
                              ../src/test_parser.nit:58,32
                            ../src/test_parser.nit:58,46--49
                              literal value '"-?"' ... ../src/test_parser.nit:58,46--49
                        ../src/test_parser.nit:59,3--18
                          ../src/test_parser.nit:59,3--18
                            ../src/test_parser.nit:59,15
                            identifier 'need_help' ... ../src/test_parser.nit:59,3--11
                            ../src/test_parser.nit:59,15
                            '=' ... ../src/test_parser.nit:59,13
                            ../src/test_parser.nit:59,15--18
                              keyword 'true' ... ../src/test_parser.nit:59,15--18
                        ../src/test_parser.nit:61,3--63,4
                          ../src/test_parser.nit:61,3--48
                            ../src/test_parser.nit:61,3--8
                              ../src/test_parser.nit:61,3
                              identifier 'stderr' ... ../src/test_parser.nit:61,3--8
                              ../src/test_parser.nit:61,3
                            identifier 'write' ... ../src/test_parser.nit:61,10--14
                            ../src/test_parser.nit:61,15--48
                              '(' ... ../src/test_parser.nit:61,15
                              ../src/test_parser.nit:61,16--47
                                ../src/test_parser.nit:61,16--32
                                  literal value '"Unknown option {' ... ../src/test_parser.nit:61,16--32
                                ../src/test_parser.nit:61,33--42
                                  ../src/test_parser.nit:61,33--36
                                    ../src/test_parser.nit:61,33
                                    identifier 'args' ... ../src/test_parser.nit:61,33--36
                                    ../src/test_parser.nit:61,33
                                  identifier 'first' ... ../src/test_parser.nit:61,38--42
                                  ../src/test_parser.nit:61,33
                                ../src/test_parser.nit:61,43--47
                                  '}.\n"' ... ../src/test_parser.nit:61,43--47
                              ')' ... ../src/test_parser.nit:61,48
                          ../src/test_parser.nit:62,3--9
                            ../src/test_parser.nit:62,8
                            identifier 'exit' ... ../src/test_parser.nit:62,3--6
                            ../src/test_parser.nit:62,7--9
                              '(' ... ../src/test_parser.nit:62,7
                              ../src/test_parser.nit:62,8
                                literal value '0' ... ../src/test_parser.nit:62,8
                              ')' ... ../src/test_parser.nit:62,9
                          keyword 'end' ... ../src/test_parser.nit:63,2--4
              ../src/test_parser.nit:64,2--11
                ../src/test_parser.nit:64,2--5
                  ../src/test_parser.nit:64,2
                  identifier 'args' ... ../src/test_parser.nit:64,2--5
                  ../src/test_parser.nit:64,2
                identifier 'shift' ... ../src/test_parser.nit:64,7--11
                ../src/test_parser.nit:64,2
              keyword 'end' ... ../src/test_parser.nit:65,1--3
          ../src/test_parser.nit:67,1--110,3
            keyword 'if' ... ../src/test_parser.nit:67,1--2
            ../src/test_parser.nit:67,4--29
              ../src/test_parser.nit:67,4--16
                ../src/test_parser.nit:67,4--7
                  ../src/test_parser.nit:67,4
                  identifier 'args' ... ../src/test_parser.nit:67,4--7
                  ../src/test_parser.nit:67,4
                identifier 'is_empty' ... ../src/test_parser.nit:67,9--16
                ../src/test_parser.nit:67,4
              ../src/test_parser.nit:67,21--29
                ../src/test_parser.nit:67,21
                identifier 'need_help' ... ../src/test_parser.nit:67,21--29
                ../src/test_parser.nit:67,21
            ../src/test_parser.nit:68,2--75,30
              ../src/test_parser.nit:68,2--16
                ../src/test_parser.nit:68,8
                identifier 'print' ... ../src/test_parser.nit:68,2--6
                ../src/test_parser.nit:68,7--16
                  '(' ... ../src/test_parser.nit:68,7
                  ../src/test_parser.nit:68,8--15
                    literal value '"usage:"' ... ../src/test_parser.nit:68,8--15
                  ')' ... ../src/test_parser.nit:68,16
              ../src/test_parser.nit:69,2--54
                ../src/test_parser.nit:69,8
                identifier 'print' ... ../src/test_parser.nit:69,2--6
                ../src/test_parser.nit:69,7--54
                  '(' ... ../src/test_parser.nit:69,7
                  ../src/test_parser.nit:69,8--53
                    literal value '"  test_parser [options]... <filename.nit>..."' ... ../src/test_parser.nit:69,8--53
                  ')' ... ../src/test_parser.nit:69,54
              ../src/test_parser.nit:70,2--18
                ../src/test_parser.nit:70,8
                identifier 'print' ... ../src/test_parser.nit:70,2--6
                ../src/test_parser.nit:70,7--18
                  '(' ... ../src/test_parser.nit:70,7
                  ../src/test_parser.nit:70,8--17
                    literal value '"options:"' ... ../src/test_parser.nit:70,8--17
                  ')' ... ../src/test_parser.nit:70,18
              ../src/test_parser.nit:71,2--36
                ../src/test_parser.nit:71,8
                identifier 'print' ... ../src/test_parser.nit:71,2--6
                ../src/test_parser.nit:71,7--36
                  '(' ... ../src/test_parser.nit:71,7
                  ../src/test_parser.nit:71,8--35
                    literal value '"  -n	do not print anything"' ... ../src/test_parser.nit:71,8--35
                  ')' ... ../src/test_parser.nit:71,36
              ../src/test_parser.nit:72,2--25
                ../src/test_parser.nit:72,8
                identifier 'print' ... ../src/test_parser.nit:72,2--6
                ../src/test_parser.nit:72,7--25
                  '(' ... ../src/test_parser.nit:72,7
                  ../src/test_parser.nit:72,8--24
                    literal value '"  -l	only lexer"' ... ../src/test_parser.nit:72,8--24
                  ')' ... ../src/test_parser.nit:72,25
              ../src/test_parser.nit:73,2--41
                ../src/test_parser.nit:73,8
                identifier 'print' ... ../src/test_parser.nit:73,2--6
                ../src/test_parser.nit:73,7--41
                  '(' ... ../src/test_parser.nit:73,7
                  ../src/test_parser.nit:73,8--40
                    literal value '"  -p	lexer and parser (default)"' ... ../src/test_parser.nit:73,8--40
                  ')' ... ../src/test_parser.nit:73,41
              ../src/test_parser.nit:74,2--68
                ../src/test_parser.nit:74,8
                identifier 'print' ... ../src/test_parser.nit:74,2--6
                ../src/test_parser.nit:74,7--68
                  '(' ... ../src/test_parser.nit:74,7
                  ../src/test_parser.nit:74,8--67
                    literal value '"  -e	instead on files, each argument is a content to parse"' ... ../src/test_parser.nit:74,8--67
                  ')' ... ../src/test_parser.nit:74,68
              ../src/test_parser.nit:75,2--30
                ../src/test_parser.nit:75,8
                identifier 'print' ... ../src/test_parser.nit:75,2--6
                ../src/test_parser.nit:75,7--30
                  '(' ... ../src/test_parser.nit:75,7
                  ../src/test_parser.nit:75,8--29
                    literal value '"  -h	print this help"' ... ../src/test_parser.nit:75,8--29
                  ')' ... ../src/test_parser.nit:75,30
            ../src/test_parser.nit:77,2--110,3
              ../src/test_parser.nit:77,2--109,4
                keyword 'for' ... ../src/test_parser.nit:77,2--4
                identifier 'a' ... ../src/test_parser.nit:77,6
                ../src/test_parser.nit:77,11--14
                  ../src/test_parser.nit:77,11
                  identifier 'args' ... ../src/test_parser.nit:77,11--14
                  ../src/test_parser.nit:77,11
                keyword 'do' ... ../src/test_parser.nit:77,16--17
                ../src/test_parser.nit:78,3--109,4
                  ../src/test_parser.nit:78,3--12
                    keyword 'var' ... ../src/test_parser.nit:78,3--5
                    identifier 'source' ... ../src/test_parser.nit:78,7--12
                  ../src/test_parser.nit:79,3--85,5
                    keyword 'if' ... ../src/test_parser.nit:79,3--4
                    ../src/test_parser.nit:79,6--12
                      ../src/test_parser.nit:79,6
                      identifier 'no_file' ... ../src/test_parser.nit:79,6--12
                      ../src/test_parser.nit:79,6
                    ../src/test_parser.nit:80,4--45
                      ../src/test_parser.nit:80,4--45
                        ../src/test_parser.nit:80,17
                        identifier 'source' ... ../src/test_parser.nit:80,4--9
                        ../src/test_parser.nit:80,17
                        '=' ... ../src/test_parser.nit:80,11
                        ../src/test_parser.nit:80,13--45
                          keyword 'new' ... ../src/test_parser.nit:80,13--15
                          ../src/test_parser.nit:80,17--26
                            type identifier 'SourceFile' ... ../src/test_parser.nit:80,17--26
                          identifier 'from_string' ... ../src/test_parser.nit:80,28--38
                          ../src/test_parser.nit:80,39--45
                            '(' ... ../src/test_parser.nit:80,39
                            ../src/test_parser.nit:80,40--41
                              literal value '""' ... ../src/test_parser.nit:80,40--41
                            ../src/test_parser.nit:80,44
                              ../src/test_parser.nit:80,44
                              identifier 'a' ... ../src/test_parser.nit:80,44
                              ../src/test_parser.nit:80,44
                            ')' ... ../src/test_parser.nit:80,45
                    ../src/test_parser.nit:82,4--85,5
                      ../src/test_parser.nit:82,4--31
                        keyword 'var' ... ../src/test_parser.nit:82,4--6
                        identifier 'f' ... ../src/test_parser.nit:82,8
                        '=' ... ../src/test_parser.nit:82,10
                        ../src/test_parser.nit:82,12--31
                          keyword 'new' ... ../src/test_parser.nit:82,12--14
                          ../src/test_parser.nit:82,16--23
                            type identifier 'IFStream' ... ../src/test_parser.nit:82,16--23
                          identifier 'open' ... ../src/test_parser.nit:82,25--28
                          ../src/test_parser.nit:82,29--31
                            '(' ... ../src/test_parser.nit:82,29
                            ../src/test_parser.nit:82,30
                              ../src/test_parser.nit:82,30
                              identifier 'a' ... ../src/test_parser.nit:82,30
                              ../src/test_parser.nit:82,30
                            ')' ... ../src/test_parser.nit:82,31
                      ../src/test_parser.nit:83,4--32
                        ../src/test_parser.nit:83,17
                        identifier 'source' ... ../src/test_parser.nit:83,4--9
                        ../src/test_parser.nit:83,17
                        '=' ... ../src/test_parser.nit:83,11
                        ../src/test_parser.nit:83,13--32
                          keyword 'new' ... ../src/test_parser.nit:83,13--15
                          ../src/test_parser.nit:83,17--26
                            type identifier 'SourceFile' ... ../src/test_parser.nit:83,17--26
                          ../src/test_parser.nit:83,27--32
                            '(' ... ../src/test_parser.nit:83,27
                            ../src/test_parser.nit:83,28
                              ../src/test_parser.nit:83,28
                              identifier 'a' ... ../src/test_parser.nit:83,28
                              ../src/test_parser.nit:83,28
                            ../src/test_parser.nit:83,31
                              ../src/test_parser.nit:83,31
                              identifier 'f' ... ../src/test_parser.nit:83,31
                              ../src/test_parser.nit:83,31
                            ')' ... ../src/test_parser.nit:83,32
                      ../src/test_parser.nit:84,4--10
                        ../src/test_parser.nit:84,4
                          ../src/test_parser.nit:84,4
                          identifier 'f' ... ../src/test_parser.nit:84,4
                          ../src/test_parser.nit:84,4
                        identifier 'close' ... ../src/test_parser.nit:84,6--10
                        ../src/test_parser.nit:84,4
                      keyword 'end' ... ../src/test_parser.nit:85,3--5
                  ../src/test_parser.nit:86,3--31
                    keyword 'var' ... ../src/test_parser.nit:86,3--5
                    identifier 'lexer' ... ../src/test_parser.nit:86,7--11
                    '=' ... ../src/test_parser.nit:86,13
                    ../src/test_parser.nit:86,15--31
                      keyword 'new' ... ../src/test_parser.nit:86,15--17
                      ../src/test_parser.nit:86,19--23
                        type identifier 'Lexer' ... ../src/test_parser.nit:86,19--23
                      ../src/test_parser.nit:86,24--31
                        '(' ... ../src/test_parser.nit:86,24
                        ../src/test_parser.nit:86,25--30
                          ../src/test_parser.nit:86,25
                          identifier 'source' ... ../src/test_parser.nit:86,25--30
                          ../src/test_parser.nit:86,25
                        ')' ... ../src/test_parser.nit:86,31
                  ../src/test_parser.nit:87,3--108,5
                    keyword 'if' ... ../src/test_parser.nit:87,3--4
                    ../src/test_parser.nit:87,6--15
                      ../src/test_parser.nit:87,6
                      identifier 'only_lexer' ... ../src/test_parser.nit:87,6--15
                      ../src/test_parser.nit:87,6
                    ../src/test_parser.nit:88,4--94,6
                      ../src/test_parser.nit:88,4--25
                        keyword 'var' ... ../src/test_parser.nit:88,4--6
                        identifier 'token' ... ../src/test_parser.nit:88,8--12
                        '=' ... ../src/test_parser.nit:88,14
                        ../src/test_parser.nit:88,16--25
                          ../src/test_parser.nit:88,16--20
                            ../src/test_parser.nit:88,16
                            identifier 'lexer' ... ../src/test_parser.nit:88,16--20
                            ../src/test_parser.nit:88,16
                          identifier 'next' ... ../src/test_parser.nit:88,22--25
                          ../src/test_parser.nit:88,16
                      ../src/test_parser.nit:89,4--94,6
                        keyword 'while' ... ../src/test_parser.nit:89,4--8
                        ../src/test_parser.nit:89,10--26
                          keyword 'not' ... ../src/test_parser.nit:89,10--12
                          ../src/test_parser.nit:89,14--26
                            ../src/test_parser.nit:89,14--18
                              ../src/test_parser.nit:89,14
                              identifier 'token' ... ../src/test_parser.nit:89,14--18
                              ../src/test_parser.nit:89,14
                            ../src/test_parser.nit:89,24--26
                              type identifier 'EOF' ... ../src/test_parser.nit:89,24--26
                        keyword 'do' ... ../src/test_parser.nit:89,28--29
                        ../src/test_parser.nit:90,5--94,6
                          ../src/test_parser.nit:90,5--92,7
                            keyword 'if' ... ../src/test_parser.nit:90,5--6
                            ../src/test_parser.nit:90,8--19
                              keyword 'not' ... ../src/test_parser.nit:90,8--10
                              ../src/test_parser.nit:90,12--19
                                ../src/test_parser.nit:90,12
                                identifier 'no_print' ... ../src/test_parser.nit:90,12--19
                                ../src/test_parser.nit:90,12
                            ../src/test_parser.nit:91,6--64
                              ../src/test_parser.nit:91,6--64
                                ../src/test_parser.nit:91,12
                                identifier 'print' ... ../src/test_parser.nit:91,6--10
                                ../src/test_parser.nit:91,11--64
                                  '(' ... ../src/test_parser.nit:91,11
                                  ../src/test_parser.nit:91,12--63
                                    ../src/test_parser.nit:91,12--27
                                      literal value '"Read token at {' ... ../src/test_parser.nit:91,12--27
                                    ../src/test_parser.nit:91,28--41
                                      ../src/test_parser.nit:91,28--32
                                        ../src/test_parser.nit:91,28
                                        identifier 'token' ... ../src/test_parser.nit:91,28--32
                                        ../src/test_parser.nit:91,28
                                      identifier 'location' ... ../src/test_parser.nit:91,34--41
                                      ../src/test_parser.nit:91,28
                                    ../src/test_parser.nit:91,42--50
                                      literal value '} text='{' ... ../src/test_parser.nit:91,42--50
                                    ../src/test_parser.nit:91,51--60
                                      ../src/test_parser.nit:91,51--55
                                        ../src/test_parser.nit:91,51
                                        identifier 'token' ... ../src/test_parser.nit:91,51--55
                                        ../src/test_parser.nit:91,51
                                      identifier 'text' ... ../src/test_parser.nit:91,57--60
                                      ../src/test_parser.nit:91,51
                                    ../src/test_parser.nit:91,61--63
                                      '}'"' ... ../src/test_parser.nit:91,61--63
                                  ')' ... ../src/test_parser.nit:91,64
                            ../src/test_parser.nit:92,5--7
                              keyword 'end' ... ../src/test_parser.nit:92,5--7
                          ../src/test_parser.nit:93,5--22
                            ../src/test_parser.nit:93,13
                            identifier 'token' ... ../src/test_parser.nit:93,5--9
                            ../src/test_parser.nit:93,13
                            '=' ... ../src/test_parser.nit:93,11
                            ../src/test_parser.nit:93,13--22
                              ../src/test_parser.nit:93,13--17
                                ../src/test_parser.nit:93,13
                                identifier 'lexer' ... ../src/test_parser.nit:93,13--17
                                ../src/test_parser.nit:93,13
                              identifier 'next' ... ../src/test_parser.nit:93,19--22
                              ../src/test_parser.nit:93,13
                          keyword 'end' ... ../src/test_parser.nit:94,4--6
                    ../src/test_parser.nit:96,4--108,5
                      ../src/test_parser.nit:96,4--33
                        keyword 'var' ... ../src/test_parser.nit:96,4--6
                        identifier 'parser' ... ../src/test_parser.nit:96,8--13
                        '=' ... ../src/test_parser.nit:96,15
                        ../src/test_parser.nit:96,17--33
                          keyword 'new' ... ../src/test_parser.nit:96,17--19
                          ../src/test_parser.nit:96,21--26
                            type identifier 'Parser' ... ../src/test_parser.nit:96,21--26
                          ../src/test_parser.nit:96,27--33
                            '(' ... ../src/test_parser.nit:96,27
                            ../src/test_parser.nit:96,28--32
                              ../src/test_parser.nit:96,28
                              identifier 'lexer' ... ../src/test_parser.nit:96,28--32
                              ../src/test_parser.nit:96,28
                            ')' ... ../src/test_parser.nit:96,33
                      ../src/test_parser.nit:97,4--26
                        keyword 'var' ... ../src/test_parser.nit:97,4--6
                        identifier 'tree' ... ../src/test_parser.nit:97,8--11
                        '=' ... ../src/test_parser.nit:97,13
                        ../src/test_parser.nit:97,15--26
                          ../src/test_parser.nit:97,15--20
                            ../src/test_parser.nit:97,15
                            identifier 'parser' ... ../src/test_parser.nit:97,15--20
                            ../src/test_parser.nit:97,15
                          identifier 'parse' ... ../src/test_parser.nit:97,22--26
                          ../src/test_parser.nit:97,15
                      ../src/test_parser.nit:99,4--25
                        keyword 'var' ... ../src/test_parser.nit:99,4--6
                        identifier 'error' ... ../src/test_parser.nit:99,8--12
                        '=' ... ../src/test_parser.nit:99,14
                        ../src/test_parser.nit:99,16--25
                          ../src/test_parser.nit:99,16--19
                            ../src/test_parser.nit:99,16
                            identifier 'tree' ... ../src/test_parser.nit:99,16--19
                            ../src/test_parser.nit:99,16
                          identifier 'n_eof' ... ../src/test_parser.nit:99,21--25
                          ../src/test_parser.nit:99,16
                      ../src/test_parser.nit:100,4--103,6
                        keyword 'if' ... ../src/test_parser.nit:100,4--5
                        ../src/test_parser.nit:100,7--22
                          ../src/test_parser.nit:100,7--11
                            ../src/test_parser.nit:100,7
                            identifier 'error' ... ../src/test_parser.nit:100,7--11
                            ../src/test_parser.nit:100,7
                          ../src/test_parser.nit:100,17--22
                            type identifier 'AError' ... ../src/test_parser.nit:100,17--22
                        ../src/test_parser.nit:101,5--102,10
                          ../src/test_parser.nit:101,5--58
                            ../src/test_parser.nit:101,11
                            identifier 'print' ... ../src/test_parser.nit:101,5--9
                            ../src/test_parser.nit:101,10--58
                              '(' ... ../src/test_parser.nit:101,10
                              ../src/test_parser.nit:101,11--57
                                ../src/test_parser.nit:101,11--21
                                  literal value '"Error at {' ... ../src/test_parser.nit:101,11--21
                                ../src/test_parser.nit:101,22--35
                                  ../src/test_parser.nit:101,22--26
                                    ../src/test_parser.nit:101,22
                                    identifier 'error' ... ../src/test_parser.nit:101,22--26
                                    ../src/test_parser.nit:101,22
                                  identifier 'location' ... ../src/test_parser.nit:101,28--35
                                  ../src/test_parser.nit:101,22
                                ../src/test_parser.nit:101,36--42
                                  literal value '}:\n\t{' ... ../src/test_parser.nit:101,36--42
                                ../src/test_parser.nit:101,43--55
                                  ../src/test_parser.nit:101,43--47
                                    ../src/test_parser.nit:101,43
                                    identifier 'error' ... ../src/test_parser.nit:101,43--47
                                    ../src/test_parser.nit:101,43
                                  identifier 'message' ... ../src/test_parser.nit:101,49--55
                                  ../src/test_parser.nit:101,43
                                ../src/test_parser.nit:101,56--57
                                  '}"' ... ../src/test_parser.nit:101,56--57
                              ')' ... ../src/test_parser.nit:101,58
                          ../src/test_parser.nit:102,5--10
                            keyword 'return' ... ../src/test_parser.nit:102,5--10
                        ../src/test_parser.nit:103,4--6
                          keyword 'end' ... ../src/test_parser.nit:103,4--6
                      ../src/test_parser.nit:105,4--107,6
                        keyword 'if' ... ../src/test_parser.nit:105,4--5
                        ../src/test_parser.nit:105,7--18
                          keyword 'not' ... ../src/test_parser.nit:105,7--9
                          ../src/test_parser.nit:105,11--18
                            ../src/test_parser.nit:105,11
                            identifier 'no_print' ... ../src/test_parser.nit:105,11--18
                            ../src/test_parser.nit:105,11
                        ../src/test_parser.nit:106,5--44
                          ../src/test_parser.nit:106,5--44
                            ../src/test_parser.nit:106,5--26
                              '(' ... ../src/test_parser.nit:106,5
                              ../src/test_parser.nit:106,6--25
                                keyword 'new' ... ../src/test_parser.nit:106,6--8
                                ../src/test_parser.nit:106,10--25
                                  type identifier 'PrintTreeVisitor' ... ../src/test_parser.nit:106,10--25
                                ../src/test_parser.nit:106,6
                              ')' ... ../src/test_parser.nit:106,26
                            identifier 'enter_visit' ... ../src/test_parser.nit:106,28--38
                            ../src/test_parser.nit:106,39--44
                              '(' ... ../src/test_parser.nit:106,39
                              ../src/test_parser.nit:106,40--43
                                ../src/test_parser.nit:106,40
                                identifier 'tree' ... ../src/test_parser.nit:106,40--43
                                ../src/test_parser.nit:106,40
                              ')' ... ../src/test_parser.nit:106,44
                        ../src/test_parser.nit:107,4--6
                          keyword 'end' ... ../src/test_parser.nit:107,4--6
                      keyword 'end' ... ../src/test_parser.nit:108,3--5
                  keyword 'end' ... ../src/test_parser.nit:109,2--4
              keyword 'end' ... ../src/test_parser.nit:110,1--3
  end of file ... ../src/test_parser.nit:111,1
