==== Docunits of module test_nitunit::test_nitunit | tests: 4
[OK] test_nitunit::test_nitunit
[KO] test_nitunit$X
     test_nitunit.nit:21,7--22,0: Runtime error in nitunit.out/test_nitunit-2.nit
     Output
	Runtime error: Assert failed (nitunit.out/test_nitunit-2.nit:5)

[KO] test_nitunit$X$foo
     test_nitunit.nit:24,8--25,0: Compilation error in nitunit.out/test_nitunit-3.nit
     Output
	nitunit.out/test_nitunit-3.nit:5,8--27: Error: method or variable `undefined_identifier` unknown in `Sys`.

[KO] test_nitunit$X$foo1
     test_nitunit.nit:28,15: Syntax Error: unexpected operator '!'.

==== Test-suite of module test_test_nitunit::test_test_nitunit | tests: 3
[OK] test_test_nitunit$TestX$test_foo
[KO] test_test_nitunit$TestX$test_foo1
     test_test_nitunit.nit:36,2--40,4: Runtime Error in file nitunit.out/gen_test_test_nitunit.nit
     Output
	Runtime error: Assert failed (test_test_nitunit.nit:39)

[OK] test_test_nitunit$TestX$test_foo2

Docunits: Entities: 34; Documented ones: 6; With nitunits: 4; Failures: 3
Test suites: Classes: 1; Test Cases: 3; Failures: 1
[FAILURE] 4/7 tests failed.
`nitunit.out` is not removed for investigation.
<testsuites><testsuite package="test_nitunit::test_nitunit"><testcase classname="nitunit.test_nitunit::test_nitunit.&lt;module&gt;" name="&lt;module&gt;"><system-err></system-err><system-out>assert true
</system-out></testcase><testcase classname="nitunit.test_nitunit::test_nitunit.test_nitunit::X" name="&lt;class&gt;"><error>Runtime error in nitunit.out&#47;test_nitunit-2.nit</error><system-err>Runtime error: Assert failed (nitunit.out&#47;test_nitunit-2.nit:5)
</system-err><system-out>assert false
</system-out></testcase><testcase classname="nitunit.test_nitunit::test_nitunit.test_nitunit::X" name="test_nitunit::X::foo"><failure>Compilation error in nitunit.out&#47;test_nitunit-3.nit</failure><system-err>nitunit.out&#47;test_nitunit-3.nit:5,8--27: Error: method or variable `undefined_identifier` unknown in `Sys`.
</system-err><system-out>assert undefined_identifier
</system-out></testcase><testcase classname="nitunit.test_nitunit::test_nitunit.test_nitunit::X" name="test_nitunit::X::foo1"><failure>Syntax Error: unexpected operator &#39;!&#39;.</failure><system-out>assert !@#$%^&amp;*()
</system-out></testcase></testsuite><testsuite package="test_test_nitunit::test_test_nitunit"></testsuite><testsuite package="test_test_nitunit"><testcase classname="nitunit.test_test_nitunit::test_test_nitunit.test_test_nitunit::TestX" name="test_test_nitunit::TestX::test_foo"><system-err></system-err></testcase><testcase classname="nitunit.test_test_nitunit::test_test_nitunit.test_test_nitunit::TestX" name="test_test_nitunit::TestX::test_foo1"><error>Runtime Error in file nitunit.out&#47;gen_test_test_nitunit.nit</error><system-err>Runtime error: Assert failed (test_test_nitunit.nit:39)
</system-err></testcase><testcase classname="nitunit.test_test_nitunit::test_test_nitunit.test_test_nitunit::TestX" name="test_test_nitunit::TestX::test_foo2"><system-err></system-err></testcase></testsuite></testsuites>