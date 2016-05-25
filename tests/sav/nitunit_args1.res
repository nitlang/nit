[K* Docunits of module test_nitunit::test_nitunit [    ] 0/4[K* Docunits of module test_nitunit::test_nitunit [   [1m[31mX[m[m] 1/4 test_nitunit$X$foo1 [1m[31m[KO][m[m[K* Docunits of module test_nitunit::test_nitunit [[1m[32m.[m[m  [1m[31mX[m[m] 2/4 test_nitunit::test_nitunit [1m[32m[OK][m[m[K* Docunits of module test_nitunit::test_nitunit [[1m[32m.[m[m[1m[31mX[m[m [1m[31mX[m[m] 3/4 test_nitunit$X [1m[31m[KO][m[m[K* Docunits of module test_nitunit::test_nitunit [[1m[32m.[m[m[1m[31mX[m[m[1m[31mX[m[m[1m[31mX[m[m] 4/4 test_nitunit$X$foo [1m[31m[KO][m[m[K* Docunits of module test_nitunit::test_nitunit [[1m[32m.[m[m[1m[31mX[m[m[1m[31mX[m[m[1m[31mX[m[m] 4/4
[1m[32m[OK][m[m test_nitunit::test_nitunit
[1m[31m[KO][m[m test_nitunit$X
     [33mtest_nitunit.nit:21,7--22,0[m: Runtime error in .nitunit/test_nitunit-2.nit
	#     [1;31massert false[0m
	      ^
     Output
	Runtime error: Assert failed (.nitunit/test_nitunit-2.nit:5)

[1m[31m[KO][m[m test_nitunit$X$foo
     [33mtest_nitunit.nit:24,8--25,0[m: Compilation error in .nitunit/test_nitunit-3.nit
		#     [1;31massert undefined_identifier[0m
		      ^
     Output
	.nitunit/test_nitunit-3.nit:5,8--27: Error: method or variable `undefined_identifier` unknown in `Sys`.

[1m[31m[KO][m[m test_nitunit$X$foo1
     [33mtest_nitunit.nit:28,15[m: Syntax Error: unexpected operator '!'.
		#     assert [1;31m![0m@#$%^&*()
		             ^
[K* Test-suite of module test_test_nitunit::test_test_nitunit [   ] 0/3[K* Test-suite of module test_test_nitunit::test_test_nitunit [[1m[32m.[m[m  ] 1/3 test_test_nitunit$TestX$test_foo [1m[32m[OK][m[m[K* Test-suite of module test_test_nitunit::test_test_nitunit [[1m[32m.[m[m[1m[31mX[m[m ] 2/3 test_test_nitunit$TestX$test_foo1 [1m[31m[KO][m[m[K* Test-suite of module test_test_nitunit::test_test_nitunit [[1m[32m.[m[m[1m[31mX[m[m[1m[32m.[m[m] 3/3 test_test_nitunit$TestX$test_foo2 [1m[32m[OK][m[m[K* Test-suite of module test_test_nitunit::test_test_nitunit [[1m[32m.[m[m[1m[31mX[m[m[1m[32m.[m[m] 3/3
[1m[32m[OK][m[m test_test_nitunit$TestX$test_foo
[1m[31m[KO][m[m test_test_nitunit$TestX$test_foo1
     [33mtest_test_nitunit.nit:36,2--40,4[m: Runtime Error in file .nitunit/gen_test_test_nitunit.nit
		[1;31m# will fail[0m
		^
     Output
	Runtime error: Assert failed (test_test_nitunit.nit:39)

[1m[32m[OK][m[m test_test_nitunit$TestX$test_foo2
DocUnits:
Entities: 27; Documented ones: 4; With nitunits: 4; Failures: 3

TestSuites:
Class suites: 1; Test Cases: 3; Failures: 1
<testsuites><testsuite package="test_nitunit::test_nitunit"><testcase classname="nitunit.test_nitunit::test_nitunit.&lt;module&gt;" name="&lt;module&gt;"><system-err></system-err><system-out>assert true
</system-out></testcase><testcase classname="nitunit.test_nitunit::test_nitunit.test_nitunit::X" name="&lt;class&gt;"><error>Runtime error in .nitunit&#47;test_nitunit-2.nit</error><system-err>Runtime error: Assert failed (.nitunit&#47;test_nitunit-2.nit:5)
</system-err><system-out>assert false
</system-out></testcase><testcase classname="nitunit.test_nitunit::test_nitunit.test_nitunit::X" name="test_nitunit::X::foo"><failure>Compilation error in .nitunit&#47;test_nitunit-3.nit</failure><system-err>.nitunit&#47;test_nitunit-3.nit:5,8--27: Error: method or variable `undefined_identifier` unknown in `Sys`.
</system-err><system-out>assert undefined_identifier
</system-out></testcase><testcase classname="nitunit.test_nitunit::test_nitunit.test_nitunit::X" name="test_nitunit::X::foo1"><failure>Syntax Error: unexpected operator &#39;!&#39;.</failure><system-out>assert !@#$%^&amp;*()
</system-out></testcase></testsuite><testsuite package="test_test_nitunit"><testcase classname="nitunit.test_test_nitunit::test_test_nitunit.test_test_nitunit::TestX" name="test_test_nitunit::TestX::test_foo"><system-err></system-err></testcase><testcase classname="nitunit.test_test_nitunit::test_test_nitunit.test_test_nitunit::TestX" name="test_test_nitunit::TestX::test_foo1"><error>Runtime Error in file .nitunit&#47;gen_test_test_nitunit.nit</error><system-err>Runtime error: Assert failed (test_test_nitunit.nit:39)
</system-err></testcase><testcase classname="nitunit.test_test_nitunit::test_test_nitunit.test_test_nitunit::TestX" name="test_test_nitunit::TestX::test_foo2"><system-err></system-err></testcase></testsuite></testsuites>