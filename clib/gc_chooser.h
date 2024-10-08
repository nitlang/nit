#ifndef NIT_GC_CHOOSER_H
#define NIT_GC_CHOOSER_H

/* This file is part of NIT ( https://nitlanguage.org ).
 *
 * This file is free software, which comes along with NIT.  This software is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
 * PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
 * is kept unaltered, and a notification of the changes is added.
 * You  are  allowed  to  redistribute it and sell it, alone or is a part of
 * another product.
 */

#include <stdio.h>

/* GC and memory management */
void *nit_alloc(size_t); /* allocate memory to store an object with an object header */
void *nit_raw_alloc(size_t); /* allocate raw memory to store a raw stram of byte */
void nit_gcollect(void); /* force a garbage collection */
void initialize_gc_option(void); /* Select the wanted GC using envvar `NIT_GC_OPTION` */

void gc_register_finalizer(void*); /* Tag a pointer for finalization */
void gc_finalize(void*, void*); /* Finalize a pointer, implemented in the generated code. */
void object_destroy_callback(void*, void*); /* call into an object finalizer to record some traces. */

#endif
