/*
	Extern implementation of Nit module time
*/
#include <time._nitni.h>

#ifndef STANDARD___TIME_NIT_H
#define STANDARD___TIME_NIT_H


	#include <time.h>
time_t new_TimeT___impl(  );
time_t new_TimeT_from_i___impl( bigint i );
void TimeT_update___impl( time_t recv );
String TimeT_ctime___impl( time_t recv );
float TimeT_difftime___impl( time_t recv, time_t start );
bigint TimeT_to_i___impl( time_t recv );
struct tm * new_Tm_gmtime___impl(  );
struct tm * new_Tm_gmtime_from_timet___impl( time_t t );
struct tm * new_Tm_localtime___impl(  );
struct tm * new_Tm_localtime_from_timet___impl( time_t t );
time_t Tm_to_timet___impl( struct tm * recv );
bigint Tm_sec___impl( struct tm * recv );
bigint Tm_min___impl( struct tm * recv );
bigint Tm_hour___impl( struct tm * recv );
bigint Tm_mday___impl( struct tm * recv );
bigint Tm_mon___impl( struct tm * recv );
bigint Tm_year___impl( struct tm * recv );
bigint Tm_wday___impl( struct tm * recv );
bigint Tm_yday___impl( struct tm * recv );
int Tm_is_dst___impl( struct tm * recv );
String Tm_asctime___impl( struct tm * recv );
String Tm_strftime___impl( struct tm * recv, String format );
#endif
