/*
	Extern implementation of Nit module exec
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "core__exec._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#line 19 "../lib/core/exec.nit"


	#include <stdlib.h>
	#include <string.h>
	#include <errno.h>
	#include <stdio.h>
	#include <unistd.h>
	#include <signal.h>
	#include <sys/types.h>

#ifdef _WIN32
	#include <windows.h>
	#include <fcntl.h>
#else
	#include <sys/wait.h>
#endif

	typedef struct se_exec_data se_exec_data_t;
	struct se_exec_data {
#ifdef _WIN32
		HANDLE h_process;
		HANDLE h_thread;
#endif
		pid_t id;
		int running;
		int status;
		int in_fd;
		int out_fd;
		int err_fd;
	};
long core__exec___CString_system___impl( char* self )
{
#line 457 "../lib/core/exec.nit"


		int status = system(self);
#ifndef _WIN32
		if (WIFSIGNALED(status) && WTERMSIG(status) == SIGINT) {
			// system exited on SIGINT: in my opinion the user wants the main to be discontinued
			kill(getpid(), SIGINT);
		}
#endif
		return status;
	}
