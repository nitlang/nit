/*
	Extern implementation of Nit module time
*/
#ifndef TIME_NIT_H
#define TIME_NIT_H

#include "time._nitni.h"
#line 18 "lib/standard/time.nit"

	#include <time.h>
#include "math._ffi.h"
time_t time___new_TimeT___impl(  );
time_t time___new_TimeT_from_i___impl( int i );
void time___TimeT_update___impl( time_t recv );
String time___TimeT_ctime___impl( time_t recv );
double time___TimeT_difftime___impl( time_t recv, time_t start );
int time___TimeT_to_i___impl( time_t recv );
struct tm * time___new_Tm_gmtime___impl(  );
struct tm * time___new_Tm_gmtime_from_timet___impl( time_t t );
struct tm * time___new_Tm_localtime___impl(  );
struct tm * time___new_Tm_localtime_from_timet___impl( time_t t );
time_t time___Tm_to_timet___impl( struct tm * recv );
int time___Tm_sec___impl( struct tm * recv );
int time___Tm_min___impl( struct tm * recv );
int time___Tm_hour___impl( struct tm * recv );
int time___Tm_mday___impl( struct tm * recv );
int time___Tm_mon___impl( struct tm * recv );
int time___Tm_year___impl( struct tm * recv );
int time___Tm_wday___impl( struct tm * recv );
int time___Tm_yday___impl( struct tm * recv );
int time___Tm_is_dst___impl( struct tm * recv );
String time___Tm_asctime___impl( struct tm * recv );
String time___Tm_strftime___impl( struct tm * recv, String format );
#endif
