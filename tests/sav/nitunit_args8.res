[K* Docunits of module test_doc3::test_doc3 [   ] 0/3[K* Docunits of module test_doc3::test_doc3 [[1m[31mX[m[m  ] 1/3 test_doc3::test_doc3$core::Sys$foo1 [1m[31m[KO][m[m[K* Docunits of module test_doc3::test_doc3 [[1m[31mX[m[m[1m[31mX[m[m ] 2/3 test_doc3::test_doc3$core::Sys$foo2 [1m[31m[KO][m[m[K* Docunits of module test_doc3::test_doc3 [[1m[31mX[m[m[1m[31mX[m[m[1m[31mX[m[m] 3/3 test_doc3::test_doc3$core::Sys$foo3 [1m[31m[KO][m[m[K* Docunits of module test_doc3::test_doc3 [[1m[31mX[m[m[1m[31mX[m[m[1m[31mX[m[m] 3/3
[1m[31m[KO][m[m test_doc3::test_doc3$core::Sys$foo1
     [33mtest_doc3.nit:17,9--15[m: Syntax Error: unexpected identifier 'garbage'.
	#      *[1;31mgarbage[0m*
	        ^
[1m[31m[KO][m[m test_doc3::test_doc3$core::Sys$foo2
     [33mtest_doc3.nit:23,4--10[m: Syntax Error: unexpected identifier 'garbage'.
	# *[1;31mgarbage[0m*
	   ^
[1m[31m[KO][m[m test_doc3::test_doc3$core::Sys$foo3
     [33mtest_doc3.nit:30,4--10[m: Syntax Error: unexpected identifier 'garbage'.
	# *[1;31mgarbage[0m*
	   ^
DocUnits:
Entities: 6; Documented ones: 5; With nitunits: 3; Failures: 3

TestSuites:
No test cases found
Class suites: 0; Test Cases: 0; Failures: 0
<testsuites><testsuite package="test_doc3::test_doc3"><testcase classname="nitunit.test_doc3::test_doc3.core::Sys" name="test_doc3::test_doc3::Sys::foo1"><failure>Syntax Error: unexpected identifier &#39;garbage&#39;.</failure><system-out> *garbage*
</system-out></testcase><testcase classname="nitunit.test_doc3::test_doc3.core::Sys" name="test_doc3::test_doc3::Sys::foo2"><failure>Syntax Error: unexpected identifier &#39;garbage&#39;.</failure><system-out>*garbage*
</system-out></testcase><testcase classname="nitunit.test_doc3::test_doc3.core::Sys" name="test_doc3::test_doc3::Sys::foo3"><failure>Syntax Error: unexpected identifier &#39;garbage&#39;.</failure><system-out>*garbage*
</system-out></testcase></testsuite><testsuite></testsuite></testsuites>