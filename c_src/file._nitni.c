#include "file._nitni.h"
#include "file_nit.h"
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
/* out/indirect function for file::NativeFileCapable::io_open_read */
val_t NativeFileCapable_io_open_read___out( val_t recv, val_t path )
{
NativeFileCapable recv___nitni;
char * path___nitni;
NativeFile return___nitni;
val_t return___nit;
recv___nitni = malloc( sizeof( struct s_NativeFileCapable ) );
recv___nitni->ref.val = NIT_NULL;
recv___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)recv___nitni );
recv___nitni->ref.val = recv;
path___nitni = UNBOX_NativeString(path);
return___nitni = file_NativeFileCapable_NativeFileCapable_io_open_read_1( recv___nitni, path___nitni );
return___nit = BOX_NativeFile(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::NativeFileCapable::io_open_write */
val_t NativeFileCapable_io_open_write___out( val_t recv, val_t path )
{
NativeFileCapable recv___nitni;
char * path___nitni;
NativeFile return___nitni;
val_t return___nit;
recv___nitni = malloc( sizeof( struct s_NativeFileCapable ) );
recv___nitni->ref.val = NIT_NULL;
recv___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)recv___nitni );
recv___nitni->ref.val = recv;
path___nitni = UNBOX_NativeString(path);
return___nitni = file_NativeFileCapable_NativeFileCapable_io_open_write_1( recv___nitni, path___nitni );
return___nit = BOX_NativeFile(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::NativeFileCapable::native_stdin */
val_t NativeFileCapable_native_stdin___out( val_t recv )
{
NativeFileCapable recv___nitni;
NativeFile return___nitni;
val_t return___nit;
recv___nitni = malloc( sizeof( struct s_NativeFileCapable ) );
recv___nitni->ref.val = NIT_NULL;
recv___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)recv___nitni );
recv___nitni->ref.val = recv;
return___nitni = file_NativeFileCapable_NativeFileCapable_native_stdin_0( recv___nitni );
return___nit = BOX_NativeFile(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::NativeFileCapable::native_stdout */
val_t NativeFileCapable_native_stdout___out( val_t recv )
{
NativeFileCapable recv___nitni;
NativeFile return___nitni;
val_t return___nit;
recv___nitni = malloc( sizeof( struct s_NativeFileCapable ) );
recv___nitni->ref.val = NIT_NULL;
recv___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)recv___nitni );
recv___nitni->ref.val = recv;
return___nitni = file_NativeFileCapable_NativeFileCapable_native_stdout_0( recv___nitni );
return___nit = BOX_NativeFile(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for file::NativeFileCapable::native_stderr */
val_t NativeFileCapable_native_stderr___out( val_t recv )
{
NativeFileCapable recv___nitni;
NativeFile return___nitni;
val_t return___nit;
recv___nitni = malloc( sizeof( struct s_NativeFileCapable ) );
recv___nitni->ref.val = NIT_NULL;
recv___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)recv___nitni );
recv___nitni->ref.val = recv;
return___nitni = file_NativeFileCapable_NativeFileCapable_native_stderr_0( recv___nitni );
return___nit = BOX_NativeFile(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
