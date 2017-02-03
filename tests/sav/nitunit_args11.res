==== Test-suite of module test_nitunit6::test_nitunit6 | tests: 3
[KO] test_nitunit6::test_nitunit6$core::Sys$before_module
     test_nitunit6.nit:27,1--29,3: Runtime Error in file nitunit.out/gen_test_nitunit6.nit
     Output
	Runtime error: Assert failed (test_nitunit6.nit:28)

[KO] test_nitunit6$TestNitunit6$test_foo
     test_nitunit6.nit:22,2--24,4: Nitunit Error: before_module test failed
[KO] test_nitunit6::test_nitunit6$core::Sys$after_module
     test_nitunit6.nit:31,1--33,3: Nitunit Error: before_module test failed

Docunits: Entities: 5; Documented ones: 0; With nitunits: 0
Test suites: Classes: 1; Test Cases: 3; Failures: 3
[FAILURE] 3/3 tests failed.
`nitunit.out` is not removed for investigation.
<testsuites><testsuite package="test_nitunit6::test_nitunit6"></testsuite><testsuite package="test_nitunit6"><testcase classname="nitunit.test_nitunit6.TestNitunit6" name="test_foo" time="0.0"><failure message="Nitunit Error: before_module test failed"></failure></testcase></testsuite></testsuites>