/* This file is part of NIT ( http://www.nitlanguage.org ).
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
#include "gc_static_objects_list.h"

/* Markbit manipulations */
#define GET_MARKBIT(x) (((val_t)(x[0].vft)) & 1)
#define SET_MARKBIT(x) ((x)->vft = (void*)(((bigint)((x)->vft)) | 1))
#define REMOVE_MARKBIT(x) (x ^ 1)

#define HEAP_ACTIVE_SIZE_MIN 3000

typedef struct heap {
	char *heapPointer;
	unsigned long size;
}heap;

typedef struct TBOX_struct {
	const classtable_elt_t * vft;
	char * val;
	bigint object_id;
} * BOX_struct;

heap* heapActive;
heap* heapInactive;
char *allocationPointer;
char *evacuationPointer;
char *scavengingPointer;

unsigned long heapActiveUsedSize;

GC_List staticObjects;

void Nit_gc_init();

val_t GC_evacuation(obj_t object);

void GC_scavenging();

void* Nit_gc_malloc( size_t size );

void GC_add_static_object(val_t * pointer);

#endif
