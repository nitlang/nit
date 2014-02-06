test_nitunit.nit:20,1--22,0: ERROR: test_nitunit.test_nitunit::X.<class> (in .nitunit/test_nitunit2.nit): Runtime error: Assert failed (.nitunit/test_nitunit2.nit:5)

test_nitunit.nit:23,2--25,0: FAILURE: test_nitunit.test_nitunit::X.test_nitunit::X::toto (in .nitunit/test_nitunit3.nit): .nitunit/test_nitunit3.nit:5,9--28: Error: Method or variable 'undefined_identifier' unknown in Sys.

<testsuites><testsuite package="test_nitunit"><testcase classname="test_nitunit.&lt;module&gt;" name="&lt;module&gt;"><system-err></system-err><system-out> assert true
</system-out></testcase><testcase classname="test_nitunit.test_nitunit::X" name="&lt;class&gt;"><system-err></system-err><system-out> assert false
</system-out><error message="Runtime error: Assert failed (.nitunit/test_nitunit2.nit:5)
"></error></testcase><testcase classname="test_nitunit.test_nitunit::X" name="test_nitunit::X::toto"><system-err></system-err><system-out> assert undefined_identifier
</system-out><failure message=".nitunit/test_nitunit3.nit:5,9--28: Error: Method or variable 'undefined_identifier' unknown in Sys.
"></failure></testcase></testsuite></testsuites>