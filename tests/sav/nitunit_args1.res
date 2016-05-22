test_nitunit.nit:21,7--22,0: ERROR: test_nitunit$X (in .nitunit/test_nitunit-2.nit):
Runtime error: Assert failed (.nitunit/test_nitunit-2.nit:5)

test_nitunit.nit:24,8--25,0: FAILURE: test_nitunit$X$foo (in .nitunit/test_nitunit-3.nit):
.nitunit/test_nitunit-3.nit:5,8--27: Error: method or variable `undefined_identifier` unknown in `Sys`.

test_test_nitunit.nit:36,2--40,4: ERROR: test_foo1 (in file .nitunit/gen_test_test_nitunit.nit): Runtime error: Assert failed (test_test_nitunit.nit:39)

DocUnits:
Entities: 27; Documented ones: 3; With nitunits: 3; Failures: 2

TestSuites:
Class suites: 1; Test Cases: 3; Failures: 1
<testsuites><testsuite package="test_nitunit::test_nitunit"><testcase classname="nitunit.test_nitunit::test_nitunit.&lt;module&gt;" name="&lt;module&gt;"><system-out>assert true
</system-out></testcase><testcase classname="nitunit.test_nitunit::test_nitunit.test_nitunit::X" name="&lt;class&gt;"><system-out>assert false
</system-out></testcase><testcase classname="nitunit.test_nitunit::test_nitunit.test_nitunit::X" name="test_nitunit::X::foo"><failure>Compilation Error</failure><system-err>.nitunit&#47;test_nitunit-3.nit:5,8--27: Error: method or variable `undefined_identifier` unknown in `Sys`.
</system-err><system-out>assert undefined_identifier
</system-out></testcase></testsuite><testsuite package="test_test_nitunit"><testcase classname="nitunit.test_test_nitunit::test_test_nitunit.test_test_nitunit::TestX" name="test_test_nitunit::TestX::test_foo"></testcase><testcase classname="nitunit.test_test_nitunit::test_test_nitunit.test_test_nitunit::TestX" name="test_test_nitunit::TestX::test_foo1"><error>Runtime Error</error><system-err>Runtime error: Assert failed (test_test_nitunit.nit:39)
</system-err></testcase><testcase classname="nitunit.test_test_nitunit::test_test_nitunit.test_test_nitunit::TestX" name="test_test_nitunit::TestX::test_foo2"></testcase></testsuite></testsuites>