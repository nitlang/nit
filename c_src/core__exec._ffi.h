/*
	Extern implementation of Nit module exec
*/
#ifndef CORE__EXEC_NIT_H
#define CORE__EXEC_NIT_H

#include <stdint.h>
#include "core__exec._nitni.h"
#line 29 "../lib/core/exec.nit"


	#include <sys/types.h>

	// FIXME this should be in the "C" block when bug on module blocks is fixed
	// or, even better, replace the C structure by a Nit object.
	typedef struct se_exec_data se_exec_data_t;
	struct se_exec_data {
		pid_t id;
		int running;
		int status;
		int in_fd;
		int out_fd;
		int err_fd;
	};
#include "core__math._ffi.h"
#include "core__time._ffi.h"
#include "core__file._ffi.h"
#endif
