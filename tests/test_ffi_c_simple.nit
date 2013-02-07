module test_ffi_c_simple

in "C header" `{
	#include <stdio.h>
`}

in "C body" `{
	int f( void ) {
		printf( "in C!\n" );
		return 42;
	}
`}

class A
	fun foo : Int in "C" `{
		printf( "C implementation!\n" );
		return f();
	`}
end

fun bar : Float is extern `{
	return 5.12345;
`}

print bar

var a = new A
print a.foo

