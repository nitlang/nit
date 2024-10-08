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

#ifndef GC_LIST
#define GC_LIST

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "nit_common.h"

typedef struct GC_static_object {
	val_t *pointer;
	struct GC_static_object *next;
} GC_static_object;

typedef struct GC_List {
	GC_static_object *top;
	int size;
} GC_List;

void GC_List_Init(GC_List *list);
int GC_List_Push(GC_List *list, val_t *pointer);

#endif
