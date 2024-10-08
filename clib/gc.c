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

#include "gc.h"
#ifdef DEBUG
#	include <assert.h>
#else
#	define assert(x) while(0)
#endif
#include <unistd.h>
#include "gc_static_objects_list.h"

/** The current active heap.
 * During GC collect, it is the destination (i.e. the next active heap). */
char *gc_heap_pointer;

/** The inactive heap.
 * During GC collect, is is the source (i.e. the previous active heap). */
char *gc_old_heap_pointer;

/** The size (total capacity) of the active heap. */
size_t gc_heap_size;

/** The total size of currently allocated objects. */
size_t gc_used_size;

/** Typedef used by boxing val. FIXME: Do someting better! */
typedef struct TBOX_struct {
	const classtable_elt_t *vft;
	char *val;
	bigint object_id;
} *BOX_struct;

/** First free position in the active heap. */
char *gc_allocation_pointer;

/** Position of objects copied but not yet visited (during GC collect). */
char *gc_scavenging_pointer;

/** List of global objects. */
GC_List staticObjects;

/** Size of a memory page. Used to grow or shrink the GC heap. */
unsigned long page_size;

/* Markbit manipulations */
#define GET_MARKBIT(x) (((val_t)((x)[0].vft)) & 1)
#define SET_MARKBIT(x) ((x)->vft = (void*)(((bigint)((x)->vft)) | 1))
#define REMOVE_MARKBIT(x) ((x) ^ 1)

void Nit_gc_init(void) {
	page_size = sysconf(_SC_PAGESIZE);

	gc_heap_pointer = calloc(1, page_size);
	if (gc_heap_pointer==NULL) exit(1);
	gc_heap_size = page_size;
	gc_used_size = 0;

	gc_allocation_pointer = gc_heap_pointer;

	gc_old_heap_pointer = NULL;
	gc_scavenging_pointer = NULL;

	GC_List_Init(&staticObjects);
}

/** Copy object to the new heap if needed then return the address of the copy. */
static val_t GC_evacuation(obj_t object) {
	bigint size;
	bigint objectSize;
	val_t newAdress;
	Nit_NativeArray array;

	assert(ISOBJ(object) && !ISNULL(object));
	if (GET_MARKBIT(object) != (bigint)0) {
		/* Object already evacuated. So forward it. */
		newAdress = REMOVE_MARKBIT((bigint)((object)->vft));
	} else {
		newAdress = (val_t)gc_allocation_pointer;
		if (OBJ_IS_ARRAY(object)) {
			array = (Nit_NativeArray)object;
			size = sizeof(struct Nit_NativeArray) + ((array->size - 1) * sizeof(val_t));
		} else if (OBJ_IS_BOX(object)) {
			size = sizeof(struct TBOX_struct);
		} else {
			objectSize = (bigint)((object)[0].vft[1].i);
			size = (objectSize) * sizeof(val_t);
		}
		memcpy(gc_allocation_pointer, object, size);
		(object)[0].vft = (classtable_elt_t*)gc_allocation_pointer;
		SET_MARKBIT(object);
		gc_allocation_pointer += size;
	}

	return newAdress;
}

/** Process the next evacuated object to copy/update its fields. */
static void GC_scavenging(void) {
	obj_t object;
	int size;
	int i;
	val_t referencedObject;

	object = (obj_t)gc_scavenging_pointer;
	if (OBJ_IS_BOX(object)) {
		size = sizeof(struct TBOX_struct);
	} else if (OBJ_IS_ARRAY(object)) {
		Nit_NativeArray array = (Nit_NativeArray)gc_scavenging_pointer;
		size = sizeof(struct Nit_NativeArray) + ((array->size - 1) * sizeof(val_t));
		for (i = 0; i < array->size; i++) {
			referencedObject = array->val[i];
			if (!ISNULL(referencedObject) && ISOBJ(referencedObject)) {
				array->val[i] = GC_evacuation((obj_t)referencedObject);
			}
		}
	} else {
		bigint objectSize = (bigint)((object)->vft[1].i);
		size = (objectSize) * sizeof(val_t);
		for (i = 2; i < objectSize; i++) {
			referencedObject = object[i].objectSize;
			if (!ISNULL(referencedObject) && ISOBJ(referencedObject)) {
				object[i].objectSize = GC_evacuation((obj_t)referencedObject);
			}
		}
	}

	gc_scavenging_pointer += size;
}

/** Collect live objects in the old head and copy them to the active heap. */
static void GC_collect(void) {
	val_t *pointer;
	int i;
	int j;
	struct stack_frame_t *frame = stack_frame_head;
	GC_static_object *staticObject = staticObjects.top;
	val_t object;
	struct nitni_ref *global_ref;
	struct nitni_ref_array_link *local_ref_array_link; /* for native interface */

	gc_allocation_pointer = gc_heap_pointer;
	gc_scavenging_pointer = gc_heap_pointer;

	/* Process global objects (registered by GC_add_static_object) */
	for (i = 0; i < staticObjects.size; i++) {
		object = *(val_t*)(staticObject->pointer);
		if (!ISNULL(object) && ISOBJ(object)) {
			*(staticObject->pointer) = GC_evacuation((obj_t)object);
		}
		staticObject = staticObject->next;
	}

	/* Process global reference to Nit objects from C code */
	global_ref = nitni_global_ref_list->head;
	while (global_ref != NULL) {
		object = global_ref->val;
		if (!ISNULL(object) && ISOBJ(object)) {
			global_ref->val = GC_evacuation((obj_t)object);
		}
		global_ref = global_ref->next;
	}

	/* Process function frames (local variables) */
	while (frame != NULL) {
		for (j = 0; j < frame->REG_size; j++) {
			object = frame->REG[j];
			if (!ISNULL(object) && ISOBJ(object)) {
				frame->REG[j] = GC_evacuation((obj_t)object);
			}
		}

		/* Process C references to Nit objects */
		local_ref_array_link = frame->nitni_local_ref_head;
		while ( local_ref_array_link != NULL )
		{
			for (j = 0; j < local_ref_array_link->count; j++) {
				object = local_ref_array_link->reg[j]->val;
				if (!ISNULL(object) && ISOBJ(object)) {
					local_ref_array_link->reg[j]->val = GC_evacuation((obj_t)object);
				}
			}
			local_ref_array_link = local_ref_array_link->next;
		}

		if (frame == frame->prev) break;
		frame = frame->prev;
	}
	while (gc_allocation_pointer != gc_scavenging_pointer) {
		GC_scavenging();
	}

	gc_scavenging_pointer = NULL;

	gc_used_size = gc_allocation_pointer - gc_heap_pointer;
}

/** Allocate a new active heap. */
static void GC_prepare_heap_size(size_t size) {
	assert(gc_old_heap_pointer == NULL);
	gc_old_heap_pointer = gc_heap_pointer;

	gc_heap_pointer = calloc(1, size);
	if (gc_heap_pointer == NULL) {
		exit(1);
	}
	gc_heap_size = size;
}

void Nit_gc_print_usage(void) {
#if __STDC_VERSION >= 199901L
	/* If we are compiling with standard C99 or more recent, we can use %zu. */
	printf("GC: Size %zu usage %zu (%.2f%%)\n", gc_heap_size, gc_used_size, 100.0*gc_used_size/gc_heap_size);
#else
	/* We are not compiling with a standard that allows us to use %zu, let's cast the two unsigned integers into the biggest we can !*/
	printf("GC: Size %lu usage %lu (%.2f%%)\n", (unsigned long)gc_heap_size, (unsigned long)gc_used_size, 100.0*gc_used_size/gc_heap_size);
#endif
}

/** Enlarge the heap and collect dead objects. Can also shrink the heap.
 * Size is the aditionnal number of bytes required. */
static void GC_enlarge_and_collect(size_t size) {
	size_t try_size;

	/* Heap grows exponentially. */
	try_size = gc_heap_size;
	while (size > (try_size - gc_used_size)) {
		try_size = try_size * 1.5;
	}

	/* Build a new heap. */
	GC_prepare_heap_size(try_size);

	/* Collect. */
	GC_collect();

	/* Free the old heap. */
	free(gc_old_heap_pointer);
	gc_old_heap_pointer = NULL;

	/* Shrink heap. */
	while (gc_heap_size > 2*page_size && 3*(gc_used_size+size) < gc_heap_size)
		gc_heap_size = gc_heap_size / 1.5;
	/*Nit_gc_print_usage();*/
}

void *Nit_gc_malloc(size_t size) {
	char *result;

	if (size > (gc_heap_size - gc_used_size))
		GC_enlarge_and_collect(size);

	result = gc_allocation_pointer;
	gc_allocation_pointer += size;
	gc_used_size += size;

	return result;
}

void GC_add_static_object(val_t *pointer) {
	GC_List_Push(&staticObjects, pointer);
}

/* Is invoked by intern method Sys:force_garbage_collection */
void Nit_gc_force_garbage_collection( void ) {
	GC_enlarge_and_collect( 0 );
}
