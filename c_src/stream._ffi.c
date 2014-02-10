/*
	Extern implementation of Nit module stream
*/
#include <stdlib.h>
#include <stdio.h>
#include "stream._ffi.h"
#define Array_of_Int_length stream___Array_of_Int_length
#define Array_of_Int__index stream___Array_of_Int__index

	#include <unistd.h>
	#include <poll.h>
	#include <errno.h>
	#include <string.h>
