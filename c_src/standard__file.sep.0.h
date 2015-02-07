#include "nit.common.h"
#define COLOR_standard__file__FStream___path 1
extern const struct type type_standard__Int;
extern const char FILE_standard__kernel[];
#define COLOR_standard__file__FStream___file 2
extern const char FILE_standard__file[];
#include "file_nit.h"
val* NEW_standard__IOError(const struct type* type);
extern const struct type type_standard__IOError;
val* standard___standard__NativeString___to_s_with_length(char* self, long p0);
long kernel___Sys_errno___impl( struct nitni_instance * recv );
val* standard__string___Int___strerror(long self);
val* NEW_standard__Array(const struct type* type);
extern const struct type type_standard__Array__standard__Object;
val* NEW_standard__NativeArray(int length, const struct type* type);
extern const struct type type_standard__NativeArray__standard__Object;
#define COLOR_standard__array__Array__with_native 73
#define COLOR_standard__string__Object__to_s 9
#define COLOR_standard__error__Error__message_61d 33
#define COLOR_standard__kernel__Object__init 7
#define COLOR_standard__stream__IOS___last_error 0
#include "kernel_nit.h"
#define COLOR_standard__stream__BufferedIStream___buffer 3
void standard___standard__FlatBuffer___Buffer__clear(val* self);
#define COLOR_standard__file__IFStream___end_reached 5
extern const char FILE_standard__string[];
#define COLOR_standard__string__FlatText___items 1
#define COLOR_standard__string__FlatBuffer___capacity 7
#define COLOR_standard__string__FlatText___length 3
#define COLOR_standard__stream__BufferedIStream___buffer_pos 4
void standard___standard__BufferedIStream___prepare_buffer(val* self, long p0);
val* NEW_standard__file__NativeFile(const struct type* type);
extern const struct type type_standard__file__NativeFile;
#define COLOR_standard__string__Text__to_cstring 54
val* standard__file___standard__file__NativeFile___io_open_read(val* self, char* p0);
#define COLOR_standard__kernel__Object___61d_61d 2
#define COLOR_standard__file__OFStream___is_writable 3
extern const struct type type_standard__FlatText;
void standard___standard__OFStream___write_native(val* self, char* p0, long p1);
#define COLOR_standard__string__Text__substrings 49
val* standard___standard__Iterator___iterator(val* self);
#define COLOR_standard__abstract_collection__Iterator__is_ok 34
#define COLOR_standard__abstract_collection__Iterator__item 32
#define COLOR_standard__string__Text__length 47
#define COLOR_standard__abstract_collection__Iterator__next 33
val* BOX_standard__Int(long);
val* standard__file___standard__file__NativeFile___io_open_write(val* self, char* p0);
#define COLOR_standard__file__Sys___stdout 2
val* standard__string___Array___Object__to_s(val* self);
void standard___standard__OFStream___standard__stream__OStream__write(val* self, val* p0);
val* standard___standard__NativeString___Object__to_s(char* self);
#define COLOR_standard___standard__Stdin___standard__kernel__Object__init 48
val* standard__file___standard__file__NativeFile___native_stdin(val* self);
#define COLOR_standard___standard__Stdout___standard__kernel__Object__init 41
val* standard__file___standard__file__NativeFile___native_stdout(val* self);
#define COLOR_standard___standard__Stderr___standard__kernel__Object__init 41
val* standard__file___standard__file__NativeFile___native_stderr(val* self);
#define COLOR_standard__file__Path___path 0
val* standard___standard__Path___open_ro(val* self);
val* standard___standard__Path___open_wo(val* self);
short int standard___standard__BufferedIStream___IStream__eof(val* self);
val* standard___standard__BufferedIStream___IStream__read(val* self, long p0);
void standard___standard__IFStream___standard__stream__IOS__close(val* self);
void standard___standard__OFStream___standard__stream__IOS__close(val* self);
val* NEW_standard__IFStream(const struct type* type);
extern const struct type type_standard__IFStream;
void standard___standard__IFStream___open(val* self, val* p0);
val* NEW_standard__OFStream(const struct type* type);
extern const struct type type_standard__OFStream;
void standard___standard__OFStream___open(val* self, val* p0);
extern const struct type type_standard__Path;
val* standard__file___String___simplify_path(val* self);
#define COLOR_standard__kernel__Object__hash 4
#define COLOR_standard___standard__Path___standard__kernel__Object__init 37
val* NEW_standard__Path(const struct type* type);
#define COLOR_standard__file__Path__path_61d 33
val* standard__file___Text___to_path(val* self);
void standard___standard__Path___copy(val* self, val* p0);
short int standard___standard__Text___has_suffix(val* self, val* p0);
#define COLOR_standard__string__Text__substring 48
#define COLOR_standard__string__Text__chars 46
#define COLOR_standard__abstract_collection__SequenceRead___91d_93d 45
extern const struct class class_standard__Char;
val* BOX_standard__Char(char);
#define COLOR_standard__abstract_collection__SequenceRead__last_index_of_from 50
val* standard__file___String___strip_extension(val* self, val* p0);
val* standard___standard__NativeString___to_s_with_copy(char* self);
val* standard__string_search___Text___split_with(val* self, val* p0);
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
#define COLOR_standard__array__AbstractArrayRead___length 0
val* standard___standard__SequenceRead___Collection__first(val* self);
val* standard__string___Collection___join(val* self, val* p0);
short int standard___standard__Text___is_empty(val* self);
char standard___standard__Text___last(val* self);
val* standard__file___String___join_path(val* self, val* p0);
val* standard__file___Object___getcwd(val* self);
val* standard__file___String____47d(val* self, val* p0);
val* standard__string_search___Text___split(val* self, val* p0);
val* standard___standard__AbstractArray___standard__abstract_collection__Sequence__shift(val* self);
#define COLOR_standard__string__String___42d 83
#define COLOR_standard__string__String___43d 82
val* NEW_standard__FlatBuffer(const struct type* type);
extern const struct type type_standard__FlatBuffer;
#define COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init 96
val* standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
void standard___standard__FlatBuffer___Buffer__add(val* self, char p0);
void standard___standard__FlatBuffer___Buffer__append(val* self, val* p0);
val* standard___standard__FlatBuffer___Object__to_s(val* self);
#define COLOR_standard__abstract_collection__SequenceRead__last_index_of 48
val* BOX_standard__Pointer(void*);
extern const struct class class_standard__file__NativeFile;
extern const struct type type_standard__FStream;
void standard___standard__FStream___set_buffering_mode(val* self, long p0, long p1);
#define COLOR_standard__file__Sys___stderr 3
