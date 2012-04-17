#include "file._nitni.h"
#include "file_nit.h"
/* out/indirect function for file::String::files */
val_t String_files___out( val_t recv )
{
String recv___nitni;
Set return___nitni;
val_t return___nit;
recv___nitni = malloc( sizeof( struct s_String ) );
recv___nitni->ref.val = NIT_NULL;
recv___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)recv___nitni );
recv___nitni->ref.val = recv;
return___nitni = malloc( sizeof( struct s_Set ) );
return___nitni->ref.val = NIT_NULL;
return___nitni->ref.count = 0;
return___nitni = String_files___impl( recv___nitni );
return___nit = return___nitni->ref.val;
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::NativeString::file_exists */
val_t NativeString_file_exists___out( val_t recv )
{
char * recv___nitni;
int return___nitni;
val_t return___nit;
recv___nitni = UNBOX_NativeString(recv);
return___nitni = string_NativeString_NativeString_file_exists_0( recv___nitni );
return___nit = TAG_Bool(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::NativeString::file_stat */
val_t NativeString_file_stat___out( val_t recv )
{
char * recv___nitni;
FileStat return___nitni;
val_t return___nit;
recv___nitni = UNBOX_NativeString(recv);
return___nitni = string_NativeString_NativeString_file_stat_0( recv___nitni );
return___nit = BOX_FileStat(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::NativeString::file_mkdir */
val_t NativeString_file_mkdir___out( val_t recv )
{
char * recv___nitni;
int return___nitni;
val_t return___nit;
recv___nitni = UNBOX_NativeString(recv);
return___nitni = string_NativeString_NativeString_file_mkdir_0( recv___nitni );
return___nit = TAG_Bool(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::NativeString::file_delete */
val_t NativeString_file_delete___out( val_t recv )
{
char * recv___nitni;
int return___nitni;
val_t return___nit;
recv___nitni = UNBOX_NativeString(recv);
return___nitni = string_NativeString_NativeString_file_delete_0( recv___nitni );
return___nit = TAG_Bool(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::FileStat::mode */
val_t FileStat_mode___out( val_t recv )
{
FileStat recv___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni = UNBOX_FileStat(recv);
return___nitni = file_FileStat_FileStat_mode_0( recv___nitni );
return___nit = TAG_Int(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::FileStat::atime */
val_t FileStat_atime___out( val_t recv )
{
FileStat recv___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni = UNBOX_FileStat(recv);
return___nitni = file_FileStat_FileStat_atime_0( recv___nitni );
return___nit = TAG_Int(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::FileStat::ctime */
val_t FileStat_ctime___out( val_t recv )
{
FileStat recv___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni = UNBOX_FileStat(recv);
return___nitni = file_FileStat_FileStat_ctime_0( recv___nitni );
return___nit = TAG_Int(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::FileStat::mtime */
val_t FileStat_mtime___out( val_t recv )
{
FileStat recv___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni = UNBOX_FileStat(recv);
return___nitni = file_FileStat_FileStat_mtime_0( recv___nitni );
return___nit = TAG_Int(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::FileStat::size */
val_t FileStat_size___out( val_t recv )
{
FileStat recv___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni = UNBOX_FileStat(recv);
return___nitni = file_FileStat_FileStat_size_0( recv___nitni );
return___nit = TAG_Int(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::NativeFile::io_read */
val_t NativeFile_io_read___out( val_t recv, val_t buf, val_t len )
{
NativeFile recv___nitni;
char * buf___nitni;
bigint len___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni = UNBOX_NativeFile(recv);
buf___nitni = UNBOX_NativeString(buf);
len___nitni = UNTAG_Int(len);
return___nitni = file_NativeFile_NativeFile_io_read_2( recv___nitni, buf___nitni, len___nitni );
return___nit = TAG_Int(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::NativeFile::io_write */
val_t NativeFile_io_write___out( val_t recv, val_t buf, val_t len )
{
NativeFile recv___nitni;
char * buf___nitni;
bigint len___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni = UNBOX_NativeFile(recv);
buf___nitni = UNBOX_NativeString(buf);
len___nitni = UNTAG_Int(len);
return___nitni = file_NativeFile_NativeFile_io_write_2( recv___nitni, buf___nitni, len___nitni );
return___nit = TAG_Int(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::NativeFile::io_close */
val_t NativeFile_io_close___out( val_t recv )
{
NativeFile recv___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni = UNBOX_NativeFile(recv);
return___nitni = file_NativeFile_NativeFile_io_close_0( recv___nitni );
return___nit = TAG_Int(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::NativeFile::file_stat */
val_t NativeFile_file_stat___out( val_t recv )
{
NativeFile recv___nitni;
FileStat return___nitni;
val_t return___nit;
recv___nitni = UNBOX_NativeFile(recv);
return___nitni = file_NativeFile_NativeFile_file_stat_0( recv___nitni );
return___nit = BOX_FileStat(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::NativeFile::io_open_read */
val_t NEW_NativeFile_standard___file___NativeFile___io_open_read( val_t path )
{
char * path___nitni;
NativeFile return___nitni;
val_t return___nit;
path___nitni = UNBOX_NativeString(path);
return___nitni = file_NativeFileCapable_NativeFileCapable_io_open_read_1( path___nitni );
return___nit = BOX_NativeFile(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::NativeFile::io_open_write */
val_t NEW_NativeFile_standard___file___NativeFile___io_open_write( val_t path )
{
char * path___nitni;
NativeFile return___nitni;
val_t return___nit;
path___nitni = UNBOX_NativeString(path);
return___nitni = file_NativeFileCapable_NativeFileCapable_io_open_write_1( path___nitni );
return___nit = BOX_NativeFile(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::NativeFile::native_stdin */
val_t NEW_NativeFile_standard___file___NativeFile___native_stdin(  )
{
NativeFile return___nitni;
val_t return___nit;
return___nitni = file_NativeFileCapable_NativeFileCapable_native_stdin_0(  );
return___nit = BOX_NativeFile(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::NativeFile::native_stdout */
val_t NEW_NativeFile_standard___file___NativeFile___native_stdout(  )
{
NativeFile return___nitni;
val_t return___nit;
return___nitni = file_NativeFileCapable_NativeFileCapable_native_stdout_0(  );
return___nit = BOX_NativeFile(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::NativeFile::native_stderr */
val_t NEW_NativeFile_standard___file___NativeFile___native_stderr(  )
{
NativeFile return___nitni;
val_t return___nit;
return___nitni = file_NativeFileCapable_NativeFileCapable_native_stderr_0(  );
return___nit = BOX_NativeFile(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* friendly for hash_collection::HashSet::init */
HashSet file_new_HashSet(  )
{
HashSet result___nitni;
val_t result___nit;
result___nitni = malloc( sizeof( struct s_HashSet ) );
result___nitni->ref.val = NIT_NULL;
result___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)result___nitni );
result___nit = NEW_HashSet_standard___collection___hash_collection___HashSet___init(  );
result___nitni->ref.val = result___nit;
return result___nitni;
}
/* friendly for hash_collection::HashSet::(abstract_collection::SimpleCollection::add) */
void file_HashSet_add( HashSet recv, Object item )
{
val_t recv___nit;
val_t item___nit;
recv___nit = recv->ref.val;
item___nit = item->ref.val;
CALL_standard___collection___abstract_collection___SimpleCollection___add( recv___nit )( recv___nit, item___nit );
}
/* friendly for string::String::from_cstring */
String file_new_String_from_cstring( char * str )
{
val_t str___nit;
String result___nitni;
val_t result___nit;
str___nit = BOX_NativeString(str);
result___nitni = malloc( sizeof( struct s_String ) );
result___nitni->ref.val = NIT_NULL;
result___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)result___nitni );
result___nit = NEW_String_standard___string___String___from_cstring( str___nit );
result___nitni->ref.val = result___nit;
return result___nitni;
}
/* friendly for string::String::to_cstring */
char * file_String_to_cstring( String recv )
{
val_t recv___nit;
char * result___nitni;
val_t result___nit;
recv___nit = recv->ref.val;
result___nit = CALL_standard___string___String___to_cstring( recv___nit )( recv___nit );
result___nitni = UNBOX_NativeString(result___nit);
return result___nitni;
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
