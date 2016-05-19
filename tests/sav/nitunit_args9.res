test_nitunit4/test_nitunit4.nit:22,2--26,4: ERROR: test_foo (in file .nitunit/gen_test_nitunit4.nit): Before Test
Tested method
After Test
Runtime error: Assert failed (test_nitunit4/test_nitunit4_base.nit:31)

diff: missing operand after 'expected:'
diff: Try 'diff --help' for more information.
test_nitunit4/test_nitunit4.nit:28,2--30,4: ERROR: test_bar (in file .nitunit/gen_test_nitunit4.nit): Diff

diff: missing operand after 'expected:'
diff: Try 'diff --help' for more information.
test_nitunit4/test_nitunit4.nit:32,2--34,4: ERROR: test_baz (in file .nitunit/gen_test_nitunit4.nit): Diff
--- expected: test_nitunit4/test_baz.res
+++ got: .nitunit/gen_test_nitunit4_test_baz.out1
@@ -1 +1,3 @@
-Bad result file
+Before Test
+Tested method
+After Test

DocUnits:
No doc units found
Entities: 12; Documented ones: 0; With nitunits: 0; Failures: 0

TestSuites:
Class suites: 1; Test Cases: 3; Failures: 3
<testsuites><testsuite package="test_nitunit4&gt;"></testsuite><testsuite package="test_nitunit4::nitunit4"></testsuite><testsuite package="test_nitunit4"><testcase classname="nitunit.test_nitunit4::test_nitunit4.test_nitunit4::TestTestSuite" name="test_nitunit4::TestTestSuite::test_foo"><system-out></system-out><system-err>Before Test
Tested method
After Test
Runtime error: Assert failed (test_nitunit4&#47;test_nitunit4_base.nit:31)
</system-err><error message="Runtime Error"></error></testcase><testcase classname="nitunit.test_nitunit4::test_nitunit4.test_nitunit4::TestTestSuite" name="test_nitunit4::TestTestSuite::test_bar"><system-out></system-out><system-err>Diff
</system-err><error message="Runtime Error"></error></testcase><testcase classname="nitunit.test_nitunit4::test_nitunit4.test_nitunit4::TestTestSuite" name="test_nitunit4::TestTestSuite::test_baz"><system-out></system-out><system-err>Diff
--- expected: test_nitunit4&#47;test_baz.res
+++ got: .nitunit&#47;gen_test_nitunit4_test_baz.out1
@@ -1 +1,3 @@
-Bad result file
+Before Test
+Tested method
+After Test
</system-err><error message="Runtime Error"></error></testcase></testsuite><testsuite package="test_nitunit4::test_nitunit4"></testsuite><testsuite></testsuite><testsuite package="test_nitunit4::test_nitunit4_base"></testsuite><testsuite></testsuite></testsuites>