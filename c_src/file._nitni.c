#include "file._nitni.h"
#include "file_nit.h"
/* out/indirect function for file::Stdin::poll_in */
val_t Stdin_poll_in___out( val_t recv )
{
int orig_return;
val_t trans_return;
orig_return = file_stdin_poll_in( NULL );
trans_return = TAG_Bool(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for file::String::files */
val_t String_files___out( val_t recv )
{
String trans_recv;
Set orig_return;
val_t trans_return;
trans_recv = malloc( sizeof( struct s_String ) );
trans_recv->ref.val = NIT_NULL;
trans_recv->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)trans_recv );
trans_recv->ref.val = recv;
orig_return = malloc( sizeof( struct s_Set ) );
orig_return->ref.val = NIT_NULL;
orig_return->ref.count = 0;
orig_return = String_files___impl( trans_recv );
trans_return = orig_return->ref.val;
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for file::NativeString::file_exists */
val_t NativeString_file_exists___out( val_t recv )
{
int orig_return;
val_t trans_return;
orig_return = string_NativeString_NativeString_file_exists_0( UNBOX_NativeString(recv) );
trans_return = TAG_Bool(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for file::NativeString::file_stat */
val_t NativeString_file_stat___out( val_t recv )
{
void* orig_return;
val_t trans_return;
orig_return = string_NativeString_NativeString_file_stat_0( UNBOX_NativeString(recv) );
trans_return = BOX_FileStat(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for file::NativeString::file_mkdir */
val_t NativeString_file_mkdir___out( val_t recv )
{
int orig_return;
val_t trans_return;
orig_return = string_NativeString_NativeString_file_mkdir_0( UNBOX_NativeString(recv) );
trans_return = TAG_Bool(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for file::NativeString::file_delete */
val_t NativeString_file_delete___out( val_t recv )
{
int orig_return;
val_t trans_return;
orig_return = string_NativeString_NativeString_file_delete_0( UNBOX_NativeString(recv) );
trans_return = TAG_Bool(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for file::FileStat::mode */
val_t FileStat_mode___out( val_t recv )
{
bigint orig_return;
val_t trans_return;
orig_return = file_FileStat_FileStat_mode_0( UNBOX_FileStat(recv) );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for file::FileStat::atime */
val_t FileStat_atime___out( val_t recv )
{
bigint orig_return;
val_t trans_return;
orig_return = file_FileStat_FileStat_atime_0( UNBOX_FileStat(recv) );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for file::FileStat::ctime */
val_t FileStat_ctime___out( val_t recv )
{
bigint orig_return;
val_t trans_return;
orig_return = file_FileStat_FileStat_ctime_0( UNBOX_FileStat(recv) );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for file::FileStat::mtime */
val_t FileStat_mtime___out( val_t recv )
{
bigint orig_return;
val_t trans_return;
orig_return = file_FileStat_FileStat_mtime_0( UNBOX_FileStat(recv) );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for file::FileStat::size */
val_t FileStat_size___out( val_t recv )
{
bigint orig_return;
val_t trans_return;
orig_return = file_FileStat_FileStat_size_0( UNBOX_FileStat(recv) );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for file::NativeFile::io_read */
val_t NativeFile_io_read___out( val_t recv, val_t buf, val_t len )
{
bigint trans___len;
bigint orig_return;
val_t trans_return;
trans___len = UNTAG_Int(len);
orig_return = file_NativeFile_NativeFile_io_read_2( UNBOX_NativeFile(recv), UNBOX_NativeString(buf), trans___len );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for file::NativeFile::io_write */
val_t NativeFile_io_write___out( val_t recv, val_t buf, val_t len )
{
bigint trans___len;
bigint orig_return;
val_t trans_return;
trans___len = UNTAG_Int(len);
orig_return = file_NativeFile_NativeFile_io_write_2( UNBOX_NativeFile(recv), UNBOX_NativeString(buf), trans___len );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for file::NativeFile::io_close */
val_t NativeFile_io_close___out( val_t recv )
{
bigint orig_return;
val_t trans_return;
orig_return = file_NativeFile_NativeFile_io_close_0( UNBOX_NativeFile(recv) );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for file::NativeFile::file_stat */
val_t NativeFile_file_stat___out( val_t recv )
{
void* orig_return;
val_t trans_return;
orig_return = file_NativeFile_NativeFile_file_stat_0( UNBOX_NativeFile(recv) );
trans_return = BOX_FileStat(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for file::NativeFile::io_open_read */
val_t NEW_NativeFile_standard___file___NativeFile___io_open_read( val_t path )
{
void* orig_return;
val_t trans_return;
orig_return = file_NativeFileCapable_NativeFileCapable_io_open_read_1( UNBOX_NativeString(path) );
trans_return = BOX_NativeFile(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for file::NativeFile::io_open_write */
val_t NEW_NativeFile_standard___file___NativeFile___io_open_write( val_t path )
{
void* orig_return;
val_t trans_return;
orig_return = file_NativeFileCapable_NativeFileCapable_io_open_write_1( UNBOX_NativeString(path) );
trans_return = BOX_NativeFile(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for file::NativeFile::native_stdin */
val_t NEW_NativeFile_standard___file___NativeFile___native_stdin(  )
{
void* orig_return;
val_t trans_return;
orig_return = file_NativeFileCapable_NativeFileCapable_native_stdin_0(  );
trans_return = BOX_NativeFile(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for file::NativeFile::native_stdout */
val_t NEW_NativeFile_standard___file___NativeFile___native_stdout(  )
{
void* orig_return;
val_t trans_return;
orig_return = file_NativeFileCapable_NativeFileCapable_native_stdout_0(  );
trans_return = BOX_NativeFile(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for file::NativeFile::native_stderr */
val_t NEW_NativeFile_standard___file___NativeFile___native_stderr(  )
{
void* orig_return;
val_t trans_return;
orig_return = file_NativeFileCapable_NativeFileCapable_native_stderr_0(  );
trans_return = BOX_NativeFile(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* friendly for hash_collection::HashSet::init */
HashSet file_new_HashSet(  )
{
val_t orig_return;
HashSet trans_return;
trans_return = malloc( sizeof( struct s_HashSet ) );
trans_return->ref.val = NIT_NULL;
trans_return->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)trans_return );
orig_return = NEW_HashSet_standard___collection___hash_collection___HashSet___init(  );
trans_return->ref.val = orig_return;
return trans_return;
}
/* friendly for hash_collection::HashSet::(abstract_collection::SimpleCollection::add) */
void file_HashSet_add( HashSet recv, Object item )
{
val_t trans_recv;
val_t trans___item;
trans_recv = recv->ref.val;
trans___item = item->ref.val;
CALL_standard___collection___abstract_collection___SimpleCollection___add( trans_recv )( trans_recv, trans___item );
}
/* friendly for string::String::from_cstring */
String file_new_String_from_cstring( char * str )
{
val_t orig_return;
String trans_return;
trans_return = malloc( sizeof( struct s_String ) );
trans_return->ref.val = NIT_NULL;
trans_return->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)trans_return );
orig_return = NEW_String_standard___string___String___from_cstring( BOX_NativeString(str) );
trans_return->ref.val = orig_return;
return trans_return;
}
/* friendly for string::String::to_cstring */
char * file_String_to_cstring( String recv )
{
val_t trans_recv;
val_t orig_return;
char * trans_return;
trans_recv = recv->ref.val;
orig_return = CALL_standard___string___String___to_cstring( trans_recv )( trans_recv );
trans_return = UNBOX_NativeString(orig_return);
return trans_return;
}
int file_HashSet_is_a_Set( HashSet value )
{
val_t temp;
temp = value->ref.val;
if ( ! ( ISOBJ( temp ) ? OBJISA( temp, standard___collection___abstract_collection___Set ): VALISA( temp, standard___collection___abstract_collection___Set ) ) ) return 0;
return 1;
}
Set file_HashSet_as_Set( HashSet value )
{
val_t temp;
Set out;
out = malloc( sizeof( struct s_Set ) );
out->ref.val = NIT_NULL;
out->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)out );
temp = value->ref.val;
if ( ISNULL(temp) ){	fprintf( stderr, "Casting from HashSet[String] to Set[String] failed because value is null." );
	abort();
}if ( ! ( ISOBJ( temp ) ? OBJISA( temp, standard___collection___abstract_collection___Set ): VALISA( temp, standard___collection___abstract_collection___Set ) ) ){
	fprintf( stderr, "Casting to Set[String] failed because value is not a Set[String]." );
	abort();
}
out->ref.val = temp;
return out;
}
int file_String_is_a_Object( String value )
{
val_t temp;
temp = value->ref.val;
if ( ! ( ISOBJ( temp ) ? OBJISA( temp, standard___kernel___Object ): VALISA( temp, standard___kernel___Object ) ) ) return 0;
return 1;
}
Object file_String_as_Object( String value )
{
val_t temp;
Object out;
out = malloc( sizeof( struct s_Object ) );
out->ref.val = NIT_NULL;
out->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)out );
temp = value->ref.val;
if ( ISNULL(temp) ){	fprintf( stderr, "Casting from String to Object failed because value is null." );
	abort();
}if ( ! ( ISOBJ( temp ) ? OBJISA( temp, standard___kernel___Object ): VALISA( temp, standard___kernel___Object ) ) ){
	fprintf( stderr, "Casting to Object failed because value is not a Object." );
	abort();
}
out->ref.val = temp;
return out;
}
