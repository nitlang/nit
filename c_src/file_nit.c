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

#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <dirent.h>
#include <poll.h>

#include "file_nit.h"

#ifndef NONITCNI
/*
C implementation of file::String::files

Imported methods signatures:
	HashSet new_HashSet(  ) for hash_collection::HashSet::init
	void HashSet_add( HashSet recv, Object item ) for hash_collection::HashSet::(abstract_collection::SimpleCollection::add)
	String new_String_from_cstring( char * str ) for string::String::from_cstring
	int HashSet_is_a_Set( HashSet value ) to check if a HashSet[String] is a Set[String]
	Set HashSet_as_Set( HashSet value ) to cast from HashSet[String] to Set[String]
*/
Set String_files___impl( String recv )
{
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
		HashSet results;
		String file_name;
		struct dirent *de;

		results = new_HashSet();

		while ( ( de = readdir( dir ) ) != NULL )
			if ( strcmp( de->d_name, ".." ) != 0 &&
				strcmp( de->d_name, "." ) != 0 )
			{
				file_name = new_String_from_cstring( strdup( de->d_name ) );
				HashSet_add( results, String_as_Object( file_name ) );
			}

		closedir( dir );
		return HashSet_as_Set( results );
	}
}
#endif

int string_NativeString_NativeString_file_exists_0(char *f){
	FILE *hdl = fopen(f,"r");
	if(hdl != NULL){
		fclose(hdl);
	}
	return hdl != NULL;
}

void *to_nit_file_stat(struct stat* st){
	struct stat* stat_element;
	stat_element = malloc(sizeof(struct stat));
	return memcpy(stat_element, st, sizeof(struct stat));
}

void *string_NativeString_NativeString_file_stat_0(char *f){
	struct stat buff;
	if(stat(f, &buff) != -1)
		return to_nit_file_stat(&buff);
	return 0;
}

void *file_NativeFile_NativeFile_file_stat_0(FILE *f){
	struct stat buff;
	if(fstat(fileno(f), &buff) != -1)
		return to_nit_file_stat(&buff);
	return 0;
}

extern int string_NativeString_NativeString_file_delete_0(char *f){
  return (remove(f) == 0);
}

int file_stdin_poll_in_(void) {
	struct pollfd fd = {0, POLLIN, 0};
	int res = poll(&fd, 1, 0);
	if (res == -1) {
		perror("Error poll stdin");
		exit(EXIT_FAILURE);
	}
	return res > 0;
}
