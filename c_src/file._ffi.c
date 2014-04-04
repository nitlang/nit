/*
	Extern implementation of Nit module file
*/
#include <stdlib.h>
#include <stdio.h>
#include "file._ffi.h"
#define new_HashSet_of_String file___new_HashSet_of_String
#define HashSet_of_String_add file___HashSet_of_String_add
#define NativeString_to_s file___NativeString_to_s
#define String_to_cstring file___String_to_cstring

Set_of_String file___String_files___impl( String recv )
{
#line 379 "lib/standard/file.nit"


		char *dir_path;
		DIR *dir;

		dir_path = String_to_cstring( recv );
		if ((dir = opendir(dir_path)) == NULL)
		{
			perror( dir_path );
			exit( 1 );
		}
		else
		{
			HashSet_of_String results;
			String file_name;
			struct dirent *de;

			results = new_HashSet_of_String();

			while ( ( de = readdir( dir ) ) != NULL )
				if ( strcmp( de->d_name, ".." ) != 0 &&
					strcmp( de->d_name, "." ) != 0 )
				{
					file_name = NativeString_to_s( strdup( de->d_name ) );
					HashSet_of_String_add( results, file_name );
				}

			closedir( dir );
			return HashSet_of_String_as_Set_of_String( results );
		}
	}

 struct stat *  file___NativeString_file_lstat___impl( char* recv )
{
#line 414 "lib/standard/file.nit"


		struct stat* stat_element;
		int res;
		stat_element = malloc(sizeof(struct stat));
		res = lstat(recv, stat_element);
		if (res == -1) return NULL;
		return stat_element;
	}

int file___FileStat_is_reg___impl(  struct stat *  recv )
{
#line 436 "lib/standard/file.nit"

 return S_ISREG(recv->st_mode); }

int file___FileStat_is_dir___impl(  struct stat *  recv )
{
#line 437 "lib/standard/file.nit"

 return S_ISDIR(recv->st_mode); }

int file___FileStat_is_chr___impl(  struct stat *  recv )
{
#line 438 "lib/standard/file.nit"

 return S_ISCHR(recv->st_mode); }

int file___FileStat_is_blk___impl(  struct stat *  recv )
{
#line 439 "lib/standard/file.nit"

 return S_ISBLK(recv->st_mode); }

int file___FileStat_is_fifo___impl(  struct stat *  recv )
{
#line 440 "lib/standard/file.nit"

 return S_ISFIFO(recv->st_mode); }

int file___FileStat_is_lnk___impl(  struct stat *  recv )
{
#line 441 "lib/standard/file.nit"

 return S_ISLNK(recv->st_mode); }

int file___FileStat_is_sock___impl(  struct stat *  recv )
{
#line 442 "lib/standard/file.nit"

 return S_ISSOCK(recv->st_mode); }
