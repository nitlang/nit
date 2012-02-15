/*
	Extern implementation of Nit module test_ni_global_not_called_but_referred
*/

#include "test_ni_global_not_called_but_referred.nit.h"

/*
C implementation of test_ni_global_not_called_but_referred::A::f

Imported methods signatures:
	void B_g( B recv ) for test_ni_global_not_called_but_referred::B::g
*/
void A_f___impl( A recv, B b ) {
	B_g( b );
}
