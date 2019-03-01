test_nitunit4/test_bad_comp.nit:25,10--19: Error: method or variable `bad_method` unknown in `TestSuiteBadComp`.
test_nitunit4/test_bad_comp2.nit:17,7--22: Error: a class named `test_nitunit4::TestSuiteBadComp` is already defined in module `test_bad_comp` at test_nitunit4/test_bad_comp.nit:17,1--27,3.
==== Test-suite of module test_nitunit4::test_bad_comp | tests: 2
[KO] test_nitunit4$TestSuiteBadComp$test_good
     test_nitunit4/test_bad_comp.nit:20,2--22,4: Compilation Error
     Output
	test_nitunit4/test_bad_comp.nit:25,10--19: Error: method or variable `bad_method` unknown in `TestSuiteBadComp`.

[KO] test_nitunit4$TestSuiteBadComp$test_bad
     test_nitunit4/test_bad_comp.nit:24,2--26,4: Compilation Error
     Output
	test_nitunit4/test_bad_comp.nit:25,10--19: Error: method or variable `bad_method` unknown in `TestSuiteBadComp`.


==== Test-suite of module test_nitunit4::test_bad_comp2 | tests: 2
[KO] test_nitunit4$TestSuiteBadComp$test_good
     test_nitunit4/test_bad_comp2.nit:20,2--22,4: Compilation Error
     Output
	nitunit.out/gen_test_bad_comp2.nit:11,10--17: Error: expected 1 argument(s) for `test_bad(param: Bool)`; got 0. See introduction at `test_nitunit4::TestSuiteBadComp::test_bad`.

[KO] test_nitunit4$TestSuiteBadComp$test_bad
     test_nitunit4/test_bad_comp2.nit:24,2--26,4: Compilation Error
     Output
	nitunit.out/gen_test_bad_comp2.nit:11,10--17: Error: expected 1 argument(s) for `test_bad(param: Bool)`; got 0. See introduction at `test_nitunit4::TestSuiteBadComp::test_bad`.


==== Test-suite of module test_nitunit4::test_nitunit4 | tests: 4
[KO] test_nitunit4$TestTestSuite$test_foo
     test_nitunit4/test_nitunit4.nit:23,2--27,4: Runtime Error in file nitunit.out/gen_test_nitunit4.nit
     Output
	Before Test
	Tested method
	After Test
	Runtime assert: <TestTestSuite>.before
	Runtime error: Assert failed (test_nitunit4/test_nitunit4_base.nit:28)

[OK] test_nitunit4$TestTestSuite$test_bar
[KO] test_nitunit4$TestTestSuite$test_baz
     test_nitunit4/test_nitunit4.nit:33,2--35,4: Difference with expected output: diff -u test_nitunit4/test_baz.res nitunit.out/gen_test_nitunit4_test_baz.out1
     Output
	Diff
	--- expected:test_nitunit4/test_baz.res
	+++ got:nitunit.out/gen_test_nitunit4_test_baz.out1
	@@ -1 +1,3 @@
	-Bad result file
	+Before Test
	+Tested method
	+After Test

[KO] test_nitunit4$TestTestSuite$test_sav_conflict
     test_nitunit4/test_nitunit4.nit:37,2--39,4: Conflicting expected output: test_nitunit4/test_nitunit4.sav/test_sav_conflict.res, test_nitunit4/sav/test_sav_conflict.res and test_nitunit4/test_sav_conflict.res all exist
     Output
	Before Test
	Tested method
	After Test


Docunits: Entities: 22; Documented ones: 0; With nitunits: 0
Test suites: Classes: 3; Test Cases: 8; Failures: 7
[FAILURE] 7/8 tests failed.
`nitunit.out` is not removed for investigation.
<testsuites><testsuite package="test_bad_comp"><testcase classname="nitunit.test_nitunit4.TestSuiteBadComp" name="test_good" time="0.0"><failure message="Compilation Error">test_nitunit4&#47;test_bad_comp.nit:25,10--19: Error: method or variable `bad_method` unknown in `TestSuiteBadComp`.
</failure></testcase><testcase classname="nitunit.test_nitunit4.TestSuiteBadComp" name="test_bad" time="0.0"><failure message="Compilation Error">test_nitunit4&#47;test_bad_comp.nit:25,10--19: Error: method or variable `bad_method` unknown in `TestSuiteBadComp`.
</failure></testcase></testsuite><testsuite package="test_bad_comp2"><testcase classname="nitunit.test_nitunit4.TestSuiteBadComp" name="test_good" time="0.0"><failure message="Compilation Error">nitunit.out&#47;gen_test_bad_comp2.nit:11,10--17: Error: expected 1 argument(s) for `test_bad(param: Bool)`; got 0. See introduction at `test_nitunit4::TestSuiteBadComp::test_bad`.
</failure></testcase><testcase classname="nitunit.test_nitunit4.TestSuiteBadComp" name="test_bad" time="0.0"><failure message="Compilation Error">nitunit.out&#47;gen_test_bad_comp2.nit:11,10--17: Error: expected 1 argument(s) for `test_bad(param: Bool)`; got 0. See introduction at `test_nitunit4::TestSuiteBadComp::test_bad`.
</failure></testcase></testsuite><testsuite package="test_nitunit4"><testcase classname="nitunit.test_nitunit4.TestTestSuite" name="test_foo" time="0.0"><error message="Runtime Error in file nitunit.out&#47;gen_test_nitunit4.nit">Before Test
Tested method
After Test
Runtime assert: &lt;TestTestSuite&gt;.before
Runtime error: Assert failed (test_nitunit4&#47;test_nitunit4_base.nit:28)
</error></testcase><testcase classname="nitunit.test_nitunit4.TestTestSuite" name="test_bar" time="0.0"><system-err>Before Test
Tested method
After Test
</system-err></testcase><testcase classname="nitunit.test_nitunit4.TestTestSuite" name="test_baz" time="0.0"><error message="Difference with expected output: diff -u test_nitunit4&#47;test_baz.res nitunit.out&#47;gen_test_nitunit4_test_baz.out1">Diff
--- expected:test_nitunit4&#47;test_baz.res
+++ got:nitunit.out&#47;gen_test_nitunit4_test_baz.out1
@@ -1 +1,3 @@
-Bad result file
+Before Test
+Tested method
+After Test
</error></testcase><testcase classname="nitunit.test_nitunit4.TestTestSuite" name="test_sav_conflict" time="0.0"><error message="Conflicting expected output: test_nitunit4&#47;test_nitunit4.sav&#47;test_sav_conflict.res, test_nitunit4&#47;sav&#47;test_sav_conflict.res and test_nitunit4&#47;test_sav_conflict.res all exist">Before Test
Tested method
After Test
</error></testcase></testsuite></testsuites>