#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "gc_chooser.h"
typedef void(*nitmethod_t)(void); /* general C type representing a Nit method. */
typedef union {
void* val;
long l;
short int s;
char c;
double d;
char* str;
void* ptr;
} nitattribute_t; /* general C type representing a Nit attribute. */
struct class { int box_kind; nitmethod_t vft[]; }; /* general C type representing a Nit class. */
struct type { int id; const char *name; int color; short int is_nullable; const struct types *resolution_table; int table_size; int type_table[]; }; /* general C type representing a Nit type. */
struct instance { const struct type *type; const struct class *class; nitattribute_t attrs[]; }; /* general C type representing a Nit instance. */
struct types { int dummy; const struct type *types[]; }; /* a list types (used for vts, fts and unresolved lists). */
typedef struct instance val; /* general C type representing a Nit instance. */
struct nitni_instance {struct instance *value;};
void show_backtrace(int);
extern int glob_argc;
extern char **glob_argv;
extern val *glob_sys;
struct instance_string__NativeString {
const struct type *type;
const struct class *class;
char* value;
};
struct instance_kernel__Bool {
const struct type *type;
const struct class *class;
short int value;
};
struct instance_kernel__Float {
const struct type *type;
const struct class *class;
double value;
};
struct instance_kernel__Int {
const struct type *type;
const struct class *class;
long value;
};
struct instance_kernel__Char {
const struct type *type;
const struct class *class;
char value;
};
struct instance_kernel__Pointer {
const struct type *type;
const struct class *class;
void* value;
};
struct instance_array__NativeArray {
const struct type *type;
const struct class *class;
val* values[0];
};
