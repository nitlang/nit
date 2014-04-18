/*
	Extern implementation of Nit module math
*/
#include <stdlib.h>
#include <stdio.h>
#include "math._ffi.h"

int math___Int_sqrt___impl( int recv )
{
#line 29 "lib/standard/math.nit"

 return sqrt(recv); }

double math___Float_abs___impl( double recv )
{
#line 40 "lib/standard/math.nit"

 return fabs(recv); }
