#include "nit__nith.classes.0.h"
/* runtime class nit__ToolContext */
const struct class class_nit__ToolContext = {
0, /* box_kind */
{
(nitmethod_t)nit__separate_erasure_compiler___ToolContext___standard__kernel__Object__init, /* pointer to toolcontext:ToolContext:separate_erasure_compiler#ToolContext#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to toolcontext:ToolContext:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to toolcontext:ToolContext:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to toolcontext:ToolContext:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to toolcontext:ToolContext:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to toolcontext:ToolContext:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to toolcontext:ToolContext:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to toolcontext:ToolContext:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to toolcontext:ToolContext:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to toolcontext:ToolContext:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to toolcontext:ToolContext:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to toolcontext:ToolContext:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to toolcontext:ToolContext:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to toolcontext:ToolContext:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to toolcontext:ToolContext:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to toolcontext:ToolContext:light_c#Object#from_c_call_context */
(nitmethod_t)nit__phase___ToolContext___phases, /* pointer to toolcontext:ToolContext:phase#ToolContext#phases */
(nitmethod_t)nit__scope___ToolContext___scope_phase, /* pointer to toolcontext:ToolContext:scope#ToolContext#scope_phase */
(nitmethod_t)nit__flow___ToolContext___flow_phase, /* pointer to toolcontext:ToolContext:flow#ToolContext#flow_phase */
(nitmethod_t)nit__modelize_class___ToolContext___modelize_class_phase, /* pointer to toolcontext:ToolContext:modelize_class#ToolContext#modelize_class_phase */
(nitmethod_t)nit__modelize_property___ToolContext___modelize_property_phase, /* pointer to toolcontext:ToolContext:modelize_property#ToolContext#modelize_property_phase */
(nitmethod_t)nit__local_var_init___ToolContext___local_var_init_phase, /* pointer to toolcontext:ToolContext:local_var_init#ToolContext#local_var_init_phase */
(nitmethod_t)nit__typing___ToolContext___typing_phase, /* pointer to toolcontext:ToolContext:typing#ToolContext#typing_phase */
(nitmethod_t)nit__light_ffi_base___ToolContext___ffi_language_assignation_phase, /* pointer to toolcontext:ToolContext:light_ffi_base#ToolContext#ffi_language_assignation_phase */
(nitmethod_t)nit__extern_classes___ToolContext___extern_classes_typing_phase_ast, /* pointer to toolcontext:ToolContext:extern_classes#ToolContext#extern_classes_typing_phase_ast */
(nitmethod_t)nit__auto_super_init___ToolContext___auto_super_init_phase, /* pointer to toolcontext:ToolContext:auto_super_init#ToolContext#auto_super_init_phase */
(nitmethod_t)nit___nit__ToolContext___tooldescription_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#tooldescription= */
(nitmethod_t)nit__nith___ToolContext___process_options, /* pointer to toolcontext:ToolContext:nith#ToolContext#process_options */
(nitmethod_t)nit___nit__ToolContext___option_context, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#option_context */
(nitmethod_t)nit__abstract_compiler___ToolContext___opt_output, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_output */
(nitmethod_t)nit___nit__ToolContext___info, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#info */
(nitmethod_t)nit__modelbuilder___ToolContext___run_global_phases, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#run_global_phases */
(nitmethod_t)nit__separate_erasure_compiler___ToolContext___opt_erasure, /* pointer to toolcontext:ToolContext:separate_erasure_compiler#ToolContext#opt_erasure */
(nitmethod_t)nit__separate_erasure_compiler___ToolContext___opt_no_check_erasure_cast, /* pointer to toolcontext:ToolContext:separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast */
(nitmethod_t)nit__separate_erasure_compiler___ToolContext___opt_rta, /* pointer to toolcontext:ToolContext:separate_erasure_compiler#ToolContext#opt_rta */
(nitmethod_t)nit__separate_compiler___ToolContext___opt_separate, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_separate */
(nitmethod_t)nit__loader___ToolContext___opt_path, /* pointer to toolcontext:ToolContext:loader#ToolContext#opt_path */
(nitmethod_t)nit___nit__ToolContext___nit_dir, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#nit_dir */
(nitmethod_t)nit___nit__ToolContext___check_errors, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#check_errors */
(nitmethod_t)nit__loader___ToolContext___opt_only_parse, /* pointer to toolcontext:ToolContext:loader#ToolContext#opt_only_parse */
(nitmethod_t)nit__phase___ToolContext___run_phases, /* pointer to toolcontext:ToolContext:phase#ToolContext#run_phases */
(nitmethod_t)nit__loader___ToolContext___opt_only_metamodel, /* pointer to toolcontext:ToolContext:loader#ToolContext#opt_only_metamodel */
(nitmethod_t)nit___nit__ToolContext___verbose_level, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#verbose_level */
(nitmethod_t)nit___nit__ToolContext___log_info, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#log_info */
(nitmethod_t)nit__mixin___ToolContext___make_main_module, /* pointer to toolcontext:ToolContext:mixin#ToolContext#make_main_module */
(nitmethod_t)nit__phase___ToolContext___phases_list, /* pointer to toolcontext:ToolContext:phase#ToolContext#phases_list */
(nitmethod_t)nit___nit__ToolContext___errors_info, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#errors_info */
(nitmethod_t)nit__separate_compiler___ToolContext___opt_no_inline_intern, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_no_inline_intern */
(nitmethod_t)nit__separate_compiler___ToolContext___opt_no_union_attribute, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_no_union_attribute */
(nitmethod_t)nit__separate_compiler___ToolContext___opt_no_shortcut_equate, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_no_shortcut_equate */
(nitmethod_t)nit__separate_compiler___ToolContext___opt_no_tag_primitives, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_no_tag_primitives */
(nitmethod_t)nit__separate_compiler___ToolContext___opt_colors_are_symbols, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_colors_are_symbols */
(nitmethod_t)nit__separate_compiler___ToolContext___opt_trampoline_call, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_trampoline_call */
(nitmethod_t)nit__separate_compiler___ToolContext___opt_guard_call, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_guard_call */
(nitmethod_t)nit__separate_compiler___ToolContext___opt_direct_call_monomorph0, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_direct_call_monomorph0 */
(nitmethod_t)nit__separate_compiler___ToolContext___opt_substitute_monomorph, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_substitute_monomorph */
(nitmethod_t)nit__separate_compiler___ToolContext___opt_link_boost, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_link_boost */
(nitmethod_t)nit__separate_compiler___ToolContext___opt_inline_coloring_numbers, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_inline_coloring_numbers */
(nitmethod_t)nit__separate_compiler___ToolContext___opt_inline_some_methods, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_inline_some_methods */
(nitmethod_t)nit__separate_compiler___ToolContext___opt_direct_call_monomorph, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_direct_call_monomorph */
(nitmethod_t)nit__separate_compiler___ToolContext___opt_skip_dead_methods, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_skip_dead_methods */
(nitmethod_t)nit__separate_compiler___ToolContext___opt_semi_global, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_semi_global */
(nitmethod_t)nit__separate_compiler___ToolContext___opt_colo_dead_methods, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_colo_dead_methods */
(nitmethod_t)nit__separate_compiler___ToolContext___opt_tables_metrics, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_tables_metrics */
(nitmethod_t)nit__separate_compiler___ToolContext___opt_type_poset, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_type_poset */
(nitmethod_t)nit__abstract_compiler___ToolContext___opt_no_check_all, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_all */
(nitmethod_t)nit__modelbuilder_base___ToolContext___modelbuilder_real, /* pointer to toolcontext:ToolContext:modelbuilder_base#ToolContext#modelbuilder_real */
(nitmethod_t)nit__modelbuilder_base___ToolContext___modelbuilder_real_61d, /* pointer to toolcontext:ToolContext:modelbuilder_base#ToolContext#modelbuilder_real= */
(nitmethod_t)nit___nit__ToolContext___error, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#error */
(nitmethod_t)nit___nit__ToolContext___messages, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#messages */
(nitmethod_t)nit___nit__ToolContext___message_sorter, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#message_sorter */
(nitmethod_t)nit___nit__ToolContext___opt_no_color, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_no_color */
(nitmethod_t)nit___nit__ToolContext___error_count, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#error_count */
(nitmethod_t)nit___nit__ToolContext___keep_going, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#keep_going */
(nitmethod_t)nit__phase___ToolContext___phased_modules, /* pointer to toolcontext:ToolContext:phase#ToolContext#phased_modules */
(nitmethod_t)nit__phase___ToolContext___semantize_is_lazy, /* pointer to toolcontext:ToolContext:phase#ToolContext#semantize_is_lazy */
(nitmethod_t)nit__phase___ToolContext___phase_process_npropdef, /* pointer to toolcontext:ToolContext:phase#ToolContext#phase_process_npropdef */
(nitmethod_t)nit__mixin___ToolContext___opt_mixins, /* pointer to toolcontext:ToolContext:mixin#ToolContext#opt_mixins */
(nitmethod_t)nit__modelbuilder_base___ToolContext___modelbuilder, /* pointer to toolcontext:ToolContext:modelbuilder_base#ToolContext#modelbuilder */
(nitmethod_t)nit__mixin___ToolContext___opt_defines, /* pointer to toolcontext:ToolContext:mixin#ToolContext#opt_defines */
(nitmethod_t)nit___nit__ToolContext___warning_count, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#warning_count */
(nitmethod_t)nit__abstract_compiler___ToolContext___opt_dir, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_dir */
(nitmethod_t)nit__abstract_compiler___ToolContext___opt_no_cc, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_cc */
(nitmethod_t)nit__abstract_compiler___ToolContext___opt_no_main, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_main */
(nitmethod_t)nit__abstract_compiler___ToolContext___opt_make_flags, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_make_flags */
(nitmethod_t)nit__abstract_compiler___ToolContext___opt_compile_dir, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_compile_dir */
(nitmethod_t)nit__abstract_compiler___ToolContext___opt_hardening, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_hardening */
(nitmethod_t)nit__abstract_compiler___ToolContext___opt_no_check_covariance, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_covariance */
(nitmethod_t)nit__abstract_compiler___ToolContext___opt_no_check_attr_isset, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_attr_isset */
(nitmethod_t)nit__abstract_compiler___ToolContext___opt_no_check_assert, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_assert */
(nitmethod_t)nit__abstract_compiler___ToolContext___opt_no_check_autocast, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_autocast */
(nitmethod_t)nit__abstract_compiler___ToolContext___opt_no_check_null, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_null */
(nitmethod_t)nit__abstract_compiler___ToolContext___opt_typing_test_metrics, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_typing_test_metrics */
(nitmethod_t)nit__abstract_compiler___ToolContext___opt_invocation_metrics, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_invocation_metrics */
(nitmethod_t)nit__abstract_compiler___ToolContext___opt_isset_checks_metrics, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_isset_checks_metrics */
(nitmethod_t)nit__abstract_compiler___ToolContext___opt_no_stacktrace, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_stacktrace */
(nitmethod_t)nit__abstract_compiler___ToolContext___opt_no_gcc_directive, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_gcc_directive */
(nitmethod_t)nit__abstract_compiler___ToolContext___opt_release, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_release */
(nitmethod_t)nit__abstract_compiler___ToolContext___opt_max_c_lines, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_max_c_lines */
(nitmethod_t)nit__abstract_compiler___ToolContext___opt_group_c_files, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_group_c_files */
(nitmethod_t)nit___nit__ToolContext___error_count_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#error_count= */
(nitmethod_t)nit___nit__ToolContext___opt_stop_on_first_error, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_stop_on_first_error */
(nitmethod_t)nit__platform___ToolContext___platform_from_name, /* pointer to toolcontext:ToolContext:platform#ToolContext#platform_from_name */
(nitmethod_t)nit___nit__ToolContext___opt_log, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_log */
(nitmethod_t)nit___nit__ToolContext___log_directory, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#log_directory */
(nitmethod_t)nit__transform___ToolContext___opt_no_shortcut_range, /* pointer to toolcontext:ToolContext:transform#ToolContext#opt_no_shortcut_range */
(nitmethod_t)nit___nit__ToolContext___advice, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#advice */
(nitmethod_t)nit__phase___ToolContext___opt_disable_phase, /* pointer to toolcontext:ToolContext:phase#ToolContext#opt_disable_phase */
(nitmethod_t)nit___nit__ToolContext___fatal_error, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#fatal_error */
(nitmethod_t)nit__phase___ToolContext___opt_sloppy, /* pointer to toolcontext:ToolContext:phase#ToolContext#opt_sloppy */
(nitmethod_t)nit__phase___ToolContext___semantize_is_lazy_61d, /* pointer to toolcontext:ToolContext:phase#ToolContext#semantize_is_lazy= */
(nitmethod_t)nit___nit__ToolContext___opt_warning, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_warning */
(nitmethod_t)nit___nit__ToolContext___opt_warn, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_warn */
(nitmethod_t)nit___nit__ToolContext___is_warning_blacklisted, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#is_warning_blacklisted */
(nitmethod_t)nit___nit__ToolContext___warning_count_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#warning_count= */
(nitmethod_t)nit___nit__ToolContext___warning, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#warning */
(nitmethod_t)nit__phase___ToolContext___run_phases_on_npropdef, /* pointer to toolcontext:ToolContext:phase#ToolContext#run_phases_on_npropdef */
(nitmethod_t)nit__modelbuilder___ToolContext___opt_ignore_visibility, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#opt_ignore_visibility */
(nitmethod_t)nit___nit__ToolContext___opt_help, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_help */
(nitmethod_t)nit___nit__ToolContext___usage, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#usage */
(nitmethod_t)nit___nit__ToolContext___opt_version, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_version */
(nitmethod_t)nit___nit__ToolContext___version, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#version */
(nitmethod_t)nit___nit__ToolContext___opt_bash_completion, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_bash_completion */
(nitmethod_t)nit___nit__ToolContext___opt_stub_man, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_stub_man */
(nitmethod_t)nit___nit__ToolContext___toolname, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#toolname */
(nitmethod_t)nit___nit__ToolContext___tooldescription, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#tooldescription */
(nitmethod_t)nit___nit__ToolContext___nit_dir_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#nit_dir= */
(nitmethod_t)nit___nit__ToolContext___compute_nit_dir, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#compute_nit_dir */
(nitmethod_t)nit___nit__ToolContext___accept_no_arguments, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#accept_no_arguments */
(nitmethod_t)nit___nit__ToolContext___verbose_level_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#verbose_level= */
(nitmethod_t)nit___nit__ToolContext___opt_verbose, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_verbose */
(nitmethod_t)nit___nit__ToolContext___opt_keep_going, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_keep_going */
(nitmethod_t)nit___nit__ToolContext___keep_going_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#keep_going= */
(nitmethod_t)nit___nit__ToolContext___opt_quiet, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_quiet */
(nitmethod_t)nit___nit__ToolContext___opt_log_dir, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_log_dir */
(nitmethod_t)nit___nit__ToolContext___log_directory_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#log_directory= */
(nitmethod_t)nit___nit__ToolContext___log_info_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#log_info= */
(nitmethod_t)nit___nit__ToolContext___warning_blacklist, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#warning_blacklist */
(nitmethod_t)nit___nit__ToolContext___opt_set_dummy_tool, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_set_dummy_tool */
(nitmethod_t)nit___nit__ToolContext___opt_nit_dir, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_nit_dir */
(nitmethod_t)nit___nit__ToolContext___check_nit_dir, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#check_nit_dir */
(nitmethod_t)nit__separate_compiler___ToolContext___standard__kernel__Object__init, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#init */
(nitmethod_t)nit__separate_erasure_compiler___ToolContext___process_options, /* pointer to toolcontext:ToolContext:separate_erasure_compiler#ToolContext#process_options */
(nitmethod_t)nit__abstract_compiler___ToolContext___standard__kernel__Object__init, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#init */
(nitmethod_t)nit__separate_compiler___ToolContext___process_options, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#process_options */
(nitmethod_t)nit__modelbuilder___ToolContext___make_main_module, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#make_main_module */
(nitmethod_t)nit__transform___ToolContext___standard__kernel__Object__init, /* pointer to toolcontext:ToolContext:transform#ToolContext#init */
(nitmethod_t)nit__abstract_compiler___ToolContext___process_options, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#process_options */
(nitmethod_t)nit__mixin___ToolContext___standard__kernel__Object__init, /* pointer to toolcontext:ToolContext:mixin#ToolContext#init */
(nitmethod_t)nit__phase___ToolContext___process_options, /* pointer to toolcontext:ToolContext:phase#ToolContext#process_options */
(nitmethod_t)nit__modelbuilder___ToolContext___standard__kernel__Object__init, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#init */
(nitmethod_t)nit___nit__ToolContext___process_options, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#process_options */
(nitmethod_t)nit__loader___ToolContext___standard__kernel__Object__init, /* pointer to toolcontext:ToolContext:loader#ToolContext#init */
(nitmethod_t)nit__phase___ToolContext___standard__kernel__Object__init, /* pointer to toolcontext:ToolContext:phase#ToolContext#init */
(nitmethod_t)nit___nit__ToolContext___standard__kernel__Object__init, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#init */
}
};
/* allocate ToolContext */
val* NEW_nit__ToolContext(const struct type* type) {
val* self /* : ToolContext */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
val* var3 /* : Array[Message] */;
val* var4 /* : Sys */;
val* var5 /* : DefaultComparator */;
val* var6 /* : MultiHashMap[SourceFile, String] */;
val* var7 /* : OptionContext */;
val* var8 /* : OptionCount */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : Array[String] */;
val* var22 /* : NativeArray[String] */;
val* var23 /* : OptionArray */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
val* var36 /* : Array[String] */;
val* var37 /* : NativeArray[String] */;
val* var38 /* : OptionBool */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
val* var51 /* : Array[String] */;
val* var52 /* : NativeArray[String] */;
val* var53 /* : OptionBool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : FlatString */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
val* var62 /* : Array[String] */;
val* var63 /* : NativeArray[String] */;
val* var64 /* : OptionString */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : FlatString */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
val* var72 /* : FlatString */;
val* var73 /* : Array[String] */;
val* var74 /* : NativeArray[String] */;
val* var75 /* : OptionString */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : FlatString */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : FlatString */;
val* var84 /* : Array[String] */;
val* var85 /* : NativeArray[String] */;
val* var86 /* : OptionBool */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
val* var90 /* : FlatString */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : FlatString */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
val* var98 /* : FlatString */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
val* var102 /* : FlatString */;
val* var103 /* : Array[String] */;
val* var104 /* : NativeArray[String] */;
val* var105 /* : OptionBool */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
val* var109 /* : FlatString */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
val* var113 /* : FlatString */;
val* var114 /* : Array[String] */;
val* var115 /* : NativeArray[String] */;
val* var116 /* : OptionBool */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
val* var120 /* : FlatString */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
val* var124 /* : FlatString */;
val* var125 /* : Array[String] */;
val* var126 /* : NativeArray[String] */;
val* var127 /* : OptionCount */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
val* var131 /* : FlatString */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
val* var135 /* : FlatString */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
val* var139 /* : FlatString */;
val* var140 /* : Array[String] */;
val* var141 /* : NativeArray[String] */;
val* var142 /* : OptionBool */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
val* var146 /* : FlatString */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
val* var150 /* : FlatString */;
val* var151 /* : Array[String] */;
val* var152 /* : NativeArray[String] */;
val* var153 /* : OptionBool */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
val* var157 /* : FlatString */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
val* var161 /* : FlatString */;
val* var162 /* : Array[String] */;
val* var163 /* : NativeArray[String] */;
val* var164 /* : OptionBool */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
val* var168 /* : FlatString */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
val* var172 /* : FlatString */;
val* var173 /* : Array[String] */;
val* var174 /* : NativeArray[String] */;
val* var175 /* : OptionBool */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
val* var179 /* : FlatString */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
val* var183 /* : FlatString */;
val* var184 /* : Array[String] */;
val* var185 /* : NativeArray[String] */;
val* var186 /* : OptionBool */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
val* var190 /* : FlatString */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
val* var194 /* : FlatString */;
val* var195 /* : Array[String] */;
val* var196 /* : NativeArray[String] */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : NativeString */;
val* var200 /* : FlatString */;
val* var201 /* : POSet[Phase] */;
val* var203 /* : OptionArray */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : NativeString */;
val* var207 /* : FlatString */;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : NativeString */;
val* var211 /* : FlatString */;
val* var212 /* : Array[String] */;
val* var213 /* : NativeArray[String] */;
val* var214 /* : OptionBool */;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : NativeString */;
val* var218 /* : FlatString */;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : NativeString */;
val* var222 /* : FlatString */;
val* var223 /* : Array[String] */;
val* var224 /* : NativeArray[String] */;
val* var225 /* : HashSet[AModule] */;
val* var226 /* : LiteralPhase */;
val* var227 /* : ScopePhase */;
val* var228 /* : OptionArray */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
val* var232 /* : FlatString */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : NativeString */;
val* var236 /* : FlatString */;
static val* varonce237;
val* var238 /* : String */;
char* var239 /* : NativeString */;
val* var240 /* : FlatString */;
val* var241 /* : Array[String] */;
val* var242 /* : NativeArray[String] */;
val* var243 /* : OptionBool */;
static val* varonce244;
val* var245 /* : String */;
char* var246 /* : NativeString */;
val* var247 /* : FlatString */;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : NativeString */;
val* var251 /* : FlatString */;
val* var252 /* : Array[String] */;
val* var253 /* : NativeArray[String] */;
val* var254 /* : OptionBool */;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : NativeString */;
val* var258 /* : FlatString */;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : NativeString */;
val* var262 /* : FlatString */;
val* var263 /* : Array[String] */;
val* var264 /* : NativeArray[String] */;
val* var265 /* : FlowPhase */;
val* var266 /* : Array[Phase] */;
val* var_ /* var : Array[Phase] */;
val* var267 /* : Phase */;
val* var269 /* : Phase */;
val* var270 /* : LocalVarInitPhase */;
val* var271 /* : Array[Phase] */;
val* var_272 /* var : Array[Phase] */;
val* var273 /* : Phase */;
val* var275 /* : Phase */;
val* var276 /* : OptionBool */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : NativeString */;
val* var280 /* : FlatString */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
val* var284 /* : FlatString */;
val* var285 /* : Array[String] */;
val* var286 /* : NativeArray[String] */;
val* var287 /* : ModelizeClassPhase */;
val* var288 /* : OptionArray */;
static val* varonce289;
val* var290 /* : String */;
char* var291 /* : NativeString */;
val* var292 /* : FlatString */;
static val* varonce293;
val* var294 /* : String */;
char* var295 /* : NativeString */;
val* var296 /* : FlatString */;
static val* varonce297;
val* var298 /* : String */;
char* var299 /* : NativeString */;
val* var300 /* : FlatString */;
val* var301 /* : Array[String] */;
val* var302 /* : NativeArray[String] */;
val* var303 /* : OptionArray */;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : NativeString */;
val* var307 /* : FlatString */;
static val* varonce308;
val* var309 /* : String */;
char* var310 /* : NativeString */;
val* var311 /* : FlatString */;
static val* varonce312;
val* var313 /* : String */;
char* var314 /* : NativeString */;
val* var315 /* : FlatString */;
val* var316 /* : Array[String] */;
val* var317 /* : NativeArray[String] */;
val* var318 /* : FFILanguageAssignationPhase */;
val* var319 /* : ModelizePropertyPhase */;
val* var320 /* : Array[Phase] */;
val* var_321 /* var : Array[Phase] */;
val* var322 /* : Phase */;
val* var324 /* : Phase */;
val* var325 /* : PlatformPhase */;
val* var326 /* : Array[Phase] */;
val* var_327 /* var : Array[Phase] */;
val* var328 /* : Phase */;
val* var330 /* : Phase */;
val* var331 /* : ExternClassesTypingPhaseAst */;
val* var332 /* : Array[Phase] */;
val* var_333 /* var : Array[Phase] */;
val* var334 /* : Phase */;
val* var336 /* : Phase */;
val* var337 /* : Phase */;
val* var339 /* : Phase */;
val* var340 /* : ExternClassesTypingPhaseModel */;
val* var341 /* : Array[Phase] */;
val* var_342 /* var : Array[Phase] */;
val* var343 /* : Phase */;
val* var345 /* : Phase */;
val* var346 /* : Phase */;
val* var348 /* : Phase */;
val* var349 /* : Phase */;
val* var351 /* : Phase */;
val* var352 /* : TypingPhase */;
val* var353 /* : Array[Phase] */;
val* var_354 /* var : Array[Phase] */;
val* var355 /* : Phase */;
val* var357 /* : Phase */;
val* var358 /* : Phase */;
val* var360 /* : Phase */;
val* var361 /* : Phase */;
val* var363 /* : Phase */;
val* var364 /* : AutoSuperInitPhase */;
val* var365 /* : Array[Phase] */;
val* var_366 /* var : Array[Phase] */;
val* var367 /* : Phase */;
val* var369 /* : Phase */;
val* var370 /* : TransformPhase */;
val* var371 /* : Array[Phase] */;
val* var_372 /* var : Array[Phase] */;
val* var373 /* : Phase */;
val* var375 /* : Phase */;
val* var376 /* : Phase */;
val* var378 /* : Phase */;
val* var379 /* : OptionBool */;
static val* varonce380;
val* var381 /* : String */;
char* var382 /* : NativeString */;
val* var383 /* : FlatString */;
static val* varonce384;
val* var385 /* : String */;
char* var386 /* : NativeString */;
val* var387 /* : FlatString */;
val* var388 /* : Array[String] */;
val* var389 /* : NativeArray[String] */;
val* var390 /* : OptionString */;
static val* varonce391;
val* var392 /* : String */;
char* var393 /* : NativeString */;
val* var394 /* : FlatString */;
static val* varonce395;
val* var396 /* : String */;
char* var397 /* : NativeString */;
val* var398 /* : FlatString */;
static val* varonce399;
val* var400 /* : String */;
char* var401 /* : NativeString */;
val* var402 /* : FlatString */;
val* var403 /* : Array[String] */;
val* var404 /* : NativeArray[String] */;
val* var405 /* : OptionString */;
static val* varonce406;
val* var407 /* : String */;
char* var408 /* : NativeString */;
val* var409 /* : FlatString */;
static val* varonce410;
val* var411 /* : String */;
char* var412 /* : NativeString */;
val* var413 /* : FlatString */;
val* var414 /* : Array[String] */;
val* var415 /* : NativeArray[String] */;
val* var416 /* : OptionBool */;
static val* varonce417;
val* var418 /* : String */;
char* var419 /* : NativeString */;
val* var420 /* : FlatString */;
static val* varonce421;
val* var422 /* : String */;
char* var423 /* : NativeString */;
val* var424 /* : FlatString */;
val* var425 /* : Array[String] */;
val* var426 /* : NativeArray[String] */;
val* var427 /* : OptionBool */;
static val* varonce428;
val* var429 /* : String */;
char* var430 /* : NativeString */;
val* var431 /* : FlatString */;
static val* varonce432;
val* var433 /* : String */;
char* var434 /* : NativeString */;
val* var435 /* : FlatString */;
val* var436 /* : Array[String] */;
val* var437 /* : NativeArray[String] */;
val* var438 /* : OptionString */;
static val* varonce439;
val* var440 /* : String */;
char* var441 /* : NativeString */;
val* var442 /* : FlatString */;
static val* varonce443;
val* var444 /* : String */;
char* var445 /* : NativeString */;
val* var446 /* : FlatString */;
val* var447 /* : Array[String] */;
val* var448 /* : NativeArray[String] */;
val* var449 /* : OptionInt */;
static val* varonce450;
val* var451 /* : String */;
char* var452 /* : NativeString */;
val* var453 /* : FlatString */;
static val* varonce454;
val* var455 /* : String */;
char* var456 /* : NativeString */;
val* var457 /* : FlatString */;
val* var458 /* : Array[String] */;
val* var459 /* : NativeArray[String] */;
val* var460 /* : OptionBool */;
static val* varonce461;
val* var462 /* : String */;
char* var463 /* : NativeString */;
val* var464 /* : FlatString */;
static val* varonce465;
val* var466 /* : String */;
char* var467 /* : NativeString */;
val* var468 /* : FlatString */;
val* var469 /* : Array[String] */;
val* var470 /* : NativeArray[String] */;
val* var471 /* : OptionString */;
static val* varonce472;
val* var473 /* : String */;
char* var474 /* : NativeString */;
val* var475 /* : FlatString */;
static val* varonce476;
val* var477 /* : String */;
char* var478 /* : NativeString */;
val* var479 /* : FlatString */;
val* var480 /* : Array[String] */;
val* var481 /* : NativeArray[String] */;
val* var482 /* : OptionBool */;
static val* varonce483;
val* var484 /* : String */;
char* var485 /* : NativeString */;
val* var486 /* : FlatString */;
static val* varonce487;
val* var488 /* : String */;
char* var489 /* : NativeString */;
val* var490 /* : FlatString */;
val* var491 /* : Array[String] */;
val* var492 /* : NativeArray[String] */;
val* var493 /* : OptionBool */;
static val* varonce494;
val* var495 /* : String */;
char* var496 /* : NativeString */;
val* var497 /* : FlatString */;
static val* varonce498;
val* var499 /* : String */;
char* var500 /* : NativeString */;
val* var501 /* : FlatString */;
val* var502 /* : Array[String] */;
val* var503 /* : NativeArray[String] */;
val* var504 /* : OptionBool */;
static val* varonce505;
val* var506 /* : String */;
char* var507 /* : NativeString */;
val* var508 /* : FlatString */;
static val* varonce509;
val* var510 /* : String */;
char* var511 /* : NativeString */;
val* var512 /* : FlatString */;
val* var513 /* : Array[String] */;
val* var514 /* : NativeArray[String] */;
val* var515 /* : OptionBool */;
static val* varonce516;
val* var517 /* : String */;
char* var518 /* : NativeString */;
val* var519 /* : FlatString */;
static val* varonce520;
val* var521 /* : String */;
char* var522 /* : NativeString */;
val* var523 /* : FlatString */;
val* var524 /* : Array[String] */;
val* var525 /* : NativeArray[String] */;
val* var526 /* : OptionBool */;
static val* varonce527;
val* var528 /* : String */;
char* var529 /* : NativeString */;
val* var530 /* : FlatString */;
static val* varonce531;
val* var532 /* : String */;
char* var533 /* : NativeString */;
val* var534 /* : FlatString */;
val* var535 /* : Array[String] */;
val* var536 /* : NativeArray[String] */;
val* var537 /* : OptionBool */;
static val* varonce538;
val* var539 /* : String */;
char* var540 /* : NativeString */;
val* var541 /* : FlatString */;
static val* varonce542;
val* var543 /* : String */;
char* var544 /* : NativeString */;
val* var545 /* : FlatString */;
val* var546 /* : Array[String] */;
val* var547 /* : NativeArray[String] */;
val* var548 /* : OptionBool */;
static val* varonce549;
val* var550 /* : String */;
char* var551 /* : NativeString */;
val* var552 /* : FlatString */;
static val* varonce553;
val* var554 /* : String */;
char* var555 /* : NativeString */;
val* var556 /* : FlatString */;
val* var557 /* : Array[String] */;
val* var558 /* : NativeArray[String] */;
val* var559 /* : OptionBool */;
static val* varonce560;
val* var561 /* : String */;
char* var562 /* : NativeString */;
val* var563 /* : FlatString */;
static val* varonce564;
val* var565 /* : String */;
char* var566 /* : NativeString */;
val* var567 /* : FlatString */;
val* var568 /* : Array[String] */;
val* var569 /* : NativeArray[String] */;
val* var570 /* : OptionBool */;
static val* varonce571;
val* var572 /* : String */;
char* var573 /* : NativeString */;
val* var574 /* : FlatString */;
static val* varonce575;
val* var576 /* : String */;
char* var577 /* : NativeString */;
val* var578 /* : FlatString */;
val* var579 /* : Array[String] */;
val* var580 /* : NativeArray[String] */;
val* var581 /* : OptionBool */;
static val* varonce582;
val* var583 /* : String */;
char* var584 /* : NativeString */;
val* var585 /* : FlatString */;
static val* varonce586;
val* var587 /* : String */;
char* var588 /* : NativeString */;
val* var589 /* : FlatString */;
val* var590 /* : Array[String] */;
val* var591 /* : NativeArray[String] */;
val* var592 /* : OptionBool */;
static val* varonce593;
val* var594 /* : String */;
char* var595 /* : NativeString */;
val* var596 /* : FlatString */;
static val* varonce597;
val* var598 /* : String */;
char* var599 /* : NativeString */;
val* var600 /* : FlatString */;
val* var601 /* : Array[String] */;
val* var602 /* : NativeArray[String] */;
val* var603 /* : OptionArray */;
static val* varonce604;
val* var605 /* : String */;
char* var606 /* : NativeString */;
val* var607 /* : FlatString */;
static val* varonce608;
val* var609 /* : String */;
char* var610 /* : NativeString */;
val* var611 /* : FlatString */;
val* var612 /* : Array[String] */;
val* var613 /* : NativeArray[String] */;
val* var614 /* : OptionBool */;
static val* varonce615;
val* var616 /* : String */;
char* var617 /* : NativeString */;
val* var618 /* : FlatString */;
static val* varonce619;
val* var620 /* : String */;
char* var621 /* : NativeString */;
val* var622 /* : FlatString */;
val* var623 /* : Array[String] */;
val* var624 /* : NativeArray[String] */;
val* var625 /* : OptionBool */;
static val* varonce626;
val* var627 /* : String */;
char* var628 /* : NativeString */;
val* var629 /* : FlatString */;
static val* varonce630;
val* var631 /* : String */;
char* var632 /* : NativeString */;
val* var633 /* : FlatString */;
val* var634 /* : Array[String] */;
val* var635 /* : NativeArray[String] */;
val* var636 /* : OptionBool */;
static val* varonce637;
val* var638 /* : String */;
char* var639 /* : NativeString */;
val* var640 /* : FlatString */;
static val* varonce641;
val* var642 /* : String */;
char* var643 /* : NativeString */;
val* var644 /* : FlatString */;
val* var645 /* : Array[String] */;
val* var646 /* : NativeArray[String] */;
val* var647 /* : OptionBool */;
static val* varonce648;
val* var649 /* : String */;
char* var650 /* : NativeString */;
val* var651 /* : FlatString */;
static val* varonce652;
val* var653 /* : String */;
char* var654 /* : NativeString */;
val* var655 /* : FlatString */;
val* var656 /* : Array[String] */;
val* var657 /* : NativeArray[String] */;
val* var658 /* : OptionBool */;
static val* varonce659;
val* var660 /* : String */;
char* var661 /* : NativeString */;
val* var662 /* : FlatString */;
static val* varonce663;
val* var664 /* : String */;
char* var665 /* : NativeString */;
val* var666 /* : FlatString */;
val* var667 /* : Array[String] */;
val* var668 /* : NativeArray[String] */;
val* var669 /* : OptionBool */;
static val* varonce670;
val* var671 /* : String */;
char* var672 /* : NativeString */;
val* var673 /* : FlatString */;
static val* varonce674;
val* var675 /* : String */;
char* var676 /* : NativeString */;
val* var677 /* : FlatString */;
val* var678 /* : Array[String] */;
val* var679 /* : NativeArray[String] */;
val* var680 /* : OptionBool */;
static val* varonce681;
val* var682 /* : String */;
char* var683 /* : NativeString */;
val* var684 /* : FlatString */;
static val* varonce685;
val* var686 /* : String */;
char* var687 /* : NativeString */;
val* var688 /* : FlatString */;
val* var689 /* : Array[String] */;
val* var690 /* : NativeArray[String] */;
val* var691 /* : OptionBool */;
static val* varonce692;
val* var693 /* : String */;
char* var694 /* : NativeString */;
val* var695 /* : FlatString */;
static val* varonce696;
val* var697 /* : String */;
char* var698 /* : NativeString */;
val* var699 /* : FlatString */;
val* var700 /* : Array[String] */;
val* var701 /* : NativeArray[String] */;
val* var702 /* : OptionBool */;
static val* varonce703;
val* var704 /* : String */;
char* var705 /* : NativeString */;
val* var706 /* : FlatString */;
static val* varonce707;
val* var708 /* : String */;
char* var709 /* : NativeString */;
val* var710 /* : FlatString */;
val* var711 /* : Array[String] */;
val* var712 /* : NativeArray[String] */;
val* var713 /* : OptionBool */;
static val* varonce714;
val* var715 /* : String */;
char* var716 /* : NativeString */;
val* var717 /* : FlatString */;
static val* varonce718;
val* var719 /* : String */;
char* var720 /* : NativeString */;
val* var721 /* : FlatString */;
val* var722 /* : Array[String] */;
val* var723 /* : NativeArray[String] */;
val* var724 /* : OptionBool */;
static val* varonce725;
val* var726 /* : String */;
char* var727 /* : NativeString */;
val* var728 /* : FlatString */;
static val* varonce729;
val* var730 /* : String */;
char* var731 /* : NativeString */;
val* var732 /* : FlatString */;
val* var733 /* : Array[String] */;
val* var734 /* : NativeArray[String] */;
val* var735 /* : OptionBool */;
static val* varonce736;
val* var737 /* : String */;
char* var738 /* : NativeString */;
val* var739 /* : FlatString */;
static val* varonce740;
val* var741 /* : String */;
char* var742 /* : NativeString */;
val* var743 /* : FlatString */;
val* var744 /* : Array[String] */;
val* var745 /* : NativeArray[String] */;
val* var746 /* : OptionBool */;
static val* varonce747;
val* var748 /* : String */;
char* var749 /* : NativeString */;
val* var750 /* : FlatString */;
static val* varonce751;
val* var752 /* : String */;
char* var753 /* : NativeString */;
val* var754 /* : FlatString */;
val* var755 /* : Array[String] */;
val* var756 /* : NativeArray[String] */;
val* var757 /* : OptionBool */;
static val* varonce758;
val* var759 /* : String */;
char* var760 /* : NativeString */;
val* var761 /* : FlatString */;
static val* varonce762;
val* var763 /* : String */;
char* var764 /* : NativeString */;
val* var765 /* : FlatString */;
val* var766 /* : Array[String] */;
val* var767 /* : NativeArray[String] */;
val* var768 /* : OptionBool */;
static val* varonce769;
val* var770 /* : String */;
char* var771 /* : NativeString */;
val* var772 /* : FlatString */;
static val* varonce773;
val* var774 /* : String */;
char* var775 /* : NativeString */;
val* var776 /* : FlatString */;
val* var777 /* : Array[String] */;
val* var778 /* : NativeArray[String] */;
val* var779 /* : OptionBool */;
static val* varonce780;
val* var781 /* : String */;
char* var782 /* : NativeString */;
val* var783 /* : FlatString */;
static val* varonce784;
val* var785 /* : String */;
char* var786 /* : NativeString */;
val* var787 /* : FlatString */;
val* var788 /* : Array[String] */;
val* var789 /* : NativeArray[String] */;
val* var790 /* : OptionBool */;
static val* varonce791;
val* var792 /* : String */;
char* var793 /* : NativeString */;
val* var794 /* : FlatString */;
static val* varonce795;
val* var796 /* : String */;
char* var797 /* : NativeString */;
val* var798 /* : FlatString */;
val* var799 /* : Array[String] */;
val* var800 /* : NativeArray[String] */;
val* var801 /* : OptionBool */;
static val* varonce802;
val* var803 /* : String */;
char* var804 /* : NativeString */;
val* var805 /* : FlatString */;
static val* varonce806;
val* var807 /* : String */;
char* var808 /* : NativeString */;
val* var809 /* : FlatString */;
val* var810 /* : Array[String] */;
val* var811 /* : NativeArray[String] */;
val* var812 /* : OptionBool */;
static val* varonce813;
val* var814 /* : String */;
char* var815 /* : NativeString */;
val* var816 /* : FlatString */;
static val* varonce817;
val* var818 /* : String */;
char* var819 /* : NativeString */;
val* var820 /* : FlatString */;
val* var821 /* : Array[String] */;
val* var822 /* : NativeArray[String] */;
val* var823 /* : OptionBool */;
static val* varonce824;
val* var825 /* : String */;
char* var826 /* : NativeString */;
val* var827 /* : FlatString */;
static val* varonce828;
val* var829 /* : String */;
char* var830 /* : NativeString */;
val* var831 /* : FlatString */;
val* var832 /* : Array[String] */;
val* var833 /* : NativeArray[String] */;
val* var834 /* : SeparateCompilerPhase */;
val* var835 /* : OptionBool */;
static val* varonce836;
val* var837 /* : String */;
char* var838 /* : NativeString */;
val* var839 /* : FlatString */;
static val* varonce840;
val* var841 /* : String */;
char* var842 /* : NativeString */;
val* var843 /* : FlatString */;
val* var844 /* : Array[String] */;
val* var845 /* : NativeArray[String] */;
val* var846 /* : OptionBool */;
static val* varonce847;
val* var848 /* : String */;
char* var849 /* : NativeString */;
val* var850 /* : FlatString */;
static val* varonce851;
val* var852 /* : String */;
char* var853 /* : NativeString */;
val* var854 /* : FlatString */;
val* var855 /* : Array[String] */;
val* var856 /* : NativeArray[String] */;
val* var857 /* : OptionBool */;
static val* varonce858;
val* var859 /* : String */;
char* var860 /* : NativeString */;
val* var861 /* : FlatString */;
static val* varonce862;
val* var863 /* : String */;
char* var864 /* : NativeString */;
val* var865 /* : FlatString */;
val* var866 /* : Array[String] */;
val* var867 /* : NativeArray[String] */;
val* var868 /* : ErasureCompilerPhase */;
self = nit_alloc(sizeof(struct instance) + 101*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ToolContext;
self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l = 0l; /* _error_count on <self:ToolContext exact> */
self->attrs[COLOR_nit__toolcontext__ToolContext___warning_count].l = 0l; /* _warning_count on <self:ToolContext exact> */
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "logs";
var2 = standard___standard__NativeString___to_s_with_length(var1, 4l);
var = var2;
varonce = var;
}
self->attrs[COLOR_nit__toolcontext__ToolContext___log_directory].val = var; /* _log_directory on <self:ToolContext exact> */
var3 = NEW_standard__Array(&type_standard__Array__nit__Message);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Message]>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___messages].val = var3; /* _messages on <self:ToolContext exact> */
var4 = glob_sys;
{
var5 = standard__sorter___Sys___default_comparator(var4);
}
self->attrs[COLOR_nit__toolcontext__ToolContext___message_sorter].val = var5; /* _message_sorter on <self:ToolContext exact> */
self->attrs[COLOR_nit__toolcontext__ToolContext___keep_going].s = 0; /* _keep_going on <self:ToolContext exact> */
var6 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMap__nit__SourceFile__standard__String);
{
standard___standard__HashMap___standard__kernel__Object__init(var6); /* Direct call hash_collection#HashMap#init on <var6:MultiHashMap[SourceFile, String]>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___warning_blacklist].val = var6; /* _warning_blacklist on <self:ToolContext exact> */
var7 = NEW_opts__OptionContext(&type_opts__OptionContext);
{
{ /* Inline kernel#Object#init (var7) on <var7:OptionContext> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val = var7; /* _option_context on <self:ToolContext exact> */
var8 = NEW_opts__OptionCount(&type_opts__OptionCount);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "Show more warnings";
var12 = standard___standard__NativeString___to_s_with_length(var11, 18l);
var10 = var12;
varonce9 = var10;
}
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "-W";
var16 = standard___standard__NativeString___to_s_with_length(var15, 2l);
var14 = var16;
varonce13 = var14;
}
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "--warn";
var20 = standard___standard__NativeString___to_s_with_length(var19, 6l);
var18 = var20;
varonce17 = var18;
}
var21 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var21 = array_instance Array[String] */
var22 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var22)->values[0] = (val*) var14;
((struct instance_standard__NativeArray*)var22)->values[1] = (val*) var18;
{
((void(*)(val* self, val* p0, long p1))(var21->class->vft[COLOR_standard__array__Array__with_native]))(var21, var22, 2l); /* with_native on <var21:Array[String]>*/
}
}
{
opts___opts__OptionCount___init(var8, var10, var21); /* Direct call opts#OptionCount#init on <var8:OptionCount>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_warn].val = var8; /* _opt_warn on <self:ToolContext exact> */
var23 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "Show/hide a specific warning";
var27 = standard___standard__NativeString___to_s_with_length(var26, 28l);
var25 = var27;
varonce24 = var25;
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "-w";
var31 = standard___standard__NativeString___to_s_with_length(var30, 2l);
var29 = var31;
varonce28 = var29;
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "--warning";
var35 = standard___standard__NativeString___to_s_with_length(var34, 9l);
var33 = var35;
varonce32 = var33;
}
var36 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var36 = array_instance Array[String] */
var37 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var37)->values[0] = (val*) var29;
((struct instance_standard__NativeArray*)var37)->values[1] = (val*) var33;
{
((void(*)(val* self, val* p0, long p1))(var36->class->vft[COLOR_standard__array__Array__with_native]))(var36, var37, 2l); /* with_native on <var36:Array[String]>*/
}
}
{
opts___opts__OptionArray___init(var23, var25, var36); /* Direct call opts#OptionArray#init on <var23:OptionArray>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_warning].val = var23; /* _opt_warning on <self:ToolContext exact> */
var38 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "Do not show warnings";
var42 = standard___standard__NativeString___to_s_with_length(var41, 20l);
var40 = var42;
varonce39 = var40;
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "-q";
var46 = standard___standard__NativeString___to_s_with_length(var45, 2l);
var44 = var46;
varonce43 = var44;
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "--quiet";
var50 = standard___standard__NativeString___to_s_with_length(var49, 7l);
var48 = var50;
varonce47 = var48;
}
var51 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var51 = array_instance Array[String] */
var52 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var52)->values[0] = (val*) var44;
((struct instance_standard__NativeArray*)var52)->values[1] = (val*) var48;
{
((void(*)(val* self, val* p0, long p1))(var51->class->vft[COLOR_standard__array__Array__with_native]))(var51, var52, 2l); /* with_native on <var51:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var38, var40, var51); /* Direct call opts#OptionBool#init on <var38:OptionBool>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_quiet].val = var38; /* _opt_quiet on <self:ToolContext exact> */
var53 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "Generate various log files";
var57 = standard___standard__NativeString___to_s_with_length(var56, 26l);
var55 = var57;
varonce54 = var55;
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "--log";
var61 = standard___standard__NativeString___to_s_with_length(var60, 5l);
var59 = var61;
varonce58 = var59;
}
var62 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var62 = array_instance Array[String] */
var63 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var63)->values[0] = (val*) var59;
{
((void(*)(val* self, val* p0, long p1))(var62->class->vft[COLOR_standard__array__Array__with_native]))(var62, var63, 1l); /* with_native on <var62:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var53, var55, var62); /* Direct call opts#OptionBool#init on <var53:OptionBool>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_log].val = var53; /* _opt_log on <self:ToolContext exact> */
var64 = NEW_opts__OptionString(&type_opts__OptionString);
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "Directory where to generate log files";
var68 = standard___standard__NativeString___to_s_with_length(var67, 37l);
var66 = var68;
varonce65 = var66;
}
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "--log-dir";
var72 = standard___standard__NativeString___to_s_with_length(var71, 9l);
var70 = var72;
varonce69 = var70;
}
var73 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var73 = array_instance Array[String] */
var74 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var74)->values[0] = (val*) var70;
{
((void(*)(val* self, val* p0, long p1))(var73->class->vft[COLOR_standard__array__Array__with_native]))(var73, var74, 1l); /* with_native on <var73:Array[String]>*/
}
}
{
opts___opts__OptionString___init(var64, var66, var73); /* Direct call opts#OptionString#init on <var64:OptionString>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_log_dir].val = var64; /* _opt_log_dir on <self:ToolContext exact> */
var75 = NEW_opts__OptionString(&type_opts__OptionString);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "Base directory of the Nit installation";
var79 = standard___standard__NativeString___to_s_with_length(var78, 38l);
var77 = var79;
varonce76 = var77;
}
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "--nit-dir";
var83 = standard___standard__NativeString___to_s_with_length(var82, 9l);
var81 = var83;
varonce80 = var81;
}
var84 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var84 = array_instance Array[String] */
var85 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var85)->values[0] = (val*) var81;
{
((void(*)(val* self, val* p0, long p1))(var84->class->vft[COLOR_standard__array__Array__with_native]))(var84, var85, 1l); /* with_native on <var84:Array[String]>*/
}
}
{
opts___opts__OptionString___init(var75, var77, var84); /* Direct call opts#OptionString#init on <var75:OptionString>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_nit_dir].val = var75; /* _opt_nit_dir on <self:ToolContext exact> */
var86 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "Show Help (This screen)";
var90 = standard___standard__NativeString___to_s_with_length(var89, 23l);
var88 = var90;
varonce87 = var88;
}
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "-h";
var94 = standard___standard__NativeString___to_s_with_length(var93, 2l);
var92 = var94;
varonce91 = var92;
}
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "-?";
var98 = standard___standard__NativeString___to_s_with_length(var97, 2l);
var96 = var98;
varonce95 = var96;
}
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "--help";
var102 = standard___standard__NativeString___to_s_with_length(var101, 6l);
var100 = var102;
varonce99 = var100;
}
var103 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var103 = array_instance Array[String] */
var104 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var104)->values[0] = (val*) var92;
((struct instance_standard__NativeArray*)var104)->values[1] = (val*) var96;
((struct instance_standard__NativeArray*)var104)->values[2] = (val*) var100;
{
((void(*)(val* self, val* p0, long p1))(var103->class->vft[COLOR_standard__array__Array__with_native]))(var103, var104, 3l); /* with_native on <var103:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var86, var88, var103); /* Direct call opts#OptionBool#init on <var86:OptionBool>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_help].val = var86; /* _opt_help on <self:ToolContext exact> */
var105 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = "Show version and exit";
var109 = standard___standard__NativeString___to_s_with_length(var108, 21l);
var107 = var109;
varonce106 = var107;
}
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "--version";
var113 = standard___standard__NativeString___to_s_with_length(var112, 9l);
var111 = var113;
varonce110 = var111;
}
var114 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var114 = array_instance Array[String] */
var115 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var115)->values[0] = (val*) var111;
{
((void(*)(val* self, val* p0, long p1))(var114->class->vft[COLOR_standard__array__Array__with_native]))(var114, var115, 1l); /* with_native on <var114:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var105, var107, var114); /* Direct call opts#OptionBool#init on <var105:OptionBool>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_version].val = var105; /* _opt_version on <self:ToolContext exact> */
var116 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "Set toolname and version to DUMMY. Useful for testing";
var120 = standard___standard__NativeString___to_s_with_length(var119, 53l);
var118 = var120;
varonce117 = var118;
}
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "--set-dummy-tool";
var124 = standard___standard__NativeString___to_s_with_length(var123, 16l);
var122 = var124;
varonce121 = var122;
}
var125 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var125 = array_instance Array[String] */
var126 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var126)->values[0] = (val*) var122;
{
((void(*)(val* self, val* p0, long p1))(var125->class->vft[COLOR_standard__array__Array__with_native]))(var125, var126, 1l); /* with_native on <var125:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var116, var118, var125); /* Direct call opts#OptionBool#init on <var116:OptionBool>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_set_dummy_tool].val = var116; /* _opt_set_dummy_tool on <self:ToolContext exact> */
var127 = NEW_opts__OptionCount(&type_opts__OptionCount);
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = "Verbose";
var131 = standard___standard__NativeString___to_s_with_length(var130, 7l);
var129 = var131;
varonce128 = var129;
}
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = "-v";
var135 = standard___standard__NativeString___to_s_with_length(var134, 2l);
var133 = var135;
varonce132 = var133;
}
if (likely(varonce136!=NULL)) {
var137 = varonce136;
} else {
var138 = "--verbose";
var139 = standard___standard__NativeString___to_s_with_length(var138, 9l);
var137 = var139;
varonce136 = var137;
}
var140 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var140 = array_instance Array[String] */
var141 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var141)->values[0] = (val*) var133;
((struct instance_standard__NativeArray*)var141)->values[1] = (val*) var137;
{
((void(*)(val* self, val* p0, long p1))(var140->class->vft[COLOR_standard__array__Array__with_native]))(var140, var141, 2l); /* with_native on <var140:Array[String]>*/
}
}
{
opts___opts__OptionCount___init(var127, var129, var140); /* Direct call opts#OptionCount#init on <var127:OptionCount>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_verbose].val = var127; /* _opt_verbose on <self:ToolContext exact> */
var142 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce143!=NULL)) {
var144 = varonce143;
} else {
var145 = "Stop on first error";
var146 = standard___standard__NativeString___to_s_with_length(var145, 19l);
var144 = var146;
varonce143 = var144;
}
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = "--stop-on-first-error";
var150 = standard___standard__NativeString___to_s_with_length(var149, 21l);
var148 = var150;
varonce147 = var148;
}
var151 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var151 = array_instance Array[String] */
var152 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var152)->values[0] = (val*) var148;
{
((void(*)(val* self, val* p0, long p1))(var151->class->vft[COLOR_standard__array__Array__with_native]))(var151, var152, 1l); /* with_native on <var151:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var142, var144, var151); /* Direct call opts#OptionBool#init on <var142:OptionBool>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_stop_on_first_error].val = var142; /* _opt_stop_on_first_error on <self:ToolContext exact> */
var153 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = "Continue after errors, whatever the consequences";
var157 = standard___standard__NativeString___to_s_with_length(var156, 48l);
var155 = var157;
varonce154 = var155;
}
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = "--keep-going";
var161 = standard___standard__NativeString___to_s_with_length(var160, 12l);
var159 = var161;
varonce158 = var159;
}
var162 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var162 = array_instance Array[String] */
var163 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var163)->values[0] = (val*) var159;
{
((void(*)(val* self, val* p0, long p1))(var162->class->vft[COLOR_standard__array__Array__with_native]))(var162, var163, 1l); /* with_native on <var162:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var153, var155, var162); /* Direct call opts#OptionBool#init on <var153:OptionBool>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_keep_going].val = var153; /* _opt_keep_going on <self:ToolContext exact> */
var164 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce165!=NULL)) {
var166 = varonce165;
} else {
var167 = "Do not use color to display errors and warnings";
var168 = standard___standard__NativeString___to_s_with_length(var167, 47l);
var166 = var168;
varonce165 = var166;
}
if (likely(varonce169!=NULL)) {
var170 = varonce169;
} else {
var171 = "--no-color";
var172 = standard___standard__NativeString___to_s_with_length(var171, 10l);
var170 = var172;
varonce169 = var170;
}
var173 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var173 = array_instance Array[String] */
var174 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var174)->values[0] = (val*) var170;
{
((void(*)(val* self, val* p0, long p1))(var173->class->vft[COLOR_standard__array__Array__with_native]))(var173, var174, 1l); /* with_native on <var173:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var164, var166, var173); /* Direct call opts#OptionBool#init on <var164:OptionBool>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_no_color].val = var164; /* _opt_no_color on <self:ToolContext exact> */
var175 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "Generate bash_completion file for this program";
var179 = standard___standard__NativeString___to_s_with_length(var178, 46l);
var177 = var179;
varonce176 = var177;
}
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "--bash-completion";
var183 = standard___standard__NativeString___to_s_with_length(var182, 17l);
var181 = var183;
varonce180 = var181;
}
var184 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var184 = array_instance Array[String] */
var185 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var185)->values[0] = (val*) var181;
{
((void(*)(val* self, val* p0, long p1))(var184->class->vft[COLOR_standard__array__Array__with_native]))(var184, var185, 1l); /* with_native on <var184:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var175, var177, var184); /* Direct call opts#OptionBool#init on <var175:OptionBool>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_bash_completion].val = var175; /* _opt_bash_completion on <self:ToolContext exact> */
var186 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce187!=NULL)) {
var188 = varonce187;
} else {
var189 = "Generate a stub manpage in pandoc markdown format";
var190 = standard___standard__NativeString___to_s_with_length(var189, 49l);
var188 = var190;
varonce187 = var188;
}
if (likely(varonce191!=NULL)) {
var192 = varonce191;
} else {
var193 = "--stub-man";
var194 = standard___standard__NativeString___to_s_with_length(var193, 10l);
var192 = var194;
varonce191 = var192;
}
var195 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var195 = array_instance Array[String] */
var196 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var196)->values[0] = (val*) var192;
{
((void(*)(val* self, val* p0, long p1))(var195->class->vft[COLOR_standard__array__Array__with_native]))(var195, var196, 1l); /* with_native on <var195:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var186, var188, var195); /* Direct call opts#OptionBool#init on <var186:OptionBool>*/
}
self->attrs[COLOR_nit__toolcontext__ToolContext___opt_stub_man].val = var186; /* _opt_stub_man on <self:ToolContext exact> */
self->attrs[COLOR_nit__toolcontext__ToolContext___verbose_level].l = 0l; /* _verbose_level on <self:ToolContext exact> */
if (likely(varonce197!=NULL)) {
var198 = varonce197;
} else {
var199 = "Usage: [OPTION]... [ARG]...";
var200 = standard___standard__NativeString___to_s_with_length(var199, 27l);
var198 = var200;
varonce197 = var198;
}
self->attrs[COLOR_nit__toolcontext__ToolContext___tooldescription].val = var198; /* _tooldescription on <self:ToolContext exact> */
self->attrs[COLOR_nit__toolcontext__ToolContext___accept_no_arguments].s = 0; /* _accept_no_arguments on <self:ToolContext exact> */
var201 = NEW_poset__POSet(&type_poset__POSet__nit__Phase);
{
{ /* Inline kernel#Object#init (var201) on <var201:POSet[Phase]> */
RET_LABEL202:(void)0;
}
}
self->attrs[COLOR_nit__phase__ToolContext___phases].val = var201; /* _phases on <self:ToolContext exact> */
var203 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (likely(varonce204!=NULL)) {
var205 = varonce204;
} else {
var206 = "DEBUG: Disable a specific phase; use `list` to get the list.";
var207 = standard___standard__NativeString___to_s_with_length(var206, 60l);
var205 = var207;
varonce204 = var205;
}
if (likely(varonce208!=NULL)) {
var209 = varonce208;
} else {
var210 = "--disable-phase";
var211 = standard___standard__NativeString___to_s_with_length(var210, 15l);
var209 = var211;
varonce208 = var209;
}
var212 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var212 = array_instance Array[String] */
var213 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var213)->values[0] = (val*) var209;
{
((void(*)(val* self, val* p0, long p1))(var212->class->vft[COLOR_standard__array__Array__with_native]))(var212, var213, 1l); /* with_native on <var212:Array[String]>*/
}
}
{
opts___opts__OptionArray___init(var203, var205, var212); /* Direct call opts#OptionArray#init on <var203:OptionArray>*/
}
self->attrs[COLOR_nit__phase__ToolContext___opt_disable_phase].val = var203; /* _opt_disable_phase on <self:ToolContext exact> */
var214 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce215!=NULL)) {
var216 = varonce215;
} else {
var217 = "DEBUG: force lazy semantic analysis of the source-code";
var218 = standard___standard__NativeString___to_s_with_length(var217, 54l);
var216 = var218;
varonce215 = var216;
}
if (likely(varonce219!=NULL)) {
var220 = varonce219;
} else {
var221 = "--sloppy";
var222 = standard___standard__NativeString___to_s_with_length(var221, 8l);
var220 = var222;
varonce219 = var220;
}
var223 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var223 = array_instance Array[String] */
var224 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var224)->values[0] = (val*) var220;
{
((void(*)(val* self, val* p0, long p1))(var223->class->vft[COLOR_standard__array__Array__with_native]))(var223, var224, 1l); /* with_native on <var223:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var214, var216, var223); /* Direct call opts#OptionBool#init on <var214:OptionBool>*/
}
self->attrs[COLOR_nit__phase__ToolContext___opt_sloppy].val = var214; /* _opt_sloppy on <self:ToolContext exact> */
self->attrs[COLOR_nit__phase__ToolContext___semantize_is_lazy].s = 0; /* _semantize_is_lazy on <self:ToolContext exact> */
var225 = NEW_standard__HashSet(&type_standard__HashSet__nit__AModule);
{
standard___standard__HashSet___standard__kernel__Object__init(var225); /* Direct call hash_collection#HashSet#init on <var225:HashSet[AModule]>*/
}
self->attrs[COLOR_nit__phase__ToolContext___phased_modules].val = var225; /* _phased_modules on <self:ToolContext exact> */
var226 = NEW_nit__literal__LiteralPhase(&type_nit__literal__LiteralPhase);
{
((void(*)(val* self, val* p0))(var226->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var226, self); /* toolcontext= on <var226:LiteralPhase>*/
}
{
((void(*)(val* self, val* p0))(var226->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var226, ((val*)NULL)); /* depends= on <var226:LiteralPhase>*/
}
{
((void(*)(val* self))(var226->class->vft[COLOR_standard__kernel__Object__init]))(var226); /* init on <var226:LiteralPhase>*/
}
self->attrs[COLOR_nit__literal__ToolContext___literal_phase].val = var226; /* _literal_phase on <self:ToolContext exact> */
var227 = NEW_nit__scope__ScopePhase(&type_nit__scope__ScopePhase);
{
((void(*)(val* self, val* p0))(var227->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var227, self); /* toolcontext= on <var227:ScopePhase>*/
}
{
((void(*)(val* self, val* p0))(var227->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var227, ((val*)NULL)); /* depends= on <var227:ScopePhase>*/
}
{
((void(*)(val* self))(var227->class->vft[COLOR_standard__kernel__Object__init]))(var227); /* init on <var227:ScopePhase>*/
}
self->attrs[COLOR_nit__scope__ToolContext___scope_phase].val = var227; /* _scope_phase on <self:ToolContext exact> */
var228 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (likely(varonce229!=NULL)) {
var230 = varonce229;
} else {
var231 = "Set include path for loaders (may be used more than once)";
var232 = standard___standard__NativeString___to_s_with_length(var231, 57l);
var230 = var232;
varonce229 = var230;
}
if (likely(varonce233!=NULL)) {
var234 = varonce233;
} else {
var235 = "-I";
var236 = standard___standard__NativeString___to_s_with_length(var235, 2l);
var234 = var236;
varonce233 = var234;
}
if (likely(varonce237!=NULL)) {
var238 = varonce237;
} else {
var239 = "--path";
var240 = standard___standard__NativeString___to_s_with_length(var239, 6l);
var238 = var240;
varonce237 = var238;
}
var241 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var241 = array_instance Array[String] */
var242 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var242)->values[0] = (val*) var234;
((struct instance_standard__NativeArray*)var242)->values[1] = (val*) var238;
{
((void(*)(val* self, val* p0, long p1))(var241->class->vft[COLOR_standard__array__Array__with_native]))(var241, var242, 2l); /* with_native on <var241:Array[String]>*/
}
}
{
opts___opts__OptionArray___init(var228, var230, var241); /* Direct call opts#OptionArray#init on <var228:OptionArray>*/
}
self->attrs[COLOR_nit__loader__ToolContext___opt_path].val = var228; /* _opt_path on <self:ToolContext exact> */
var243 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce244!=NULL)) {
var245 = varonce244;
} else {
var246 = "Stop after meta-model processing";
var247 = standard___standard__NativeString___to_s_with_length(var246, 32l);
var245 = var247;
varonce244 = var245;
}
if (likely(varonce248!=NULL)) {
var249 = varonce248;
} else {
var250 = "--only-metamodel";
var251 = standard___standard__NativeString___to_s_with_length(var250, 16l);
var249 = var251;
varonce248 = var249;
}
var252 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var252 = array_instance Array[String] */
var253 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var253)->values[0] = (val*) var249;
{
((void(*)(val* self, val* p0, long p1))(var252->class->vft[COLOR_standard__array__Array__with_native]))(var252, var253, 1l); /* with_native on <var252:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var243, var245, var252); /* Direct call opts#OptionBool#init on <var243:OptionBool>*/
}
self->attrs[COLOR_nit__loader__ToolContext___opt_only_metamodel].val = var243; /* _opt_only_metamodel on <self:ToolContext exact> */
var254 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce255!=NULL)) {
var256 = varonce255;
} else {
var257 = "Only proceed to parse step of loaders";
var258 = standard___standard__NativeString___to_s_with_length(var257, 37l);
var256 = var258;
varonce255 = var256;
}
if (likely(varonce259!=NULL)) {
var260 = varonce259;
} else {
var261 = "--only-parse";
var262 = standard___standard__NativeString___to_s_with_length(var261, 12l);
var260 = var262;
varonce259 = var260;
}
var263 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var263 = array_instance Array[String] */
var264 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var264)->values[0] = (val*) var260;
{
((void(*)(val* self, val* p0, long p1))(var263->class->vft[COLOR_standard__array__Array__with_native]))(var263, var264, 1l); /* with_native on <var263:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var254, var256, var263); /* Direct call opts#OptionBool#init on <var254:OptionBool>*/
}
self->attrs[COLOR_nit__loader__ToolContext___opt_only_parse].val = var254; /* _opt_only_parse on <self:ToolContext exact> */
var265 = NEW_nit__flow__FlowPhase(&type_nit__flow__FlowPhase);
var266 = NEW_standard__Array(&type_standard__Array__nit__Phase);
{
standard___standard__Array___with_capacity(var266, 1l); /* Direct call array#Array#with_capacity on <var266:Array[Phase]>*/
}
var_ = var266;
{
{ /* Inline scope#ToolContext#scope_phase (self) on <self:ToolContext exact> */
var269 = self->attrs[COLOR_nit__scope__ToolContext___scope_phase].val; /* _scope_phase on <self:ToolContext exact> */
if (unlikely(var269 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scope_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 23);
fatal_exit(1);
}
var267 = var269;
RET_LABEL268:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var267); /* Direct call array#AbstractArray#push on <var_:Array[Phase]>*/
}
{
((void(*)(val* self, val* p0))(var265->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var265, self); /* toolcontext= on <var265:FlowPhase>*/
}
{
((void(*)(val* self, val* p0))(var265->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var265, var_); /* depends= on <var265:FlowPhase>*/
}
{
((void(*)(val* self))(var265->class->vft[COLOR_standard__kernel__Object__init]))(var265); /* init on <var265:FlowPhase>*/
}
self->attrs[COLOR_nit__flow__ToolContext___flow_phase].val = var265; /* _flow_phase on <self:ToolContext exact> */
var270 = NEW_nit__local_var_init__LocalVarInitPhase(&type_nit__local_var_init__LocalVarInitPhase);
var271 = NEW_standard__Array(&type_standard__Array__nit__Phase);
{
standard___standard__Array___with_capacity(var271, 1l); /* Direct call array#Array#with_capacity on <var271:Array[Phase]>*/
}
var_272 = var271;
{
{ /* Inline flow#ToolContext#flow_phase (self) on <self:ToolContext exact> */
var275 = self->attrs[COLOR_nit__flow__ToolContext___flow_phase].val; /* _flow_phase on <self:ToolContext exact> */
if (unlikely(var275 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flow_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 23);
fatal_exit(1);
}
var273 = var275;
RET_LABEL274:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_272, var273); /* Direct call array#AbstractArray#push on <var_272:Array[Phase]>*/
}
{
((void(*)(val* self, val* p0))(var270->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var270, self); /* toolcontext= on <var270:LocalVarInitPhase>*/
}
{
((void(*)(val* self, val* p0))(var270->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var270, var_272); /* depends= on <var270:LocalVarInitPhase>*/
}
{
((void(*)(val* self))(var270->class->vft[COLOR_standard__kernel__Object__init]))(var270); /* init on <var270:LocalVarInitPhase>*/
}
self->attrs[COLOR_nit__local_var_init__ToolContext___local_var_init_phase].val = var270; /* _local_var_init_phase on <self:ToolContext exact> */
var276 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce277!=NULL)) {
var278 = varonce277;
} else {
var279 = "Do not check, and produce errors, on visibility issues.";
var280 = standard___standard__NativeString___to_s_with_length(var279, 55l);
var278 = var280;
varonce277 = var278;
}
if (likely(varonce281!=NULL)) {
var282 = varonce281;
} else {
var283 = "--ignore-visibility";
var284 = standard___standard__NativeString___to_s_with_length(var283, 19l);
var282 = var284;
varonce281 = var282;
}
var285 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var285 = array_instance Array[String] */
var286 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var286)->values[0] = (val*) var282;
{
((void(*)(val* self, val* p0, long p1))(var285->class->vft[COLOR_standard__array__Array__with_native]))(var285, var286, 1l); /* with_native on <var285:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var276, var278, var285); /* Direct call opts#OptionBool#init on <var276:OptionBool>*/
}
self->attrs[COLOR_nit__modelbuilder__ToolContext___opt_ignore_visibility].val = var276; /* _opt_ignore_visibility on <self:ToolContext exact> */
var287 = NEW_nit__modelize_class__ModelizeClassPhase(&type_nit__modelize_class__ModelizeClassPhase);
{
((void(*)(val* self, val* p0))(var287->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var287, self); /* toolcontext= on <var287:ModelizeClassPhase>*/
}
{
((void(*)(val* self, val* p0))(var287->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var287, ((val*)NULL)); /* depends= on <var287:ModelizeClassPhase>*/
}
{
((void(*)(val* self))(var287->class->vft[COLOR_standard__kernel__Object__init]))(var287); /* init on <var287:ModelizeClassPhase>*/
}
self->attrs[COLOR_nit__modelize_class__ToolContext___modelize_class_phase].val = var287; /* _modelize_class_phase on <self:ToolContext exact> */
var288 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (likely(varonce289!=NULL)) {
var290 = varonce289;
} else {
var291 = "Additionals module to min-in";
var292 = standard___standard__NativeString___to_s_with_length(var291, 28l);
var290 = var292;
varonce289 = var290;
}
if (likely(varonce293!=NULL)) {
var294 = varonce293;
} else {
var295 = "-m";
var296 = standard___standard__NativeString___to_s_with_length(var295, 2l);
var294 = var296;
varonce293 = var294;
}
if (likely(varonce297!=NULL)) {
var298 = varonce297;
} else {
var299 = "--mixin";
var300 = standard___standard__NativeString___to_s_with_length(var299, 7l);
var298 = var300;
varonce297 = var298;
}
var301 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var301 = array_instance Array[String] */
var302 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var302)->values[0] = (val*) var294;
((struct instance_standard__NativeArray*)var302)->values[1] = (val*) var298;
{
((void(*)(val* self, val* p0, long p1))(var301->class->vft[COLOR_standard__array__Array__with_native]))(var301, var302, 2l); /* with_native on <var301:Array[String]>*/
}
}
{
opts___opts__OptionArray___init(var288, var290, var301); /* Direct call opts#OptionArray#init on <var288:OptionArray>*/
}
self->attrs[COLOR_nit__mixin__ToolContext___opt_mixins].val = var288; /* _opt_mixins on <self:ToolContext exact> */
var303 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (likely(varonce304!=NULL)) {
var305 = varonce304;
} else {
var306 = "Define a specific property";
var307 = standard___standard__NativeString___to_s_with_length(var306, 26l);
var305 = var307;
varonce304 = var305;
}
if (likely(varonce308!=NULL)) {
var309 = varonce308;
} else {
var310 = "-D";
var311 = standard___standard__NativeString___to_s_with_length(var310, 2l);
var309 = var311;
varonce308 = var309;
}
if (likely(varonce312!=NULL)) {
var313 = varonce312;
} else {
var314 = "--define";
var315 = standard___standard__NativeString___to_s_with_length(var314, 8l);
var313 = var315;
varonce312 = var313;
}
var316 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var316 = array_instance Array[String] */
var317 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var317)->values[0] = (val*) var309;
((struct instance_standard__NativeArray*)var317)->values[1] = (val*) var313;
{
((void(*)(val* self, val* p0, long p1))(var316->class->vft[COLOR_standard__array__Array__with_native]))(var316, var317, 2l); /* with_native on <var316:Array[String]>*/
}
}
{
opts___opts__OptionArray___init(var303, var305, var316); /* Direct call opts#OptionArray#init on <var303:OptionArray>*/
}
self->attrs[COLOR_nit__mixin__ToolContext___opt_defines].val = var303; /* _opt_defines on <self:ToolContext exact> */
var318 = NEW_nit__FFILanguageAssignationPhase(&type_nit__FFILanguageAssignationPhase);
{
((void(*)(val* self, val* p0))(var318->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var318, self); /* toolcontext= on <var318:FFILanguageAssignationPhase>*/
}
{
((void(*)(val* self, val* p0))(var318->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var318, ((val*)NULL)); /* depends= on <var318:FFILanguageAssignationPhase>*/
}
{
((void(*)(val* self))(var318->class->vft[COLOR_standard__kernel__Object__init]))(var318); /* init on <var318:FFILanguageAssignationPhase>*/
}
self->attrs[COLOR_nit__light_ffi_base__ToolContext___ffi_language_assignation_phase].val = var318; /* _ffi_language_assignation_phase on <self:ToolContext exact> */
var319 = NEW_nit__modelize_property__ModelizePropertyPhase(&type_nit__modelize_property__ModelizePropertyPhase);
var320 = NEW_standard__Array(&type_standard__Array__nit__Phase);
{
standard___standard__Array___with_capacity(var320, 1l); /* Direct call array#Array#with_capacity on <var320:Array[Phase]>*/
}
var_321 = var320;
{
{ /* Inline modelize_class#ToolContext#modelize_class_phase (self) on <self:ToolContext exact> */
var324 = self->attrs[COLOR_nit__modelize_class__ToolContext___modelize_class_phase].val; /* _modelize_class_phase on <self:ToolContext exact> */
if (unlikely(var324 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_class_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 23);
fatal_exit(1);
}
var322 = var324;
RET_LABEL323:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_321, var322); /* Direct call array#AbstractArray#push on <var_321:Array[Phase]>*/
}
{
((void(*)(val* self, val* p0))(var319->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var319, self); /* toolcontext= on <var319:ModelizePropertyPhase>*/
}
{
((void(*)(val* self, val* p0))(var319->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var319, var_321); /* depends= on <var319:ModelizePropertyPhase>*/
}
{
((void(*)(val* self))(var319->class->vft[COLOR_standard__kernel__Object__init]))(var319); /* init on <var319:ModelizePropertyPhase>*/
}
self->attrs[COLOR_nit__modelize_property__ToolContext___modelize_property_phase].val = var319; /* _modelize_property_phase on <self:ToolContext exact> */
var325 = NEW_nit__platform__PlatformPhase(&type_nit__platform__PlatformPhase);
var326 = NEW_standard__Array(&type_standard__Array__nit__Phase);
{
standard___standard__Array___with_capacity(var326, 1l); /* Direct call array#Array#with_capacity on <var326:Array[Phase]>*/
}
var_327 = var326;
{
{ /* Inline modelize_property#ToolContext#modelize_property_phase (self) on <self:ToolContext exact> */
var330 = self->attrs[COLOR_nit__modelize_property__ToolContext___modelize_property_phase].val; /* _modelize_property_phase on <self:ToolContext exact> */
if (unlikely(var330 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_property_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 24);
fatal_exit(1);
}
var328 = var330;
RET_LABEL329:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_327, var328); /* Direct call array#AbstractArray#push on <var_327:Array[Phase]>*/
}
{
((void(*)(val* self, val* p0))(var325->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var325, self); /* toolcontext= on <var325:PlatformPhase>*/
}
{
((void(*)(val* self, val* p0))(var325->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var325, var_327); /* depends= on <var325:PlatformPhase>*/
}
{
((void(*)(val* self))(var325->class->vft[COLOR_standard__kernel__Object__init]))(var325); /* init on <var325:PlatformPhase>*/
}
self->attrs[COLOR_nit__platform__ToolContext___platform_phase].val = var325; /* _platform_phase on <self:ToolContext exact> */
var331 = NEW_nit__extern_classes__ExternClassesTypingPhaseAst(&type_nit__extern_classes__ExternClassesTypingPhaseAst);
var332 = NEW_standard__Array(&type_standard__Array__nit__Phase);
{
standard___standard__Array___with_capacity(var332, 2l); /* Direct call array#Array#with_capacity on <var332:Array[Phase]>*/
}
var_333 = var332;
{
{ /* Inline light_ffi_base#ToolContext#ffi_language_assignation_phase (self) on <self:ToolContext exact> */
var336 = self->attrs[COLOR_nit__light_ffi_base__ToolContext___ffi_language_assignation_phase].val; /* _ffi_language_assignation_phase on <self:ToolContext exact> */
if (unlikely(var336 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_language_assignation_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__light_ffi_base, 26);
fatal_exit(1);
}
var334 = var336;
RET_LABEL335:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_333, var334); /* Direct call array#AbstractArray#push on <var_333:Array[Phase]>*/
}
{
{ /* Inline modelize_class#ToolContext#modelize_class_phase (self) on <self:ToolContext exact> */
var339 = self->attrs[COLOR_nit__modelize_class__ToolContext___modelize_class_phase].val; /* _modelize_class_phase on <self:ToolContext exact> */
if (unlikely(var339 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_class_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 23);
fatal_exit(1);
}
var337 = var339;
RET_LABEL338:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_333, var337); /* Direct call array#AbstractArray#push on <var_333:Array[Phase]>*/
}
{
((void(*)(val* self, val* p0))(var331->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var331, self); /* toolcontext= on <var331:ExternClassesTypingPhaseAst>*/
}
{
((void(*)(val* self, val* p0))(var331->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var331, var_333); /* depends= on <var331:ExternClassesTypingPhaseAst>*/
}
{
((void(*)(val* self))(var331->class->vft[COLOR_standard__kernel__Object__init]))(var331); /* init on <var331:ExternClassesTypingPhaseAst>*/
}
self->attrs[COLOR_nit__extern_classes__ToolContext___extern_classes_typing_phase_ast].val = var331; /* _extern_classes_typing_phase_ast on <self:ToolContext exact> */
var340 = NEW_nit__extern_classes__ExternClassesTypingPhaseModel(&type_nit__extern_classes__ExternClassesTypingPhaseModel);
var341 = NEW_standard__Array(&type_standard__Array__nit__Phase);
{
standard___standard__Array___with_capacity(var341, 3l); /* Direct call array#Array#with_capacity on <var341:Array[Phase]>*/
}
var_342 = var341;
{
{ /* Inline extern_classes#ToolContext#extern_classes_typing_phase_ast (self) on <self:ToolContext exact> */
var345 = self->attrs[COLOR_nit__extern_classes__ToolContext___extern_classes_typing_phase_ast].val; /* _extern_classes_typing_phase_ast on <self:ToolContext exact> */
if (unlikely(var345 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_classes_typing_phase_ast");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__extern_classes, 24);
fatal_exit(1);
}
var343 = var345;
RET_LABEL344:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_342, var343); /* Direct call array#AbstractArray#push on <var_342:Array[Phase]>*/
}
{
{ /* Inline modelize_class#ToolContext#modelize_class_phase (self) on <self:ToolContext exact> */
var348 = self->attrs[COLOR_nit__modelize_class__ToolContext___modelize_class_phase].val; /* _modelize_class_phase on <self:ToolContext exact> */
if (unlikely(var348 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_class_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 23);
fatal_exit(1);
}
var346 = var348;
RET_LABEL347:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_342, var346); /* Direct call array#AbstractArray#push on <var_342:Array[Phase]>*/
}
{
{ /* Inline modelize_property#ToolContext#modelize_property_phase (self) on <self:ToolContext exact> */
var351 = self->attrs[COLOR_nit__modelize_property__ToolContext___modelize_property_phase].val; /* _modelize_property_phase on <self:ToolContext exact> */
if (unlikely(var351 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_property_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 24);
fatal_exit(1);
}
var349 = var351;
RET_LABEL350:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_342, var349); /* Direct call array#AbstractArray#push on <var_342:Array[Phase]>*/
}
{
((void(*)(val* self, val* p0))(var340->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var340, self); /* toolcontext= on <var340:ExternClassesTypingPhaseModel>*/
}
{
((void(*)(val* self, val* p0))(var340->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var340, var_342); /* depends= on <var340:ExternClassesTypingPhaseModel>*/
}
{
((void(*)(val* self))(var340->class->vft[COLOR_standard__kernel__Object__init]))(var340); /* init on <var340:ExternClassesTypingPhaseModel>*/
}
self->attrs[COLOR_nit__extern_classes__ToolContext___extern_classes_typing_phase_model].val = var340; /* _extern_classes_typing_phase_model on <self:ToolContext exact> */
var352 = NEW_nit__typing__TypingPhase(&type_nit__typing__TypingPhase);
var353 = NEW_standard__Array(&type_standard__Array__nit__Phase);
{
standard___standard__Array___with_capacity(var353, 3l); /* Direct call array#Array#with_capacity on <var353:Array[Phase]>*/
}
var_354 = var353;
{
{ /* Inline flow#ToolContext#flow_phase (self) on <self:ToolContext exact> */
var357 = self->attrs[COLOR_nit__flow__ToolContext___flow_phase].val; /* _flow_phase on <self:ToolContext exact> */
if (unlikely(var357 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flow_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 23);
fatal_exit(1);
}
var355 = var357;
RET_LABEL356:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_354, var355); /* Direct call array#AbstractArray#push on <var_354:Array[Phase]>*/
}
{
{ /* Inline modelize_property#ToolContext#modelize_property_phase (self) on <self:ToolContext exact> */
var360 = self->attrs[COLOR_nit__modelize_property__ToolContext___modelize_property_phase].val; /* _modelize_property_phase on <self:ToolContext exact> */
if (unlikely(var360 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_property_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 24);
fatal_exit(1);
}
var358 = var360;
RET_LABEL359:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_354, var358); /* Direct call array#AbstractArray#push on <var_354:Array[Phase]>*/
}
{
{ /* Inline local_var_init#ToolContext#local_var_init_phase (self) on <self:ToolContext exact> */
var363 = self->attrs[COLOR_nit__local_var_init__ToolContext___local_var_init_phase].val; /* _local_var_init_phase on <self:ToolContext exact> */
if (unlikely(var363 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _local_var_init_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__local_var_init, 24);
fatal_exit(1);
}
var361 = var363;
RET_LABEL362:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_354, var361); /* Direct call array#AbstractArray#push on <var_354:Array[Phase]>*/
}
{
((void(*)(val* self, val* p0))(var352->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var352, self); /* toolcontext= on <var352:TypingPhase>*/
}
{
((void(*)(val* self, val* p0))(var352->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var352, var_354); /* depends= on <var352:TypingPhase>*/
}
{
((void(*)(val* self))(var352->class->vft[COLOR_standard__kernel__Object__init]))(var352); /* init on <var352:TypingPhase>*/
}
self->attrs[COLOR_nit__typing__ToolContext___typing_phase].val = var352; /* _typing_phase on <self:ToolContext exact> */
var364 = NEW_nit__auto_super_init__AutoSuperInitPhase(&type_nit__auto_super_init__AutoSuperInitPhase);
var365 = NEW_standard__Array(&type_standard__Array__nit__Phase);
{
standard___standard__Array___with_capacity(var365, 1l); /* Direct call array#Array#with_capacity on <var365:Array[Phase]>*/
}
var_366 = var365;
{
{ /* Inline typing#ToolContext#typing_phase (self) on <self:ToolContext exact> */
var369 = self->attrs[COLOR_nit__typing__ToolContext___typing_phase].val; /* _typing_phase on <self:ToolContext exact> */
if (unlikely(var369 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _typing_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 25);
fatal_exit(1);
}
var367 = var369;
RET_LABEL368:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_366, var367); /* Direct call array#AbstractArray#push on <var_366:Array[Phase]>*/
}
{
((void(*)(val* self, val* p0))(var364->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var364, self); /* toolcontext= on <var364:AutoSuperInitPhase>*/
}
{
((void(*)(val* self, val* p0))(var364->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var364, var_366); /* depends= on <var364:AutoSuperInitPhase>*/
}
{
((void(*)(val* self))(var364->class->vft[COLOR_standard__kernel__Object__init]))(var364); /* init on <var364:AutoSuperInitPhase>*/
}
self->attrs[COLOR_nit__auto_super_init__ToolContext___auto_super_init_phase].val = var364; /* _auto_super_init_phase on <self:ToolContext exact> */
var370 = NEW_nit__transform__TransformPhase(&type_nit__transform__TransformPhase);
var371 = NEW_standard__Array(&type_standard__Array__nit__Phase);
{
standard___standard__Array___with_capacity(var371, 2l); /* Direct call array#Array#with_capacity on <var371:Array[Phase]>*/
}
var_372 = var371;
{
{ /* Inline typing#ToolContext#typing_phase (self) on <self:ToolContext exact> */
var375 = self->attrs[COLOR_nit__typing__ToolContext___typing_phase].val; /* _typing_phase on <self:ToolContext exact> */
if (unlikely(var375 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _typing_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 25);
fatal_exit(1);
}
var373 = var375;
RET_LABEL374:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_372, var373); /* Direct call array#AbstractArray#push on <var_372:Array[Phase]>*/
}
{
{ /* Inline auto_super_init#ToolContext#auto_super_init_phase (self) on <self:ToolContext exact> */
var378 = self->attrs[COLOR_nit__auto_super_init__ToolContext___auto_super_init_phase].val; /* _auto_super_init_phase on <self:ToolContext exact> */
if (unlikely(var378 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _auto_super_init_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__auto_super_init, 25);
fatal_exit(1);
}
var376 = var378;
RET_LABEL377:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_372, var376); /* Direct call array#AbstractArray#push on <var_372:Array[Phase]>*/
}
{
((void(*)(val* self, val* p0))(var370->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var370, self); /* toolcontext= on <var370:TransformPhase>*/
}
{
((void(*)(val* self, val* p0))(var370->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var370, var_372); /* depends= on <var370:TransformPhase>*/
}
{
((void(*)(val* self))(var370->class->vft[COLOR_standard__kernel__Object__init]))(var370); /* init on <var370:TransformPhase>*/
}
self->attrs[COLOR_nit__transform__ToolContext___transform_phase].val = var370; /* _transform_phase on <self:ToolContext exact> */
var379 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce380!=NULL)) {
var381 = varonce380;
} else {
var382 = "Always instantiate a range and its iterator on \'for\' loops";
var383 = standard___standard__NativeString___to_s_with_length(var382, 58l);
var381 = var383;
varonce380 = var381;
}
if (likely(varonce384!=NULL)) {
var385 = varonce384;
} else {
var386 = "--no-shortcut-range";
var387 = standard___standard__NativeString___to_s_with_length(var386, 19l);
var385 = var387;
varonce384 = var385;
}
var388 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var388 = array_instance Array[String] */
var389 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var389)->values[0] = (val*) var385;
{
((void(*)(val* self, val* p0, long p1))(var388->class->vft[COLOR_standard__array__Array__with_native]))(var388, var389, 1l); /* with_native on <var388:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var379, var381, var388); /* Direct call opts#OptionBool#init on <var379:OptionBool>*/
}
self->attrs[COLOR_nit__transform__ToolContext___opt_no_shortcut_range].val = var379; /* _opt_no_shortcut_range on <self:ToolContext exact> */
var390 = NEW_opts__OptionString(&type_opts__OptionString);
if (likely(varonce391!=NULL)) {
var392 = varonce391;
} else {
var393 = "Output file";
var394 = standard___standard__NativeString___to_s_with_length(var393, 11l);
var392 = var394;
varonce391 = var392;
}
if (likely(varonce395!=NULL)) {
var396 = varonce395;
} else {
var397 = "-o";
var398 = standard___standard__NativeString___to_s_with_length(var397, 2l);
var396 = var398;
varonce395 = var396;
}
if (likely(varonce399!=NULL)) {
var400 = varonce399;
} else {
var401 = "--output";
var402 = standard___standard__NativeString___to_s_with_length(var401, 8l);
var400 = var402;
varonce399 = var400;
}
var403 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var403 = array_instance Array[String] */
var404 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var404)->values[0] = (val*) var396;
((struct instance_standard__NativeArray*)var404)->values[1] = (val*) var400;
{
((void(*)(val* self, val* p0, long p1))(var403->class->vft[COLOR_standard__array__Array__with_native]))(var403, var404, 2l); /* with_native on <var403:Array[String]>*/
}
}
{
opts___opts__OptionString___init(var390, var392, var403); /* Direct call opts#OptionString#init on <var390:OptionString>*/
}
self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_output].val = var390; /* _opt_output on <self:ToolContext exact> */
var405 = NEW_opts__OptionString(&type_opts__OptionString);
if (likely(varonce406!=NULL)) {
var407 = varonce406;
} else {
var408 = "Output directory";
var409 = standard___standard__NativeString___to_s_with_length(var408, 16l);
var407 = var409;
varonce406 = var407;
}
if (likely(varonce410!=NULL)) {
var411 = varonce410;
} else {
var412 = "--dir";
var413 = standard___standard__NativeString___to_s_with_length(var412, 5l);
var411 = var413;
varonce410 = var411;
}
var414 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var414 = array_instance Array[String] */
var415 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var415)->values[0] = (val*) var411;
{
((void(*)(val* self, val* p0, long p1))(var414->class->vft[COLOR_standard__array__Array__with_native]))(var414, var415, 1l); /* with_native on <var414:Array[String]>*/
}
}
{
opts___opts__OptionString___init(var405, var407, var414); /* Direct call opts#OptionString#init on <var405:OptionString>*/
}
self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_dir].val = var405; /* _opt_dir on <self:ToolContext exact> */
var416 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce417!=NULL)) {
var418 = varonce417;
} else {
var419 = "Do not invoke C compiler";
var420 = standard___standard__NativeString___to_s_with_length(var419, 24l);
var418 = var420;
varonce417 = var418;
}
if (likely(varonce421!=NULL)) {
var422 = varonce421;
} else {
var423 = "--no-cc";
var424 = standard___standard__NativeString___to_s_with_length(var423, 7l);
var422 = var424;
varonce421 = var422;
}
var425 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var425 = array_instance Array[String] */
var426 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var426)->values[0] = (val*) var422;
{
((void(*)(val* self, val* p0, long p1))(var425->class->vft[COLOR_standard__array__Array__with_native]))(var425, var426, 1l); /* with_native on <var425:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var416, var418, var425); /* Direct call opts#OptionBool#init on <var416:OptionBool>*/
}
self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_cc].val = var416; /* _opt_no_cc on <self:ToolContext exact> */
var427 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce428!=NULL)) {
var429 = varonce428;
} else {
var430 = "Do not generate main entry point";
var431 = standard___standard__NativeString___to_s_with_length(var430, 32l);
var429 = var431;
varonce428 = var429;
}
if (likely(varonce432!=NULL)) {
var433 = varonce432;
} else {
var434 = "--no-main";
var435 = standard___standard__NativeString___to_s_with_length(var434, 9l);
var433 = var435;
varonce432 = var433;
}
var436 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var436 = array_instance Array[String] */
var437 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var437)->values[0] = (val*) var433;
{
((void(*)(val* self, val* p0, long p1))(var436->class->vft[COLOR_standard__array__Array__with_native]))(var436, var437, 1l); /* with_native on <var436:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var427, var429, var436); /* Direct call opts#OptionBool#init on <var427:OptionBool>*/
}
self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_main].val = var427; /* _opt_no_main on <self:ToolContext exact> */
var438 = NEW_opts__OptionString(&type_opts__OptionString);
if (likely(varonce439!=NULL)) {
var440 = varonce439;
} else {
var441 = "Additional options to make";
var442 = standard___standard__NativeString___to_s_with_length(var441, 26l);
var440 = var442;
varonce439 = var440;
}
if (likely(varonce443!=NULL)) {
var444 = varonce443;
} else {
var445 = "--make-flags";
var446 = standard___standard__NativeString___to_s_with_length(var445, 12l);
var444 = var446;
varonce443 = var444;
}
var447 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var447 = array_instance Array[String] */
var448 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var448)->values[0] = (val*) var444;
{
((void(*)(val* self, val* p0, long p1))(var447->class->vft[COLOR_standard__array__Array__with_native]))(var447, var448, 1l); /* with_native on <var447:Array[String]>*/
}
}
{
opts___opts__OptionString___init(var438, var440, var447); /* Direct call opts#OptionString#init on <var438:OptionString>*/
}
self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_make_flags].val = var438; /* _opt_make_flags on <self:ToolContext exact> */
var449 = NEW_opts__OptionInt(&type_opts__OptionInt);
if (likely(varonce450!=NULL)) {
var451 = varonce450;
} else {
var452 = "Maximum number of lines in generated C files. Use 0 for unlimited";
var453 = standard___standard__NativeString___to_s_with_length(var452, 65l);
var451 = var453;
varonce450 = var451;
}
if (likely(varonce454!=NULL)) {
var455 = varonce454;
} else {
var456 = "--max-c-lines";
var457 = standard___standard__NativeString___to_s_with_length(var456, 13l);
var455 = var457;
varonce454 = var455;
}
var458 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var458 = array_instance Array[String] */
var459 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var459)->values[0] = (val*) var455;
{
((void(*)(val* self, val* p0, long p1))(var458->class->vft[COLOR_standard__array__Array__with_native]))(var458, var459, 1l); /* with_native on <var458:Array[String]>*/
}
}
{
opts___opts__OptionInt___init(var449, var451, 10000l, var458); /* Direct call opts#OptionInt#init on <var449:OptionInt>*/
}
self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_max_c_lines].val = var449; /* _opt_max_c_lines on <self:ToolContext exact> */
var460 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce461!=NULL)) {
var462 = varonce461;
} else {
var463 = "Group all generated code in the same series of files";
var464 = standard___standard__NativeString___to_s_with_length(var463, 52l);
var462 = var464;
varonce461 = var462;
}
if (likely(varonce465!=NULL)) {
var466 = varonce465;
} else {
var467 = "--group-c-files";
var468 = standard___standard__NativeString___to_s_with_length(var467, 15l);
var466 = var468;
varonce465 = var466;
}
var469 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var469 = array_instance Array[String] */
var470 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var470)->values[0] = (val*) var466;
{
((void(*)(val* self, val* p0, long p1))(var469->class->vft[COLOR_standard__array__Array__with_native]))(var469, var470, 1l); /* with_native on <var469:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var460, var462, var469); /* Direct call opts#OptionBool#init on <var460:OptionBool>*/
}
self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_group_c_files].val = var460; /* _opt_group_c_files on <self:ToolContext exact> */
var471 = NEW_opts__OptionString(&type_opts__OptionString);
if (likely(varonce472!=NULL)) {
var473 = varonce472;
} else {
var474 = "Directory used to generate temporary files";
var475 = standard___standard__NativeString___to_s_with_length(var474, 42l);
var473 = var475;
varonce472 = var473;
}
if (likely(varonce476!=NULL)) {
var477 = varonce476;
} else {
var478 = "--compile-dir";
var479 = standard___standard__NativeString___to_s_with_length(var478, 13l);
var477 = var479;
varonce476 = var477;
}
var480 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var480 = array_instance Array[String] */
var481 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var481)->values[0] = (val*) var477;
{
((void(*)(val* self, val* p0, long p1))(var480->class->vft[COLOR_standard__array__Array__with_native]))(var480, var481, 1l); /* with_native on <var480:Array[String]>*/
}
}
{
opts___opts__OptionString___init(var471, var473, var480); /* Direct call opts#OptionString#init on <var471:OptionString>*/
}
self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_compile_dir].val = var471; /* _opt_compile_dir on <self:ToolContext exact> */
var482 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce483!=NULL)) {
var484 = varonce483;
} else {
var485 = "Generate contracts in the C code against bugs in the compiler";
var486 = standard___standard__NativeString___to_s_with_length(var485, 61l);
var484 = var486;
varonce483 = var484;
}
if (likely(varonce487!=NULL)) {
var488 = varonce487;
} else {
var489 = "--hardening";
var490 = standard___standard__NativeString___to_s_with_length(var489, 11l);
var488 = var490;
varonce487 = var488;
}
var491 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var491 = array_instance Array[String] */
var492 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var492)->values[0] = (val*) var488;
{
((void(*)(val* self, val* p0, long p1))(var491->class->vft[COLOR_standard__array__Array__with_native]))(var491, var492, 1l); /* with_native on <var491:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var482, var484, var491); /* Direct call opts#OptionBool#init on <var482:OptionBool>*/
}
self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_hardening].val = var482; /* _opt_hardening on <self:ToolContext exact> */
var493 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce494!=NULL)) {
var495 = varonce494;
} else {
var496 = "Disable type tests of covariant parameters (dangerous)";
var497 = standard___standard__NativeString___to_s_with_length(var496, 54l);
var495 = var497;
varonce494 = var495;
}
if (likely(varonce498!=NULL)) {
var499 = varonce498;
} else {
var500 = "--no-check-covariance";
var501 = standard___standard__NativeString___to_s_with_length(var500, 21l);
var499 = var501;
varonce498 = var499;
}
var502 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var502 = array_instance Array[String] */
var503 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var503)->values[0] = (val*) var499;
{
((void(*)(val* self, val* p0, long p1))(var502->class->vft[COLOR_standard__array__Array__with_native]))(var502, var503, 1l); /* with_native on <var502:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var493, var495, var502); /* Direct call opts#OptionBool#init on <var493:OptionBool>*/
}
self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_covariance].val = var493; /* _opt_no_check_covariance on <self:ToolContext exact> */
var504 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce505!=NULL)) {
var506 = varonce505;
} else {
var507 = "Disable isset tests before each attribute access (dangerous)";
var508 = standard___standard__NativeString___to_s_with_length(var507, 60l);
var506 = var508;
varonce505 = var506;
}
if (likely(varonce509!=NULL)) {
var510 = varonce509;
} else {
var511 = "--no-check-attr-isset";
var512 = standard___standard__NativeString___to_s_with_length(var511, 21l);
var510 = var512;
varonce509 = var510;
}
var513 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var513 = array_instance Array[String] */
var514 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var514)->values[0] = (val*) var510;
{
((void(*)(val* self, val* p0, long p1))(var513->class->vft[COLOR_standard__array__Array__with_native]))(var513, var514, 1l); /* with_native on <var513:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var504, var506, var513); /* Direct call opts#OptionBool#init on <var504:OptionBool>*/
}
self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_attr_isset].val = var504; /* _opt_no_check_attr_isset on <self:ToolContext exact> */
var515 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce516!=NULL)) {
var517 = varonce516;
} else {
var518 = "Disable the evaluation of explicit \'assert\' and \'as\' (dangerous)";
var519 = standard___standard__NativeString___to_s_with_length(var518, 64l);
var517 = var519;
varonce516 = var517;
}
if (likely(varonce520!=NULL)) {
var521 = varonce520;
} else {
var522 = "--no-check-assert";
var523 = standard___standard__NativeString___to_s_with_length(var522, 17l);
var521 = var523;
varonce520 = var521;
}
var524 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var524 = array_instance Array[String] */
var525 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var525)->values[0] = (val*) var521;
{
((void(*)(val* self, val* p0, long p1))(var524->class->vft[COLOR_standard__array__Array__with_native]))(var524, var525, 1l); /* with_native on <var524:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var515, var517, var524); /* Direct call opts#OptionBool#init on <var515:OptionBool>*/
}
self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_assert].val = var515; /* _opt_no_check_assert on <self:ToolContext exact> */
var526 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce527!=NULL)) {
var528 = varonce527;
} else {
var529 = "Disable implicit casts on unsafe expression usage (dangerous)";
var530 = standard___standard__NativeString___to_s_with_length(var529, 61l);
var528 = var530;
varonce527 = var528;
}
if (likely(varonce531!=NULL)) {
var532 = varonce531;
} else {
var533 = "--no-check-autocast";
var534 = standard___standard__NativeString___to_s_with_length(var533, 19l);
var532 = var534;
varonce531 = var532;
}
var535 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var535 = array_instance Array[String] */
var536 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var536)->values[0] = (val*) var532;
{
((void(*)(val* self, val* p0, long p1))(var535->class->vft[COLOR_standard__array__Array__with_native]))(var535, var536, 1l); /* with_native on <var535:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var526, var528, var535); /* Direct call opts#OptionBool#init on <var526:OptionBool>*/
}
self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_autocast].val = var526; /* _opt_no_check_autocast on <self:ToolContext exact> */
var537 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce538!=NULL)) {
var539 = varonce538;
} else {
var540 = "Disable tests of null receiver (dangerous)";
var541 = standard___standard__NativeString___to_s_with_length(var540, 42l);
var539 = var541;
varonce538 = var539;
}
if (likely(varonce542!=NULL)) {
var543 = varonce542;
} else {
var544 = "--no-check-null";
var545 = standard___standard__NativeString___to_s_with_length(var544, 15l);
var543 = var545;
varonce542 = var543;
}
var546 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var546 = array_instance Array[String] */
var547 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var547)->values[0] = (val*) var543;
{
((void(*)(val* self, val* p0, long p1))(var546->class->vft[COLOR_standard__array__Array__with_native]))(var546, var547, 1l); /* with_native on <var546:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var537, var539, var546); /* Direct call opts#OptionBool#init on <var537:OptionBool>*/
}
self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_null].val = var537; /* _opt_no_check_null on <self:ToolContext exact> */
var548 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce549!=NULL)) {
var550 = varonce549;
} else {
var551 = "Disable all tests (dangerous)";
var552 = standard___standard__NativeString___to_s_with_length(var551, 29l);
var550 = var552;
varonce549 = var550;
}
if (likely(varonce553!=NULL)) {
var554 = varonce553;
} else {
var555 = "--no-check-all";
var556 = standard___standard__NativeString___to_s_with_length(var555, 14l);
var554 = var556;
varonce553 = var554;
}
var557 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var557 = array_instance Array[String] */
var558 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var558)->values[0] = (val*) var554;
{
((void(*)(val* self, val* p0, long p1))(var557->class->vft[COLOR_standard__array__Array__with_native]))(var557, var558, 1l); /* with_native on <var557:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var548, var550, var557); /* Direct call opts#OptionBool#init on <var548:OptionBool>*/
}
self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_all].val = var548; /* _opt_no_check_all on <self:ToolContext exact> */
var559 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce560!=NULL)) {
var561 = varonce560;
} else {
var562 = "Enable static and dynamic count of all type tests";
var563 = standard___standard__NativeString___to_s_with_length(var562, 49l);
var561 = var563;
varonce560 = var561;
}
if (likely(varonce564!=NULL)) {
var565 = varonce564;
} else {
var566 = "--typing-test-metrics";
var567 = standard___standard__NativeString___to_s_with_length(var566, 21l);
var565 = var567;
varonce564 = var565;
}
var568 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var568 = array_instance Array[String] */
var569 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var569)->values[0] = (val*) var565;
{
((void(*)(val* self, val* p0, long p1))(var568->class->vft[COLOR_standard__array__Array__with_native]))(var568, var569, 1l); /* with_native on <var568:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var559, var561, var568); /* Direct call opts#OptionBool#init on <var559:OptionBool>*/
}
self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics].val = var559; /* _opt_typing_test_metrics on <self:ToolContext exact> */
var570 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce571!=NULL)) {
var572 = varonce571;
} else {
var573 = "Enable static and dynamic count of all method invocations";
var574 = standard___standard__NativeString___to_s_with_length(var573, 57l);
var572 = var574;
varonce571 = var572;
}
if (likely(varonce575!=NULL)) {
var576 = varonce575;
} else {
var577 = "--invocation-metrics";
var578 = standard___standard__NativeString___to_s_with_length(var577, 20l);
var576 = var578;
varonce575 = var576;
}
var579 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var579 = array_instance Array[String] */
var580 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var580)->values[0] = (val*) var576;
{
((void(*)(val* self, val* p0, long p1))(var579->class->vft[COLOR_standard__array__Array__with_native]))(var579, var580, 1l); /* with_native on <var579:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var570, var572, var579); /* Direct call opts#OptionBool#init on <var570:OptionBool>*/
}
self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_invocation_metrics].val = var570; /* _opt_invocation_metrics on <self:ToolContext exact> */
var581 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce582!=NULL)) {
var583 = varonce582;
} else {
var584 = "Enable static and dynamic count of isset checks before attributes access";
var585 = standard___standard__NativeString___to_s_with_length(var584, 72l);
var583 = var585;
varonce582 = var583;
}
if (likely(varonce586!=NULL)) {
var587 = varonce586;
} else {
var588 = "--isset-checks-metrics";
var589 = standard___standard__NativeString___to_s_with_length(var588, 22l);
var587 = var589;
varonce586 = var587;
}
var590 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var590 = array_instance Array[String] */
var591 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var591)->values[0] = (val*) var587;
{
((void(*)(val* self, val* p0, long p1))(var590->class->vft[COLOR_standard__array__Array__with_native]))(var590, var591, 1l); /* with_native on <var590:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var581, var583, var590); /* Direct call opts#OptionBool#init on <var581:OptionBool>*/
}
self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_isset_checks_metrics].val = var581; /* _opt_isset_checks_metrics on <self:ToolContext exact> */
var592 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce593!=NULL)) {
var594 = varonce593;
} else {
var595 = "Disable the generation of stack traces";
var596 = standard___standard__NativeString___to_s_with_length(var595, 38l);
var594 = var596;
varonce593 = var594;
}
if (likely(varonce597!=NULL)) {
var598 = varonce597;
} else {
var599 = "--no-stacktrace";
var600 = standard___standard__NativeString___to_s_with_length(var599, 15l);
var598 = var600;
varonce597 = var598;
}
var601 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var601 = array_instance Array[String] */
var602 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var602)->values[0] = (val*) var598;
{
((void(*)(val* self, val* p0, long p1))(var601->class->vft[COLOR_standard__array__Array__with_native]))(var601, var602, 1l); /* with_native on <var601:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var592, var594, var601); /* Direct call opts#OptionBool#init on <var592:OptionBool>*/
}
self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_stacktrace].val = var592; /* _opt_no_stacktrace on <self:ToolContext exact> */
var603 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (likely(varonce604!=NULL)) {
var605 = varonce604;
} else {
var606 = "Disable a advanced gcc directives for optimization";
var607 = standard___standard__NativeString___to_s_with_length(var606, 50l);
var605 = var607;
varonce604 = var605;
}
if (likely(varonce608!=NULL)) {
var609 = varonce608;
} else {
var610 = "--no-gcc-directive";
var611 = standard___standard__NativeString___to_s_with_length(var610, 18l);
var609 = var611;
varonce608 = var609;
}
var612 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var612 = array_instance Array[String] */
var613 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var613)->values[0] = (val*) var609;
{
((void(*)(val* self, val* p0, long p1))(var612->class->vft[COLOR_standard__array__Array__with_native]))(var612, var613, 1l); /* with_native on <var612:Array[String]>*/
}
}
{
opts___opts__OptionArray___init(var603, var605, var612); /* Direct call opts#OptionArray#init on <var603:OptionArray>*/
}
self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_gcc_directive].val = var603; /* _opt_no_gcc_directive on <self:ToolContext exact> */
var614 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce615!=NULL)) {
var616 = varonce615;
} else {
var617 = "Compile in release mode and finalize application";
var618 = standard___standard__NativeString___to_s_with_length(var617, 48l);
var616 = var618;
varonce615 = var616;
}
if (likely(varonce619!=NULL)) {
var620 = varonce619;
} else {
var621 = "--release";
var622 = standard___standard__NativeString___to_s_with_length(var621, 9l);
var620 = var622;
varonce619 = var620;
}
var623 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var623 = array_instance Array[String] */
var624 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var624)->values[0] = (val*) var620;
{
((void(*)(val* self, val* p0, long p1))(var623->class->vft[COLOR_standard__array__Array__with_native]))(var623, var624, 1l); /* with_native on <var623:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var614, var616, var623); /* Direct call opts#OptionBool#init on <var614:OptionBool>*/
}
self->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_release].val = var614; /* _opt_release on <self:ToolContext exact> */
var625 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce626!=NULL)) {
var627 = varonce626;
} else {
var628 = "Use separate compilation";
var629 = standard___standard__NativeString___to_s_with_length(var628, 24l);
var627 = var629;
varonce626 = var627;
}
if (likely(varonce630!=NULL)) {
var631 = varonce630;
} else {
var632 = "--separate";
var633 = standard___standard__NativeString___to_s_with_length(var632, 10l);
var631 = var633;
varonce630 = var631;
}
var634 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var634 = array_instance Array[String] */
var635 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var635)->values[0] = (val*) var631;
{
((void(*)(val* self, val* p0, long p1))(var634->class->vft[COLOR_standard__array__Array__with_native]))(var634, var635, 1l); /* with_native on <var634:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var625, var627, var634); /* Direct call opts#OptionBool#init on <var625:OptionBool>*/
}
self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_separate].val = var625; /* _opt_separate on <self:ToolContext exact> */
var636 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce637!=NULL)) {
var638 = varonce637;
} else {
var639 = "Do not inline call to intern methods";
var640 = standard___standard__NativeString___to_s_with_length(var639, 36l);
var638 = var640;
varonce637 = var638;
}
if (likely(varonce641!=NULL)) {
var642 = varonce641;
} else {
var643 = "--no-inline-intern";
var644 = standard___standard__NativeString___to_s_with_length(var643, 18l);
var642 = var644;
varonce641 = var642;
}
var645 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var645 = array_instance Array[String] */
var646 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var646)->values[0] = (val*) var642;
{
((void(*)(val* self, val* p0, long p1))(var645->class->vft[COLOR_standard__array__Array__with_native]))(var645, var646, 1l); /* with_native on <var645:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var636, var638, var645); /* Direct call opts#OptionBool#init on <var636:OptionBool>*/
}
self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_no_inline_intern].val = var636; /* _opt_no_inline_intern on <self:ToolContext exact> */
var647 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce648!=NULL)) {
var649 = varonce648;
} else {
var650 = "Put primitive attibutes in a box instead of an union";
var651 = standard___standard__NativeString___to_s_with_length(var650, 52l);
var649 = var651;
varonce648 = var649;
}
if (likely(varonce652!=NULL)) {
var653 = varonce652;
} else {
var654 = "--no-union-attribute";
var655 = standard___standard__NativeString___to_s_with_length(var654, 20l);
var653 = var655;
varonce652 = var653;
}
var656 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var656 = array_instance Array[String] */
var657 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var657)->values[0] = (val*) var653;
{
((void(*)(val* self, val* p0, long p1))(var656->class->vft[COLOR_standard__array__Array__with_native]))(var656, var657, 1l); /* with_native on <var656:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var647, var649, var656); /* Direct call opts#OptionBool#init on <var647:OptionBool>*/
}
self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_no_union_attribute].val = var647; /* _opt_no_union_attribute on <self:ToolContext exact> */
var658 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce659!=NULL)) {
var660 = varonce659;
} else {
var661 = "Always call == in a polymorphic way";
var662 = standard___standard__NativeString___to_s_with_length(var661, 35l);
var660 = var662;
varonce659 = var660;
}
if (likely(varonce663!=NULL)) {
var664 = varonce663;
} else {
var665 = "--no-shortcut-equal";
var666 = standard___standard__NativeString___to_s_with_length(var665, 19l);
var664 = var666;
varonce663 = var664;
}
var667 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var667 = array_instance Array[String] */
var668 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var668)->values[0] = (val*) var664;
{
((void(*)(val* self, val* p0, long p1))(var667->class->vft[COLOR_standard__array__Array__with_native]))(var667, var668, 1l); /* with_native on <var667:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var658, var660, var667); /* Direct call opts#OptionBool#init on <var658:OptionBool>*/
}
self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_no_shortcut_equate].val = var658; /* _opt_no_shortcut_equate on <self:ToolContext exact> */
var669 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce670!=NULL)) {
var671 = varonce670;
} else {
var672 = "Use only boxes for primitive types";
var673 = standard___standard__NativeString___to_s_with_length(var672, 34l);
var671 = var673;
varonce670 = var671;
}
if (likely(varonce674!=NULL)) {
var675 = varonce674;
} else {
var676 = "--no-tag-primitives";
var677 = standard___standard__NativeString___to_s_with_length(var676, 19l);
var675 = var677;
varonce674 = var675;
}
var678 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var678 = array_instance Array[String] */
var679 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var679)->values[0] = (val*) var675;
{
((void(*)(val* self, val* p0, long p1))(var678->class->vft[COLOR_standard__array__Array__with_native]))(var678, var679, 1l); /* with_native on <var678:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var669, var671, var678); /* Direct call opts#OptionBool#init on <var669:OptionBool>*/
}
self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_no_tag_primitives].val = var669; /* _opt_no_tag_primitives on <self:ToolContext exact> */
var680 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce681!=NULL)) {
var682 = varonce681;
} else {
var683 = "Store colors as symbols (link-boost)";
var684 = standard___standard__NativeString___to_s_with_length(var683, 36l);
var682 = var684;
varonce681 = var682;
}
if (likely(varonce685!=NULL)) {
var686 = varonce685;
} else {
var687 = "--colors-are-symbols";
var688 = standard___standard__NativeString___to_s_with_length(var687, 20l);
var686 = var688;
varonce685 = var686;
}
var689 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var689 = array_instance Array[String] */
var690 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var690)->values[0] = (val*) var686;
{
((void(*)(val* self, val* p0, long p1))(var689->class->vft[COLOR_standard__array__Array__with_native]))(var689, var690, 1l); /* with_native on <var689:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var680, var682, var689); /* Direct call opts#OptionBool#init on <var680:OptionBool>*/
}
self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_colors_are_symbols].val = var680; /* _opt_colors_are_symbols on <self:ToolContext exact> */
var691 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce692!=NULL)) {
var693 = varonce692;
} else {
var694 = "Use an indirection when calling";
var695 = standard___standard__NativeString___to_s_with_length(var694, 31l);
var693 = var695;
varonce692 = var693;
}
if (likely(varonce696!=NULL)) {
var697 = varonce696;
} else {
var698 = "--trampoline-call";
var699 = standard___standard__NativeString___to_s_with_length(var698, 17l);
var697 = var699;
varonce696 = var697;
}
var700 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var700 = array_instance Array[String] */
var701 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var701)->values[0] = (val*) var697;
{
((void(*)(val* self, val* p0, long p1))(var700->class->vft[COLOR_standard__array__Array__with_native]))(var700, var701, 1l); /* with_native on <var700:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var691, var693, var700); /* Direct call opts#OptionBool#init on <var691:OptionBool>*/
}
self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_trampoline_call].val = var691; /* _opt_trampoline_call on <self:ToolContext exact> */
var702 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce703!=NULL)) {
var704 = varonce703;
} else {
var705 = "Guard VFT calls with a direct call";
var706 = standard___standard__NativeString___to_s_with_length(var705, 34l);
var704 = var706;
varonce703 = var704;
}
if (likely(varonce707!=NULL)) {
var708 = varonce707;
} else {
var709 = "--guard-call";
var710 = standard___standard__NativeString___to_s_with_length(var709, 12l);
var708 = var710;
varonce707 = var708;
}
var711 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var711 = array_instance Array[String] */
var712 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var712)->values[0] = (val*) var708;
{
((void(*)(val* self, val* p0, long p1))(var711->class->vft[COLOR_standard__array__Array__with_native]))(var711, var712, 1l); /* with_native on <var711:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var702, var704, var711); /* Direct call opts#OptionBool#init on <var702:OptionBool>*/
}
self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_guard_call].val = var702; /* _opt_guard_call on <self:ToolContext exact> */
var713 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce714!=NULL)) {
var715 = varonce714;
} else {
var716 = "Replace monomorph trampoline with direct call (link-boost)";
var717 = standard___standard__NativeString___to_s_with_length(var716, 58l);
var715 = var717;
varonce714 = var715;
}
if (likely(varonce718!=NULL)) {
var719 = varonce718;
} else {
var720 = "--substitute-monomorph";
var721 = standard___standard__NativeString___to_s_with_length(var720, 22l);
var719 = var721;
varonce718 = var719;
}
var722 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var722 = array_instance Array[String] */
var723 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var723)->values[0] = (val*) var719;
{
((void(*)(val* self, val* p0, long p1))(var722->class->vft[COLOR_standard__array__Array__with_native]))(var722, var723, 1l); /* with_native on <var722:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var713, var715, var722); /* Direct call opts#OptionBool#init on <var713:OptionBool>*/
}
self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_substitute_monomorph].val = var713; /* _opt_substitute_monomorph on <self:ToolContext exact> */
var724 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce725!=NULL)) {
var726 = varonce725;
} else {
var727 = "Enable all link-boost optimizations";
var728 = standard___standard__NativeString___to_s_with_length(var727, 35l);
var726 = var728;
varonce725 = var726;
}
if (likely(varonce729!=NULL)) {
var730 = varonce729;
} else {
var731 = "--link-boost";
var732 = standard___standard__NativeString___to_s_with_length(var731, 12l);
var730 = var732;
varonce729 = var730;
}
var733 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var733 = array_instance Array[String] */
var734 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var734)->values[0] = (val*) var730;
{
((void(*)(val* self, val* p0, long p1))(var733->class->vft[COLOR_standard__array__Array__with_native]))(var733, var734, 1l); /* with_native on <var733:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var724, var726, var733); /* Direct call opts#OptionBool#init on <var724:OptionBool>*/
}
self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_link_boost].val = var724; /* _opt_link_boost on <self:ToolContext exact> */
var735 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce736!=NULL)) {
var737 = varonce736;
} else {
var738 = "Inline colors and ids (semi-global)";
var739 = standard___standard__NativeString___to_s_with_length(var738, 35l);
var737 = var739;
varonce736 = var737;
}
if (likely(varonce740!=NULL)) {
var741 = varonce740;
} else {
var742 = "--inline-coloring-numbers";
var743 = standard___standard__NativeString___to_s_with_length(var742, 25l);
var741 = var743;
varonce740 = var741;
}
var744 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var744 = array_instance Array[String] */
var745 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var745)->values[0] = (val*) var741;
{
((void(*)(val* self, val* p0, long p1))(var744->class->vft[COLOR_standard__array__Array__with_native]))(var744, var745, 1l); /* with_native on <var744:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var735, var737, var744); /* Direct call opts#OptionBool#init on <var735:OptionBool>*/
}
self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_inline_coloring_numbers].val = var735; /* _opt_inline_coloring_numbers on <self:ToolContext exact> */
var746 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce747!=NULL)) {
var748 = varonce747;
} else {
var749 = "Allow the separate compiler to inline some methods (semi-global)";
var750 = standard___standard__NativeString___to_s_with_length(var749, 64l);
var748 = var750;
varonce747 = var748;
}
if (likely(varonce751!=NULL)) {
var752 = varonce751;
} else {
var753 = "--inline-some-methods";
var754 = standard___standard__NativeString___to_s_with_length(var753, 21l);
var752 = var754;
varonce751 = var752;
}
var755 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var755 = array_instance Array[String] */
var756 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var756)->values[0] = (val*) var752;
{
((void(*)(val* self, val* p0, long p1))(var755->class->vft[COLOR_standard__array__Array__with_native]))(var755, var756, 1l); /* with_native on <var755:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var746, var748, var755); /* Direct call opts#OptionBool#init on <var746:OptionBool>*/
}
self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_inline_some_methods].val = var746; /* _opt_inline_some_methods on <self:ToolContext exact> */
var757 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce758!=NULL)) {
var759 = varonce758;
} else {
var760 = "Allow the separate compiler to direct call monomorph sites (semi-global)";
var761 = standard___standard__NativeString___to_s_with_length(var760, 72l);
var759 = var761;
varonce758 = var759;
}
if (likely(varonce762!=NULL)) {
var763 = varonce762;
} else {
var764 = "--direct-call-monomorph";
var765 = standard___standard__NativeString___to_s_with_length(var764, 23l);
var763 = var765;
varonce762 = var763;
}
var766 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var766 = array_instance Array[String] */
var767 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var767)->values[0] = (val*) var763;
{
((void(*)(val* self, val* p0, long p1))(var766->class->vft[COLOR_standard__array__Array__with_native]))(var766, var767, 1l); /* with_native on <var766:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var757, var759, var766); /* Direct call opts#OptionBool#init on <var757:OptionBool>*/
}
self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_direct_call_monomorph].val = var757; /* _opt_direct_call_monomorph on <self:ToolContext exact> */
var768 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce769!=NULL)) {
var770 = varonce769;
} else {
var771 = "Allow the separate compiler to direct call monomorph sites (semi-global)";
var772 = standard___standard__NativeString___to_s_with_length(var771, 72l);
var770 = var772;
varonce769 = var770;
}
if (likely(varonce773!=NULL)) {
var774 = varonce773;
} else {
var775 = "--direct-call-monomorph0";
var776 = standard___standard__NativeString___to_s_with_length(var775, 24l);
var774 = var776;
varonce773 = var774;
}
var777 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var777 = array_instance Array[String] */
var778 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var778)->values[0] = (val*) var774;
{
((void(*)(val* self, val* p0, long p1))(var777->class->vft[COLOR_standard__array__Array__with_native]))(var777, var778, 1l); /* with_native on <var777:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var768, var770, var777); /* Direct call opts#OptionBool#init on <var768:OptionBool>*/
}
self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_direct_call_monomorph0].val = var768; /* _opt_direct_call_monomorph0 on <self:ToolContext exact> */
var779 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce780!=NULL)) {
var781 = varonce780;
} else {
var782 = "Do not compile dead methods (semi-global)";
var783 = standard___standard__NativeString___to_s_with_length(var782, 41l);
var781 = var783;
varonce780 = var781;
}
if (likely(varonce784!=NULL)) {
var785 = varonce784;
} else {
var786 = "--skip-dead-methods";
var787 = standard___standard__NativeString___to_s_with_length(var786, 19l);
var785 = var787;
varonce784 = var785;
}
var788 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var788 = array_instance Array[String] */
var789 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var789)->values[0] = (val*) var785;
{
((void(*)(val* self, val* p0, long p1))(var788->class->vft[COLOR_standard__array__Array__with_native]))(var788, var789, 1l); /* with_native on <var788:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var779, var781, var788); /* Direct call opts#OptionBool#init on <var779:OptionBool>*/
}
self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_skip_dead_methods].val = var779; /* _opt_skip_dead_methods on <self:ToolContext exact> */
var790 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce791!=NULL)) {
var792 = varonce791;
} else {
var793 = "Enable all semi-global optimizations";
var794 = standard___standard__NativeString___to_s_with_length(var793, 36l);
var792 = var794;
varonce791 = var792;
}
if (likely(varonce795!=NULL)) {
var796 = varonce795;
} else {
var797 = "--semi-global";
var798 = standard___standard__NativeString___to_s_with_length(var797, 13l);
var796 = var798;
varonce795 = var796;
}
var799 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var799 = array_instance Array[String] */
var800 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var800)->values[0] = (val*) var796;
{
((void(*)(val* self, val* p0, long p1))(var799->class->vft[COLOR_standard__array__Array__with_native]))(var799, var800, 1l); /* with_native on <var799:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var790, var792, var799); /* Direct call opts#OptionBool#init on <var790:OptionBool>*/
}
self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_semi_global].val = var790; /* _opt_semi_global on <self:ToolContext exact> */
var801 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce802!=NULL)) {
var803 = varonce802;
} else {
var804 = "Force colorization of dead methods";
var805 = standard___standard__NativeString___to_s_with_length(var804, 34l);
var803 = var805;
varonce802 = var803;
}
if (likely(varonce806!=NULL)) {
var807 = varonce806;
} else {
var808 = "--colo-dead-methods";
var809 = standard___standard__NativeString___to_s_with_length(var808, 19l);
var807 = var809;
varonce806 = var807;
}
var810 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var810 = array_instance Array[String] */
var811 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var811)->values[0] = (val*) var807;
{
((void(*)(val* self, val* p0, long p1))(var810->class->vft[COLOR_standard__array__Array__with_native]))(var810, var811, 1l); /* with_native on <var810:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var801, var803, var810); /* Direct call opts#OptionBool#init on <var801:OptionBool>*/
}
self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_colo_dead_methods].val = var801; /* _opt_colo_dead_methods on <self:ToolContext exact> */
var812 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce813!=NULL)) {
var814 = varonce813;
} else {
var815 = "Enable static size measuring of tables used for vft, typing and resolution";
var816 = standard___standard__NativeString___to_s_with_length(var815, 74l);
var814 = var816;
varonce813 = var814;
}
if (likely(varonce817!=NULL)) {
var818 = varonce817;
} else {
var819 = "--tables-metrics";
var820 = standard___standard__NativeString___to_s_with_length(var819, 16l);
var818 = var820;
varonce817 = var818;
}
var821 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var821 = array_instance Array[String] */
var822 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var822)->values[0] = (val*) var818;
{
((void(*)(val* self, val* p0, long p1))(var821->class->vft[COLOR_standard__array__Array__with_native]))(var821, var822, 1l); /* with_native on <var821:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var812, var814, var821); /* Direct call opts#OptionBool#init on <var812:OptionBool>*/
}
self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_tables_metrics].val = var812; /* _opt_tables_metrics on <self:ToolContext exact> */
var823 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce824!=NULL)) {
var825 = varonce824;
} else {
var826 = "Build a poset of types to create more condensed tables.";
var827 = standard___standard__NativeString___to_s_with_length(var826, 55l);
var825 = var827;
varonce824 = var825;
}
if (likely(varonce828!=NULL)) {
var829 = varonce828;
} else {
var830 = "--type-poset";
var831 = standard___standard__NativeString___to_s_with_length(var830, 12l);
var829 = var831;
varonce828 = var829;
}
var832 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var832 = array_instance Array[String] */
var833 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var833)->values[0] = (val*) var829;
{
((void(*)(val* self, val* p0, long p1))(var832->class->vft[COLOR_standard__array__Array__with_native]))(var832, var833, 1l); /* with_native on <var832:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var823, var825, var832); /* Direct call opts#OptionBool#init on <var823:OptionBool>*/
}
self->attrs[COLOR_nit__separate_compiler__ToolContext___opt_type_poset].val = var823; /* _opt_type_poset on <self:ToolContext exact> */
var834 = NEW_nit__SeparateCompilerPhase(&type_nit__SeparateCompilerPhase);
{
((void(*)(val* self, val* p0))(var834->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var834, self); /* toolcontext= on <var834:SeparateCompilerPhase>*/
}
{
((void(*)(val* self, val* p0))(var834->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var834, ((val*)NULL)); /* depends= on <var834:SeparateCompilerPhase>*/
}
{
((void(*)(val* self))(var834->class->vft[COLOR_standard__kernel__Object__init]))(var834); /* init on <var834:SeparateCompilerPhase>*/
}
self->attrs[COLOR_nit__separate_compiler__ToolContext___separate_compiler_phase].val = var834; /* _separate_compiler_phase on <self:ToolContext exact> */
var835 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce836!=NULL)) {
var837 = varonce836;
} else {
var838 = "Erase generic types";
var839 = standard___standard__NativeString___to_s_with_length(var838, 19l);
var837 = var839;
varonce836 = var837;
}
if (likely(varonce840!=NULL)) {
var841 = varonce840;
} else {
var842 = "--erasure";
var843 = standard___standard__NativeString___to_s_with_length(var842, 9l);
var841 = var843;
varonce840 = var841;
}
var844 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var844 = array_instance Array[String] */
var845 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var845)->values[0] = (val*) var841;
{
((void(*)(val* self, val* p0, long p1))(var844->class->vft[COLOR_standard__array__Array__with_native]))(var844, var845, 1l); /* with_native on <var844:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var835, var837, var844); /* Direct call opts#OptionBool#init on <var835:OptionBool>*/
}
self->attrs[COLOR_nit__separate_erasure_compiler__ToolContext___opt_erasure].val = var835; /* _opt_erasure on <self:ToolContext exact> */
var846 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce847!=NULL)) {
var848 = varonce847;
} else {
var849 = "Activate RTA (implicit with --global and --separate)";
var850 = standard___standard__NativeString___to_s_with_length(var849, 52l);
var848 = var850;
varonce847 = var848;
}
if (likely(varonce851!=NULL)) {
var852 = varonce851;
} else {
var853 = "--rta";
var854 = standard___standard__NativeString___to_s_with_length(var853, 5l);
var852 = var854;
varonce851 = var852;
}
var855 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var855 = array_instance Array[String] */
var856 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var856)->values[0] = (val*) var852;
{
((void(*)(val* self, val* p0, long p1))(var855->class->vft[COLOR_standard__array__Array__with_native]))(var855, var856, 1l); /* with_native on <var855:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var846, var848, var855); /* Direct call opts#OptionBool#init on <var846:OptionBool>*/
}
self->attrs[COLOR_nit__separate_erasure_compiler__ToolContext___opt_rta].val = var846; /* _opt_rta on <self:ToolContext exact> */
var857 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (likely(varonce858!=NULL)) {
var859 = varonce858;
} else {
var860 = "Disable implicit casts on unsafe return with erasure-typing policy (dangerous)";
var861 = standard___standard__NativeString___to_s_with_length(var860, 78l);
var859 = var861;
varonce858 = var859;
}
if (likely(varonce862!=NULL)) {
var863 = varonce862;
} else {
var864 = "--no-check-erasure-cast";
var865 = standard___standard__NativeString___to_s_with_length(var864, 23l);
var863 = var865;
varonce862 = var863;
}
var866 = NEW_standard__Array(&type_standard__Array__standard__String);
{ /* var866 = array_instance Array[String] */
var867 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__standard__String);
((struct instance_standard__NativeArray*)var867)->values[0] = (val*) var863;
{
((void(*)(val* self, val* p0, long p1))(var866->class->vft[COLOR_standard__array__Array__with_native]))(var866, var867, 1l); /* with_native on <var866:Array[String]>*/
}
}
{
opts___opts__OptionBool___init(var857, var859, var866); /* Direct call opts#OptionBool#init on <var857:OptionBool>*/
}
self->attrs[COLOR_nit__separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast].val = var857; /* _opt_no_check_erasure_cast on <self:ToolContext exact> */
var868 = NEW_nit__ErasureCompilerPhase(&type_nit__ErasureCompilerPhase);
{
((void(*)(val* self, val* p0))(var868->class->vft[COLOR_nit__phase__Phase__toolcontext_61d]))(var868, self); /* toolcontext= on <var868:ErasureCompilerPhase>*/
}
{
((void(*)(val* self, val* p0))(var868->class->vft[COLOR_nit__phase__Phase__depends_61d]))(var868, ((val*)NULL)); /* depends= on <var868:ErasureCompilerPhase>*/
}
{
((void(*)(val* self))(var868->class->vft[COLOR_standard__kernel__Object__init]))(var868); /* init on <var868:ErasureCompilerPhase>*/
}
self->attrs[COLOR_nit__separate_erasure_compiler__ToolContext___erasure_compiler_phase].val = var868; /* _erasure_compiler_phase on <self:ToolContext exact> */
return self;
}
/* runtime class nit__BashCompletion */
const struct class class_nit__BashCompletion = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__BashCompletion___standard__kernel__Object__init, /* pointer to toolcontext:BashCompletion:toolcontext#BashCompletion#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to toolcontext:BashCompletion:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to toolcontext:BashCompletion:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to toolcontext:BashCompletion:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to toolcontext:BashCompletion:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to toolcontext:BashCompletion:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to toolcontext:BashCompletion:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to toolcontext:BashCompletion:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to toolcontext:BashCompletion:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to toolcontext:BashCompletion:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to toolcontext:BashCompletion:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to toolcontext:BashCompletion:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to toolcontext:BashCompletion:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to toolcontext:BashCompletion:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to toolcontext:BashCompletion:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to toolcontext:BashCompletion:light_c#Object#from_c_call_context */
(nitmethod_t)template___template__Template___is_writing, /* pointer to toolcontext:BashCompletion:template#Template#is_writing */
(nitmethod_t)template___template__Template___is_writing_61d, /* pointer to toolcontext:BashCompletion:template#Template#is_writing= */
(nitmethod_t)template___template__Template___force_render, /* pointer to toolcontext:BashCompletion:template#Template#force_render */
(nitmethod_t)template___template__Template___content, /* pointer to toolcontext:BashCompletion:template#Template#content */
(nitmethod_t)template___template__Template___render_done, /* pointer to toolcontext:BashCompletion:template#Template#render_done */
(nitmethod_t)template___template__Template___render_done_61d, /* pointer to toolcontext:BashCompletion:template#Template#render_done= */
(nitmethod_t)nit___nit__BashCompletion___template__Template__rendering, /* pointer to toolcontext:BashCompletion:toolcontext#BashCompletion#rendering */
(nitmethod_t)template___template__Template___freeze, /* pointer to toolcontext:BashCompletion:template#Template#freeze */
(nitmethod_t)template___template__Template___addn, /* pointer to toolcontext:BashCompletion:template#Template#addn */
(nitmethod_t)template___template__Template___is_frozen, /* pointer to toolcontext:BashCompletion:template#Template#is_frozen */
(nitmethod_t)template___template__Template___is_frozen_61d, /* pointer to toolcontext:BashCompletion:template#Template#is_frozen= */
(nitmethod_t)template___template__Template___add, /* pointer to toolcontext:BashCompletion:template#Template#add */
(nitmethod_t)nit___nit__BashCompletion___toolcontext_61d, /* pointer to toolcontext:BashCompletion:toolcontext#BashCompletion#toolcontext= */
(nitmethod_t)nit___nit__BashCompletion___toolcontext, /* pointer to toolcontext:BashCompletion:toolcontext#BashCompletion#toolcontext */
(nitmethod_t)nit___nit__BashCompletion___extract_options_names, /* pointer to toolcontext:BashCompletion:toolcontext#BashCompletion#extract_options_names */
(nitmethod_t)standard__file___Writable___write_to_file, /* pointer to toolcontext:BashCompletion:file#Writable#write_to_file */
(nitmethod_t)template___template__Template___standard__stream__Writable__write_to, /* pointer to toolcontext:BashCompletion:template#Template#write_to */
(nitmethod_t)standard___standard__Object___init, /* pointer to toolcontext:BashCompletion:kernel#Object#init */
}
};
/* allocate BashCompletion */
val* NEW_nit__BashCompletion(const struct type* type) {
val* self /* : BashCompletion */;
val* var /* : Array[Writable] */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__BashCompletion;
self->attrs[COLOR_template__Template___is_frozen].s = 0; /* _is_frozen on <self:BashCompletion exact> */
var = NEW_standard__Array(&type_standard__Array__standard__Writable);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[Writable]>*/
}
self->attrs[COLOR_template__Template___content].val = var; /* _content on <self:BashCompletion exact> */
self->attrs[COLOR_template__Template___render_done].s = 0; /* _render_done on <self:BashCompletion exact> */
self->attrs[COLOR_template__Template___is_writing].s = 0; /* _is_writing on <self:BashCompletion exact> */
return self;
}
/* runtime class opts__Option */
/* allocate Option */
val* NEW_opts__Option(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Option is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class opts__OptionText */
/* allocate OptionText */
val* NEW_opts__OptionText(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "OptionText is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class opts__OptionBool */
const struct class class_opts__OptionBool = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to opts:OptionBool:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to opts:OptionBool:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to opts:OptionBool:kernel#Object#sys */
(nitmethod_t)opts___opts__Option___standard__string__Object__to_s, /* pointer to opts:OptionBool:opts#Option#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to opts:OptionBool:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to opts:OptionBool:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to opts:OptionBool:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to opts:OptionBool:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to opts:OptionBool:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to opts:OptionBool:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to opts:OptionBool:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to opts:OptionBool:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to opts:OptionBool:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to opts:OptionBool:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to opts:OptionBool:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to opts:OptionBool:light_c#Object#from_c_call_context */
(nitmethod_t)opts___opts__Option___value, /* pointer to opts:OptionBool:opts#Option#value */
(nitmethod_t)opts___opts__Option___pretty, /* pointer to opts:OptionBool:opts#Option#pretty */
(nitmethod_t)opts___opts__Option___init, /* pointer to opts:OptionBool:opts#Option#init */
(nitmethod_t)opts___opts__Option___value_61d, /* pointer to opts:OptionBool:opts#Option#value= */
(nitmethod_t)opts___opts__Option___names, /* pointer to opts:OptionBool:opts#Option#names */
(nitmethod_t)opts___opts__Option___helptext, /* pointer to opts:OptionBool:opts#Option#helptext */
(nitmethod_t)opts___opts__Option___init_opt, /* pointer to opts:OptionBool:opts#Option#init_opt */
(nitmethod_t)opts___opts__Option___hidden_61d, /* pointer to opts:OptionBool:opts#Option#hidden= */
(nitmethod_t)opts___opts__Option___names_61d, /* pointer to opts:OptionBool:opts#Option#names= */
(nitmethod_t)opts___opts__Option___helptext_61d, /* pointer to opts:OptionBool:opts#Option#helptext= */
(nitmethod_t)opts___opts__Option___default_value_61d, /* pointer to opts:OptionBool:opts#Option#default_value= */
(nitmethod_t)opts___opts__Option___errors, /* pointer to opts:OptionBool:opts#Option#errors */
(nitmethod_t)opts___opts__OptionBool___Option__read_param, /* pointer to opts:OptionBool:opts#OptionBool#read_param */
(nitmethod_t)opts___opts__Option___mandatory, /* pointer to opts:OptionBool:opts#Option#mandatory */
(nitmethod_t)opts___opts__Option___read, /* pointer to opts:OptionBool:opts#Option#read */
(nitmethod_t)opts___opts__Option___hidden, /* pointer to opts:OptionBool:opts#Option#hidden */
(nitmethod_t)opts___opts__Option___read_61d, /* pointer to opts:OptionBool:opts#Option#read= */
(nitmethod_t)opts___opts__OptionBool___init, /* pointer to opts:OptionBool:opts#OptionBool#init */
(nitmethod_t)opts___opts__Option___read_param, /* pointer to opts:OptionBool:opts#Option#read_param */
}
};
/* allocate OptionBool */
val* NEW_opts__OptionBool(const struct type* type) {
val* self /* : OptionBool */;
val* var /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionBool;
var = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[String]>*/
}
self->attrs[COLOR_opts__Option___errors].val = var; /* _errors on <self:OptionBool exact> */
self->attrs[COLOR_opts__Option___mandatory].s = 0; /* _mandatory on <self:OptionBool exact> */
self->attrs[COLOR_opts__Option___hidden].s = 0; /* _hidden on <self:OptionBool exact> */
self->attrs[COLOR_opts__Option___read].s = 0; /* _read on <self:OptionBool exact> */
return self;
}
/* runtime class opts__OptionCount */
const struct class class_opts__OptionCount = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to opts:OptionCount:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to opts:OptionCount:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to opts:OptionCount:kernel#Object#sys */
(nitmethod_t)opts___opts__Option___standard__string__Object__to_s, /* pointer to opts:OptionCount:opts#Option#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to opts:OptionCount:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to opts:OptionCount:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to opts:OptionCount:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to opts:OptionCount:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to opts:OptionCount:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to opts:OptionCount:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to opts:OptionCount:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to opts:OptionCount:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to opts:OptionCount:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to opts:OptionCount:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to opts:OptionCount:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to opts:OptionCount:light_c#Object#from_c_call_context */
(nitmethod_t)opts___opts__Option___value, /* pointer to opts:OptionCount:opts#Option#value */
(nitmethod_t)opts___opts__Option___pretty, /* pointer to opts:OptionCount:opts#Option#pretty */
(nitmethod_t)opts___opts__Option___init, /* pointer to opts:OptionCount:opts#Option#init */
(nitmethod_t)opts___opts__Option___value_61d, /* pointer to opts:OptionCount:opts#Option#value= */
(nitmethod_t)opts___opts__Option___names, /* pointer to opts:OptionCount:opts#Option#names */
(nitmethod_t)opts___opts__Option___helptext, /* pointer to opts:OptionCount:opts#Option#helptext */
(nitmethod_t)opts___opts__Option___init_opt, /* pointer to opts:OptionCount:opts#Option#init_opt */
(nitmethod_t)opts___opts__Option___hidden_61d, /* pointer to opts:OptionCount:opts#Option#hidden= */
(nitmethod_t)opts___opts__Option___names_61d, /* pointer to opts:OptionCount:opts#Option#names= */
(nitmethod_t)opts___opts__Option___helptext_61d, /* pointer to opts:OptionCount:opts#Option#helptext= */
(nitmethod_t)opts___opts__Option___default_value_61d, /* pointer to opts:OptionCount:opts#Option#default_value= */
(nitmethod_t)opts___opts__Option___errors, /* pointer to opts:OptionCount:opts#Option#errors */
(nitmethod_t)opts___opts__OptionCount___Option__read_param, /* pointer to opts:OptionCount:opts#OptionCount#read_param */
(nitmethod_t)opts___opts__Option___mandatory, /* pointer to opts:OptionCount:opts#Option#mandatory */
(nitmethod_t)opts___opts__Option___read, /* pointer to opts:OptionCount:opts#Option#read */
(nitmethod_t)opts___opts__Option___hidden, /* pointer to opts:OptionCount:opts#Option#hidden */
(nitmethod_t)opts___opts__Option___read_61d, /* pointer to opts:OptionCount:opts#Option#read= */
(nitmethod_t)opts___opts__OptionCount___init, /* pointer to opts:OptionCount:opts#OptionCount#init */
(nitmethod_t)opts___opts__Option___read_param, /* pointer to opts:OptionCount:opts#Option#read_param */
}
};
/* allocate OptionCount */
val* NEW_opts__OptionCount(const struct type* type) {
val* self /* : OptionCount */;
val* var /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionCount;
var = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[String]>*/
}
self->attrs[COLOR_opts__Option___errors].val = var; /* _errors on <self:OptionCount exact> */
self->attrs[COLOR_opts__Option___mandatory].s = 0; /* _mandatory on <self:OptionCount exact> */
self->attrs[COLOR_opts__Option___hidden].s = 0; /* _hidden on <self:OptionCount exact> */
self->attrs[COLOR_opts__Option___read].s = 0; /* _read on <self:OptionCount exact> */
return self;
}
/* runtime class opts__OptionParameter */
/* allocate OptionParameter */
val* NEW_opts__OptionParameter(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "OptionParameter is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class opts__OptionString */
const struct class class_opts__OptionString = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to opts:OptionString:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to opts:OptionString:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to opts:OptionString:kernel#Object#sys */
(nitmethod_t)opts___opts__Option___standard__string__Object__to_s, /* pointer to opts:OptionString:opts#Option#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to opts:OptionString:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to opts:OptionString:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to opts:OptionString:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to opts:OptionString:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to opts:OptionString:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to opts:OptionString:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to opts:OptionString:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to opts:OptionString:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to opts:OptionString:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to opts:OptionString:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to opts:OptionString:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to opts:OptionString:light_c#Object#from_c_call_context */
(nitmethod_t)opts___opts__Option___value, /* pointer to opts:OptionString:opts#Option#value */
(nitmethod_t)opts___opts__Option___pretty, /* pointer to opts:OptionString:opts#Option#pretty */
(nitmethod_t)opts___opts__Option___init, /* pointer to opts:OptionString:opts#Option#init */
(nitmethod_t)opts___opts__Option___value_61d, /* pointer to opts:OptionString:opts#Option#value= */
(nitmethod_t)opts___opts__Option___names, /* pointer to opts:OptionString:opts#Option#names */
(nitmethod_t)opts___opts__Option___helptext, /* pointer to opts:OptionString:opts#Option#helptext */
(nitmethod_t)opts___opts__Option___init_opt, /* pointer to opts:OptionString:opts#Option#init_opt */
(nitmethod_t)opts___opts__Option___hidden_61d, /* pointer to opts:OptionString:opts#Option#hidden= */
(nitmethod_t)opts___opts__Option___names_61d, /* pointer to opts:OptionString:opts#Option#names= */
(nitmethod_t)opts___opts__Option___helptext_61d, /* pointer to opts:OptionString:opts#Option#helptext= */
(nitmethod_t)opts___opts__Option___default_value_61d, /* pointer to opts:OptionString:opts#Option#default_value= */
(nitmethod_t)opts___opts__Option___errors, /* pointer to opts:OptionString:opts#Option#errors */
(nitmethod_t)opts___opts__OptionParameter___Option__read_param, /* pointer to opts:OptionString:opts#OptionParameter#read_param */
(nitmethod_t)opts___opts__Option___mandatory, /* pointer to opts:OptionString:opts#Option#mandatory */
(nitmethod_t)opts___opts__Option___read, /* pointer to opts:OptionString:opts#Option#read */
(nitmethod_t)opts___opts__Option___hidden, /* pointer to opts:OptionString:opts#Option#hidden */
(nitmethod_t)opts___opts__Option___read_61d, /* pointer to opts:OptionString:opts#Option#read= */
(nitmethod_t)opts___opts__OptionString___OptionParameter__convert, /* pointer to opts:OptionString:opts#OptionString#convert */
(nitmethod_t)opts___opts__OptionParameter___parameter_mandatory, /* pointer to opts:OptionString:opts#OptionParameter#parameter_mandatory */
(nitmethod_t)opts___opts__Option___read_param, /* pointer to opts:OptionString:opts#Option#read_param */
(nitmethod_t)opts___opts__OptionString___init, /* pointer to opts:OptionString:opts#OptionString#init */
}
};
/* allocate OptionString */
val* NEW_opts__OptionString(const struct type* type) {
val* self /* : OptionString */;
val* var /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionString;
var = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[String]>*/
}
self->attrs[COLOR_opts__Option___errors].val = var; /* _errors on <self:OptionString exact> */
self->attrs[COLOR_opts__Option___mandatory].s = 0; /* _mandatory on <self:OptionString exact> */
self->attrs[COLOR_opts__Option___hidden].s = 0; /* _hidden on <self:OptionString exact> */
self->attrs[COLOR_opts__Option___read].s = 0; /* _read on <self:OptionString exact> */
self->attrs[COLOR_opts__OptionParameter___parameter_mandatory].s = 1; /* _parameter_mandatory on <self:OptionString exact> */
return self;
}
/* runtime class opts__OptionEnum */
/* allocate OptionEnum */
val* NEW_opts__OptionEnum(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "OptionEnum is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class opts__OptionInt */
const struct class class_opts__OptionInt = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to opts:OptionInt:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to opts:OptionInt:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to opts:OptionInt:kernel#Object#sys */
(nitmethod_t)opts___opts__Option___standard__string__Object__to_s, /* pointer to opts:OptionInt:opts#Option#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to opts:OptionInt:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to opts:OptionInt:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to opts:OptionInt:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to opts:OptionInt:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to opts:OptionInt:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to opts:OptionInt:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to opts:OptionInt:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to opts:OptionInt:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to opts:OptionInt:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to opts:OptionInt:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to opts:OptionInt:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to opts:OptionInt:light_c#Object#from_c_call_context */
(nitmethod_t)opts___opts__Option___value, /* pointer to opts:OptionInt:opts#Option#value */
(nitmethod_t)opts___opts__Option___pretty, /* pointer to opts:OptionInt:opts#Option#pretty */
(nitmethod_t)opts___opts__Option___init, /* pointer to opts:OptionInt:opts#Option#init */
(nitmethod_t)opts___opts__Option___value_61d, /* pointer to opts:OptionInt:opts#Option#value= */
(nitmethod_t)opts___opts__Option___names, /* pointer to opts:OptionInt:opts#Option#names */
(nitmethod_t)opts___opts__Option___helptext, /* pointer to opts:OptionInt:opts#Option#helptext */
(nitmethod_t)opts___opts__Option___init_opt, /* pointer to opts:OptionInt:opts#Option#init_opt */
(nitmethod_t)opts___opts__Option___hidden_61d, /* pointer to opts:OptionInt:opts#Option#hidden= */
(nitmethod_t)opts___opts__Option___names_61d, /* pointer to opts:OptionInt:opts#Option#names= */
(nitmethod_t)opts___opts__Option___helptext_61d, /* pointer to opts:OptionInt:opts#Option#helptext= */
(nitmethod_t)opts___opts__Option___default_value_61d, /* pointer to opts:OptionInt:opts#Option#default_value= */
(nitmethod_t)opts___opts__Option___errors, /* pointer to opts:OptionInt:opts#Option#errors */
(nitmethod_t)opts___opts__OptionParameter___Option__read_param, /* pointer to opts:OptionInt:opts#OptionParameter#read_param */
(nitmethod_t)opts___opts__Option___mandatory, /* pointer to opts:OptionInt:opts#Option#mandatory */
(nitmethod_t)opts___opts__Option___read, /* pointer to opts:OptionInt:opts#Option#read */
(nitmethod_t)opts___opts__Option___hidden, /* pointer to opts:OptionInt:opts#Option#hidden */
(nitmethod_t)opts___opts__Option___read_61d, /* pointer to opts:OptionInt:opts#Option#read= */
(nitmethod_t)VIRTUAL_opts___opts__OptionInt___OptionParameter__convert, /* pointer to opts:OptionInt:opts#OptionInt#convert */
(nitmethod_t)opts___opts__OptionParameter___parameter_mandatory, /* pointer to opts:OptionInt:opts#OptionParameter#parameter_mandatory */
(nitmethod_t)opts___opts__Option___read_param, /* pointer to opts:OptionInt:opts#Option#read_param */
(nitmethod_t)opts___opts__OptionInt___init, /* pointer to opts:OptionInt:opts#OptionInt#init */
}
};
/* allocate OptionInt */
val* NEW_opts__OptionInt(const struct type* type) {
val* self /* : OptionInt */;
val* var /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionInt;
var = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[String]>*/
}
self->attrs[COLOR_opts__Option___errors].val = var; /* _errors on <self:OptionInt exact> */
self->attrs[COLOR_opts__Option___mandatory].s = 0; /* _mandatory on <self:OptionInt exact> */
self->attrs[COLOR_opts__Option___hidden].s = 0; /* _hidden on <self:OptionInt exact> */
self->attrs[COLOR_opts__Option___read].s = 0; /* _read on <self:OptionInt exact> */
self->attrs[COLOR_opts__OptionParameter___parameter_mandatory].s = 1; /* _parameter_mandatory on <self:OptionInt exact> */
return self;
}
/* runtime class opts__OptionFloat */
/* allocate OptionFloat */
val* NEW_opts__OptionFloat(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "OptionFloat is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class opts__OptionArray */
const struct class class_opts__OptionArray = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to opts:OptionArray:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to opts:OptionArray:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to opts:OptionArray:kernel#Object#sys */
(nitmethod_t)opts___opts__Option___standard__string__Object__to_s, /* pointer to opts:OptionArray:opts#Option#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to opts:OptionArray:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to opts:OptionArray:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to opts:OptionArray:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to opts:OptionArray:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to opts:OptionArray:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to opts:OptionArray:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to opts:OptionArray:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to opts:OptionArray:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to opts:OptionArray:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to opts:OptionArray:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to opts:OptionArray:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to opts:OptionArray:light_c#Object#from_c_call_context */
(nitmethod_t)opts___opts__Option___value, /* pointer to opts:OptionArray:opts#Option#value */
(nitmethod_t)opts___opts__Option___pretty, /* pointer to opts:OptionArray:opts#Option#pretty */
(nitmethod_t)opts___opts__Option___init, /* pointer to opts:OptionArray:opts#Option#init */
(nitmethod_t)opts___opts__Option___value_61d, /* pointer to opts:OptionArray:opts#Option#value= */
(nitmethod_t)opts___opts__Option___names, /* pointer to opts:OptionArray:opts#Option#names */
(nitmethod_t)opts___opts__Option___helptext, /* pointer to opts:OptionArray:opts#Option#helptext */
(nitmethod_t)opts___opts__Option___init_opt, /* pointer to opts:OptionArray:opts#Option#init_opt */
(nitmethod_t)opts___opts__Option___hidden_61d, /* pointer to opts:OptionArray:opts#Option#hidden= */
(nitmethod_t)opts___opts__Option___names_61d, /* pointer to opts:OptionArray:opts#Option#names= */
(nitmethod_t)opts___opts__Option___helptext_61d, /* pointer to opts:OptionArray:opts#Option#helptext= */
(nitmethod_t)opts___opts__Option___default_value_61d, /* pointer to opts:OptionArray:opts#Option#default_value= */
(nitmethod_t)opts___opts__Option___errors, /* pointer to opts:OptionArray:opts#Option#errors */
(nitmethod_t)opts___opts__OptionParameter___Option__read_param, /* pointer to opts:OptionArray:opts#OptionParameter#read_param */
(nitmethod_t)opts___opts__Option___mandatory, /* pointer to opts:OptionArray:opts#Option#mandatory */
(nitmethod_t)opts___opts__Option___read, /* pointer to opts:OptionArray:opts#Option#read */
(nitmethod_t)opts___opts__Option___hidden, /* pointer to opts:OptionArray:opts#Option#hidden */
(nitmethod_t)opts___opts__Option___read_61d, /* pointer to opts:OptionArray:opts#Option#read= */
(nitmethod_t)opts___opts__OptionArray___OptionParameter__convert, /* pointer to opts:OptionArray:opts#OptionArray#convert */
(nitmethod_t)opts___opts__OptionParameter___parameter_mandatory, /* pointer to opts:OptionArray:opts#OptionParameter#parameter_mandatory */
(nitmethod_t)opts___opts__Option___read_param, /* pointer to opts:OptionArray:opts#Option#read_param */
(nitmethod_t)opts___opts__OptionArray___init, /* pointer to opts:OptionArray:opts#OptionArray#init */
(nitmethod_t)opts___opts__OptionArray___values_61d, /* pointer to opts:OptionArray:opts#OptionArray#values= */
(nitmethod_t)opts___opts__OptionArray___values, /* pointer to opts:OptionArray:opts#OptionArray#values */
}
};
/* allocate OptionArray */
val* NEW_opts__OptionArray(const struct type* type) {
val* self /* : OptionArray */;
val* var /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionArray;
var = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[String]>*/
}
self->attrs[COLOR_opts__Option___errors].val = var; /* _errors on <self:OptionArray exact> */
self->attrs[COLOR_opts__Option___mandatory].s = 0; /* _mandatory on <self:OptionArray exact> */
self->attrs[COLOR_opts__Option___hidden].s = 0; /* _hidden on <self:OptionArray exact> */
self->attrs[COLOR_opts__Option___read].s = 0; /* _read on <self:OptionArray exact> */
self->attrs[COLOR_opts__OptionParameter___parameter_mandatory].s = 1; /* _parameter_mandatory on <self:OptionArray exact> */
return self;
}
/* runtime class opts__OptionContext */
const struct class class_opts__OptionContext = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to opts:OptionContext:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to opts:OptionContext:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to opts:OptionContext:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to opts:OptionContext:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to opts:OptionContext:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to opts:OptionContext:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to opts:OptionContext:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to opts:OptionContext:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to opts:OptionContext:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to opts:OptionContext:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to opts:OptionContext:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to opts:OptionContext:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to opts:OptionContext:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to opts:OptionContext:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to opts:OptionContext:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to opts:OptionContext:light_c#Object#from_c_call_context */
(nitmethod_t)opts___opts__OptionContext___rest, /* pointer to opts:OptionContext:opts#OptionContext#rest */
(nitmethod_t)opts___opts__OptionContext___add_option, /* pointer to opts:OptionContext:opts#OptionContext#add_option */
(nitmethod_t)opts___opts__OptionContext___options, /* pointer to opts:OptionContext:opts#OptionContext#options */
(nitmethod_t)opts___opts__OptionContext___parse, /* pointer to opts:OptionContext:opts#OptionContext#parse */
(nitmethod_t)opts___opts__OptionContext___get_errors, /* pointer to opts:OptionContext:opts#OptionContext#get_errors */
(nitmethod_t)opts___opts__OptionContext___parse_intern, /* pointer to opts:OptionContext:opts#OptionContext#parse_intern */
(nitmethod_t)opts___opts__OptionContext___usage, /* pointer to opts:OptionContext:opts#OptionContext#usage */
(nitmethod_t)opts___opts__OptionContext___build, /* pointer to opts:OptionContext:opts#OptionContext#build */
(nitmethod_t)opts___opts__OptionContext___optmap, /* pointer to opts:OptionContext:opts#OptionContext#optmap */
(nitmethod_t)opts___opts__OptionContext___options_before_rest, /* pointer to opts:OptionContext:opts#OptionContext#options_before_rest */
(nitmethod_t)opts___opts__OptionContext___errors, /* pointer to opts:OptionContext:opts#OptionContext#errors */
}
};
/* allocate OptionContext */
val* NEW_opts__OptionContext(const struct type* type) {
val* self /* : OptionContext */;
val* var /* : Array[Option] */;
val* var1 /* : Array[String] */;
val* var2 /* : Array[String] */;
val* var3 /* : HashMap[String, Option] */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionContext;
var = NEW_standard__Array(&type_standard__Array__opts__Option);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[Option]>*/
}
self->attrs[COLOR_opts__OptionContext___options].val = var; /* _options on <self:OptionContext exact> */
var1 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[String]>*/
}
self->attrs[COLOR_opts__OptionContext___rest].val = var1; /* _rest on <self:OptionContext exact> */
var2 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[String]>*/
}
self->attrs[COLOR_opts__OptionContext___errors].val = var2; /* _errors on <self:OptionContext exact> */
var3 = NEW_standard__HashMap(&type_standard__HashMap__standard__String__opts__Option);
{
standard___standard__HashMap___standard__kernel__Object__init(var3); /* Direct call hash_collection#HashMap#init on <var3:HashMap[String, Option]>*/
}
self->attrs[COLOR_opts__OptionContext___optmap].val = var3; /* _optmap on <self:OptionContext exact> */
self->attrs[COLOR_opts__OptionContext___options_before_rest].s = 0; /* _options_before_rest on <self:OptionContext exact> */
return self;
}
/* runtime class template__Template */
const struct class class_template__Template = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to template:Template:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to template:Template:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to template:Template:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to template:Template:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to template:Template:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to template:Template:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to template:Template:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to template:Template:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to template:Template:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to template:Template:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to template:Template:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to template:Template:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to template:Template:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to template:Template:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to template:Template:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to template:Template:light_c#Object#from_c_call_context */
(nitmethod_t)template___template__Template___is_writing, /* pointer to template:Template:template#Template#is_writing */
(nitmethod_t)template___template__Template___is_writing_61d, /* pointer to template:Template:template#Template#is_writing= */
(nitmethod_t)template___template__Template___force_render, /* pointer to template:Template:template#Template#force_render */
(nitmethod_t)template___template__Template___content, /* pointer to template:Template:template#Template#content */
(nitmethod_t)template___template__Template___render_done, /* pointer to template:Template:template#Template#render_done */
(nitmethod_t)template___template__Template___render_done_61d, /* pointer to template:Template:template#Template#render_done= */
(nitmethod_t)template___template__Template___rendering, /* pointer to template:Template:template#Template#rendering */
(nitmethod_t)template___template__Template___freeze, /* pointer to template:Template:template#Template#freeze */
(nitmethod_t)template___template__Template___addn, /* pointer to template:Template:template#Template#addn */
(nitmethod_t)template___template__Template___is_frozen, /* pointer to template:Template:template#Template#is_frozen */
(nitmethod_t)template___template__Template___is_frozen_61d, /* pointer to template:Template:template#Template#is_frozen= */
(nitmethod_t)template___template__Template___add, /* pointer to template:Template:template#Template#add */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__file___Writable___write_to_file, /* pointer to template:Template:file#Writable#write_to_file */
(nitmethod_t)template___template__Template___standard__stream__Writable__write_to, /* pointer to template:Template:template#Template#write_to */
}
};
/* allocate Template */
val* NEW_template__Template(const struct type* type) {
val* self /* : Template */;
val* var /* : Array[Writable] */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_template__Template;
self->attrs[COLOR_template__Template___is_frozen].s = 0; /* _is_frozen on <self:Template exact> */
var = NEW_standard__Array(&type_standard__Array__standard__Writable);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[Writable]>*/
}
self->attrs[COLOR_template__Template___content].val = var; /* _content on <self:Template exact> */
self->attrs[COLOR_template__Template___render_done].s = 0; /* _render_done on <self:Template exact> */
self->attrs[COLOR_template__Template___is_writing].s = 0; /* _is_writing on <self:Template exact> */
return self;
}
/* runtime class nit__parser__ReduceAction0 */
const struct class class_nit__parser__ReduceAction0 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction0:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction0:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction0:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction0:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction0:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction0:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction0:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction0:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction0:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction0:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction0:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction0:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction0:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction0:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction0:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction0:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction0___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction0:parser#ReduceAction0#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction0:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction0:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction0:kernel#Object#init */
}
};
/* allocate ReduceAction0 */
val* NEW_nit__parser__ReduceAction0(const struct type* type) {
val* self /* : ReduceAction0 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction0;
return self;
}
/* runtime class nit__parser__ReduceAction1 */
const struct class class_nit__parser__ReduceAction1 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction1:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction1:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction1:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction1:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction1:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction1:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction1:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction1:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction1:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction1:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction1:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction1:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction1:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction1:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction1:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction1:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction1___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction1:parser#ReduceAction1#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction1:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction1:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction1:kernel#Object#init */
}
};
/* allocate ReduceAction1 */
val* NEW_nit__parser__ReduceAction1(const struct type* type) {
val* self /* : ReduceAction1 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction1;
return self;
}
/* runtime class nit__parser__ReduceAction2 */
const struct class class_nit__parser__ReduceAction2 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction2:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction2:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction2:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction2:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction2:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction2:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction2:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction2:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction2:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction2:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction2:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction2:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction2:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction2:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction2:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction2:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction2___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction2:parser#ReduceAction2#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction2:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction2:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction2:kernel#Object#init */
}
};
/* allocate ReduceAction2 */
val* NEW_nit__parser__ReduceAction2(const struct type* type) {
val* self /* : ReduceAction2 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction2;
return self;
}
/* runtime class nit__parser__ReduceAction3 */
const struct class class_nit__parser__ReduceAction3 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction3:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction3:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction3:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction3:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction3:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction3:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction3:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction3:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction3:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction3:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction3:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction3:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction3:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction3:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction3:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction3:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction3___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction3:parser#ReduceAction3#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction3:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction3:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction3:kernel#Object#init */
}
};
/* allocate ReduceAction3 */
val* NEW_nit__parser__ReduceAction3(const struct type* type) {
val* self /* : ReduceAction3 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction3;
return self;
}
/* runtime class nit__parser__ReduceAction4 */
const struct class class_nit__parser__ReduceAction4 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction4:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction4:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction4:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction4:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction4:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction4:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction4:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction4:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction4:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction4:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction4:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction4:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction4:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction4:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction4:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction4:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction4___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction4:parser#ReduceAction4#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction4:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction4:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction4:kernel#Object#init */
}
};
/* allocate ReduceAction4 */
val* NEW_nit__parser__ReduceAction4(const struct type* type) {
val* self /* : ReduceAction4 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction4;
return self;
}
/* runtime class nit__parser__ReduceAction5 */
const struct class class_nit__parser__ReduceAction5 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction5:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction5:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction5:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction5:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction5:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction5:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction5:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction5:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction5:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction5:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction5:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction5:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction5:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction5:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction5:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction5:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction5___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction5:parser#ReduceAction5#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction5:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction5:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction5:kernel#Object#init */
}
};
/* allocate ReduceAction5 */
val* NEW_nit__parser__ReduceAction5(const struct type* type) {
val* self /* : ReduceAction5 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction5;
return self;
}
/* runtime class nit__parser__ReduceAction6 */
const struct class class_nit__parser__ReduceAction6 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction6:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction6:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction6:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction6:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction6:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction6:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction6:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction6:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction6:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction6:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction6:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction6:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction6:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction6:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction6:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction6:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction6___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction6:parser#ReduceAction6#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction6:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction6:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction6:kernel#Object#init */
}
};
/* allocate ReduceAction6 */
val* NEW_nit__parser__ReduceAction6(const struct type* type) {
val* self /* : ReduceAction6 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction6;
return self;
}
/* runtime class nit__parser__ReduceAction7 */
const struct class class_nit__parser__ReduceAction7 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction7:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction7:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction7:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction7:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction7:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction7:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction7:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction7:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction7:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction7:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction7:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction7:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction7:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction7:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction7:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction7:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction7___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction7:parser#ReduceAction7#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction7:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction7:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction7:kernel#Object#init */
}
};
/* allocate ReduceAction7 */
val* NEW_nit__parser__ReduceAction7(const struct type* type) {
val* self /* : ReduceAction7 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction7;
return self;
}
/* runtime class nit__parser__ReduceAction8 */
const struct class class_nit__parser__ReduceAction8 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction8:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction8:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction8:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction8:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction8:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction8:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction8:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction8:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction8:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction8:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction8:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction8:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction8:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction8:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction8:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction8:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction8___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction8:parser#ReduceAction8#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction8:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction8:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction8:kernel#Object#init */
}
};
/* allocate ReduceAction8 */
val* NEW_nit__parser__ReduceAction8(const struct type* type) {
val* self /* : ReduceAction8 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction8;
return self;
}
/* runtime class nit__parser__ReduceAction9 */
const struct class class_nit__parser__ReduceAction9 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction9:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction9:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction9:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction9:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction9:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction9:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction9:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction9:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction9:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction9:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction9:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction9:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction9:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction9:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction9:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction9:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction9___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction9:parser#ReduceAction9#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction9:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction9:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction9:kernel#Object#init */
}
};
/* allocate ReduceAction9 */
val* NEW_nit__parser__ReduceAction9(const struct type* type) {
val* self /* : ReduceAction9 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction9;
return self;
}
/* runtime class nit__parser__ReduceAction10 */
const struct class class_nit__parser__ReduceAction10 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction10:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction10:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction10:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction10:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction10:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction10:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction10:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction10:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction10:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction10:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction10:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction10:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction10:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction10:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction10:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction10:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction10___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction10:parser#ReduceAction10#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction10:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction10:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction10:kernel#Object#init */
}
};
/* allocate ReduceAction10 */
val* NEW_nit__parser__ReduceAction10(const struct type* type) {
val* self /* : ReduceAction10 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction10;
return self;
}
/* runtime class nit__parser__ReduceAction11 */
const struct class class_nit__parser__ReduceAction11 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction11:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction11:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction11:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction11:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction11:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction11:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction11:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction11:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction11:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction11:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction11:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction11:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction11:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction11:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction11:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction11:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction11___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction11:parser#ReduceAction11#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction11:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction11:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction11:kernel#Object#init */
}
};
/* allocate ReduceAction11 */
val* NEW_nit__parser__ReduceAction11(const struct type* type) {
val* self /* : ReduceAction11 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction11;
return self;
}
/* runtime class nit__parser__ReduceAction12 */
const struct class class_nit__parser__ReduceAction12 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction12:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction12:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction12:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction12:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction12:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction12:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction12:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction12:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction12:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction12:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction12:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction12:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction12:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction12:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction12:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction12:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction12___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction12:parser#ReduceAction12#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction12:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction12:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction12:kernel#Object#init */
}
};
/* allocate ReduceAction12 */
val* NEW_nit__parser__ReduceAction12(const struct type* type) {
val* self /* : ReduceAction12 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction12;
return self;
}
/* runtime class nit__parser__ReduceAction13 */
const struct class class_nit__parser__ReduceAction13 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction13:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction13:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction13:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction13:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction13:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction13:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction13:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction13:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction13:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction13:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction13:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction13:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction13:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction13:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction13:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction13:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction13___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction13:parser#ReduceAction13#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction13:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction13:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction13:kernel#Object#init */
}
};
/* allocate ReduceAction13 */
val* NEW_nit__parser__ReduceAction13(const struct type* type) {
val* self /* : ReduceAction13 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction13;
return self;
}
/* runtime class nit__parser__ReduceAction14 */
const struct class class_nit__parser__ReduceAction14 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction14:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction14:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction14:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction14:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction14:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction14:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction14:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction14:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction14:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction14:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction14:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction14:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction14:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction14:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction14:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction14:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction14___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction14:parser#ReduceAction14#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction14:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction14:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction14:kernel#Object#init */
}
};
/* allocate ReduceAction14 */
val* NEW_nit__parser__ReduceAction14(const struct type* type) {
val* self /* : ReduceAction14 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction14;
return self;
}
/* runtime class nit__parser__ReduceAction15 */
const struct class class_nit__parser__ReduceAction15 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction15:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction15:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction15:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction15:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction15:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction15:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction15:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction15:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction15:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction15:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction15:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction15:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction15:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction15:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction15:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction15:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction15___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction15:parser#ReduceAction15#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction15:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction15:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction15:kernel#Object#init */
}
};
/* allocate ReduceAction15 */
val* NEW_nit__parser__ReduceAction15(const struct type* type) {
val* self /* : ReduceAction15 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction15;
return self;
}
/* runtime class nit__parser__ReduceAction16 */
const struct class class_nit__parser__ReduceAction16 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction16:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction16:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction16:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction16:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction16:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction16:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction16:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction16:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction16:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction16:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction16:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction16:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction16:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction16:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction16:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction16:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction16___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction16:parser#ReduceAction16#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction16:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction16:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction16:kernel#Object#init */
}
};
/* allocate ReduceAction16 */
val* NEW_nit__parser__ReduceAction16(const struct type* type) {
val* self /* : ReduceAction16 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction16;
return self;
}
/* runtime class nit__parser__ReduceAction17 */
const struct class class_nit__parser__ReduceAction17 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction17:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction17:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction17:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction17:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction17:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction17:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction17:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction17:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction17:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction17:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction17:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction17:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction17:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction17:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction17:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction17:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction17___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction17:parser#ReduceAction17#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction17:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction17:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction17:kernel#Object#init */
}
};
/* allocate ReduceAction17 */
val* NEW_nit__parser__ReduceAction17(const struct type* type) {
val* self /* : ReduceAction17 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction17;
return self;
}
/* runtime class nit__parser__ReduceAction18 */
const struct class class_nit__parser__ReduceAction18 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction18:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction18:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction18:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction18:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction18:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction18:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction18:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction18:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction18:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction18:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction18:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction18:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction18:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction18:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction18:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction18:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction18___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction18:parser#ReduceAction18#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction18:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction18:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction18:kernel#Object#init */
}
};
/* allocate ReduceAction18 */
val* NEW_nit__parser__ReduceAction18(const struct type* type) {
val* self /* : ReduceAction18 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction18;
return self;
}
/* runtime class nit__parser__ReduceAction19 */
const struct class class_nit__parser__ReduceAction19 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction19:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction19:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction19:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction19:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction19:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction19:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction19:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction19:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction19:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction19:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction19:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction19:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction19:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction19:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction19:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction19:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction19___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction19:parser#ReduceAction19#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction19:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction19:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction19:kernel#Object#init */
}
};
/* allocate ReduceAction19 */
val* NEW_nit__parser__ReduceAction19(const struct type* type) {
val* self /* : ReduceAction19 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction19;
return self;
}
/* runtime class nit__parser__ReduceAction20 */
const struct class class_nit__parser__ReduceAction20 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction20:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction20:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction20:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction20:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction20:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction20:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction20:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction20:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction20:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction20:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction20:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction20:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction20:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction20:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction20:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction20:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction20___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction20:parser#ReduceAction20#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction20:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction20:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction20:kernel#Object#init */
}
};
/* allocate ReduceAction20 */
val* NEW_nit__parser__ReduceAction20(const struct type* type) {
val* self /* : ReduceAction20 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction20;
return self;
}
/* runtime class nit__parser__ReduceAction21 */
const struct class class_nit__parser__ReduceAction21 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction21:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction21:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction21:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction21:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction21:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction21:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction21:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction21:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction21:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction21:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction21:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction21:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction21:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction21:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction21:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction21:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction21___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction21:parser#ReduceAction21#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction21:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction21:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction21:kernel#Object#init */
}
};
/* allocate ReduceAction21 */
val* NEW_nit__parser__ReduceAction21(const struct type* type) {
val* self /* : ReduceAction21 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction21;
return self;
}
/* runtime class nit__parser__ReduceAction22 */
const struct class class_nit__parser__ReduceAction22 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction22:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction22:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction22:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction22:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction22:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction22:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction22:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction22:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction22:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction22:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction22:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction22:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction22:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction22:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction22:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction22:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction22___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction22:parser#ReduceAction22#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction22:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction22:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction22:kernel#Object#init */
}
};
/* allocate ReduceAction22 */
val* NEW_nit__parser__ReduceAction22(const struct type* type) {
val* self /* : ReduceAction22 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction22;
return self;
}
/* runtime class nit__parser__ReduceAction23 */
const struct class class_nit__parser__ReduceAction23 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction23:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction23:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction23:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction23:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction23:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction23:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction23:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction23:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction23:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction23:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction23:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction23:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction23:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction23:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction23:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction23:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction23___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction23:parser#ReduceAction23#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction23:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction23:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction23:kernel#Object#init */
}
};
/* allocate ReduceAction23 */
val* NEW_nit__parser__ReduceAction23(const struct type* type) {
val* self /* : ReduceAction23 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction23;
return self;
}
/* runtime class nit__parser__ReduceAction24 */
const struct class class_nit__parser__ReduceAction24 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction24:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction24:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction24:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction24:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction24:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction24:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction24:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction24:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction24:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction24:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction24:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction24:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction24:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction24:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction24:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction24:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction24___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction24:parser#ReduceAction24#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction24:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction24:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction24:kernel#Object#init */
}
};
/* allocate ReduceAction24 */
val* NEW_nit__parser__ReduceAction24(const struct type* type) {
val* self /* : ReduceAction24 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction24;
return self;
}
/* runtime class nit__parser__ReduceAction26 */
const struct class class_nit__parser__ReduceAction26 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction26:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction26:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction26:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction26:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction26:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction26:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction26:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction26:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction26:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction26:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction26:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction26:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction26:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction26:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction26:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction26:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction26___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction26:parser#ReduceAction26#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction26:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction26:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction26:kernel#Object#init */
}
};
/* allocate ReduceAction26 */
val* NEW_nit__parser__ReduceAction26(const struct type* type) {
val* self /* : ReduceAction26 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction26;
return self;
}
/* runtime class nit__parser__ReduceAction27 */
const struct class class_nit__parser__ReduceAction27 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction27:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction27:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction27:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction27:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction27:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction27:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction27:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction27:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction27:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction27:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction27:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction27:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction27:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction27:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction27:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction27:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction27___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction27:parser#ReduceAction27#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction27:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction27:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction27:kernel#Object#init */
}
};
/* allocate ReduceAction27 */
val* NEW_nit__parser__ReduceAction27(const struct type* type) {
val* self /* : ReduceAction27 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction27;
return self;
}
/* runtime class nit__parser__ReduceAction28 */
const struct class class_nit__parser__ReduceAction28 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction28:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction28:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction28:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction28:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction28:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction28:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction28:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction28:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction28:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction28:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction28:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction28:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction28:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction28:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction28:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction28:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction28___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction28:parser#ReduceAction28#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction28:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction28:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction28:kernel#Object#init */
}
};
/* allocate ReduceAction28 */
val* NEW_nit__parser__ReduceAction28(const struct type* type) {
val* self /* : ReduceAction28 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction28;
return self;
}
/* runtime class nit__parser__ReduceAction29 */
const struct class class_nit__parser__ReduceAction29 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction29:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction29:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction29:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction29:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction29:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction29:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction29:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction29:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction29:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction29:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction29:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction29:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction29:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction29:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction29:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction29:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction29___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction29:parser#ReduceAction29#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction29:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction29:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction29:kernel#Object#init */
}
};
/* allocate ReduceAction29 */
val* NEW_nit__parser__ReduceAction29(const struct type* type) {
val* self /* : ReduceAction29 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction29;
return self;
}
/* runtime class nit__parser__ReduceAction31 */
const struct class class_nit__parser__ReduceAction31 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction31:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction31:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction31:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction31:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction31:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction31:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction31:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction31:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction31:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction31:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction31:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction31:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction31:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction31:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction31:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction31:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction31___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction31:parser#ReduceAction31#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction31:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction31:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction31:kernel#Object#init */
}
};
/* allocate ReduceAction31 */
val* NEW_nit__parser__ReduceAction31(const struct type* type) {
val* self /* : ReduceAction31 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction31;
return self;
}
/* runtime class nit__parser__ReduceAction32 */
const struct class class_nit__parser__ReduceAction32 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction32:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction32:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction32:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction32:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction32:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction32:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction32:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction32:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction32:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction32:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction32:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction32:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction32:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction32:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction32:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction32:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction32___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction32:parser#ReduceAction32#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction32:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction32:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction32:kernel#Object#init */
}
};
/* allocate ReduceAction32 */
val* NEW_nit__parser__ReduceAction32(const struct type* type) {
val* self /* : ReduceAction32 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction32;
return self;
}
/* runtime class nit__parser__ReduceAction33 */
const struct class class_nit__parser__ReduceAction33 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction33:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction33:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction33:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction33:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction33:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction33:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction33:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction33:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction33:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction33:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction33:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction33:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction33:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction33:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction33:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction33:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction33___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction33:parser#ReduceAction33#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction33:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction33:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction33:kernel#Object#init */
}
};
/* allocate ReduceAction33 */
val* NEW_nit__parser__ReduceAction33(const struct type* type) {
val* self /* : ReduceAction33 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction33;
return self;
}
/* runtime class nit__parser__ReduceAction34 */
const struct class class_nit__parser__ReduceAction34 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction34:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction34:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction34:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction34:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction34:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction34:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction34:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction34:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction34:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction34:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction34:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction34:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction34:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction34:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction34:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction34:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction34___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction34:parser#ReduceAction34#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction34:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction34:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction34:kernel#Object#init */
}
};
/* allocate ReduceAction34 */
val* NEW_nit__parser__ReduceAction34(const struct type* type) {
val* self /* : ReduceAction34 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction34;
return self;
}
/* runtime class nit__parser__ReduceAction35 */
const struct class class_nit__parser__ReduceAction35 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction35:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction35:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction35:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction35:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction35:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction35:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction35:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction35:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction35:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction35:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction35:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction35:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction35:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction35:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction35:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction35:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction35___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction35:parser#ReduceAction35#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction35:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction35:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction35:kernel#Object#init */
}
};
/* allocate ReduceAction35 */
val* NEW_nit__parser__ReduceAction35(const struct type* type) {
val* self /* : ReduceAction35 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction35;
return self;
}
/* runtime class nit__parser__ReduceAction36 */
const struct class class_nit__parser__ReduceAction36 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction36:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction36:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction36:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction36:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction36:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction36:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction36:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction36:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction36:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction36:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction36:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction36:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction36:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction36:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction36:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction36:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction36___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction36:parser#ReduceAction36#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction36:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction36:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction36:kernel#Object#init */
}
};
/* allocate ReduceAction36 */
val* NEW_nit__parser__ReduceAction36(const struct type* type) {
val* self /* : ReduceAction36 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction36;
return self;
}
/* runtime class nit__parser__ReduceAction37 */
const struct class class_nit__parser__ReduceAction37 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction37:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction37:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction37:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction37:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction37:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction37:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction37:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction37:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction37:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction37:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction37:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction37:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction37:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction37:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction37:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction37:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction37___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction37:parser#ReduceAction37#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction37:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction37:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction37:kernel#Object#init */
}
};
/* allocate ReduceAction37 */
val* NEW_nit__parser__ReduceAction37(const struct type* type) {
val* self /* : ReduceAction37 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction37;
return self;
}
/* runtime class nit__parser__ReduceAction38 */
const struct class class_nit__parser__ReduceAction38 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction38:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction38:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction38:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction38:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction38:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction38:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction38:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction38:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction38:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction38:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction38:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction38:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction38:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction38:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction38:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction38:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction38___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction38:parser#ReduceAction38#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction38:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction38:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction38:kernel#Object#init */
}
};
/* allocate ReduceAction38 */
val* NEW_nit__parser__ReduceAction38(const struct type* type) {
val* self /* : ReduceAction38 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction38;
return self;
}
/* runtime class nit__parser__ReduceAction39 */
const struct class class_nit__parser__ReduceAction39 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction39:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction39:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction39:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction39:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction39:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction39:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction39:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction39:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction39:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction39:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction39:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction39:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction39:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction39:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction39:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction39:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction39___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction39:parser#ReduceAction39#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction39:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction39:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction39:kernel#Object#init */
}
};
/* allocate ReduceAction39 */
val* NEW_nit__parser__ReduceAction39(const struct type* type) {
val* self /* : ReduceAction39 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction39;
return self;
}
/* runtime class nit__parser__ReduceAction40 */
const struct class class_nit__parser__ReduceAction40 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction40:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction40:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction40:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction40:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction40:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction40:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction40:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction40:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction40:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction40:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction40:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction40:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction40:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction40:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction40:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction40:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction40___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction40:parser#ReduceAction40#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction40:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction40:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction40:kernel#Object#init */
}
};
/* allocate ReduceAction40 */
val* NEW_nit__parser__ReduceAction40(const struct type* type) {
val* self /* : ReduceAction40 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction40;
return self;
}
/* runtime class nit__parser__ReduceAction41 */
const struct class class_nit__parser__ReduceAction41 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction41:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction41:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction41:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction41:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction41:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction41:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction41:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction41:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction41:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction41:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction41:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction41:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction41:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction41:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction41:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction41:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction41___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction41:parser#ReduceAction41#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction41:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction41:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction41:kernel#Object#init */
}
};
/* allocate ReduceAction41 */
val* NEW_nit__parser__ReduceAction41(const struct type* type) {
val* self /* : ReduceAction41 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction41;
return self;
}
/* runtime class nit__parser__ReduceAction42 */
const struct class class_nit__parser__ReduceAction42 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction42:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction42:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction42:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction42:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction42:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction42:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction42:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction42:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction42:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction42:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction42:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction42:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction42:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction42:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction42:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction42:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction42___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction42:parser#ReduceAction42#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction42:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction42:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction42:kernel#Object#init */
}
};
/* allocate ReduceAction42 */
val* NEW_nit__parser__ReduceAction42(const struct type* type) {
val* self /* : ReduceAction42 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction42;
return self;
}
/* runtime class nit__parser__ReduceAction43 */
const struct class class_nit__parser__ReduceAction43 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction43:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction43:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction43:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction43:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction43:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction43:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction43:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction43:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction43:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction43:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction43:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction43:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction43:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction43:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction43:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction43:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction43___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction43:parser#ReduceAction43#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction43:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction43:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction43:kernel#Object#init */
}
};
/* allocate ReduceAction43 */
val* NEW_nit__parser__ReduceAction43(const struct type* type) {
val* self /* : ReduceAction43 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction43;
return self;
}
/* runtime class nit__parser__ReduceAction44 */
const struct class class_nit__parser__ReduceAction44 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction44:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction44:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction44:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction44:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction44:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction44:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction44:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction44:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction44:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction44:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction44:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction44:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction44:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction44:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction44:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction44:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction44___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction44:parser#ReduceAction44#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction44:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction44:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction44:kernel#Object#init */
}
};
/* allocate ReduceAction44 */
val* NEW_nit__parser__ReduceAction44(const struct type* type) {
val* self /* : ReduceAction44 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction44;
return self;
}
/* runtime class nit__parser__ReduceAction45 */
const struct class class_nit__parser__ReduceAction45 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction45:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction45:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction45:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction45:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction45:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction45:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction45:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction45:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction45:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction45:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction45:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction45:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction45:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction45:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction45:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction45:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction45___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction45:parser#ReduceAction45#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction45:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction45:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction45:kernel#Object#init */
}
};
/* allocate ReduceAction45 */
val* NEW_nit__parser__ReduceAction45(const struct type* type) {
val* self /* : ReduceAction45 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction45;
return self;
}
/* runtime class nit__parser__ReduceAction46 */
const struct class class_nit__parser__ReduceAction46 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction46:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction46:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction46:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction46:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction46:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction46:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction46:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction46:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction46:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction46:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction46:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction46:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction46:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction46:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction46:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction46:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction46___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction46:parser#ReduceAction46#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction46:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction46:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction46:kernel#Object#init */
}
};
/* allocate ReduceAction46 */
val* NEW_nit__parser__ReduceAction46(const struct type* type) {
val* self /* : ReduceAction46 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction46;
return self;
}
/* runtime class nit__parser__ReduceAction47 */
const struct class class_nit__parser__ReduceAction47 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction47:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction47:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction47:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction47:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction47:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction47:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction47:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction47:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction47:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction47:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction47:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction47:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction47:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction47:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction47:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction47:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction47___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction47:parser#ReduceAction47#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction47:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction47:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction47:kernel#Object#init */
}
};
/* allocate ReduceAction47 */
val* NEW_nit__parser__ReduceAction47(const struct type* type) {
val* self /* : ReduceAction47 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction47;
return self;
}
/* runtime class nit__parser__ReduceAction48 */
const struct class class_nit__parser__ReduceAction48 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction48:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction48:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction48:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction48:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction48:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction48:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction48:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction48:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction48:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction48:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction48:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction48:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction48:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction48:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction48:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction48:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction48___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction48:parser#ReduceAction48#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction48:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction48:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction48:kernel#Object#init */
}
};
/* allocate ReduceAction48 */
val* NEW_nit__parser__ReduceAction48(const struct type* type) {
val* self /* : ReduceAction48 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction48;
return self;
}
/* runtime class nit__parser__ReduceAction49 */
const struct class class_nit__parser__ReduceAction49 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction49:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction49:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction49:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction49:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction49:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction49:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction49:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction49:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction49:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction49:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction49:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction49:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction49:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction49:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction49:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction49:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction49___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction49:parser#ReduceAction49#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction49:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction49:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction49:kernel#Object#init */
}
};
/* allocate ReduceAction49 */
val* NEW_nit__parser__ReduceAction49(const struct type* type) {
val* self /* : ReduceAction49 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction49;
return self;
}
/* runtime class nit__parser__ReduceAction50 */
const struct class class_nit__parser__ReduceAction50 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction50:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction50:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction50:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction50:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction50:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction50:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction50:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction50:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction50:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction50:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction50:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction50:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction50:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction50:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction50:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction50:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction50___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction50:parser#ReduceAction50#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction50:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction50:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction50:kernel#Object#init */
}
};
/* allocate ReduceAction50 */
val* NEW_nit__parser__ReduceAction50(const struct type* type) {
val* self /* : ReduceAction50 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction50;
return self;
}
/* runtime class nit__parser__ReduceAction51 */
const struct class class_nit__parser__ReduceAction51 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction51:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction51:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction51:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction51:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction51:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction51:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction51:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction51:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction51:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction51:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction51:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction51:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction51:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction51:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction51:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction51:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction51___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction51:parser#ReduceAction51#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction51:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction51:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction51:kernel#Object#init */
}
};
/* allocate ReduceAction51 */
val* NEW_nit__parser__ReduceAction51(const struct type* type) {
val* self /* : ReduceAction51 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction51;
return self;
}
/* runtime class nit__parser__ReduceAction52 */
const struct class class_nit__parser__ReduceAction52 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction52:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction52:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction52:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction52:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction52:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction52:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction52:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction52:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction52:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction52:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction52:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction52:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction52:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction52:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction52:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction52:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction52___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction52:parser#ReduceAction52#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction52:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction52:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction52:kernel#Object#init */
}
};
/* allocate ReduceAction52 */
val* NEW_nit__parser__ReduceAction52(const struct type* type) {
val* self /* : ReduceAction52 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction52;
return self;
}
/* runtime class nit__parser__ReduceAction53 */
const struct class class_nit__parser__ReduceAction53 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction53:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction53:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction53:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction53:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction53:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction53:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction53:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction53:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction53:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction53:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction53:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction53:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction53:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction53:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction53:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction53:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction53___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction53:parser#ReduceAction53#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction53:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction53:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction53:kernel#Object#init */
}
};
/* allocate ReduceAction53 */
val* NEW_nit__parser__ReduceAction53(const struct type* type) {
val* self /* : ReduceAction53 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction53;
return self;
}
/* runtime class nit__parser__ReduceAction54 */
const struct class class_nit__parser__ReduceAction54 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction54:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction54:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction54:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction54:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction54:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction54:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction54:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction54:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction54:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction54:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction54:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction54:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction54:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction54:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction54:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction54:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction54___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction54:parser#ReduceAction54#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction54:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction54:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction54:kernel#Object#init */
}
};
/* allocate ReduceAction54 */
val* NEW_nit__parser__ReduceAction54(const struct type* type) {
val* self /* : ReduceAction54 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction54;
return self;
}
/* runtime class nit__parser__ReduceAction55 */
const struct class class_nit__parser__ReduceAction55 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction55:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction55:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction55:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction55:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction55:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction55:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction55:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction55:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction55:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction55:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction55:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction55:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction55:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction55:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction55:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction55:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction55___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction55:parser#ReduceAction55#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction55:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction55:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction55:kernel#Object#init */
}
};
/* allocate ReduceAction55 */
val* NEW_nit__parser__ReduceAction55(const struct type* type) {
val* self /* : ReduceAction55 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction55;
return self;
}
/* runtime class nit__parser__ReduceAction56 */
const struct class class_nit__parser__ReduceAction56 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction56:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction56:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction56:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction56:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction56:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction56:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction56:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction56:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction56:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction56:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction56:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction56:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction56:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction56:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction56:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction56:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction56___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction56:parser#ReduceAction56#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction56:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction56:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction56:kernel#Object#init */
}
};
/* allocate ReduceAction56 */
val* NEW_nit__parser__ReduceAction56(const struct type* type) {
val* self /* : ReduceAction56 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction56;
return self;
}
/* runtime class nit__parser__ReduceAction57 */
const struct class class_nit__parser__ReduceAction57 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction57:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction57:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction57:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction57:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction57:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction57:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction57:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction57:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction57:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction57:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction57:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction57:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction57:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction57:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction57:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction57:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction57___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction57:parser#ReduceAction57#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction57:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction57:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction57:kernel#Object#init */
}
};
/* allocate ReduceAction57 */
val* NEW_nit__parser__ReduceAction57(const struct type* type) {
val* self /* : ReduceAction57 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction57;
return self;
}
/* runtime class nit__parser__ReduceAction58 */
const struct class class_nit__parser__ReduceAction58 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction58:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction58:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction58:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction58:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction58:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction58:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction58:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction58:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction58:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction58:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction58:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction58:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction58:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction58:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction58:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction58:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction58___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction58:parser#ReduceAction58#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction58:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction58:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction58:kernel#Object#init */
}
};
/* allocate ReduceAction58 */
val* NEW_nit__parser__ReduceAction58(const struct type* type) {
val* self /* : ReduceAction58 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction58;
return self;
}
/* runtime class nit__parser__ReduceAction59 */
const struct class class_nit__parser__ReduceAction59 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction59:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction59:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction59:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction59:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction59:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction59:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction59:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction59:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction59:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction59:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction59:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction59:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction59:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction59:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction59:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction59:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction59___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction59:parser#ReduceAction59#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction59:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction59:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction59:kernel#Object#init */
}
};
/* allocate ReduceAction59 */
val* NEW_nit__parser__ReduceAction59(const struct type* type) {
val* self /* : ReduceAction59 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction59;
return self;
}
/* runtime class nit__parser__ReduceAction60 */
const struct class class_nit__parser__ReduceAction60 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction60:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction60:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction60:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction60:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction60:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction60:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction60:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction60:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction60:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction60:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction60:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction60:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction60:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction60:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction60:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction60:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction60___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction60:parser#ReduceAction60#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction60:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction60:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction60:kernel#Object#init */
}
};
/* allocate ReduceAction60 */
val* NEW_nit__parser__ReduceAction60(const struct type* type) {
val* self /* : ReduceAction60 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction60;
return self;
}
/* runtime class nit__parser__ReduceAction61 */
const struct class class_nit__parser__ReduceAction61 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction61:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction61:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction61:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction61:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction61:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction61:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction61:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction61:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction61:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction61:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction61:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction61:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction61:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction61:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction61:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction61:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction61___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction61:parser#ReduceAction61#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction61:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction61:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction61:kernel#Object#init */
}
};
/* allocate ReduceAction61 */
val* NEW_nit__parser__ReduceAction61(const struct type* type) {
val* self /* : ReduceAction61 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction61;
return self;
}
/* runtime class nit__parser__ReduceAction62 */
const struct class class_nit__parser__ReduceAction62 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction62:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction62:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction62:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction62:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction62:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction62:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction62:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction62:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction62:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction62:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction62:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction62:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction62:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction62:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction62:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction62:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction62___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction62:parser#ReduceAction62#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction62:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction62:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction62:kernel#Object#init */
}
};
/* allocate ReduceAction62 */
val* NEW_nit__parser__ReduceAction62(const struct type* type) {
val* self /* : ReduceAction62 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction62;
return self;
}
/* runtime class nit__parser__ReduceAction63 */
const struct class class_nit__parser__ReduceAction63 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction63:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction63:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction63:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction63:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction63:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction63:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction63:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction63:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction63:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction63:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction63:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction63:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction63:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction63:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction63:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction63:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction63___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction63:parser#ReduceAction63#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction63:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction63:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction63:kernel#Object#init */
}
};
/* allocate ReduceAction63 */
val* NEW_nit__parser__ReduceAction63(const struct type* type) {
val* self /* : ReduceAction63 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction63;
return self;
}
/* runtime class nit__parser__ReduceAction64 */
const struct class class_nit__parser__ReduceAction64 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction64:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction64:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction64:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction64:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction64:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction64:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction64:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction64:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction64:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction64:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction64:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction64:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction64:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction64:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction64:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction64:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction64___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction64:parser#ReduceAction64#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction64:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction64:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction64:kernel#Object#init */
}
};
/* allocate ReduceAction64 */
val* NEW_nit__parser__ReduceAction64(const struct type* type) {
val* self /* : ReduceAction64 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction64;
return self;
}
/* runtime class nit__parser__ReduceAction65 */
const struct class class_nit__parser__ReduceAction65 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction65:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction65:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction65:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction65:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction65:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction65:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction65:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction65:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction65:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction65:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction65:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction65:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction65:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction65:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction65:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction65:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction65___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction65:parser#ReduceAction65#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction65:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction65:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction65:kernel#Object#init */
}
};
/* allocate ReduceAction65 */
val* NEW_nit__parser__ReduceAction65(const struct type* type) {
val* self /* : ReduceAction65 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction65;
return self;
}
/* runtime class nit__parser__ReduceAction66 */
const struct class class_nit__parser__ReduceAction66 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction66:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction66:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction66:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction66:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction66:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction66:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction66:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction66:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction66:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction66:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction66:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction66:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction66:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction66:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction66:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction66:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction66___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction66:parser#ReduceAction66#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction66:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction66:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction66:kernel#Object#init */
}
};
/* allocate ReduceAction66 */
val* NEW_nit__parser__ReduceAction66(const struct type* type) {
val* self /* : ReduceAction66 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction66;
return self;
}
/* runtime class nit__parser__ReduceAction67 */
const struct class class_nit__parser__ReduceAction67 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction67:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction67:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction67:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction67:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction67:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction67:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction67:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction67:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction67:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction67:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction67:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction67:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction67:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction67:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction67:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction67:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction67___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction67:parser#ReduceAction67#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction67:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction67:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction67:kernel#Object#init */
}
};
/* allocate ReduceAction67 */
val* NEW_nit__parser__ReduceAction67(const struct type* type) {
val* self /* : ReduceAction67 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction67;
return self;
}
/* runtime class nit__parser__ReduceAction68 */
const struct class class_nit__parser__ReduceAction68 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction68:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction68:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction68:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction68:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction68:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction68:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction68:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction68:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction68:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction68:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction68:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction68:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction68:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction68:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction68:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction68:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction68___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction68:parser#ReduceAction68#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction68:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction68:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction68:kernel#Object#init */
}
};
/* allocate ReduceAction68 */
val* NEW_nit__parser__ReduceAction68(const struct type* type) {
val* self /* : ReduceAction68 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction68;
return self;
}
/* runtime class nit__parser__ReduceAction69 */
const struct class class_nit__parser__ReduceAction69 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction69:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction69:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction69:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction69:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction69:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction69:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction69:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction69:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction69:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction69:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction69:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction69:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction69:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction69:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction69:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction69:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction69___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction69:parser#ReduceAction69#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction69:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction69:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction69:kernel#Object#init */
}
};
/* allocate ReduceAction69 */
val* NEW_nit__parser__ReduceAction69(const struct type* type) {
val* self /* : ReduceAction69 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction69;
return self;
}
/* runtime class nit__parser__ReduceAction70 */
const struct class class_nit__parser__ReduceAction70 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction70:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction70:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction70:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction70:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction70:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction70:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction70:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction70:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction70:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction70:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction70:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction70:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction70:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction70:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction70:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction70:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction70___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction70:parser#ReduceAction70#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction70:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction70:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction70:kernel#Object#init */
}
};
/* allocate ReduceAction70 */
val* NEW_nit__parser__ReduceAction70(const struct type* type) {
val* self /* : ReduceAction70 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction70;
return self;
}
/* runtime class nit__parser__ReduceAction71 */
const struct class class_nit__parser__ReduceAction71 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction71:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction71:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction71:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction71:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction71:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction71:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction71:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction71:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction71:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction71:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction71:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction71:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction71:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction71:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction71:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction71:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction71___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction71:parser#ReduceAction71#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction71:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction71:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction71:kernel#Object#init */
}
};
/* allocate ReduceAction71 */
val* NEW_nit__parser__ReduceAction71(const struct type* type) {
val* self /* : ReduceAction71 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction71;
return self;
}
/* runtime class nit__parser__ReduceAction72 */
const struct class class_nit__parser__ReduceAction72 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction72:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction72:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction72:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction72:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction72:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction72:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction72:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction72:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction72:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction72:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction72:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction72:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction72:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction72:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction72:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction72:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction72___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction72:parser#ReduceAction72#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction72:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction72:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction72:kernel#Object#init */
}
};
/* allocate ReduceAction72 */
val* NEW_nit__parser__ReduceAction72(const struct type* type) {
val* self /* : ReduceAction72 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction72;
return self;
}
/* runtime class nit__parser__ReduceAction73 */
const struct class class_nit__parser__ReduceAction73 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction73:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction73:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction73:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction73:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction73:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction73:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction73:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction73:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction73:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction73:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction73:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction73:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction73:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction73:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction73:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction73:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction73___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction73:parser#ReduceAction73#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction73:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction73:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction73:kernel#Object#init */
}
};
/* allocate ReduceAction73 */
val* NEW_nit__parser__ReduceAction73(const struct type* type) {
val* self /* : ReduceAction73 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction73;
return self;
}
/* runtime class nit__parser__ReduceAction74 */
const struct class class_nit__parser__ReduceAction74 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction74:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction74:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction74:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction74:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction74:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction74:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction74:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction74:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction74:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction74:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction74:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction74:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction74:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction74:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction74:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction74:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction74___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction74:parser#ReduceAction74#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction74:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction74:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction74:kernel#Object#init */
}
};
/* allocate ReduceAction74 */
val* NEW_nit__parser__ReduceAction74(const struct type* type) {
val* self /* : ReduceAction74 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction74;
return self;
}
/* runtime class nit__parser__ReduceAction76 */
const struct class class_nit__parser__ReduceAction76 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction76:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction76:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction76:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction76:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction76:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction76:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction76:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction76:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction76:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction76:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction76:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction76:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction76:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction76:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction76:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction76:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction76___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction76:parser#ReduceAction76#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction76:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction76:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction76:kernel#Object#init */
}
};
/* allocate ReduceAction76 */
val* NEW_nit__parser__ReduceAction76(const struct type* type) {
val* self /* : ReduceAction76 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction76;
return self;
}
/* runtime class nit__parser__ReduceAction77 */
const struct class class_nit__parser__ReduceAction77 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction77:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction77:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction77:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction77:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction77:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction77:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction77:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction77:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction77:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction77:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction77:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction77:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction77:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction77:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction77:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction77:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction77___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction77:parser#ReduceAction77#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction77:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction77:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction77:kernel#Object#init */
}
};
/* allocate ReduceAction77 */
val* NEW_nit__parser__ReduceAction77(const struct type* type) {
val* self /* : ReduceAction77 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction77;
return self;
}
/* runtime class nit__parser__ReduceAction80 */
const struct class class_nit__parser__ReduceAction80 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction80:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction80:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction80:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction80:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction80:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction80:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction80:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction80:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction80:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction80:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction80:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction80:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction80:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction80:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction80:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction80:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction80___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction80:parser#ReduceAction80#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction80:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction80:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction80:kernel#Object#init */
}
};
/* allocate ReduceAction80 */
val* NEW_nit__parser__ReduceAction80(const struct type* type) {
val* self /* : ReduceAction80 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction80;
return self;
}
/* runtime class nit__parser__ReduceAction81 */
const struct class class_nit__parser__ReduceAction81 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction81:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction81:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction81:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction81:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction81:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction81:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction81:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction81:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction81:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction81:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction81:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction81:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction81:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction81:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction81:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction81:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction81___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction81:parser#ReduceAction81#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction81:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction81:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction81:kernel#Object#init */
}
};
/* allocate ReduceAction81 */
val* NEW_nit__parser__ReduceAction81(const struct type* type) {
val* self /* : ReduceAction81 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction81;
return self;
}
/* runtime class nit__parser__ReduceAction82 */
const struct class class_nit__parser__ReduceAction82 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction82:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction82:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction82:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction82:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction82:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction82:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction82:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction82:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction82:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction82:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction82:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction82:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction82:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction82:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction82:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction82:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction82___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction82:parser#ReduceAction82#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction82:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction82:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction82:kernel#Object#init */
}
};
/* allocate ReduceAction82 */
val* NEW_nit__parser__ReduceAction82(const struct type* type) {
val* self /* : ReduceAction82 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction82;
return self;
}
/* runtime class nit__parser__ReduceAction83 */
const struct class class_nit__parser__ReduceAction83 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction83:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction83:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction83:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction83:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction83:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction83:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction83:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction83:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction83:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction83:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction83:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction83:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction83:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction83:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction83:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction83:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction83___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction83:parser#ReduceAction83#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction83:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction83:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction83:kernel#Object#init */
}
};
/* allocate ReduceAction83 */
val* NEW_nit__parser__ReduceAction83(const struct type* type) {
val* self /* : ReduceAction83 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction83;
return self;
}
/* runtime class nit__parser__ReduceAction84 */
const struct class class_nit__parser__ReduceAction84 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction84:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction84:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction84:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction84:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction84:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction84:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction84:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction84:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction84:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction84:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction84:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction84:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction84:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction84:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction84:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction84:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction84___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction84:parser#ReduceAction84#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction84:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction84:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction84:kernel#Object#init */
}
};
/* allocate ReduceAction84 */
val* NEW_nit__parser__ReduceAction84(const struct type* type) {
val* self /* : ReduceAction84 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction84;
return self;
}
/* runtime class nit__parser__ReduceAction85 */
const struct class class_nit__parser__ReduceAction85 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction85:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction85:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction85:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction85:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction85:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction85:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction85:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction85:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction85:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction85:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction85:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction85:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction85:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction85:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction85:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction85:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction85___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction85:parser#ReduceAction85#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction85:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction85:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction85:kernel#Object#init */
}
};
/* allocate ReduceAction85 */
val* NEW_nit__parser__ReduceAction85(const struct type* type) {
val* self /* : ReduceAction85 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction85;
return self;
}
/* runtime class nit__parser__ReduceAction86 */
const struct class class_nit__parser__ReduceAction86 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction86:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction86:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction86:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction86:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction86:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction86:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction86:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction86:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction86:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction86:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction86:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction86:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction86:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction86:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction86:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction86:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction86___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction86:parser#ReduceAction86#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction86:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction86:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction86:kernel#Object#init */
}
};
/* allocate ReduceAction86 */
val* NEW_nit__parser__ReduceAction86(const struct type* type) {
val* self /* : ReduceAction86 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction86;
return self;
}
/* runtime class nit__parser__ReduceAction87 */
const struct class class_nit__parser__ReduceAction87 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction87:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction87:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction87:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction87:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction87:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction87:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction87:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction87:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction87:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction87:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction87:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction87:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction87:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction87:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction87:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction87:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction87___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction87:parser#ReduceAction87#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction87:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction87:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction87:kernel#Object#init */
}
};
/* allocate ReduceAction87 */
val* NEW_nit__parser__ReduceAction87(const struct type* type) {
val* self /* : ReduceAction87 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction87;
return self;
}
/* runtime class nit__parser__ReduceAction88 */
const struct class class_nit__parser__ReduceAction88 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction88:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction88:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction88:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction88:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction88:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction88:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction88:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction88:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction88:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction88:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction88:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction88:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction88:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction88:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction88:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction88:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction88___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction88:parser#ReduceAction88#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction88:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction88:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction88:kernel#Object#init */
}
};
/* allocate ReduceAction88 */
val* NEW_nit__parser__ReduceAction88(const struct type* type) {
val* self /* : ReduceAction88 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction88;
return self;
}
/* runtime class nit__parser__ReduceAction89 */
const struct class class_nit__parser__ReduceAction89 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction89:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction89:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction89:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction89:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction89:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction89:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction89:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction89:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction89:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction89:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction89:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction89:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction89:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction89:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction89:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction89:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction89___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction89:parser#ReduceAction89#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction89:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction89:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction89:kernel#Object#init */
}
};
/* allocate ReduceAction89 */
val* NEW_nit__parser__ReduceAction89(const struct type* type) {
val* self /* : ReduceAction89 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction89;
return self;
}
/* runtime class nit__parser__ReduceAction90 */
const struct class class_nit__parser__ReduceAction90 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction90:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction90:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction90:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction90:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction90:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction90:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction90:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction90:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction90:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction90:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction90:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction90:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction90:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction90:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction90:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction90:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction90___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction90:parser#ReduceAction90#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction90:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction90:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction90:kernel#Object#init */
}
};
/* allocate ReduceAction90 */
val* NEW_nit__parser__ReduceAction90(const struct type* type) {
val* self /* : ReduceAction90 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction90;
return self;
}
/* runtime class nit__parser__ReduceAction91 */
const struct class class_nit__parser__ReduceAction91 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction91:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction91:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction91:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction91:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction91:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction91:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction91:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction91:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction91:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction91:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction91:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction91:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction91:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction91:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction91:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction91:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction91___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction91:parser#ReduceAction91#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction91:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction91:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction91:kernel#Object#init */
}
};
/* allocate ReduceAction91 */
val* NEW_nit__parser__ReduceAction91(const struct type* type) {
val* self /* : ReduceAction91 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction91;
return self;
}
/* runtime class nit__parser__ReduceAction92 */
const struct class class_nit__parser__ReduceAction92 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction92:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction92:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction92:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction92:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction92:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction92:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction92:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction92:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction92:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction92:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction92:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction92:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction92:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction92:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction92:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction92:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction92___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction92:parser#ReduceAction92#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction92:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction92:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction92:kernel#Object#init */
}
};
/* allocate ReduceAction92 */
val* NEW_nit__parser__ReduceAction92(const struct type* type) {
val* self /* : ReduceAction92 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction92;
return self;
}
/* runtime class nit__parser__ReduceAction93 */
const struct class class_nit__parser__ReduceAction93 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction93:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction93:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction93:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction93:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction93:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction93:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction93:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction93:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction93:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction93:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction93:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction93:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction93:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction93:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction93:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction93:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction93___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction93:parser#ReduceAction93#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction93:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction93:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction93:kernel#Object#init */
}
};
/* allocate ReduceAction93 */
val* NEW_nit__parser__ReduceAction93(const struct type* type) {
val* self /* : ReduceAction93 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction93;
return self;
}
/* runtime class nit__parser__ReduceAction94 */
const struct class class_nit__parser__ReduceAction94 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction94:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction94:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction94:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction94:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction94:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction94:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction94:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction94:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction94:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction94:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction94:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction94:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction94:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction94:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction94:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction94:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction94___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction94:parser#ReduceAction94#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction94:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction94:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction94:kernel#Object#init */
}
};
/* allocate ReduceAction94 */
val* NEW_nit__parser__ReduceAction94(const struct type* type) {
val* self /* : ReduceAction94 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction94;
return self;
}
/* runtime class nit__parser__ReduceAction95 */
const struct class class_nit__parser__ReduceAction95 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction95:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction95:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction95:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction95:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction95:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction95:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction95:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction95:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction95:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction95:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction95:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction95:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction95:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction95:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction95:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction95:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction95___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction95:parser#ReduceAction95#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction95:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction95:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction95:kernel#Object#init */
}
};
/* allocate ReduceAction95 */
val* NEW_nit__parser__ReduceAction95(const struct type* type) {
val* self /* : ReduceAction95 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction95;
return self;
}
/* runtime class nit__parser__ReduceAction96 */
const struct class class_nit__parser__ReduceAction96 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction96:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction96:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction96:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction96:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction96:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction96:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction96:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction96:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction96:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction96:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction96:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction96:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction96:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction96:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction96:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction96:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction96___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction96:parser#ReduceAction96#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction96:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction96:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction96:kernel#Object#init */
}
};
/* allocate ReduceAction96 */
val* NEW_nit__parser__ReduceAction96(const struct type* type) {
val* self /* : ReduceAction96 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction96;
return self;
}
/* runtime class nit__parser__ReduceAction97 */
const struct class class_nit__parser__ReduceAction97 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction97:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction97:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction97:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction97:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction97:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction97:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction97:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction97:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction97:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction97:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction97:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction97:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction97:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction97:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction97:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction97:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction97___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction97:parser#ReduceAction97#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction97:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction97:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction97:kernel#Object#init */
}
};
/* allocate ReduceAction97 */
val* NEW_nit__parser__ReduceAction97(const struct type* type) {
val* self /* : ReduceAction97 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction97;
return self;
}
/* runtime class nit__parser__ReduceAction98 */
const struct class class_nit__parser__ReduceAction98 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction98:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction98:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction98:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction98:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction98:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction98:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction98:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction98:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction98:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction98:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction98:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction98:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction98:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction98:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction98:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction98:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction98___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction98:parser#ReduceAction98#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction98:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction98:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction98:kernel#Object#init */
}
};
/* allocate ReduceAction98 */
val* NEW_nit__parser__ReduceAction98(const struct type* type) {
val* self /* : ReduceAction98 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction98;
return self;
}
/* runtime class nit__parser__ReduceAction99 */
const struct class class_nit__parser__ReduceAction99 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction99:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction99:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction99:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction99:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction99:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction99:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction99:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction99:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction99:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction99:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction99:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction99:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction99:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction99:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction99:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction99:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction99___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction99:parser#ReduceAction99#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction99:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction99:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction99:kernel#Object#init */
}
};
/* allocate ReduceAction99 */
val* NEW_nit__parser__ReduceAction99(const struct type* type) {
val* self /* : ReduceAction99 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction99;
return self;
}
/* runtime class nit__parser__ReduceAction100 */
const struct class class_nit__parser__ReduceAction100 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction100:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction100:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction100:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction100:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction100:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction100:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction100:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction100:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction100:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction100:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction100:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction100:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction100:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction100:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction100:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction100:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction100___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction100:parser#ReduceAction100#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction100:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction100:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction100:kernel#Object#init */
}
};
/* allocate ReduceAction100 */
val* NEW_nit__parser__ReduceAction100(const struct type* type) {
val* self /* : ReduceAction100 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction100;
return self;
}
/* runtime class nit__parser__ReduceAction101 */
const struct class class_nit__parser__ReduceAction101 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction101:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction101:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction101:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction101:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction101:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction101:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction101:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction101:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction101:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction101:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction101:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction101:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction101:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction101:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction101:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction101:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction101___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction101:parser#ReduceAction101#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction101:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction101:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction101:kernel#Object#init */
}
};
/* allocate ReduceAction101 */
val* NEW_nit__parser__ReduceAction101(const struct type* type) {
val* self /* : ReduceAction101 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction101;
return self;
}
/* runtime class nit__parser__ReduceAction102 */
const struct class class_nit__parser__ReduceAction102 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction102:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction102:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction102:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction102:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction102:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction102:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction102:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction102:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction102:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction102:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction102:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction102:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction102:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction102:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction102:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction102:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction102___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction102:parser#ReduceAction102#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction102:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction102:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction102:kernel#Object#init */
}
};
/* allocate ReduceAction102 */
val* NEW_nit__parser__ReduceAction102(const struct type* type) {
val* self /* : ReduceAction102 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction102;
return self;
}
/* runtime class nit__parser__ReduceAction103 */
const struct class class_nit__parser__ReduceAction103 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction103:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction103:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction103:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction103:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction103:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction103:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction103:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction103:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction103:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction103:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction103:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction103:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction103:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction103:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction103:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction103:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction103___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction103:parser#ReduceAction103#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction103:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction103:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction103:kernel#Object#init */
}
};
/* allocate ReduceAction103 */
val* NEW_nit__parser__ReduceAction103(const struct type* type) {
val* self /* : ReduceAction103 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction103;
return self;
}
/* runtime class nit__parser__ReduceAction104 */
const struct class class_nit__parser__ReduceAction104 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction104:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction104:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction104:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction104:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction104:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction104:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction104:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction104:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction104:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction104:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction104:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction104:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction104:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction104:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction104:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction104:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction104___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction104:parser#ReduceAction104#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction104:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction104:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction104:kernel#Object#init */
}
};
/* allocate ReduceAction104 */
val* NEW_nit__parser__ReduceAction104(const struct type* type) {
val* self /* : ReduceAction104 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction104;
return self;
}
/* runtime class nit__parser__ReduceAction105 */
const struct class class_nit__parser__ReduceAction105 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction105:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction105:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction105:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction105:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction105:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction105:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction105:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction105:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction105:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction105:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction105:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction105:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction105:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction105:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction105:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction105:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction105___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction105:parser#ReduceAction105#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction105:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction105:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction105:kernel#Object#init */
}
};
/* allocate ReduceAction105 */
val* NEW_nit__parser__ReduceAction105(const struct type* type) {
val* self /* : ReduceAction105 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction105;
return self;
}
/* runtime class nit__parser__ReduceAction106 */
const struct class class_nit__parser__ReduceAction106 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction106:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction106:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction106:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction106:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction106:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction106:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction106:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction106:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction106:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction106:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction106:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction106:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction106:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction106:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction106:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction106:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction106___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction106:parser#ReduceAction106#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction106:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction106:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction106:kernel#Object#init */
}
};
/* allocate ReduceAction106 */
val* NEW_nit__parser__ReduceAction106(const struct type* type) {
val* self /* : ReduceAction106 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction106;
return self;
}
/* runtime class nit__parser__ReduceAction107 */
const struct class class_nit__parser__ReduceAction107 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction107:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction107:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction107:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction107:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction107:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction107:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction107:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction107:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction107:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction107:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction107:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction107:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction107:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction107:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction107:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction107:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction107___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction107:parser#ReduceAction107#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction107:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction107:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction107:kernel#Object#init */
}
};
/* allocate ReduceAction107 */
val* NEW_nit__parser__ReduceAction107(const struct type* type) {
val* self /* : ReduceAction107 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction107;
return self;
}
/* runtime class nit__parser__ReduceAction108 */
const struct class class_nit__parser__ReduceAction108 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction108:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction108:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction108:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction108:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction108:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction108:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction108:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction108:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction108:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction108:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction108:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction108:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction108:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction108:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction108:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction108:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction108___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction108:parser#ReduceAction108#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction108:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction108:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction108:kernel#Object#init */
}
};
/* allocate ReduceAction108 */
val* NEW_nit__parser__ReduceAction108(const struct type* type) {
val* self /* : ReduceAction108 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction108;
return self;
}
/* runtime class nit__parser__ReduceAction109 */
const struct class class_nit__parser__ReduceAction109 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction109:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction109:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction109:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction109:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction109:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction109:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction109:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction109:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction109:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction109:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction109:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction109:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction109:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction109:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction109:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction109:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction109___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction109:parser#ReduceAction109#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction109:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction109:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction109:kernel#Object#init */
}
};
/* allocate ReduceAction109 */
val* NEW_nit__parser__ReduceAction109(const struct type* type) {
val* self /* : ReduceAction109 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction109;
return self;
}
/* runtime class nit__parser__ReduceAction110 */
const struct class class_nit__parser__ReduceAction110 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction110:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction110:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction110:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction110:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction110:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction110:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction110:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction110:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction110:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction110:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction110:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction110:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction110:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction110:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction110:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction110:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction110___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction110:parser#ReduceAction110#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction110:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction110:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction110:kernel#Object#init */
}
};
/* allocate ReduceAction110 */
val* NEW_nit__parser__ReduceAction110(const struct type* type) {
val* self /* : ReduceAction110 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction110;
return self;
}
/* runtime class nit__parser__ReduceAction111 */
const struct class class_nit__parser__ReduceAction111 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction111:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction111:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction111:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction111:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction111:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction111:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction111:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction111:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction111:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction111:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction111:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction111:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction111:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction111:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction111:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction111:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction111___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction111:parser#ReduceAction111#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction111:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction111:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction111:kernel#Object#init */
}
};
/* allocate ReduceAction111 */
val* NEW_nit__parser__ReduceAction111(const struct type* type) {
val* self /* : ReduceAction111 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction111;
return self;
}
/* runtime class nit__parser__ReduceAction112 */
const struct class class_nit__parser__ReduceAction112 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction112:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction112:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction112:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction112:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction112:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction112:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction112:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction112:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction112:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction112:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction112:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction112:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction112:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction112:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction112:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction112:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction112___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction112:parser#ReduceAction112#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction112:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction112:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction112:kernel#Object#init */
}
};
/* allocate ReduceAction112 */
val* NEW_nit__parser__ReduceAction112(const struct type* type) {
val* self /* : ReduceAction112 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction112;
return self;
}
/* runtime class nit__parser__ReduceAction113 */
const struct class class_nit__parser__ReduceAction113 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction113:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction113:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction113:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction113:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction113:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction113:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction113:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction113:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction113:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction113:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction113:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction113:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction113:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction113:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction113:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction113:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction113___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction113:parser#ReduceAction113#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction113:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction113:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction113:kernel#Object#init */
}
};
/* allocate ReduceAction113 */
val* NEW_nit__parser__ReduceAction113(const struct type* type) {
val* self /* : ReduceAction113 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction113;
return self;
}
/* runtime class nit__parser__ReduceAction114 */
const struct class class_nit__parser__ReduceAction114 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction114:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction114:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction114:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction114:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction114:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction114:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction114:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction114:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction114:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction114:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction114:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction114:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction114:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction114:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction114:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction114:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction114___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction114:parser#ReduceAction114#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction114:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction114:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction114:kernel#Object#init */
}
};
/* allocate ReduceAction114 */
val* NEW_nit__parser__ReduceAction114(const struct type* type) {
val* self /* : ReduceAction114 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction114;
return self;
}
/* runtime class nit__parser__ReduceAction116 */
const struct class class_nit__parser__ReduceAction116 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction116:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction116:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction116:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction116:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction116:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction116:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction116:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction116:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction116:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction116:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction116:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction116:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction116:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction116:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction116:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction116:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction116___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction116:parser#ReduceAction116#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction116:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction116:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction116:kernel#Object#init */
}
};
/* allocate ReduceAction116 */
val* NEW_nit__parser__ReduceAction116(const struct type* type) {
val* self /* : ReduceAction116 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction116;
return self;
}
/* runtime class nit__parser__ReduceAction117 */
const struct class class_nit__parser__ReduceAction117 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction117:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction117:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction117:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction117:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction117:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction117:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction117:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction117:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction117:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction117:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction117:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction117:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction117:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction117:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction117:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction117:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction117___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction117:parser#ReduceAction117#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction117:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction117:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction117:kernel#Object#init */
}
};
/* allocate ReduceAction117 */
val* NEW_nit__parser__ReduceAction117(const struct type* type) {
val* self /* : ReduceAction117 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction117;
return self;
}
/* runtime class nit__parser__ReduceAction118 */
const struct class class_nit__parser__ReduceAction118 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction118:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction118:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction118:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction118:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction118:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction118:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction118:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction118:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction118:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction118:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction118:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction118:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction118:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction118:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction118:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction118:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction118___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction118:parser#ReduceAction118#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction118:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction118:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction118:kernel#Object#init */
}
};
/* allocate ReduceAction118 */
val* NEW_nit__parser__ReduceAction118(const struct type* type) {
val* self /* : ReduceAction118 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction118;
return self;
}
/* runtime class nit__parser__ReduceAction119 */
const struct class class_nit__parser__ReduceAction119 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction119:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction119:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction119:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction119:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction119:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction119:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction119:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction119:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction119:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction119:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction119:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction119:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction119:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction119:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction119:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction119:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction119___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction119:parser#ReduceAction119#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction119:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction119:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction119:kernel#Object#init */
}
};
/* allocate ReduceAction119 */
val* NEW_nit__parser__ReduceAction119(const struct type* type) {
val* self /* : ReduceAction119 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction119;
return self;
}
/* runtime class nit__parser__ReduceAction120 */
const struct class class_nit__parser__ReduceAction120 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction120:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction120:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction120:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction120:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction120:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction120:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction120:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction120:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction120:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction120:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction120:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction120:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction120:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction120:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction120:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction120:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction120___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction120:parser#ReduceAction120#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction120:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction120:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction120:kernel#Object#init */
}
};
/* allocate ReduceAction120 */
val* NEW_nit__parser__ReduceAction120(const struct type* type) {
val* self /* : ReduceAction120 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction120;
return self;
}
/* runtime class nit__parser__ReduceAction121 */
const struct class class_nit__parser__ReduceAction121 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction121:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction121:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction121:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction121:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction121:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction121:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction121:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction121:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction121:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction121:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction121:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction121:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction121:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction121:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction121:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction121:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction121___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction121:parser#ReduceAction121#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction121:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction121:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction121:kernel#Object#init */
}
};
/* allocate ReduceAction121 */
val* NEW_nit__parser__ReduceAction121(const struct type* type) {
val* self /* : ReduceAction121 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction121;
return self;
}
/* runtime class nit__parser__ReduceAction122 */
const struct class class_nit__parser__ReduceAction122 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction122:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction122:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction122:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction122:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction122:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction122:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction122:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction122:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction122:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction122:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction122:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction122:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction122:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction122:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction122:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction122:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction122___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction122:parser#ReduceAction122#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction122:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction122:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction122:kernel#Object#init */
}
};
/* allocate ReduceAction122 */
val* NEW_nit__parser__ReduceAction122(const struct type* type) {
val* self /* : ReduceAction122 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction122;
return self;
}
/* runtime class nit__parser__ReduceAction123 */
const struct class class_nit__parser__ReduceAction123 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction123:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction123:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction123:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction123:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction123:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction123:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction123:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction123:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction123:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction123:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction123:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction123:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction123:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction123:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction123:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction123:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction123___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction123:parser#ReduceAction123#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction123:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction123:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction123:kernel#Object#init */
}
};
/* allocate ReduceAction123 */
val* NEW_nit__parser__ReduceAction123(const struct type* type) {
val* self /* : ReduceAction123 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction123;
return self;
}
/* runtime class nit__parser__ReduceAction125 */
const struct class class_nit__parser__ReduceAction125 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction125:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction125:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction125:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction125:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction125:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction125:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction125:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction125:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction125:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction125:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction125:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction125:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction125:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction125:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction125:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction125:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction125___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction125:parser#ReduceAction125#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction125:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction125:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction125:kernel#Object#init */
}
};
/* allocate ReduceAction125 */
val* NEW_nit__parser__ReduceAction125(const struct type* type) {
val* self /* : ReduceAction125 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction125;
return self;
}
/* runtime class nit__parser__ReduceAction126 */
const struct class class_nit__parser__ReduceAction126 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction126:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction126:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction126:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction126:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction126:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction126:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction126:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction126:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction126:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction126:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction126:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction126:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction126:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction126:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction126:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction126:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction126___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction126:parser#ReduceAction126#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction126:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction126:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction126:kernel#Object#init */
}
};
/* allocate ReduceAction126 */
val* NEW_nit__parser__ReduceAction126(const struct type* type) {
val* self /* : ReduceAction126 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction126;
return self;
}
/* runtime class nit__parser__ReduceAction128 */
const struct class class_nit__parser__ReduceAction128 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction128:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction128:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction128:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction128:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction128:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction128:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction128:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction128:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction128:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction128:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction128:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction128:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction128:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction128:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction128:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction128:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction128___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction128:parser#ReduceAction128#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction128:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction128:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction128:kernel#Object#init */
}
};
/* allocate ReduceAction128 */
val* NEW_nit__parser__ReduceAction128(const struct type* type) {
val* self /* : ReduceAction128 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction128;
return self;
}
/* runtime class nit__parser__ReduceAction129 */
const struct class class_nit__parser__ReduceAction129 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction129:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction129:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction129:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction129:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction129:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction129:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction129:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction129:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction129:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction129:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction129:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction129:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction129:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction129:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction129:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction129:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction129___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction129:parser#ReduceAction129#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction129:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction129:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction129:kernel#Object#init */
}
};
/* allocate ReduceAction129 */
val* NEW_nit__parser__ReduceAction129(const struct type* type) {
val* self /* : ReduceAction129 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction129;
return self;
}
/* runtime class nit__parser__ReduceAction130 */
const struct class class_nit__parser__ReduceAction130 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction130:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction130:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction130:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction130:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction130:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction130:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction130:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction130:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction130:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction130:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction130:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction130:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction130:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction130:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction130:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction130:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction130___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction130:parser#ReduceAction130#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction130:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction130:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction130:kernel#Object#init */
}
};
/* allocate ReduceAction130 */
val* NEW_nit__parser__ReduceAction130(const struct type* type) {
val* self /* : ReduceAction130 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction130;
return self;
}
/* runtime class nit__parser__ReduceAction131 */
const struct class class_nit__parser__ReduceAction131 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction131:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction131:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction131:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction131:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction131:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction131:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction131:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction131:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction131:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction131:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction131:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction131:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction131:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction131:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction131:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction131:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction131___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction131:parser#ReduceAction131#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction131:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction131:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction131:kernel#Object#init */
}
};
/* allocate ReduceAction131 */
val* NEW_nit__parser__ReduceAction131(const struct type* type) {
val* self /* : ReduceAction131 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction131;
return self;
}
/* runtime class nit__parser__ReduceAction132 */
const struct class class_nit__parser__ReduceAction132 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction132:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction132:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction132:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction132:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction132:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction132:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction132:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction132:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction132:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction132:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction132:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction132:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction132:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction132:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction132:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction132:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction132___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction132:parser#ReduceAction132#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction132:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction132:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction132:kernel#Object#init */
}
};
/* allocate ReduceAction132 */
val* NEW_nit__parser__ReduceAction132(const struct type* type) {
val* self /* : ReduceAction132 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction132;
return self;
}
/* runtime class nit__parser__ReduceAction133 */
const struct class class_nit__parser__ReduceAction133 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction133:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction133:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction133:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction133:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction133:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction133:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction133:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction133:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction133:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction133:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction133:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction133:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction133:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction133:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction133:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction133:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction133___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction133:parser#ReduceAction133#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction133:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction133:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction133:kernel#Object#init */
}
};
/* allocate ReduceAction133 */
val* NEW_nit__parser__ReduceAction133(const struct type* type) {
val* self /* : ReduceAction133 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction133;
return self;
}
/* runtime class nit__parser__ReduceAction134 */
const struct class class_nit__parser__ReduceAction134 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction134:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction134:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction134:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction134:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction134:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction134:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction134:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction134:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction134:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction134:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction134:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction134:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction134:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction134:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction134:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction134:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction134___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction134:parser#ReduceAction134#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction134:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction134:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction134:kernel#Object#init */
}
};
/* allocate ReduceAction134 */
val* NEW_nit__parser__ReduceAction134(const struct type* type) {
val* self /* : ReduceAction134 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction134;
return self;
}
/* runtime class nit__parser__ReduceAction135 */
const struct class class_nit__parser__ReduceAction135 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction135:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction135:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction135:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction135:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction135:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction135:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction135:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction135:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction135:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction135:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction135:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction135:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction135:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction135:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction135:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction135:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction135___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction135:parser#ReduceAction135#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction135:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction135:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction135:kernel#Object#init */
}
};
/* allocate ReduceAction135 */
val* NEW_nit__parser__ReduceAction135(const struct type* type) {
val* self /* : ReduceAction135 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction135;
return self;
}
/* runtime class nit__parser__ReduceAction136 */
const struct class class_nit__parser__ReduceAction136 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction136:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction136:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction136:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction136:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction136:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction136:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction136:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction136:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction136:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction136:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction136:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction136:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction136:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction136:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction136:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction136:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction136___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction136:parser#ReduceAction136#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction136:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction136:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction136:kernel#Object#init */
}
};
/* allocate ReduceAction136 */
val* NEW_nit__parser__ReduceAction136(const struct type* type) {
val* self /* : ReduceAction136 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction136;
return self;
}
/* runtime class nit__parser__ReduceAction137 */
const struct class class_nit__parser__ReduceAction137 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction137:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction137:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction137:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction137:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction137:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction137:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction137:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction137:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction137:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction137:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction137:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction137:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction137:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction137:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction137:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction137:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction137___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction137:parser#ReduceAction137#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction137:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction137:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction137:kernel#Object#init */
}
};
/* allocate ReduceAction137 */
val* NEW_nit__parser__ReduceAction137(const struct type* type) {
val* self /* : ReduceAction137 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction137;
return self;
}
/* runtime class nit__parser__ReduceAction139 */
const struct class class_nit__parser__ReduceAction139 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction139:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction139:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction139:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction139:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction139:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction139:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction139:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction139:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction139:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction139:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction139:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction139:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction139:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction139:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction139:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction139:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction139___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction139:parser#ReduceAction139#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction139:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction139:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction139:kernel#Object#init */
}
};
/* allocate ReduceAction139 */
val* NEW_nit__parser__ReduceAction139(const struct type* type) {
val* self /* : ReduceAction139 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction139;
return self;
}
/* runtime class nit__parser__ReduceAction140 */
const struct class class_nit__parser__ReduceAction140 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction140:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction140:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction140:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction140:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction140:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction140:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction140:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction140:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction140:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction140:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction140:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction140:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction140:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction140:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction140:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction140:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction140___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction140:parser#ReduceAction140#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction140:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction140:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction140:kernel#Object#init */
}
};
/* allocate ReduceAction140 */
val* NEW_nit__parser__ReduceAction140(const struct type* type) {
val* self /* : ReduceAction140 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction140;
return self;
}
/* runtime class nit__parser__ReduceAction141 */
const struct class class_nit__parser__ReduceAction141 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction141:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction141:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction141:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction141:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction141:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction141:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction141:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction141:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction141:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction141:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction141:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction141:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction141:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction141:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction141:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction141:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction141___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction141:parser#ReduceAction141#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction141:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction141:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction141:kernel#Object#init */
}
};
/* allocate ReduceAction141 */
val* NEW_nit__parser__ReduceAction141(const struct type* type) {
val* self /* : ReduceAction141 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction141;
return self;
}
/* runtime class nit__parser__ReduceAction142 */
const struct class class_nit__parser__ReduceAction142 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction142:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction142:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction142:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction142:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction142:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction142:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction142:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction142:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction142:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction142:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction142:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction142:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction142:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction142:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction142:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction142:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction142___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction142:parser#ReduceAction142#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction142:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction142:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction142:kernel#Object#init */
}
};
/* allocate ReduceAction142 */
val* NEW_nit__parser__ReduceAction142(const struct type* type) {
val* self /* : ReduceAction142 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction142;
return self;
}
/* runtime class nit__parser__ReduceAction143 */
const struct class class_nit__parser__ReduceAction143 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction143:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction143:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction143:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction143:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction143:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction143:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction143:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction143:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction143:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction143:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction143:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction143:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction143:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction143:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction143:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction143:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction143___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction143:parser#ReduceAction143#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction143:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction143:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction143:kernel#Object#init */
}
};
/* allocate ReduceAction143 */
val* NEW_nit__parser__ReduceAction143(const struct type* type) {
val* self /* : ReduceAction143 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction143;
return self;
}
/* runtime class nit__parser__ReduceAction145 */
const struct class class_nit__parser__ReduceAction145 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction145:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction145:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction145:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction145:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction145:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction145:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction145:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction145:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction145:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction145:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction145:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction145:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction145:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction145:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction145:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction145:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction145___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction145:parser#ReduceAction145#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction145:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction145:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction145:kernel#Object#init */
}
};
/* allocate ReduceAction145 */
val* NEW_nit__parser__ReduceAction145(const struct type* type) {
val* self /* : ReduceAction145 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction145;
return self;
}
/* runtime class nit__parser__ReduceAction146 */
const struct class class_nit__parser__ReduceAction146 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction146:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction146:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction146:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction146:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction146:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction146:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction146:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction146:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction146:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction146:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction146:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction146:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction146:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction146:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction146:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction146:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction146___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction146:parser#ReduceAction146#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction146:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction146:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction146:kernel#Object#init */
}
};
/* allocate ReduceAction146 */
val* NEW_nit__parser__ReduceAction146(const struct type* type) {
val* self /* : ReduceAction146 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction146;
return self;
}
/* runtime class nit__parser__ReduceAction147 */
const struct class class_nit__parser__ReduceAction147 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction147:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction147:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction147:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction147:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction147:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction147:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction147:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction147:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction147:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction147:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction147:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction147:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction147:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction147:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction147:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction147:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction147___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction147:parser#ReduceAction147#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction147:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction147:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction147:kernel#Object#init */
}
};
/* allocate ReduceAction147 */
val* NEW_nit__parser__ReduceAction147(const struct type* type) {
val* self /* : ReduceAction147 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction147;
return self;
}
/* runtime class nit__parser__ReduceAction148 */
const struct class class_nit__parser__ReduceAction148 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction148:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction148:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction148:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction148:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction148:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction148:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction148:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction148:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction148:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction148:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction148:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction148:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction148:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction148:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction148:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction148:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction148___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction148:parser#ReduceAction148#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction148:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction148:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction148:kernel#Object#init */
}
};
/* allocate ReduceAction148 */
val* NEW_nit__parser__ReduceAction148(const struct type* type) {
val* self /* : ReduceAction148 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction148;
return self;
}
/* runtime class nit__parser__ReduceAction149 */
const struct class class_nit__parser__ReduceAction149 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction149:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction149:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction149:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction149:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction149:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction149:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction149:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction149:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction149:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction149:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction149:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction149:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction149:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction149:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction149:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction149:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction149___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction149:parser#ReduceAction149#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction149:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction149:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction149:kernel#Object#init */
}
};
/* allocate ReduceAction149 */
val* NEW_nit__parser__ReduceAction149(const struct type* type) {
val* self /* : ReduceAction149 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction149;
return self;
}
/* runtime class nit__parser__ReduceAction150 */
const struct class class_nit__parser__ReduceAction150 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction150:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction150:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction150:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction150:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction150:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction150:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction150:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction150:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction150:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction150:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction150:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction150:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction150:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction150:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction150:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction150:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction150___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction150:parser#ReduceAction150#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction150:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction150:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction150:kernel#Object#init */
}
};
/* allocate ReduceAction150 */
val* NEW_nit__parser__ReduceAction150(const struct type* type) {
val* self /* : ReduceAction150 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction150;
return self;
}
/* runtime class nit__parser__ReduceAction151 */
const struct class class_nit__parser__ReduceAction151 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction151:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction151:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction151:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction151:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction151:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction151:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction151:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction151:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction151:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction151:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction151:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction151:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction151:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction151:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction151:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction151:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction151___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction151:parser#ReduceAction151#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction151:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction151:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction151:kernel#Object#init */
}
};
/* allocate ReduceAction151 */
val* NEW_nit__parser__ReduceAction151(const struct type* type) {
val* self /* : ReduceAction151 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction151;
return self;
}
/* runtime class nit__parser__ReduceAction152 */
const struct class class_nit__parser__ReduceAction152 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction152:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction152:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction152:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction152:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction152:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction152:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction152:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction152:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction152:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction152:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction152:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction152:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction152:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction152:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction152:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction152:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction152___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction152:parser#ReduceAction152#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction152:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction152:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction152:kernel#Object#init */
}
};
/* allocate ReduceAction152 */
val* NEW_nit__parser__ReduceAction152(const struct type* type) {
val* self /* : ReduceAction152 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction152;
return self;
}
/* runtime class nit__parser__ReduceAction156 */
const struct class class_nit__parser__ReduceAction156 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction156:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction156:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction156:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction156:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction156:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction156:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction156:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction156:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction156:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction156:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction156:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction156:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction156:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction156:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction156:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction156:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction156___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction156:parser#ReduceAction156#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction156:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction156:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction156:kernel#Object#init */
}
};
/* allocate ReduceAction156 */
val* NEW_nit__parser__ReduceAction156(const struct type* type) {
val* self /* : ReduceAction156 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction156;
return self;
}
/* runtime class nit__parser__ReduceAction157 */
const struct class class_nit__parser__ReduceAction157 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction157:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction157:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction157:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction157:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction157:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction157:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction157:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction157:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction157:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction157:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction157:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction157:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction157:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction157:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction157:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction157:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction157___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction157:parser#ReduceAction157#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction157:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction157:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction157:kernel#Object#init */
}
};
/* allocate ReduceAction157 */
val* NEW_nit__parser__ReduceAction157(const struct type* type) {
val* self /* : ReduceAction157 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction157;
return self;
}
/* runtime class nit__parser__ReduceAction158 */
const struct class class_nit__parser__ReduceAction158 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction158:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction158:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction158:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction158:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction158:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction158:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction158:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction158:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction158:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction158:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction158:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction158:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction158:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction158:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction158:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction158:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction158___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction158:parser#ReduceAction158#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction158:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction158:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction158:kernel#Object#init */
}
};
/* allocate ReduceAction158 */
val* NEW_nit__parser__ReduceAction158(const struct type* type) {
val* self /* : ReduceAction158 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction158;
return self;
}
/* runtime class nit__parser__ReduceAction159 */
const struct class class_nit__parser__ReduceAction159 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction159:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction159:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction159:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction159:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction159:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction159:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction159:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction159:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction159:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction159:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction159:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction159:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction159:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction159:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction159:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction159:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction159___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction159:parser#ReduceAction159#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction159:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction159:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction159:kernel#Object#init */
}
};
/* allocate ReduceAction159 */
val* NEW_nit__parser__ReduceAction159(const struct type* type) {
val* self /* : ReduceAction159 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction159;
return self;
}
/* runtime class nit__parser__ReduceAction160 */
const struct class class_nit__parser__ReduceAction160 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction160:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction160:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction160:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction160:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction160:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction160:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction160:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction160:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction160:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction160:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction160:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction160:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction160:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction160:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction160:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction160:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction160___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction160:parser#ReduceAction160#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction160:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction160:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction160:kernel#Object#init */
}
};
/* allocate ReduceAction160 */
val* NEW_nit__parser__ReduceAction160(const struct type* type) {
val* self /* : ReduceAction160 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction160;
return self;
}
/* runtime class nit__parser__ReduceAction161 */
const struct class class_nit__parser__ReduceAction161 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction161:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction161:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction161:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction161:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction161:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction161:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction161:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction161:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction161:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction161:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction161:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction161:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction161:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction161:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction161:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction161:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction161___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction161:parser#ReduceAction161#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction161:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction161:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction161:kernel#Object#init */
}
};
/* allocate ReduceAction161 */
val* NEW_nit__parser__ReduceAction161(const struct type* type) {
val* self /* : ReduceAction161 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction161;
return self;
}
/* runtime class nit__parser__ReduceAction162 */
const struct class class_nit__parser__ReduceAction162 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction162:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction162:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction162:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction162:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction162:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction162:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction162:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction162:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction162:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction162:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction162:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction162:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction162:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction162:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction162:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction162:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction162___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction162:parser#ReduceAction162#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction162:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction162:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction162:kernel#Object#init */
}
};
/* allocate ReduceAction162 */
val* NEW_nit__parser__ReduceAction162(const struct type* type) {
val* self /* : ReduceAction162 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction162;
return self;
}
/* runtime class nit__parser__ReduceAction163 */
const struct class class_nit__parser__ReduceAction163 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction163:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction163:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction163:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction163:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction163:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction163:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction163:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction163:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction163:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction163:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction163:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction163:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction163:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction163:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction163:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction163:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction163___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction163:parser#ReduceAction163#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction163:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction163:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction163:kernel#Object#init */
}
};
/* allocate ReduceAction163 */
val* NEW_nit__parser__ReduceAction163(const struct type* type) {
val* self /* : ReduceAction163 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction163;
return self;
}
/* runtime class nit__parser__ReduceAction164 */
const struct class class_nit__parser__ReduceAction164 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction164:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction164:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction164:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction164:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction164:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction164:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction164:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction164:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction164:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction164:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction164:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction164:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction164:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction164:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction164:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction164:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction164___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction164:parser#ReduceAction164#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction164:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction164:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction164:kernel#Object#init */
}
};
/* allocate ReduceAction164 */
val* NEW_nit__parser__ReduceAction164(const struct type* type) {
val* self /* : ReduceAction164 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction164;
return self;
}
/* runtime class nit__parser__ReduceAction165 */
const struct class class_nit__parser__ReduceAction165 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction165:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction165:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction165:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction165:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction165:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction165:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction165:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction165:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction165:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction165:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction165:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction165:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction165:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction165:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction165:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction165:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction165___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction165:parser#ReduceAction165#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction165:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction165:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction165:kernel#Object#init */
}
};
/* allocate ReduceAction165 */
val* NEW_nit__parser__ReduceAction165(const struct type* type) {
val* self /* : ReduceAction165 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction165;
return self;
}
/* runtime class nit__parser__ReduceAction169 */
const struct class class_nit__parser__ReduceAction169 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction169:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction169:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction169:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction169:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction169:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction169:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction169:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction169:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction169:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction169:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction169:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction169:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction169:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction169:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction169:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction169:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction169___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction169:parser#ReduceAction169#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction169:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction169:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction169:kernel#Object#init */
}
};
/* allocate ReduceAction169 */
val* NEW_nit__parser__ReduceAction169(const struct type* type) {
val* self /* : ReduceAction169 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction169;
return self;
}
/* runtime class nit__parser__ReduceAction170 */
const struct class class_nit__parser__ReduceAction170 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction170:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction170:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction170:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction170:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction170:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction170:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction170:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction170:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction170:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction170:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction170:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction170:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction170:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction170:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction170:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction170:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction170___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction170:parser#ReduceAction170#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction170:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction170:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction170:kernel#Object#init */
}
};
/* allocate ReduceAction170 */
val* NEW_nit__parser__ReduceAction170(const struct type* type) {
val* self /* : ReduceAction170 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction170;
return self;
}
/* runtime class nit__parser__ReduceAction171 */
const struct class class_nit__parser__ReduceAction171 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction171:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction171:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction171:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction171:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction171:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction171:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction171:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction171:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction171:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction171:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction171:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction171:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction171:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction171:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction171:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction171:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction171___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction171:parser#ReduceAction171#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction171:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction171:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction171:kernel#Object#init */
}
};
/* allocate ReduceAction171 */
val* NEW_nit__parser__ReduceAction171(const struct type* type) {
val* self /* : ReduceAction171 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction171;
return self;
}
/* runtime class nit__parser__ReduceAction172 */
const struct class class_nit__parser__ReduceAction172 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction172:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction172:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction172:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction172:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction172:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction172:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction172:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction172:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction172:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction172:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction172:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction172:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction172:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction172:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction172:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction172:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction172___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction172:parser#ReduceAction172#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction172:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction172:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction172:kernel#Object#init */
}
};
/* allocate ReduceAction172 */
val* NEW_nit__parser__ReduceAction172(const struct type* type) {
val* self /* : ReduceAction172 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction172;
return self;
}
/* runtime class nit__parser__ReduceAction173 */
const struct class class_nit__parser__ReduceAction173 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction173:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction173:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction173:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction173:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction173:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction173:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction173:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction173:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction173:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction173:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction173:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction173:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction173:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction173:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction173:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction173:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction173___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction173:parser#ReduceAction173#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction173:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction173:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction173:kernel#Object#init */
}
};
/* allocate ReduceAction173 */
val* NEW_nit__parser__ReduceAction173(const struct type* type) {
val* self /* : ReduceAction173 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction173;
return self;
}
/* runtime class nit__parser__ReduceAction174 */
const struct class class_nit__parser__ReduceAction174 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction174:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction174:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction174:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction174:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction174:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction174:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction174:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction174:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction174:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction174:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction174:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction174:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction174:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction174:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction174:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction174:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction174___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction174:parser#ReduceAction174#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction174:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction174:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction174:kernel#Object#init */
}
};
/* allocate ReduceAction174 */
val* NEW_nit__parser__ReduceAction174(const struct type* type) {
val* self /* : ReduceAction174 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction174;
return self;
}
/* runtime class nit__parser__ReduceAction175 */
const struct class class_nit__parser__ReduceAction175 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction175:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction175:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction175:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction175:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction175:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction175:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction175:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction175:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction175:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction175:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction175:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction175:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction175:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction175:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction175:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction175:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction175___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction175:parser#ReduceAction175#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction175:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction175:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction175:kernel#Object#init */
}
};
/* allocate ReduceAction175 */
val* NEW_nit__parser__ReduceAction175(const struct type* type) {
val* self /* : ReduceAction175 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction175;
return self;
}
/* runtime class nit__parser__ReduceAction183 */
const struct class class_nit__parser__ReduceAction183 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction183:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction183:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction183:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction183:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction183:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction183:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction183:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction183:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction183:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction183:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction183:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction183:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction183:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction183:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction183:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction183:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction183___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction183:parser#ReduceAction183#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction183:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction183:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction183:kernel#Object#init */
}
};
/* allocate ReduceAction183 */
val* NEW_nit__parser__ReduceAction183(const struct type* type) {
val* self /* : ReduceAction183 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction183;
return self;
}
/* runtime class nit__parser__ReduceAction184 */
const struct class class_nit__parser__ReduceAction184 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction184:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction184:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction184:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction184:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction184:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction184:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction184:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction184:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction184:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction184:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction184:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction184:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction184:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction184:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction184:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction184:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction184___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction184:parser#ReduceAction184#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction184:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction184:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction184:kernel#Object#init */
}
};
/* allocate ReduceAction184 */
val* NEW_nit__parser__ReduceAction184(const struct type* type) {
val* self /* : ReduceAction184 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction184;
return self;
}
/* runtime class nit__parser__ReduceAction185 */
const struct class class_nit__parser__ReduceAction185 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction185:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction185:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction185:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction185:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction185:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction185:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction185:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction185:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction185:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction185:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction185:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction185:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction185:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction185:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction185:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction185:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction185___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction185:parser#ReduceAction185#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction185:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction185:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction185:kernel#Object#init */
}
};
/* allocate ReduceAction185 */
val* NEW_nit__parser__ReduceAction185(const struct type* type) {
val* self /* : ReduceAction185 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction185;
return self;
}
/* runtime class nit__parser__ReduceAction187 */
const struct class class_nit__parser__ReduceAction187 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction187:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction187:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction187:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction187:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction187:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction187:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction187:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction187:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction187:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction187:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction187:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction187:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction187:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction187:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction187:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction187:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction187___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction187:parser#ReduceAction187#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction187:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction187:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction187:kernel#Object#init */
}
};
/* allocate ReduceAction187 */
val* NEW_nit__parser__ReduceAction187(const struct type* type) {
val* self /* : ReduceAction187 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction187;
return self;
}
/* runtime class nit__parser__ReduceAction188 */
const struct class class_nit__parser__ReduceAction188 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction188:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction188:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction188:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction188:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction188:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction188:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction188:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction188:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction188:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction188:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction188:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction188:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction188:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction188:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction188:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction188:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction188___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction188:parser#ReduceAction188#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction188:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction188:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction188:kernel#Object#init */
}
};
/* allocate ReduceAction188 */
val* NEW_nit__parser__ReduceAction188(const struct type* type) {
val* self /* : ReduceAction188 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction188;
return self;
}
/* runtime class nit__parser__ReduceAction189 */
const struct class class_nit__parser__ReduceAction189 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction189:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction189:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction189:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction189:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction189:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction189:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction189:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction189:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction189:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction189:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction189:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction189:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction189:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction189:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction189:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction189:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction189___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction189:parser#ReduceAction189#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction189:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction189:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction189:kernel#Object#init */
}
};
/* allocate ReduceAction189 */
val* NEW_nit__parser__ReduceAction189(const struct type* type) {
val* self /* : ReduceAction189 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction189;
return self;
}
/* runtime class nit__parser__ReduceAction191 */
const struct class class_nit__parser__ReduceAction191 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction191:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction191:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction191:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction191:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction191:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction191:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction191:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction191:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction191:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction191:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction191:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction191:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction191:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction191:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction191:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction191:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction191___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction191:parser#ReduceAction191#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction191:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction191:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction191:kernel#Object#init */
}
};
/* allocate ReduceAction191 */
val* NEW_nit__parser__ReduceAction191(const struct type* type) {
val* self /* : ReduceAction191 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction191;
return self;
}
/* runtime class nit__parser__ReduceAction192 */
const struct class class_nit__parser__ReduceAction192 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction192:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction192:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction192:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction192:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction192:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction192:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction192:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction192:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction192:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction192:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction192:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction192:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction192:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction192:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction192:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction192:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction192___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction192:parser#ReduceAction192#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction192:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction192:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction192:kernel#Object#init */
}
};
/* allocate ReduceAction192 */
val* NEW_nit__parser__ReduceAction192(const struct type* type) {
val* self /* : ReduceAction192 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction192;
return self;
}
/* runtime class nit__parser__ReduceAction193 */
const struct class class_nit__parser__ReduceAction193 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction193:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction193:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction193:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction193:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction193:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction193:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction193:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction193:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction193:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction193:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction193:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction193:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction193:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction193:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction193:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction193:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction193___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction193:parser#ReduceAction193#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction193:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction193:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction193:kernel#Object#init */
}
};
/* allocate ReduceAction193 */
val* NEW_nit__parser__ReduceAction193(const struct type* type) {
val* self /* : ReduceAction193 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction193;
return self;
}
/* runtime class nit__parser__ReduceAction194 */
const struct class class_nit__parser__ReduceAction194 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction194:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction194:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction194:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction194:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction194:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction194:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction194:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction194:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction194:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction194:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction194:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction194:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction194:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction194:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction194:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction194:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction194___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction194:parser#ReduceAction194#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction194:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction194:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction194:kernel#Object#init */
}
};
/* allocate ReduceAction194 */
val* NEW_nit__parser__ReduceAction194(const struct type* type) {
val* self /* : ReduceAction194 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction194;
return self;
}
/* runtime class nit__parser__ReduceAction195 */
const struct class class_nit__parser__ReduceAction195 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction195:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction195:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction195:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction195:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction195:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction195:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction195:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction195:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction195:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction195:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction195:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction195:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction195:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction195:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction195:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction195:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction195___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction195:parser#ReduceAction195#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction195:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction195:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction195:kernel#Object#init */
}
};
/* allocate ReduceAction195 */
val* NEW_nit__parser__ReduceAction195(const struct type* type) {
val* self /* : ReduceAction195 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction195;
return self;
}
/* runtime class nit__parser__ReduceAction197 */
const struct class class_nit__parser__ReduceAction197 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction197:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction197:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction197:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction197:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction197:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction197:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction197:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction197:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction197:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction197:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction197:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction197:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction197:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction197:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction197:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction197:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction197___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction197:parser#ReduceAction197#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction197:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction197:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction197:kernel#Object#init */
}
};
/* allocate ReduceAction197 */
val* NEW_nit__parser__ReduceAction197(const struct type* type) {
val* self /* : ReduceAction197 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction197;
return self;
}
/* runtime class nit__parser__ReduceAction198 */
const struct class class_nit__parser__ReduceAction198 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction198:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction198:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction198:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction198:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction198:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction198:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction198:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction198:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction198:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction198:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction198:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction198:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction198:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction198:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction198:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction198:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction198___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction198:parser#ReduceAction198#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction198:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction198:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction198:kernel#Object#init */
}
};
/* allocate ReduceAction198 */
val* NEW_nit__parser__ReduceAction198(const struct type* type) {
val* self /* : ReduceAction198 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction198;
return self;
}
/* runtime class nit__parser__ReduceAction200 */
const struct class class_nit__parser__ReduceAction200 = {
0, /* box_kind */
{
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___standard__kernel__Object__init, /* pointer to parser:ReduceAction200:parser_work#ReduceAction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser:ReduceAction200:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser:ReduceAction200:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser:ReduceAction200:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser:ReduceAction200:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser:ReduceAction200:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser:ReduceAction200:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser:ReduceAction200:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser:ReduceAction200:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser:ReduceAction200:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser:ReduceAction200:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser:ReduceAction200:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser:ReduceAction200:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to parser:ReduceAction200:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to parser:ReduceAction200:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to parser:ReduceAction200:light_c#Object#from_c_call_context */
(nitmethod_t)nit__parser___nit__parser__ReduceAction200___nit__parser_work__ReduceAction__action, /* pointer to parser:ReduceAction200:parser#ReduceAction200#action */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___goto_61d, /* pointer to parser:ReduceAction200:parser_work#ReduceAction#goto= */
(nitmethod_t)nit__parser_work___nit__parser_work__ReduceAction___concat, /* pointer to parser:ReduceAction200:parser_work#ReduceAction#concat */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser:ReduceAction200:kernel#Object#init */
}
};
/* allocate ReduceAction200 */
val* NEW_nit__parser__ReduceAction200(const struct type* type) {
val* self /* : ReduceAction200 */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser__ReduceAction200;
return self;
}
