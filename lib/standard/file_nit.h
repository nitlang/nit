#ifndef __FILE_H
#define __FILE_H
/* This file is part of NIT ( http://www.nitlanguage.org ).
 *
 * Copyright 2004-2008 Jean Privat <jean@pryen.org>
 * Copyright 2008 Floréal Morandat <morandat@lirmm.fr> 
 * Copyright 2008 Jean-Sébastien Gélinas <calestar@gmail.com>
 *
 * This file is free software, which comes along with NIT.  This software is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
 * PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
 * is kept unaltered, and a notification of the changes is added.
 * You  are  allowed  to  redistribute it and sell it, alone or is a part of
 * another product.
 */

#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

extern int string_NativeString_NativeString_file_exists_0(char *f);
extern void *string_NativeString_NativeString_file_stat_0(char *f);
extern void *file_NativeFile_NativeFile_file_stat_0(FILE *f);
extern int string_NativeString_NativeString_file_delete_0(char *f);
FILE* file_int_fdtostream(int fd, char* mode);

#define file_NativeFile_NativeFile_io_read_2(p, b, l) fread((b), 1, (l), (FILE*)(p))
#define file_NativeFile_NativeFile_io_write_2(p, b, l) fwrite((b), 1, (l), (FILE*)(p))
#define file_NativeFile_NativeFile_io_close_0(self) fclose((FILE*)(self))

#define file_NativeFileCapable_NativeFileCapable_io_open_read_1(p0) fopen((p0), "r")

#define file_NativeFileCapable_NativeFileCapable_io_open_write_1(p0) fopen((p0), "w")
#define file_NativeFileCapable_NativeFileCapable_native_stdin_0() stdin
#define file_NativeFileCapable_NativeFileCapable_native_stdout_0() stdout
#define file_NativeFileCapable_NativeFileCapable_native_stderr_0() stderr
#define file_FileStat_FileStat_mode_0(self) (((struct stat*)self)->st_mode)
#define file_FileStat_FileStat_atime_0(self) (((struct stat*)self)->st_atime)
#define file_FileStat_FileStat_ctime_0(self) (((struct stat*)self)->st_ctime)
#define file_FileStat_FileStat_mtime_0(self) (((struct stat*)self)->st_mtime)
#define file_FileStat_FileStat_size_0(self) (((struct stat*)self)->st_size)

#define string_NativeString_NativeString_file_mkdir_0(p) (mkdir(p, 0777))
#define string_NativeString_NativeString_file_getcwd_0(p) (getcwd(NULL, 0))
#define string_NativeString_NativeString_file_chdir_0(p) (chdir(p)?-1:0) /* hack to avoid warn_unused_result */
#define file_NativeString_realpath(p) (realpath(p, NULL))

#define file_stdin_poll_in(self) file_stdin_poll_in_()
int file_stdin_poll_in_(void);
#endif

