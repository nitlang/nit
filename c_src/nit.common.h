#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <gc_chooser.h>
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
void show_backtrace(int);
extern int glob_argc;
extern char **glob_argv;
extern val *glob_sys;
struct instance_posix__Passwd {
const struct type *type;
const struct class *class;
void* value;
};
struct instance_posix__Group {
const struct type *type;
const struct class *class;
void* value;
};
struct instance_string__NativeString {
const struct type *type;
const struct class *class;
char* value;
};
val* BOX_string__NativeString(char*);
struct instance_kernel__Bool {
const struct type *type;
const struct class *class;
short int value;
};
val* BOX_kernel__Bool(short int);
struct instance_kernel__Float {
const struct type *type;
const struct class *class;
double value;
};
val* BOX_kernel__Float(double);
struct instance_kernel__Int {
const struct type *type;
const struct class *class;
long value;
};
val* BOX_kernel__Int(long);
struct instance_kernel__Char {
const struct type *type;
const struct class *class;
char value;
};
val* BOX_kernel__Char(char);
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
struct instance_file__FileStat {
const struct type *type;
const struct class *class;
void* value;
};
struct instance_file__NativeFile {
const struct type *type;
const struct class *class;
void* value;
};
val* BOX_file__NativeFile(void*);
struct instance_time__TimeT {
const struct type *type;
const struct class *class;
void* value;
};
struct instance_time__Tm {
const struct type *type;
const struct class *class;
void* value;
};
struct instance_exec__NativeProcess {
const struct type *type;
const struct class *class;
void* value;
};
val* BOX_exec__NativeProcess(void*);
