/* This file is part of NIT ( http://www.nitlanguage.org ).
 *
 * Copyright 2004-2008 Jean Privat <jean@pryen.org>
 *
 * This file is free software, which comes along with NIT.  This software is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
 * PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
 * is kept unaltered, and a notification of the changes is added.
 * You  are  allowed  to  redistribute it and sell it, alone or is a part of
 * another product.
 */

#include "exec_nit.h"
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>

se_exec_data_t* exec_Process_Process_basic_exec_execute_4(void *s, char *prog, char *args, int len, int pipeflag) {
	se_exec_data_t* result = NULL;
	int id;
	int in_fd[2];
	int out_fd[2];
	int err_fd[2];
	if (pipeflag & 1) {
		int res = pipe(in_fd);
		if ( res == -1 ) {
			return NULL;
		}
	}
	if (pipeflag & 2) {
		int res = pipe(out_fd);
		if ( res == -1 ) {
			return NULL;
		}
	}
	if (pipeflag & 4) {
		int res = pipe(err_fd);
		if ( res == -1 ) {
			return NULL;
		}
	}
					
	id = fork();
	if (id == 0)
       	{ /* child */
		char **arg = malloc(sizeof(char*) * (len+1));
		char *c = args;
		int i;

		/* Prepare args */
		for(i=0; i<len; i++)
		{
			arg[i] = c;
			c += strlen(c) + 1;
		}
		arg[len] = NULL;
		
		/* Connect pipe */
		if (pipeflag & 1)
		{
			close(0);
			dup2(in_fd[0], 0);
			close(in_fd[0]);
			close(in_fd[1]);
		}
		if (pipeflag & 2)
		{
			close(1);
			dup2(out_fd[1], 1);
			close(out_fd[0]);
			close(out_fd[1]);
		}
		if (pipeflag & 4)
		{
			close(2);
			dup2(err_fd[1], 2);
			close(err_fd[0]);
			close(err_fd[1]);
		}

		/* calls */
		execvp(prog, arg);
		_exit(127);
	}
	else if (id > 0)
       	{ /* father */
		result = (se_exec_data_t*)malloc(sizeof(se_exec_data_t));
		result->id = id;
		result->running = 1;
		if (pipeflag & 1)
		{
			result->in_fd = in_fd[1];
			close(in_fd[0]);
		} else
			result->in_fd = -1;
			
		if (pipeflag & 2)
		{
			result->out_fd = out_fd[0];
			close(out_fd[1]);
		} else
			result->out_fd = -1;
		
		if (pipeflag & 4)
		{
			result->err_fd = err_fd[0];
			close(err_fd[1]);
		} else
			result->err_fd = -1;
	}

	return result;
}

int exec_NativeProcess_NativeProcess_is_finished_0(void*d) {
	se_exec_data_t*data = (se_exec_data_t*)d;
	int result = (int)0;
	int status;
	if (data->running) {
		int id = waitpid(data->id, &status, WNOHANG);
		if (id != 0) {
			/* child is finished */
			result = (int)(id == data->id);
			data->status = WEXITSTATUS(status);
			data->running = 0;
		}
	}
	else{
		result = (int)1;
	}
	return result;
}

void exec_NativeProcess_NativeProcess_wait_0(void*d) {
	se_exec_data_t*data = (se_exec_data_t*)d;
	int status;
	if (data->running) {
		waitpid(data->id, &status, 0);
		data->status = WEXITSTATUS(status);
		data->running = 0;
	}
}

int string_NativeString_NativeString_system_0(const char *cmd) {
	int status = system(cmd);
	if (WIFSIGNALED(status) && WTERMSIG(status) == SIGINT) {
		// cmd exited on SIGINT: in my opinion the user wants the main to be discontinued
		kill(getpid(), SIGINT);
	}
}
