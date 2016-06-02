==== Test-suite of module test_nitunit4::test_nitunit4 | tests: 3
[KO] test_nitunit4$TestTestSuite$test_foo
     test_nitunit4/test_nitunit4.nit:22,2--26,4: Runtime Error in file nitunit.out/gen_test_nitunit4.nit
     Output
	Before Test
	Tested method
	After Test
	Runtime error: Assert failed (test_nitunit4/test_nitunit4_base.nit:31)

[OK] test_nitunit4$TestTestSuite$test_bar
[KO] test_nitunit4$TestTestSuite$test_baz
     test_nitunit4/test_nitunit4.nit:32,2--34,4: Difference with expected output: diff -u test_nitunit4/test_nitunit4.sav/test_baz.res nitunit.out/gen_test_nitunit4_test_baz.out1
     Output
	Diff
	--- expected:test_nitunit4/test_nitunit4.sav/test_baz.res
	+++ got:nitunit.out/gen_test_nitunit4_test_baz.out1
	@@ -1 +1,3 @@
	-Bad result file
	+Before Test
	+Tested method
	+After Test


Docunits: Entities: 12; Documented ones: 0; With nitunits: 0
Test suites: Classes: 1; Test Cases: 3; Failures: 2
[FAILURE] 2/3 tests failed.
`nitunit.out` is not removed for investigation.
<testsuites><testsuite package="test_nitunit4&gt;"></testsuite><testsuite package="test_nitunit4::nitunit4"></testsuite><testsuite package="test_nitunit4"><testcase classname="nitunit.test_nitunit4::test_nitunit4.test_nitunit4::TestTestSuite" name="test_nitunit4::TestTestSuite::test_foo"><error>Runtime Error in file nitunit.out&#47;gen_test_nitunit4.nit</error><system-err>Before Test
Tested method
After Test
Runtime error: Assert failed (test_nitunit4&#47;test_nitunit4_base.nit:31)
</system-err></testcase><testcase classname="nitunit.test_nitunit4::test_nitunit4.test_nitunit4::TestTestSuite" name="test_nitunit4::TestTestSuite::test_bar"><system-err>Before Test
Tested method
After Test
</system-err></testcase><testcase classname="nitunit.test_nitunit4::test_nitunit4.test_nitunit4::TestTestSuite" name="test_nitunit4::TestTestSuite::test_baz"><error>Difference with expected output: diff -u test_nitunit4&#47;test_nitunit4.sav&#47;test_baz.res nitunit.out&#47;gen_test_nitunit4_test_baz.out1</error><system-err>Diff
--- expected:test_nitunit4&#47;test_nitunit4.sav&#47;test_baz.res
+++ got:nitunit.out&#47;gen_test_nitunit4_test_baz.out1
@@ -1 +1,3 @@
-Bad result file
+Before Test
+Tested method
+After Test
</system-err></testcase></testsuite><testsuite package="test_nitunit4::test_nitunit4"></testsuite><testsuite></testsuite><testsuite package="test_nitunit4::test_nitunit4_base"></testsuite><testsuite></testsuite></testsuites>