#include "nith.classes.0.h"
/* runtime class toolcontext__ToolContext */
const struct class class_toolcontext__ToolContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to toolcontext:ToolContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to toolcontext:ToolContext:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to toolcontext:ToolContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to toolcontext:ToolContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to toolcontext:ToolContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to toolcontext:ToolContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to toolcontext:ToolContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__ToolContext__init, /* pointer to toolcontext:ToolContext:separate_erasure_compiler#ToolContext#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to toolcontext:ToolContext:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to toolcontext:ToolContext:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to toolcontext:ToolContext:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to toolcontext:ToolContext:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to toolcontext:ToolContext:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to toolcontext:ToolContext:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to toolcontext:ToolContext:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to toolcontext:ToolContext:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to toolcontext:ToolContext:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to toolcontext:ToolContext:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to toolcontext:ToolContext:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to toolcontext:ToolContext:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to toolcontext:ToolContext:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to toolcontext:ToolContext:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to toolcontext:ToolContext:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to toolcontext:ToolContext:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to toolcontext:ToolContext:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to toolcontext:ToolContext:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to toolcontext:ToolContext:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to toolcontext:ToolContext:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to toolcontext:ToolContext:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to toolcontext:ToolContext:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to toolcontext:ToolContext:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__error_count, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#error_count */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__error_count_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#error_count= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__warning_count, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#warning_count */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__warning_count_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#warning_count= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__log_directory, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#log_directory */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__log_directory_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#log_directory= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__messages, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#messages */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__message_sorter, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#message_sorter */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__check_errors, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#check_errors */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__errors_info, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#errors_info */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__error, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#error */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__fatal_error, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#fatal_error */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__warning, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#warning */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__advice, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#advice */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__info, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#info */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__option_context, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#option_context */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_warn, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_warn */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_warning, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_warning */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_quiet, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_quiet */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_log, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_log */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_log_dir, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_log_dir */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_help, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_help */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_version, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_version */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_set_dummy_tool, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_set_dummy_tool */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_verbose, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_verbose */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_stop_on_first_error, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_stop_on_first_error */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_no_color, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_no_color */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_bash_completion, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_bash_completion */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_stub_man, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_stub_man */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__verbose_level, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#verbose_level */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__verbose_level_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#verbose_level= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__tooldescription, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#tooldescription */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__tooldescription_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#tooldescription= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__accept_no_arguments, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#accept_no_arguments */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__usage, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#usage */
(nitmethod_t)VIRTUAL_nith__ToolContext__process_options, /* pointer to toolcontext:ToolContext:nith#ToolContext#process_options */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__version, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#version */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__toolname, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#toolname */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__nit_dir, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#nit_dir */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__nit_dir_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#nit_dir= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__compute_nit_dir, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#compute_nit_dir */
(nitmethod_t)VIRTUAL_phase__ToolContext__phases, /* pointer to toolcontext:ToolContext:phase#ToolContext#phases */
(nitmethod_t)VIRTUAL_phase__ToolContext__opt_disable_phase, /* pointer to toolcontext:ToolContext:phase#ToolContext#opt_disable_phase */
(nitmethod_t)VIRTUAL_phase__ToolContext__phases_list, /* pointer to toolcontext:ToolContext:phase#ToolContext#phases_list */
(nitmethod_t)VIRTUAL_phase__ToolContext__phased_modules, /* pointer to toolcontext:ToolContext:phase#ToolContext#phased_modules */
(nitmethod_t)VIRTUAL_phase__ToolContext__run_phases, /* pointer to toolcontext:ToolContext:phase#ToolContext#run_phases */
(nitmethod_t)VIRTUAL_phase__ToolContext__phase_process_npropdef, /* pointer to toolcontext:ToolContext:phase#ToolContext#phase_process_npropdef */
(nitmethod_t)VIRTUAL_scope__ToolContext__scope_phase, /* pointer to toolcontext:ToolContext:scope#ToolContext#scope_phase */
(nitmethod_t)VIRTUAL_flow__ToolContext__flow_phase, /* pointer to toolcontext:ToolContext:flow#ToolContext#flow_phase */
(nitmethod_t)VIRTUAL_local_var_init__ToolContext__local_var_init_phase, /* pointer to toolcontext:ToolContext:local_var_init#ToolContext#local_var_init_phase */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__opt_path, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#opt_path */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__opt_only_metamodel, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#opt_only_metamodel */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__opt_only_parse, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#opt_only_parse */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__opt_ignore_visibility, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#opt_ignore_visibility */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__modelbuilder, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#modelbuilder */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__modelbuilder_real, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#modelbuilder_real */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__modelbuilder_real_61d, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#modelbuilder_real= */
(nitmethod_t)VIRTUAL_mixin__ToolContext__make_main_module, /* pointer to toolcontext:ToolContext:mixin#ToolContext#make_main_module */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__run_global_phases, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#run_global_phases */
(nitmethod_t)VIRTUAL_modelize_class__ToolContext__modelize_class_phase, /* pointer to toolcontext:ToolContext:modelize_class#ToolContext#modelize_class_phase */
(nitmethod_t)VIRTUAL_mixin__ToolContext__opt_mixins, /* pointer to toolcontext:ToolContext:mixin#ToolContext#opt_mixins */
(nitmethod_t)VIRTUAL_mixin__ToolContext__opt_defines, /* pointer to toolcontext:ToolContext:mixin#ToolContext#opt_defines */
(nitmethod_t)VIRTUAL_modelize_property__ToolContext__modelize_property_phase, /* pointer to toolcontext:ToolContext:modelize_property#ToolContext#modelize_property_phase */
(nitmethod_t)VIRTUAL_platform__ToolContext__platform_from_name, /* pointer to toolcontext:ToolContext:platform#ToolContext#platform_from_name */
(nitmethod_t)VIRTUAL_typing__ToolContext__typing_phase, /* pointer to toolcontext:ToolContext:typing#ToolContext#typing_phase */
(nitmethod_t)VIRTUAL_auto_super_init__ToolContext__auto_super_init_phase, /* pointer to toolcontext:ToolContext:auto_super_init#ToolContext#auto_super_init_phase */
(nitmethod_t)VIRTUAL_transform__ToolContext__opt_no_shortcut_range, /* pointer to toolcontext:ToolContext:transform#ToolContext#opt_no_shortcut_range */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_output, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_output */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_dir, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_dir */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_cc, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_cc */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_main, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_main */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_cc_path, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_cc_path */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_make_flags, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_make_flags */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_max_c_lines, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_max_c_lines */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_group_c_files, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_group_c_files */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_compile_dir, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_compile_dir */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_hardening, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_hardening */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_covariance, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_covariance */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_attr_isset, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_attr_isset */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_assert, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_assert */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_autocast, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_autocast */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_null, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_null */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_all, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_all */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_typing_test_metrics, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_typing_test_metrics */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_invocation_metrics, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_invocation_metrics */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_isset_checks_metrics, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_isset_checks_metrics */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_stacktrace, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_stacktrace */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_gcc_directive, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_gcc_directive */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_release, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_release */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_separate, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_separate */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_no_inline_intern, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_no_inline_intern */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_no_union_attribute, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_no_union_attribute */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_no_shortcut_equate, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_no_shortcut_equate */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_inline_coloring_numbers, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_inline_coloring_numbers */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_inline_some_methods, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_inline_some_methods */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_direct_call_monomorph, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_direct_call_monomorph */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_skip_dead_methods, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_skip_dead_methods */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_semi_global, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_semi_global */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_colo_dead_methods, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_colo_dead_methods */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_tables_metrics, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_tables_metrics */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__ToolContext__opt_erasure, /* pointer to toolcontext:ToolContext:separate_erasure_compiler#ToolContext#opt_erasure */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__ToolContext__opt_rta, /* pointer to toolcontext:ToolContext:separate_erasure_compiler#ToolContext#opt_rta */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__ToolContext__opt_no_check_erasure_cast, /* pointer to toolcontext:ToolContext:separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__init, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#init */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__ToolContext__process_options, /* pointer to toolcontext:ToolContext:separate_erasure_compiler#ToolContext#process_options */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__init, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#init */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__process_options, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#process_options */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__make_main_module, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#make_main_module */
(nitmethod_t)VIRTUAL_transform__ToolContext__init, /* pointer to toolcontext:ToolContext:transform#ToolContext#init */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__process_options, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#process_options */
(nitmethod_t)VIRTUAL_mixin__ToolContext__init, /* pointer to toolcontext:ToolContext:mixin#ToolContext#init */
(nitmethod_t)VIRTUAL_phase__ToolContext__process_options, /* pointer to toolcontext:ToolContext:phase#ToolContext#process_options */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__init, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#init */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__process_options, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#process_options */
(nitmethod_t)VIRTUAL_phase__ToolContext__init, /* pointer to toolcontext:ToolContext:phase#ToolContext#init */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__init, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#init */
}
};
/* allocate ToolContext */
val* NEW_toolcontext__ToolContext(const struct type* type) {
val* self /* : ToolContext */;
long var /* : Int */;
long var1 /* : Int */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
val* var6 /* : Array[Message] */;
val* var7 /* : DefaultComparator */;
val* var8 /* : OptionContext */;
val* var9 /* : OptionCount */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
val* var25 /* : Array[String] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[String] */;
val* var28 /* : OptionArray */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : FlatString */;
val* var44 /* : Array[String] */;
long var45 /* : Int */;
val* var46 /* : NativeArray[String] */;
val* var47 /* : OptionBool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : FlatString */;
val* var63 /* : Array[String] */;
long var64 /* : Int */;
val* var65 /* : NativeArray[String] */;
val* var66 /* : OptionBool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : FlatString */;
val* var77 /* : Array[String] */;
long var78 /* : Int */;
val* var79 /* : NativeArray[String] */;
val* var80 /* : OptionString */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : FlatString */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : FlatString */;
val* var91 /* : Array[String] */;
long var92 /* : Int */;
val* var93 /* : NativeArray[String] */;
val* var94 /* : OptionBool */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : FlatString */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : FlatString */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : FlatString */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : FlatString */;
val* var115 /* : Array[String] */;
long var116 /* : Int */;
val* var117 /* : NativeArray[String] */;
val* var118 /* : OptionBool */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
long var122 /* : Int */;
val* var123 /* : FlatString */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : FlatString */;
val* var129 /* : Array[String] */;
long var130 /* : Int */;
val* var131 /* : NativeArray[String] */;
val* var132 /* : OptionBool */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : FlatString */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : FlatString */;
val* var143 /* : Array[String] */;
long var144 /* : Int */;
val* var145 /* : NativeArray[String] */;
val* var146 /* : OptionCount */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
long var150 /* : Int */;
val* var151 /* : FlatString */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : FlatString */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
long var160 /* : Int */;
val* var161 /* : FlatString */;
val* var162 /* : Array[String] */;
long var163 /* : Int */;
val* var164 /* : NativeArray[String] */;
val* var165 /* : OptionBool */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
long var169 /* : Int */;
val* var170 /* : FlatString */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
long var174 /* : Int */;
val* var175 /* : FlatString */;
val* var176 /* : Array[String] */;
long var177 /* : Int */;
val* var178 /* : NativeArray[String] */;
val* var179 /* : OptionBool */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
long var183 /* : Int */;
val* var184 /* : FlatString */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
long var188 /* : Int */;
val* var189 /* : FlatString */;
val* var190 /* : Array[String] */;
long var191 /* : Int */;
val* var192 /* : NativeArray[String] */;
val* var193 /* : OptionBool */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : NativeString */;
long var197 /* : Int */;
val* var198 /* : FlatString */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
long var202 /* : Int */;
val* var203 /* : FlatString */;
val* var204 /* : Array[String] */;
long var205 /* : Int */;
val* var206 /* : NativeArray[String] */;
val* var207 /* : OptionBool */;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : NativeString */;
long var211 /* : Int */;
val* var212 /* : FlatString */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
long var216 /* : Int */;
val* var217 /* : FlatString */;
val* var218 /* : Array[String] */;
long var219 /* : Int */;
val* var220 /* : NativeArray[String] */;
long var221 /* : Int */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : NativeString */;
long var225 /* : Int */;
val* var226 /* : FlatString */;
short int var227 /* : Bool */;
val* var228 /* : null */;
val* var229 /* : POSet[Phase] */;
val* var230 /* : OptionArray */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
long var234 /* : Int */;
val* var235 /* : FlatString */;
static val* varonce236;
val* var237 /* : String */;
char* var238 /* : NativeString */;
long var239 /* : Int */;
val* var240 /* : FlatString */;
val* var241 /* : Array[String] */;
long var242 /* : Int */;
val* var243 /* : NativeArray[String] */;
val* var244 /* : HashSet[AModule] */;
val* var245 /* : LiteralPhase */;
val* var246 /* : null */;
val* var247 /* : ScopePhase */;
val* var248 /* : null */;
val* var249 /* : FlowPhase */;
val* var250 /* : Array[Phase] */;
long var251 /* : Int */;
val* var_ /* var : Array[Phase] */;
val* var252 /* : Phase */;
val* var253 /* : Phase */;
val* var254 /* : LocalVarInitPhase */;
val* var255 /* : Array[Phase] */;
long var256 /* : Int */;
val* var_257 /* var : Array[Phase] */;
val* var258 /* : Phase */;
val* var260 /* : Phase */;
val* var261 /* : OptionArray */;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : NativeString */;
long var265 /* : Int */;
val* var266 /* : FlatString */;
static val* varonce267;
val* var268 /* : String */;
char* var269 /* : NativeString */;
long var270 /* : Int */;
val* var271 /* : FlatString */;
static val* varonce272;
val* var273 /* : String */;
char* var274 /* : NativeString */;
long var275 /* : Int */;
val* var276 /* : FlatString */;
val* var277 /* : Array[String] */;
long var278 /* : Int */;
val* var279 /* : NativeArray[String] */;
val* var280 /* : OptionBool */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
long var284 /* : Int */;
val* var285 /* : FlatString */;
static val* varonce286;
val* var287 /* : String */;
char* var288 /* : NativeString */;
long var289 /* : Int */;
val* var290 /* : FlatString */;
val* var291 /* : Array[String] */;
long var292 /* : Int */;
val* var293 /* : NativeArray[String] */;
val* var294 /* : OptionBool */;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : NativeString */;
long var298 /* : Int */;
val* var299 /* : FlatString */;
static val* varonce300;
val* var301 /* : String */;
char* var302 /* : NativeString */;
long var303 /* : Int */;
val* var304 /* : FlatString */;
val* var305 /* : Array[String] */;
long var306 /* : Int */;
val* var307 /* : NativeArray[String] */;
val* var308 /* : OptionBool */;
static val* varonce309;
val* var310 /* : String */;
char* var311 /* : NativeString */;
long var312 /* : Int */;
val* var313 /* : FlatString */;
static val* varonce314;
val* var315 /* : String */;
char* var316 /* : NativeString */;
long var317 /* : Int */;
val* var318 /* : FlatString */;
val* var319 /* : Array[String] */;
long var320 /* : Int */;
val* var321 /* : NativeArray[String] */;
val* var322 /* : null */;
val* var323 /* : ModelizeClassPhase */;
val* var324 /* : null */;
val* var325 /* : OptionArray */;
static val* varonce326;
val* var327 /* : String */;
char* var328 /* : NativeString */;
long var329 /* : Int */;
val* var330 /* : FlatString */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : NativeString */;
long var334 /* : Int */;
val* var335 /* : FlatString */;
static val* varonce336;
val* var337 /* : String */;
char* var338 /* : NativeString */;
long var339 /* : Int */;
val* var340 /* : FlatString */;
val* var341 /* : Array[String] */;
long var342 /* : Int */;
val* var343 /* : NativeArray[String] */;
val* var344 /* : OptionArray */;
static val* varonce345;
val* var346 /* : String */;
char* var347 /* : NativeString */;
long var348 /* : Int */;
val* var349 /* : FlatString */;
static val* varonce350;
val* var351 /* : String */;
char* var352 /* : NativeString */;
long var353 /* : Int */;
val* var354 /* : FlatString */;
static val* varonce355;
val* var356 /* : String */;
char* var357 /* : NativeString */;
long var358 /* : Int */;
val* var359 /* : FlatString */;
val* var360 /* : Array[String] */;
long var361 /* : Int */;
val* var362 /* : NativeArray[String] */;
val* var363 /* : ModelizePropertyPhase */;
val* var364 /* : Array[Phase] */;
long var365 /* : Int */;
val* var_366 /* var : Array[Phase] */;
val* var367 /* : Phase */;
val* var369 /* : Phase */;
val* var370 /* : PlatformPhase */;
val* var371 /* : Array[Phase] */;
long var372 /* : Int */;
val* var_373 /* var : Array[Phase] */;
val* var374 /* : Phase */;
val* var376 /* : Phase */;
val* var377 /* : TypingPhase */;
val* var378 /* : Array[Phase] */;
long var379 /* : Int */;
val* var_380 /* var : Array[Phase] */;
val* var381 /* : Phase */;
val* var383 /* : Phase */;
val* var384 /* : Phase */;
val* var386 /* : Phase */;
val* var387 /* : Phase */;
val* var389 /* : Phase */;
val* var390 /* : AutoSuperInitPhase */;
val* var391 /* : Array[Phase] */;
long var392 /* : Int */;
val* var_393 /* var : Array[Phase] */;
val* var394 /* : Phase */;
val* var396 /* : Phase */;
val* var397 /* : TransformPhase */;
val* var398 /* : Array[Phase] */;
long var399 /* : Int */;
val* var_400 /* var : Array[Phase] */;
val* var401 /* : Phase */;
val* var403 /* : Phase */;
val* var404 /* : Phase */;
val* var406 /* : Phase */;
val* var407 /* : OptionBool */;
static val* varonce408;
val* var409 /* : String */;
char* var410 /* : NativeString */;
long var411 /* : Int */;
val* var412 /* : FlatString */;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : NativeString */;
long var416 /* : Int */;
val* var417 /* : FlatString */;
val* var418 /* : Array[String] */;
long var419 /* : Int */;
val* var420 /* : NativeArray[String] */;
val* var421 /* : OptionString */;
static val* varonce422;
val* var423 /* : String */;
char* var424 /* : NativeString */;
long var425 /* : Int */;
val* var426 /* : FlatString */;
static val* varonce427;
val* var428 /* : String */;
char* var429 /* : NativeString */;
long var430 /* : Int */;
val* var431 /* : FlatString */;
static val* varonce432;
val* var433 /* : String */;
char* var434 /* : NativeString */;
long var435 /* : Int */;
val* var436 /* : FlatString */;
val* var437 /* : Array[String] */;
long var438 /* : Int */;
val* var439 /* : NativeArray[String] */;
val* var440 /* : OptionString */;
static val* varonce441;
val* var442 /* : String */;
char* var443 /* : NativeString */;
long var444 /* : Int */;
val* var445 /* : FlatString */;
static val* varonce446;
val* var447 /* : String */;
char* var448 /* : NativeString */;
long var449 /* : Int */;
val* var450 /* : FlatString */;
val* var451 /* : Array[String] */;
long var452 /* : Int */;
val* var453 /* : NativeArray[String] */;
val* var454 /* : OptionBool */;
static val* varonce455;
val* var456 /* : String */;
char* var457 /* : NativeString */;
long var458 /* : Int */;
val* var459 /* : FlatString */;
static val* varonce460;
val* var461 /* : String */;
char* var462 /* : NativeString */;
long var463 /* : Int */;
val* var464 /* : FlatString */;
val* var465 /* : Array[String] */;
long var466 /* : Int */;
val* var467 /* : NativeArray[String] */;
val* var468 /* : OptionBool */;
static val* varonce469;
val* var470 /* : String */;
char* var471 /* : NativeString */;
long var472 /* : Int */;
val* var473 /* : FlatString */;
static val* varonce474;
val* var475 /* : String */;
char* var476 /* : NativeString */;
long var477 /* : Int */;
val* var478 /* : FlatString */;
val* var479 /* : Array[String] */;
long var480 /* : Int */;
val* var481 /* : NativeArray[String] */;
val* var482 /* : OptionArray */;
static val* varonce483;
val* var484 /* : String */;
char* var485 /* : NativeString */;
long var486 /* : Int */;
val* var487 /* : FlatString */;
static val* varonce488;
val* var489 /* : String */;
char* var490 /* : NativeString */;
long var491 /* : Int */;
val* var492 /* : FlatString */;
val* var493 /* : Array[String] */;
long var494 /* : Int */;
val* var495 /* : NativeArray[String] */;
val* var496 /* : OptionString */;
static val* varonce497;
val* var498 /* : String */;
char* var499 /* : NativeString */;
long var500 /* : Int */;
val* var501 /* : FlatString */;
static val* varonce502;
val* var503 /* : String */;
char* var504 /* : NativeString */;
long var505 /* : Int */;
val* var506 /* : FlatString */;
val* var507 /* : Array[String] */;
long var508 /* : Int */;
val* var509 /* : NativeArray[String] */;
val* var510 /* : OptionInt */;
static val* varonce511;
val* var512 /* : String */;
char* var513 /* : NativeString */;
long var514 /* : Int */;
val* var515 /* : FlatString */;
long var516 /* : Int */;
static val* varonce517;
val* var518 /* : String */;
char* var519 /* : NativeString */;
long var520 /* : Int */;
val* var521 /* : FlatString */;
val* var522 /* : Array[String] */;
long var523 /* : Int */;
val* var524 /* : NativeArray[String] */;
val* var525 /* : OptionBool */;
static val* varonce526;
val* var527 /* : String */;
char* var528 /* : NativeString */;
long var529 /* : Int */;
val* var530 /* : FlatString */;
static val* varonce531;
val* var532 /* : String */;
char* var533 /* : NativeString */;
long var534 /* : Int */;
val* var535 /* : FlatString */;
val* var536 /* : Array[String] */;
long var537 /* : Int */;
val* var538 /* : NativeArray[String] */;
val* var539 /* : OptionString */;
static val* varonce540;
val* var541 /* : String */;
char* var542 /* : NativeString */;
long var543 /* : Int */;
val* var544 /* : FlatString */;
static val* varonce545;
val* var546 /* : String */;
char* var547 /* : NativeString */;
long var548 /* : Int */;
val* var549 /* : FlatString */;
val* var550 /* : Array[String] */;
long var551 /* : Int */;
val* var552 /* : NativeArray[String] */;
val* var553 /* : OptionBool */;
static val* varonce554;
val* var555 /* : String */;
char* var556 /* : NativeString */;
long var557 /* : Int */;
val* var558 /* : FlatString */;
static val* varonce559;
val* var560 /* : String */;
char* var561 /* : NativeString */;
long var562 /* : Int */;
val* var563 /* : FlatString */;
val* var564 /* : Array[String] */;
long var565 /* : Int */;
val* var566 /* : NativeArray[String] */;
val* var567 /* : OptionBool */;
static val* varonce568;
val* var569 /* : String */;
char* var570 /* : NativeString */;
long var571 /* : Int */;
val* var572 /* : FlatString */;
static val* varonce573;
val* var574 /* : String */;
char* var575 /* : NativeString */;
long var576 /* : Int */;
val* var577 /* : FlatString */;
val* var578 /* : Array[String] */;
long var579 /* : Int */;
val* var580 /* : NativeArray[String] */;
val* var581 /* : OptionBool */;
static val* varonce582;
val* var583 /* : String */;
char* var584 /* : NativeString */;
long var585 /* : Int */;
val* var586 /* : FlatString */;
static val* varonce587;
val* var588 /* : String */;
char* var589 /* : NativeString */;
long var590 /* : Int */;
val* var591 /* : FlatString */;
val* var592 /* : Array[String] */;
long var593 /* : Int */;
val* var594 /* : NativeArray[String] */;
val* var595 /* : OptionBool */;
static val* varonce596;
val* var597 /* : String */;
char* var598 /* : NativeString */;
long var599 /* : Int */;
val* var600 /* : FlatString */;
static val* varonce601;
val* var602 /* : String */;
char* var603 /* : NativeString */;
long var604 /* : Int */;
val* var605 /* : FlatString */;
val* var606 /* : Array[String] */;
long var607 /* : Int */;
val* var608 /* : NativeArray[String] */;
val* var609 /* : OptionBool */;
static val* varonce610;
val* var611 /* : String */;
char* var612 /* : NativeString */;
long var613 /* : Int */;
val* var614 /* : FlatString */;
static val* varonce615;
val* var616 /* : String */;
char* var617 /* : NativeString */;
long var618 /* : Int */;
val* var619 /* : FlatString */;
val* var620 /* : Array[String] */;
long var621 /* : Int */;
val* var622 /* : NativeArray[String] */;
val* var623 /* : OptionBool */;
static val* varonce624;
val* var625 /* : String */;
char* var626 /* : NativeString */;
long var627 /* : Int */;
val* var628 /* : FlatString */;
static val* varonce629;
val* var630 /* : String */;
char* var631 /* : NativeString */;
long var632 /* : Int */;
val* var633 /* : FlatString */;
val* var634 /* : Array[String] */;
long var635 /* : Int */;
val* var636 /* : NativeArray[String] */;
val* var637 /* : OptionBool */;
static val* varonce638;
val* var639 /* : String */;
char* var640 /* : NativeString */;
long var641 /* : Int */;
val* var642 /* : FlatString */;
static val* varonce643;
val* var644 /* : String */;
char* var645 /* : NativeString */;
long var646 /* : Int */;
val* var647 /* : FlatString */;
val* var648 /* : Array[String] */;
long var649 /* : Int */;
val* var650 /* : NativeArray[String] */;
val* var651 /* : OptionBool */;
static val* varonce652;
val* var653 /* : String */;
char* var654 /* : NativeString */;
long var655 /* : Int */;
val* var656 /* : FlatString */;
static val* varonce657;
val* var658 /* : String */;
char* var659 /* : NativeString */;
long var660 /* : Int */;
val* var661 /* : FlatString */;
val* var662 /* : Array[String] */;
long var663 /* : Int */;
val* var664 /* : NativeArray[String] */;
val* var665 /* : OptionBool */;
static val* varonce666;
val* var667 /* : String */;
char* var668 /* : NativeString */;
long var669 /* : Int */;
val* var670 /* : FlatString */;
static val* varonce671;
val* var672 /* : String */;
char* var673 /* : NativeString */;
long var674 /* : Int */;
val* var675 /* : FlatString */;
val* var676 /* : Array[String] */;
long var677 /* : Int */;
val* var678 /* : NativeArray[String] */;
val* var679 /* : OptionBool */;
static val* varonce680;
val* var681 /* : String */;
char* var682 /* : NativeString */;
long var683 /* : Int */;
val* var684 /* : FlatString */;
static val* varonce685;
val* var686 /* : String */;
char* var687 /* : NativeString */;
long var688 /* : Int */;
val* var689 /* : FlatString */;
val* var690 /* : Array[String] */;
long var691 /* : Int */;
val* var692 /* : NativeArray[String] */;
val* var693 /* : OptionString */;
static val* varonce694;
val* var695 /* : String */;
char* var696 /* : NativeString */;
long var697 /* : Int */;
val* var698 /* : FlatString */;
static val* varonce699;
val* var700 /* : String */;
char* var701 /* : NativeString */;
long var702 /* : Int */;
val* var703 /* : FlatString */;
val* var704 /* : Array[String] */;
long var705 /* : Int */;
val* var706 /* : NativeArray[String] */;
val* var707 /* : OptionArray */;
static val* varonce708;
val* var709 /* : String */;
char* var710 /* : NativeString */;
long var711 /* : Int */;
val* var712 /* : FlatString */;
static val* varonce713;
val* var714 /* : String */;
char* var715 /* : NativeString */;
long var716 /* : Int */;
val* var717 /* : FlatString */;
val* var718 /* : Array[String] */;
long var719 /* : Int */;
val* var720 /* : NativeArray[String] */;
val* var721 /* : OptionBool */;
static val* varonce722;
val* var723 /* : String */;
char* var724 /* : NativeString */;
long var725 /* : Int */;
val* var726 /* : FlatString */;
static val* varonce727;
val* var728 /* : String */;
char* var729 /* : NativeString */;
long var730 /* : Int */;
val* var731 /* : FlatString */;
val* var732 /* : Array[String] */;
long var733 /* : Int */;
val* var734 /* : NativeArray[String] */;
val* var735 /* : OptionBool */;
static val* varonce736;
val* var737 /* : String */;
char* var738 /* : NativeString */;
long var739 /* : Int */;
val* var740 /* : FlatString */;
static val* varonce741;
val* var742 /* : String */;
char* var743 /* : NativeString */;
long var744 /* : Int */;
val* var745 /* : FlatString */;
val* var746 /* : Array[String] */;
long var747 /* : Int */;
val* var748 /* : NativeArray[String] */;
val* var749 /* : OptionBool */;
static val* varonce750;
val* var751 /* : String */;
char* var752 /* : NativeString */;
long var753 /* : Int */;
val* var754 /* : FlatString */;
static val* varonce755;
val* var756 /* : String */;
char* var757 /* : NativeString */;
long var758 /* : Int */;
val* var759 /* : FlatString */;
val* var760 /* : Array[String] */;
long var761 /* : Int */;
val* var762 /* : NativeArray[String] */;
val* var763 /* : OptionBool */;
static val* varonce764;
val* var765 /* : String */;
char* var766 /* : NativeString */;
long var767 /* : Int */;
val* var768 /* : FlatString */;
static val* varonce769;
val* var770 /* : String */;
char* var771 /* : NativeString */;
long var772 /* : Int */;
val* var773 /* : FlatString */;
val* var774 /* : Array[String] */;
long var775 /* : Int */;
val* var776 /* : NativeArray[String] */;
val* var777 /* : OptionBool */;
static val* varonce778;
val* var779 /* : String */;
char* var780 /* : NativeString */;
long var781 /* : Int */;
val* var782 /* : FlatString */;
static val* varonce783;
val* var784 /* : String */;
char* var785 /* : NativeString */;
long var786 /* : Int */;
val* var787 /* : FlatString */;
val* var788 /* : Array[String] */;
long var789 /* : Int */;
val* var790 /* : NativeArray[String] */;
val* var791 /* : OptionBool */;
static val* varonce792;
val* var793 /* : String */;
char* var794 /* : NativeString */;
long var795 /* : Int */;
val* var796 /* : FlatString */;
static val* varonce797;
val* var798 /* : String */;
char* var799 /* : NativeString */;
long var800 /* : Int */;
val* var801 /* : FlatString */;
val* var802 /* : Array[String] */;
long var803 /* : Int */;
val* var804 /* : NativeArray[String] */;
val* var805 /* : OptionBool */;
static val* varonce806;
val* var807 /* : String */;
char* var808 /* : NativeString */;
long var809 /* : Int */;
val* var810 /* : FlatString */;
static val* varonce811;
val* var812 /* : String */;
char* var813 /* : NativeString */;
long var814 /* : Int */;
val* var815 /* : FlatString */;
val* var816 /* : Array[String] */;
long var817 /* : Int */;
val* var818 /* : NativeArray[String] */;
val* var819 /* : OptionBool */;
static val* varonce820;
val* var821 /* : String */;
char* var822 /* : NativeString */;
long var823 /* : Int */;
val* var824 /* : FlatString */;
static val* varonce825;
val* var826 /* : String */;
char* var827 /* : NativeString */;
long var828 /* : Int */;
val* var829 /* : FlatString */;
val* var830 /* : Array[String] */;
long var831 /* : Int */;
val* var832 /* : NativeArray[String] */;
val* var833 /* : OptionBool */;
static val* varonce834;
val* var835 /* : String */;
char* var836 /* : NativeString */;
long var837 /* : Int */;
val* var838 /* : FlatString */;
static val* varonce839;
val* var840 /* : String */;
char* var841 /* : NativeString */;
long var842 /* : Int */;
val* var843 /* : FlatString */;
val* var844 /* : Array[String] */;
long var845 /* : Int */;
val* var846 /* : NativeArray[String] */;
val* var847 /* : OptionBool */;
static val* varonce848;
val* var849 /* : String */;
char* var850 /* : NativeString */;
long var851 /* : Int */;
val* var852 /* : FlatString */;
static val* varonce853;
val* var854 /* : String */;
char* var855 /* : NativeString */;
long var856 /* : Int */;
val* var857 /* : FlatString */;
val* var858 /* : Array[String] */;
long var859 /* : Int */;
val* var860 /* : NativeArray[String] */;
val* var861 /* : OptionBool */;
static val* varonce862;
val* var863 /* : String */;
char* var864 /* : NativeString */;
long var865 /* : Int */;
val* var866 /* : FlatString */;
static val* varonce867;
val* var868 /* : String */;
char* var869 /* : NativeString */;
long var870 /* : Int */;
val* var871 /* : FlatString */;
val* var872 /* : Array[String] */;
long var873 /* : Int */;
val* var874 /* : NativeArray[String] */;
val* var875 /* : OptionBool */;
static val* varonce876;
val* var877 /* : String */;
char* var878 /* : NativeString */;
long var879 /* : Int */;
val* var880 /* : FlatString */;
static val* varonce881;
val* var882 /* : String */;
char* var883 /* : NativeString */;
long var884 /* : Int */;
val* var885 /* : FlatString */;
val* var886 /* : Array[String] */;
long var887 /* : Int */;
val* var888 /* : NativeArray[String] */;
val* var889 /* : SeparateCompilerPhase */;
val* var890 /* : null */;
val* var891 /* : OptionBool */;
static val* varonce892;
val* var893 /* : String */;
char* var894 /* : NativeString */;
long var895 /* : Int */;
val* var896 /* : FlatString */;
static val* varonce897;
val* var898 /* : String */;
char* var899 /* : NativeString */;
long var900 /* : Int */;
val* var901 /* : FlatString */;
val* var902 /* : Array[String] */;
long var903 /* : Int */;
val* var904 /* : NativeArray[String] */;
val* var905 /* : OptionBool */;
static val* varonce906;
val* var907 /* : String */;
char* var908 /* : NativeString */;
long var909 /* : Int */;
val* var910 /* : FlatString */;
static val* varonce911;
val* var912 /* : String */;
char* var913 /* : NativeString */;
long var914 /* : Int */;
val* var915 /* : FlatString */;
val* var916 /* : Array[String] */;
long var917 /* : Int */;
val* var918 /* : NativeArray[String] */;
val* var919 /* : OptionBool */;
static val* varonce920;
val* var921 /* : String */;
char* var922 /* : NativeString */;
long var923 /* : Int */;
val* var924 /* : FlatString */;
static val* varonce925;
val* var926 /* : String */;
char* var927 /* : NativeString */;
long var928 /* : Int */;
val* var929 /* : FlatString */;
val* var930 /* : Array[String] */;
long var931 /* : Int */;
val* var932 /* : NativeArray[String] */;
val* var933 /* : ErasureCompilerPhase */;
val* var934 /* : null */;
self = nit_alloc(sizeof(struct instance) + 82*sizeof(nitattribute_t));
self->type = type;
self->class = &class_toolcontext__ToolContext;
var = 0;
self->attrs[COLOR_toolcontext__ToolContext___error_count].l = var; /* _error_count on <self:ToolContext exact> */
var1 = 0;
self->attrs[COLOR_toolcontext__ToolContext___warning_count].l = var1; /* _warning_count on <self:ToolContext exact> */
if (varonce) {
var2 = varonce;
} else {
var3 = "logs";
var4 = 4;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
self->attrs[COLOR_toolcontext__ToolContext___log_directory].val = var2; /* _log_directory on <self:ToolContext exact> */
var6 = NEW_array__Array(&type_array__Arraytoolcontext__Message);
{
((void (*)(val*))(var6->class->vft[COLOR_kernel__Object__init]))(var6) /* init on <var6:Array[Message]>*/;
}
self->attrs[COLOR_toolcontext__ToolContext___messages].val = var6; /* _messages on <self:ToolContext exact> */
{
var7 = sorter__Object__default_comparator(self);
}
self->attrs[COLOR_toolcontext__ToolContext___message_sorter].val = var7; /* _message_sorter on <self:ToolContext exact> */
var8 = NEW_opts__OptionContext(&type_opts__OptionContext);
{
((void (*)(val*))(var8->class->vft[COLOR_kernel__Object__init]))(var8) /* init on <var8:OptionContext>*/;
}
self->attrs[COLOR_toolcontext__ToolContext___option_context].val = var8; /* _option_context on <self:ToolContext exact> */
var9 = NEW_opts__OptionCount(&type_opts__OptionCount);
if (varonce10) {
var11 = varonce10;
} else {
var12 = "Show more warnings";
var13 = 18;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = "-W";
var18 = 2;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "--warn";
var23 = 6;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var25 = array_instance Array[String] */
var26 = 2;
var27 = NEW_array__NativeArray(var26, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var27)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var27)->values[1] = (val*) var21;
{
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[String]>*/;
}
}
{
opts__OptionCount__init(var9, var11, var25); /* Direct call opts#OptionCount#init on <var9:OptionCount>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_warn].val = var9; /* _opt_warn on <self:ToolContext exact> */
var28 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (varonce29) {
var30 = varonce29;
} else {
var31 = "Show/hide a specific warning";
var32 = 28;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = "-w";
var37 = 2;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = "--warning";
var42 = 9;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var44 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var44 = array_instance Array[String] */
var45 = 2;
var46 = NEW_array__NativeArray(var45, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var46)->values[0] = (val*) var35;
((struct instance_array__NativeArray*)var46)->values[1] = (val*) var40;
{
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[String]>*/;
}
}
{
opts__OptionArray__init(var28, var30, var44); /* Direct call opts#OptionArray#init on <var28:OptionArray>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_warning].val = var28; /* _opt_warning on <self:ToolContext exact> */
var47 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce48) {
var49 = varonce48;
} else {
var50 = "Do not show warnings";
var51 = 20;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = "-q";
var56 = 2;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = "--quiet";
var61 = 7;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var63 = array_instance Array[String] */
var64 = 2;
var65 = NEW_array__NativeArray(var64, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var65)->values[0] = (val*) var54;
((struct instance_array__NativeArray*)var65)->values[1] = (val*) var59;
{
((void (*)(val*, val*, long))(var63->class->vft[COLOR_array__Array__with_native]))(var63, var65, var64) /* with_native on <var63:Array[String]>*/;
}
}
{
opts__OptionBool__init(var47, var49, var63); /* Direct call opts#OptionBool#init on <var47:OptionBool>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_quiet].val = var47; /* _opt_quiet on <self:ToolContext exact> */
var66 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce67) {
var68 = varonce67;
} else {
var69 = "Generate various log files";
var70 = 26;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
if (varonce72) {
var73 = varonce72;
} else {
var74 = "--log";
var75 = 5;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var77 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var77 = array_instance Array[String] */
var78 = 1;
var79 = NEW_array__NativeArray(var78, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var79)->values[0] = (val*) var73;
{
((void (*)(val*, val*, long))(var77->class->vft[COLOR_array__Array__with_native]))(var77, var79, var78) /* with_native on <var77:Array[String]>*/;
}
}
{
opts__OptionBool__init(var66, var68, var77); /* Direct call opts#OptionBool#init on <var66:OptionBool>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_log].val = var66; /* _opt_log on <self:ToolContext exact> */
var80 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce81) {
var82 = varonce81;
} else {
var83 = "Directory where to generate log files";
var84 = 37;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
if (varonce86) {
var87 = varonce86;
} else {
var88 = "--log-dir";
var89 = 9;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
var91 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var91 = array_instance Array[String] */
var92 = 1;
var93 = NEW_array__NativeArray(var92, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var93)->values[0] = (val*) var87;
{
((void (*)(val*, val*, long))(var91->class->vft[COLOR_array__Array__with_native]))(var91, var93, var92) /* with_native on <var91:Array[String]>*/;
}
}
{
opts__OptionString__init(var80, var82, var91); /* Direct call opts#OptionString#init on <var80:OptionString>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_log_dir].val = var80; /* _opt_log_dir on <self:ToolContext exact> */
var94 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce95) {
var96 = varonce95;
} else {
var97 = "Show Help (This screen)";
var98 = 23;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
if (varonce100) {
var101 = varonce100;
} else {
var102 = "-h";
var103 = 2;
var104 = string__NativeString__to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = "-?";
var108 = 2;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
if (varonce110) {
var111 = varonce110;
} else {
var112 = "--help";
var113 = 6;
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
var115 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var115 = array_instance Array[String] */
var116 = 3;
var117 = NEW_array__NativeArray(var116, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var117)->values[0] = (val*) var101;
((struct instance_array__NativeArray*)var117)->values[1] = (val*) var106;
((struct instance_array__NativeArray*)var117)->values[2] = (val*) var111;
{
((void (*)(val*, val*, long))(var115->class->vft[COLOR_array__Array__with_native]))(var115, var117, var116) /* with_native on <var115:Array[String]>*/;
}
}
{
opts__OptionBool__init(var94, var96, var115); /* Direct call opts#OptionBool#init on <var94:OptionBool>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_help].val = var94; /* _opt_help on <self:ToolContext exact> */
var118 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce119) {
var120 = varonce119;
} else {
var121 = "Show version and exit";
var122 = 21;
var123 = string__NativeString__to_s_with_length(var121, var122);
var120 = var123;
varonce119 = var120;
}
if (varonce124) {
var125 = varonce124;
} else {
var126 = "--version";
var127 = 9;
var128 = string__NativeString__to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
var129 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var129 = array_instance Array[String] */
var130 = 1;
var131 = NEW_array__NativeArray(var130, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var131)->values[0] = (val*) var125;
{
((void (*)(val*, val*, long))(var129->class->vft[COLOR_array__Array__with_native]))(var129, var131, var130) /* with_native on <var129:Array[String]>*/;
}
}
{
opts__OptionBool__init(var118, var120, var129); /* Direct call opts#OptionBool#init on <var118:OptionBool>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_version].val = var118; /* _opt_version on <self:ToolContext exact> */
var132 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce133) {
var134 = varonce133;
} else {
var135 = "Set toolname and version to DUMMY. Useful for testing";
var136 = 53;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = "--set-dummy-tool";
var141 = 16;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
var143 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var143 = array_instance Array[String] */
var144 = 1;
var145 = NEW_array__NativeArray(var144, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var145)->values[0] = (val*) var139;
{
((void (*)(val*, val*, long))(var143->class->vft[COLOR_array__Array__with_native]))(var143, var145, var144) /* with_native on <var143:Array[String]>*/;
}
}
{
opts__OptionBool__init(var132, var134, var143); /* Direct call opts#OptionBool#init on <var132:OptionBool>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_set_dummy_tool].val = var132; /* _opt_set_dummy_tool on <self:ToolContext exact> */
var146 = NEW_opts__OptionCount(&type_opts__OptionCount);
if (varonce147) {
var148 = varonce147;
} else {
var149 = "Verbose";
var150 = 7;
var151 = string__NativeString__to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
if (varonce152) {
var153 = varonce152;
} else {
var154 = "-v";
var155 = 2;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
if (varonce157) {
var158 = varonce157;
} else {
var159 = "--verbose";
var160 = 9;
var161 = string__NativeString__to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
var162 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var162 = array_instance Array[String] */
var163 = 2;
var164 = NEW_array__NativeArray(var163, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var164)->values[0] = (val*) var153;
((struct instance_array__NativeArray*)var164)->values[1] = (val*) var158;
{
((void (*)(val*, val*, long))(var162->class->vft[COLOR_array__Array__with_native]))(var162, var164, var163) /* with_native on <var162:Array[String]>*/;
}
}
{
opts__OptionCount__init(var146, var148, var162); /* Direct call opts#OptionCount#init on <var146:OptionCount>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_verbose].val = var146; /* _opt_verbose on <self:ToolContext exact> */
var165 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce166) {
var167 = varonce166;
} else {
var168 = "Stop on first error";
var169 = 19;
var170 = string__NativeString__to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
if (varonce171) {
var172 = varonce171;
} else {
var173 = "--stop-on-first-error";
var174 = 21;
var175 = string__NativeString__to_s_with_length(var173, var174);
var172 = var175;
varonce171 = var172;
}
var176 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var176 = array_instance Array[String] */
var177 = 1;
var178 = NEW_array__NativeArray(var177, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var178)->values[0] = (val*) var172;
{
((void (*)(val*, val*, long))(var176->class->vft[COLOR_array__Array__with_native]))(var176, var178, var177) /* with_native on <var176:Array[String]>*/;
}
}
{
opts__OptionBool__init(var165, var167, var176); /* Direct call opts#OptionBool#init on <var165:OptionBool>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_stop_on_first_error].val = var165; /* _opt_stop_on_first_error on <self:ToolContext exact> */
var179 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce180) {
var181 = varonce180;
} else {
var182 = "Do not use color to display errors and warnings";
var183 = 47;
var184 = string__NativeString__to_s_with_length(var182, var183);
var181 = var184;
varonce180 = var181;
}
if (varonce185) {
var186 = varonce185;
} else {
var187 = "--no-color";
var188 = 10;
var189 = string__NativeString__to_s_with_length(var187, var188);
var186 = var189;
varonce185 = var186;
}
var190 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var190 = array_instance Array[String] */
var191 = 1;
var192 = NEW_array__NativeArray(var191, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var192)->values[0] = (val*) var186;
{
((void (*)(val*, val*, long))(var190->class->vft[COLOR_array__Array__with_native]))(var190, var192, var191) /* with_native on <var190:Array[String]>*/;
}
}
{
opts__OptionBool__init(var179, var181, var190); /* Direct call opts#OptionBool#init on <var179:OptionBool>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_no_color].val = var179; /* _opt_no_color on <self:ToolContext exact> */
var193 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce194) {
var195 = varonce194;
} else {
var196 = "Generate bash_completion file for this program";
var197 = 46;
var198 = string__NativeString__to_s_with_length(var196, var197);
var195 = var198;
varonce194 = var195;
}
if (varonce199) {
var200 = varonce199;
} else {
var201 = "--bash-completion";
var202 = 17;
var203 = string__NativeString__to_s_with_length(var201, var202);
var200 = var203;
varonce199 = var200;
}
var204 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var204 = array_instance Array[String] */
var205 = 1;
var206 = NEW_array__NativeArray(var205, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var206)->values[0] = (val*) var200;
{
((void (*)(val*, val*, long))(var204->class->vft[COLOR_array__Array__with_native]))(var204, var206, var205) /* with_native on <var204:Array[String]>*/;
}
}
{
opts__OptionBool__init(var193, var195, var204); /* Direct call opts#OptionBool#init on <var193:OptionBool>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_bash_completion].val = var193; /* _opt_bash_completion on <self:ToolContext exact> */
var207 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce208) {
var209 = varonce208;
} else {
var210 = "Generate a stub manpage in pandoc markdown format";
var211 = 49;
var212 = string__NativeString__to_s_with_length(var210, var211);
var209 = var212;
varonce208 = var209;
}
if (varonce213) {
var214 = varonce213;
} else {
var215 = "--stub-man";
var216 = 10;
var217 = string__NativeString__to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
var218 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var218 = array_instance Array[String] */
var219 = 1;
var220 = NEW_array__NativeArray(var219, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var220)->values[0] = (val*) var214;
{
((void (*)(val*, val*, long))(var218->class->vft[COLOR_array__Array__with_native]))(var218, var220, var219) /* with_native on <var218:Array[String]>*/;
}
}
{
opts__OptionBool__init(var207, var209, var218); /* Direct call opts#OptionBool#init on <var207:OptionBool>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_stub_man].val = var207; /* _opt_stub_man on <self:ToolContext exact> */
var221 = 0;
self->attrs[COLOR_toolcontext__ToolContext___verbose_level].l = var221; /* _verbose_level on <self:ToolContext exact> */
if (varonce222) {
var223 = varonce222;
} else {
var224 = "Usage: [OPTION]... [ARG]...";
var225 = 27;
var226 = string__NativeString__to_s_with_length(var224, var225);
var223 = var226;
varonce222 = var223;
}
self->attrs[COLOR_toolcontext__ToolContext___tooldescription].val = var223; /* _tooldescription on <self:ToolContext exact> */
var227 = 0;
self->attrs[COLOR_toolcontext__ToolContext___accept_no_arguments].s = var227; /* _accept_no_arguments on <self:ToolContext exact> */
var228 = NULL;
self->attrs[COLOR_toolcontext__ToolContext___nit_dir].val = var228; /* _nit_dir on <self:ToolContext exact> */
var229 = NEW_poset__POSet(&type_poset__POSetphase__Phase);
{
((void (*)(val*))(var229->class->vft[COLOR_kernel__Object__init]))(var229) /* init on <var229:POSet[Phase]>*/;
}
self->attrs[COLOR_phase__ToolContext___phases].val = var229; /* _phases on <self:ToolContext exact> */
var230 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (varonce231) {
var232 = varonce231;
} else {
var233 = "DEBUG: Disable a specific phase; use `list` to get the list.";
var234 = 60;
var235 = string__NativeString__to_s_with_length(var233, var234);
var232 = var235;
varonce231 = var232;
}
if (varonce236) {
var237 = varonce236;
} else {
var238 = "--disable-phase";
var239 = 15;
var240 = string__NativeString__to_s_with_length(var238, var239);
var237 = var240;
varonce236 = var237;
}
var241 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var241 = array_instance Array[String] */
var242 = 1;
var243 = NEW_array__NativeArray(var242, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var243)->values[0] = (val*) var237;
{
((void (*)(val*, val*, long))(var241->class->vft[COLOR_array__Array__with_native]))(var241, var243, var242) /* with_native on <var241:Array[String]>*/;
}
}
{
opts__OptionArray__init(var230, var232, var241); /* Direct call opts#OptionArray#init on <var230:OptionArray>*/
}
self->attrs[COLOR_phase__ToolContext___opt_disable_phase].val = var230; /* _opt_disable_phase on <self:ToolContext exact> */
var244 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetparser_nodes__AModule);
{
((void (*)(val*))(var244->class->vft[COLOR_kernel__Object__init]))(var244) /* init on <var244:HashSet[AModule]>*/;
}
self->attrs[COLOR_phase__ToolContext___phased_modules].val = var244; /* _phased_modules on <self:ToolContext exact> */
var245 = NEW_literal__LiteralPhase(&type_literal__LiteralPhase);
var246 = NULL;
{
phase__Phase__init(var245, self, var246); /* Direct call phase#Phase#init on <var245:LiteralPhase>*/
}
self->attrs[COLOR_literal__ToolContext___literal_phase].val = var245; /* _literal_phase on <self:ToolContext exact> */
var247 = NEW_scope__ScopePhase(&type_scope__ScopePhase);
var248 = NULL;
{
phase__Phase__init(var247, self, var248); /* Direct call phase#Phase#init on <var247:ScopePhase>*/
}
self->attrs[COLOR_scope__ToolContext___scope_phase].val = var247; /* _scope_phase on <self:ToolContext exact> */
var249 = NEW_flow__FlowPhase(&type_flow__FlowPhase);
var250 = NEW_array__Array(&type_array__Arrayphase__Phase);
var251 = 1;
{
array__Array__with_capacity(var250, var251); /* Direct call array#Array#with_capacity on <var250:Array[Phase]>*/
}
var_ = var250;
{
{ /* Inline scope#ToolContext#scope_phase (self) on <self:ToolContext exact> */
var253 = self->attrs[COLOR_scope__ToolContext___scope_phase].val; /* _scope_phase on <self:ToolContext exact> */
if (unlikely(var253 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scope_phase");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 23);
show_backtrace(1);
}
var252 = var253;
RET_LABEL:(void)0;
}
}
{
array__AbstractArray__push(var_, var252); /* Direct call array#AbstractArray#push on <var_:Array[Phase]>*/
}
{
phase__Phase__init(var249, self, var_); /* Direct call phase#Phase#init on <var249:FlowPhase>*/
}
self->attrs[COLOR_flow__ToolContext___flow_phase].val = var249; /* _flow_phase on <self:ToolContext exact> */
var254 = NEW_local_var_init__LocalVarInitPhase(&type_local_var_init__LocalVarInitPhase);
var255 = NEW_array__Array(&type_array__Arrayphase__Phase);
var256 = 1;
{
array__Array__with_capacity(var255, var256); /* Direct call array#Array#with_capacity on <var255:Array[Phase]>*/
}
var_257 = var255;
{
{ /* Inline flow#ToolContext#flow_phase (self) on <self:ToolContext exact> */
var260 = self->attrs[COLOR_flow__ToolContext___flow_phase].val; /* _flow_phase on <self:ToolContext exact> */
if (unlikely(var260 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flow_phase");
PRINT_ERROR(" (%s:%d)\n", "semantize/flow.nit", 23);
show_backtrace(1);
}
var258 = var260;
RET_LABEL259:(void)0;
}
}
{
array__AbstractArray__push(var_257, var258); /* Direct call array#AbstractArray#push on <var_257:Array[Phase]>*/
}
{
phase__Phase__init(var254, self, var_257); /* Direct call phase#Phase#init on <var254:LocalVarInitPhase>*/
}
self->attrs[COLOR_local_var_init__ToolContext___local_var_init_phase].val = var254; /* _local_var_init_phase on <self:ToolContext exact> */
var261 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (varonce262) {
var263 = varonce262;
} else {
var264 = "Set include path for loaders (may be used more than once)";
var265 = 57;
var266 = string__NativeString__to_s_with_length(var264, var265);
var263 = var266;
varonce262 = var263;
}
if (varonce267) {
var268 = varonce267;
} else {
var269 = "-I";
var270 = 2;
var271 = string__NativeString__to_s_with_length(var269, var270);
var268 = var271;
varonce267 = var268;
}
if (varonce272) {
var273 = varonce272;
} else {
var274 = "--path";
var275 = 6;
var276 = string__NativeString__to_s_with_length(var274, var275);
var273 = var276;
varonce272 = var273;
}
var277 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var277 = array_instance Array[String] */
var278 = 2;
var279 = NEW_array__NativeArray(var278, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var279)->values[0] = (val*) var268;
((struct instance_array__NativeArray*)var279)->values[1] = (val*) var273;
{
((void (*)(val*, val*, long))(var277->class->vft[COLOR_array__Array__with_native]))(var277, var279, var278) /* with_native on <var277:Array[String]>*/;
}
}
{
opts__OptionArray__init(var261, var263, var277); /* Direct call opts#OptionArray#init on <var261:OptionArray>*/
}
self->attrs[COLOR_modelbuilder__ToolContext___opt_path].val = var261; /* _opt_path on <self:ToolContext exact> */
var280 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce281) {
var282 = varonce281;
} else {
var283 = "Stop after meta-model processing";
var284 = 32;
var285 = string__NativeString__to_s_with_length(var283, var284);
var282 = var285;
varonce281 = var282;
}
if (varonce286) {
var287 = varonce286;
} else {
var288 = "--only-metamodel";
var289 = 16;
var290 = string__NativeString__to_s_with_length(var288, var289);
var287 = var290;
varonce286 = var287;
}
var291 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var291 = array_instance Array[String] */
var292 = 1;
var293 = NEW_array__NativeArray(var292, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var293)->values[0] = (val*) var287;
{
((void (*)(val*, val*, long))(var291->class->vft[COLOR_array__Array__with_native]))(var291, var293, var292) /* with_native on <var291:Array[String]>*/;
}
}
{
opts__OptionBool__init(var280, var282, var291); /* Direct call opts#OptionBool#init on <var280:OptionBool>*/
}
self->attrs[COLOR_modelbuilder__ToolContext___opt_only_metamodel].val = var280; /* _opt_only_metamodel on <self:ToolContext exact> */
var294 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce295) {
var296 = varonce295;
} else {
var297 = "Only proceed to parse step of loaders";
var298 = 37;
var299 = string__NativeString__to_s_with_length(var297, var298);
var296 = var299;
varonce295 = var296;
}
if (varonce300) {
var301 = varonce300;
} else {
var302 = "--only-parse";
var303 = 12;
var304 = string__NativeString__to_s_with_length(var302, var303);
var301 = var304;
varonce300 = var301;
}
var305 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var305 = array_instance Array[String] */
var306 = 1;
var307 = NEW_array__NativeArray(var306, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var307)->values[0] = (val*) var301;
{
((void (*)(val*, val*, long))(var305->class->vft[COLOR_array__Array__with_native]))(var305, var307, var306) /* with_native on <var305:Array[String]>*/;
}
}
{
opts__OptionBool__init(var294, var296, var305); /* Direct call opts#OptionBool#init on <var294:OptionBool>*/
}
self->attrs[COLOR_modelbuilder__ToolContext___opt_only_parse].val = var294; /* _opt_only_parse on <self:ToolContext exact> */
var308 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce309) {
var310 = varonce309;
} else {
var311 = "Do not check, and produce errors, on visibility issues.";
var312 = 55;
var313 = string__NativeString__to_s_with_length(var311, var312);
var310 = var313;
varonce309 = var310;
}
if (varonce314) {
var315 = varonce314;
} else {
var316 = "--ignore-visibility";
var317 = 19;
var318 = string__NativeString__to_s_with_length(var316, var317);
var315 = var318;
varonce314 = var315;
}
var319 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var319 = array_instance Array[String] */
var320 = 1;
var321 = NEW_array__NativeArray(var320, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var321)->values[0] = (val*) var315;
{
((void (*)(val*, val*, long))(var319->class->vft[COLOR_array__Array__with_native]))(var319, var321, var320) /* with_native on <var319:Array[String]>*/;
}
}
{
opts__OptionBool__init(var308, var310, var319); /* Direct call opts#OptionBool#init on <var308:OptionBool>*/
}
self->attrs[COLOR_modelbuilder__ToolContext___opt_ignore_visibility].val = var308; /* _opt_ignore_visibility on <self:ToolContext exact> */
var322 = NULL;
self->attrs[COLOR_modelbuilder__ToolContext___modelbuilder_real].val = var322; /* _modelbuilder_real on <self:ToolContext exact> */
var323 = NEW_modelize_class__ModelizeClassPhase(&type_modelize_class__ModelizeClassPhase);
var324 = NULL;
{
phase__Phase__init(var323, self, var324); /* Direct call phase#Phase#init on <var323:ModelizeClassPhase>*/
}
self->attrs[COLOR_modelize_class__ToolContext___modelize_class_phase].val = var323; /* _modelize_class_phase on <self:ToolContext exact> */
var325 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (varonce326) {
var327 = varonce326;
} else {
var328 = "Additionals module to min-in";
var329 = 28;
var330 = string__NativeString__to_s_with_length(var328, var329);
var327 = var330;
varonce326 = var327;
}
if (varonce331) {
var332 = varonce331;
} else {
var333 = "-m";
var334 = 2;
var335 = string__NativeString__to_s_with_length(var333, var334);
var332 = var335;
varonce331 = var332;
}
if (varonce336) {
var337 = varonce336;
} else {
var338 = "--mixin";
var339 = 7;
var340 = string__NativeString__to_s_with_length(var338, var339);
var337 = var340;
varonce336 = var337;
}
var341 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var341 = array_instance Array[String] */
var342 = 2;
var343 = NEW_array__NativeArray(var342, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var343)->values[0] = (val*) var332;
((struct instance_array__NativeArray*)var343)->values[1] = (val*) var337;
{
((void (*)(val*, val*, long))(var341->class->vft[COLOR_array__Array__with_native]))(var341, var343, var342) /* with_native on <var341:Array[String]>*/;
}
}
{
opts__OptionArray__init(var325, var327, var341); /* Direct call opts#OptionArray#init on <var325:OptionArray>*/
}
self->attrs[COLOR_mixin__ToolContext___opt_mixins].val = var325; /* _opt_mixins on <self:ToolContext exact> */
var344 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (varonce345) {
var346 = varonce345;
} else {
var347 = "Define a specific property";
var348 = 26;
var349 = string__NativeString__to_s_with_length(var347, var348);
var346 = var349;
varonce345 = var346;
}
if (varonce350) {
var351 = varonce350;
} else {
var352 = "-D";
var353 = 2;
var354 = string__NativeString__to_s_with_length(var352, var353);
var351 = var354;
varonce350 = var351;
}
if (varonce355) {
var356 = varonce355;
} else {
var357 = "--define";
var358 = 8;
var359 = string__NativeString__to_s_with_length(var357, var358);
var356 = var359;
varonce355 = var356;
}
var360 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var360 = array_instance Array[String] */
var361 = 2;
var362 = NEW_array__NativeArray(var361, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var362)->values[0] = (val*) var351;
((struct instance_array__NativeArray*)var362)->values[1] = (val*) var356;
{
((void (*)(val*, val*, long))(var360->class->vft[COLOR_array__Array__with_native]))(var360, var362, var361) /* with_native on <var360:Array[String]>*/;
}
}
{
opts__OptionArray__init(var344, var346, var360); /* Direct call opts#OptionArray#init on <var344:OptionArray>*/
}
self->attrs[COLOR_mixin__ToolContext___opt_defines].val = var344; /* _opt_defines on <self:ToolContext exact> */
var363 = NEW_modelize_property__ModelizePropertyPhase(&type_modelize_property__ModelizePropertyPhase);
var364 = NEW_array__Array(&type_array__Arrayphase__Phase);
var365 = 1;
{
array__Array__with_capacity(var364, var365); /* Direct call array#Array#with_capacity on <var364:Array[Phase]>*/
}
var_366 = var364;
{
{ /* Inline modelize_class#ToolContext#modelize_class_phase (self) on <self:ToolContext exact> */
var369 = self->attrs[COLOR_modelize_class__ToolContext___modelize_class_phase].val; /* _modelize_class_phase on <self:ToolContext exact> */
if (unlikely(var369 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_class_phase");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 23);
show_backtrace(1);
}
var367 = var369;
RET_LABEL368:(void)0;
}
}
{
array__AbstractArray__push(var_366, var367); /* Direct call array#AbstractArray#push on <var_366:Array[Phase]>*/
}
{
phase__Phase__init(var363, self, var_366); /* Direct call phase#Phase#init on <var363:ModelizePropertyPhase>*/
}
self->attrs[COLOR_modelize_property__ToolContext___modelize_property_phase].val = var363; /* _modelize_property_phase on <self:ToolContext exact> */
var370 = NEW_platform__PlatformPhase(&type_platform__PlatformPhase);
var371 = NEW_array__Array(&type_array__Arrayphase__Phase);
var372 = 1;
{
array__Array__with_capacity(var371, var372); /* Direct call array#Array#with_capacity on <var371:Array[Phase]>*/
}
var_373 = var371;
{
{ /* Inline modelize_property#ToolContext#modelize_property_phase (self) on <self:ToolContext exact> */
var376 = self->attrs[COLOR_modelize_property__ToolContext___modelize_property_phase].val; /* _modelize_property_phase on <self:ToolContext exact> */
if (unlikely(var376 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_property_phase");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 24);
show_backtrace(1);
}
var374 = var376;
RET_LABEL375:(void)0;
}
}
{
array__AbstractArray__push(var_373, var374); /* Direct call array#AbstractArray#push on <var_373:Array[Phase]>*/
}
{
phase__Phase__init(var370, self, var_373); /* Direct call phase#Phase#init on <var370:PlatformPhase>*/
}
self->attrs[COLOR_platform__ToolContext___platform_phase].val = var370; /* _platform_phase on <self:ToolContext exact> */
var377 = NEW_typing__TypingPhase(&type_typing__TypingPhase);
var378 = NEW_array__Array(&type_array__Arrayphase__Phase);
var379 = 3;
{
array__Array__with_capacity(var378, var379); /* Direct call array#Array#with_capacity on <var378:Array[Phase]>*/
}
var_380 = var378;
{
{ /* Inline flow#ToolContext#flow_phase (self) on <self:ToolContext exact> */
var383 = self->attrs[COLOR_flow__ToolContext___flow_phase].val; /* _flow_phase on <self:ToolContext exact> */
if (unlikely(var383 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flow_phase");
PRINT_ERROR(" (%s:%d)\n", "semantize/flow.nit", 23);
show_backtrace(1);
}
var381 = var383;
RET_LABEL382:(void)0;
}
}
{
array__AbstractArray__push(var_380, var381); /* Direct call array#AbstractArray#push on <var_380:Array[Phase]>*/
}
{
{ /* Inline modelize_property#ToolContext#modelize_property_phase (self) on <self:ToolContext exact> */
var386 = self->attrs[COLOR_modelize_property__ToolContext___modelize_property_phase].val; /* _modelize_property_phase on <self:ToolContext exact> */
if (unlikely(var386 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_property_phase");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 24);
show_backtrace(1);
}
var384 = var386;
RET_LABEL385:(void)0;
}
}
{
array__AbstractArray__push(var_380, var384); /* Direct call array#AbstractArray#push on <var_380:Array[Phase]>*/
}
{
{ /* Inline local_var_init#ToolContext#local_var_init_phase (self) on <self:ToolContext exact> */
var389 = self->attrs[COLOR_local_var_init__ToolContext___local_var_init_phase].val; /* _local_var_init_phase on <self:ToolContext exact> */
if (unlikely(var389 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _local_var_init_phase");
PRINT_ERROR(" (%s:%d)\n", "semantize/local_var_init.nit", 24);
show_backtrace(1);
}
var387 = var389;
RET_LABEL388:(void)0;
}
}
{
array__AbstractArray__push(var_380, var387); /* Direct call array#AbstractArray#push on <var_380:Array[Phase]>*/
}
{
phase__Phase__init(var377, self, var_380); /* Direct call phase#Phase#init on <var377:TypingPhase>*/
}
self->attrs[COLOR_typing__ToolContext___typing_phase].val = var377; /* _typing_phase on <self:ToolContext exact> */
var390 = NEW_auto_super_init__AutoSuperInitPhase(&type_auto_super_init__AutoSuperInitPhase);
var391 = NEW_array__Array(&type_array__Arrayphase__Phase);
var392 = 1;
{
array__Array__with_capacity(var391, var392); /* Direct call array#Array#with_capacity on <var391:Array[Phase]>*/
}
var_393 = var391;
{
{ /* Inline typing#ToolContext#typing_phase (self) on <self:ToolContext exact> */
var396 = self->attrs[COLOR_typing__ToolContext___typing_phase].val; /* _typing_phase on <self:ToolContext exact> */
if (unlikely(var396 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _typing_phase");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 25);
show_backtrace(1);
}
var394 = var396;
RET_LABEL395:(void)0;
}
}
{
array__AbstractArray__push(var_393, var394); /* Direct call array#AbstractArray#push on <var_393:Array[Phase]>*/
}
{
phase__Phase__init(var390, self, var_393); /* Direct call phase#Phase#init on <var390:AutoSuperInitPhase>*/
}
self->attrs[COLOR_auto_super_init__ToolContext___auto_super_init_phase].val = var390; /* _auto_super_init_phase on <self:ToolContext exact> */
var397 = NEW_transform__TransformPhase(&type_transform__TransformPhase);
var398 = NEW_array__Array(&type_array__Arrayphase__Phase);
var399 = 2;
{
array__Array__with_capacity(var398, var399); /* Direct call array#Array#with_capacity on <var398:Array[Phase]>*/
}
var_400 = var398;
{
{ /* Inline typing#ToolContext#typing_phase (self) on <self:ToolContext exact> */
var403 = self->attrs[COLOR_typing__ToolContext___typing_phase].val; /* _typing_phase on <self:ToolContext exact> */
if (unlikely(var403 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _typing_phase");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 25);
show_backtrace(1);
}
var401 = var403;
RET_LABEL402:(void)0;
}
}
{
array__AbstractArray__push(var_400, var401); /* Direct call array#AbstractArray#push on <var_400:Array[Phase]>*/
}
{
{ /* Inline auto_super_init#ToolContext#auto_super_init_phase (self) on <self:ToolContext exact> */
var406 = self->attrs[COLOR_auto_super_init__ToolContext___auto_super_init_phase].val; /* _auto_super_init_phase on <self:ToolContext exact> */
if (unlikely(var406 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _auto_super_init_phase");
PRINT_ERROR(" (%s:%d)\n", "semantize/auto_super_init.nit", 25);
show_backtrace(1);
}
var404 = var406;
RET_LABEL405:(void)0;
}
}
{
array__AbstractArray__push(var_400, var404); /* Direct call array#AbstractArray#push on <var_400:Array[Phase]>*/
}
{
phase__Phase__init(var397, self, var_400); /* Direct call phase#Phase#init on <var397:TransformPhase>*/
}
self->attrs[COLOR_transform__ToolContext___transform_phase].val = var397; /* _transform_phase on <self:ToolContext exact> */
var407 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce408) {
var409 = varonce408;
} else {
var410 = "Always insantiate a range and its iterator on \'for\' loops";
var411 = 57;
var412 = string__NativeString__to_s_with_length(var410, var411);
var409 = var412;
varonce408 = var409;
}
if (varonce413) {
var414 = varonce413;
} else {
var415 = "--no-shortcut-range";
var416 = 19;
var417 = string__NativeString__to_s_with_length(var415, var416);
var414 = var417;
varonce413 = var414;
}
var418 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var418 = array_instance Array[String] */
var419 = 1;
var420 = NEW_array__NativeArray(var419, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var420)->values[0] = (val*) var414;
{
((void (*)(val*, val*, long))(var418->class->vft[COLOR_array__Array__with_native]))(var418, var420, var419) /* with_native on <var418:Array[String]>*/;
}
}
{
opts__OptionBool__init(var407, var409, var418); /* Direct call opts#OptionBool#init on <var407:OptionBool>*/
}
self->attrs[COLOR_transform__ToolContext___opt_no_shortcut_range].val = var407; /* _opt_no_shortcut_range on <self:ToolContext exact> */
var421 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce422) {
var423 = varonce422;
} else {
var424 = "Output file";
var425 = 11;
var426 = string__NativeString__to_s_with_length(var424, var425);
var423 = var426;
varonce422 = var423;
}
if (varonce427) {
var428 = varonce427;
} else {
var429 = "-o";
var430 = 2;
var431 = string__NativeString__to_s_with_length(var429, var430);
var428 = var431;
varonce427 = var428;
}
if (varonce432) {
var433 = varonce432;
} else {
var434 = "--output";
var435 = 8;
var436 = string__NativeString__to_s_with_length(var434, var435);
var433 = var436;
varonce432 = var433;
}
var437 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var437 = array_instance Array[String] */
var438 = 2;
var439 = NEW_array__NativeArray(var438, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var439)->values[0] = (val*) var428;
((struct instance_array__NativeArray*)var439)->values[1] = (val*) var433;
{
((void (*)(val*, val*, long))(var437->class->vft[COLOR_array__Array__with_native]))(var437, var439, var438) /* with_native on <var437:Array[String]>*/;
}
}
{
opts__OptionString__init(var421, var423, var437); /* Direct call opts#OptionString#init on <var421:OptionString>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_output].val = var421; /* _opt_output on <self:ToolContext exact> */
var440 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce441) {
var442 = varonce441;
} else {
var443 = "Output directory";
var444 = 16;
var445 = string__NativeString__to_s_with_length(var443, var444);
var442 = var445;
varonce441 = var442;
}
if (varonce446) {
var447 = varonce446;
} else {
var448 = "--dir";
var449 = 5;
var450 = string__NativeString__to_s_with_length(var448, var449);
var447 = var450;
varonce446 = var447;
}
var451 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var451 = array_instance Array[String] */
var452 = 1;
var453 = NEW_array__NativeArray(var452, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var453)->values[0] = (val*) var447;
{
((void (*)(val*, val*, long))(var451->class->vft[COLOR_array__Array__with_native]))(var451, var453, var452) /* with_native on <var451:Array[String]>*/;
}
}
{
opts__OptionString__init(var440, var442, var451); /* Direct call opts#OptionString#init on <var440:OptionString>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_dir].val = var440; /* _opt_dir on <self:ToolContext exact> */
var454 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce455) {
var456 = varonce455;
} else {
var457 = "Do not invoke C compiler";
var458 = 24;
var459 = string__NativeString__to_s_with_length(var457, var458);
var456 = var459;
varonce455 = var456;
}
if (varonce460) {
var461 = varonce460;
} else {
var462 = "--no-cc";
var463 = 7;
var464 = string__NativeString__to_s_with_length(var462, var463);
var461 = var464;
varonce460 = var461;
}
var465 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var465 = array_instance Array[String] */
var466 = 1;
var467 = NEW_array__NativeArray(var466, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var467)->values[0] = (val*) var461;
{
((void (*)(val*, val*, long))(var465->class->vft[COLOR_array__Array__with_native]))(var465, var467, var466) /* with_native on <var465:Array[String]>*/;
}
}
{
opts__OptionBool__init(var454, var456, var465); /* Direct call opts#OptionBool#init on <var454:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_cc].val = var454; /* _opt_no_cc on <self:ToolContext exact> */
var468 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce469) {
var470 = varonce469;
} else {
var471 = "Do not generate main entry point";
var472 = 32;
var473 = string__NativeString__to_s_with_length(var471, var472);
var470 = var473;
varonce469 = var470;
}
if (varonce474) {
var475 = varonce474;
} else {
var476 = "--no-main";
var477 = 9;
var478 = string__NativeString__to_s_with_length(var476, var477);
var475 = var478;
varonce474 = var475;
}
var479 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var479 = array_instance Array[String] */
var480 = 1;
var481 = NEW_array__NativeArray(var480, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var481)->values[0] = (val*) var475;
{
((void (*)(val*, val*, long))(var479->class->vft[COLOR_array__Array__with_native]))(var479, var481, var480) /* with_native on <var479:Array[String]>*/;
}
}
{
opts__OptionBool__init(var468, var470, var479); /* Direct call opts#OptionBool#init on <var468:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_main].val = var468; /* _opt_no_main on <self:ToolContext exact> */
var482 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (varonce483) {
var484 = varonce483;
} else {
var485 = "Set include path for C header files (may be used more than once)";
var486 = 64;
var487 = string__NativeString__to_s_with_length(var485, var486);
var484 = var487;
varonce483 = var484;
}
if (varonce488) {
var489 = varonce488;
} else {
var490 = "--cc-path";
var491 = 9;
var492 = string__NativeString__to_s_with_length(var490, var491);
var489 = var492;
varonce488 = var489;
}
var493 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var493 = array_instance Array[String] */
var494 = 1;
var495 = NEW_array__NativeArray(var494, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var495)->values[0] = (val*) var489;
{
((void (*)(val*, val*, long))(var493->class->vft[COLOR_array__Array__with_native]))(var493, var495, var494) /* with_native on <var493:Array[String]>*/;
}
}
{
opts__OptionArray__init(var482, var484, var493); /* Direct call opts#OptionArray#init on <var482:OptionArray>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_cc_path].val = var482; /* _opt_cc_path on <self:ToolContext exact> */
var496 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce497) {
var498 = varonce497;
} else {
var499 = "Additional options to make";
var500 = 26;
var501 = string__NativeString__to_s_with_length(var499, var500);
var498 = var501;
varonce497 = var498;
}
if (varonce502) {
var503 = varonce502;
} else {
var504 = "--make-flags";
var505 = 12;
var506 = string__NativeString__to_s_with_length(var504, var505);
var503 = var506;
varonce502 = var503;
}
var507 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var507 = array_instance Array[String] */
var508 = 1;
var509 = NEW_array__NativeArray(var508, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var509)->values[0] = (val*) var503;
{
((void (*)(val*, val*, long))(var507->class->vft[COLOR_array__Array__with_native]))(var507, var509, var508) /* with_native on <var507:Array[String]>*/;
}
}
{
opts__OptionString__init(var496, var498, var507); /* Direct call opts#OptionString#init on <var496:OptionString>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_make_flags].val = var496; /* _opt_make_flags on <self:ToolContext exact> */
var510 = NEW_opts__OptionInt(&type_opts__OptionInt);
if (varonce511) {
var512 = varonce511;
} else {
var513 = "Maximum number of lines in generated C files. Use 0 for unlimited";
var514 = 65;
var515 = string__NativeString__to_s_with_length(var513, var514);
var512 = var515;
varonce511 = var512;
}
var516 = 10000;
if (varonce517) {
var518 = varonce517;
} else {
var519 = "--max-c-lines";
var520 = 13;
var521 = string__NativeString__to_s_with_length(var519, var520);
var518 = var521;
varonce517 = var518;
}
var522 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var522 = array_instance Array[String] */
var523 = 1;
var524 = NEW_array__NativeArray(var523, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var524)->values[0] = (val*) var518;
{
((void (*)(val*, val*, long))(var522->class->vft[COLOR_array__Array__with_native]))(var522, var524, var523) /* with_native on <var522:Array[String]>*/;
}
}
{
opts__OptionInt__init(var510, var512, var516, var522); /* Direct call opts#OptionInt#init on <var510:OptionInt>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_max_c_lines].val = var510; /* _opt_max_c_lines on <self:ToolContext exact> */
var525 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce526) {
var527 = varonce526;
} else {
var528 = "Group all generated code in the same series of files";
var529 = 52;
var530 = string__NativeString__to_s_with_length(var528, var529);
var527 = var530;
varonce526 = var527;
}
if (varonce531) {
var532 = varonce531;
} else {
var533 = "--group-c-files";
var534 = 15;
var535 = string__NativeString__to_s_with_length(var533, var534);
var532 = var535;
varonce531 = var532;
}
var536 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var536 = array_instance Array[String] */
var537 = 1;
var538 = NEW_array__NativeArray(var537, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var538)->values[0] = (val*) var532;
{
((void (*)(val*, val*, long))(var536->class->vft[COLOR_array__Array__with_native]))(var536, var538, var537) /* with_native on <var536:Array[String]>*/;
}
}
{
opts__OptionBool__init(var525, var527, var536); /* Direct call opts#OptionBool#init on <var525:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_group_c_files].val = var525; /* _opt_group_c_files on <self:ToolContext exact> */
var539 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce540) {
var541 = varonce540;
} else {
var542 = "Directory used to generate temporary files";
var543 = 42;
var544 = string__NativeString__to_s_with_length(var542, var543);
var541 = var544;
varonce540 = var541;
}
if (varonce545) {
var546 = varonce545;
} else {
var547 = "--compile-dir";
var548 = 13;
var549 = string__NativeString__to_s_with_length(var547, var548);
var546 = var549;
varonce545 = var546;
}
var550 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var550 = array_instance Array[String] */
var551 = 1;
var552 = NEW_array__NativeArray(var551, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var552)->values[0] = (val*) var546;
{
((void (*)(val*, val*, long))(var550->class->vft[COLOR_array__Array__with_native]))(var550, var552, var551) /* with_native on <var550:Array[String]>*/;
}
}
{
opts__OptionString__init(var539, var541, var550); /* Direct call opts#OptionString#init on <var539:OptionString>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_compile_dir].val = var539; /* _opt_compile_dir on <self:ToolContext exact> */
var553 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce554) {
var555 = varonce554;
} else {
var556 = "Generate contracts in the C code against bugs in the compiler";
var557 = 61;
var558 = string__NativeString__to_s_with_length(var556, var557);
var555 = var558;
varonce554 = var555;
}
if (varonce559) {
var560 = varonce559;
} else {
var561 = "--hardening";
var562 = 11;
var563 = string__NativeString__to_s_with_length(var561, var562);
var560 = var563;
varonce559 = var560;
}
var564 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var564 = array_instance Array[String] */
var565 = 1;
var566 = NEW_array__NativeArray(var565, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var566)->values[0] = (val*) var560;
{
((void (*)(val*, val*, long))(var564->class->vft[COLOR_array__Array__with_native]))(var564, var566, var565) /* with_native on <var564:Array[String]>*/;
}
}
{
opts__OptionBool__init(var553, var555, var564); /* Direct call opts#OptionBool#init on <var553:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_hardening].val = var553; /* _opt_hardening on <self:ToolContext exact> */
var567 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce568) {
var569 = varonce568;
} else {
var570 = "Disable type tests of covariant parameters (dangerous)";
var571 = 54;
var572 = string__NativeString__to_s_with_length(var570, var571);
var569 = var572;
varonce568 = var569;
}
if (varonce573) {
var574 = varonce573;
} else {
var575 = "--no-check-covariance";
var576 = 21;
var577 = string__NativeString__to_s_with_length(var575, var576);
var574 = var577;
varonce573 = var574;
}
var578 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var578 = array_instance Array[String] */
var579 = 1;
var580 = NEW_array__NativeArray(var579, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var580)->values[0] = (val*) var574;
{
((void (*)(val*, val*, long))(var578->class->vft[COLOR_array__Array__with_native]))(var578, var580, var579) /* with_native on <var578:Array[String]>*/;
}
}
{
opts__OptionBool__init(var567, var569, var578); /* Direct call opts#OptionBool#init on <var567:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_covariance].val = var567; /* _opt_no_check_covariance on <self:ToolContext exact> */
var581 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce582) {
var583 = varonce582;
} else {
var584 = "Disable isset tests before each attribute access (dangerous)";
var585 = 60;
var586 = string__NativeString__to_s_with_length(var584, var585);
var583 = var586;
varonce582 = var583;
}
if (varonce587) {
var588 = varonce587;
} else {
var589 = "--no-check-attr-isset";
var590 = 21;
var591 = string__NativeString__to_s_with_length(var589, var590);
var588 = var591;
varonce587 = var588;
}
var592 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var592 = array_instance Array[String] */
var593 = 1;
var594 = NEW_array__NativeArray(var593, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var594)->values[0] = (val*) var588;
{
((void (*)(val*, val*, long))(var592->class->vft[COLOR_array__Array__with_native]))(var592, var594, var593) /* with_native on <var592:Array[String]>*/;
}
}
{
opts__OptionBool__init(var581, var583, var592); /* Direct call opts#OptionBool#init on <var581:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_attr_isset].val = var581; /* _opt_no_check_attr_isset on <self:ToolContext exact> */
var595 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce596) {
var597 = varonce596;
} else {
var598 = "Disable the evaluation of explicit \'assert\' and \'as\' (dangerous)";
var599 = 64;
var600 = string__NativeString__to_s_with_length(var598, var599);
var597 = var600;
varonce596 = var597;
}
if (varonce601) {
var602 = varonce601;
} else {
var603 = "--no-check-assert";
var604 = 17;
var605 = string__NativeString__to_s_with_length(var603, var604);
var602 = var605;
varonce601 = var602;
}
var606 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var606 = array_instance Array[String] */
var607 = 1;
var608 = NEW_array__NativeArray(var607, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var608)->values[0] = (val*) var602;
{
((void (*)(val*, val*, long))(var606->class->vft[COLOR_array__Array__with_native]))(var606, var608, var607) /* with_native on <var606:Array[String]>*/;
}
}
{
opts__OptionBool__init(var595, var597, var606); /* Direct call opts#OptionBool#init on <var595:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_assert].val = var595; /* _opt_no_check_assert on <self:ToolContext exact> */
var609 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce610) {
var611 = varonce610;
} else {
var612 = "Disable implicit casts on unsafe expression usage (dangerous)";
var613 = 61;
var614 = string__NativeString__to_s_with_length(var612, var613);
var611 = var614;
varonce610 = var611;
}
if (varonce615) {
var616 = varonce615;
} else {
var617 = "--no-check-autocast";
var618 = 19;
var619 = string__NativeString__to_s_with_length(var617, var618);
var616 = var619;
varonce615 = var616;
}
var620 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var620 = array_instance Array[String] */
var621 = 1;
var622 = NEW_array__NativeArray(var621, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var622)->values[0] = (val*) var616;
{
((void (*)(val*, val*, long))(var620->class->vft[COLOR_array__Array__with_native]))(var620, var622, var621) /* with_native on <var620:Array[String]>*/;
}
}
{
opts__OptionBool__init(var609, var611, var620); /* Direct call opts#OptionBool#init on <var609:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_autocast].val = var609; /* _opt_no_check_autocast on <self:ToolContext exact> */
var623 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce624) {
var625 = varonce624;
} else {
var626 = "Disable tests of null receiver (dangerous)";
var627 = 42;
var628 = string__NativeString__to_s_with_length(var626, var627);
var625 = var628;
varonce624 = var625;
}
if (varonce629) {
var630 = varonce629;
} else {
var631 = "--no-check-null";
var632 = 15;
var633 = string__NativeString__to_s_with_length(var631, var632);
var630 = var633;
varonce629 = var630;
}
var634 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var634 = array_instance Array[String] */
var635 = 1;
var636 = NEW_array__NativeArray(var635, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var636)->values[0] = (val*) var630;
{
((void (*)(val*, val*, long))(var634->class->vft[COLOR_array__Array__with_native]))(var634, var636, var635) /* with_native on <var634:Array[String]>*/;
}
}
{
opts__OptionBool__init(var623, var625, var634); /* Direct call opts#OptionBool#init on <var623:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_null].val = var623; /* _opt_no_check_null on <self:ToolContext exact> */
var637 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce638) {
var639 = varonce638;
} else {
var640 = "Disable all tests (dangerous)";
var641 = 29;
var642 = string__NativeString__to_s_with_length(var640, var641);
var639 = var642;
varonce638 = var639;
}
if (varonce643) {
var644 = varonce643;
} else {
var645 = "--no-check-all";
var646 = 14;
var647 = string__NativeString__to_s_with_length(var645, var646);
var644 = var647;
varonce643 = var644;
}
var648 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var648 = array_instance Array[String] */
var649 = 1;
var650 = NEW_array__NativeArray(var649, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var650)->values[0] = (val*) var644;
{
((void (*)(val*, val*, long))(var648->class->vft[COLOR_array__Array__with_native]))(var648, var650, var649) /* with_native on <var648:Array[String]>*/;
}
}
{
opts__OptionBool__init(var637, var639, var648); /* Direct call opts#OptionBool#init on <var637:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_all].val = var637; /* _opt_no_check_all on <self:ToolContext exact> */
var651 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce652) {
var653 = varonce652;
} else {
var654 = "Enable static and dynamic count of all type tests";
var655 = 49;
var656 = string__NativeString__to_s_with_length(var654, var655);
var653 = var656;
varonce652 = var653;
}
if (varonce657) {
var658 = varonce657;
} else {
var659 = "--typing-test-metrics";
var660 = 21;
var661 = string__NativeString__to_s_with_length(var659, var660);
var658 = var661;
varonce657 = var658;
}
var662 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var662 = array_instance Array[String] */
var663 = 1;
var664 = NEW_array__NativeArray(var663, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var664)->values[0] = (val*) var658;
{
((void (*)(val*, val*, long))(var662->class->vft[COLOR_array__Array__with_native]))(var662, var664, var663) /* with_native on <var662:Array[String]>*/;
}
}
{
opts__OptionBool__init(var651, var653, var662); /* Direct call opts#OptionBool#init on <var651:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics].val = var651; /* _opt_typing_test_metrics on <self:ToolContext exact> */
var665 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce666) {
var667 = varonce666;
} else {
var668 = "Enable static and dynamic count of all method invocations";
var669 = 57;
var670 = string__NativeString__to_s_with_length(var668, var669);
var667 = var670;
varonce666 = var667;
}
if (varonce671) {
var672 = varonce671;
} else {
var673 = "--invocation-metrics";
var674 = 20;
var675 = string__NativeString__to_s_with_length(var673, var674);
var672 = var675;
varonce671 = var672;
}
var676 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var676 = array_instance Array[String] */
var677 = 1;
var678 = NEW_array__NativeArray(var677, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var678)->values[0] = (val*) var672;
{
((void (*)(val*, val*, long))(var676->class->vft[COLOR_array__Array__with_native]))(var676, var678, var677) /* with_native on <var676:Array[String]>*/;
}
}
{
opts__OptionBool__init(var665, var667, var676); /* Direct call opts#OptionBool#init on <var665:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_invocation_metrics].val = var665; /* _opt_invocation_metrics on <self:ToolContext exact> */
var679 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce680) {
var681 = varonce680;
} else {
var682 = "Enable static and dynamic count of isset checks before attributes access";
var683 = 72;
var684 = string__NativeString__to_s_with_length(var682, var683);
var681 = var684;
varonce680 = var681;
}
if (varonce685) {
var686 = varonce685;
} else {
var687 = "--isset-checks-metrics";
var688 = 22;
var689 = string__NativeString__to_s_with_length(var687, var688);
var686 = var689;
varonce685 = var686;
}
var690 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var690 = array_instance Array[String] */
var691 = 1;
var692 = NEW_array__NativeArray(var691, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var692)->values[0] = (val*) var686;
{
((void (*)(val*, val*, long))(var690->class->vft[COLOR_array__Array__with_native]))(var690, var692, var691) /* with_native on <var690:Array[String]>*/;
}
}
{
opts__OptionBool__init(var679, var681, var690); /* Direct call opts#OptionBool#init on <var679:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_isset_checks_metrics].val = var679; /* _opt_isset_checks_metrics on <self:ToolContext exact> */
var693 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce694) {
var695 = varonce694;
} else {
var696 = "Control the generation of stack traces";
var697 = 38;
var698 = string__NativeString__to_s_with_length(var696, var697);
var695 = var698;
varonce694 = var695;
}
if (varonce699) {
var700 = varonce699;
} else {
var701 = "--stacktrace";
var702 = 12;
var703 = string__NativeString__to_s_with_length(var701, var702);
var700 = var703;
varonce699 = var700;
}
var704 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var704 = array_instance Array[String] */
var705 = 1;
var706 = NEW_array__NativeArray(var705, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var706)->values[0] = (val*) var700;
{
((void (*)(val*, val*, long))(var704->class->vft[COLOR_array__Array__with_native]))(var704, var706, var705) /* with_native on <var704:Array[String]>*/;
}
}
{
opts__OptionString__init(var693, var695, var704); /* Direct call opts#OptionString#init on <var693:OptionString>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_stacktrace].val = var693; /* _opt_stacktrace on <self:ToolContext exact> */
var707 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (varonce708) {
var709 = varonce708;
} else {
var710 = "Disable a advanced gcc directives for optimization";
var711 = 50;
var712 = string__NativeString__to_s_with_length(var710, var711);
var709 = var712;
varonce708 = var709;
}
if (varonce713) {
var714 = varonce713;
} else {
var715 = "--no-gcc-directive";
var716 = 18;
var717 = string__NativeString__to_s_with_length(var715, var716);
var714 = var717;
varonce713 = var714;
}
var718 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var718 = array_instance Array[String] */
var719 = 1;
var720 = NEW_array__NativeArray(var719, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var720)->values[0] = (val*) var714;
{
((void (*)(val*, val*, long))(var718->class->vft[COLOR_array__Array__with_native]))(var718, var720, var719) /* with_native on <var718:Array[String]>*/;
}
}
{
opts__OptionArray__init(var707, var709, var718); /* Direct call opts#OptionArray#init on <var707:OptionArray>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_gcc_directive].val = var707; /* _opt_no_gcc_directive on <self:ToolContext exact> */
var721 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce722) {
var723 = varonce722;
} else {
var724 = "Compile in release mode and finalize application";
var725 = 48;
var726 = string__NativeString__to_s_with_length(var724, var725);
var723 = var726;
varonce722 = var723;
}
if (varonce727) {
var728 = varonce727;
} else {
var729 = "--release";
var730 = 9;
var731 = string__NativeString__to_s_with_length(var729, var730);
var728 = var731;
varonce727 = var728;
}
var732 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var732 = array_instance Array[String] */
var733 = 1;
var734 = NEW_array__NativeArray(var733, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var734)->values[0] = (val*) var728;
{
((void (*)(val*, val*, long))(var732->class->vft[COLOR_array__Array__with_native]))(var732, var734, var733) /* with_native on <var732:Array[String]>*/;
}
}
{
opts__OptionBool__init(var721, var723, var732); /* Direct call opts#OptionBool#init on <var721:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_release].val = var721; /* _opt_release on <self:ToolContext exact> */
var735 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce736) {
var737 = varonce736;
} else {
var738 = "Use separate compilation";
var739 = 24;
var740 = string__NativeString__to_s_with_length(var738, var739);
var737 = var740;
varonce736 = var737;
}
if (varonce741) {
var742 = varonce741;
} else {
var743 = "--separate";
var744 = 10;
var745 = string__NativeString__to_s_with_length(var743, var744);
var742 = var745;
varonce741 = var742;
}
var746 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var746 = array_instance Array[String] */
var747 = 1;
var748 = NEW_array__NativeArray(var747, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var748)->values[0] = (val*) var742;
{
((void (*)(val*, val*, long))(var746->class->vft[COLOR_array__Array__with_native]))(var746, var748, var747) /* with_native on <var746:Array[String]>*/;
}
}
{
opts__OptionBool__init(var735, var737, var746); /* Direct call opts#OptionBool#init on <var735:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_separate].val = var735; /* _opt_separate on <self:ToolContext exact> */
var749 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce750) {
var751 = varonce750;
} else {
var752 = "Do not inline call to intern methods";
var753 = 36;
var754 = string__NativeString__to_s_with_length(var752, var753);
var751 = var754;
varonce750 = var751;
}
if (varonce755) {
var756 = varonce755;
} else {
var757 = "--no-inline-intern";
var758 = 18;
var759 = string__NativeString__to_s_with_length(var757, var758);
var756 = var759;
varonce755 = var756;
}
var760 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var760 = array_instance Array[String] */
var761 = 1;
var762 = NEW_array__NativeArray(var761, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var762)->values[0] = (val*) var756;
{
((void (*)(val*, val*, long))(var760->class->vft[COLOR_array__Array__with_native]))(var760, var762, var761) /* with_native on <var760:Array[String]>*/;
}
}
{
opts__OptionBool__init(var749, var751, var760); /* Direct call opts#OptionBool#init on <var749:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_no_inline_intern].val = var749; /* _opt_no_inline_intern on <self:ToolContext exact> */
var763 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce764) {
var765 = varonce764;
} else {
var766 = "Put primitive attibutes in a box instead of an union";
var767 = 52;
var768 = string__NativeString__to_s_with_length(var766, var767);
var765 = var768;
varonce764 = var765;
}
if (varonce769) {
var770 = varonce769;
} else {
var771 = "--no-union-attribute";
var772 = 20;
var773 = string__NativeString__to_s_with_length(var771, var772);
var770 = var773;
varonce769 = var770;
}
var774 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var774 = array_instance Array[String] */
var775 = 1;
var776 = NEW_array__NativeArray(var775, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var776)->values[0] = (val*) var770;
{
((void (*)(val*, val*, long))(var774->class->vft[COLOR_array__Array__with_native]))(var774, var776, var775) /* with_native on <var774:Array[String]>*/;
}
}
{
opts__OptionBool__init(var763, var765, var774); /* Direct call opts#OptionBool#init on <var763:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_no_union_attribute].val = var763; /* _opt_no_union_attribute on <self:ToolContext exact> */
var777 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce778) {
var779 = varonce778;
} else {
var780 = "Always call == in a polymorphic way";
var781 = 35;
var782 = string__NativeString__to_s_with_length(var780, var781);
var779 = var782;
varonce778 = var779;
}
if (varonce783) {
var784 = varonce783;
} else {
var785 = "--no-shortcut-equal";
var786 = 19;
var787 = string__NativeString__to_s_with_length(var785, var786);
var784 = var787;
varonce783 = var784;
}
var788 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var788 = array_instance Array[String] */
var789 = 1;
var790 = NEW_array__NativeArray(var789, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var790)->values[0] = (val*) var784;
{
((void (*)(val*, val*, long))(var788->class->vft[COLOR_array__Array__with_native]))(var788, var790, var789) /* with_native on <var788:Array[String]>*/;
}
}
{
opts__OptionBool__init(var777, var779, var788); /* Direct call opts#OptionBool#init on <var777:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_no_shortcut_equate].val = var777; /* _opt_no_shortcut_equate on <self:ToolContext exact> */
var791 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce792) {
var793 = varonce792;
} else {
var794 = "Inline colors and ids (semi-global)";
var795 = 35;
var796 = string__NativeString__to_s_with_length(var794, var795);
var793 = var796;
varonce792 = var793;
}
if (varonce797) {
var798 = varonce797;
} else {
var799 = "--inline-coloring-numbers";
var800 = 25;
var801 = string__NativeString__to_s_with_length(var799, var800);
var798 = var801;
varonce797 = var798;
}
var802 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var802 = array_instance Array[String] */
var803 = 1;
var804 = NEW_array__NativeArray(var803, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var804)->values[0] = (val*) var798;
{
((void (*)(val*, val*, long))(var802->class->vft[COLOR_array__Array__with_native]))(var802, var804, var803) /* with_native on <var802:Array[String]>*/;
}
}
{
opts__OptionBool__init(var791, var793, var802); /* Direct call opts#OptionBool#init on <var791:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_inline_coloring_numbers].val = var791; /* _opt_inline_coloring_numbers on <self:ToolContext exact> */
var805 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce806) {
var807 = varonce806;
} else {
var808 = "Allow the separate compiler to inline some methods (semi-global)";
var809 = 64;
var810 = string__NativeString__to_s_with_length(var808, var809);
var807 = var810;
varonce806 = var807;
}
if (varonce811) {
var812 = varonce811;
} else {
var813 = "--inline-some-methods";
var814 = 21;
var815 = string__NativeString__to_s_with_length(var813, var814);
var812 = var815;
varonce811 = var812;
}
var816 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var816 = array_instance Array[String] */
var817 = 1;
var818 = NEW_array__NativeArray(var817, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var818)->values[0] = (val*) var812;
{
((void (*)(val*, val*, long))(var816->class->vft[COLOR_array__Array__with_native]))(var816, var818, var817) /* with_native on <var816:Array[String]>*/;
}
}
{
opts__OptionBool__init(var805, var807, var816); /* Direct call opts#OptionBool#init on <var805:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_inline_some_methods].val = var805; /* _opt_inline_some_methods on <self:ToolContext exact> */
var819 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce820) {
var821 = varonce820;
} else {
var822 = "Allow the separate compiler to direct call monomorph sites (semi-global)";
var823 = 72;
var824 = string__NativeString__to_s_with_length(var822, var823);
var821 = var824;
varonce820 = var821;
}
if (varonce825) {
var826 = varonce825;
} else {
var827 = "--direct-call-monomorph";
var828 = 23;
var829 = string__NativeString__to_s_with_length(var827, var828);
var826 = var829;
varonce825 = var826;
}
var830 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var830 = array_instance Array[String] */
var831 = 1;
var832 = NEW_array__NativeArray(var831, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var832)->values[0] = (val*) var826;
{
((void (*)(val*, val*, long))(var830->class->vft[COLOR_array__Array__with_native]))(var830, var832, var831) /* with_native on <var830:Array[String]>*/;
}
}
{
opts__OptionBool__init(var819, var821, var830); /* Direct call opts#OptionBool#init on <var819:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_direct_call_monomorph].val = var819; /* _opt_direct_call_monomorph on <self:ToolContext exact> */
var833 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce834) {
var835 = varonce834;
} else {
var836 = "Do not compile dead methods (semi-global)";
var837 = 41;
var838 = string__NativeString__to_s_with_length(var836, var837);
var835 = var838;
varonce834 = var835;
}
if (varonce839) {
var840 = varonce839;
} else {
var841 = "--skip-dead-methods";
var842 = 19;
var843 = string__NativeString__to_s_with_length(var841, var842);
var840 = var843;
varonce839 = var840;
}
var844 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var844 = array_instance Array[String] */
var845 = 1;
var846 = NEW_array__NativeArray(var845, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var846)->values[0] = (val*) var840;
{
((void (*)(val*, val*, long))(var844->class->vft[COLOR_array__Array__with_native]))(var844, var846, var845) /* with_native on <var844:Array[String]>*/;
}
}
{
opts__OptionBool__init(var833, var835, var844); /* Direct call opts#OptionBool#init on <var833:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_skip_dead_methods].val = var833; /* _opt_skip_dead_methods on <self:ToolContext exact> */
var847 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce848) {
var849 = varonce848;
} else {
var850 = "Enable all semi-global optimizations";
var851 = 36;
var852 = string__NativeString__to_s_with_length(var850, var851);
var849 = var852;
varonce848 = var849;
}
if (varonce853) {
var854 = varonce853;
} else {
var855 = "--semi-global";
var856 = 13;
var857 = string__NativeString__to_s_with_length(var855, var856);
var854 = var857;
varonce853 = var854;
}
var858 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var858 = array_instance Array[String] */
var859 = 1;
var860 = NEW_array__NativeArray(var859, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var860)->values[0] = (val*) var854;
{
((void (*)(val*, val*, long))(var858->class->vft[COLOR_array__Array__with_native]))(var858, var860, var859) /* with_native on <var858:Array[String]>*/;
}
}
{
opts__OptionBool__init(var847, var849, var858); /* Direct call opts#OptionBool#init on <var847:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_semi_global].val = var847; /* _opt_semi_global on <self:ToolContext exact> */
var861 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce862) {
var863 = varonce862;
} else {
var864 = "Force colorization of dead methods";
var865 = 34;
var866 = string__NativeString__to_s_with_length(var864, var865);
var863 = var866;
varonce862 = var863;
}
if (varonce867) {
var868 = varonce867;
} else {
var869 = "--colo-dead-methods";
var870 = 19;
var871 = string__NativeString__to_s_with_length(var869, var870);
var868 = var871;
varonce867 = var868;
}
var872 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var872 = array_instance Array[String] */
var873 = 1;
var874 = NEW_array__NativeArray(var873, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var874)->values[0] = (val*) var868;
{
((void (*)(val*, val*, long))(var872->class->vft[COLOR_array__Array__with_native]))(var872, var874, var873) /* with_native on <var872:Array[String]>*/;
}
}
{
opts__OptionBool__init(var861, var863, var872); /* Direct call opts#OptionBool#init on <var861:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_colo_dead_methods].val = var861; /* _opt_colo_dead_methods on <self:ToolContext exact> */
var875 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce876) {
var877 = varonce876;
} else {
var878 = "Enable static size measuring of tables used for vft, typing and resolution";
var879 = 74;
var880 = string__NativeString__to_s_with_length(var878, var879);
var877 = var880;
varonce876 = var877;
}
if (varonce881) {
var882 = varonce881;
} else {
var883 = "--tables-metrics";
var884 = 16;
var885 = string__NativeString__to_s_with_length(var883, var884);
var882 = var885;
varonce881 = var882;
}
var886 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var886 = array_instance Array[String] */
var887 = 1;
var888 = NEW_array__NativeArray(var887, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var888)->values[0] = (val*) var882;
{
((void (*)(val*, val*, long))(var886->class->vft[COLOR_array__Array__with_native]))(var886, var888, var887) /* with_native on <var886:Array[String]>*/;
}
}
{
opts__OptionBool__init(var875, var877, var886); /* Direct call opts#OptionBool#init on <var875:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_tables_metrics].val = var875; /* _opt_tables_metrics on <self:ToolContext exact> */
var889 = NEW_separate_compiler__SeparateCompilerPhase(&type_separate_compiler__SeparateCompilerPhase);
var890 = NULL;
{
phase__Phase__init(var889, self, var890); /* Direct call phase#Phase#init on <var889:SeparateCompilerPhase>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___separate_compiler_phase].val = var889; /* _separate_compiler_phase on <self:ToolContext exact> */
var891 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce892) {
var893 = varonce892;
} else {
var894 = "Erase generic types";
var895 = 19;
var896 = string__NativeString__to_s_with_length(var894, var895);
var893 = var896;
varonce892 = var893;
}
if (varonce897) {
var898 = varonce897;
} else {
var899 = "--erasure";
var900 = 9;
var901 = string__NativeString__to_s_with_length(var899, var900);
var898 = var901;
varonce897 = var898;
}
var902 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var902 = array_instance Array[String] */
var903 = 1;
var904 = NEW_array__NativeArray(var903, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var904)->values[0] = (val*) var898;
{
((void (*)(val*, val*, long))(var902->class->vft[COLOR_array__Array__with_native]))(var902, var904, var903) /* with_native on <var902:Array[String]>*/;
}
}
{
opts__OptionBool__init(var891, var893, var902); /* Direct call opts#OptionBool#init on <var891:OptionBool>*/
}
self->attrs[COLOR_separate_erasure_compiler__ToolContext___opt_erasure].val = var891; /* _opt_erasure on <self:ToolContext exact> */
var905 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce906) {
var907 = varonce906;
} else {
var908 = "Activate RTA (implicit with --global and --separate)";
var909 = 52;
var910 = string__NativeString__to_s_with_length(var908, var909);
var907 = var910;
varonce906 = var907;
}
if (varonce911) {
var912 = varonce911;
} else {
var913 = "--rta";
var914 = 5;
var915 = string__NativeString__to_s_with_length(var913, var914);
var912 = var915;
varonce911 = var912;
}
var916 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var916 = array_instance Array[String] */
var917 = 1;
var918 = NEW_array__NativeArray(var917, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var918)->values[0] = (val*) var912;
{
((void (*)(val*, val*, long))(var916->class->vft[COLOR_array__Array__with_native]))(var916, var918, var917) /* with_native on <var916:Array[String]>*/;
}
}
{
opts__OptionBool__init(var905, var907, var916); /* Direct call opts#OptionBool#init on <var905:OptionBool>*/
}
self->attrs[COLOR_separate_erasure_compiler__ToolContext___opt_rta].val = var905; /* _opt_rta on <self:ToolContext exact> */
var919 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce920) {
var921 = varonce920;
} else {
var922 = "Disable implicit casts on unsafe return with erasure-typing policy (dangerous)";
var923 = 78;
var924 = string__NativeString__to_s_with_length(var922, var923);
var921 = var924;
varonce920 = var921;
}
if (varonce925) {
var926 = varonce925;
} else {
var927 = "--no-check-erasure-cast";
var928 = 23;
var929 = string__NativeString__to_s_with_length(var927, var928);
var926 = var929;
varonce925 = var926;
}
var930 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var930 = array_instance Array[String] */
var931 = 1;
var932 = NEW_array__NativeArray(var931, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var932)->values[0] = (val*) var926;
{
((void (*)(val*, val*, long))(var930->class->vft[COLOR_array__Array__with_native]))(var930, var932, var931) /* with_native on <var930:Array[String]>*/;
}
}
{
opts__OptionBool__init(var919, var921, var930); /* Direct call opts#OptionBool#init on <var919:OptionBool>*/
}
self->attrs[COLOR_separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast].val = var919; /* _opt_no_check_erasure_cast on <self:ToolContext exact> */
var933 = NEW_separate_erasure_compiler__ErasureCompilerPhase(&type_separate_erasure_compiler__ErasureCompilerPhase);
var934 = NULL;
{
phase__Phase__init(var933, self, var934); /* Direct call phase#Phase#init on <var933:ErasureCompilerPhase>*/
}
self->attrs[COLOR_separate_erasure_compiler__ToolContext___erasure_compiler_phase].val = var933; /* _erasure_compiler_phase on <self:ToolContext exact> */
return self;
}
/* runtime class toolcontext__BashCompletion */
const struct class class_toolcontext__BashCompletion = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to toolcontext:BashCompletion:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to toolcontext:BashCompletion:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to toolcontext:BashCompletion:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to toolcontext:BashCompletion:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to toolcontext:BashCompletion:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to toolcontext:BashCompletion:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to toolcontext:BashCompletion:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to toolcontext:BashCompletion:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to toolcontext:BashCompletion:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to toolcontext:BashCompletion:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to toolcontext:BashCompletion:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to toolcontext:BashCompletion:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to toolcontext:BashCompletion:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to toolcontext:BashCompletion:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to toolcontext:BashCompletion:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to toolcontext:BashCompletion:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to toolcontext:BashCompletion:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to toolcontext:BashCompletion:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to toolcontext:BashCompletion:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to toolcontext:BashCompletion:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to toolcontext:BashCompletion:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to toolcontext:BashCompletion:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to toolcontext:BashCompletion:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to toolcontext:BashCompletion:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to toolcontext:BashCompletion:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to toolcontext:BashCompletion:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to toolcontext:BashCompletion:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to toolcontext:BashCompletion:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to toolcontext:BashCompletion:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to toolcontext:BashCompletion:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to toolcontext:BashCompletion:model#Object#extern_kind */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_template__Template__write_to, /* pointer to toolcontext:BashCompletion:template#Template#write_to */
(nitmethod_t)VIRTUAL_toolcontext__BashCompletion__rendering, /* pointer to toolcontext:BashCompletion:toolcontext#BashCompletion#rendering */
(nitmethod_t)VIRTUAL_template__Template__add, /* pointer to toolcontext:BashCompletion:template#Template#add */
(nitmethod_t)VIRTUAL_template__Template__addn, /* pointer to toolcontext:BashCompletion:template#Template#addn */
(nitmethod_t)VIRTUAL_template__Template__is_frozen, /* pointer to toolcontext:BashCompletion:template#Template#is_frozen */
(nitmethod_t)VIRTUAL_template__Template__is_frozen_61d, /* pointer to toolcontext:BashCompletion:template#Template#is_frozen= */
(nitmethod_t)VIRTUAL_template__Template__freeze, /* pointer to toolcontext:BashCompletion:template#Template#freeze */
(nitmethod_t)VIRTUAL_template__Template__content, /* pointer to toolcontext:BashCompletion:template#Template#content */
(nitmethod_t)VIRTUAL_template__Template__render_done, /* pointer to toolcontext:BashCompletion:template#Template#render_done */
(nitmethod_t)VIRTUAL_template__Template__render_done_61d, /* pointer to toolcontext:BashCompletion:template#Template#render_done= */
(nitmethod_t)VIRTUAL_template__Template__force_render, /* pointer to toolcontext:BashCompletion:template#Template#force_render */
(nitmethod_t)VIRTUAL_template__Template__is_writing, /* pointer to toolcontext:BashCompletion:template#Template#is_writing */
(nitmethod_t)VIRTUAL_template__Template__is_writing_61d, /* pointer to toolcontext:BashCompletion:template#Template#is_writing= */
(nitmethod_t)VIRTUAL_toolcontext__BashCompletion__toolcontext, /* pointer to toolcontext:BashCompletion:toolcontext#BashCompletion#toolcontext */
(nitmethod_t)VIRTUAL_toolcontext__BashCompletion__toolcontext_61d, /* pointer to toolcontext:BashCompletion:toolcontext#BashCompletion#toolcontext= */
(nitmethod_t)VIRTUAL_toolcontext__BashCompletion__init, /* pointer to toolcontext:BashCompletion:toolcontext#BashCompletion#init */
(nitmethod_t)VIRTUAL_toolcontext__BashCompletion__extract_options_names, /* pointer to toolcontext:BashCompletion:toolcontext#BashCompletion#extract_options_names */
}
};
/* allocate BashCompletion */
val* NEW_toolcontext__BashCompletion(const struct type* type) {
val* self /* : BashCompletion */;
short int var /* : Bool */;
val* var1 /* : Array[Streamable] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_toolcontext__BashCompletion;
var = 0;
self->attrs[COLOR_template__Template___is_frozen].s = var; /* _is_frozen on <self:BashCompletion exact> */
var1 = NEW_array__Array(&type_array__Arraystream__Streamable);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:Array[Streamable]>*/;
}
self->attrs[COLOR_template__Template___content].val = var1; /* _content on <self:BashCompletion exact> */
var2 = 0;
self->attrs[COLOR_template__Template___render_done].s = var2; /* _render_done on <self:BashCompletion exact> */
var3 = 0;
self->attrs[COLOR_template__Template___is_writing].s = var3; /* _is_writing on <self:BashCompletion exact> */
return self;
}
/* runtime class opts__Option */
/* allocate Option */
val* NEW_opts__Option(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Option is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class opts__OptionText */
/* allocate OptionText */
val* NEW_opts__OptionText(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "OptionText is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class opts__OptionBool */
const struct class class_opts__OptionBool = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to opts:OptionBool:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to opts:OptionBool:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to opts:OptionBool:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to opts:OptionBool:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to opts:OptionBool:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to opts:OptionBool:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to opts:OptionBool:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to opts:OptionBool:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to opts:OptionBool:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_opts__Option__to_s, /* pointer to opts:OptionBool:opts#Option#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to opts:OptionBool:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to opts:OptionBool:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to opts:OptionBool:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to opts:OptionBool:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to opts:OptionBool:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to opts:OptionBool:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to opts:OptionBool:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to opts:OptionBool:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to opts:OptionBool:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to opts:OptionBool:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to opts:OptionBool:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to opts:OptionBool:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to opts:OptionBool:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to opts:OptionBool:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to opts:OptionBool:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to opts:OptionBool:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to opts:OptionBool:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to opts:OptionBool:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to opts:OptionBool:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to opts:OptionBool:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to opts:OptionBool:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_opts__Option__names, /* pointer to opts:OptionBool:opts#Option#names */
(nitmethod_t)VIRTUAL_opts__Option__names_61d, /* pointer to opts:OptionBool:opts#Option#names= */
(nitmethod_t)VIRTUAL_opts__Option__helptext, /* pointer to opts:OptionBool:opts#Option#helptext */
(nitmethod_t)VIRTUAL_opts__Option__helptext_61d, /* pointer to opts:OptionBool:opts#Option#helptext= */
(nitmethod_t)VIRTUAL_opts__Option__errors, /* pointer to opts:OptionBool:opts#Option#errors */
(nitmethod_t)VIRTUAL_opts__Option__mandatory, /* pointer to opts:OptionBool:opts#Option#mandatory */
(nitmethod_t)VIRTUAL_opts__Option__hidden, /* pointer to opts:OptionBool:opts#Option#hidden */
(nitmethod_t)VIRTUAL_opts__Option__read, /* pointer to opts:OptionBool:opts#Option#read */
(nitmethod_t)VIRTUAL_opts__Option__read_61d, /* pointer to opts:OptionBool:opts#Option#read= */
(nitmethod_t)VIRTUAL_opts__Option__value, /* pointer to opts:OptionBool:opts#Option#value */
(nitmethod_t)VIRTUAL_opts__Option__value_61d, /* pointer to opts:OptionBool:opts#Option#value= */
(nitmethod_t)VIRTUAL_opts__Option__default_value_61d, /* pointer to opts:OptionBool:opts#Option#default_value= */
(nitmethod_t)VIRTUAL_opts__Option__init, /* pointer to opts:OptionBool:opts#Option#init */
(nitmethod_t)VIRTUAL_opts__Option__init_opt, /* pointer to opts:OptionBool:opts#Option#init_opt */
(nitmethod_t)VIRTUAL_opts__Option__pretty, /* pointer to opts:OptionBool:opts#Option#pretty */
(nitmethod_t)VIRTUAL_opts__OptionBool__read_param, /* pointer to opts:OptionBool:opts#OptionBool#read_param */
(nitmethod_t)VIRTUAL_opts__OptionBool__init, /* pointer to opts:OptionBool:opts#OptionBool#init */
(nitmethod_t)VIRTUAL_opts__Option__read_param, /* pointer to opts:OptionBool:opts#Option#read_param */
}
};
/* allocate OptionBool */
val* NEW_opts__OptionBool(const struct type* type) {
val* self /* : OptionBool */;
val* var /* : Array[String] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionBool;
var = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:Array[String]>*/;
}
self->attrs[COLOR_opts__Option___errors].val = var; /* _errors on <self:OptionBool exact> */
var1 = 0;
self->attrs[COLOR_opts__Option___mandatory].s = var1; /* _mandatory on <self:OptionBool exact> */
var2 = 0;
self->attrs[COLOR_opts__Option___hidden].s = var2; /* _hidden on <self:OptionBool exact> */
var3 = 0;
self->attrs[COLOR_opts__Option___read].s = var3; /* _read on <self:OptionBool exact> */
return self;
}
/* runtime class opts__OptionCount */
const struct class class_opts__OptionCount = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to opts:OptionCount:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to opts:OptionCount:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to opts:OptionCount:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to opts:OptionCount:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to opts:OptionCount:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to opts:OptionCount:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to opts:OptionCount:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to opts:OptionCount:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to opts:OptionCount:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_opts__Option__to_s, /* pointer to opts:OptionCount:opts#Option#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to opts:OptionCount:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to opts:OptionCount:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to opts:OptionCount:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to opts:OptionCount:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to opts:OptionCount:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to opts:OptionCount:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to opts:OptionCount:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to opts:OptionCount:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to opts:OptionCount:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to opts:OptionCount:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to opts:OptionCount:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to opts:OptionCount:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to opts:OptionCount:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to opts:OptionCount:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to opts:OptionCount:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to opts:OptionCount:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to opts:OptionCount:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to opts:OptionCount:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to opts:OptionCount:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to opts:OptionCount:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to opts:OptionCount:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_opts__Option__names, /* pointer to opts:OptionCount:opts#Option#names */
(nitmethod_t)VIRTUAL_opts__Option__names_61d, /* pointer to opts:OptionCount:opts#Option#names= */
(nitmethod_t)VIRTUAL_opts__Option__helptext, /* pointer to opts:OptionCount:opts#Option#helptext */
(nitmethod_t)VIRTUAL_opts__Option__helptext_61d, /* pointer to opts:OptionCount:opts#Option#helptext= */
(nitmethod_t)VIRTUAL_opts__Option__errors, /* pointer to opts:OptionCount:opts#Option#errors */
(nitmethod_t)VIRTUAL_opts__Option__mandatory, /* pointer to opts:OptionCount:opts#Option#mandatory */
(nitmethod_t)VIRTUAL_opts__Option__hidden, /* pointer to opts:OptionCount:opts#Option#hidden */
(nitmethod_t)VIRTUAL_opts__Option__read, /* pointer to opts:OptionCount:opts#Option#read */
(nitmethod_t)VIRTUAL_opts__Option__read_61d, /* pointer to opts:OptionCount:opts#Option#read= */
(nitmethod_t)VIRTUAL_opts__Option__value, /* pointer to opts:OptionCount:opts#Option#value */
(nitmethod_t)VIRTUAL_opts__Option__value_61d, /* pointer to opts:OptionCount:opts#Option#value= */
(nitmethod_t)VIRTUAL_opts__Option__default_value_61d, /* pointer to opts:OptionCount:opts#Option#default_value= */
(nitmethod_t)VIRTUAL_opts__Option__init, /* pointer to opts:OptionCount:opts#Option#init */
(nitmethod_t)VIRTUAL_opts__Option__init_opt, /* pointer to opts:OptionCount:opts#Option#init_opt */
(nitmethod_t)VIRTUAL_opts__Option__pretty, /* pointer to opts:OptionCount:opts#Option#pretty */
(nitmethod_t)VIRTUAL_opts__OptionCount__read_param, /* pointer to opts:OptionCount:opts#OptionCount#read_param */
(nitmethod_t)VIRTUAL_opts__OptionCount__init, /* pointer to opts:OptionCount:opts#OptionCount#init */
(nitmethod_t)VIRTUAL_opts__Option__read_param, /* pointer to opts:OptionCount:opts#Option#read_param */
}
};
/* allocate OptionCount */
val* NEW_opts__OptionCount(const struct type* type) {
val* self /* : OptionCount */;
val* var /* : Array[String] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionCount;
var = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:Array[String]>*/;
}
self->attrs[COLOR_opts__Option___errors].val = var; /* _errors on <self:OptionCount exact> */
var1 = 0;
self->attrs[COLOR_opts__Option___mandatory].s = var1; /* _mandatory on <self:OptionCount exact> */
var2 = 0;
self->attrs[COLOR_opts__Option___hidden].s = var2; /* _hidden on <self:OptionCount exact> */
var3 = 0;
self->attrs[COLOR_opts__Option___read].s = var3; /* _read on <self:OptionCount exact> */
return self;
}
/* runtime class opts__OptionParameter */
/* allocate OptionParameter */
val* NEW_opts__OptionParameter(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "OptionParameter is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class opts__OptionString */
const struct class class_opts__OptionString = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to opts:OptionString:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to opts:OptionString:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to opts:OptionString:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to opts:OptionString:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to opts:OptionString:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to opts:OptionString:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to opts:OptionString:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to opts:OptionString:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to opts:OptionString:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_opts__Option__to_s, /* pointer to opts:OptionString:opts#Option#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to opts:OptionString:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to opts:OptionString:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to opts:OptionString:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to opts:OptionString:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to opts:OptionString:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to opts:OptionString:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to opts:OptionString:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to opts:OptionString:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to opts:OptionString:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to opts:OptionString:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to opts:OptionString:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to opts:OptionString:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to opts:OptionString:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to opts:OptionString:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to opts:OptionString:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to opts:OptionString:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to opts:OptionString:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to opts:OptionString:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to opts:OptionString:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to opts:OptionString:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to opts:OptionString:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_opts__Option__names, /* pointer to opts:OptionString:opts#Option#names */
(nitmethod_t)VIRTUAL_opts__Option__names_61d, /* pointer to opts:OptionString:opts#Option#names= */
(nitmethod_t)VIRTUAL_opts__Option__helptext, /* pointer to opts:OptionString:opts#Option#helptext */
(nitmethod_t)VIRTUAL_opts__Option__helptext_61d, /* pointer to opts:OptionString:opts#Option#helptext= */
(nitmethod_t)VIRTUAL_opts__Option__errors, /* pointer to opts:OptionString:opts#Option#errors */
(nitmethod_t)VIRTUAL_opts__Option__mandatory, /* pointer to opts:OptionString:opts#Option#mandatory */
(nitmethod_t)VIRTUAL_opts__Option__hidden, /* pointer to opts:OptionString:opts#Option#hidden */
(nitmethod_t)VIRTUAL_opts__Option__read, /* pointer to opts:OptionString:opts#Option#read */
(nitmethod_t)VIRTUAL_opts__Option__read_61d, /* pointer to opts:OptionString:opts#Option#read= */
(nitmethod_t)VIRTUAL_opts__Option__value, /* pointer to opts:OptionString:opts#Option#value */
(nitmethod_t)VIRTUAL_opts__Option__value_61d, /* pointer to opts:OptionString:opts#Option#value= */
(nitmethod_t)VIRTUAL_opts__Option__default_value_61d, /* pointer to opts:OptionString:opts#Option#default_value= */
(nitmethod_t)VIRTUAL_opts__Option__init, /* pointer to opts:OptionString:opts#Option#init */
(nitmethod_t)VIRTUAL_opts__Option__init_opt, /* pointer to opts:OptionString:opts#Option#init_opt */
(nitmethod_t)VIRTUAL_opts__Option__pretty, /* pointer to opts:OptionString:opts#Option#pretty */
(nitmethod_t)VIRTUAL_opts__OptionParameter__read_param, /* pointer to opts:OptionString:opts#OptionParameter#read_param */
(nitmethod_t)VIRTUAL_opts__OptionString__convert, /* pointer to opts:OptionString:opts#OptionString#convert */
(nitmethod_t)VIRTUAL_opts__OptionParameter__parameter_mandatory, /* pointer to opts:OptionString:opts#OptionParameter#parameter_mandatory */
(nitmethod_t)VIRTUAL_opts__Option__read_param, /* pointer to opts:OptionString:opts#Option#read_param */
(nitmethod_t)VIRTUAL_opts__OptionString__init, /* pointer to opts:OptionString:opts#OptionString#init */
}
};
/* allocate OptionString */
val* NEW_opts__OptionString(const struct type* type) {
val* self /* : OptionString */;
val* var /* : Array[String] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionString;
var = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:Array[String]>*/;
}
self->attrs[COLOR_opts__Option___errors].val = var; /* _errors on <self:OptionString exact> */
var1 = 0;
self->attrs[COLOR_opts__Option___mandatory].s = var1; /* _mandatory on <self:OptionString exact> */
var2 = 0;
self->attrs[COLOR_opts__Option___hidden].s = var2; /* _hidden on <self:OptionString exact> */
var3 = 0;
self->attrs[COLOR_opts__Option___read].s = var3; /* _read on <self:OptionString exact> */
var4 = 1;
self->attrs[COLOR_opts__OptionParameter___parameter_mandatory].s = var4; /* _parameter_mandatory on <self:OptionString exact> */
return self;
}
/* runtime class opts__OptionEnum */
/* allocate OptionEnum */
val* NEW_opts__OptionEnum(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "OptionEnum is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class opts__OptionInt */
const struct class class_opts__OptionInt = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to opts:OptionInt:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to opts:OptionInt:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to opts:OptionInt:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to opts:OptionInt:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to opts:OptionInt:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to opts:OptionInt:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to opts:OptionInt:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to opts:OptionInt:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to opts:OptionInt:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_opts__Option__to_s, /* pointer to opts:OptionInt:opts#Option#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to opts:OptionInt:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to opts:OptionInt:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to opts:OptionInt:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to opts:OptionInt:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to opts:OptionInt:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to opts:OptionInt:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to opts:OptionInt:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to opts:OptionInt:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to opts:OptionInt:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to opts:OptionInt:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to opts:OptionInt:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to opts:OptionInt:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to opts:OptionInt:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to opts:OptionInt:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to opts:OptionInt:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to opts:OptionInt:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to opts:OptionInt:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to opts:OptionInt:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to opts:OptionInt:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to opts:OptionInt:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to opts:OptionInt:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_opts__Option__names, /* pointer to opts:OptionInt:opts#Option#names */
(nitmethod_t)VIRTUAL_opts__Option__names_61d, /* pointer to opts:OptionInt:opts#Option#names= */
(nitmethod_t)VIRTUAL_opts__Option__helptext, /* pointer to opts:OptionInt:opts#Option#helptext */
(nitmethod_t)VIRTUAL_opts__Option__helptext_61d, /* pointer to opts:OptionInt:opts#Option#helptext= */
(nitmethod_t)VIRTUAL_opts__Option__errors, /* pointer to opts:OptionInt:opts#Option#errors */
(nitmethod_t)VIRTUAL_opts__Option__mandatory, /* pointer to opts:OptionInt:opts#Option#mandatory */
(nitmethod_t)VIRTUAL_opts__Option__hidden, /* pointer to opts:OptionInt:opts#Option#hidden */
(nitmethod_t)VIRTUAL_opts__Option__read, /* pointer to opts:OptionInt:opts#Option#read */
(nitmethod_t)VIRTUAL_opts__Option__read_61d, /* pointer to opts:OptionInt:opts#Option#read= */
(nitmethod_t)VIRTUAL_opts__Option__value, /* pointer to opts:OptionInt:opts#Option#value */
(nitmethod_t)VIRTUAL_opts__Option__value_61d, /* pointer to opts:OptionInt:opts#Option#value= */
(nitmethod_t)VIRTUAL_opts__Option__default_value_61d, /* pointer to opts:OptionInt:opts#Option#default_value= */
(nitmethod_t)VIRTUAL_opts__Option__init, /* pointer to opts:OptionInt:opts#Option#init */
(nitmethod_t)VIRTUAL_opts__Option__init_opt, /* pointer to opts:OptionInt:opts#Option#init_opt */
(nitmethod_t)VIRTUAL_opts__Option__pretty, /* pointer to opts:OptionInt:opts#Option#pretty */
(nitmethod_t)VIRTUAL_opts__OptionParameter__read_param, /* pointer to opts:OptionInt:opts#OptionParameter#read_param */
(nitmethod_t)VIRTUAL_opts__OptionInt__convert, /* pointer to opts:OptionInt:opts#OptionInt#convert */
(nitmethod_t)VIRTUAL_opts__OptionParameter__parameter_mandatory, /* pointer to opts:OptionInt:opts#OptionParameter#parameter_mandatory */
(nitmethod_t)VIRTUAL_opts__Option__read_param, /* pointer to opts:OptionInt:opts#Option#read_param */
(nitmethod_t)VIRTUAL_opts__OptionInt__init, /* pointer to opts:OptionInt:opts#OptionInt#init */
}
};
/* allocate OptionInt */
val* NEW_opts__OptionInt(const struct type* type) {
val* self /* : OptionInt */;
val* var /* : Array[String] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionInt;
var = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:Array[String]>*/;
}
self->attrs[COLOR_opts__Option___errors].val = var; /* _errors on <self:OptionInt exact> */
var1 = 0;
self->attrs[COLOR_opts__Option___mandatory].s = var1; /* _mandatory on <self:OptionInt exact> */
var2 = 0;
self->attrs[COLOR_opts__Option___hidden].s = var2; /* _hidden on <self:OptionInt exact> */
var3 = 0;
self->attrs[COLOR_opts__Option___read].s = var3; /* _read on <self:OptionInt exact> */
var4 = 1;
self->attrs[COLOR_opts__OptionParameter___parameter_mandatory].s = var4; /* _parameter_mandatory on <self:OptionInt exact> */
return self;
}
/* runtime class opts__OptionFloat */
/* allocate OptionFloat */
val* NEW_opts__OptionFloat(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "OptionFloat is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class opts__OptionArray */
const struct class class_opts__OptionArray = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to opts:OptionArray:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to opts:OptionArray:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to opts:OptionArray:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to opts:OptionArray:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to opts:OptionArray:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to opts:OptionArray:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to opts:OptionArray:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to opts:OptionArray:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to opts:OptionArray:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_opts__Option__to_s, /* pointer to opts:OptionArray:opts#Option#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to opts:OptionArray:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to opts:OptionArray:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to opts:OptionArray:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to opts:OptionArray:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to opts:OptionArray:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to opts:OptionArray:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to opts:OptionArray:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to opts:OptionArray:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to opts:OptionArray:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to opts:OptionArray:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to opts:OptionArray:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to opts:OptionArray:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to opts:OptionArray:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to opts:OptionArray:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to opts:OptionArray:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to opts:OptionArray:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to opts:OptionArray:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to opts:OptionArray:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to opts:OptionArray:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to opts:OptionArray:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to opts:OptionArray:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_opts__Option__names, /* pointer to opts:OptionArray:opts#Option#names */
(nitmethod_t)VIRTUAL_opts__Option__names_61d, /* pointer to opts:OptionArray:opts#Option#names= */
(nitmethod_t)VIRTUAL_opts__Option__helptext, /* pointer to opts:OptionArray:opts#Option#helptext */
(nitmethod_t)VIRTUAL_opts__Option__helptext_61d, /* pointer to opts:OptionArray:opts#Option#helptext= */
(nitmethod_t)VIRTUAL_opts__Option__errors, /* pointer to opts:OptionArray:opts#Option#errors */
(nitmethod_t)VIRTUAL_opts__Option__mandatory, /* pointer to opts:OptionArray:opts#Option#mandatory */
(nitmethod_t)VIRTUAL_opts__Option__hidden, /* pointer to opts:OptionArray:opts#Option#hidden */
(nitmethod_t)VIRTUAL_opts__Option__read, /* pointer to opts:OptionArray:opts#Option#read */
(nitmethod_t)VIRTUAL_opts__Option__read_61d, /* pointer to opts:OptionArray:opts#Option#read= */
(nitmethod_t)VIRTUAL_opts__Option__value, /* pointer to opts:OptionArray:opts#Option#value */
(nitmethod_t)VIRTUAL_opts__Option__value_61d, /* pointer to opts:OptionArray:opts#Option#value= */
(nitmethod_t)VIRTUAL_opts__Option__default_value_61d, /* pointer to opts:OptionArray:opts#Option#default_value= */
(nitmethod_t)VIRTUAL_opts__Option__init, /* pointer to opts:OptionArray:opts#Option#init */
(nitmethod_t)VIRTUAL_opts__Option__init_opt, /* pointer to opts:OptionArray:opts#Option#init_opt */
(nitmethod_t)VIRTUAL_opts__Option__pretty, /* pointer to opts:OptionArray:opts#Option#pretty */
(nitmethod_t)VIRTUAL_opts__OptionParameter__read_param, /* pointer to opts:OptionArray:opts#OptionParameter#read_param */
(nitmethod_t)VIRTUAL_opts__OptionArray__convert, /* pointer to opts:OptionArray:opts#OptionArray#convert */
(nitmethod_t)VIRTUAL_opts__OptionParameter__parameter_mandatory, /* pointer to opts:OptionArray:opts#OptionParameter#parameter_mandatory */
(nitmethod_t)VIRTUAL_opts__Option__read_param, /* pointer to opts:OptionArray:opts#Option#read_param */
(nitmethod_t)VIRTUAL_opts__OptionArray__init, /* pointer to opts:OptionArray:opts#OptionArray#init */
(nitmethod_t)VIRTUAL_opts__OptionArray__values, /* pointer to opts:OptionArray:opts#OptionArray#values */
(nitmethod_t)VIRTUAL_opts__OptionArray__values_61d, /* pointer to opts:OptionArray:opts#OptionArray#values= */
}
};
/* allocate OptionArray */
val* NEW_opts__OptionArray(const struct type* type) {
val* self /* : OptionArray */;
val* var /* : Array[String] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionArray;
var = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:Array[String]>*/;
}
self->attrs[COLOR_opts__Option___errors].val = var; /* _errors on <self:OptionArray exact> */
var1 = 0;
self->attrs[COLOR_opts__Option___mandatory].s = var1; /* _mandatory on <self:OptionArray exact> */
var2 = 0;
self->attrs[COLOR_opts__Option___hidden].s = var2; /* _hidden on <self:OptionArray exact> */
var3 = 0;
self->attrs[COLOR_opts__Option___read].s = var3; /* _read on <self:OptionArray exact> */
var4 = 1;
self->attrs[COLOR_opts__OptionParameter___parameter_mandatory].s = var4; /* _parameter_mandatory on <self:OptionArray exact> */
return self;
}
/* runtime class opts__OptionContext */
const struct class class_opts__OptionContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to opts:OptionContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to opts:OptionContext:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to opts:OptionContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to opts:OptionContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to opts:OptionContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to opts:OptionContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to opts:OptionContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to opts:OptionContext:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to opts:OptionContext:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to opts:OptionContext:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to opts:OptionContext:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to opts:OptionContext:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to opts:OptionContext:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to opts:OptionContext:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to opts:OptionContext:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to opts:OptionContext:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to opts:OptionContext:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to opts:OptionContext:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to opts:OptionContext:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to opts:OptionContext:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to opts:OptionContext:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to opts:OptionContext:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to opts:OptionContext:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to opts:OptionContext:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to opts:OptionContext:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to opts:OptionContext:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to opts:OptionContext:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to opts:OptionContext:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to opts:OptionContext:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to opts:OptionContext:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to opts:OptionContext:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_opts__OptionContext__options, /* pointer to opts:OptionContext:opts#OptionContext#options */
(nitmethod_t)VIRTUAL_opts__OptionContext__rest, /* pointer to opts:OptionContext:opts#OptionContext#rest */
(nitmethod_t)VIRTUAL_opts__OptionContext__errors, /* pointer to opts:OptionContext:opts#OptionContext#errors */
(nitmethod_t)VIRTUAL_opts__OptionContext__optmap, /* pointer to opts:OptionContext:opts#OptionContext#optmap */
(nitmethod_t)VIRTUAL_opts__OptionContext__add_option, /* pointer to opts:OptionContext:opts#OptionContext#add_option */
(nitmethod_t)VIRTUAL_opts__OptionContext__usage, /* pointer to opts:OptionContext:opts#OptionContext#usage */
(nitmethod_t)VIRTUAL_opts__OptionContext__parse, /* pointer to opts:OptionContext:opts#OptionContext#parse */
(nitmethod_t)VIRTUAL_opts__OptionContext__parse_intern, /* pointer to opts:OptionContext:opts#OptionContext#parse_intern */
(nitmethod_t)VIRTUAL_opts__OptionContext__build, /* pointer to opts:OptionContext:opts#OptionContext#build */
(nitmethod_t)VIRTUAL_opts__OptionContext__get_errors, /* pointer to opts:OptionContext:opts#OptionContext#get_errors */
}
};
/* allocate OptionContext */
val* NEW_opts__OptionContext(const struct type* type) {
val* self /* : OptionContext */;
val* var /* : Array[Option] */;
val* var1 /* : Array[String] */;
val* var2 /* : Array[String] */;
val* var3 /* : HashMap[String, Option] */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionContext;
var = NEW_array__Array(&type_array__Arrayopts__Option);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:Array[Option]>*/;
}
self->attrs[COLOR_opts__OptionContext___options].val = var; /* _options on <self:OptionContext exact> */
var1 = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:Array[String]>*/;
}
self->attrs[COLOR_opts__OptionContext___rest].val = var1; /* _rest on <self:OptionContext exact> */
var2 = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:Array[String]>*/;
}
self->attrs[COLOR_opts__OptionContext___errors].val = var2; /* _errors on <self:OptionContext exact> */
var3 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringopts__Option);
{
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:HashMap[String, Option]>*/;
}
self->attrs[COLOR_opts__OptionContext___optmap].val = var3; /* _optmap on <self:OptionContext exact> */
return self;
}
/* runtime class template__Template */
/* allocate Template */
val* NEW_template__Template(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Template is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class parser__ReduceAction0 */
const struct class class_parser__ReduceAction0 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction0:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction0:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction0:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction0:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction0:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction0:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction0:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction0:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction0:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction0:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction0:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction0:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction0:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction0:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction0:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction0:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction0:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction0:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction0:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction0:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction0:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction0:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction0:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction0:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction0:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction0:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction0:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction0:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction0:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction0:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction0:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction0__action, /* pointer to parser:ReduceAction0:parser#ReduceAction0#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction0:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction0:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction0 */
val* NEW_parser__ReduceAction0(const struct type* type) {
val* self /* : ReduceAction0 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction0;
return self;
}
/* runtime class parser__ReduceAction1 */
const struct class class_parser__ReduceAction1 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction1:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction1:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction1:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction1:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction1:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction1:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction1:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction1:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction1:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction1:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction1:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction1:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction1:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction1:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction1:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction1:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction1:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction1:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction1:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction1:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction1:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction1:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction1:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction1:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction1:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction1:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction1:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction1:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction1:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction1:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction1:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction1__action, /* pointer to parser:ReduceAction1:parser#ReduceAction1#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction1:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction1:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction1 */
val* NEW_parser__ReduceAction1(const struct type* type) {
val* self /* : ReduceAction1 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction1;
return self;
}
/* runtime class parser__ReduceAction2 */
const struct class class_parser__ReduceAction2 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction2:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction2:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction2:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction2:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction2:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction2:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction2:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction2:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction2:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction2:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction2:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction2:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction2:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction2:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction2:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction2:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction2:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction2:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction2:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction2:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction2:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction2:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction2:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction2:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction2:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction2:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction2:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction2:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction2:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction2:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction2:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction2__action, /* pointer to parser:ReduceAction2:parser#ReduceAction2#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction2:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction2:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction2 */
val* NEW_parser__ReduceAction2(const struct type* type) {
val* self /* : ReduceAction2 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction2;
return self;
}
/* runtime class parser__ReduceAction3 */
const struct class class_parser__ReduceAction3 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction3:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction3:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction3:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction3:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction3:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction3:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction3:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction3:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction3:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction3:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction3:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction3:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction3:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction3:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction3:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction3:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction3:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction3:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction3:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction3:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction3:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction3:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction3:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction3:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction3:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction3:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction3:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction3:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction3:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction3:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction3:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction3__action, /* pointer to parser:ReduceAction3:parser#ReduceAction3#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction3:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction3:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction3 */
val* NEW_parser__ReduceAction3(const struct type* type) {
val* self /* : ReduceAction3 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction3;
return self;
}
/* runtime class parser__ReduceAction4 */
const struct class class_parser__ReduceAction4 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction4:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction4:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction4:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction4:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction4:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction4:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction4:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction4:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction4:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction4:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction4:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction4:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction4:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction4:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction4:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction4:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction4:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction4:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction4:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction4:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction4:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction4:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction4:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction4:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction4:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction4:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction4:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction4:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction4:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction4:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction4:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction4__action, /* pointer to parser:ReduceAction4:parser#ReduceAction4#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction4:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction4:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction4 */
val* NEW_parser__ReduceAction4(const struct type* type) {
val* self /* : ReduceAction4 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction4;
return self;
}
/* runtime class parser__ReduceAction5 */
const struct class class_parser__ReduceAction5 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction5:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction5:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction5:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction5:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction5:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction5:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction5:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction5:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction5:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction5:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction5:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction5:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction5:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction5:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction5:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction5:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction5:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction5:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction5:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction5:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction5:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction5:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction5:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction5:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction5:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction5:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction5:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction5:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction5:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction5:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction5:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction5__action, /* pointer to parser:ReduceAction5:parser#ReduceAction5#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction5:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction5:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction5 */
val* NEW_parser__ReduceAction5(const struct type* type) {
val* self /* : ReduceAction5 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction5;
return self;
}
/* runtime class parser__ReduceAction6 */
const struct class class_parser__ReduceAction6 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction6:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction6:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction6:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction6:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction6:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction6:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction6:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction6:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction6:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction6:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction6:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction6:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction6:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction6:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction6:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction6:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction6:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction6:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction6:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction6:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction6:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction6:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction6:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction6:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction6:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction6:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction6:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction6:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction6:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction6:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction6:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction6__action, /* pointer to parser:ReduceAction6:parser#ReduceAction6#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction6:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction6:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction6 */
val* NEW_parser__ReduceAction6(const struct type* type) {
val* self /* : ReduceAction6 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction6;
return self;
}
/* runtime class parser__ReduceAction7 */
const struct class class_parser__ReduceAction7 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction7:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction7:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction7:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction7:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction7:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction7:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction7:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction7:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction7:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction7:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction7:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction7:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction7:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction7:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction7:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction7:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction7:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction7:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction7:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction7:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction7:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction7:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction7:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction7:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction7:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction7:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction7:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction7:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction7:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction7:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction7:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction7__action, /* pointer to parser:ReduceAction7:parser#ReduceAction7#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction7:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction7:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction7 */
val* NEW_parser__ReduceAction7(const struct type* type) {
val* self /* : ReduceAction7 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction7;
return self;
}
/* runtime class parser__ReduceAction8 */
const struct class class_parser__ReduceAction8 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction8:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction8:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction8:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction8:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction8:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction8:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction8:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction8:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction8:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction8:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction8:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction8:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction8:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction8:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction8:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction8:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction8:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction8:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction8:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction8:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction8:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction8:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction8:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction8:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction8:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction8:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction8:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction8:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction8:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction8:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction8:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction8__action, /* pointer to parser:ReduceAction8:parser#ReduceAction8#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction8:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction8:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction8 */
val* NEW_parser__ReduceAction8(const struct type* type) {
val* self /* : ReduceAction8 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction8;
return self;
}
/* runtime class parser__ReduceAction9 */
const struct class class_parser__ReduceAction9 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction9:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction9:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction9:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction9:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction9:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction9:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction9:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction9:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction9:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction9:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction9:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction9:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction9:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction9:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction9:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction9:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction9:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction9:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction9:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction9:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction9:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction9:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction9:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction9:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction9:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction9:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction9:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction9:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction9:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction9:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction9:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction9__action, /* pointer to parser:ReduceAction9:parser#ReduceAction9#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction9:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction9:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction9 */
val* NEW_parser__ReduceAction9(const struct type* type) {
val* self /* : ReduceAction9 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction9;
return self;
}
/* runtime class parser__ReduceAction10 */
const struct class class_parser__ReduceAction10 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction10:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction10:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction10:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction10:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction10:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction10:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction10:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction10:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction10:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction10:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction10:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction10:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction10:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction10:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction10:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction10:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction10:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction10:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction10:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction10:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction10:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction10:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction10:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction10:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction10:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction10:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction10:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction10:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction10:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction10:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction10:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction10__action, /* pointer to parser:ReduceAction10:parser#ReduceAction10#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction10:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction10:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction10 */
val* NEW_parser__ReduceAction10(const struct type* type) {
val* self /* : ReduceAction10 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction10;
return self;
}
/* runtime class parser__ReduceAction11 */
const struct class class_parser__ReduceAction11 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction11:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction11:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction11:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction11:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction11:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction11:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction11:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction11:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction11:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction11:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction11:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction11:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction11:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction11:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction11:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction11:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction11:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction11:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction11:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction11:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction11:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction11:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction11:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction11:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction11:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction11:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction11:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction11:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction11:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction11:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction11:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction11__action, /* pointer to parser:ReduceAction11:parser#ReduceAction11#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction11:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction11:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction11 */
val* NEW_parser__ReduceAction11(const struct type* type) {
val* self /* : ReduceAction11 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction11;
return self;
}
/* runtime class parser__ReduceAction12 */
const struct class class_parser__ReduceAction12 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction12:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction12:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction12:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction12:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction12:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction12:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction12:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction12:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction12:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction12:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction12:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction12:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction12:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction12:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction12:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction12:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction12:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction12:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction12:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction12:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction12:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction12:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction12:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction12:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction12:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction12:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction12:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction12:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction12:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction12:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction12:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction12__action, /* pointer to parser:ReduceAction12:parser#ReduceAction12#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction12:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction12:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction12 */
val* NEW_parser__ReduceAction12(const struct type* type) {
val* self /* : ReduceAction12 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction12;
return self;
}
/* runtime class parser__ReduceAction13 */
const struct class class_parser__ReduceAction13 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction13:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction13:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction13:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction13:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction13:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction13:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction13:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction13:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction13:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction13:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction13:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction13:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction13:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction13:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction13:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction13:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction13:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction13:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction13:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction13:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction13:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction13:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction13:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction13:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction13:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction13:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction13:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction13:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction13:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction13:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction13:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction13__action, /* pointer to parser:ReduceAction13:parser#ReduceAction13#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction13:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction13:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction13 */
val* NEW_parser__ReduceAction13(const struct type* type) {
val* self /* : ReduceAction13 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction13;
return self;
}
/* runtime class parser__ReduceAction14 */
const struct class class_parser__ReduceAction14 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction14:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction14:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction14:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction14:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction14:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction14:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction14:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction14:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction14:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction14:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction14:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction14:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction14:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction14:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction14:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction14:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction14:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction14:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction14:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction14:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction14:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction14:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction14:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction14:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction14:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction14:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction14:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction14:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction14:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction14:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction14:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction14__action, /* pointer to parser:ReduceAction14:parser#ReduceAction14#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction14:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction14:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction14 */
val* NEW_parser__ReduceAction14(const struct type* type) {
val* self /* : ReduceAction14 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction14;
return self;
}
/* runtime class parser__ReduceAction15 */
const struct class class_parser__ReduceAction15 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction15:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction15:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction15:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction15:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction15:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction15:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction15:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction15:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction15:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction15:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction15:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction15:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction15:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction15:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction15:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction15:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction15:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction15:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction15:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction15:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction15:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction15:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction15:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction15:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction15:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction15:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction15:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction15:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction15:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction15:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction15:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction15__action, /* pointer to parser:ReduceAction15:parser#ReduceAction15#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction15:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction15:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction15 */
val* NEW_parser__ReduceAction15(const struct type* type) {
val* self /* : ReduceAction15 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction15;
return self;
}
/* runtime class parser__ReduceAction16 */
const struct class class_parser__ReduceAction16 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction16:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction16:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction16:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction16:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction16:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction16:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction16:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction16:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction16:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction16:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction16:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction16:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction16:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction16:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction16:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction16:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction16:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction16:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction16:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction16:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction16:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction16:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction16:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction16:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction16:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction16:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction16:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction16:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction16:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction16:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction16:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction16__action, /* pointer to parser:ReduceAction16:parser#ReduceAction16#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction16:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction16:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction16 */
val* NEW_parser__ReduceAction16(const struct type* type) {
val* self /* : ReduceAction16 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction16;
return self;
}
/* runtime class parser__ReduceAction17 */
const struct class class_parser__ReduceAction17 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction17:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction17:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction17:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction17:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction17:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction17:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction17:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction17:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction17:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction17:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction17:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction17:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction17:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction17:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction17:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction17:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction17:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction17:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction17:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction17:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction17:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction17:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction17:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction17:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction17:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction17:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction17:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction17:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction17:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction17:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction17:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction17__action, /* pointer to parser:ReduceAction17:parser#ReduceAction17#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction17:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction17:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction17 */
val* NEW_parser__ReduceAction17(const struct type* type) {
val* self /* : ReduceAction17 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction17;
return self;
}
/* runtime class parser__ReduceAction18 */
const struct class class_parser__ReduceAction18 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction18:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction18:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction18:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction18:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction18:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction18:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction18:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction18:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction18:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction18:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction18:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction18:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction18:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction18:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction18:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction18:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction18:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction18:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction18:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction18:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction18:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction18:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction18:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction18:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction18:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction18:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction18:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction18:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction18:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction18:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction18:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction18__action, /* pointer to parser:ReduceAction18:parser#ReduceAction18#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction18:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction18:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction18 */
val* NEW_parser__ReduceAction18(const struct type* type) {
val* self /* : ReduceAction18 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction18;
return self;
}
/* runtime class parser__ReduceAction19 */
const struct class class_parser__ReduceAction19 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction19:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction19:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction19:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction19:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction19:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction19:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction19:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction19:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction19:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction19:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction19:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction19:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction19:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction19:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction19:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction19:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction19:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction19:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction19:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction19:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction19:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction19:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction19:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction19:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction19:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction19:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction19:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction19:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction19:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction19:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction19:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction19__action, /* pointer to parser:ReduceAction19:parser#ReduceAction19#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction19:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction19:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction19 */
val* NEW_parser__ReduceAction19(const struct type* type) {
val* self /* : ReduceAction19 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction19;
return self;
}
/* runtime class parser__ReduceAction20 */
const struct class class_parser__ReduceAction20 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction20:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction20:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction20:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction20:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction20:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction20:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction20:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction20:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction20:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction20:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction20:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction20:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction20:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction20:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction20:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction20:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction20:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction20:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction20:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction20:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction20:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction20:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction20:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction20:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction20:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction20:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction20:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction20:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction20:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction20:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction20:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction20__action, /* pointer to parser:ReduceAction20:parser#ReduceAction20#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction20:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction20:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction20 */
val* NEW_parser__ReduceAction20(const struct type* type) {
val* self /* : ReduceAction20 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction20;
return self;
}
/* runtime class parser__ReduceAction21 */
const struct class class_parser__ReduceAction21 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction21:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction21:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction21:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction21:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction21:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction21:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction21:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction21:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction21:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction21:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction21:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction21:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction21:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction21:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction21:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction21:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction21:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction21:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction21:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction21:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction21:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction21:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction21:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction21:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction21:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction21:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction21:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction21:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction21:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction21:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction21:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction21__action, /* pointer to parser:ReduceAction21:parser#ReduceAction21#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction21:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction21:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction21 */
val* NEW_parser__ReduceAction21(const struct type* type) {
val* self /* : ReduceAction21 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction21;
return self;
}
/* runtime class parser__ReduceAction22 */
const struct class class_parser__ReduceAction22 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction22:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction22:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction22:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction22:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction22:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction22:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction22:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction22:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction22:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction22:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction22:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction22:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction22:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction22:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction22:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction22:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction22:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction22:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction22:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction22:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction22:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction22:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction22:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction22:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction22:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction22:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction22:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction22:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction22:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction22:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction22:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction22__action, /* pointer to parser:ReduceAction22:parser#ReduceAction22#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction22:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction22:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction22 */
val* NEW_parser__ReduceAction22(const struct type* type) {
val* self /* : ReduceAction22 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction22;
return self;
}
/* runtime class parser__ReduceAction23 */
const struct class class_parser__ReduceAction23 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction23:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction23:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction23:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction23:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction23:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction23:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction23:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction23:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction23:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction23:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction23:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction23:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction23:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction23:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction23:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction23:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction23:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction23:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction23:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction23:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction23:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction23:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction23:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction23:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction23:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction23:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction23:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction23:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction23:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction23:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction23:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction23__action, /* pointer to parser:ReduceAction23:parser#ReduceAction23#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction23:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction23:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction23 */
val* NEW_parser__ReduceAction23(const struct type* type) {
val* self /* : ReduceAction23 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction23;
return self;
}
/* runtime class parser__ReduceAction24 */
const struct class class_parser__ReduceAction24 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction24:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction24:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction24:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction24:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction24:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction24:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction24:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction24:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction24:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction24:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction24:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction24:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction24:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction24:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction24:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction24:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction24:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction24:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction24:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction24:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction24:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction24:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction24:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction24:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction24:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction24:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction24:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction24:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction24:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction24:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction24:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction24__action, /* pointer to parser:ReduceAction24:parser#ReduceAction24#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction24:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction24:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction24 */
val* NEW_parser__ReduceAction24(const struct type* type) {
val* self /* : ReduceAction24 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction24;
return self;
}
/* runtime class parser__ReduceAction26 */
const struct class class_parser__ReduceAction26 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction26:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction26:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction26:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction26:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction26:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction26:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction26:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction26:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction26:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction26:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction26:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction26:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction26:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction26:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction26:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction26:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction26:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction26:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction26:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction26:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction26:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction26:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction26:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction26:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction26:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction26:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction26:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction26:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction26:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction26:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction26:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction26__action, /* pointer to parser:ReduceAction26:parser#ReduceAction26#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction26:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction26:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction26 */
val* NEW_parser__ReduceAction26(const struct type* type) {
val* self /* : ReduceAction26 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction26;
return self;
}
/* runtime class parser__ReduceAction27 */
const struct class class_parser__ReduceAction27 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction27:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction27:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction27:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction27:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction27:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction27:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction27:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction27:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction27:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction27:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction27:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction27:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction27:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction27:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction27:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction27:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction27:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction27:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction27:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction27:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction27:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction27:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction27:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction27:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction27:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction27:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction27:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction27:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction27:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction27:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction27:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction27__action, /* pointer to parser:ReduceAction27:parser#ReduceAction27#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction27:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction27:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction27 */
val* NEW_parser__ReduceAction27(const struct type* type) {
val* self /* : ReduceAction27 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction27;
return self;
}
/* runtime class parser__ReduceAction28 */
const struct class class_parser__ReduceAction28 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction28:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction28:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction28:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction28:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction28:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction28:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction28:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction28:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction28:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction28:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction28:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction28:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction28:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction28:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction28:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction28:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction28:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction28:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction28:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction28:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction28:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction28:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction28:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction28:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction28:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction28:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction28:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction28:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction28:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction28:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction28:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction28__action, /* pointer to parser:ReduceAction28:parser#ReduceAction28#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction28:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction28:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction28 */
val* NEW_parser__ReduceAction28(const struct type* type) {
val* self /* : ReduceAction28 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction28;
return self;
}
/* runtime class parser__ReduceAction29 */
const struct class class_parser__ReduceAction29 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction29:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction29:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction29:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction29:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction29:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction29:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction29:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction29:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction29:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction29:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction29:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction29:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction29:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction29:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction29:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction29:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction29:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction29:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction29:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction29:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction29:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction29:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction29:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction29:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction29:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction29:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction29:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction29:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction29:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction29:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction29:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction29__action, /* pointer to parser:ReduceAction29:parser#ReduceAction29#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction29:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction29:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction29 */
val* NEW_parser__ReduceAction29(const struct type* type) {
val* self /* : ReduceAction29 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction29;
return self;
}
/* runtime class parser__ReduceAction30 */
const struct class class_parser__ReduceAction30 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction30:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction30:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction30:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction30:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction30:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction30:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction30:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction30:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction30:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction30:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction30:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction30:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction30:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction30:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction30:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction30:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction30:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction30:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction30:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction30:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction30:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction30:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction30:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction30:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction30:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction30:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction30:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction30:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction30:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction30:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction30:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction30__action, /* pointer to parser:ReduceAction30:parser#ReduceAction30#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction30:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction30:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction30 */
val* NEW_parser__ReduceAction30(const struct type* type) {
val* self /* : ReduceAction30 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction30;
return self;
}
/* runtime class parser__ReduceAction31 */
const struct class class_parser__ReduceAction31 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction31:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction31:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction31:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction31:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction31:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction31:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction31:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction31:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction31:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction31:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction31:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction31:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction31:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction31:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction31:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction31:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction31:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction31:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction31:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction31:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction31:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction31:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction31:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction31:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction31:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction31:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction31:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction31:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction31:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction31:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction31:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction31__action, /* pointer to parser:ReduceAction31:parser#ReduceAction31#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction31:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction31:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction31 */
val* NEW_parser__ReduceAction31(const struct type* type) {
val* self /* : ReduceAction31 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction31;
return self;
}
/* runtime class parser__ReduceAction32 */
const struct class class_parser__ReduceAction32 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction32:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction32:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction32:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction32:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction32:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction32:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction32:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction32:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction32:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction32:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction32:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction32:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction32:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction32:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction32:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction32:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction32:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction32:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction32:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction32:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction32:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction32:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction32:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction32:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction32:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction32:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction32:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction32:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction32:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction32:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction32:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction32__action, /* pointer to parser:ReduceAction32:parser#ReduceAction32#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction32:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction32:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction32 */
val* NEW_parser__ReduceAction32(const struct type* type) {
val* self /* : ReduceAction32 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction32;
return self;
}
/* runtime class parser__ReduceAction33 */
const struct class class_parser__ReduceAction33 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction33:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction33:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction33:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction33:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction33:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction33:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction33:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction33:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction33:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction33:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction33:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction33:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction33:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction33:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction33:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction33:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction33:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction33:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction33:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction33:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction33:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction33:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction33:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction33:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction33:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction33:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction33:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction33:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction33:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction33:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction33:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction33__action, /* pointer to parser:ReduceAction33:parser#ReduceAction33#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction33:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction33:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction33 */
val* NEW_parser__ReduceAction33(const struct type* type) {
val* self /* : ReduceAction33 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction33;
return self;
}
/* runtime class parser__ReduceAction34 */
const struct class class_parser__ReduceAction34 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction34:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction34:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction34:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction34:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction34:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction34:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction34:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction34:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction34:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction34:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction34:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction34:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction34:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction34:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction34:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction34:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction34:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction34:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction34:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction34:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction34:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction34:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction34:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction34:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction34:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction34:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction34:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction34:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction34:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction34:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction34:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction34__action, /* pointer to parser:ReduceAction34:parser#ReduceAction34#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction34:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction34:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction34 */
val* NEW_parser__ReduceAction34(const struct type* type) {
val* self /* : ReduceAction34 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction34;
return self;
}
/* runtime class parser__ReduceAction35 */
const struct class class_parser__ReduceAction35 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction35:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction35:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction35:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction35:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction35:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction35:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction35:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction35:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction35:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction35:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction35:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction35:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction35:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction35:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction35:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction35:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction35:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction35:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction35:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction35:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction35:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction35:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction35:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction35:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction35:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction35:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction35:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction35:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction35:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction35:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction35:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction35__action, /* pointer to parser:ReduceAction35:parser#ReduceAction35#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction35:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction35:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction35 */
val* NEW_parser__ReduceAction35(const struct type* type) {
val* self /* : ReduceAction35 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction35;
return self;
}
/* runtime class parser__ReduceAction36 */
const struct class class_parser__ReduceAction36 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction36:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction36:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction36:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction36:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction36:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction36:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction36:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction36:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction36:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction36:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction36:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction36:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction36:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction36:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction36:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction36:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction36:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction36:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction36:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction36:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction36:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction36:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction36:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction36:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction36:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction36:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction36:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction36:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction36:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction36:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction36:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction36__action, /* pointer to parser:ReduceAction36:parser#ReduceAction36#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction36:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction36:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction36 */
val* NEW_parser__ReduceAction36(const struct type* type) {
val* self /* : ReduceAction36 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction36;
return self;
}
/* runtime class parser__ReduceAction37 */
const struct class class_parser__ReduceAction37 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction37:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction37:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction37:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction37:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction37:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction37:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction37:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction37:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction37:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction37:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction37:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction37:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction37:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction37:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction37:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction37:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction37:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction37:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction37:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction37:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction37:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction37:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction37:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction37:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction37:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction37:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction37:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction37:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction37:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction37:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction37:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction37__action, /* pointer to parser:ReduceAction37:parser#ReduceAction37#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction37:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction37:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction37 */
val* NEW_parser__ReduceAction37(const struct type* type) {
val* self /* : ReduceAction37 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction37;
return self;
}
/* runtime class parser__ReduceAction38 */
const struct class class_parser__ReduceAction38 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction38:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction38:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction38:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction38:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction38:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction38:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction38:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction38:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction38:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction38:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction38:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction38:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction38:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction38:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction38:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction38:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction38:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction38:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction38:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction38:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction38:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction38:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction38:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction38:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction38:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction38:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction38:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction38:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction38:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction38:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction38:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction38__action, /* pointer to parser:ReduceAction38:parser#ReduceAction38#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction38:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction38:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction38 */
val* NEW_parser__ReduceAction38(const struct type* type) {
val* self /* : ReduceAction38 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction38;
return self;
}
/* runtime class parser__ReduceAction39 */
const struct class class_parser__ReduceAction39 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction39:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction39:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction39:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction39:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction39:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction39:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction39:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction39:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction39:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction39:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction39:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction39:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction39:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction39:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction39:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction39:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction39:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction39:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction39:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction39:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction39:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction39:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction39:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction39:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction39:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction39:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction39:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction39:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction39:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction39:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction39:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction39__action, /* pointer to parser:ReduceAction39:parser#ReduceAction39#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction39:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction39:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction39 */
val* NEW_parser__ReduceAction39(const struct type* type) {
val* self /* : ReduceAction39 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction39;
return self;
}
/* runtime class parser__ReduceAction40 */
const struct class class_parser__ReduceAction40 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction40:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction40:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction40:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction40:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction40:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction40:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction40:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction40:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction40:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction40:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction40:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction40:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction40:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction40:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction40:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction40:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction40:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction40:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction40:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction40:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction40:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction40:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction40:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction40:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction40:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction40:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction40:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction40:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction40:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction40:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction40:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction40__action, /* pointer to parser:ReduceAction40:parser#ReduceAction40#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction40:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction40:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction40 */
val* NEW_parser__ReduceAction40(const struct type* type) {
val* self /* : ReduceAction40 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction40;
return self;
}
/* runtime class parser__ReduceAction41 */
const struct class class_parser__ReduceAction41 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction41:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction41:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction41:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction41:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction41:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction41:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction41:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction41:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction41:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction41:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction41:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction41:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction41:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction41:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction41:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction41:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction41:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction41:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction41:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction41:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction41:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction41:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction41:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction41:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction41:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction41:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction41:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction41:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction41:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction41:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction41:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction41__action, /* pointer to parser:ReduceAction41:parser#ReduceAction41#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction41:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction41:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction41 */
val* NEW_parser__ReduceAction41(const struct type* type) {
val* self /* : ReduceAction41 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction41;
return self;
}
/* runtime class parser__ReduceAction43 */
const struct class class_parser__ReduceAction43 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction43:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction43:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction43:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction43:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction43:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction43:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction43:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction43:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction43:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction43:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction43:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction43:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction43:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction43:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction43:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction43:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction43:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction43:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction43:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction43:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction43:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction43:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction43:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction43:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction43:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction43:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction43:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction43:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction43:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction43:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction43:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction43__action, /* pointer to parser:ReduceAction43:parser#ReduceAction43#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction43:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction43:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction43 */
val* NEW_parser__ReduceAction43(const struct type* type) {
val* self /* : ReduceAction43 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction43;
return self;
}
/* runtime class parser__ReduceAction44 */
const struct class class_parser__ReduceAction44 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction44:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction44:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction44:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction44:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction44:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction44:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction44:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction44:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction44:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction44:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction44:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction44:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction44:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction44:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction44:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction44:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction44:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction44:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction44:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction44:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction44:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction44:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction44:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction44:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction44:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction44:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction44:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction44:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction44:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction44:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction44:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction44__action, /* pointer to parser:ReduceAction44:parser#ReduceAction44#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction44:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction44:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction44 */
val* NEW_parser__ReduceAction44(const struct type* type) {
val* self /* : ReduceAction44 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction44;
return self;
}
/* runtime class parser__ReduceAction45 */
const struct class class_parser__ReduceAction45 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction45:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction45:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction45:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction45:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction45:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction45:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction45:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction45:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction45:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction45:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction45:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction45:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction45:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction45:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction45:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction45:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction45:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction45:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction45:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction45:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction45:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction45:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction45:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction45:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction45:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction45:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction45:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction45:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction45:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction45:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction45:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction45__action, /* pointer to parser:ReduceAction45:parser#ReduceAction45#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction45:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction45:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction45 */
val* NEW_parser__ReduceAction45(const struct type* type) {
val* self /* : ReduceAction45 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction45;
return self;
}
/* runtime class parser__ReduceAction46 */
const struct class class_parser__ReduceAction46 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction46:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction46:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction46:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction46:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction46:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction46:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction46:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction46:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction46:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction46:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction46:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction46:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction46:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction46:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction46:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction46:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction46:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction46:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction46:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction46:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction46:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction46:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction46:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction46:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction46:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction46:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction46:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction46:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction46:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction46:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction46:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction46__action, /* pointer to parser:ReduceAction46:parser#ReduceAction46#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction46:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction46:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction46 */
val* NEW_parser__ReduceAction46(const struct type* type) {
val* self /* : ReduceAction46 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction46;
return self;
}
/* runtime class parser__ReduceAction47 */
const struct class class_parser__ReduceAction47 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction47:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction47:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction47:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction47:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction47:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction47:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction47:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction47:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction47:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction47:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction47:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction47:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction47:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction47:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction47:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction47:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction47:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction47:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction47:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction47:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction47:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction47:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction47:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction47:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction47:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction47:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction47:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction47:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction47:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction47:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction47:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction47__action, /* pointer to parser:ReduceAction47:parser#ReduceAction47#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction47:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction47:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction47 */
val* NEW_parser__ReduceAction47(const struct type* type) {
val* self /* : ReduceAction47 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction47;
return self;
}
/* runtime class parser__ReduceAction48 */
const struct class class_parser__ReduceAction48 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction48:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction48:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction48:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction48:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction48:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction48:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction48:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction48:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction48:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction48:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction48:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction48:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction48:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction48:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction48:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction48:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction48:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction48:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction48:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction48:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction48:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction48:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction48:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction48:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction48:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction48:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction48:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction48:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction48:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction48:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction48:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction48__action, /* pointer to parser:ReduceAction48:parser#ReduceAction48#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction48:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction48:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction48 */
val* NEW_parser__ReduceAction48(const struct type* type) {
val* self /* : ReduceAction48 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction48;
return self;
}
/* runtime class parser__ReduceAction49 */
const struct class class_parser__ReduceAction49 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction49:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction49:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction49:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction49:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction49:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction49:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction49:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction49:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction49:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction49:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction49:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction49:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction49:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction49:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction49:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction49:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction49:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction49:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction49:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction49:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction49:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction49:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction49:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction49:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction49:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction49:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction49:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction49:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction49:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction49:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction49:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction49__action, /* pointer to parser:ReduceAction49:parser#ReduceAction49#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction49:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction49:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction49 */
val* NEW_parser__ReduceAction49(const struct type* type) {
val* self /* : ReduceAction49 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction49;
return self;
}
/* runtime class parser__ReduceAction50 */
const struct class class_parser__ReduceAction50 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction50:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction50:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction50:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction50:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction50:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction50:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction50:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction50:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction50:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction50:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction50:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction50:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction50:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction50:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction50:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction50:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction50:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction50:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction50:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction50:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction50:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction50:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction50:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction50:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction50:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction50:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction50:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction50:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction50:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction50:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction50:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction50__action, /* pointer to parser:ReduceAction50:parser#ReduceAction50#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction50:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction50:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction50 */
val* NEW_parser__ReduceAction50(const struct type* type) {
val* self /* : ReduceAction50 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction50;
return self;
}
/* runtime class parser__ReduceAction51 */
const struct class class_parser__ReduceAction51 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction51:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction51:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction51:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction51:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction51:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction51:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction51:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction51:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction51:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction51:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction51:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction51:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction51:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction51:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction51:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction51:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction51:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction51:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction51:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction51:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction51:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction51:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction51:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction51:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction51:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction51:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction51:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction51:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction51:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction51:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction51:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction51__action, /* pointer to parser:ReduceAction51:parser#ReduceAction51#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction51:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction51:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction51 */
val* NEW_parser__ReduceAction51(const struct type* type) {
val* self /* : ReduceAction51 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction51;
return self;
}
/* runtime class parser__ReduceAction52 */
const struct class class_parser__ReduceAction52 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction52:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction52:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction52:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction52:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction52:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction52:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction52:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction52:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction52:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction52:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction52:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction52:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction52:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction52:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction52:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction52:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction52:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction52:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction52:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction52:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction52:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction52:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction52:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction52:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction52:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction52:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction52:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction52:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction52:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction52:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction52:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction52__action, /* pointer to parser:ReduceAction52:parser#ReduceAction52#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction52:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction52:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction52 */
val* NEW_parser__ReduceAction52(const struct type* type) {
val* self /* : ReduceAction52 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction52;
return self;
}
/* runtime class parser__ReduceAction53 */
const struct class class_parser__ReduceAction53 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction53:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction53:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction53:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction53:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction53:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction53:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction53:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction53:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction53:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction53:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction53:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction53:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction53:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction53:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction53:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction53:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction53:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction53:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction53:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction53:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction53:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction53:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction53:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction53:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction53:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction53:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction53:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction53:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction53:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction53:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction53:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction53__action, /* pointer to parser:ReduceAction53:parser#ReduceAction53#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction53:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction53:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction53 */
val* NEW_parser__ReduceAction53(const struct type* type) {
val* self /* : ReduceAction53 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction53;
return self;
}
/* runtime class parser__ReduceAction54 */
const struct class class_parser__ReduceAction54 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction54:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction54:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction54:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction54:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction54:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction54:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction54:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction54:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction54:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction54:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction54:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction54:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction54:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction54:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction54:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction54:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction54:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction54:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction54:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction54:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction54:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction54:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction54:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction54:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction54:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction54:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction54:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction54:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction54:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction54:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction54:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction54__action, /* pointer to parser:ReduceAction54:parser#ReduceAction54#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction54:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction54:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction54 */
val* NEW_parser__ReduceAction54(const struct type* type) {
val* self /* : ReduceAction54 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction54;
return self;
}
/* runtime class parser__ReduceAction55 */
const struct class class_parser__ReduceAction55 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction55:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction55:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction55:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction55:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction55:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction55:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction55:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction55:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction55:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction55:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction55:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction55:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction55:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction55:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction55:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction55:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction55:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction55:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction55:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction55:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction55:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction55:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction55:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction55:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction55:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction55:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction55:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction55:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction55:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction55:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction55:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction55__action, /* pointer to parser:ReduceAction55:parser#ReduceAction55#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction55:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction55:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction55 */
val* NEW_parser__ReduceAction55(const struct type* type) {
val* self /* : ReduceAction55 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction55;
return self;
}
/* runtime class parser__ReduceAction56 */
const struct class class_parser__ReduceAction56 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction56:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction56:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction56:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction56:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction56:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction56:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction56:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction56:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction56:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction56:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction56:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction56:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction56:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction56:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction56:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction56:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction56:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction56:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction56:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction56:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction56:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction56:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction56:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction56:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction56:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction56:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction56:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction56:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction56:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction56:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction56:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction56__action, /* pointer to parser:ReduceAction56:parser#ReduceAction56#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction56:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction56:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction56 */
val* NEW_parser__ReduceAction56(const struct type* type) {
val* self /* : ReduceAction56 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction56;
return self;
}
/* runtime class parser__ReduceAction57 */
const struct class class_parser__ReduceAction57 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction57:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction57:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction57:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction57:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction57:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction57:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction57:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction57:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction57:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction57:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction57:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction57:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction57:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction57:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction57:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction57:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction57:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction57:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction57:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction57:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction57:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction57:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction57:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction57:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction57:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction57:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction57:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction57:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction57:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction57:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction57:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction57__action, /* pointer to parser:ReduceAction57:parser#ReduceAction57#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction57:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction57:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction57 */
val* NEW_parser__ReduceAction57(const struct type* type) {
val* self /* : ReduceAction57 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction57;
return self;
}
/* runtime class parser__ReduceAction58 */
const struct class class_parser__ReduceAction58 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction58:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction58:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction58:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction58:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction58:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction58:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction58:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction58:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction58:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction58:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction58:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction58:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction58:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction58:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction58:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction58:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction58:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction58:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction58:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction58:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction58:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction58:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction58:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction58:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction58:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction58:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction58:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction58:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction58:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction58:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction58:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction58__action, /* pointer to parser:ReduceAction58:parser#ReduceAction58#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction58:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction58:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction58 */
val* NEW_parser__ReduceAction58(const struct type* type) {
val* self /* : ReduceAction58 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction58;
return self;
}
/* runtime class parser__ReduceAction59 */
const struct class class_parser__ReduceAction59 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction59:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction59:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction59:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction59:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction59:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction59:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction59:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction59:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction59:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction59:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction59:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction59:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction59:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction59:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction59:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction59:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction59:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction59:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction59:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction59:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction59:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction59:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction59:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction59:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction59:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction59:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction59:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction59:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction59:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction59:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction59:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction59__action, /* pointer to parser:ReduceAction59:parser#ReduceAction59#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction59:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction59:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction59 */
val* NEW_parser__ReduceAction59(const struct type* type) {
val* self /* : ReduceAction59 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction59;
return self;
}
/* runtime class parser__ReduceAction60 */
const struct class class_parser__ReduceAction60 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction60:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction60:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction60:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction60:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction60:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction60:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction60:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction60:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction60:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction60:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction60:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction60:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction60:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction60:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction60:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction60:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction60:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction60:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction60:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction60:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction60:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction60:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction60:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction60:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction60:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction60:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction60:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction60:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction60:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction60:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction60:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction60__action, /* pointer to parser:ReduceAction60:parser#ReduceAction60#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction60:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction60:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction60 */
val* NEW_parser__ReduceAction60(const struct type* type) {
val* self /* : ReduceAction60 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction60;
return self;
}
/* runtime class parser__ReduceAction61 */
const struct class class_parser__ReduceAction61 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction61:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction61:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction61:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction61:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction61:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction61:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction61:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction61:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction61:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction61:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction61:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction61:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction61:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction61:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction61:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction61:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction61:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction61:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction61:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction61:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction61:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction61:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction61:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction61:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction61:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction61:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction61:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction61:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction61:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction61:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction61:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction61__action, /* pointer to parser:ReduceAction61:parser#ReduceAction61#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction61:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction61:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction61 */
val* NEW_parser__ReduceAction61(const struct type* type) {
val* self /* : ReduceAction61 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction61;
return self;
}
/* runtime class parser__ReduceAction62 */
const struct class class_parser__ReduceAction62 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction62:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction62:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction62:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction62:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction62:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction62:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction62:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction62:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction62:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction62:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction62:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction62:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction62:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction62:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction62:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction62:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction62:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction62:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction62:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction62:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction62:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction62:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction62:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction62:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction62:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction62:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction62:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction62:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction62:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction62:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction62:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction62__action, /* pointer to parser:ReduceAction62:parser#ReduceAction62#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction62:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction62:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction62 */
val* NEW_parser__ReduceAction62(const struct type* type) {
val* self /* : ReduceAction62 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction62;
return self;
}
/* runtime class parser__ReduceAction63 */
const struct class class_parser__ReduceAction63 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction63:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction63:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction63:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction63:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction63:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction63:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction63:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction63:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction63:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction63:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction63:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction63:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction63:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction63:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction63:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction63:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction63:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction63:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction63:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction63:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction63:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction63:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction63:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction63:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction63:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction63:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction63:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction63:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction63:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction63:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction63:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction63__action, /* pointer to parser:ReduceAction63:parser#ReduceAction63#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction63:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction63:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction63 */
val* NEW_parser__ReduceAction63(const struct type* type) {
val* self /* : ReduceAction63 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction63;
return self;
}
/* runtime class parser__ReduceAction64 */
const struct class class_parser__ReduceAction64 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction64:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction64:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction64:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction64:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction64:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction64:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction64:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction64:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction64:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction64:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction64:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction64:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction64:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction64:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction64:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction64:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction64:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction64:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction64:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction64:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction64:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction64:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction64:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction64:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction64:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction64:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction64:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction64:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction64:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction64:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction64:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction64__action, /* pointer to parser:ReduceAction64:parser#ReduceAction64#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction64:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction64:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction64 */
val* NEW_parser__ReduceAction64(const struct type* type) {
val* self /* : ReduceAction64 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction64;
return self;
}
/* runtime class parser__ReduceAction65 */
const struct class class_parser__ReduceAction65 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction65:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction65:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction65:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction65:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction65:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction65:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction65:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction65:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction65:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction65:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction65:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction65:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction65:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction65:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction65:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction65:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction65:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction65:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction65:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction65:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction65:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction65:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction65:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction65:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction65:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction65:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction65:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction65:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction65:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction65:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction65:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction65__action, /* pointer to parser:ReduceAction65:parser#ReduceAction65#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction65:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction65:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction65 */
val* NEW_parser__ReduceAction65(const struct type* type) {
val* self /* : ReduceAction65 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction65;
return self;
}
/* runtime class parser__ReduceAction66 */
const struct class class_parser__ReduceAction66 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction66:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction66:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction66:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction66:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction66:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction66:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction66:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction66:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction66:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction66:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction66:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction66:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction66:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction66:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction66:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction66:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction66:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction66:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction66:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction66:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction66:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction66:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction66:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction66:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction66:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction66:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction66:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction66:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction66:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction66:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction66:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction66__action, /* pointer to parser:ReduceAction66:parser#ReduceAction66#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction66:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction66:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction66 */
val* NEW_parser__ReduceAction66(const struct type* type) {
val* self /* : ReduceAction66 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction66;
return self;
}
/* runtime class parser__ReduceAction67 */
const struct class class_parser__ReduceAction67 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction67:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction67:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction67:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction67:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction67:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction67:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction67:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction67:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction67:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction67:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction67:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction67:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction67:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction67:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction67:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction67:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction67:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction67:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction67:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction67:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction67:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction67:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction67:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction67:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction67:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction67:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction67:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction67:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction67:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction67:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction67:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction67__action, /* pointer to parser:ReduceAction67:parser#ReduceAction67#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction67:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction67:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction67 */
val* NEW_parser__ReduceAction67(const struct type* type) {
val* self /* : ReduceAction67 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction67;
return self;
}
/* runtime class parser__ReduceAction68 */
const struct class class_parser__ReduceAction68 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction68:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction68:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction68:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction68:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction68:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction68:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction68:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction68:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction68:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction68:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction68:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction68:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction68:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction68:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction68:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction68:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction68:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction68:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction68:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction68:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction68:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction68:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction68:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction68:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction68:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction68:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction68:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction68:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction68:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction68:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction68:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction68__action, /* pointer to parser:ReduceAction68:parser#ReduceAction68#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction68:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction68:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction68 */
val* NEW_parser__ReduceAction68(const struct type* type) {
val* self /* : ReduceAction68 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction68;
return self;
}
/* runtime class parser__ReduceAction69 */
const struct class class_parser__ReduceAction69 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction69:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction69:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction69:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction69:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction69:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction69:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction69:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction69:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction69:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction69:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction69:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction69:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction69:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction69:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction69:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction69:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction69:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction69:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction69:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction69:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction69:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction69:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction69:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction69:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction69:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction69:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction69:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction69:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction69:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction69:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction69:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction69__action, /* pointer to parser:ReduceAction69:parser#ReduceAction69#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction69:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction69:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction69 */
val* NEW_parser__ReduceAction69(const struct type* type) {
val* self /* : ReduceAction69 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction69;
return self;
}
/* runtime class parser__ReduceAction70 */
const struct class class_parser__ReduceAction70 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction70:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction70:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction70:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction70:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction70:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction70:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction70:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction70:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction70:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction70:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction70:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction70:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction70:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction70:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction70:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction70:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction70:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction70:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction70:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction70:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction70:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction70:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction70:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction70:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction70:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction70:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction70:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction70:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction70:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction70:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction70:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction70__action, /* pointer to parser:ReduceAction70:parser#ReduceAction70#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction70:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction70:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction70 */
val* NEW_parser__ReduceAction70(const struct type* type) {
val* self /* : ReduceAction70 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction70;
return self;
}
/* runtime class parser__ReduceAction71 */
const struct class class_parser__ReduceAction71 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction71:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction71:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction71:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction71:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction71:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction71:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction71:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction71:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction71:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction71:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction71:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction71:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction71:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction71:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction71:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction71:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction71:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction71:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction71:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction71:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction71:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction71:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction71:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction71:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction71:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction71:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction71:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction71:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction71:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction71:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction71:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction71__action, /* pointer to parser:ReduceAction71:parser#ReduceAction71#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction71:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction71:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction71 */
val* NEW_parser__ReduceAction71(const struct type* type) {
val* self /* : ReduceAction71 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction71;
return self;
}
/* runtime class parser__ReduceAction72 */
const struct class class_parser__ReduceAction72 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction72:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction72:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction72:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction72:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction72:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction72:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction72:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction72:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction72:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction72:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction72:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction72:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction72:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction72:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction72:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction72:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction72:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction72:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction72:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction72:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction72:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction72:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction72:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction72:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction72:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction72:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction72:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction72:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction72:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction72:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction72:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction72__action, /* pointer to parser:ReduceAction72:parser#ReduceAction72#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction72:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction72:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction72 */
val* NEW_parser__ReduceAction72(const struct type* type) {
val* self /* : ReduceAction72 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction72;
return self;
}
/* runtime class parser__ReduceAction73 */
const struct class class_parser__ReduceAction73 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction73:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction73:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction73:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction73:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction73:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction73:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction73:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction73:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction73:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction73:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction73:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction73:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction73:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction73:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction73:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction73:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction73:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction73:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction73:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction73:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction73:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction73:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction73:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction73:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction73:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction73:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction73:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction73:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction73:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction73:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction73:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction73__action, /* pointer to parser:ReduceAction73:parser#ReduceAction73#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction73:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction73:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction73 */
val* NEW_parser__ReduceAction73(const struct type* type) {
val* self /* : ReduceAction73 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction73;
return self;
}
/* runtime class parser__ReduceAction74 */
const struct class class_parser__ReduceAction74 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction74:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction74:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction74:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction74:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction74:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction74:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction74:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction74:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction74:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction74:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction74:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction74:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction74:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction74:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction74:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction74:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction74:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction74:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction74:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction74:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction74:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction74:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction74:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction74:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction74:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction74:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction74:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction74:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction74:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction74:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction74:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction74__action, /* pointer to parser:ReduceAction74:parser#ReduceAction74#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction74:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction74:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction74 */
val* NEW_parser__ReduceAction74(const struct type* type) {
val* self /* : ReduceAction74 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction74;
return self;
}
/* runtime class parser__ReduceAction75 */
const struct class class_parser__ReduceAction75 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction75:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction75:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction75:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction75:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction75:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction75:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction75:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction75:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction75:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction75:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction75:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction75:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction75:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction75:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction75:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction75:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction75:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction75:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction75:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction75:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction75:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction75:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction75:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction75:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction75:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction75:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction75:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction75:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction75:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction75:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction75:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction75__action, /* pointer to parser:ReduceAction75:parser#ReduceAction75#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction75:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction75:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction75 */
val* NEW_parser__ReduceAction75(const struct type* type) {
val* self /* : ReduceAction75 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction75;
return self;
}
/* runtime class parser__ReduceAction76 */
const struct class class_parser__ReduceAction76 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction76:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction76:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction76:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction76:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction76:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction76:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction76:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction76:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction76:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction76:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction76:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction76:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction76:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction76:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction76:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction76:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction76:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction76:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction76:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction76:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction76:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction76:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction76:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction76:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction76:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction76:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction76:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction76:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction76:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction76:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction76:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction76__action, /* pointer to parser:ReduceAction76:parser#ReduceAction76#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction76:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction76:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction76 */
val* NEW_parser__ReduceAction76(const struct type* type) {
val* self /* : ReduceAction76 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction76;
return self;
}
/* runtime class parser__ReduceAction77 */
const struct class class_parser__ReduceAction77 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction77:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction77:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction77:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction77:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction77:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction77:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction77:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction77:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction77:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction77:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction77:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction77:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction77:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction77:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction77:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction77:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction77:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction77:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction77:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction77:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction77:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction77:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction77:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction77:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction77:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction77:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction77:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction77:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction77:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction77:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction77:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction77__action, /* pointer to parser:ReduceAction77:parser#ReduceAction77#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction77:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction77:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction77 */
val* NEW_parser__ReduceAction77(const struct type* type) {
val* self /* : ReduceAction77 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction77;
return self;
}
/* runtime class parser__ReduceAction78 */
const struct class class_parser__ReduceAction78 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction78:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction78:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction78:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction78:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction78:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction78:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction78:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction78:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction78:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction78:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction78:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction78:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction78:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction78:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction78:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction78:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction78:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction78:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction78:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction78:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction78:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction78:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction78:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction78:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction78:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction78:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction78:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction78:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction78:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction78:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction78:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction78__action, /* pointer to parser:ReduceAction78:parser#ReduceAction78#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction78:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction78:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction78 */
val* NEW_parser__ReduceAction78(const struct type* type) {
val* self /* : ReduceAction78 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction78;
return self;
}
/* runtime class parser__ReduceAction79 */
const struct class class_parser__ReduceAction79 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction79:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction79:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction79:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction79:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction79:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction79:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction79:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction79:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction79:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction79:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction79:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction79:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction79:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction79:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction79:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction79:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction79:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction79:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction79:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction79:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction79:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction79:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction79:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction79:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction79:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction79:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction79:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction79:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction79:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction79:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction79:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction79__action, /* pointer to parser:ReduceAction79:parser#ReduceAction79#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction79:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction79:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction79 */
val* NEW_parser__ReduceAction79(const struct type* type) {
val* self /* : ReduceAction79 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction79;
return self;
}
/* runtime class parser__ReduceAction80 */
const struct class class_parser__ReduceAction80 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction80:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction80:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction80:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction80:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction80:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction80:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction80:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction80:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction80:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction80:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction80:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction80:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction80:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction80:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction80:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction80:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction80:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction80:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction80:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction80:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction80:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction80:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction80:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction80:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction80:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction80:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction80:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction80:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction80:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction80:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction80:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction80__action, /* pointer to parser:ReduceAction80:parser#ReduceAction80#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction80:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction80:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction80 */
val* NEW_parser__ReduceAction80(const struct type* type) {
val* self /* : ReduceAction80 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction80;
return self;
}
/* runtime class parser__ReduceAction81 */
const struct class class_parser__ReduceAction81 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction81:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction81:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction81:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction81:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction81:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction81:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction81:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction81:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction81:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction81:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction81:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction81:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction81:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction81:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction81:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction81:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction81:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction81:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction81:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction81:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction81:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction81:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction81:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction81:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction81:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction81:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction81:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction81:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction81:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction81:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction81:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction81__action, /* pointer to parser:ReduceAction81:parser#ReduceAction81#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction81:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction81:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction81 */
val* NEW_parser__ReduceAction81(const struct type* type) {
val* self /* : ReduceAction81 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction81;
return self;
}
/* runtime class parser__ReduceAction82 */
const struct class class_parser__ReduceAction82 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction82:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction82:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction82:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction82:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction82:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction82:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction82:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction82:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction82:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction82:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction82:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction82:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction82:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction82:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction82:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction82:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction82:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction82:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction82:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction82:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction82:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction82:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction82:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction82:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction82:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction82:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction82:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction82:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction82:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction82:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction82:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction82__action, /* pointer to parser:ReduceAction82:parser#ReduceAction82#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction82:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction82:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction82 */
val* NEW_parser__ReduceAction82(const struct type* type) {
val* self /* : ReduceAction82 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction82;
return self;
}
/* runtime class parser__ReduceAction83 */
const struct class class_parser__ReduceAction83 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction83:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction83:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction83:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction83:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction83:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction83:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction83:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction83:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction83:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction83:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction83:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction83:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction83:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction83:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction83:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction83:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction83:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction83:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction83:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction83:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction83:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction83:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction83:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction83:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction83:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction83:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction83:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction83:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction83:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction83:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction83:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction83__action, /* pointer to parser:ReduceAction83:parser#ReduceAction83#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction83:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction83:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction83 */
val* NEW_parser__ReduceAction83(const struct type* type) {
val* self /* : ReduceAction83 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction83;
return self;
}
/* runtime class parser__ReduceAction84 */
const struct class class_parser__ReduceAction84 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction84:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction84:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction84:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction84:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction84:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction84:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction84:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction84:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction84:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction84:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction84:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction84:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction84:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction84:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction84:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction84:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction84:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction84:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction84:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction84:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction84:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction84:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction84:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction84:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction84:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction84:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction84:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction84:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction84:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction84:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction84:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction84__action, /* pointer to parser:ReduceAction84:parser#ReduceAction84#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction84:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction84:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction84 */
val* NEW_parser__ReduceAction84(const struct type* type) {
val* self /* : ReduceAction84 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction84;
return self;
}
/* runtime class parser__ReduceAction87 */
const struct class class_parser__ReduceAction87 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction87:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction87:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction87:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction87:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction87:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction87:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction87:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction87:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction87:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction87:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction87:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction87:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction87:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction87:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction87:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction87:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction87:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction87:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction87:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction87:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction87:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction87:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction87:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction87:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction87:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction87:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction87:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction87:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction87:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction87:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction87:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction87__action, /* pointer to parser:ReduceAction87:parser#ReduceAction87#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction87:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction87:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction87 */
val* NEW_parser__ReduceAction87(const struct type* type) {
val* self /* : ReduceAction87 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction87;
return self;
}
/* runtime class parser__ReduceAction88 */
const struct class class_parser__ReduceAction88 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction88:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction88:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction88:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction88:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction88:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction88:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction88:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction88:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction88:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction88:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction88:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction88:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction88:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction88:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction88:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction88:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction88:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction88:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction88:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction88:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction88:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction88:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction88:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction88:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction88:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction88:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction88:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction88:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction88:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction88:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction88:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction88__action, /* pointer to parser:ReduceAction88:parser#ReduceAction88#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction88:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction88:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction88 */
val* NEW_parser__ReduceAction88(const struct type* type) {
val* self /* : ReduceAction88 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction88;
return self;
}
/* runtime class parser__ReduceAction89 */
const struct class class_parser__ReduceAction89 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction89:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction89:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction89:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction89:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction89:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction89:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction89:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction89:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction89:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction89:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction89:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction89:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction89:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction89:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction89:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction89:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction89:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction89:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction89:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction89:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction89:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction89:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction89:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction89:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction89:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction89:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction89:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction89:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction89:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction89:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction89:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction89__action, /* pointer to parser:ReduceAction89:parser#ReduceAction89#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction89:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction89:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction89 */
val* NEW_parser__ReduceAction89(const struct type* type) {
val* self /* : ReduceAction89 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction89;
return self;
}
/* runtime class parser__ReduceAction90 */
const struct class class_parser__ReduceAction90 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction90:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction90:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction90:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction90:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction90:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction90:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction90:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction90:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction90:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction90:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction90:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction90:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction90:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction90:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction90:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction90:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction90:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction90:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction90:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction90:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction90:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction90:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction90:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction90:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction90:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction90:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction90:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction90:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction90:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction90:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction90:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction90__action, /* pointer to parser:ReduceAction90:parser#ReduceAction90#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction90:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction90:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction90 */
val* NEW_parser__ReduceAction90(const struct type* type) {
val* self /* : ReduceAction90 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction90;
return self;
}
/* runtime class parser__ReduceAction91 */
const struct class class_parser__ReduceAction91 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction91:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction91:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction91:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction91:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction91:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction91:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction91:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction91:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction91:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction91:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction91:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction91:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction91:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction91:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction91:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction91:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction91:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction91:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction91:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction91:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction91:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction91:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction91:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction91:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction91:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction91:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction91:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction91:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction91:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction91:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction91:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction91__action, /* pointer to parser:ReduceAction91:parser#ReduceAction91#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction91:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction91:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction91 */
val* NEW_parser__ReduceAction91(const struct type* type) {
val* self /* : ReduceAction91 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction91;
return self;
}
/* runtime class parser__ReduceAction92 */
const struct class class_parser__ReduceAction92 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction92:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction92:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction92:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction92:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction92:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction92:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction92:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction92:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction92:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction92:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction92:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction92:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction92:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction92:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction92:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction92:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction92:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction92:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction92:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction92:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction92:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction92:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction92:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction92:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction92:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction92:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction92:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction92:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction92:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction92:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction92:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction92__action, /* pointer to parser:ReduceAction92:parser#ReduceAction92#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction92:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction92:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction92 */
val* NEW_parser__ReduceAction92(const struct type* type) {
val* self /* : ReduceAction92 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction92;
return self;
}
/* runtime class parser__ReduceAction93 */
const struct class class_parser__ReduceAction93 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction93:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction93:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction93:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction93:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction93:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction93:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction93:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction93:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction93:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction93:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction93:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction93:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction93:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction93:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction93:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction93:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction93:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction93:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction93:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction93:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction93:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction93:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction93:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction93:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction93:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction93:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction93:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction93:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction93:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction93:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction93:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction93__action, /* pointer to parser:ReduceAction93:parser#ReduceAction93#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction93:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction93:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction93 */
val* NEW_parser__ReduceAction93(const struct type* type) {
val* self /* : ReduceAction93 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction93;
return self;
}
/* runtime class parser__ReduceAction94 */
const struct class class_parser__ReduceAction94 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction94:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction94:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction94:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction94:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction94:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction94:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction94:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction94:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction94:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction94:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction94:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction94:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction94:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction94:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction94:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction94:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction94:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction94:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction94:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction94:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction94:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction94:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction94:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction94:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction94:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction94:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction94:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction94:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction94:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction94:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction94:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction94__action, /* pointer to parser:ReduceAction94:parser#ReduceAction94#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction94:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction94:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction94 */
val* NEW_parser__ReduceAction94(const struct type* type) {
val* self /* : ReduceAction94 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction94;
return self;
}
/* runtime class parser__ReduceAction95 */
const struct class class_parser__ReduceAction95 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction95:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction95:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction95:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction95:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction95:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction95:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction95:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction95:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction95:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction95:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction95:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction95:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction95:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction95:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction95:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction95:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction95:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction95:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction95:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction95:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction95:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction95:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction95:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction95:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction95:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction95:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction95:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction95:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction95:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction95:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction95:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction95__action, /* pointer to parser:ReduceAction95:parser#ReduceAction95#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction95:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction95:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction95 */
val* NEW_parser__ReduceAction95(const struct type* type) {
val* self /* : ReduceAction95 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction95;
return self;
}
/* runtime class parser__ReduceAction96 */
const struct class class_parser__ReduceAction96 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction96:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction96:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction96:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction96:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction96:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction96:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction96:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction96:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction96:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction96:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction96:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction96:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction96:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction96:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction96:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction96:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction96:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction96:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction96:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction96:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction96:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction96:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction96:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction96:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction96:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction96:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction96:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction96:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction96:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction96:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction96:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction96__action, /* pointer to parser:ReduceAction96:parser#ReduceAction96#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction96:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction96:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction96 */
val* NEW_parser__ReduceAction96(const struct type* type) {
val* self /* : ReduceAction96 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction96;
return self;
}
/* runtime class parser__ReduceAction97 */
const struct class class_parser__ReduceAction97 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction97:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction97:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction97:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction97:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction97:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction97:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction97:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction97:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction97:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction97:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction97:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction97:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction97:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction97:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction97:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction97:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction97:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction97:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction97:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction97:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction97:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction97:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction97:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction97:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction97:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction97:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction97:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction97:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction97:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction97:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction97:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction97__action, /* pointer to parser:ReduceAction97:parser#ReduceAction97#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction97:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction97:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction97 */
val* NEW_parser__ReduceAction97(const struct type* type) {
val* self /* : ReduceAction97 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction97;
return self;
}
/* runtime class parser__ReduceAction98 */
const struct class class_parser__ReduceAction98 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction98:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction98:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction98:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction98:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction98:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction98:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction98:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction98:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction98:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction98:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction98:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction98:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction98:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction98:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction98:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction98:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction98:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction98:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction98:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction98:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction98:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction98:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction98:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction98:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction98:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction98:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction98:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction98:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction98:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction98:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction98:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction98__action, /* pointer to parser:ReduceAction98:parser#ReduceAction98#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction98:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction98:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction98 */
val* NEW_parser__ReduceAction98(const struct type* type) {
val* self /* : ReduceAction98 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction98;
return self;
}
/* runtime class parser__ReduceAction99 */
const struct class class_parser__ReduceAction99 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction99:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction99:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction99:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction99:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction99:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction99:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction99:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction99:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction99:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction99:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction99:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction99:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction99:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction99:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction99:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction99:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction99:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction99:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction99:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction99:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction99:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction99:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction99:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction99:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction99:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction99:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction99:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction99:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction99:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction99:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction99:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction99__action, /* pointer to parser:ReduceAction99:parser#ReduceAction99#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction99:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction99:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction99 */
val* NEW_parser__ReduceAction99(const struct type* type) {
val* self /* : ReduceAction99 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction99;
return self;
}
/* runtime class parser__ReduceAction100 */
const struct class class_parser__ReduceAction100 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction100:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction100:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction100:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction100:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction100:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction100:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction100:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction100:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction100:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction100:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction100:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction100:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction100:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction100:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction100:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction100:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction100:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction100:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction100:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction100:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction100:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction100:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction100:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction100:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction100:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction100:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction100:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction100:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction100:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction100:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction100:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction100__action, /* pointer to parser:ReduceAction100:parser#ReduceAction100#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction100:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction100:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction100 */
val* NEW_parser__ReduceAction100(const struct type* type) {
val* self /* : ReduceAction100 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction100;
return self;
}
/* runtime class parser__ReduceAction101 */
const struct class class_parser__ReduceAction101 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction101:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction101:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction101:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction101:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction101:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction101:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction101:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction101:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction101:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction101:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction101:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction101:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction101:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction101:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction101:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction101:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction101:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction101:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction101:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction101:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction101:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction101:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction101:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction101:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction101:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction101:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction101:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction101:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction101:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction101:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction101:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction101__action, /* pointer to parser:ReduceAction101:parser#ReduceAction101#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction101:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction101:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction101 */
val* NEW_parser__ReduceAction101(const struct type* type) {
val* self /* : ReduceAction101 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction101;
return self;
}
/* runtime class parser__ReduceAction102 */
const struct class class_parser__ReduceAction102 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction102:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction102:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction102:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction102:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction102:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction102:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction102:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction102:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction102:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction102:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction102:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction102:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction102:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction102:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction102:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction102:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction102:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction102:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction102:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction102:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction102:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction102:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction102:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction102:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction102:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction102:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction102:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction102:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction102:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction102:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction102:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction102__action, /* pointer to parser:ReduceAction102:parser#ReduceAction102#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction102:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction102:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction102 */
val* NEW_parser__ReduceAction102(const struct type* type) {
val* self /* : ReduceAction102 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction102;
return self;
}
/* runtime class parser__ReduceAction103 */
const struct class class_parser__ReduceAction103 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction103:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction103:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction103:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction103:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction103:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction103:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction103:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction103:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction103:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction103:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction103:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction103:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction103:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction103:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction103:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction103:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction103:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction103:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction103:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction103:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction103:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction103:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction103:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction103:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction103:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction103:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction103:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction103:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction103:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction103:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction103:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction103__action, /* pointer to parser:ReduceAction103:parser#ReduceAction103#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction103:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction103:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction103 */
val* NEW_parser__ReduceAction103(const struct type* type) {
val* self /* : ReduceAction103 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction103;
return self;
}
/* runtime class parser__ReduceAction104 */
const struct class class_parser__ReduceAction104 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction104:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction104:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction104:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction104:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction104:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction104:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction104:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction104:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction104:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction104:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction104:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction104:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction104:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction104:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction104:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction104:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction104:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction104:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction104:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction104:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction104:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction104:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction104:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction104:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction104:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction104:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction104:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction104:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction104:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction104:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction104:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction104__action, /* pointer to parser:ReduceAction104:parser#ReduceAction104#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction104:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction104:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction104 */
val* NEW_parser__ReduceAction104(const struct type* type) {
val* self /* : ReduceAction104 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction104;
return self;
}
/* runtime class parser__ReduceAction105 */
const struct class class_parser__ReduceAction105 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction105:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction105:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction105:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction105:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction105:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction105:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction105:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction105:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction105:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction105:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction105:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction105:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction105:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction105:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction105:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction105:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction105:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction105:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction105:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction105:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction105:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction105:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction105:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction105:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction105:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction105:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction105:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction105:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction105:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction105:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction105:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction105__action, /* pointer to parser:ReduceAction105:parser#ReduceAction105#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction105:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction105:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction105 */
val* NEW_parser__ReduceAction105(const struct type* type) {
val* self /* : ReduceAction105 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction105;
return self;
}
/* runtime class parser__ReduceAction106 */
const struct class class_parser__ReduceAction106 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction106:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction106:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction106:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction106:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction106:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction106:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction106:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction106:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction106:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction106:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction106:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction106:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction106:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction106:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction106:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction106:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction106:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction106:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction106:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction106:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction106:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction106:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction106:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction106:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction106:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction106:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction106:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction106:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction106:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction106:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction106:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction106__action, /* pointer to parser:ReduceAction106:parser#ReduceAction106#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction106:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction106:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction106 */
val* NEW_parser__ReduceAction106(const struct type* type) {
val* self /* : ReduceAction106 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction106;
return self;
}
/* runtime class parser__ReduceAction107 */
const struct class class_parser__ReduceAction107 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction107:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction107:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction107:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction107:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction107:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction107:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction107:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction107:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction107:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction107:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction107:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction107:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction107:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction107:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction107:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction107:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction107:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction107:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction107:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction107:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction107:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction107:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction107:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction107:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction107:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction107:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction107:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction107:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction107:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction107:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction107:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction107__action, /* pointer to parser:ReduceAction107:parser#ReduceAction107#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction107:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction107:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction107 */
val* NEW_parser__ReduceAction107(const struct type* type) {
val* self /* : ReduceAction107 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction107;
return self;
}
/* runtime class parser__ReduceAction108 */
const struct class class_parser__ReduceAction108 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction108:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction108:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction108:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction108:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction108:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction108:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction108:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction108:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction108:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction108:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction108:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction108:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction108:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction108:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction108:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction108:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction108:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction108:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction108:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction108:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction108:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction108:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction108:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction108:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction108:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction108:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction108:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction108:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction108:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction108:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction108:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction108__action, /* pointer to parser:ReduceAction108:parser#ReduceAction108#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction108:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction108:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction108 */
val* NEW_parser__ReduceAction108(const struct type* type) {
val* self /* : ReduceAction108 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction108;
return self;
}
/* runtime class parser__ReduceAction109 */
const struct class class_parser__ReduceAction109 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction109:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction109:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction109:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction109:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction109:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction109:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction109:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction109:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction109:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction109:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction109:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction109:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction109:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction109:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction109:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction109:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction109:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction109:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction109:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction109:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction109:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction109:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction109:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction109:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction109:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction109:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction109:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction109:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction109:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction109:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction109:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction109__action, /* pointer to parser:ReduceAction109:parser#ReduceAction109#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction109:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction109:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction109 */
val* NEW_parser__ReduceAction109(const struct type* type) {
val* self /* : ReduceAction109 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction109;
return self;
}
/* runtime class parser__ReduceAction110 */
const struct class class_parser__ReduceAction110 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction110:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction110:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction110:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction110:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction110:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction110:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction110:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction110:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction110:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction110:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction110:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction110:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction110:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction110:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction110:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction110:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction110:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction110:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction110:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction110:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction110:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction110:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction110:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction110:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction110:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction110:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction110:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction110:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction110:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction110:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction110:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction110__action, /* pointer to parser:ReduceAction110:parser#ReduceAction110#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction110:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction110:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction110 */
val* NEW_parser__ReduceAction110(const struct type* type) {
val* self /* : ReduceAction110 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction110;
return self;
}
/* runtime class parser__ReduceAction111 */
const struct class class_parser__ReduceAction111 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction111:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction111:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction111:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction111:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction111:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction111:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction111:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction111:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction111:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction111:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction111:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction111:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction111:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction111:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction111:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction111:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction111:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction111:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction111:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction111:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction111:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction111:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction111:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction111:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction111:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction111:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction111:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction111:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction111:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction111:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction111:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction111__action, /* pointer to parser:ReduceAction111:parser#ReduceAction111#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction111:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction111:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction111 */
val* NEW_parser__ReduceAction111(const struct type* type) {
val* self /* : ReduceAction111 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction111;
return self;
}
/* runtime class parser__ReduceAction112 */
const struct class class_parser__ReduceAction112 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction112:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction112:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction112:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction112:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction112:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction112:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction112:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction112:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction112:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction112:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction112:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction112:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction112:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction112:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction112:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction112:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction112:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction112:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction112:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction112:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction112:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction112:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction112:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction112:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction112:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction112:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction112:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction112:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction112:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction112:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction112:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction112__action, /* pointer to parser:ReduceAction112:parser#ReduceAction112#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction112:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction112:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction112 */
val* NEW_parser__ReduceAction112(const struct type* type) {
val* self /* : ReduceAction112 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction112;
return self;
}
/* runtime class parser__ReduceAction113 */
const struct class class_parser__ReduceAction113 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction113:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction113:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction113:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction113:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction113:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction113:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction113:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction113:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction113:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction113:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction113:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction113:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction113:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction113:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction113:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction113:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction113:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction113:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction113:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction113:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction113:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction113:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction113:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction113:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction113:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction113:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction113:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction113:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction113:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction113:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction113:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction113__action, /* pointer to parser:ReduceAction113:parser#ReduceAction113#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction113:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction113:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction113 */
val* NEW_parser__ReduceAction113(const struct type* type) {
val* self /* : ReduceAction113 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction113;
return self;
}
/* runtime class parser__ReduceAction114 */
const struct class class_parser__ReduceAction114 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction114:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction114:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction114:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction114:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction114:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction114:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction114:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction114:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction114:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction114:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction114:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction114:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction114:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction114:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction114:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction114:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction114:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction114:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction114:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction114:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction114:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction114:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction114:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction114:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction114:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction114:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction114:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction114:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction114:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction114:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction114:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction114__action, /* pointer to parser:ReduceAction114:parser#ReduceAction114#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction114:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction114:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction114 */
val* NEW_parser__ReduceAction114(const struct type* type) {
val* self /* : ReduceAction114 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction114;
return self;
}
/* runtime class parser__ReduceAction115 */
const struct class class_parser__ReduceAction115 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction115:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction115:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction115:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction115:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction115:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction115:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction115:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction115:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction115:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction115:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction115:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction115:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction115:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction115:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction115:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction115:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction115:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction115:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction115:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction115:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction115:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction115:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction115:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction115:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction115:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction115:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction115:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction115:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction115:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction115:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction115:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction115__action, /* pointer to parser:ReduceAction115:parser#ReduceAction115#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction115:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction115:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction115 */
val* NEW_parser__ReduceAction115(const struct type* type) {
val* self /* : ReduceAction115 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction115;
return self;
}
/* runtime class parser__ReduceAction116 */
const struct class class_parser__ReduceAction116 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction116:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction116:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction116:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction116:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction116:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction116:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction116:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction116:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction116:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction116:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction116:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction116:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction116:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction116:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction116:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction116:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction116:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction116:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction116:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction116:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction116:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction116:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction116:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction116:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction116:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction116:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction116:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction116:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction116:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction116:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction116:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction116__action, /* pointer to parser:ReduceAction116:parser#ReduceAction116#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction116:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction116:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction116 */
val* NEW_parser__ReduceAction116(const struct type* type) {
val* self /* : ReduceAction116 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction116;
return self;
}
/* runtime class parser__ReduceAction117 */
const struct class class_parser__ReduceAction117 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction117:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction117:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction117:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction117:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction117:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction117:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction117:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction117:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction117:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction117:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction117:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction117:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction117:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction117:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction117:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction117:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction117:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction117:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction117:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction117:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction117:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction117:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction117:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction117:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction117:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction117:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction117:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction117:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction117:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction117:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction117:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction117__action, /* pointer to parser:ReduceAction117:parser#ReduceAction117#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction117:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction117:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction117 */
val* NEW_parser__ReduceAction117(const struct type* type) {
val* self /* : ReduceAction117 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction117;
return self;
}
/* runtime class parser__ReduceAction119 */
const struct class class_parser__ReduceAction119 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction119:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction119:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction119:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction119:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction119:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction119:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction119:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction119:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction119:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction119:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction119:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction119:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction119:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction119:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction119:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction119:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction119:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction119:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction119:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction119:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction119:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction119:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction119:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction119:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction119:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction119:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction119:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction119:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction119:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction119:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction119:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction119__action, /* pointer to parser:ReduceAction119:parser#ReduceAction119#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction119:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction119:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction119 */
val* NEW_parser__ReduceAction119(const struct type* type) {
val* self /* : ReduceAction119 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction119;
return self;
}
/* runtime class parser__ReduceAction120 */
const struct class class_parser__ReduceAction120 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction120:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction120:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction120:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction120:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction120:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction120:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction120:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction120:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction120:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction120:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction120:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction120:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction120:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction120:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction120:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction120:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction120:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction120:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction120:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction120:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction120:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction120:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction120:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction120:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction120:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction120:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction120:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction120:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction120:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction120:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction120:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction120__action, /* pointer to parser:ReduceAction120:parser#ReduceAction120#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction120:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction120:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction120 */
val* NEW_parser__ReduceAction120(const struct type* type) {
val* self /* : ReduceAction120 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction120;
return self;
}
/* runtime class parser__ReduceAction121 */
const struct class class_parser__ReduceAction121 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction121:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction121:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction121:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction121:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction121:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction121:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction121:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction121:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction121:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction121:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction121:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction121:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction121:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction121:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction121:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction121:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction121:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction121:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction121:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction121:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction121:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction121:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction121:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction121:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction121:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction121:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction121:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction121:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction121:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction121:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction121:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction121__action, /* pointer to parser:ReduceAction121:parser#ReduceAction121#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction121:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction121:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction121 */
val* NEW_parser__ReduceAction121(const struct type* type) {
val* self /* : ReduceAction121 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction121;
return self;
}
/* runtime class parser__ReduceAction122 */
const struct class class_parser__ReduceAction122 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction122:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction122:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction122:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction122:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction122:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction122:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction122:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction122:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction122:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction122:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction122:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction122:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction122:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction122:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction122:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction122:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction122:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction122:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction122:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction122:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction122:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction122:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction122:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction122:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction122:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction122:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction122:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction122:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction122:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction122:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction122:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction122__action, /* pointer to parser:ReduceAction122:parser#ReduceAction122#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction122:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction122:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction122 */
val* NEW_parser__ReduceAction122(const struct type* type) {
val* self /* : ReduceAction122 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction122;
return self;
}
/* runtime class parser__ReduceAction123 */
const struct class class_parser__ReduceAction123 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction123:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction123:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction123:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction123:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction123:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction123:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction123:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction123:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction123:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction123:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction123:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction123:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction123:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction123:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction123:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction123:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction123:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction123:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction123:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction123:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction123:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction123:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction123:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction123:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction123:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction123:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction123:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction123:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction123:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction123:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction123:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction123__action, /* pointer to parser:ReduceAction123:parser#ReduceAction123#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction123:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction123:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction123 */
val* NEW_parser__ReduceAction123(const struct type* type) {
val* self /* : ReduceAction123 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction123;
return self;
}
/* runtime class parser__ReduceAction124 */
const struct class class_parser__ReduceAction124 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction124:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction124:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction124:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction124:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction124:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction124:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction124:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction124:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction124:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction124:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction124:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction124:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction124:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction124:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction124:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction124:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction124:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction124:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction124:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction124:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction124:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction124:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction124:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction124:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction124:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction124:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction124:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction124:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction124:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction124:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction124:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction124__action, /* pointer to parser:ReduceAction124:parser#ReduceAction124#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction124:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction124:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction124 */
val* NEW_parser__ReduceAction124(const struct type* type) {
val* self /* : ReduceAction124 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction124;
return self;
}
/* runtime class parser__ReduceAction125 */
const struct class class_parser__ReduceAction125 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction125:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction125:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction125:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction125:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction125:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction125:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction125:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction125:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction125:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction125:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction125:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction125:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction125:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction125:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction125:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction125:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction125:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction125:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction125:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction125:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction125:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction125:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction125:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction125:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction125:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction125:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction125:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction125:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction125:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction125:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction125:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction125__action, /* pointer to parser:ReduceAction125:parser#ReduceAction125#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction125:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction125:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction125 */
val* NEW_parser__ReduceAction125(const struct type* type) {
val* self /* : ReduceAction125 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction125;
return self;
}
/* runtime class parser__ReduceAction126 */
const struct class class_parser__ReduceAction126 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction126:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction126:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction126:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction126:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction126:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction126:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction126:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction126:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction126:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction126:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction126:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction126:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction126:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction126:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction126:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction126:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction126:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction126:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction126:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction126:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction126:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction126:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction126:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction126:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction126:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction126:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction126:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction126:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction126:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction126:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction126:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction126__action, /* pointer to parser:ReduceAction126:parser#ReduceAction126#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction126:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction126:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction126 */
val* NEW_parser__ReduceAction126(const struct type* type) {
val* self /* : ReduceAction126 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction126;
return self;
}
/* runtime class parser__ReduceAction128 */
const struct class class_parser__ReduceAction128 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction128:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction128:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction128:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction128:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction128:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction128:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction128:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction128:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction128:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction128:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction128:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction128:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction128:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction128:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction128:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction128:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction128:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction128:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction128:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction128:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction128:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction128:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction128:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction128:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction128:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction128:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction128:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction128:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction128:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction128:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction128:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction128__action, /* pointer to parser:ReduceAction128:parser#ReduceAction128#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction128:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction128:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction128 */
val* NEW_parser__ReduceAction128(const struct type* type) {
val* self /* : ReduceAction128 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction128;
return self;
}
/* runtime class parser__ReduceAction129 */
const struct class class_parser__ReduceAction129 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction129:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction129:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction129:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction129:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction129:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction129:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction129:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction129:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction129:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction129:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction129:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction129:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction129:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction129:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction129:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction129:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction129:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction129:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction129:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction129:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction129:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction129:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction129:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction129:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction129:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction129:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction129:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction129:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction129:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction129:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction129:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction129__action, /* pointer to parser:ReduceAction129:parser#ReduceAction129#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction129:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction129:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction129 */
val* NEW_parser__ReduceAction129(const struct type* type) {
val* self /* : ReduceAction129 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction129;
return self;
}
/* runtime class parser__ReduceAction131 */
const struct class class_parser__ReduceAction131 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction131:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction131:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction131:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction131:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction131:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction131:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction131:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction131:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction131:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction131:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction131:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction131:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction131:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction131:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction131:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction131:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction131:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction131:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction131:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction131:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction131:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction131:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction131:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction131:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction131:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction131:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction131:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction131:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction131:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction131:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction131:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction131__action, /* pointer to parser:ReduceAction131:parser#ReduceAction131#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction131:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction131:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction131 */
val* NEW_parser__ReduceAction131(const struct type* type) {
val* self /* : ReduceAction131 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction131;
return self;
}
/* runtime class parser__ReduceAction132 */
const struct class class_parser__ReduceAction132 = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser:ReduceAction132:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser:ReduceAction132:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser:ReduceAction132:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser:ReduceAction132:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction132:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction132:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction132:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser:ReduceAction132:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser:ReduceAction132:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser:ReduceAction132:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser:ReduceAction132:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser:ReduceAction132:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser:ReduceAction132:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser:ReduceAction132:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser:ReduceAction132:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser:ReduceAction132:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser:ReduceAction132:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser:ReduceAction132:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser:ReduceAction132:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser:ReduceAction132:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction132:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction132:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction132:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction132:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction132:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction132:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser:ReduceAction132:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser:ReduceAction132:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser:ReduceAction132:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser:ReduceAction132:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser:ReduceAction132:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser__ReduceAction132__action, /* pointer to parser:ReduceAction132:parser#ReduceAction132#action */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__concat, /* pointer to parser:ReduceAction132:parser_work#ReduceAction#concat */
(nitmethod_t)VIRTUAL_parser_work__ReduceAction__init, /* pointer to parser:ReduceAction132:parser_work#ReduceAction#init */
}
};
/* allocate ReduceAction132 */
val* NEW_parser__ReduceAction132(const struct type* type) {
val* self /* : ReduceAction132 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser__ReduceAction132;
return self;
}
