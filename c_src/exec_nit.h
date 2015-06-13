#ifndef __EXEC_NIT_H
#define __EXEC_NIT_H
/* This file is part of NIT ( http://www.nitlanguage.org ).
 *
 * Copyright 2004-2008 Jean Privat <jean@pryen.org>
 * Copyright 2008 Floréal Morandat <morandat@lirmm.fr> 
 *
 * This file is free software, which comes along with NIT.  This software is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
 * PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
 * is kept unaltered, and a notification of the changes is added.
 * You  are  allowed  to  redistribute it and sell it, alone or is a part of
 * another product.
 */

#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

typedef struct se_exec_data se_exec_data_t;
struct se_exec_data {
	pid_t id;
	int running;
	int status;
	int in_fd;
	int out_fd;
	int err_fd;
};

se_exec_data_t* exec_Process_Process_basic_exec_execute_4(void *, char *, char *, int, int);

int string_NativeString_NativeString_system_0(const char*);

#define exec_NativeProcess_NativeProcess_id_0(self) (((se_exec_data_t*)self)->id)
#define exec_NativeProcess_NativeProcess_status_0(self) (((se_exec_data_t*)self)->status)

#define exec_NativeProcess_NativeProcess_in_fd_0(self) (((se_exec_data_t*)self)->in_fd)
#define exec_NativeProcess_NativeProcess_out_fd_0(self) (((se_exec_data_t*)self)->out_fd)
#define exec_NativeProcess_NativeProcess_err_fd_0(self) (((se_exec_data_t*)self)->err_fd)

int exec_NativeProcess_NativeProcess_is_finished_0(void*);
void exec_NativeProcess_NativeProcess_wait_0(void*);

#endif
