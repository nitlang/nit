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

#include "gc.h"
#include <assert.h>

void Nit_gc_init(){
	heapActive = malloc(sizeof(heap));
	heapInactive = malloc(sizeof(heap));

	heapActive->heapPointer = malloc(HEAP_ACTIVE_SIZE_MIN);
	heapInactive->heapPointer = malloc(HEAP_ACTIVE_SIZE_MIN);

	if (heapActive->heapPointer==NULL) exit(1);
	if (heapInactive->heapPointer==NULL) exit(1);

	heapActive->size = HEAP_ACTIVE_SIZE_MIN;
	heapInactive->size = HEAP_ACTIVE_SIZE_MIN;

	allocationPointer = heapActive->heapPointer;

	evacuationPointer = heapInactive->heapPointer;
	scavengingPointer = evacuationPointer;

	GC_List_Init(&staticObjects);
}

val_t GC_evacuation(obj_t object){
	bigint size;
	bigint objectSize;
	val_t newAdress;
	Nit_NativeArray array;
	BOX_struct box;

	assert(ISOBJ(object) && !ISNULL(object));
	if ( GET_MARKBIT(object) != (bigint)0) {
		newAdress = REMOVE_MARKBIT((bigint)((object)->vft));
	}else{
		newAdress = (val_t)evacuationPointer;
		if (OBJ_IS_ARRAY(object)) {
			array = (Nit_NativeArray ) object;
			size = sizeof(struct Nit_NativeArray) + ((array->size - 1) * sizeof(val_t));
			memcpy((void *)evacuationPointer, (array), size);
			(array)->vft = (classtable_elt_t*)evacuationPointer;
		}else if(IS_BOX(object)){
			box = (BOX_struct)object;
			size = sizeof(struct TBOX_struct);
			memcpy((void *)evacuationPointer, object, size);
			box->vft = (classtable_elt_t*)evacuationPointer;
		}else{
			objectSize = (bigint)((object)[0].vft[1].i);
			size = (objectSize) * sizeof(val_t);
			memcpy((void *)evacuationPointer, object, size);
			(object)[0].vft = (classtable_elt_t*)evacuationPointer;
		}
		SET_MARKBIT(object);
		evacuationPointer += size;
	}

	return newAdress;
}

void GC_scavenging(){
	obj_t object = (obj_t)scavengingPointer;
	obj_t * object2 = (obj_t *)&scavengingPointer;
	int size;
	int i;
	obj_t referencedObject;
	bigint objectSize;
	Nit_NativeArray * array;

	if ( IS_BOX(object)) {
		size = sizeof(struct TBOX_struct);
	}else{
		array = (Nit_NativeArray*)&scavengingPointer;
		if (OBJ_IS_ARRAY((obj_t)*array)) {
			size = sizeof(struct Nit_NativeArray) + (((*array)->size - 1) * sizeof(val_t));
			for (i = 0; i < (*array)->size; i++) {
				referencedObject = (obj_t)((*array)->val[i]);
				if (!ISNULL(referencedObject) && ISOBJ(referencedObject)) {
					(*array)->val[i] = (bigint)GC_evacuation(referencedObject);
				}
			}
		}else{
			objectSize = (bigint)((object)->vft[1].i);
			size = (objectSize) * sizeof(val_t);
			for (i = 2; i < objectSize; i++) {
				referencedObject = (obj_t)(object[i].objectSize);
				if (!ISNULL(referencedObject) && ISOBJ(referencedObject)) {
					((object)[i].objectSize) = (bigint)GC_evacuation(referencedObject);
				}
			}
		}
	}
	scavengingPointer += size;
}

void GC_collect(){
	val_t ** pointers;
	val_t * pointer;
	int i;
	int j;
	struct trace_t * frame = tracehead;
	GC_static_object * staticObject = staticObjects.top;
	val_t object;
	heap * tempPointer;

	evacuationPointer = heapInactive->heapPointer;
	scavengingPointer = heapInactive->heapPointer;
	for (i = 0; i < staticObjects.size; i++) {
		object = *(val_t*)(staticObject->pointer);
		if(!ISNULL(object) && ISOBJ(object)){
			*(staticObject->pointer) = (val_t)GC_evacuation((obj_t)object);
		}
		staticObject = staticObject->next;
	}
	while (frame != NULL) {
		pointers = frame->REG_pointer;
		for (j = 0; j < frame->REG_size; j++) {
			object = (val_t)(pointers[j]);
			if(!ISNULL(object) && ISOBJ(object)){
				pointers[j] = (val_t*)GC_evacuation((obj_t)object);
			}
		}
		if (frame == frame->prev) break;
		frame = frame->prev;
	}
	while ( evacuationPointer != scavengingPointer) {
		GC_scavenging();
	}

	/* pour tests seulement, pas necessaire */
	memset((void *)heapActive->heapPointer, 0, heapActive->size);
	allocationPointer = evacuationPointer;

	/* inverse le tas actif et le tas inactif */
	tempPointer = heapActive;
	heapActive = heapInactive;
	heapInactive = tempPointer;

	heapActiveUsedSize = (int)allocationPointer - (int)heapActive->heapPointer;
}

void GC_set_heap_size(size_t newHeapSize){
	free(heapInactive->heapPointer);
	heapInactive->heapPointer = malloc(newHeapSize);
	if(heapInactive->heapPointer == NULL) {
		exit(1);
	}
	heapInactive->size = newHeapSize;
	memset(heapInactive->heapPointer, 0, newHeapSize);
}

void GC_detect_memory_needs( size_t size ) {
	if ( size > (heapActive->size - heapActiveUsedSize))   {
		GC_collect();
		if (heapActive->size - heapActiveUsedSize > heapActive->size / 2 && heapActive->size * 3 / 4 > HEAP_ACTIVE_SIZE_MIN){
			GC_set_heap_size(heapActive->size * 3 / 4);
			GC_collect();
			GC_set_heap_size(heapActive->size);
		}
	}
	if ( size > (heapActive->size - heapActiveUsedSize))   {
		int try_size = heapInactive->size * 2;
		while (size > (try_size - heapActiveUsedSize)){
			try_size *= 2;
		}
		GC_set_heap_size(try_size);
		GC_collect();
		GC_set_heap_size(heapActive->size);
	}
}

void *Nit_gc_malloc( size_t size ) {
	char *result;

	GC_detect_memory_needs(size);

	result = allocationPointer;
	heapActiveUsedSize += size;
	allocationPointer += size;

	return result;
}

void GC_add_static_object(val_t * pointer){
	GC_List_Push(&staticObjects, pointer);
}

