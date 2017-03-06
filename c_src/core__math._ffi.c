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
int core__math___Float_is_nan___impl( double self )
{
#line 312 "../lib/core/math.nit"

 return isnan(self); }
int core__math___Float_native_is_inf___impl( double self )
{
#line 334 "../lib/core/math.nit"

 return isinf(self); }
void core__math___Sys_srand___impl( Sys self )
{
#line 573 "../lib/core/math.nit"

 nit_rand_seeded = 0; srand((unsigned int)time(NULL)); }
void core__math___Sys_srand_from___impl( Sys self, long x )
{
#line 568 "../lib/core/math.nit"

 nit_rand_seeded = 1; nit_rand_seed = (unsigned int)x; }
