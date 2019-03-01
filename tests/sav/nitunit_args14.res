==== Test-suite of module test_nitunit11::test_nitunit11 | tests: 7
[OK] test_nitunit9$TestNitunit9$before_class
[OK] test_nitunit10$TestNitunit10$before_class2
[OK] test_nitunit11$TestNitunit11$before_class3
[OK] test_nitunit11$TestNitunit11$test_baz
[OK] test_nitunit11$TestNitunit11$after_class3
[OK] test_nitunit10$TestNitunit10$after_class2
[KO] test_nitunit9$TestNitunit9$after_class
     test_nitunit9.nit:36,2--38,4: Runtime Error in file nitunit.out/gen_test_nitunit11.nit
     Output
	Runtime error: Assert failed (test_nitunit9.nit:37)


Docunits: Entities: 7; Documented ones: 0; With nitunits: 0
Test suites: Classes: 1; Test Cases: 7; Failures: 1
[FAILURE] 1/7 tests failed.
`nitunit.out` is not removed for investigation.
<testsuites><testsuite package="test_nitunit11"><testcase classname="nitunit.test_nitunit11.TestNitunit11" name="test_baz" time="0.0"><system-err></system-err></testcase></testsuite></testsuites>