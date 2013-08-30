/*
	Extern implementation of Nit module time
*/
#include "standard___time._ffi.h"

time_t new_TimeT___impl(  )
{
#line 34 "../lib/standard/time.nit"

 return time(NULL); }

time_t new_TimeT_from_i___impl( bigint i )
{
#line 35 "../lib/standard/time.nit"

 return i; }

void TimeT_update___impl( time_t recv )
{
#line 37 "../lib/standard/time.nit"

 time(&recv); }

String TimeT_ctime___impl( time_t recv )
{
#line 39 "../lib/standard/time.nit"


		return NativeString_to_s_with_copy( ctime(&recv) );
	}

float TimeT_difftime___impl( time_t recv, time_t start )
{
#line 44 "../lib/standard/time.nit"

 return difftime(recv, start); }

bigint TimeT_to_i___impl( time_t recv )
{
#line 47 "../lib/standard/time.nit"

 return (int)recv; }

struct tm * new_Tm_gmtime___impl(  )
{
#line 52 "../lib/standard/time.nit"


		struct tm *tm;
		time_t t = time(NULL);
		tm = gmtime(&t);
		return tm;
	}

struct tm * new_Tm_gmtime_from_timet___impl( time_t t )
{
#line 58 "../lib/standard/time.nit"


		struct tm *tm;
		tm = gmtime(&t);
		return tm;
	}

struct tm * new_Tm_localtime___impl(  )
{
#line 64 "../lib/standard/time.nit"


		struct tm *tm;
		time_t t = time(NULL);
		tm = localtime(&t);
		return tm;
	}

struct tm * new_Tm_localtime_from_timet___impl( time_t t )
{
#line 70 "../lib/standard/time.nit"


		struct tm *tm;
		tm = localtime(&t);
		return tm;
	}

time_t Tm_to_timet___impl( struct tm * recv )
{
#line 76 "../lib/standard/time.nit"

 return mktime(recv); }

bigint Tm_sec___impl( struct tm * recv )
{
#line 78 "../lib/standard/time.nit"

 return recv->tm_sec; }

bigint Tm_min___impl( struct tm * recv )
{
#line 79 "../lib/standard/time.nit"

 return recv->tm_min; }

bigint Tm_hour___impl( struct tm * recv )
{
#line 80 "../lib/standard/time.nit"

 return recv->tm_hour; }

bigint Tm_mday___impl( struct tm * recv )
{
#line 81 "../lib/standard/time.nit"

 return recv->tm_mday; }

bigint Tm_mon___impl( struct tm * recv )
{
#line 82 "../lib/standard/time.nit"

 return recv->tm_mon; }

bigint Tm_year___impl( struct tm * recv )
{
#line 83 "../lib/standard/time.nit"

 return recv->tm_year; }

bigint Tm_wday___impl( struct tm * recv )
{
#line 84 "../lib/standard/time.nit"

 return recv->tm_wday; }

bigint Tm_yday___impl( struct tm * recv )
{
#line 85 "../lib/standard/time.nit"

 return recv->tm_yday; }

int Tm_is_dst___impl( struct tm * recv )
{
#line 86 "../lib/standard/time.nit"

 return recv->tm_isdst; }

String Tm_asctime___impl( struct tm * recv )
{
#line 88 "../lib/standard/time.nit"


		return NativeString_to_s_with_copy( asctime(recv) );
	}

String Tm_strftime___impl( struct tm * recv, String format )
{
#line 91 "../lib/standard/time.nit"


		char* buf, *c_format;
		size_t res;

		buf = (char*)malloc(100);
		c_format = String_to_cstring(format);

		res = strftime(buf, 100, c_format, recv);
		return NativeString_to_s(buf);
	}
