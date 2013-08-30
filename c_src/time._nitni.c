#include "time._nitni.h"
#include "time_nit.h"
/* out/indirect function for time::Object::get_time */
val_t Object_get_time___out( val_t recv )
{
bigint orig_return;
val_t trans_return;
orig_return = kernel_Any_Any_get_time_0( NULL );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::Sys::nanosleep */
void Sys_nanosleep___out( val_t recv, val_t sec, val_t nanosec )
{
std_nanosleep( NULL, UNTAG_Int(sec), UNTAG_Int(nanosec) );
nitni_local_ref_clean(  );
}
/* out/indirect function for time::TimeT::init */
val_t NEW_TimeT_standard___time___TimeT___init(  )
{
time_t orig_return;
val_t trans_return;
orig_return = new_TimeT___impl(  );
trans_return = BOX_TimeT(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::TimeT::from_i */
val_t NEW_TimeT_standard___time___TimeT___from_i( val_t i )
{
time_t orig_return;
val_t trans_return;
orig_return = new_TimeT_from_i___impl( UNTAG_Int(i) );
trans_return = BOX_TimeT(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::TimeT::update */
void TimeT_update___out( val_t recv )
{
time_t trans_recv;
trans_recv = UNBOX_TimeT(recv);
TimeT_update___impl( trans_recv );
nitni_local_ref_clean(  );
}
/* out/indirect function for time::TimeT::ctime */
val_t TimeT_ctime___out( val_t recv )
{
time_t trans_recv;
String orig_return;
val_t trans_return;
trans_recv = UNBOX_TimeT(recv);
orig_return = malloc( sizeof( struct s_String ) );
orig_return->ref.val = NIT_NULL;
orig_return->ref.count = 0;
orig_return = TimeT_ctime___impl( trans_recv );
trans_return = orig_return->ref.val;
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::TimeT::difftime */
val_t TimeT_difftime___out( val_t recv, val_t start )
{
time_t trans_recv;
time_t trans___start;
float orig_return;
val_t trans_return;
trans_recv = UNBOX_TimeT(recv);
trans___start = UNBOX_TimeT(start);
orig_return = TimeT_difftime___impl( trans_recv, trans___start );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::TimeT::to_i */
val_t TimeT_to_i___out( val_t recv )
{
time_t trans_recv;
bigint orig_return;
val_t trans_return;
trans_recv = UNBOX_TimeT(recv);
orig_return = TimeT_to_i___impl( trans_recv );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::Tm::gmtime */
val_t NEW_Tm_standard___time___Tm___gmtime(  )
{
struct tm * orig_return;
val_t trans_return;
orig_return = new_Tm_gmtime___impl(  );
trans_return = BOX_Tm(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::Tm::gmtime_from_timet */
val_t NEW_Tm_standard___time___Tm___gmtime_from_timet( val_t t )
{
time_t trans___t;
struct tm * orig_return;
val_t trans_return;
trans___t = UNBOX_TimeT(t);
orig_return = new_Tm_gmtime_from_timet___impl( trans___t );
trans_return = BOX_Tm(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::Tm::localtime */
val_t NEW_Tm_standard___time___Tm___localtime(  )
{
struct tm * orig_return;
val_t trans_return;
orig_return = new_Tm_localtime___impl(  );
trans_return = BOX_Tm(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::Tm::localtime_from_timet */
val_t NEW_Tm_standard___time___Tm___localtime_from_timet( val_t t )
{
time_t trans___t;
struct tm * orig_return;
val_t trans_return;
trans___t = UNBOX_TimeT(t);
orig_return = new_Tm_localtime_from_timet___impl( trans___t );
trans_return = BOX_Tm(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::Tm::to_timet */
val_t Tm_to_timet___out( val_t recv )
{
struct tm * trans_recv;
time_t orig_return;
val_t trans_return;
trans_recv = UNBOX_Tm(recv);
orig_return = Tm_to_timet___impl( trans_recv );
trans_return = BOX_TimeT(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::Tm::sec */
val_t Tm_sec___out( val_t recv )
{
struct tm * trans_recv;
bigint orig_return;
val_t trans_return;
trans_recv = UNBOX_Tm(recv);
orig_return = Tm_sec___impl( trans_recv );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::Tm::min */
val_t Tm_min___out( val_t recv )
{
struct tm * trans_recv;
bigint orig_return;
val_t trans_return;
trans_recv = UNBOX_Tm(recv);
orig_return = Tm_min___impl( trans_recv );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::Tm::hour */
val_t Tm_hour___out( val_t recv )
{
struct tm * trans_recv;
bigint orig_return;
val_t trans_return;
trans_recv = UNBOX_Tm(recv);
orig_return = Tm_hour___impl( trans_recv );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::Tm::mday */
val_t Tm_mday___out( val_t recv )
{
struct tm * trans_recv;
bigint orig_return;
val_t trans_return;
trans_recv = UNBOX_Tm(recv);
orig_return = Tm_mday___impl( trans_recv );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::Tm::mon */
val_t Tm_mon___out( val_t recv )
{
struct tm * trans_recv;
bigint orig_return;
val_t trans_return;
trans_recv = UNBOX_Tm(recv);
orig_return = Tm_mon___impl( trans_recv );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::Tm::year */
val_t Tm_year___out( val_t recv )
{
struct tm * trans_recv;
bigint orig_return;
val_t trans_return;
trans_recv = UNBOX_Tm(recv);
orig_return = Tm_year___impl( trans_recv );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::Tm::wday */
val_t Tm_wday___out( val_t recv )
{
struct tm * trans_recv;
bigint orig_return;
val_t trans_return;
trans_recv = UNBOX_Tm(recv);
orig_return = Tm_wday___impl( trans_recv );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::Tm::yday */
val_t Tm_yday___out( val_t recv )
{
struct tm * trans_recv;
bigint orig_return;
val_t trans_return;
trans_recv = UNBOX_Tm(recv);
orig_return = Tm_yday___impl( trans_recv );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::Tm::is_dst */
val_t Tm_is_dst___out( val_t recv )
{
struct tm * trans_recv;
int orig_return;
val_t trans_return;
trans_recv = UNBOX_Tm(recv);
orig_return = Tm_is_dst___impl( trans_recv );
trans_return = TAG_Bool(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::Tm::asctime */
val_t Tm_asctime___out( val_t recv )
{
struct tm * trans_recv;
String orig_return;
val_t trans_return;
trans_recv = UNBOX_Tm(recv);
orig_return = malloc( sizeof( struct s_String ) );
orig_return->ref.val = NIT_NULL;
orig_return->ref.count = 0;
orig_return = Tm_asctime___impl( trans_recv );
trans_return = orig_return->ref.val;
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for time::Tm::strftime */
val_t Tm_strftime___out( val_t recv, val_t format )
{
struct tm * trans_recv;
String trans___format;
String orig_return;
val_t trans_return;
trans_recv = UNBOX_Tm(recv);
trans___format = malloc( sizeof( struct s_String ) );
trans___format->ref.val = NIT_NULL;
trans___format->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)trans___format );
trans___format->ref.val = format;
orig_return = malloc( sizeof( struct s_String ) );
orig_return->ref.val = NIT_NULL;
orig_return->ref.count = 0;
orig_return = Tm_strftime___impl( trans_recv, trans___format );
trans_return = orig_return->ref.val;
nitni_local_ref_clean(  );
return trans_return;
}
/* friendly for string::NativeString::to_s_with_copy */
String time_NativeString_to_s_with_copy( char * recv )
{
val_t trans_recv;
val_t orig_return;
String trans_return;
trans_recv = BOX_NativeString(recv);
trans_return = malloc( sizeof( struct s_String ) );
trans_return->ref.val = NIT_NULL;
trans_return->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)trans_return );
orig_return = CALL_standard___string___NativeString___to_s_with_copy( trans_recv )( trans_recv );
trans_return->ref.val = orig_return;
return trans_return;
}
/* friendly for string::String::to_cstring */
char * time_String_to_cstring( String recv )
{
val_t trans_recv;
val_t orig_return;
char * trans_return;
trans_recv = recv->ref.val;
orig_return = CALL_standard___string___String___to_cstring( trans_recv )( trans_recv );
trans_return = UNBOX_NativeString(orig_return);
return trans_return;
}
/* friendly for string::NativeString::(string::Object::to_s) */
String time_NativeString_to_s( char * recv )
{
val_t trans_recv;
val_t orig_return;
String trans_return;
trans_recv = BOX_NativeString(recv);
trans_return = malloc( sizeof( struct s_String ) );
trans_return->ref.val = NIT_NULL;
trans_return->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)trans_return );
orig_return = CALL_standard___string___Object___to_s( trans_recv )( trans_recv );
trans_return->ref.val = orig_return;
return trans_return;
}
