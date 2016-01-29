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
	#include <sys/wait.h>
	#include <signal.h>
long exec___NativeString_system___impl( char* self )
{
#line 332 "../lib/core/exec.nit"


		int status = system(self);
		if (WIFSIGNALED(status) && WTERMSIG(status) == SIGINT) {
			// system exited on SIGINT: in my opinion the user wants the main to be discontinued
			kill(getpid(), SIGINT);
		}
		return status;
	}
