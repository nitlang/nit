#include <nit_common.h>
#include "file._sep.h"
#ifndef FILE_NITNI_H
#define FILE_NITNI_H

#ifndef NATIVEFILECAPABLE_TYPE
#define NATIVEFILECAPABLE_TYPE
typedef struct s_NativeFileCapable{
	val_t v;
} NativeFileCapable;
#endif

#include "file_nit.h"

/* out/indirect function for file::NativeString::file_exists */
val_t NativeString_file_exists___out( val_t recv );

/* out/indirect function for file::NativeString::file_stat */
val_t NativeString_file_stat___out( val_t recv );

/* out/indirect function for file::NativeString::file_mkdir */
val_t NativeString_file_mkdir___out( val_t recv );

/* out/indirect function for file::NativeString::file_delete */
val_t NativeString_file_delete___out( val_t recv );

/* out/indirect function for file::FileStat::mode */
val_t FileStat_mode___out( val_t recv );

/* out/indirect function for file::FileStat::atime */
val_t FileStat_atime___out( val_t recv );

/* out/indirect function for file::FileStat::ctime */
val_t FileStat_ctime___out( val_t recv );

/* out/indirect function for file::FileStat::mtime */
val_t FileStat_mtime___out( val_t recv );

/* out/indirect function for file::FileStat::size */
val_t FileStat_size___out( val_t recv );
#ifndef FileStat
	typedef void* FileStat;
#endif


/* out/indirect function for file::NativeFile::io_read */
val_t NativeFile_io_read___out( val_t recv, val_t buf, val_t len );

/* out/indirect function for file::NativeFile::io_write */
val_t NativeFile_io_write___out( val_t recv, val_t buf, val_t len );

/* out/indirect function for file::NativeFile::io_close */
val_t NativeFile_io_close___out( val_t recv );

/* out/indirect function for file::NativeFile::file_stat */
val_t NativeFile_file_stat___out( val_t recv );
#ifndef NativeFile
	typedef void* NativeFile;
#endif


/* out/indirect function for file::NativeFileCapable::io_open_read */
val_t NativeFileCapable_io_open_read___out( val_t recv, val_t path );

/* out/indirect function for file::NativeFileCapable::io_open_write */
val_t NativeFileCapable_io_open_write___out( val_t recv, val_t path );

/* out/indirect function for file::NativeFileCapable::native_stdin */
val_t NativeFileCapable_native_stdin___out( val_t recv );

/* out/indirect function for file::NativeFileCapable::native_stdout */
val_t NativeFileCapable_native_stdout___out( val_t recv );

/* out/indirect function for file::NativeFileCapable::native_stderr */
val_t NativeFileCapable_native_stderr___out( val_t recv );
#endif
