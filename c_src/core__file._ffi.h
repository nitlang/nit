/*
	Extern implementation of Nit module file
*/
#ifndef CORE__FILE_NIT_H
#define CORE__FILE_NIT_H

#include <stdint.h>
#include "core__file._nitni.h"
#line 23 "../lib/core/file.nit"


	#include <dirent.h>
	#include <string.h>
	#include <sys/types.h>
	#include <sys/stat.h>
	#include <unistd.h>
	#include <stdio.h>
	#include <errno.h>
#ifndef _WIN32
	#include <poll.h>
#endif
#include "core__math._ffi.h"
#include "core__time._ffi.h"
#endif
