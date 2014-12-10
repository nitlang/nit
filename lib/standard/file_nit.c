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

FILE* file_int_fdtostream(int fd, char* mode){
	return fdopen(fd, mode);
}
