/*
	Extern implementation of Nit module file
*/
#include "standard___file._ffi.h"

 struct stat *  NativeString_file_lstat___impl( char * recv )
{
#line 325 "../lib/standard/file.nit"


		struct stat* stat_element;
		int res;
		stat_element = malloc(sizeof(struct stat));
		res = lstat(recv, stat_element);
		if (res == -1) return NULL;
		return stat_element;
	}

int FileStat_is_reg___impl(  struct stat *  recv )
{
#line 345 "../lib/standard/file.nit"

 return S_ISREG(recv->st_mode); }

int FileStat_is_dir___impl(  struct stat *  recv )
{
#line 346 "../lib/standard/file.nit"

 return S_ISDIR(recv->st_mode); }

int FileStat_is_chr___impl(  struct stat *  recv )
{
#line 347 "../lib/standard/file.nit"

 return S_ISCHR(recv->st_mode); }

int FileStat_is_blk___impl(  struct stat *  recv )
{
#line 348 "../lib/standard/file.nit"

 return S_ISBLK(recv->st_mode); }

int FileStat_is_fifo___impl(  struct stat *  recv )
{
#line 349 "../lib/standard/file.nit"

 return S_ISFIFO(recv->st_mode); }

int FileStat_is_lnk___impl(  struct stat *  recv )
{
#line 350 "../lib/standard/file.nit"

 return S_ISLNK(recv->st_mode); }

int FileStat_is_sock___impl(  struct stat *  recv )
{
#line 351 "../lib/standard/file.nit"

 return S_ISSOCK(recv->st_mode); }
