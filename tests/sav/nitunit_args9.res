[K* Test-suite of module test_nitunit4::test_nitunit4 [   ] 0/3[K* Test-suite of module test_nitunit4::test_nitunit4 [[1m[31mX[m[m  ] 1/3 test_nitunit4$TestTestSuite$test_foo [1m[31m[KO][m[m[K* Test-suite of module test_nitunit4::test_nitunit4 [[1m[31mX[m[m[1m[32m.[m[m ] 2/3 test_nitunit4$TestTestSuite$test_bar [1m[32m[OK][m[m[K* Test-suite of module test_nitunit4::test_nitunit4 [[1m[31mX[m[m[1m[32m.[m[m[1m[31mX[m[m] 3/3 test_nitunit4$TestTestSuite$test_baz [1m[31m[KO][m[m[K* Test-suite of module test_nitunit4::test_nitunit4 [[1m[31mX[m[m[1m[32m.[m[m[1m[31mX[m[m] 3/3
[1m[31m[KO][m[m test_nitunit4$TestTestSuite$test_foo
     [33mtest_nitunit4/test_nitunit4.nit:22,2--26,4[m: Runtime Error in file .nitunit/gen_test_nitunit4.nit
		[1;31mfun test_foo do[0m
		^
     Output
	Before Test
	Tested method
	After Test
	Runtime error: Assert failed (test_nitunit4/test_nitunit4_base.nit:31)

[1m[32m[OK][m[m test_nitunit4$TestTestSuite$test_bar
[1m[31m[KO][m[m test_nitunit4$TestTestSuite$test_baz
     [33mtest_nitunit4/test_nitunit4.nit:32,2--34,4[m: Difference with expected output: diff -u test_nitunit4/test_nitunit4.sav/test_baz.res .nitunit/gen_test_nitunit4_test_baz.out1
		[1;31mfun test_baz do[0m
		^
     Output
	Diff
	--- expected:test_nitunit4/test_nitunit4.sav/test_baz.res
	+++ got:.nitunit/gen_test_nitunit4_test_baz.out1
	@@ -1 +1,3 @@
	-Bad result file
	+Before Test
	+Tested method
	+After Test

DocUnits:
No doc units found
Entities: 12; Documented ones: 0; With nitunits: 0; Failures: 0

TestSuites:
Class suites: 1; Test Cases: 3; Failures: 2
<testsuites><testsuite package="test_nitunit4&gt;"></testsuite><testsuite package="test_nitunit4::nitunit4"></testsuite><testsuite package="test_nitunit4"><testcase classname="nitunit.test_nitunit4::test_nitunit4.test_nitunit4::TestTestSuite" name="test_nitunit4::TestTestSuite::test_foo"><error>Runtime Error in file .nitunit&#47;gen_test_nitunit4.nit</error><system-err>Before Test
Tested method
After Test
Runtime error: Assert failed (test_nitunit4&#47;test_nitunit4_base.nit:31)
</system-err></testcase><testcase classname="nitunit.test_nitunit4::test_nitunit4.test_nitunit4::TestTestSuite" name="test_nitunit4::TestTestSuite::test_bar"><system-err>Before Test
Tested method
After Test
</system-err></testcase><testcase classname="nitunit.test_nitunit4::test_nitunit4.test_nitunit4::TestTestSuite" name="test_nitunit4::TestTestSuite::test_baz"><error>Difference with expected output: diff -u test_nitunit4&#47;test_nitunit4.sav&#47;test_baz.res .nitunit&#47;gen_test_nitunit4_test_baz.out1</error><system-err>Diff
--- expected:test_nitunit4&#47;test_nitunit4.sav&#47;test_baz.res
+++ got:.nitunit&#47;gen_test_nitunit4_test_baz.out1
@@ -1 +1,3 @@
-Bad result file
+Before Test
+Tested method
+After Test
</system-err></testcase></testsuite><testsuite package="test_nitunit4::test_nitunit4"></testsuite><testsuite></testsuite><testsuite package="test_nitunit4::test_nitunit4_base"></testsuite><testsuite></testsuite></testsuites>