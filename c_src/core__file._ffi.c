/*
	Extern implementation of Nit module file
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "core__file._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#define Array_of_Int_length file___Array_of_Int_length
#define Array_of_Int__index file___Array_of_Int__index
long file___NativeFile_io_close___impl(  FILE*  self )
{
#line 1396 "../lib/core/file.nit"

 return fclose(self); }
long file___NativeFile_set_buffering_type___impl(  FILE*  self, long buf_length, long mode )
{
#line 1416 "../lib/core/file.nit"


		return setvbuf(self, NULL, mode, buf_length);
	}
long file___NativeFile_io_read___impl(  FILE*  self, char* buf, long len )
{
#line 1383 "../lib/core/file.nit"


		return fread(buf, 1, len, self);
	}
int file___NativeFile_ferror___impl(  FILE*  self )
{
#line 1408 "../lib/core/file.nit"

 return ferror(self); }
long file___NativeFile_io_write___impl(  FILE*  self, char* buf, long from, long len )
{
#line 1387 "../lib/core/file.nit"


		return fwrite(buf+from, 1, len, self);
	}
long file___Sys_buffer_mode_line___impl( Sys self )
{
#line 1464 "../lib/core/file.nit"

 return _IONBF; }
int file___NativeFileStat_is_dir___impl(  struct stat *  self )
{
#line 1363 "../lib/core/file.nit"

 return S_ISDIR(self->st_mode); }
int file___NativeString_file_exists___impl( char* self )
{
#line 1301 "../lib/core/file.nit"


		FILE *hdl = fopen(self,"r");
		if(hdl != NULL){
			fclose(hdl);
		}
		return hdl != NULL;
	}
 struct stat *  file___NativeString_file_stat___impl( char* self )
{
#line 1309 "../lib/core/file.nit"


		struct stat buff;
		if(stat(self, &buff) != -1) {
			struct stat* stat_element;
			stat_element = malloc(sizeof(struct stat));
			return memcpy(stat_element, &buff, sizeof(struct stat));
		}
		return 0;
	}
char* file___NativeString_file_realpath___impl( char* self )
{
#line 1338 "../lib/core/file.nit"

 return realpath(self, NULL); }
int file___NativeString_file_mkdir___impl( char* self )
{
#line 1328 "../lib/core/file.nit"

 return !mkdir(self, 0777); }
char* file___NativeDir_readdir___impl(  DIR*  self )
{
#line 1441 "../lib/core/file.nit"


		struct dirent *de;
		de = readdir(self);
		if (!de) return NULL;
		return de->d_name;
	}
void file___NativeDir_closedir___impl(  DIR*  self )
{
#line 1438 "../lib/core/file.nit"

 closedir(self); }
 FILE*  file___new_NativeFile_io_open_read___impl( char* path )
{
#line 1420 "../lib/core/file.nit"

 return fopen(path, "r"); }
 FILE*  file___new_NativeFile_io_open_write___impl( char* path )
{
#line 1422 "../lib/core/file.nit"

 return fopen(path, "w"); }
 FILE*  file___new_NativeFile_native_stdin___impl(  )
{
#line 1424 "../lib/core/file.nit"

 return stdin; }
 FILE*  file___new_NativeFile_native_stdout___impl(  )
{
#line 1426 "../lib/core/file.nit"

 return stdout; }
 FILE*  file___new_NativeFile_native_stderr___impl(  )
{
#line 1428 "../lib/core/file.nit"

 return stderr; }
 DIR*  file___new_NativeDir_opendir___impl( char* path )
{
#line 1435 "../lib/core/file.nit"

 return opendir(path); }
char* file___Sys_native_getcwd___impl( Sys self )
{
#line 1584 "../lib/core/file.nit"

 return getcwd(NULL, 0); }
