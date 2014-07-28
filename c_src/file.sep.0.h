#include "nit.common.h"
#define COLOR_file__FStream___path 0
#define COLOR_file__FStream___file 1
#include "file_nit.h"
#define COLOR_file__IFStream___end_reached 4
void file__IFStream__close(val* self);
#define COLOR_stream__BufferedIStream___buffer 2
#define COLOR_string__FlatText___items 1
#define COLOR_string__FlatBuffer___capacity 6
extern const struct type type_kernel__Int;
#define COLOR_string__FlatText___length 3
#define COLOR_stream__BufferedIStream___buffer_pos 3
void file__IFStream__fill_buffer(val* self);
void stream__BufferedIStream__prepare_buffer(val* self, long p0);
char* string__FlatString__to_cstring(val* self);
val* BOX_file__NativeFile(void*);
#include "kernel_nit.h"
val* string__NativeString__to_s_with_length(char* self, long p0);
long kernel___Sys_errno___impl( struct nitni_instance * recv );
val* string__Int__strerror(long self);
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 65
#define COLOR_string__Object__to_s 7
void file__Object__print(val* self, val* p0);
void file__IFStream__open(val* self, val* p0);
void file__IFStream__init(val* self);
#define COLOR_file__OFStream___writable 2
extern const struct type type_string__FlatText;
#define COLOR_string__Text__to_cstring 45
void file__OFStream__write_native(val* self, char* p0, long p1);
#define COLOR_string__Text__substrings 42
val* abstract_collection__Iterator__iterator(val* self);
#define COLOR_abstract_collection__Iterator__is_ok 31
#define COLOR_abstract_collection__Iterator__item 29
#define COLOR_abstract_collection__Iterator__next 30
void file__OFStream__write(val* self, val* p0);
void file__OFStream__close(val* self);
val* BOX_kernel__Int(long);
void file__Object__printn(val* self, val* p0);
void file__OFStream__open(val* self, val* p0);
void file__OFStream__init(val* self);
void file__Stdin__init(val* self);
void file__Stdout__init(val* self);
void file__Stderr__init(val* self);
short int file__String__file_exists(val* self);
val* NEW_file__IFStream(const struct type* type);
extern const struct type type_file__IFStream;
val* NEW_file__OFStream(const struct type* type);
extern const struct type type_file__OFStream;
short int stream__BufferedIStream__eof(val* self);
val* stream__BufferedIStream__read(val* self, long p0);
void file__String__file_copy_to(val* self, val* p0);
short int string__Text__has_suffix(val* self, val* p0);
val* string__FlatString__substring(val* self, long p0, long p1);
val* file__String__strip_extension(val* self, val* p0);
#define COLOR_string__FlatString___chars 6
#define COLOR_abstract_collection__SequenceRead___91d_93d 39
extern const struct class class_kernel__Char;
val* BOX_kernel__Char(char);
#define COLOR_abstract_collection__SequenceRead__last_index_of_from 44
val* file__String__basename(val* self, val* p0);
val* file__String__dirname(val* self);
val* string__NativeString__to_s_with_copy(char* self);
val* file__String__realpath(val* self);
val* string_search__Text__split_with(val* self, val* p0);
extern const struct type type_array__Arraystring__String;
void array__Array__init(val* self);
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
short int string__FlatString___61d_61d(val* self, val* p0);
short int array__AbstractArrayRead__is_empty(val* self);
val* abstract_collection__SequenceRead__last(val* self);
#define COLOR_kernel__Object___61d_61d 2
val* array__AbstractArray__pop(val* self);
void array__AbstractArray__push(val* self, val* p0);
void array__ArrayIterator__next(val* self);
long array__AbstractArrayRead__length(val* self);
val* abstract_collection__SequenceRead__first(val* self);
val* string__Collection__join(val* self, val* p0);
val* file__String__simplify_path(val* self);
short int string__Text__is_empty(val* self);
val* file__String__join_path(val* self, val* p0);
val* NEW_string__FlatBuffer(const struct type* type);
extern const struct type type_string__FlatBuffer;
void string__FlatBuffer__init(val* self);
val* array__Array___91d_93d(val* self, long p0);
void string__FlatBuffer__add(val* self, char p0);
void string__FlatBuffer__append(val* self, val* p0);
val* string__FlatBuffer__to_s(val* self);
void file__String__mkdir(val* self);
#define COLOR_abstract_collection__SequenceRead__last_index_of 42
val* file__String__file_extension(val* self);
#define COLOR_file__Sys___stdout 2
#define COLOR_file__Sys___stderr 3
val* string__Array__to_s(val* self);
val* string__NativeString__to_s(char* self);
val* file__Object__getcwd(val* self);
