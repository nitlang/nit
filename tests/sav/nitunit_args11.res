==== Test-suite of module test_nitunit6::test_nitunit6 | tests: 3
[KO] test_nitunit6::test_nitunit6$core::Sys$before_module
     test_nitunit6.nit:25,1--27,3: Runtime Error in file nitunit.out/gen_test_nitunit6.nit
     Output
	Runtime error: Assert failed (test_nitunit6.nit:26)

[KO] test_nitunit6$TestNitunit6$test_foo
     test_nitunit6.nit:20,2--22,4: Nitunit Error: before module test failed
[KO] test_nitunit6::test_nitunit6$core::Sys$after_module
     test_nitunit6.nit:29,1--31,3: Nitunit Error: before module test failed

Docunits: Entities: 5; Documented ones: 0; With nitunits: 0
Test suites: Classes: 1; Test Cases: 3; Failures: 3
[FAILURE] 3/3 tests failed.
`nitunit.out` is not removed for investigation.
<testsuites><testsuite package="test_nitunit6"><testcase classname="nitunit.test_nitunit6.TestNitunit6" name="test_foo" time="0.0"><failure message="Nitunit Error: before module test failed"></failure></testcase></testsuite></testsuites>