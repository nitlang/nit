==== Docunits of module test_doc3::test_doc3 | tests: 3
[KO] test_doc3::test_doc3$core::Sys$foo1
     test_doc3.nit:17,9--15: Syntax Error: unexpected identifier 'garbage'.
[KO] test_doc3::test_doc3$core::Sys$foo2
     test_doc3.nit:23,4--10: Syntax Error: unexpected identifier 'garbage'.
[KO] test_doc3::test_doc3$core::Sys$foo3
     test_doc3.nit:30,4--10: Syntax Error: unexpected identifier 'garbage'.

Docunits: Entities: 6; Documented ones: 5; With nitunits: 3; Failures: 3
Test suites: Classes: 0; Test Cases: 0
[FAILURE] 3/3 tests failed.
`nitunit.out` is not removed for investigation.
<testsuites><testsuite package="test_doc3::test_doc3"><testcase classname="nitunit.test_doc3::test_doc3.core::Sys" name="foo1" time="0.0"><failure message="Syntax Error: unexpected identifier &#39;garbage&#39;."></failure><system-out> *garbage*
</system-out></testcase><testcase classname="nitunit.test_doc3::test_doc3.core::Sys" name="foo2" time="0.0"><failure message="Syntax Error: unexpected identifier &#39;garbage&#39;."></failure><system-out>*garbage*
</system-out></testcase><testcase classname="nitunit.test_doc3::test_doc3.core::Sys" name="foo3" time="0.0"><failure message="Syntax Error: unexpected identifier &#39;garbage&#39;."></failure><system-out>*garbage*
</system-out></testcase></testsuite></testsuites>