==== Docunits of group test_nitunit3> | tests: 2
[KO] test_nitunit3>
     test_nitunit3/README.md:4,2--15,0: Runtime error in nitunit.out/test_nitunit3-0.nit with argument 1
     Output
	Runtime error: Assert failed (nitunit.out/test_nitunit3-0.nit:7)

[KO] test_nitunit3>#2
     test_nitunit3/README.md:8,3--5: Syntax Error: unexpected malformed character '\].

==== Docunits of module test_nitunit3::test_nitunit3 | tests: 1
[OK] test_nitunit3::test_nitunit3

Docunits: Entities: 2; Documented ones: 2; With nitunits: 3; Failures: 2
Test suites: Classes: 0; Test Cases: 0
[FAILURE] 2/3 tests failed.
`nitunit.out` is not removed for investigation.
<testsuites><testsuite package="test_nitunit3&gt;"><testcase classname="nitunit.test_nitunit3.test_nitunit3.&lt;group&gt;" name="&lt;group&gt;" time="0.0"><error message="Runtime error in nitunit.out&#47;test_nitunit3-0.nit with argument 1">Runtime error: Assert failed (nitunit.out&#47;test_nitunit3-0.nit:7)
</error><system-out>assert false
assert true
</system-out></testcase><testcase classname="nitunit.test_nitunit3.test_nitunit3.&lt;group&gt;" name="&lt;group&gt;#2" time="0.0"><failure message="Syntax Error: unexpected malformed character &#39;\]."></failure><system-out>;&#39;\][]
</system-out></testcase></testsuite><testsuite package="test_nitunit3::test_nitunit3"><testcase classname="nitunit.test_nitunit3::test_nitunit3.&lt;module&gt;" name="&lt;module&gt;" time="0.0"><system-err></system-err><system-out>assert true
</system-out></testcase></testsuite></testsuites>