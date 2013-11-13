#include <nit_common.h>
#include "standard___time._sep.h"
#ifndef TIME_NITNI_H
#define TIME_NITNI_H

#ifndef OBJECT_TYPE
#define OBJECT_TYPE
struct s_Object{
		struct nitni_ref ref; /* real ref struct, must be first */
};
typedef struct s_Object *Object;
#define Object_incr_ref( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )
#define Object_decr_ref( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )
#endif
#ifndef SYS_TYPE
#define SYS_TYPE
struct s_Sys{
		struct nitni_ref ref; /* real ref struct, must be first */
};
typedef struct s_Sys *Sys;
#define Sys_incr_ref( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )
#define Sys_decr_ref( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )
#endif
#ifndef STRING_TYPE
#define STRING_TYPE
struct s_String{
		struct nitni_ref ref; /* real ref struct, must be first */
};
typedef struct s_String *String;
#define String_incr_ref( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )
#define String_decr_ref( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )
#endif
#include "time_nit.h"
#include <standard___time._ffi.h>

/* out/indirect function for time::Object::get_time */
val_t Object_get_time___out( val_t recv );

/* out/indirect function for time::Sys::nanosleep */
void Sys_nanosleep___out( val_t recv, val_t sec, val_t nanosec );

/* out/indirect function for time::TimeT::init */
val_t NEW_TimeT_standard___time___TimeT___init(  );

/* out/indirect function for time::TimeT::from_i */
val_t NEW_TimeT_standard___time___TimeT___from_i( val_t i );

/* out/indirect function for time::TimeT::update */
void TimeT_update___out( val_t recv );

/* out/indirect function for time::TimeT::ctime */
val_t TimeT_ctime___out( val_t recv );

/* out/indirect function for time::TimeT::difftime */
val_t TimeT_difftime___out( val_t recv, val_t start );

/* out/indirect function for time::TimeT::to_i */
val_t TimeT_to_i___out( val_t recv );

/* out/indirect function for time::Tm::gmtime */
val_t NEW_Tm_standard___time___Tm___gmtime(  );

/* out/indirect function for time::Tm::gmtime_from_timet */
val_t NEW_Tm_standard___time___Tm___gmtime_from_timet( val_t t );

/* out/indirect function for time::Tm::localtime */
val_t NEW_Tm_standard___time___Tm___localtime(  );

/* out/indirect function for time::Tm::localtime_from_timet */
val_t NEW_Tm_standard___time___Tm___localtime_from_timet( val_t t );

/* out/indirect function for time::Tm::to_timet */
val_t Tm_to_timet___out( val_t recv );

/* out/indirect function for time::Tm::sec */
val_t Tm_sec___out( val_t recv );

/* out/indirect function for time::Tm::min */
val_t Tm_min___out( val_t recv );

/* out/indirect function for time::Tm::hour */
val_t Tm_hour___out( val_t recv );

/* out/indirect function for time::Tm::mday */
val_t Tm_mday___out( val_t recv );

/* out/indirect function for time::Tm::mon */
val_t Tm_mon___out( val_t recv );

/* out/indirect function for time::Tm::year */
val_t Tm_year___out( val_t recv );

/* out/indirect function for time::Tm::wday */
val_t Tm_wday___out( val_t recv );

/* out/indirect function for time::Tm::yday */
val_t Tm_yday___out( val_t recv );

/* out/indirect function for time::Tm::is_dst */
val_t Tm_is_dst___out( val_t recv );

/* out/indirect function for time::Tm::asctime */
val_t Tm_asctime___out( val_t recv );

/* out/indirect function for time::Tm::strftime */
val_t Tm_strftime___out( val_t recv, val_t format );
/* friendly for string::NativeString::to_s_with_copy */
String time_NativeString_to_s_with_copy( char * recv );
#ifndef NativeString_to_s_with_copy
#define NativeString_to_s_with_copy time_NativeString_to_s_with_copy
#endif
/* friendly for string::String::to_cstring */
char * time_String_to_cstring( String recv );
#ifndef String_to_cstring
#define String_to_cstring time_String_to_cstring
#endif
/* friendly for string::NativeString::(string::Object::to_s) */
String time_NativeString_to_s( char * recv );
#ifndef NativeString_to_s
#define NativeString_to_s time_NativeString_to_s
#endif
#endif
