==== Docunits of module test_nitunit::test_nitunit | tests: 5
[OK] test_nitunit::test_nitunit
[KO] test_nitunit$X
     test_nitunit.nit:23,7--24,0: Runtime error in nitunit.out/test_nitunit-2.nit with argument 0
     Output
	Runtime error: Assert failed (nitunit.out/test_nitunit-2.nit:5)

[KO] test_nitunit$X$foo
     test_nitunit.nit:27,8--28,0: Compilation error in nitunit.out/test_nitunit-3.nit
     Output
	nitunit.out/test_nitunit-3.nit:5,8--27: Error: method or variable `undefined_identifier` unknown in `Sys`.

[KO] test_nitunit$X$foo1
     test_nitunit.nit:32,15: Syntax Error: unexpected operator '!'.
[OK] test_nitunit$X$foo2

==== Test-suite of module test_test_nitunit::test_test_nitunit | tests: 3
[OK] test_test_nitunit$TestX$test_foo
[KO] test_test_nitunit$TestX$test_foo1
     test_test_nitunit.nit:35,2--39,4: Runtime Error in file nitunit.out/gen_test_test_nitunit.nit
     Output
	Runtime error: Assert failed (test_test_nitunit.nit:38)

[OK] test_test_nitunit$TestX$test_foo2

Docunits: Entities: 34; Documented ones: 7; With nitunits: 5; Failures: 3
Test suites: Classes: 1; Test Cases: 3; Failures: 1
[FAILURE] 4/8 tests failed.
`nitunit.out` is not removed for investigation.
<testsuites><testsuite package="test_nitunit::test_nitunit"><testcase classname="nitunit.test_nitunit::test_nitunit.&lt;module&gt;" name="&lt;module&gt;" time="0.0"><system-err></system-err><system-out>assert true
</system-out></testcase><testcase classname="nitunit.test_nitunit.X" name="&lt;class&gt;" time="0.0"><error message="Runtime error in nitunit.out&#47;test_nitunit-2.nit with argument 0">Runtime error: Assert failed (nitunit.out&#47;test_nitunit-2.nit:5)
</error><system-out>assert false
</system-out></testcase><testcase classname="nitunit.test_nitunit.X" name="foo" time="0.0"><failure message="Compilation error in nitunit.out&#47;test_nitunit-3.nit">nitunit.out&#47;test_nitunit-3.nit:5,8--27: Error: method or variable `undefined_identifier` unknown in `Sys`.
</failure><system-out>assert undefined_identifier
</system-out></testcase><testcase classname="nitunit.test_nitunit.X" name="foo1" time="0.0"><failure message="Syntax Error: unexpected operator &#39;!&#39;."></failure><system-out>assert !@#$%^&amp;*()
</system-out></testcase><testcase classname="nitunit.test_nitunit.X" name="foo2" time="0.0"><system-err></system-err><system-out>var x = new X
assert x.foo2
</system-out></testcase></testsuite><testsuite package="test_test_nitunit"><testcase classname="nitunit.test_test_nitunit.TestX" name="test_foo" time="0.0"><system-err></system-err></testcase><testcase classname="nitunit.test_test_nitunit.TestX" name="test_foo1" time="0.0"><error message="Runtime Error in file nitunit.out&#47;gen_test_test_nitunit.nit">Runtime error: Assert failed (test_test_nitunit.nit:38)
</error></testcase><testcase classname="nitunit.test_test_nitunit.TestX" name="test_foo2" time="0.0"><system-err></system-err></testcase></testsuite></testsuites>