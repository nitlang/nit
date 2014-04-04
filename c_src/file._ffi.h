/*
	Extern implementation of Nit module file
*/
#ifndef FILE_NIT_H
#define FILE_NIT_H

#include "file._nitni.h"
#line 23 "lib/standard/file.nit"

	#include <dirent.h>
	#include <string.h>
	#include <sys/types.h>
	#include <sys/stat.h>
	#include <unistd.h>
#include "math._ffi.h"
#include "math._ffi.h"
#include "time._ffi.h"
Set_of_String file___String_files___impl( String recv );
 struct stat *  file___NativeString_file_lstat___impl( char* recv );
int file___FileStat_is_reg___impl(  struct stat *  recv );
int file___FileStat_is_dir___impl(  struct stat *  recv );
int file___FileStat_is_chr___impl(  struct stat *  recv );
int file___FileStat_is_blk___impl(  struct stat *  recv );
int file___FileStat_is_fifo___impl(  struct stat *  recv );
int file___FileStat_is_lnk___impl(  struct stat *  recv );
int file___FileStat_is_sock___impl(  struct stat *  recv );
#endif
