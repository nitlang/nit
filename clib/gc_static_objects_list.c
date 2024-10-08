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

#include "gc_static_objects_list.h"

void GC_List_Init(GC_List *list) {
	list->top = NULL;
	list->size = 0;
}

int GC_List_Push(GC_List *list, val_t *pointer) {
	GC_static_object *newElement;
	newElement = (GC_static_object*)malloc(sizeof(GC_static_object));
	if (newElement == NULL)
		return -1;

	newElement->pointer = pointer;
	newElement->next = list->top;
	list->top = newElement;
	list->size++;
	return 0;
}

