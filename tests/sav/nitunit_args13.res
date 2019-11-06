==== Test-suite of module test_nitunit8::test_nitunit8 | tests: 3
[OK] test_nitunit7::test_nitunit7$core::Sys$before_module
[OK] test_nitunit8$TestNitunit8$test_foo
[KO] test_nitunit7::test_nitunit7$core::Sys$after_module
     test_nitunit7.nit:29,1--31,3: Runtime Error in file nitunit.out/gen_test_nitunit8.nit
     Output
	Runtime error: Assert failed (test_nitunit7.nit:30)


Docunits: Entities: 3; Documented ones: 0; With nitunits: 0
Test suites: Classes: 1; Test Cases: 3; Failures: 1
[FAILURE] 1/3 tests failed.
`nitunit.out` is not removed for investigation.
<testsuites><testsuite package="test_nitunit8"><testcase classname="nitunit.test_nitunit8.TestNitunit8" name="test_foo" time="0.0"><system-err></system-err></testcase></testsuite></testsuites>