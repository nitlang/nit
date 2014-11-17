test_nitunit.nit:20,1--22,0: ERROR: nitunit.test_nitunit.test_nitunit::X.<class> (in .nitunit/test_nitunit-2.nit): Runtime error: Assert failed (.nitunit/test_nitunit-2.nit:5)

test_nitunit.nit:23,2--25,0: FAILURE: nitunit.test_nitunit.test_nitunit::X.test_nitunit::X::foo (in .nitunit/test_nitunit-3.nit): .nitunit/test_nitunit-3.nit:5,8--27: Error: Method or variable 'undefined_identifier' unknown in Sys.

test_test_nitunit.nit:36,2--40,4: ERROR: test_foo1 (in file .nitunit/test_test_nitunit_TestX_test_foo1.nit): Runtime error: Assert failed (test_test_nitunit.nit:39)

DocUnits:
Entities: 27; Documented ones: 3; With nitunits: 3; Failures: 2

TestSuites:
Class suites: 1; Test Cases: 3; Failures: 1
<testsuites><testsuite package="test_nitunit"><testcase classname="nitunit.test_nitunit.&lt;module&gt;" name="&lt;module&gt;"><system-err></system-err><system-out>assert true
</system-out></testcase><testcase classname="nitunit.test_nitunit.test_nitunit::X" name="&lt;class&gt;"><system-err></system-err><system-out>assert false
</system-out><error message="Runtime error: Assert failed (.nitunit/test_nitunit-2.nit:5)
"></error></testcase><testcase classname="nitunit.test_nitunit.test_nitunit::X" name="test_nitunit::X::foo"><system-err></system-err><system-out>assert undefined_identifier
</system-out><failure message=".nitunit/test_nitunit-3.nit:5,8--27: Error: Method or variable 'undefined_identifier' unknown in Sys.
"></failure></testcase></testsuite><testsuite package="test_test_nitunit"><testcase classname="nitunit.test_test_nitunit.test_test_nitunit::TestX" name="test_test_nitunit::TestX::test_foo"><system-err></system-err><system-out>out</system-out></testcase><testcase classname="nitunit.test_test_nitunit.test_test_nitunit::TestX" name="test_test_nitunit::TestX::test_foo1"><system-err></system-err><system-out>out</system-out><error message="Runtime error: Assert failed (test_test_nitunit.nit:39)
"></error></testcase><testcase classname="nitunit.test_test_nitunit.test_test_nitunit::TestX" name="test_test_nitunit::TestX::test_foo2"><system-err></system-err><system-out>out</system-out></testcase></testsuite></testsuites>