#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <setjmp.h>

#include <sys/types.h>

#include <unistd.h>

#include <stdint.h>

#ifdef __linux__
	#include <endian.h>
#endif
#include <inttypes.h>

#include "gc_chooser.h"
#ifdef __APPLE__
	#include <TargetConditionals.h>
	#include <syslog.h>
	#include <libkern/OSByteOrder.h>
	#define be32toh(x) OSSwapBigToHostInt32(x)
#endif
#ifdef _WIN32
	#define be32toh(val) _byteswap_ulong(val)
#endif
#ifdef __pnacl__
	#define be16toh(val) (((val) >> 8) | ((val) << 8))
	#define be32toh(val) ((be16toh((val) << 16) | (be16toh((val) >> 16))))
#endif
#ifdef ANDROID
	#ifndef be32toh
		#define be32toh(val) betoh32(val)
	#endif
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#elif TARGET_OS_IPHONE
	#define PRINT_ERROR(...) syslog(LOG_ERR, __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
typedef void(*nitmethod_t)(void); /* general C type representing a Nit method. */
typedef union {
void* val;
long l;
short int s;
unsigned char b;
uint32_t c;
double d;
void* str;
int8_t i8;
int16_t i16;
uint16_t u16;
int32_t i32;
uint32_t u32;
} nitattribute_t; /* general C type representing a Nit attribute. */
struct class { int box_kind; nitmethod_t vft[]; }; /* general C type representing a Nit class. */
struct type { int id; const char *name; int color; short int is_nullable; const struct types *resolution_table; int table_size; int type_table[]; }; /* general C type representing a Nit type. */
struct instance { const struct type *type; const struct class *class; nitattribute_t attrs[]; }; /* general C type representing a Nit instance. */
struct types { int dummy; const struct type *types[]; }; /* a list types (used for vts, fts and unresolved lists). */
typedef struct instance val; /* general C type representing a Nit instance. */
extern const struct class *class_info[];
extern const struct type *type_info[];
struct nitni_instance {
	struct nitni_instance *next,
		*prev; /* adjacent global references in global list */
	int count; /* number of time this global reference has been marked */
	struct instance *value;
};

/* Native reference to Nit objects */
/* This structure is used to represent every Nit type in extern methods and custom C code. */
struct nitni_ref {
	struct nitni_ref *next,
		*prev; /* adjacent global references in global list */
	int count; /* number of time this global reference has been marked */
};

/* List of global references from C code to Nit objects */
/* Instanciated empty at init of Nit system and filled explicitly by user in C code */
struct nitni_global_ref_list_t {
	struct nitni_ref *head, *tail;
};
extern struct nitni_global_ref_list_t *nitni_global_ref_list;

/* Initializer of global reference list */
extern void nitni_global_ref_list_init();

/* Intern function to add a global reference to the list */
extern void nitni_global_ref_add( struct nitni_ref *ref );

/* Intern function to remove a global reference from the list */
extern void nitni_global_ref_remove( struct nitni_ref *ref );

/* Increase count on an existing global reference */
extern void nitni_global_ref_incr( struct nitni_ref *ref );

/* Decrease count on an existing global reference */
extern void nitni_global_ref_decr( struct nitni_ref *ref );

struct catch_stack_t {
	int cursor;
	jmp_buf envs[100];
};
extern struct catch_stack_t catchStack;

void fatal_exit(int) __attribute__ ((noreturn));
#define likely(x)       __builtin_expect((x),1)
#define unlikely(x)     __builtin_expect((x),0)
extern int glob_argc;
extern char **glob_argv;
extern val *glob_sys;
struct instance_core__CString {
const struct type *type;
const struct class *class;
void* value;
};
struct instance_core__Float {
const struct type *type;
const struct class *class;
double value;
};
struct instance_core__Byte {
const struct type *type;
const struct class *class;
unsigned char value;
};
struct instance_core__Pointer {
const struct type *type;
const struct class *class;
void* value;
};
struct instance_core__NativeArray {
const struct type *type;
const struct class *class;
int length;
val* values[0];
};
struct instance_core__Int8 {
const struct type *type;
const struct class *class;
int8_t value;
};
struct instance_core__Int16 {
const struct type *type;
const struct class *class;
int16_t value;
};
struct instance_core__UInt16 {
const struct type *type;
const struct class *class;
uint16_t value;
};
struct instance_core__Int32 {
const struct type *type;
const struct class *class;
int32_t value;
};
struct instance_core__UInt32 {
const struct type *type;
const struct class *class;
uint32_t value;
};
