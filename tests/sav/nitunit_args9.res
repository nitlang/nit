test_nitunit4/test_nitunit4.nit:22,2--26,4: ERROR: test_foo (in file .nitunit/gen_test_nitunit4.nit): Before Test
Tested method
After Test
Runtime error: Assert failed (test_nitunit4/test_nitunit4_base.nit:31)

test_nitunit4/test_nitunit4.nit:32,2--34,4: ERROR: test_baz (in file .nitunit/gen_test_nitunit4.nit): Diff
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
<testsuites><testsuite package="test_nitunit4&gt;"></testsuite><testsuite package="test_nitunit4::nitunit4"></testsuite><testsuite package="test_nitunit4"><testcase classname="nitunit.test_nitunit4::test_nitunit4.test_nitunit4::TestTestSuite" name="test_nitunit4::TestTestSuite::test_foo"><error>Runtime Error</error><system-err>Before Test
Tested method
After Test
Runtime error: Assert failed (test_nitunit4&#47;test_nitunit4_base.nit:31)
</system-err></testcase><testcase classname="nitunit.test_nitunit4::test_nitunit4.test_nitunit4::TestTestSuite" name="test_nitunit4::TestTestSuite::test_bar"></testcase><testcase classname="nitunit.test_nitunit4::test_nitunit4.test_nitunit4::TestTestSuite" name="test_nitunit4::TestTestSuite::test_baz"><error>Runtime Error</error><system-err>Diff
--- expected:test_nitunit4&#47;test_nitunit4.sav&#47;test_baz.res
+++ got:.nitunit&#47;gen_test_nitunit4_test_baz.out1
@@ -1 +1,3 @@
-Bad result file
+Before Test
+Tested method
+After Test
</system-err></testcase></testsuite><testsuite package="test_nitunit4::test_nitunit4"></testsuite><testsuite></testsuite><testsuite package="test_nitunit4::test_nitunit4_base"></testsuite><testsuite></testsuite></testsuites>