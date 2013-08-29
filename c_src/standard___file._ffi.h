/*
	Extern implementation of Nit module file
*/
#include <file._nitni.h>

#ifndef STANDARD___FILE_NIT_H
#define STANDARD___FILE_NIT_H

 struct stat *  NativeString_file_lstat___impl( char * recv );
int FileStat_is_reg___impl(  struct stat *  recv );
int FileStat_is_dir___impl(  struct stat *  recv );
int FileStat_is_chr___impl(  struct stat *  recv );
int FileStat_is_blk___impl(  struct stat *  recv );
int FileStat_is_fifo___impl(  struct stat *  recv );
int FileStat_is_lnk___impl(  struct stat *  recv );
int FileStat_is_sock___impl(  struct stat *  recv );
#endif
