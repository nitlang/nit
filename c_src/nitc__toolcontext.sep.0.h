#include "nit.common.h"
#define COLOR_nitc__toolcontext__Message___location 0
#define COLOR_nitc__toolcontext__Message___tag 1
#define COLOR_nitc__toolcontext__Message___text 2
extern const char FILE_nitc__toolcontext[];
#define COLOR_nitc__toolcontext__Message___level 3
#define COLOR_core__kernel__Comparable__OTHER 0
short int nitc___nitc__Location___core__kernel__Object___61d_61d(val* self, val* p0);
short int nitc___nitc__Location___core__kernel__Comparable___60d(val* self, val* p0);
extern const struct type type_nitc__Message;
#define COLOR_core__kernel__Object___61d_61d 4
val* NEW_core__NativeArray(int length, const struct type* type);
extern const struct type type_core__NativeArray__core__String;
val* core__flat___CString___to_s_unsafe(char* self, val* p0, val* p1, val* p2, val* p3);
#define COLOR_core__abstract_text__Object__to_s 3
#define COLOR_core__abstract_text__NativeArray__native_to_s 12
val* core__abstract_text___Char___Object__to_s(uint32_t self);
#define COLOR_nitc__location__Location___file 0
val* nitc___nitc__Location___colored_line(val* self, val* p0);
#define COLOR_nitc___nitc__Message___core__kernel__Object__init 27
#define COLOR_nitc__toolcontext__Location___messages 6
short int core___core__Array___core__kernel__Object___61d_61d(val* self, val* p0);
val* NEW_core__Array(const struct type* type);
extern const struct type type_core__Array__nitc__Message;
void core___core__Array___core__kernel__Object__init(val* self);
void core___core__Array___core__abstract_collection__SimpleCollection__add(val* self, val* p0);
#define COLOR_nitc__toolcontext__SourceFile___messages 5
#define COLOR_nitc__toolcontext__ToolContext___error_count 7
#define COLOR_nitc__toolcontext__ToolContext___warning_count 8
#define COLOR_nitc__toolcontext__ToolContext___log_directory 9
#define COLOR_nitc__toolcontext__ToolContext___log_info 10
#define COLOR_nitc__toolcontext__ToolContext___messages 11
#define COLOR_nitc__toolcontext__ToolContext___message_sorter 12
#define COLOR_nitc__toolcontext__ToolContext___keep_going 13
#define COLOR_nitc__toolcontext__ToolContext___warning_blacklist 14
val* core___core__HashMap___core__abstract_collection__MapRead__get_or_null(val* self, val* p0);
short int core___core__AbstractArrayRead___core__abstract_collection__Collection__has(val* self, val* p0);
short int nitc___nitc__ToolContext___check_errors(val* self);
void nitc___nitc__ToolContext___errors_info(val* self);
extern const struct type type_core__Int;
extern const char FILE_core__kernel[];
#define COLOR_core__array__AbstractArrayRead___length 0
void core___core__Comparator___sort(val* self, val* p0);
val* core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(val* self);
#define COLOR_core__abstract_collection__Iterator__is_ok 12
#define COLOR_core__abstract_collection__Iterator__item 13
#define COLOR_nitc__toolcontext__ToolContext___opt_no_color 29
#define COLOR_opts__Option___value 6
val* core__file___Sys___stderr(val* self);
void core___core__FileWriter___core__stream__Writer__write(val* self, val* p0);
val* nitc___nitc__Message___to_color_string(val* self);
#define COLOR_core__abstract_collection__Iterator__next 14
#define COLOR_core__abstract_collection__Iterator__finish 15
void core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(val* self);
val* core__flat___Int___core__abstract_text__Object__to_s(long self);
val* NEW_nitc__Message(const struct type* type);
#define COLOR_nitc__toolcontext__Message__location_61d 19
#define COLOR_nitc__toolcontext__Message__tag_61d 20
#define COLOR_nitc__toolcontext__Message__text_61d 21
#define COLOR_nitc__toolcontext__Message__level_61d 22
#define COLOR_core__kernel__Object__init 0
void nitc__toolcontext___Location___add_message(val* self, val* p0);
#define COLOR_nitc__toolcontext__ToolContext___opt_warn 16
#define COLOR_nitc__toolcontext__ToolContext___opt_stop_on_first_error 27
val* nitc___nitc__ToolContext___error(val* self, val* p0, val* p1);
short int nitc___nitc__ToolContext___is_warning_blacklisted(val* self, val* p0, val* p1);
#define COLOR_nitc__toolcontext__ToolContext___opt_warning 17
#define COLOR_nitc__toolcontext__ToolContext___verbose_level 32
void core__file___Sys___print(val* self, val* p0);
#define COLOR_nitc__toolcontext__ToolContext___option_context 15
#define COLOR_nitc__toolcontext__ToolContext___opt_quiet 18
#define COLOR_nitc__toolcontext__ToolContext___opt_log 19
#define COLOR_nitc__toolcontext__ToolContext___opt_log_dir 20
#define COLOR_nitc__toolcontext__ToolContext___opt_nit_dir 21
#define COLOR_nitc__toolcontext__ToolContext___opt_share_dir 22
#define COLOR_nitc__toolcontext__ToolContext___opt_help 23
#define COLOR_nitc__toolcontext__ToolContext___opt_version 24
#define COLOR_nitc__toolcontext__ToolContext___opt_set_dummy_tool 25
#define COLOR_nitc__toolcontext__ToolContext___opt_verbose 26
#define COLOR_nitc__toolcontext__ToolContext___opt_keep_going 28
#define COLOR_nitc__toolcontext__ToolContext___opt_bash_completion 30
#define COLOR_nitc__toolcontext__ToolContext___opt_stub_man 31
#define COLOR_nitc___nitc__ToolContext___core__kernel__Object__init 155
extern const struct type type_core__Array__opts__Option;
extern const struct type type_core__NativeArray__opts__Option;
#define COLOR_core__array__Array__with_native 32
void opts___opts__OptionContext___add_option(val* self, val* p0);
#define COLOR_opts__Option___hidden 4
#define COLOR_nitc__toolcontext__ToolContext___tooldescription 33
#define COLOR_nitc__toolcontext__ToolContext___accept_no_arguments 34
void opts___opts__OptionContext___usage(val* self);
#define COLOR_opts__Option__VALUE 0
extern const char FILE_opts[];
void opts___opts__OptionContext___parse(val* self, val* p0);
void nitc___nitc__ToolContext___usage(val* self);
val* nitc___nitc__ToolContext___version(val* self);
val* NEW_nitc__BashCompletion(const struct type* type);
extern const struct type type_nitc__BashCompletion;
#define COLOR_nitc__toolcontext__BashCompletion__toolcontext_61d 24
val* core__file___Sys___stdout(val* self);
void template___template__Template___core__stream__Writable__write_to(val* self, val* p0);
val* core__string_search___Text___split(val* self, val* p0);
val* core___core__Array___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
#define COLOR_opts__OptionContext___options 0
extern const struct type type_core__Array__core__Object;
extern const struct type type_core__NativeArray__core__Object;
void core__file___Sys___printn(val* self, val* p0);
#define COLOR_opts__Option___names 0
#define COLOR_opts__Option___helptext 1
val* opts___opts__OptionContext___errors(val* self);
short int core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(val* self);
val* nitc___nitc__ToolContext___locate_nit_dir(val* self);
#define COLOR_nitc__toolcontext__ToolContext___nit_dir 35
#define COLOR_opts__OptionContext___rest 1
val* core__file___String___mkdir(val* self, val* p0);
val* core__file___String____47d(val* self, val* p0);
val* core__file___Text___to_path(val* self);
val* core___core__Path___open_wo(val* self);
val* nitc__version___core__Sys___nit_version(val* self);
val* core__abstract_text___Sys___program_name(val* self);
#define COLOR_core__file__String__basename 99
short int nitc___nitc__ToolContext___check_nit_dir(val* self, val* p0);
void nitc___nitc__ToolContext___fatal_error(val* self, val* p0, val* p1);
val* core__environ___String___environ(val* self);
#define COLOR_core__abstract_text__Text__is_empty 43
val* core__file___String___dirname(val* self);
val* core__file___String___simplify_path(val* self);
short int core__file___Text___file_exists(val* self);
val* core__file___String___realpath(val* self);
val* core__file___String___join_path(val* self, val* p0);
int core__kernel___Sys_is_windows___impl( struct nitni_instance * self );
#define COLOR_nitc__toolcontext__BashCompletion___toolcontext 4
extern const struct type type_core__Array__core__String;
short int core___core__Text___has_prefix(val* self, val* p0);
val* nitc___nitc__ToolContext___toolname(val* self);
val* nitc___nitc__BashCompletion___extract_options_names(val* self);
void template___template__Template___addn(val* self, val* p0);
val* core__abstract_text___Collection___join(val* self, val* p0, val* p1);
#define COLOR_nitc___nitc__BashCompletion___core__kernel__Object__init 27
