#include "nit.common.h"
#define COLOR_standard__file__FileStream___path 1
#define COLOR_standard__file__FileStream___file 2
extern const char FILE_standard__file[];
#include "kernel_nit.h"
#define COLOR_standard__stream__Stream___last_error 0
#define COLOR_standard__kernel__Object___61d_61d 4
val* NEW_standard__IOError(const struct type* type);
extern const struct type type_standard__IOError;
val* standard___standard__NativeString___to_s_with_length(char* self, long p0);
#define COLOR_standard__error__Error__message_61d 16
#define COLOR_standard__kernel__Object__init 0
#include "file_nit.h"
val* NEW_standard__NativeArray(int length, const struct type* type);
extern const struct type type_standard__NativeArray__standard__String;
val* standard__string___Int___strerror(long self);
#define COLOR_standard__string__NativeArray__native_to_s 16
extern const struct type type_standard__Int;
extern const char FILE_standard__kernel[];
#define COLOR_standard___standard__FileReader___standard__stream__Stream__close 35
void standard___standard__BufferedReader___buffer_reset(val* self);
#define COLOR_standard__file__FileReader___end_reached 7
#define COLOR_standard__stream__BufferedReader___buffer 3
#define COLOR_standard__stream__BufferedReader___buffer_capacity 6
#define COLOR_standard__stream__BufferedReader___buffer_length 5
#define COLOR_standard__stream__BufferedReader___buffer_pos 4
void standard___standard__BufferedReader___prepare_buffer(val* self, long p0);
val* NEW_standard__file__NativeFile(const struct type* type);
extern const struct type type_standard__file__NativeFile;
#define COLOR_standard__string__Text__to_cstring 25
val* standard__file___standard__file__NativeFile___io_open_read(val* self, char* p0);
#define COLOR_standard__file__FileWriter___is_writable 3
#define COLOR_standard__string__Text__substrings 29
#define COLOR_standard__abstract_collection__Iterator__iterator 20
#define COLOR_standard__abstract_collection__Iterator__is_ok 16
#define COLOR_standard__abstract_collection__Iterator__item 17
#define COLOR_standard__string__FlatText___length 3
void standard___standard__FileWriter___write_native(val* self, char* p0, long p1);
#define COLOR_standard__abstract_collection__Iterator__next 18
#define COLOR_standard__abstract_collection__Iterator__finish 19
#define COLOR_standard___standard__FileWriter___standard__stream__Stream__close 25
val* standard__string___Int___Object__to_s(long self);
val* standard__file___standard__file__NativeFile___io_open_write(val* self, char* p0);
#define COLOR_standard___standard__Stdin___standard__kernel__Object__init 36
val* standard__file___standard__file__NativeFile___native_stdin(val* self);
#define COLOR_standard___standard__Stdout___standard__kernel__Object__init 26
val* standard__file___standard__file__NativeFile___native_stdout(val* self);
void standard___standard__FileStream___set_buffering_mode(val* self, long p0, long p1);
#define COLOR_standard___standard__Stderr___standard__kernel__Object__init 26
val* standard__file___standard__file__NativeFile___native_stderr(val* self);
val* NEW_standard__FileWriter(const struct type* type);
extern const struct type type_standard__FileWriter;
void standard___standard__FileWriter___open(val* self, val* p0);
#define COLOR_standard__stream__Writable__write_to 32
void standard___standard__FileWriter___standard__stream__Stream__close(val* self);
#define COLOR_standard__file__Path___path 0
val* standard___standard__Path___open_ro(val* self);
val* standard___standard__Path___open_wo(val* self);
short int standard___standard__BufferedReader___Reader__eof(val* self);
val* standard___standard__Reader___read(val* self, long p0);
void standard___standard__FileWriter___standard__stream__Writer__write(val* self, val* p0);
void standard___standard__FileReader___standard__stream__Stream__close(val* self);
val* NEW_standard__FileReader(const struct type* type);
extern const struct type type_standard__FileReader;
void standard___standard__FileReader___open(val* self, val* p0);
extern const struct type type_standard__Path;
val* standard__file___String___simplify_path(val* self);
#define COLOR_standard__kernel__Object__hash 12
#define COLOR_standard___standard__Path___standard__kernel__Object__init 21
val* NEW_standard__Path(const struct type* type);
#define COLOR_standard__string__Object__to_s 3
#define COLOR_standard__file__Path__path_61d 18
val* standard__file___Text___to_path(val* self);
void standard___standard__Path___copy(val* self, val* p0);
short int standard___standard__Text___has_suffix(val* self, val* p0);
#define COLOR_standard__string__Text__length 26
#define COLOR_standard__string__Text__substring 28
#define COLOR_standard__string__Text__chars 27
#define COLOR_standard__abstract_collection__SequenceRead___91d_93d 31
#define COLOR_standard__abstract_collection__SequenceRead__last_index_of_from 37
val* standard__file___String___strip_extension(val* self, val* p0);
val* standard___standard__NativeString___to_s_with_copy(char* self);
val* standard__string_search___Text___split_with(val* self, val* p0);
val* NEW_standard__Array(const struct type* type);
extern const struct type type_standard__Array__standard__String;
void standard___standard__Array___standard__kernel__Object__init(val* self);
val* standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(val* self);
short int standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(val* self);
val* standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(val* self);
short int standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(val* self);
val* standard___standard__SequenceRead___last(val* self);
val* standard___standard__AbstractArray___standard__abstract_collection__Sequence__pop(val* self);
void standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(val* self, val* p0);
void standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(val* self);
void standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(val* self);
#define COLOR_standard__array__AbstractArrayRead___length 0
val* standard___standard__SequenceRead___Collection__first(val* self);
val* standard__string___Collection___join(val* self, val* p0);
short int standard___standard__Text___is_empty(val* self);
uint32_t standard___standard__Text___last(val* self);
val* standard__file___String___join_path(val* self, val* p0);
val* standard__file___Sys___getcwd(val* self);
val* standard__file___String____47d(val* self, val* p0);
val* standard__string_search___Text___split(val* self, val* p0);
val* standard___standard__AbstractArray___standard__abstract_collection__Sequence__shift(val* self);
#define COLOR_standard__string__String___42d 72
#define COLOR_standard__string__String___43d 71
val* NEW_standard__FlatBuffer(const struct type* type);
extern const struct type type_standard__FlatBuffer;
#define COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init 80
val* standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
void standard___standard__FlatBuffer___Buffer__add(val* self, uint32_t p0);
void standard___standard__FlatBuffer___Buffer__append(val* self, val* p0);
val* standard___standard__FlatBuffer___Object__to_s(val* self);
#define COLOR_standard__abstract_collection__SequenceRead__last_index_of 36
val* BOX_standard__Pointer(void*);
extern const struct class class_standard__file__NativeFile;
#define COLOR_standard__file__Sys___stdout 3
val* NEW_standard__Stdout(const struct type* type);
extern const struct type type_standard__Stdout;
void standard___standard__Stdout___standard__kernel__Object__init(val* self);
#define COLOR_standard__file__Sys___stderr 5
val* NEW_standard__Stderr(const struct type* type);
extern const struct type type_standard__Stderr;
void standard___standard__Stderr___standard__kernel__Object__init(val* self);
val* standard__file___Sys___stdout(val* self);
val* standard__string___Array___Collection__plain_to_s(val* self);
val* standard___standard__NativeString___Object__to_s(char* self);
