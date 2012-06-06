/*
	Extern implementation of Nit module test_ni_optimized
*/

#include "test_ni_optimized.nit.h"

/*
C implementation of test_ni_optimized::A::foo
*/
void A_foo___impl( A recv, bigint i, Object o )
{
	printf( "%ld\n", i );
}

/*
C implementation of test_ni_optimized::Int::bar
*/
bigint Int_bar___impl( bigint recv, Object o, nullable_Object u )
{
	return recv*2;
}
