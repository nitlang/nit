/* This file is part of NIT ( https://nitlanguage.org ).
 *
 * Copyright 2009 Julien Chevalier <chevjulien@gmail.com>
 *
 * This file is free software, which comes along with NIT.  This software is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
 * PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
 * is kept unaltered, and a notification of the changes is added.
 * You  are  allowed  to  redistribute it and sell it, alone or is a part of
 * another product.
 */

#ifndef GC
#define GC

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include "nit_common.h"

void Nit_gc_init(void);

void *Nit_gc_malloc(size_t size);

void GC_add_static_object(val_t *pointer);

void Nit_gc_force_garbage_collection( void );

#endif
