/*
	Extern implementation of Nit module math
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "core__math._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#line 24 "../lib/core/math.nit"


	/* Is rand shortcut? */
	static int nit_rand_seeded;
	/* Current rand seed if seeded */
	static unsigned int nit_rand_seed;

	#define NIT_RAND_MAX 0x7fffffff

	/* This algorithm is mentioned in the ISO C standard, here extended
	for 32 bits.  */
	static int
	nit_rand(void) {
		unsigned int next = nit_rand_seed;
		int result;

		next *= 1103515245;
		next += 12345;
		result = (unsigned int) (next / 65536) % 2048;

		next *= 1103515245;
		next += 12345;
		result <<= 10;
		result ^= (unsigned int) (next / 65536) % 1024;

		next *= 1103515245;
		next += 12345;
		result <<= 10;
		result ^= (unsigned int) (next / 65536) % 1024;

		nit_rand_seed = next;

		return result;
	}
int math___Float_is_nan___impl( double self )
{
#line 308 "../lib/core/math.nit"

 return isnan(self); }
long math___Int_band___impl( long self, long i )
{
#line 71 "../lib/core/math.nit"

 return self & i; }
long math___Int_bor___impl( long self, long i )
{
#line 78 "../lib/core/math.nit"

 return self | i; }
unsigned char math___Byte_band___impl( unsigned char self, unsigned char i )
{
#line 183 "../lib/core/math.nit"

 return self & i; }
int math___Float_native_is_inf___impl( double self )
{
#line 330 "../lib/core/math.nit"

 return isinf(self); }
void math___Sys_srand___impl( Sys self )
{
#line 558 "../lib/core/math.nit"

 nit_rand_seeded = 0; srand(time(NULL)); }
void math___Sys_srand_from___impl( Sys self, long x )
{
#line 553 "../lib/core/math.nit"

 nit_rand_seeded = 1; nit_rand_seed = x; }
