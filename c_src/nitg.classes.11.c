#include "nitg.classes.0.h"
/* runtime class toolcontext__ToolContext */
const struct class class_toolcontext__ToolContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to toolcontext:ToolContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to toolcontext:ToolContext:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to toolcontext:ToolContext:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to toolcontext:ToolContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to toolcontext:ToolContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to toolcontext:ToolContext:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to toolcontext:ToolContext:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to toolcontext:ToolContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to toolcontext:ToolContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to toolcontext:ToolContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to toolcontext:ToolContext:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to toolcontext:ToolContext:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to toolcontext:ToolContext:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to toolcontext:ToolContext:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to toolcontext:ToolContext:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to toolcontext:ToolContext:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to toolcontext:ToolContext:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to toolcontext:ToolContext:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to toolcontext:ToolContext:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to toolcontext:ToolContext:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to toolcontext:ToolContext:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to toolcontext:ToolContext:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to toolcontext:ToolContext:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to toolcontext:ToolContext:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to toolcontext:ToolContext:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to toolcontext:ToolContext:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to toolcontext:ToolContext:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to toolcontext:ToolContext:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to toolcontext:ToolContext:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to toolcontext:ToolContext:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to toolcontext:ToolContext:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to toolcontext:ToolContext:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to toolcontext:ToolContext:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to toolcontext:ToolContext:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to toolcontext:ToolContext:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to toolcontext:ToolContext:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to toolcontext:ToolContext:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to toolcontext:ToolContext:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to toolcontext:ToolContext:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to toolcontext:ToolContext:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to toolcontext:ToolContext:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to toolcontext:ToolContext:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to toolcontext:ToolContext:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to toolcontext:ToolContext:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to toolcontext:ToolContext:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to toolcontext:ToolContext:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to toolcontext:ToolContext:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to toolcontext:ToolContext:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to toolcontext:ToolContext:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to toolcontext:ToolContext:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to toolcontext:ToolContext:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__error_count, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#error_count */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__error_count_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#error_count= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__warning_count, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#warning_count */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__warning_count_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#warning_count= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__log_directory, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#log_directory */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__log_directory_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#log_directory= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__messages, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#messages */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__messages_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#messages= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__message_sorter, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#message_sorter */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__message_sorter_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#message_sorter= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__check_errors, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#check_errors */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__error, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#error */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__fatal_error, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#fatal_error */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__warning, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#warning */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__info, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#info */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__option_context, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#option_context */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__option_context_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#option_context= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_warn, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_warn */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_warn_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_warn= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_quiet, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_quiet */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_quiet_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_quiet= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_log, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_log */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_log_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_log= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_log_dir, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_log_dir */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_log_dir_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_log_dir= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_help, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_help */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_help_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_help= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_version, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_version */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_version_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_version= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_verbose, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_verbose */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_verbose_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_verbose= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_stop_on_first_error, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_stop_on_first_error */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_stop_on_first_error_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_stop_on_first_error= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_no_color, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_no_color */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_no_color_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_no_color= */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__verbose_level, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#verbose_level */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__verbose_level_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#verbose_level= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__ToolContext__init, /* pointer to toolcontext:ToolContext:separate_erasure_compiler#ToolContext#init */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__process_options, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#process_options */
(nitmethod_t)VIRTUAL_parser_util__ToolContext__parse_module, /* pointer to toolcontext:ToolContext:parser_util#ToolContext#parse_module */
(nitmethod_t)VIRTUAL_parser_util__ToolContext__parse_classdef, /* pointer to toolcontext:ToolContext:parser_util#ToolContext#parse_classdef */
(nitmethod_t)VIRTUAL_parser_util__ToolContext__parse_propdef, /* pointer to toolcontext:ToolContext:parser_util#ToolContext#parse_propdef */
(nitmethod_t)VIRTUAL_parser_util__ToolContext__parse_stmts, /* pointer to toolcontext:ToolContext:parser_util#ToolContext#parse_stmts */
(nitmethod_t)VIRTUAL_parser_util__ToolContext__parse_expr, /* pointer to toolcontext:ToolContext:parser_util#ToolContext#parse_expr */
(nitmethod_t)VIRTUAL_parser_util__ToolContext__parse_something, /* pointer to toolcontext:ToolContext:parser_util#ToolContext#parse_something */
(nitmethod_t)VIRTUAL_phase__ToolContext__phases, /* pointer to toolcontext:ToolContext:phase#ToolContext#phases */
(nitmethod_t)VIRTUAL_phase__ToolContext__phases_61d, /* pointer to toolcontext:ToolContext:phase#ToolContext#phases= */
(nitmethod_t)VIRTUAL_phase__ToolContext__phases_list, /* pointer to toolcontext:ToolContext:phase#ToolContext#phases_list */
(nitmethod_t)VIRTUAL_phase__ToolContext__run_phases, /* pointer to toolcontext:ToolContext:phase#ToolContext#run_phases */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ToolContext__simple_misc_analysis_phase, /* pointer to toolcontext:ToolContext:simple_misc_analysis#ToolContext#simple_misc_analysis_phase */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ToolContext__simple_misc_analysis_phase_61d, /* pointer to toolcontext:ToolContext:simple_misc_analysis#ToolContext#simple_misc_analysis_phase= */
(nitmethod_t)VIRTUAL_literal__ToolContext__literal_phase, /* pointer to toolcontext:ToolContext:literal#ToolContext#literal_phase */
(nitmethod_t)VIRTUAL_literal__ToolContext__literal_phase_61d, /* pointer to toolcontext:ToolContext:literal#ToolContext#literal_phase= */
(nitmethod_t)VIRTUAL_scope__ToolContext__scope_phase, /* pointer to toolcontext:ToolContext:scope#ToolContext#scope_phase */
(nitmethod_t)VIRTUAL_scope__ToolContext__scope_phase_61d, /* pointer to toolcontext:ToolContext:scope#ToolContext#scope_phase= */
(nitmethod_t)VIRTUAL_flow__ToolContext__flow_phase, /* pointer to toolcontext:ToolContext:flow#ToolContext#flow_phase */
(nitmethod_t)VIRTUAL_flow__ToolContext__flow_phase_61d, /* pointer to toolcontext:ToolContext:flow#ToolContext#flow_phase= */
(nitmethod_t)VIRTUAL_serialization_phase__ToolContext__serialization_phase, /* pointer to toolcontext:ToolContext:serialization_phase#ToolContext#serialization_phase */
(nitmethod_t)VIRTUAL_serialization_phase__ToolContext__serialization_phase_61d, /* pointer to toolcontext:ToolContext:serialization_phase#ToolContext#serialization_phase= */
(nitmethod_t)VIRTUAL_local_var_init__ToolContext__local_var_init_phase, /* pointer to toolcontext:ToolContext:local_var_init#ToolContext#local_var_init_phase */
(nitmethod_t)VIRTUAL_local_var_init__ToolContext__local_var_init_phase_61d, /* pointer to toolcontext:ToolContext:local_var_init#ToolContext#local_var_init_phase= */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__opt_path, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#opt_path */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__opt_path_61d, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#opt_path= */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__opt_only_metamodel, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#opt_only_metamodel */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__opt_only_metamodel_61d, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#opt_only_metamodel= */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__opt_only_parse, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#opt_only_parse */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__opt_only_parse_61d, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#opt_only_parse= */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__modelbuilder, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#modelbuilder */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__modelbuilder_real, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#modelbuilder_real */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__modelbuilder_real_61d, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#modelbuilder_real= */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__run_global_phases, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#run_global_phases */
(nitmethod_t)VIRTUAL_modelize_class__ToolContext__modelize_class_phase, /* pointer to toolcontext:ToolContext:modelize_class#ToolContext#modelize_class_phase */
(nitmethod_t)VIRTUAL_modelize_class__ToolContext__modelize_class_phase_61d, /* pointer to toolcontext:ToolContext:modelize_class#ToolContext#modelize_class_phase= */
(nitmethod_t)VIRTUAL_modelize_property__ToolContext__modelize_property_phase, /* pointer to toolcontext:ToolContext:modelize_property#ToolContext#modelize_property_phase */
(nitmethod_t)VIRTUAL_modelize_property__ToolContext__modelize_property_phase_61d, /* pointer to toolcontext:ToolContext:modelize_property#ToolContext#modelize_property_phase= */
(nitmethod_t)VIRTUAL_cached__ToolContext__cached_phase, /* pointer to toolcontext:ToolContext:cached#ToolContext#cached_phase */
(nitmethod_t)VIRTUAL_cached__ToolContext__cached_phase_61d, /* pointer to toolcontext:ToolContext:cached#ToolContext#cached_phase= */
(nitmethod_t)VIRTUAL_platform__ToolContext__platform_phase, /* pointer to toolcontext:ToolContext:platform#ToolContext#platform_phase */
(nitmethod_t)VIRTUAL_platform__ToolContext__platform_phase_61d, /* pointer to toolcontext:ToolContext:platform#ToolContext#platform_phase= */
(nitmethod_t)VIRTUAL_android_platform__ToolContext__platform_from_name, /* pointer to toolcontext:ToolContext:android_platform#ToolContext#platform_from_name */
(nitmethod_t)VIRTUAL_typing__ToolContext__typing_phase, /* pointer to toolcontext:ToolContext:typing#ToolContext#typing_phase */
(nitmethod_t)VIRTUAL_typing__ToolContext__typing_phase_61d, /* pointer to toolcontext:ToolContext:typing#ToolContext#typing_phase= */
(nitmethod_t)VIRTUAL_auto_super_init__ToolContext__auto_super_init_phase, /* pointer to toolcontext:ToolContext:auto_super_init#ToolContext#auto_super_init_phase */
(nitmethod_t)VIRTUAL_auto_super_init__ToolContext__auto_super_init_phase_61d, /* pointer to toolcontext:ToolContext:auto_super_init#ToolContext#auto_super_init_phase= */
(nitmethod_t)VIRTUAL_div_by_zero__ToolContext__div_by_zero_phase, /* pointer to toolcontext:ToolContext:div_by_zero#ToolContext#div_by_zero_phase */
(nitmethod_t)VIRTUAL_div_by_zero__ToolContext__div_by_zero_phase_61d, /* pointer to toolcontext:ToolContext:div_by_zero#ToolContext#div_by_zero_phase= */
(nitmethod_t)VIRTUAL_transform__ToolContext__transform_phase, /* pointer to toolcontext:ToolContext:transform#ToolContext#transform_phase */
(nitmethod_t)VIRTUAL_transform__ToolContext__transform_phase_61d, /* pointer to toolcontext:ToolContext:transform#ToolContext#transform_phase= */
(nitmethod_t)VIRTUAL_nitni_callbacks__ToolContext__verify_nitni_callback_phase, /* pointer to toolcontext:ToolContext:nitni_callbacks#ToolContext#verify_nitni_callback_phase */
(nitmethod_t)VIRTUAL_nitni_callbacks__ToolContext__verify_nitni_callback_phase_61d, /* pointer to toolcontext:ToolContext:nitni_callbacks#ToolContext#verify_nitni_callback_phase= */
(nitmethod_t)VIRTUAL_frontend__ToolContext__dummy, /* pointer to toolcontext:ToolContext:frontend#ToolContext#dummy */
(nitmethod_t)VIRTUAL_frontend__ToolContext__dummy_61d, /* pointer to toolcontext:ToolContext:frontend#ToolContext#dummy= */
(nitmethod_t)VIRTUAL_frontend__ToolContext__do_dummy, /* pointer to toolcontext:ToolContext:frontend#ToolContext#do_dummy */
(nitmethod_t)VIRTUAL_ffi_base__ToolContext__ffi_language_assignation_phase, /* pointer to toolcontext:ToolContext:ffi_base#ToolContext#ffi_language_assignation_phase */
(nitmethod_t)VIRTUAL_ffi_base__ToolContext__ffi_language_assignation_phase_61d, /* pointer to toolcontext:ToolContext:ffi_base#ToolContext#ffi_language_assignation_phase= */
(nitmethod_t)VIRTUAL_extern_classes__ToolContext__extern_classes_typing_phase_ast, /* pointer to toolcontext:ToolContext:extern_classes#ToolContext#extern_classes_typing_phase_ast */
(nitmethod_t)VIRTUAL_extern_classes__ToolContext__extern_classes_typing_phase_ast_61d, /* pointer to toolcontext:ToolContext:extern_classes#ToolContext#extern_classes_typing_phase_ast= */
(nitmethod_t)VIRTUAL_extern_classes__ToolContext__extern_classes_typing_phase_model, /* pointer to toolcontext:ToolContext:extern_classes#ToolContext#extern_classes_typing_phase_model */
(nitmethod_t)VIRTUAL_extern_classes__ToolContext__extern_classes_typing_phase_model_61d, /* pointer to toolcontext:ToolContext:extern_classes#ToolContext#extern_classes_typing_phase_model= */
(nitmethod_t)VIRTUAL_header_dependency__ToolContext__header_dependancy_phase, /* pointer to toolcontext:ToolContext:header_dependency#ToolContext#header_dependancy_phase */
(nitmethod_t)VIRTUAL_header_dependency__ToolContext__header_dependancy_phase_61d, /* pointer to toolcontext:ToolContext:header_dependency#ToolContext#header_dependancy_phase= */
(nitmethod_t)VIRTUAL_pkgconfig__ToolContext__pkgconfig_phase, /* pointer to toolcontext:ToolContext:pkgconfig#ToolContext#pkgconfig_phase */
(nitmethod_t)VIRTUAL_pkgconfig__ToolContext__pkgconfig_phase_61d, /* pointer to toolcontext:ToolContext:pkgconfig#ToolContext#pkgconfig_phase= */
(nitmethod_t)VIRTUAL_c_compiler_options__ToolContext__c_compiler_options_phase, /* pointer to toolcontext:ToolContext:c_compiler_options#ToolContext#c_compiler_options_phase */
(nitmethod_t)VIRTUAL_c_compiler_options__ToolContext__c_compiler_options_phase_61d, /* pointer to toolcontext:ToolContext:c_compiler_options#ToolContext#c_compiler_options_phase= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_output, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_output */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_output_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_output= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_cc, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_cc */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_cc_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_cc= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_cc_path, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_cc_path */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_cc_path_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_cc_path= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_make_flags, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_make_flags */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_make_flags_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_make_flags= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_compile_dir, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_compile_dir */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_compile_dir_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_compile_dir= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_hardening, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_hardening */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_hardening_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_hardening= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_shortcut_range, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_shortcut_range */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_shortcut_range_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_shortcut_range= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_covariance, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_covariance */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_covariance_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_covariance= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_initialization, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_initialization */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_initialization_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_initialization= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_assert, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_assert */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_assert_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_assert= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_autocast, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_autocast */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_autocast_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_autocast= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_other, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_other */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_other_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_other= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_typing_test_metrics, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_typing_test_metrics */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_typing_test_metrics_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_typing_test_metrics= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_stacktrace, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_stacktrace */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_stacktrace_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_stacktrace= */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_stacktrace, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_stacktrace */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_stacktrace_61d, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_stacktrace= */
(nitmethod_t)VIRTUAL_android_platform__ToolContext__exec_and_check, /* pointer to toolcontext:ToolContext:android_platform#ToolContext#exec_and_check */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_separate, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_separate */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_separate_61d, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_separate= */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_no_inline_intern, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_no_inline_intern */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_no_inline_intern_61d, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_no_inline_intern= */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_no_union_attribute, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_no_union_attribute */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_no_union_attribute_61d, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_no_union_attribute= */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_no_shortcut_equate, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_no_shortcut_equate */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_no_shortcut_equate_61d, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_no_shortcut_equate= */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_inline_coloring_numbers, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_inline_coloring_numbers */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_inline_coloring_numbers_61d, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_inline_coloring_numbers= */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_bm_typing, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_bm_typing */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_bm_typing_61d, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_bm_typing= */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_phmod_typing, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_phmod_typing */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_phmod_typing_61d, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_phmod_typing= */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_phand_typing, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_phand_typing */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_phand_typing_61d, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_phand_typing= */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_tables_metrics, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_tables_metrics */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__opt_tables_metrics_61d, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#opt_tables_metrics= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__ToolContext__opt_erasure, /* pointer to toolcontext:ToolContext:separate_erasure_compiler#ToolContext#opt_erasure */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__ToolContext__opt_erasure_61d, /* pointer to toolcontext:ToolContext:separate_erasure_compiler#ToolContext#opt_erasure= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__ToolContext__opt_no_check_erasure_cast, /* pointer to toolcontext:ToolContext:separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__ToolContext__opt_no_check_erasure_cast_61d, /* pointer to toolcontext:ToolContext:separate_erasure_compiler#ToolContext#opt_no_check_erasure_cast= */
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__init, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#init */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__init, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#init */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__init, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#init */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__init, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#init */
(nitmethod_t)VIRTUAL_platform__ToolContext__platform_from_name, /* pointer to toolcontext:ToolContext:platform#ToolContext#platform_from_name */
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
val* var5 /* : String */;
val* var6 /* : Array[Message] */;
val* var7 /* : ComparableSorter[Message] */;
val* var8 /* : OptionContext */;
val* var9 /* : OptionCount */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
val* var25 /* : Array[String] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[String] */;
val* var28 /* : OptionBool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : String */;
val* var44 /* : Array[String] */;
long var45 /* : Int */;
val* var46 /* : NativeArray[String] */;
val* var47 /* : OptionBool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
val* var58 /* : Array[String] */;
long var59 /* : Int */;
val* var60 /* : NativeArray[String] */;
val* var61 /* : OptionString */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : String */;
val* var72 /* : Array[String] */;
long var73 /* : Int */;
val* var74 /* : NativeArray[String] */;
val* var75 /* : OptionBool */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : String */;
val* var96 /* : Array[String] */;
long var97 /* : Int */;
val* var98 /* : NativeArray[String] */;
val* var99 /* : OptionBool */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : String */;
val* var110 /* : Array[String] */;
long var111 /* : Int */;
val* var112 /* : NativeArray[String] */;
val* var113 /* : OptionCount */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : String */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
long var122 /* : Int */;
val* var123 /* : String */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : String */;
val* var129 /* : Array[String] */;
long var130 /* : Int */;
val* var131 /* : NativeArray[String] */;
val* var132 /* : OptionBool */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : String */;
val* var143 /* : Array[String] */;
long var144 /* : Int */;
val* var145 /* : NativeArray[String] */;
val* var146 /* : OptionBool */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
long var150 /* : Int */;
val* var151 /* : String */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : String */;
val* var157 /* : Array[String] */;
long var158 /* : Int */;
val* var159 /* : NativeArray[String] */;
long var160 /* : Int */;
val* var161 /* : POSet[Phase] */;
val* var162 /* : SimpleMiscAnalysisPhase */;
val* var163 /* : null */;
val* var164 /* : LiteralPhase */;
val* var165 /* : null */;
val* var166 /* : ScopePhase */;
val* var167 /* : null */;
val* var168 /* : FlowPhase */;
val* var169 /* : Array[Phase] */;
long var170 /* : Int */;
val* var_ /* var : Array[Phase] */;
val* var171 /* : Phase */;
val* var172 /* : SerializationPhase */;
val* var173 /* : null */;
val* var174 /* : LocalVarInitPhase */;
val* var175 /* : Array[Phase] */;
long var176 /* : Int */;
val* var_177 /* var : Array[Phase] */;
val* var178 /* : Phase */;
val* var179 /* : OptionArray */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
long var183 /* : Int */;
val* var184 /* : String */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
long var188 /* : Int */;
val* var189 /* : String */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : String */;
val* var195 /* : Array[String] */;
long var196 /* : Int */;
val* var197 /* : NativeArray[String] */;
val* var198 /* : OptionBool */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
long var202 /* : Int */;
val* var203 /* : String */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : NativeString */;
long var207 /* : Int */;
val* var208 /* : String */;
val* var209 /* : Array[String] */;
long var210 /* : Int */;
val* var211 /* : NativeArray[String] */;
val* var212 /* : OptionBool */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
long var216 /* : Int */;
val* var217 /* : String */;
static val* varonce218;
val* var219 /* : String */;
char* var220 /* : NativeString */;
long var221 /* : Int */;
val* var222 /* : String */;
val* var223 /* : Array[String] */;
long var224 /* : Int */;
val* var225 /* : NativeArray[String] */;
val* var226 /* : null */;
val* var227 /* : ModelizeClassPhase */;
val* var228 /* : null */;
val* var229 /* : ModelizePropertyPhase */;
val* var230 /* : Array[Phase] */;
long var231 /* : Int */;
val* var_232 /* var : Array[Phase] */;
val* var233 /* : Phase */;
val* var234 /* : CachedPhase */;
val* var235 /* : Array[Phase] */;
long var236 /* : Int */;
val* var_237 /* var : Array[Phase] */;
val* var238 /* : Phase */;
val* var239 /* : PlatformPhase */;
val* var240 /* : Array[Phase] */;
long var241 /* : Int */;
val* var_242 /* var : Array[Phase] */;
val* var243 /* : Phase */;
val* var244 /* : TypingPhase */;
val* var245 /* : Array[Phase] */;
long var246 /* : Int */;
val* var_247 /* var : Array[Phase] */;
val* var248 /* : Phase */;
val* var249 /* : Phase */;
val* var250 /* : Phase */;
val* var251 /* : AutoSuperInitPhase */;
val* var252 /* : Array[Phase] */;
long var253 /* : Int */;
val* var_254 /* var : Array[Phase] */;
val* var255 /* : Phase */;
val* var256 /* : DivByZeroPhase */;
val* var257 /* : Array[Phase] */;
long var258 /* : Int */;
val* var_259 /* var : Array[Phase] */;
val* var260 /* : Phase */;
val* var261 /* : Phase */;
val* var262 /* : VerifyNitniCallbacksPhase */;
val* var263 /* : Array[Phase] */;
long var264 /* : Int */;
val* var_265 /* var : Array[Phase] */;
val* var266 /* : Phase */;
val* var267 /* : TransformPhase */;
val* var268 /* : Array[Phase] */;
long var269 /* : Int */;
val* var_270 /* var : Array[Phase] */;
val* var271 /* : Phase */;
val* var272 /* : Phase */;
val* var273 /* : FFILanguageAssignationPhase */;
val* var274 /* : null */;
val* var275 /* : ExternClassesTypingPhaseAst */;
val* var276 /* : Array[Phase] */;
long var277 /* : Int */;
val* var_278 /* var : Array[Phase] */;
val* var279 /* : Phase */;
val* var280 /* : ExternClassesTypingPhaseModel */;
val* var281 /* : Array[Phase] */;
long var282 /* : Int */;
val* var_283 /* var : Array[Phase] */;
val* var284 /* : Phase */;
val* var285 /* : Phase */;
val* var286 /* : HeaderDependancyPhase */;
val* var287 /* : Array[Phase] */;
long var288 /* : Int */;
val* var_289 /* var : Array[Phase] */;
val* var290 /* : Phase */;
val* var291 /* : Phase */;
val* var292 /* : PkgconfigPhase */;
val* var293 /* : null */;
short int var294 /* : Bool */;
val* var295 /* : CCompilerOptionsPhase */;
val* var296 /* : null */;
val* var297 /* : OptionString */;
static val* varonce298;
val* var299 /* : String */;
char* var300 /* : NativeString */;
long var301 /* : Int */;
val* var302 /* : String */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : NativeString */;
long var306 /* : Int */;
val* var307 /* : String */;
static val* varonce308;
val* var309 /* : String */;
char* var310 /* : NativeString */;
long var311 /* : Int */;
val* var312 /* : String */;
val* var313 /* : Array[String] */;
long var314 /* : Int */;
val* var315 /* : NativeArray[String] */;
val* var316 /* : OptionBool */;
static val* varonce317;
val* var318 /* : String */;
char* var319 /* : NativeString */;
long var320 /* : Int */;
val* var321 /* : String */;
static val* varonce322;
val* var323 /* : String */;
char* var324 /* : NativeString */;
long var325 /* : Int */;
val* var326 /* : String */;
val* var327 /* : Array[String] */;
long var328 /* : Int */;
val* var329 /* : NativeArray[String] */;
val* var330 /* : OptionArray */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : NativeString */;
long var334 /* : Int */;
val* var335 /* : String */;
static val* varonce336;
val* var337 /* : String */;
char* var338 /* : NativeString */;
long var339 /* : Int */;
val* var340 /* : String */;
val* var341 /* : Array[String] */;
long var342 /* : Int */;
val* var343 /* : NativeArray[String] */;
val* var344 /* : OptionString */;
static val* varonce345;
val* var346 /* : String */;
char* var347 /* : NativeString */;
long var348 /* : Int */;
val* var349 /* : String */;
static val* varonce350;
val* var351 /* : String */;
char* var352 /* : NativeString */;
long var353 /* : Int */;
val* var354 /* : String */;
val* var355 /* : Array[String] */;
long var356 /* : Int */;
val* var357 /* : NativeArray[String] */;
val* var358 /* : OptionString */;
static val* varonce359;
val* var360 /* : String */;
char* var361 /* : NativeString */;
long var362 /* : Int */;
val* var363 /* : String */;
static val* varonce364;
val* var365 /* : String */;
char* var366 /* : NativeString */;
long var367 /* : Int */;
val* var368 /* : String */;
val* var369 /* : Array[String] */;
long var370 /* : Int */;
val* var371 /* : NativeArray[String] */;
val* var372 /* : OptionBool */;
static val* varonce373;
val* var374 /* : String */;
char* var375 /* : NativeString */;
long var376 /* : Int */;
val* var377 /* : String */;
static val* varonce378;
val* var379 /* : String */;
char* var380 /* : NativeString */;
long var381 /* : Int */;
val* var382 /* : String */;
val* var383 /* : Array[String] */;
long var384 /* : Int */;
val* var385 /* : NativeArray[String] */;
val* var386 /* : OptionBool */;
static val* varonce387;
val* var388 /* : String */;
char* var389 /* : NativeString */;
long var390 /* : Int */;
val* var391 /* : String */;
static val* varonce392;
val* var393 /* : String */;
char* var394 /* : NativeString */;
long var395 /* : Int */;
val* var396 /* : String */;
val* var397 /* : Array[String] */;
long var398 /* : Int */;
val* var399 /* : NativeArray[String] */;
val* var400 /* : OptionBool */;
static val* varonce401;
val* var402 /* : String */;
char* var403 /* : NativeString */;
long var404 /* : Int */;
val* var405 /* : String */;
static val* varonce406;
val* var407 /* : String */;
char* var408 /* : NativeString */;
long var409 /* : Int */;
val* var410 /* : String */;
val* var411 /* : Array[String] */;
long var412 /* : Int */;
val* var413 /* : NativeArray[String] */;
val* var414 /* : OptionBool */;
static val* varonce415;
val* var416 /* : String */;
char* var417 /* : NativeString */;
long var418 /* : Int */;
val* var419 /* : String */;
static val* varonce420;
val* var421 /* : String */;
char* var422 /* : NativeString */;
long var423 /* : Int */;
val* var424 /* : String */;
val* var425 /* : Array[String] */;
long var426 /* : Int */;
val* var427 /* : NativeArray[String] */;
val* var428 /* : OptionBool */;
static val* varonce429;
val* var430 /* : String */;
char* var431 /* : NativeString */;
long var432 /* : Int */;
val* var433 /* : String */;
static val* varonce434;
val* var435 /* : String */;
char* var436 /* : NativeString */;
long var437 /* : Int */;
val* var438 /* : String */;
val* var439 /* : Array[String] */;
long var440 /* : Int */;
val* var441 /* : NativeArray[String] */;
val* var442 /* : OptionBool */;
static val* varonce443;
val* var444 /* : String */;
char* var445 /* : NativeString */;
long var446 /* : Int */;
val* var447 /* : String */;
static val* varonce448;
val* var449 /* : String */;
char* var450 /* : NativeString */;
long var451 /* : Int */;
val* var452 /* : String */;
val* var453 /* : Array[String] */;
long var454 /* : Int */;
val* var455 /* : NativeArray[String] */;
val* var456 /* : OptionBool */;
static val* varonce457;
val* var458 /* : String */;
char* var459 /* : NativeString */;
long var460 /* : Int */;
val* var461 /* : String */;
static val* varonce462;
val* var463 /* : String */;
char* var464 /* : NativeString */;
long var465 /* : Int */;
val* var466 /* : String */;
val* var467 /* : Array[String] */;
long var468 /* : Int */;
val* var469 /* : NativeArray[String] */;
val* var470 /* : OptionBool */;
static val* varonce471;
val* var472 /* : String */;
char* var473 /* : NativeString */;
long var474 /* : Int */;
val* var475 /* : String */;
static val* varonce476;
val* var477 /* : String */;
char* var478 /* : NativeString */;
long var479 /* : Int */;
val* var480 /* : String */;
val* var481 /* : Array[String] */;
long var482 /* : Int */;
val* var483 /* : NativeArray[String] */;
val* var484 /* : OptionBool */;
static val* varonce485;
val* var486 /* : String */;
char* var487 /* : NativeString */;
long var488 /* : Int */;
val* var489 /* : String */;
static val* varonce490;
val* var491 /* : String */;
char* var492 /* : NativeString */;
long var493 /* : Int */;
val* var494 /* : String */;
val* var495 /* : Array[String] */;
long var496 /* : Int */;
val* var497 /* : NativeArray[String] */;
val* var498 /* : OptionBool */;
static val* varonce499;
val* var500 /* : String */;
char* var501 /* : NativeString */;
long var502 /* : Int */;
val* var503 /* : String */;
static val* varonce504;
val* var505 /* : String */;
char* var506 /* : NativeString */;
long var507 /* : Int */;
val* var508 /* : String */;
val* var509 /* : Array[String] */;
long var510 /* : Int */;
val* var511 /* : NativeArray[String] */;
val* var512 /* : OptionBool */;
static val* varonce513;
val* var514 /* : String */;
char* var515 /* : NativeString */;
long var516 /* : Int */;
val* var517 /* : String */;
static val* varonce518;
val* var519 /* : String */;
char* var520 /* : NativeString */;
long var521 /* : Int */;
val* var522 /* : String */;
val* var523 /* : Array[String] */;
long var524 /* : Int */;
val* var525 /* : NativeArray[String] */;
val* var526 /* : OptionBool */;
static val* varonce527;
val* var528 /* : String */;
char* var529 /* : NativeString */;
long var530 /* : Int */;
val* var531 /* : String */;
static val* varonce532;
val* var533 /* : String */;
char* var534 /* : NativeString */;
long var535 /* : Int */;
val* var536 /* : String */;
val* var537 /* : Array[String] */;
long var538 /* : Int */;
val* var539 /* : NativeArray[String] */;
val* var540 /* : OptionBool */;
static val* varonce541;
val* var542 /* : String */;
char* var543 /* : NativeString */;
long var544 /* : Int */;
val* var545 /* : String */;
static val* varonce546;
val* var547 /* : String */;
char* var548 /* : NativeString */;
long var549 /* : Int */;
val* var550 /* : String */;
val* var551 /* : Array[String] */;
long var552 /* : Int */;
val* var553 /* : NativeArray[String] */;
val* var554 /* : OptionBool */;
static val* varonce555;
val* var556 /* : String */;
char* var557 /* : NativeString */;
long var558 /* : Int */;
val* var559 /* : String */;
static val* varonce560;
val* var561 /* : String */;
char* var562 /* : NativeString */;
long var563 /* : Int */;
val* var564 /* : String */;
val* var565 /* : Array[String] */;
long var566 /* : Int */;
val* var567 /* : NativeArray[String] */;
val* var568 /* : OptionBool */;
static val* varonce569;
val* var570 /* : String */;
char* var571 /* : NativeString */;
long var572 /* : Int */;
val* var573 /* : String */;
static val* varonce574;
val* var575 /* : String */;
char* var576 /* : NativeString */;
long var577 /* : Int */;
val* var578 /* : String */;
val* var579 /* : Array[String] */;
long var580 /* : Int */;
val* var581 /* : NativeArray[String] */;
val* var582 /* : OptionBool */;
static val* varonce583;
val* var584 /* : String */;
char* var585 /* : NativeString */;
long var586 /* : Int */;
val* var587 /* : String */;
static val* varonce588;
val* var589 /* : String */;
char* var590 /* : NativeString */;
long var591 /* : Int */;
val* var592 /* : String */;
val* var593 /* : Array[String] */;
long var594 /* : Int */;
val* var595 /* : NativeArray[String] */;
val* var596 /* : OptionBool */;
static val* varonce597;
val* var598 /* : String */;
char* var599 /* : NativeString */;
long var600 /* : Int */;
val* var601 /* : String */;
static val* varonce602;
val* var603 /* : String */;
char* var604 /* : NativeString */;
long var605 /* : Int */;
val* var606 /* : String */;
val* var607 /* : Array[String] */;
long var608 /* : Int */;
val* var609 /* : NativeArray[String] */;
val* var610 /* : OptionBool */;
static val* varonce611;
val* var612 /* : String */;
char* var613 /* : NativeString */;
long var614 /* : Int */;
val* var615 /* : String */;
static val* varonce616;
val* var617 /* : String */;
char* var618 /* : NativeString */;
long var619 /* : Int */;
val* var620 /* : String */;
val* var621 /* : Array[String] */;
long var622 /* : Int */;
val* var623 /* : NativeArray[String] */;
val* var624 /* : OptionBool */;
static val* varonce625;
val* var626 /* : String */;
char* var627 /* : NativeString */;
long var628 /* : Int */;
val* var629 /* : String */;
static val* varonce630;
val* var631 /* : String */;
char* var632 /* : NativeString */;
long var633 /* : Int */;
val* var634 /* : String */;
val* var635 /* : Array[String] */;
long var636 /* : Int */;
val* var637 /* : NativeArray[String] */;
val* var638 /* : OptionBool */;
static val* varonce639;
val* var640 /* : String */;
char* var641 /* : NativeString */;
long var642 /* : Int */;
val* var643 /* : String */;
static val* varonce644;
val* var645 /* : String */;
char* var646 /* : NativeString */;
long var647 /* : Int */;
val* var648 /* : String */;
val* var649 /* : Array[String] */;
long var650 /* : Int */;
val* var651 /* : NativeArray[String] */;
val* var652 /* : OptionBool */;
static val* varonce653;
val* var654 /* : String */;
char* var655 /* : NativeString */;
long var656 /* : Int */;
val* var657 /* : String */;
static val* varonce658;
val* var659 /* : String */;
char* var660 /* : NativeString */;
long var661 /* : Int */;
val* var662 /* : String */;
val* var663 /* : Array[String] */;
long var664 /* : Int */;
val* var665 /* : NativeArray[String] */;
self = nit_alloc(sizeof(struct instance) + 69*sizeof(nitattribute_t));
self->type = type;
self->class = &class_toolcontext__ToolContext;
var = 0;
self->attrs[COLOR_toolcontext__ToolContext___64derror_count].l = var; /* @error_count on <self:ToolContext exact> */
var1 = 0;
self->attrs[COLOR_toolcontext__ToolContext___64dwarning_count].l = var1; /* @warning_count on <self:ToolContext exact> */
if (varonce) {
var2 = varonce;
} else {
var3 = "logs";
var4 = 4;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
self->attrs[COLOR_toolcontext__ToolContext___64dlog_directory].val = var2; /* @log_directory on <self:ToolContext exact> */
var6 = NEW_array__Array(&type_array__Arraytoolcontext__Message);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Message]>*/;
self->attrs[COLOR_toolcontext__ToolContext___64dmessages].val = var6; /* @messages on <self:ToolContext exact> */
var7 = NEW_sorter__ComparableSorter(&type_sorter__ComparableSortertoolcontext__Message);
((void (*)(val*))(var7->class->vft[COLOR_sorter__ComparableSorter__init]))(var7) /* init on <var7:ComparableSorter[Message]>*/;
self->attrs[COLOR_toolcontext__ToolContext___64dmessage_sorter].val = var7; /* @message_sorter on <self:ToolContext exact> */
var8 = NEW_opts__OptionContext(&type_opts__OptionContext);
((void (*)(val*))(var8->class->vft[COLOR_opts__OptionContext__init]))(var8) /* init on <var8:OptionContext>*/;
self->attrs[COLOR_toolcontext__ToolContext___64doption_context].val = var8; /* @option_context on <self:ToolContext exact> */
var9 = NEW_opts__OptionCount(&type_opts__OptionCount);
if (varonce10) {
var11 = varonce10;
} else {
var12 = "Show warnings";
var13 = 13;
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
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_opts__OptionCount__init]))(var9, var11, var25) /* init on <var9:OptionCount>*/;
self->attrs[COLOR_toolcontext__ToolContext___64dopt_warn].val = var9; /* @opt_warn on <self:ToolContext exact> */
var28 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce29) {
var30 = varonce29;
} else {
var31 = "Do not show warnings";
var32 = 20;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = "-q";
var37 = 2;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = "--quiet";
var42 = 7;
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
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var28->class->vft[COLOR_opts__OptionBool__init]))(var28, var30, var44) /* init on <var28:OptionBool>*/;
self->attrs[COLOR_toolcontext__ToolContext___64dopt_quiet].val = var28; /* @opt_quiet on <self:ToolContext exact> */
var47 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce48) {
var49 = varonce48;
} else {
var50 = "Generate various log files";
var51 = 26;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = "--log";
var56 = 5;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var58 = array_instance Array[String] */
var59 = 1;
var60 = NEW_array__NativeArray(var59, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var60)->values[0] = (val*) var54;
((void (*)(val*, val*, long))(var58->class->vft[COLOR_array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var47->class->vft[COLOR_opts__OptionBool__init]))(var47, var49, var58) /* init on <var47:OptionBool>*/;
self->attrs[COLOR_toolcontext__ToolContext___64dopt_log].val = var47; /* @opt_log on <self:ToolContext exact> */
var61 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce62) {
var63 = varonce62;
} else {
var64 = "Directory where to generate log files";
var65 = 37;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
if (varonce67) {
var68 = varonce67;
} else {
var69 = "--log-dir";
var70 = 9;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var72 = array_instance Array[String] */
var73 = 1;
var74 = NEW_array__NativeArray(var73, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var74)->values[0] = (val*) var68;
((void (*)(val*, val*, long))(var72->class->vft[COLOR_array__Array__with_native]))(var72, var74, var73) /* with_native on <var72:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var61->class->vft[COLOR_opts__OptionString__init]))(var61, var63, var72) /* init on <var61:OptionString>*/;
self->attrs[COLOR_toolcontext__ToolContext___64dopt_log_dir].val = var61; /* @opt_log_dir on <self:ToolContext exact> */
var75 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce76) {
var77 = varonce76;
} else {
var78 = "Show Help (This screen)";
var79 = 23;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
if (varonce81) {
var82 = varonce81;
} else {
var83 = "-h";
var84 = 2;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
if (varonce86) {
var87 = varonce86;
} else {
var88 = "-?";
var89 = 2;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
if (varonce91) {
var92 = varonce91;
} else {
var93 = "--help";
var94 = 6;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
var96 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var96 = array_instance Array[String] */
var97 = 3;
var98 = NEW_array__NativeArray(var97, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var98)->values[0] = (val*) var82;
((struct instance_array__NativeArray*)var98)->values[1] = (val*) var87;
((struct instance_array__NativeArray*)var98)->values[2] = (val*) var92;
((void (*)(val*, val*, long))(var96->class->vft[COLOR_array__Array__with_native]))(var96, var98, var97) /* with_native on <var96:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var75->class->vft[COLOR_opts__OptionBool__init]))(var75, var77, var96) /* init on <var75:OptionBool>*/;
self->attrs[COLOR_toolcontext__ToolContext___64dopt_help].val = var75; /* @opt_help on <self:ToolContext exact> */
var99 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce100) {
var101 = varonce100;
} else {
var102 = "Show version and exit";
var103 = 21;
var104 = string__NativeString__to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = "--version";
var108 = 9;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
var110 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var110 = array_instance Array[String] */
var111 = 1;
var112 = NEW_array__NativeArray(var111, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var112)->values[0] = (val*) var106;
((void (*)(val*, val*, long))(var110->class->vft[COLOR_array__Array__with_native]))(var110, var112, var111) /* with_native on <var110:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var99->class->vft[COLOR_opts__OptionBool__init]))(var99, var101, var110) /* init on <var99:OptionBool>*/;
self->attrs[COLOR_toolcontext__ToolContext___64dopt_version].val = var99; /* @opt_version on <self:ToolContext exact> */
var113 = NEW_opts__OptionCount(&type_opts__OptionCount);
if (varonce114) {
var115 = varonce114;
} else {
var116 = "Verbose";
var117 = 7;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
if (varonce119) {
var120 = varonce119;
} else {
var121 = "-v";
var122 = 2;
var123 = string__NativeString__to_s_with_length(var121, var122);
var120 = var123;
varonce119 = var120;
}
if (varonce124) {
var125 = varonce124;
} else {
var126 = "--verbose";
var127 = 9;
var128 = string__NativeString__to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
var129 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var129 = array_instance Array[String] */
var130 = 2;
var131 = NEW_array__NativeArray(var130, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var131)->values[0] = (val*) var120;
((struct instance_array__NativeArray*)var131)->values[1] = (val*) var125;
((void (*)(val*, val*, long))(var129->class->vft[COLOR_array__Array__with_native]))(var129, var131, var130) /* with_native on <var129:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var113->class->vft[COLOR_opts__OptionCount__init]))(var113, var115, var129) /* init on <var113:OptionCount>*/;
self->attrs[COLOR_toolcontext__ToolContext___64dopt_verbose].val = var113; /* @opt_verbose on <self:ToolContext exact> */
var132 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce133) {
var134 = varonce133;
} else {
var135 = "Stop on first error";
var136 = 19;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = "--stop-on-first-error";
var141 = 21;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
var143 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var143 = array_instance Array[String] */
var144 = 1;
var145 = NEW_array__NativeArray(var144, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var145)->values[0] = (val*) var139;
((void (*)(val*, val*, long))(var143->class->vft[COLOR_array__Array__with_native]))(var143, var145, var144) /* with_native on <var143:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var132->class->vft[COLOR_opts__OptionBool__init]))(var132, var134, var143) /* init on <var132:OptionBool>*/;
self->attrs[COLOR_toolcontext__ToolContext___64dopt_stop_on_first_error].val = var132; /* @opt_stop_on_first_error on <self:ToolContext exact> */
var146 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce147) {
var148 = varonce147;
} else {
var149 = "Do not use color to display errors and warnings";
var150 = 47;
var151 = string__NativeString__to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
if (varonce152) {
var153 = varonce152;
} else {
var154 = "--no-color";
var155 = 10;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
var157 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var157 = array_instance Array[String] */
var158 = 1;
var159 = NEW_array__NativeArray(var158, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var159)->values[0] = (val*) var153;
((void (*)(val*, val*, long))(var157->class->vft[COLOR_array__Array__with_native]))(var157, var159, var158) /* with_native on <var157:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var146->class->vft[COLOR_opts__OptionBool__init]))(var146, var148, var157) /* init on <var146:OptionBool>*/;
self->attrs[COLOR_toolcontext__ToolContext___64dopt_no_color].val = var146; /* @opt_no_color on <self:ToolContext exact> */
var160 = 0;
self->attrs[COLOR_toolcontext__ToolContext___64dverbose_level].l = var160; /* @verbose_level on <self:ToolContext exact> */
var161 = NEW_poset__POSet(&type_poset__POSetphase__Phase);
((void (*)(val*))(var161->class->vft[COLOR_poset__POSet__init]))(var161) /* init on <var161:POSet[Phase]>*/;
self->attrs[COLOR_phase__ToolContext___64dphases].val = var161; /* @phases on <self:ToolContext exact> */
var162 = NEW_simple_misc_analysis__SimpleMiscAnalysisPhase(&type_simple_misc_analysis__SimpleMiscAnalysisPhase);
var163 = NULL;
((void (*)(val*, val*, val*))(var162->class->vft[COLOR_phase__Phase__init]))(var162, self, var163) /* init on <var162:SimpleMiscAnalysisPhase>*/;
self->attrs[COLOR_simple_misc_analysis__ToolContext___64dsimple_misc_analysis_phase].val = var162; /* @simple_misc_analysis_phase on <self:ToolContext exact> */
var164 = NEW_literal__LiteralPhase(&type_literal__LiteralPhase);
var165 = NULL;
((void (*)(val*, val*, val*))(var164->class->vft[COLOR_phase__Phase__init]))(var164, self, var165) /* init on <var164:LiteralPhase>*/;
self->attrs[COLOR_literal__ToolContext___64dliteral_phase].val = var164; /* @literal_phase on <self:ToolContext exact> */
var166 = NEW_scope__ScopePhase(&type_scope__ScopePhase);
var167 = NULL;
((void (*)(val*, val*, val*))(var166->class->vft[COLOR_phase__Phase__init]))(var166, self, var167) /* init on <var166:ScopePhase>*/;
self->attrs[COLOR_scope__ToolContext___64dscope_phase].val = var166; /* @scope_phase on <self:ToolContext exact> */
var168 = NEW_flow__FlowPhase(&type_flow__FlowPhase);
var169 = NEW_array__Array(&type_array__Arrayphase__Phase);
var170 = 1;
((void (*)(val*, long))(var169->class->vft[COLOR_array__Array__with_capacity]))(var169, var170) /* with_capacity on <var169:Array[Phase]>*/;
var_ = var169;
var171 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ToolContext__scope_phase]))(self) /* scope_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var171) /* push on <var_:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var168->class->vft[COLOR_phase__Phase__init]))(var168, self, var_) /* init on <var168:FlowPhase>*/;
self->attrs[COLOR_flow__ToolContext___64dflow_phase].val = var168; /* @flow_phase on <self:ToolContext exact> */
var172 = NEW_serialization_phase__SerializationPhase(&type_serialization_phase__SerializationPhase);
var173 = NULL;
((void (*)(val*, val*, val*))(var172->class->vft[COLOR_phase__Phase__init]))(var172, self, var173) /* init on <var172:SerializationPhase>*/;
self->attrs[COLOR_serialization_phase__ToolContext___64dserialization_phase].val = var172; /* @serialization_phase on <self:ToolContext exact> */
var174 = NEW_local_var_init__LocalVarInitPhase(&type_local_var_init__LocalVarInitPhase);
var175 = NEW_array__Array(&type_array__Arrayphase__Phase);
var176 = 1;
((void (*)(val*, long))(var175->class->vft[COLOR_array__Array__with_capacity]))(var175, var176) /* with_capacity on <var175:Array[Phase]>*/;
var_177 = var175;
var178 = ((val* (*)(val*))(self->class->vft[COLOR_flow__ToolContext__flow_phase]))(self) /* flow_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_177->class->vft[COLOR_abstract_collection__Sequence__push]))(var_177, var178) /* push on <var_177:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var174->class->vft[COLOR_phase__Phase__init]))(var174, self, var_177) /* init on <var174:LocalVarInitPhase>*/;
self->attrs[COLOR_local_var_init__ToolContext___64dlocal_var_init_phase].val = var174; /* @local_var_init_phase on <self:ToolContext exact> */
var179 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (varonce180) {
var181 = varonce180;
} else {
var182 = "Set include path for loaders (may be used more than once)";
var183 = 57;
var184 = string__NativeString__to_s_with_length(var182, var183);
var181 = var184;
varonce180 = var181;
}
if (varonce185) {
var186 = varonce185;
} else {
var187 = "-I";
var188 = 2;
var189 = string__NativeString__to_s_with_length(var187, var188);
var186 = var189;
varonce185 = var186;
}
if (varonce190) {
var191 = varonce190;
} else {
var192 = "--path";
var193 = 6;
var194 = string__NativeString__to_s_with_length(var192, var193);
var191 = var194;
varonce190 = var191;
}
var195 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var195 = array_instance Array[String] */
var196 = 2;
var197 = NEW_array__NativeArray(var196, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var197)->values[0] = (val*) var186;
((struct instance_array__NativeArray*)var197)->values[1] = (val*) var191;
((void (*)(val*, val*, long))(var195->class->vft[COLOR_array__Array__with_native]))(var195, var197, var196) /* with_native on <var195:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var179->class->vft[COLOR_opts__OptionArray__init]))(var179, var181, var195) /* init on <var179:OptionArray>*/;
self->attrs[COLOR_modelbuilder__ToolContext___64dopt_path].val = var179; /* @opt_path on <self:ToolContext exact> */
var198 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce199) {
var200 = varonce199;
} else {
var201 = "Stop after meta-model processing";
var202 = 32;
var203 = string__NativeString__to_s_with_length(var201, var202);
var200 = var203;
varonce199 = var200;
}
if (varonce204) {
var205 = varonce204;
} else {
var206 = "--only-metamodel";
var207 = 16;
var208 = string__NativeString__to_s_with_length(var206, var207);
var205 = var208;
varonce204 = var205;
}
var209 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var209 = array_instance Array[String] */
var210 = 1;
var211 = NEW_array__NativeArray(var210, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var211)->values[0] = (val*) var205;
((void (*)(val*, val*, long))(var209->class->vft[COLOR_array__Array__with_native]))(var209, var211, var210) /* with_native on <var209:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var198->class->vft[COLOR_opts__OptionBool__init]))(var198, var200, var209) /* init on <var198:OptionBool>*/;
self->attrs[COLOR_modelbuilder__ToolContext___64dopt_only_metamodel].val = var198; /* @opt_only_metamodel on <self:ToolContext exact> */
var212 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce213) {
var214 = varonce213;
} else {
var215 = "Only proceed to parse step of loaders";
var216 = 37;
var217 = string__NativeString__to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
if (varonce218) {
var219 = varonce218;
} else {
var220 = "--only-parse";
var221 = 12;
var222 = string__NativeString__to_s_with_length(var220, var221);
var219 = var222;
varonce218 = var219;
}
var223 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var223 = array_instance Array[String] */
var224 = 1;
var225 = NEW_array__NativeArray(var224, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var225)->values[0] = (val*) var219;
((void (*)(val*, val*, long))(var223->class->vft[COLOR_array__Array__with_native]))(var223, var225, var224) /* with_native on <var223:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var212->class->vft[COLOR_opts__OptionBool__init]))(var212, var214, var223) /* init on <var212:OptionBool>*/;
self->attrs[COLOR_modelbuilder__ToolContext___64dopt_only_parse].val = var212; /* @opt_only_parse on <self:ToolContext exact> */
var226 = NULL;
self->attrs[COLOR_modelbuilder__ToolContext___64dmodelbuilder_real].val = var226; /* @modelbuilder_real on <self:ToolContext exact> */
var227 = NEW_modelize_class__ModelizeClassPhase(&type_modelize_class__ModelizeClassPhase);
var228 = NULL;
((void (*)(val*, val*, val*))(var227->class->vft[COLOR_phase__Phase__init]))(var227, self, var228) /* init on <var227:ModelizeClassPhase>*/;
self->attrs[COLOR_modelize_class__ToolContext___64dmodelize_class_phase].val = var227; /* @modelize_class_phase on <self:ToolContext exact> */
var229 = NEW_modelize_property__ModelizePropertyPhase(&type_modelize_property__ModelizePropertyPhase);
var230 = NEW_array__Array(&type_array__Arrayphase__Phase);
var231 = 1;
((void (*)(val*, long))(var230->class->vft[COLOR_array__Array__with_capacity]))(var230, var231) /* with_capacity on <var230:Array[Phase]>*/;
var_232 = var230;
var233 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_class__ToolContext__modelize_class_phase]))(self) /* modelize_class_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_232->class->vft[COLOR_abstract_collection__Sequence__push]))(var_232, var233) /* push on <var_232:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var229->class->vft[COLOR_phase__Phase__init]))(var229, self, var_232) /* init on <var229:ModelizePropertyPhase>*/;
self->attrs[COLOR_modelize_property__ToolContext___64dmodelize_property_phase].val = var229; /* @modelize_property_phase on <self:ToolContext exact> */
var234 = NEW_cached__CachedPhase(&type_cached__CachedPhase);
var235 = NEW_array__Array(&type_array__Arrayphase__Phase);
var236 = 1;
((void (*)(val*, long))(var235->class->vft[COLOR_array__Array__with_capacity]))(var235, var236) /* with_capacity on <var235:Array[Phase]>*/;
var_237 = var235;
var238 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__ToolContext__modelize_property_phase]))(self) /* modelize_property_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_237->class->vft[COLOR_abstract_collection__Sequence__push]))(var_237, var238) /* push on <var_237:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var234->class->vft[COLOR_cached__CachedPhase__init]))(var234, self, var_237) /* init on <var234:CachedPhase>*/;
self->attrs[COLOR_cached__ToolContext___64dcached_phase].val = var234; /* @cached_phase on <self:ToolContext exact> */
var239 = NEW_platform__PlatformPhase(&type_platform__PlatformPhase);
var240 = NEW_array__Array(&type_array__Arrayphase__Phase);
var241 = 1;
((void (*)(val*, long))(var240->class->vft[COLOR_array__Array__with_capacity]))(var240, var241) /* with_capacity on <var240:Array[Phase]>*/;
var_242 = var240;
var243 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__ToolContext__modelize_property_phase]))(self) /* modelize_property_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_242->class->vft[COLOR_abstract_collection__Sequence__push]))(var_242, var243) /* push on <var_242:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var239->class->vft[COLOR_phase__Phase__init]))(var239, self, var_242) /* init on <var239:PlatformPhase>*/;
self->attrs[COLOR_platform__ToolContext___64dplatform_phase].val = var239; /* @platform_phase on <self:ToolContext exact> */
var244 = NEW_typing__TypingPhase(&type_typing__TypingPhase);
var245 = NEW_array__Array(&type_array__Arrayphase__Phase);
var246 = 3;
((void (*)(val*, long))(var245->class->vft[COLOR_array__Array__with_capacity]))(var245, var246) /* with_capacity on <var245:Array[Phase]>*/;
var_247 = var245;
var248 = ((val* (*)(val*))(self->class->vft[COLOR_flow__ToolContext__flow_phase]))(self) /* flow_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_247->class->vft[COLOR_abstract_collection__Sequence__push]))(var_247, var248) /* push on <var_247:Array[Phase]>*/;
var249 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__ToolContext__modelize_property_phase]))(self) /* modelize_property_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_247->class->vft[COLOR_abstract_collection__Sequence__push]))(var_247, var249) /* push on <var_247:Array[Phase]>*/;
var250 = ((val* (*)(val*))(self->class->vft[COLOR_local_var_init__ToolContext__local_var_init_phase]))(self) /* local_var_init_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_247->class->vft[COLOR_abstract_collection__Sequence__push]))(var_247, var250) /* push on <var_247:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var244->class->vft[COLOR_phase__Phase__init]))(var244, self, var_247) /* init on <var244:TypingPhase>*/;
self->attrs[COLOR_typing__ToolContext___64dtyping_phase].val = var244; /* @typing_phase on <self:ToolContext exact> */
var251 = NEW_auto_super_init__AutoSuperInitPhase(&type_auto_super_init__AutoSuperInitPhase);
var252 = NEW_array__Array(&type_array__Arrayphase__Phase);
var253 = 1;
((void (*)(val*, long))(var252->class->vft[COLOR_array__Array__with_capacity]))(var252, var253) /* with_capacity on <var252:Array[Phase]>*/;
var_254 = var252;
var255 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ToolContext__typing_phase]))(self) /* typing_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_254->class->vft[COLOR_abstract_collection__Sequence__push]))(var_254, var255) /* push on <var_254:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var251->class->vft[COLOR_phase__Phase__init]))(var251, self, var_254) /* init on <var251:AutoSuperInitPhase>*/;
self->attrs[COLOR_auto_super_init__ToolContext___64dauto_super_init_phase].val = var251; /* @auto_super_init_phase on <self:ToolContext exact> */
var256 = NEW_div_by_zero__DivByZeroPhase(&type_div_by_zero__DivByZeroPhase);
var257 = NEW_array__Array(&type_array__Arrayphase__Phase);
var258 = 2;
((void (*)(val*, long))(var257->class->vft[COLOR_array__Array__with_capacity]))(var257, var258) /* with_capacity on <var257:Array[Phase]>*/;
var_259 = var257;
var260 = ((val* (*)(val*))(self->class->vft[COLOR_literal__ToolContext__literal_phase]))(self) /* literal_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_259->class->vft[COLOR_abstract_collection__Sequence__push]))(var_259, var260) /* push on <var_259:Array[Phase]>*/;
var261 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ToolContext__typing_phase]))(self) /* typing_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_259->class->vft[COLOR_abstract_collection__Sequence__push]))(var_259, var261) /* push on <var_259:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var256->class->vft[COLOR_phase__Phase__init]))(var256, self, var_259) /* init on <var256:DivByZeroPhase>*/;
self->attrs[COLOR_div_by_zero__ToolContext___64ddiv_by_zero_phase].val = var256; /* @div_by_zero_phase on <self:ToolContext exact> */
var262 = NEW_nitni_callbacks__VerifyNitniCallbacksPhase(&type_nitni_callbacks__VerifyNitniCallbacksPhase);
var263 = NEW_array__Array(&type_array__Arrayphase__Phase);
var264 = 1;
((void (*)(val*, long))(var263->class->vft[COLOR_array__Array__with_capacity]))(var263, var264) /* with_capacity on <var263:Array[Phase]>*/;
var_265 = var263;
var266 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ToolContext__typing_phase]))(self) /* typing_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_265->class->vft[COLOR_abstract_collection__Sequence__push]))(var_265, var266) /* push on <var_265:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var262->class->vft[COLOR_phase__Phase__init]))(var262, self, var_265) /* init on <var262:VerifyNitniCallbacksPhase>*/;
self->attrs[COLOR_nitni_callbacks__ToolContext___64dverify_nitni_callback_phase].val = var262; /* @verify_nitni_callback_phase on <self:ToolContext exact> */
var267 = NEW_transform__TransformPhase(&type_transform__TransformPhase);
var268 = NEW_array__Array(&type_array__Arrayphase__Phase);
var269 = 2;
((void (*)(val*, long))(var268->class->vft[COLOR_array__Array__with_capacity]))(var268, var269) /* with_capacity on <var268:Array[Phase]>*/;
var_270 = var268;
var271 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ToolContext__typing_phase]))(self) /* typing_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_270->class->vft[COLOR_abstract_collection__Sequence__push]))(var_270, var271) /* push on <var_270:Array[Phase]>*/;
var272 = ((val* (*)(val*))(self->class->vft[COLOR_auto_super_init__ToolContext__auto_super_init_phase]))(self) /* auto_super_init_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_270->class->vft[COLOR_abstract_collection__Sequence__push]))(var_270, var272) /* push on <var_270:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var267->class->vft[COLOR_phase__Phase__init]))(var267, self, var_270) /* init on <var267:TransformPhase>*/;
self->attrs[COLOR_transform__ToolContext___64dtransform_phase].val = var267; /* @transform_phase on <self:ToolContext exact> */
var273 = NEW_ffi_base__FFILanguageAssignationPhase(&type_ffi_base__FFILanguageAssignationPhase);
var274 = NULL;
((void (*)(val*, val*, val*))(var273->class->vft[COLOR_phase__Phase__init]))(var273, self, var274) /* init on <var273:FFILanguageAssignationPhase>*/;
self->attrs[COLOR_ffi_base__ToolContext___64dffi_language_assignation_phase].val = var273; /* @ffi_language_assignation_phase on <self:ToolContext exact> */
var275 = NEW_extern_classes__ExternClassesTypingPhaseAst(&type_extern_classes__ExternClassesTypingPhaseAst);
var276 = NEW_array__Array(&type_array__Arrayphase__Phase);
var277 = 1;
((void (*)(val*, long))(var276->class->vft[COLOR_array__Array__with_capacity]))(var276, var277) /* with_capacity on <var276:Array[Phase]>*/;
var_278 = var276;
var279 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__ToolContext__ffi_language_assignation_phase]))(self) /* ffi_language_assignation_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_278->class->vft[COLOR_abstract_collection__Sequence__push]))(var_278, var279) /* push on <var_278:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var275->class->vft[COLOR_phase__Phase__init]))(var275, self, var_278) /* init on <var275:ExternClassesTypingPhaseAst>*/;
self->attrs[COLOR_extern_classes__ToolContext___64dextern_classes_typing_phase_ast].val = var275; /* @extern_classes_typing_phase_ast on <self:ToolContext exact> */
var280 = NEW_extern_classes__ExternClassesTypingPhaseModel(&type_extern_classes__ExternClassesTypingPhaseModel);
var281 = NEW_array__Array(&type_array__Arrayphase__Phase);
var282 = 2;
((void (*)(val*, long))(var281->class->vft[COLOR_array__Array__with_capacity]))(var281, var282) /* with_capacity on <var281:Array[Phase]>*/;
var_283 = var281;
var284 = ((val* (*)(val*))(self->class->vft[COLOR_extern_classes__ToolContext__extern_classes_typing_phase_ast]))(self) /* extern_classes_typing_phase_ast on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_283->class->vft[COLOR_abstract_collection__Sequence__push]))(var_283, var284) /* push on <var_283:Array[Phase]>*/;
var285 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_class__ToolContext__modelize_class_phase]))(self) /* modelize_class_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_283->class->vft[COLOR_abstract_collection__Sequence__push]))(var_283, var285) /* push on <var_283:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var280->class->vft[COLOR_phase__Phase__init]))(var280, self, var_283) /* init on <var280:ExternClassesTypingPhaseModel>*/;
self->attrs[COLOR_extern_classes__ToolContext___64dextern_classes_typing_phase_model].val = var280; /* @extern_classes_typing_phase_model on <self:ToolContext exact> */
var286 = NEW_header_dependency__HeaderDependancyPhase(&type_header_dependency__HeaderDependancyPhase);
var287 = NEW_array__Array(&type_array__Arrayphase__Phase);
var288 = 2;
((void (*)(val*, long))(var287->class->vft[COLOR_array__Array__with_capacity]))(var287, var288) /* with_capacity on <var287:Array[Phase]>*/;
var_289 = var287;
var290 = ((val* (*)(val*))(self->class->vft[COLOR_ffi_base__ToolContext__ffi_language_assignation_phase]))(self) /* ffi_language_assignation_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_289->class->vft[COLOR_abstract_collection__Sequence__push]))(var_289, var290) /* push on <var_289:Array[Phase]>*/;
var291 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_class__ToolContext__modelize_class_phase]))(self) /* modelize_class_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_289->class->vft[COLOR_abstract_collection__Sequence__push]))(var_289, var291) /* push on <var_289:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var286->class->vft[COLOR_phase__Phase__init]))(var286, self, var_289) /* init on <var286:HeaderDependancyPhase>*/;
self->attrs[COLOR_header_dependency__ToolContext___64dheader_dependancy_phase].val = var286; /* @header_dependancy_phase on <self:ToolContext exact> */
var292 = NEW_pkgconfig__PkgconfigPhase(&type_pkgconfig__PkgconfigPhase);
var293 = NULL;
((void (*)(val*, val*, val*))(var292->class->vft[COLOR_phase__Phase__init]))(var292, self, var293) /* init on <var292:PkgconfigPhase>*/;
self->attrs[COLOR_pkgconfig__ToolContext___64dpkgconfig_phase].val = var292; /* @pkgconfig_phase on <self:ToolContext exact> */
var294 = ((short int (*)(val*))(self->class->vft[COLOR_frontend__ToolContext__do_dummy]))(self) /* do_dummy on <self:ToolContext exact>*/;
self->attrs[COLOR_frontend__ToolContext___64ddummy].s = var294; /* @dummy on <self:ToolContext exact> */
var295 = NEW_c_compiler_options__CCompilerOptionsPhase(&type_c_compiler_options__CCompilerOptionsPhase);
var296 = NULL;
((void (*)(val*, val*, val*))(var295->class->vft[COLOR_phase__Phase__init]))(var295, self, var296) /* init on <var295:CCompilerOptionsPhase>*/;
self->attrs[COLOR_c_compiler_options__ToolContext___64dc_compiler_options_phase].val = var295; /* @c_compiler_options_phase on <self:ToolContext exact> */
var297 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce298) {
var299 = varonce298;
} else {
var300 = "Output file";
var301 = 11;
var302 = string__NativeString__to_s_with_length(var300, var301);
var299 = var302;
varonce298 = var299;
}
if (varonce303) {
var304 = varonce303;
} else {
var305 = "-o";
var306 = 2;
var307 = string__NativeString__to_s_with_length(var305, var306);
var304 = var307;
varonce303 = var304;
}
if (varonce308) {
var309 = varonce308;
} else {
var310 = "--output";
var311 = 8;
var312 = string__NativeString__to_s_with_length(var310, var311);
var309 = var312;
varonce308 = var309;
}
var313 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var313 = array_instance Array[String] */
var314 = 2;
var315 = NEW_array__NativeArray(var314, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var315)->values[0] = (val*) var304;
((struct instance_array__NativeArray*)var315)->values[1] = (val*) var309;
((void (*)(val*, val*, long))(var313->class->vft[COLOR_array__Array__with_native]))(var313, var315, var314) /* with_native on <var313:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var297->class->vft[COLOR_opts__OptionString__init]))(var297, var299, var313) /* init on <var297:OptionString>*/;
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_output].val = var297; /* @opt_output on <self:ToolContext exact> */
var316 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce317) {
var318 = varonce317;
} else {
var319 = "Do not invoke C compiler";
var320 = 24;
var321 = string__NativeString__to_s_with_length(var319, var320);
var318 = var321;
varonce317 = var318;
}
if (varonce322) {
var323 = varonce322;
} else {
var324 = "--no-cc";
var325 = 7;
var326 = string__NativeString__to_s_with_length(var324, var325);
var323 = var326;
varonce322 = var323;
}
var327 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var327 = array_instance Array[String] */
var328 = 1;
var329 = NEW_array__NativeArray(var328, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var329)->values[0] = (val*) var323;
((void (*)(val*, val*, long))(var327->class->vft[COLOR_array__Array__with_native]))(var327, var329, var328) /* with_native on <var327:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var316->class->vft[COLOR_opts__OptionBool__init]))(var316, var318, var327) /* init on <var316:OptionBool>*/;
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_cc].val = var316; /* @opt_no_cc on <self:ToolContext exact> */
var330 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (varonce331) {
var332 = varonce331;
} else {
var333 = "Set include path for C header files (may be used more than once)";
var334 = 64;
var335 = string__NativeString__to_s_with_length(var333, var334);
var332 = var335;
varonce331 = var332;
}
if (varonce336) {
var337 = varonce336;
} else {
var338 = "--cc-path";
var339 = 9;
var340 = string__NativeString__to_s_with_length(var338, var339);
var337 = var340;
varonce336 = var337;
}
var341 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var341 = array_instance Array[String] */
var342 = 1;
var343 = NEW_array__NativeArray(var342, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var343)->values[0] = (val*) var337;
((void (*)(val*, val*, long))(var341->class->vft[COLOR_array__Array__with_native]))(var341, var343, var342) /* with_native on <var341:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var330->class->vft[COLOR_opts__OptionArray__init]))(var330, var332, var341) /* init on <var330:OptionArray>*/;
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_cc_path].val = var330; /* @opt_cc_path on <self:ToolContext exact> */
var344 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce345) {
var346 = varonce345;
} else {
var347 = "Additional options to make";
var348 = 26;
var349 = string__NativeString__to_s_with_length(var347, var348);
var346 = var349;
varonce345 = var346;
}
if (varonce350) {
var351 = varonce350;
} else {
var352 = "--make-flags";
var353 = 12;
var354 = string__NativeString__to_s_with_length(var352, var353);
var351 = var354;
varonce350 = var351;
}
var355 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var355 = array_instance Array[String] */
var356 = 1;
var357 = NEW_array__NativeArray(var356, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var357)->values[0] = (val*) var351;
((void (*)(val*, val*, long))(var355->class->vft[COLOR_array__Array__with_native]))(var355, var357, var356) /* with_native on <var355:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var344->class->vft[COLOR_opts__OptionString__init]))(var344, var346, var355) /* init on <var344:OptionString>*/;
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_make_flags].val = var344; /* @opt_make_flags on <self:ToolContext exact> */
var358 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce359) {
var360 = varonce359;
} else {
var361 = "Directory used to generate temporary files";
var362 = 42;
var363 = string__NativeString__to_s_with_length(var361, var362);
var360 = var363;
varonce359 = var360;
}
if (varonce364) {
var365 = varonce364;
} else {
var366 = "--compile-dir";
var367 = 13;
var368 = string__NativeString__to_s_with_length(var366, var367);
var365 = var368;
varonce364 = var365;
}
var369 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var369 = array_instance Array[String] */
var370 = 1;
var371 = NEW_array__NativeArray(var370, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var371)->values[0] = (val*) var365;
((void (*)(val*, val*, long))(var369->class->vft[COLOR_array__Array__with_native]))(var369, var371, var370) /* with_native on <var369:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var358->class->vft[COLOR_opts__OptionString__init]))(var358, var360, var369) /* init on <var358:OptionString>*/;
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_compile_dir].val = var358; /* @opt_compile_dir on <self:ToolContext exact> */
var372 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce373) {
var374 = varonce373;
} else {
var375 = "Generate contracts in the C code against bugs in the compiler";
var376 = 61;
var377 = string__NativeString__to_s_with_length(var375, var376);
var374 = var377;
varonce373 = var374;
}
if (varonce378) {
var379 = varonce378;
} else {
var380 = "--hardening";
var381 = 11;
var382 = string__NativeString__to_s_with_length(var380, var381);
var379 = var382;
varonce378 = var379;
}
var383 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var383 = array_instance Array[String] */
var384 = 1;
var385 = NEW_array__NativeArray(var384, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var385)->values[0] = (val*) var379;
((void (*)(val*, val*, long))(var383->class->vft[COLOR_array__Array__with_native]))(var383, var385, var384) /* with_native on <var383:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var372->class->vft[COLOR_opts__OptionBool__init]))(var372, var374, var383) /* init on <var372:OptionBool>*/;
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_hardening].val = var372; /* @opt_hardening on <self:ToolContext exact> */
var386 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce387) {
var388 = varonce387;
} else {
var389 = "Always insantiate a range and its iterator on \'for\' loops";
var390 = 57;
var391 = string__NativeString__to_s_with_length(var389, var390);
var388 = var391;
varonce387 = var388;
}
if (varonce392) {
var393 = varonce392;
} else {
var394 = "--no-shortcut-range";
var395 = 19;
var396 = string__NativeString__to_s_with_length(var394, var395);
var393 = var396;
varonce392 = var393;
}
var397 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var397 = array_instance Array[String] */
var398 = 1;
var399 = NEW_array__NativeArray(var398, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var399)->values[0] = (val*) var393;
((void (*)(val*, val*, long))(var397->class->vft[COLOR_array__Array__with_native]))(var397, var399, var398) /* with_native on <var397:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var386->class->vft[COLOR_opts__OptionBool__init]))(var386, var388, var397) /* init on <var386:OptionBool>*/;
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_shortcut_range].val = var386; /* @opt_no_shortcut_range on <self:ToolContext exact> */
var400 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce401) {
var402 = varonce401;
} else {
var403 = "Disable type tests of covariant parameters (dangerous)";
var404 = 54;
var405 = string__NativeString__to_s_with_length(var403, var404);
var402 = var405;
varonce401 = var402;
}
if (varonce406) {
var407 = varonce406;
} else {
var408 = "--no-check-covariance";
var409 = 21;
var410 = string__NativeString__to_s_with_length(var408, var409);
var407 = var410;
varonce406 = var407;
}
var411 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var411 = array_instance Array[String] */
var412 = 1;
var413 = NEW_array__NativeArray(var412, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var413)->values[0] = (val*) var407;
((void (*)(val*, val*, long))(var411->class->vft[COLOR_array__Array__with_native]))(var411, var413, var412) /* with_native on <var411:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var400->class->vft[COLOR_opts__OptionBool__init]))(var400, var402, var411) /* init on <var400:OptionBool>*/;
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_covariance].val = var400; /* @opt_no_check_covariance on <self:ToolContext exact> */
var414 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce415) {
var416 = varonce415;
} else {
var417 = "Disable isset tests at the end of constructors (dangerous)";
var418 = 58;
var419 = string__NativeString__to_s_with_length(var417, var418);
var416 = var419;
varonce415 = var416;
}
if (varonce420) {
var421 = varonce420;
} else {
var422 = "--no-check-initialization";
var423 = 25;
var424 = string__NativeString__to_s_with_length(var422, var423);
var421 = var424;
varonce420 = var421;
}
var425 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var425 = array_instance Array[String] */
var426 = 1;
var427 = NEW_array__NativeArray(var426, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var427)->values[0] = (val*) var421;
((void (*)(val*, val*, long))(var425->class->vft[COLOR_array__Array__with_native]))(var425, var427, var426) /* with_native on <var425:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var414->class->vft[COLOR_opts__OptionBool__init]))(var414, var416, var425) /* init on <var414:OptionBool>*/;
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_initialization].val = var414; /* @opt_no_check_initialization on <self:ToolContext exact> */
var428 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce429) {
var430 = varonce429;
} else {
var431 = "Disable the evaluation of explicit \'assert\' and \'as\' (dangerous)";
var432 = 64;
var433 = string__NativeString__to_s_with_length(var431, var432);
var430 = var433;
varonce429 = var430;
}
if (varonce434) {
var435 = varonce434;
} else {
var436 = "--no-check-assert";
var437 = 17;
var438 = string__NativeString__to_s_with_length(var436, var437);
var435 = var438;
varonce434 = var435;
}
var439 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var439 = array_instance Array[String] */
var440 = 1;
var441 = NEW_array__NativeArray(var440, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var441)->values[0] = (val*) var435;
((void (*)(val*, val*, long))(var439->class->vft[COLOR_array__Array__with_native]))(var439, var441, var440) /* with_native on <var439:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var428->class->vft[COLOR_opts__OptionBool__init]))(var428, var430, var439) /* init on <var428:OptionBool>*/;
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_assert].val = var428; /* @opt_no_check_assert on <self:ToolContext exact> */
var442 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce443) {
var444 = varonce443;
} else {
var445 = "Disable implicit casts on unsafe expression usage (dangerous)";
var446 = 61;
var447 = string__NativeString__to_s_with_length(var445, var446);
var444 = var447;
varonce443 = var444;
}
if (varonce448) {
var449 = varonce448;
} else {
var450 = "--no-check-autocast";
var451 = 19;
var452 = string__NativeString__to_s_with_length(var450, var451);
var449 = var452;
varonce448 = var449;
}
var453 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var453 = array_instance Array[String] */
var454 = 1;
var455 = NEW_array__NativeArray(var454, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var455)->values[0] = (val*) var449;
((void (*)(val*, val*, long))(var453->class->vft[COLOR_array__Array__with_native]))(var453, var455, var454) /* with_native on <var453:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var442->class->vft[COLOR_opts__OptionBool__init]))(var442, var444, var453) /* init on <var442:OptionBool>*/;
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_autocast].val = var442; /* @opt_no_check_autocast on <self:ToolContext exact> */
var456 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce457) {
var458 = varonce457;
} else {
var459 = "Disable implicit tests: unset attribute, null receiver (dangerous)";
var460 = 66;
var461 = string__NativeString__to_s_with_length(var459, var460);
var458 = var461;
varonce457 = var458;
}
if (varonce462) {
var463 = varonce462;
} else {
var464 = "--no-check-other";
var465 = 16;
var466 = string__NativeString__to_s_with_length(var464, var465);
var463 = var466;
varonce462 = var463;
}
var467 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var467 = array_instance Array[String] */
var468 = 1;
var469 = NEW_array__NativeArray(var468, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var469)->values[0] = (val*) var463;
((void (*)(val*, val*, long))(var467->class->vft[COLOR_array__Array__with_native]))(var467, var469, var468) /* with_native on <var467:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var456->class->vft[COLOR_opts__OptionBool__init]))(var456, var458, var467) /* init on <var456:OptionBool>*/;
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_other].val = var456; /* @opt_no_check_other on <self:ToolContext exact> */
var470 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce471) {
var472 = varonce471;
} else {
var473 = "Enable static and dynamic count of all type tests";
var474 = 49;
var475 = string__NativeString__to_s_with_length(var473, var474);
var472 = var475;
varonce471 = var472;
}
if (varonce476) {
var477 = varonce476;
} else {
var478 = "--typing-test-metrics";
var479 = 21;
var480 = string__NativeString__to_s_with_length(var478, var479);
var477 = var480;
varonce476 = var477;
}
var481 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var481 = array_instance Array[String] */
var482 = 1;
var483 = NEW_array__NativeArray(var482, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var483)->values[0] = (val*) var477;
((void (*)(val*, val*, long))(var481->class->vft[COLOR_array__Array__with_native]))(var481, var483, var482) /* with_native on <var481:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var470->class->vft[COLOR_opts__OptionBool__init]))(var470, var472, var481) /* init on <var470:OptionBool>*/;
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_typing_test_metrics].val = var470; /* @opt_typing_test_metrics on <self:ToolContext exact> */
var484 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce485) {
var486 = varonce485;
} else {
var487 = "Disables libunwind and generation of C stack traces (can be problematic when compiling to targets such as Android or NaCl)";
var488 = 122;
var489 = string__NativeString__to_s_with_length(var487, var488);
var486 = var489;
varonce485 = var486;
}
if (varonce490) {
var491 = varonce490;
} else {
var492 = "--no-stacktrace";
var493 = 15;
var494 = string__NativeString__to_s_with_length(var492, var493);
var491 = var494;
varonce490 = var491;
}
var495 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var495 = array_instance Array[String] */
var496 = 1;
var497 = NEW_array__NativeArray(var496, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var497)->values[0] = (val*) var491;
((void (*)(val*, val*, long))(var495->class->vft[COLOR_array__Array__with_native]))(var495, var497, var496) /* with_native on <var495:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var484->class->vft[COLOR_opts__OptionBool__init]))(var484, var486, var495) /* init on <var484:OptionBool>*/;
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_stacktrace].val = var484; /* @opt_no_stacktrace on <self:ToolContext exact> */
var498 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce499) {
var500 = varonce499;
} else {
var501 = "Enables the use of gperf to bind C to Nit function names when encountering a Stack trace at runtime";
var502 = 99;
var503 = string__NativeString__to_s_with_length(var501, var502);
var500 = var503;
varonce499 = var500;
}
if (varonce504) {
var505 = varonce504;
} else {
var506 = "--nit-stacktrace";
var507 = 16;
var508 = string__NativeString__to_s_with_length(var506, var507);
var505 = var508;
varonce504 = var505;
}
var509 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var509 = array_instance Array[String] */
var510 = 1;
var511 = NEW_array__NativeArray(var510, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var511)->values[0] = (val*) var505;
((void (*)(val*, val*, long))(var509->class->vft[COLOR_array__Array__with_native]))(var509, var511, var510) /* with_native on <var509:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var498->class->vft[COLOR_opts__OptionBool__init]))(var498, var500, var509) /* init on <var498:OptionBool>*/;
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_stacktrace].val = var498; /* @opt_stacktrace on <self:ToolContext exact> */
var512 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce513) {
var514 = varonce513;
} else {
var515 = "Use separate compilation";
var516 = 24;
var517 = string__NativeString__to_s_with_length(var515, var516);
var514 = var517;
varonce513 = var514;
}
if (varonce518) {
var519 = varonce518;
} else {
var520 = "--separate";
var521 = 10;
var522 = string__NativeString__to_s_with_length(var520, var521);
var519 = var522;
varonce518 = var519;
}
var523 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var523 = array_instance Array[String] */
var524 = 1;
var525 = NEW_array__NativeArray(var524, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var525)->values[0] = (val*) var519;
((void (*)(val*, val*, long))(var523->class->vft[COLOR_array__Array__with_native]))(var523, var525, var524) /* with_native on <var523:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var512->class->vft[COLOR_opts__OptionBool__init]))(var512, var514, var523) /* init on <var512:OptionBool>*/;
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_separate].val = var512; /* @opt_separate on <self:ToolContext exact> */
var526 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce527) {
var528 = varonce527;
} else {
var529 = "Do not inline call to intern methods";
var530 = 36;
var531 = string__NativeString__to_s_with_length(var529, var530);
var528 = var531;
varonce527 = var528;
}
if (varonce532) {
var533 = varonce532;
} else {
var534 = "--no-inline-intern";
var535 = 18;
var536 = string__NativeString__to_s_with_length(var534, var535);
var533 = var536;
varonce532 = var533;
}
var537 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var537 = array_instance Array[String] */
var538 = 1;
var539 = NEW_array__NativeArray(var538, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var539)->values[0] = (val*) var533;
((void (*)(val*, val*, long))(var537->class->vft[COLOR_array__Array__with_native]))(var537, var539, var538) /* with_native on <var537:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var526->class->vft[COLOR_opts__OptionBool__init]))(var526, var528, var537) /* init on <var526:OptionBool>*/;
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_no_inline_intern].val = var526; /* @opt_no_inline_intern on <self:ToolContext exact> */
var540 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce541) {
var542 = varonce541;
} else {
var543 = "Put primitive attibutes in a box instead of an union";
var544 = 52;
var545 = string__NativeString__to_s_with_length(var543, var544);
var542 = var545;
varonce541 = var542;
}
if (varonce546) {
var547 = varonce546;
} else {
var548 = "--no-union-attribute";
var549 = 20;
var550 = string__NativeString__to_s_with_length(var548, var549);
var547 = var550;
varonce546 = var547;
}
var551 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var551 = array_instance Array[String] */
var552 = 1;
var553 = NEW_array__NativeArray(var552, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var553)->values[0] = (val*) var547;
((void (*)(val*, val*, long))(var551->class->vft[COLOR_array__Array__with_native]))(var551, var553, var552) /* with_native on <var551:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var540->class->vft[COLOR_opts__OptionBool__init]))(var540, var542, var551) /* init on <var540:OptionBool>*/;
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_no_union_attribute].val = var540; /* @opt_no_union_attribute on <self:ToolContext exact> */
var554 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce555) {
var556 = varonce555;
} else {
var557 = "Always call == in a polymorphic way";
var558 = 35;
var559 = string__NativeString__to_s_with_length(var557, var558);
var556 = var559;
varonce555 = var556;
}
if (varonce560) {
var561 = varonce560;
} else {
var562 = "--no-shortcut-equal";
var563 = 19;
var564 = string__NativeString__to_s_with_length(var562, var563);
var561 = var564;
varonce560 = var561;
}
var565 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var565 = array_instance Array[String] */
var566 = 1;
var567 = NEW_array__NativeArray(var566, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var567)->values[0] = (val*) var561;
((void (*)(val*, val*, long))(var565->class->vft[COLOR_array__Array__with_native]))(var565, var567, var566) /* with_native on <var565:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var554->class->vft[COLOR_opts__OptionBool__init]))(var554, var556, var565) /* init on <var554:OptionBool>*/;
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_no_shortcut_equate].val = var554; /* @opt_no_shortcut_equate on <self:ToolContext exact> */
var568 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce569) {
var570 = varonce569;
} else {
var571 = "Inline colors and ids";
var572 = 21;
var573 = string__NativeString__to_s_with_length(var571, var572);
var570 = var573;
varonce569 = var570;
}
if (varonce574) {
var575 = varonce574;
} else {
var576 = "--inline-coloring-numbers";
var577 = 25;
var578 = string__NativeString__to_s_with_length(var576, var577);
var575 = var578;
varonce574 = var575;
}
var579 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var579 = array_instance Array[String] */
var580 = 1;
var581 = NEW_array__NativeArray(var580, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var581)->values[0] = (val*) var575;
((void (*)(val*, val*, long))(var579->class->vft[COLOR_array__Array__with_native]))(var579, var581, var580) /* with_native on <var579:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var568->class->vft[COLOR_opts__OptionBool__init]))(var568, var570, var579) /* init on <var568:OptionBool>*/;
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_inline_coloring_numbers].val = var568; /* @opt_inline_coloring_numbers on <self:ToolContext exact> */
var582 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce583) {
var584 = varonce583;
} else {
var585 = "Colorize items incrementaly, used to simulate binary matrix typing";
var586 = 66;
var587 = string__NativeString__to_s_with_length(var585, var586);
var584 = var587;
varonce583 = var584;
}
if (varonce588) {
var589 = varonce588;
} else {
var590 = "--bm-typing";
var591 = 11;
var592 = string__NativeString__to_s_with_length(var590, var591);
var589 = var592;
varonce588 = var589;
}
var593 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var593 = array_instance Array[String] */
var594 = 1;
var595 = NEW_array__NativeArray(var594, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var595)->values[0] = (val*) var589;
((void (*)(val*, val*, long))(var593->class->vft[COLOR_array__Array__with_native]))(var593, var595, var594) /* with_native on <var593:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var582->class->vft[COLOR_opts__OptionBool__init]))(var582, var584, var593) /* init on <var582:OptionBool>*/;
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_bm_typing].val = var582; /* @opt_bm_typing on <self:ToolContext exact> */
var596 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce597) {
var598 = varonce597;
} else {
var599 = "Replace coloration by perfect hashing (with mod operator)";
var600 = 57;
var601 = string__NativeString__to_s_with_length(var599, var600);
var598 = var601;
varonce597 = var598;
}
if (varonce602) {
var603 = varonce602;
} else {
var604 = "--phmod-typing";
var605 = 14;
var606 = string__NativeString__to_s_with_length(var604, var605);
var603 = var606;
varonce602 = var603;
}
var607 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var607 = array_instance Array[String] */
var608 = 1;
var609 = NEW_array__NativeArray(var608, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var609)->values[0] = (val*) var603;
((void (*)(val*, val*, long))(var607->class->vft[COLOR_array__Array__with_native]))(var607, var609, var608) /* with_native on <var607:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var596->class->vft[COLOR_opts__OptionBool__init]))(var596, var598, var607) /* init on <var596:OptionBool>*/;
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_phmod_typing].val = var596; /* @opt_phmod_typing on <self:ToolContext exact> */
var610 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce611) {
var612 = varonce611;
} else {
var613 = "Replace coloration by perfect hashing (with and operator)";
var614 = 57;
var615 = string__NativeString__to_s_with_length(var613, var614);
var612 = var615;
varonce611 = var612;
}
if (varonce616) {
var617 = varonce616;
} else {
var618 = "--phand-typing";
var619 = 14;
var620 = string__NativeString__to_s_with_length(var618, var619);
var617 = var620;
varonce616 = var617;
}
var621 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var621 = array_instance Array[String] */
var622 = 1;
var623 = NEW_array__NativeArray(var622, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var623)->values[0] = (val*) var617;
((void (*)(val*, val*, long))(var621->class->vft[COLOR_array__Array__with_native]))(var621, var623, var622) /* with_native on <var621:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var610->class->vft[COLOR_opts__OptionBool__init]))(var610, var612, var621) /* init on <var610:OptionBool>*/;
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_phand_typing].val = var610; /* @opt_phand_typing on <self:ToolContext exact> */
var624 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce625) {
var626 = varonce625;
} else {
var627 = "Enable static size measuring of tables used for vft, typing and resolution";
var628 = 74;
var629 = string__NativeString__to_s_with_length(var627, var628);
var626 = var629;
varonce625 = var626;
}
if (varonce630) {
var631 = varonce630;
} else {
var632 = "--tables-metrics";
var633 = 16;
var634 = string__NativeString__to_s_with_length(var632, var633);
var631 = var634;
varonce630 = var631;
}
var635 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var635 = array_instance Array[String] */
var636 = 1;
var637 = NEW_array__NativeArray(var636, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var637)->values[0] = (val*) var631;
((void (*)(val*, val*, long))(var635->class->vft[COLOR_array__Array__with_native]))(var635, var637, var636) /* with_native on <var635:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var624->class->vft[COLOR_opts__OptionBool__init]))(var624, var626, var635) /* init on <var624:OptionBool>*/;
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_tables_metrics].val = var624; /* @opt_tables_metrics on <self:ToolContext exact> */
var638 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce639) {
var640 = varonce639;
} else {
var641 = "Erase generic types";
var642 = 19;
var643 = string__NativeString__to_s_with_length(var641, var642);
var640 = var643;
varonce639 = var640;
}
if (varonce644) {
var645 = varonce644;
} else {
var646 = "--erasure";
var647 = 9;
var648 = string__NativeString__to_s_with_length(var646, var647);
var645 = var648;
varonce644 = var645;
}
var649 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var649 = array_instance Array[String] */
var650 = 1;
var651 = NEW_array__NativeArray(var650, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var651)->values[0] = (val*) var645;
((void (*)(val*, val*, long))(var649->class->vft[COLOR_array__Array__with_native]))(var649, var651, var650) /* with_native on <var649:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var638->class->vft[COLOR_opts__OptionBool__init]))(var638, var640, var649) /* init on <var638:OptionBool>*/;
self->attrs[COLOR_separate_erasure_compiler__ToolContext___64dopt_erasure].val = var638; /* @opt_erasure on <self:ToolContext exact> */
var652 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce653) {
var654 = varonce653;
} else {
var655 = "Disable implicit casts on unsafe return with erasure-typing policy (dangerous)";
var656 = 78;
var657 = string__NativeString__to_s_with_length(var655, var656);
var654 = var657;
varonce653 = var654;
}
if (varonce658) {
var659 = varonce658;
} else {
var660 = "--no-check-erasure-cast";
var661 = 23;
var662 = string__NativeString__to_s_with_length(var660, var661);
var659 = var662;
varonce658 = var659;
}
var663 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var663 = array_instance Array[String] */
var664 = 1;
var665 = NEW_array__NativeArray(var664, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var665)->values[0] = (val*) var659;
((void (*)(val*, val*, long))(var663->class->vft[COLOR_array__Array__with_native]))(var663, var665, var664) /* with_native on <var663:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var652->class->vft[COLOR_opts__OptionBool__init]))(var652, var654, var663) /* init on <var652:OptionBool>*/;
self->attrs[COLOR_separate_erasure_compiler__ToolContext___64dopt_no_check_erasure_cast].val = var652; /* @opt_no_check_erasure_cast on <self:ToolContext exact> */
return self;
}
/* runtime class phase__AnnotationPhaseVisitor */
const struct class class_phase__AnnotationPhaseVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to phase:AnnotationPhaseVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to phase:AnnotationPhaseVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to phase:AnnotationPhaseVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to phase:AnnotationPhaseVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to phase:AnnotationPhaseVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to phase:AnnotationPhaseVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to phase:AnnotationPhaseVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to phase:AnnotationPhaseVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to phase:AnnotationPhaseVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to phase:AnnotationPhaseVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to phase:AnnotationPhaseVisitor:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to phase:AnnotationPhaseVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to phase:AnnotationPhaseVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to phase:AnnotationPhaseVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to phase:AnnotationPhaseVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to phase:AnnotationPhaseVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to phase:AnnotationPhaseVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to phase:AnnotationPhaseVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to phase:AnnotationPhaseVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to phase:AnnotationPhaseVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to phase:AnnotationPhaseVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to phase:AnnotationPhaseVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to phase:AnnotationPhaseVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to phase:AnnotationPhaseVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to phase:AnnotationPhaseVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to phase:AnnotationPhaseVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to phase:AnnotationPhaseVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to phase:AnnotationPhaseVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to phase:AnnotationPhaseVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to phase:AnnotationPhaseVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to phase:AnnotationPhaseVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to phase:AnnotationPhaseVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to phase:AnnotationPhaseVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to phase:AnnotationPhaseVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to phase:AnnotationPhaseVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to phase:AnnotationPhaseVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to phase:AnnotationPhaseVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to phase:AnnotationPhaseVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to phase:AnnotationPhaseVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to phase:AnnotationPhaseVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to phase:AnnotationPhaseVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__AnnotationPhaseVisitor__visit, /* pointer to phase:AnnotationPhaseVisitor:phase#AnnotationPhaseVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to phase:AnnotationPhaseVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to phase:AnnotationPhaseVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to phase:AnnotationPhaseVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to phase:AnnotationPhaseVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_phase__AnnotationPhaseVisitor__phase, /* pointer to phase:AnnotationPhaseVisitor:phase#AnnotationPhaseVisitor#phase */
(nitmethod_t)VIRTUAL_phase__AnnotationPhaseVisitor__phase_61d, /* pointer to phase:AnnotationPhaseVisitor:phase#AnnotationPhaseVisitor#phase= */
(nitmethod_t)VIRTUAL_phase__AnnotationPhaseVisitor__init, /* pointer to phase:AnnotationPhaseVisitor:phase#AnnotationPhaseVisitor#init */
}
};
/* allocate AnnotationPhaseVisitor */
val* NEW_phase__AnnotationPhaseVisitor(const struct type* type) {
val* self /* : AnnotationPhaseVisitor */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_phase__AnnotationPhaseVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:AnnotationPhaseVisitor exact> */
return self;
}
/* runtime class simple_misc_analysis__SimpleMiscAnalysisPhase */
const struct class class_simple_misc_analysis__SimpleMiscAnalysisPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__SimpleMiscAnalysisPhase__process_nmodule, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:simple_misc_analysis#SimpleMiscAnalysisPhase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate SimpleMiscAnalysisPhase */
val* NEW_simple_misc_analysis__SimpleMiscAnalysisPhase(const struct type* type) {
val* self /* : SimpleMiscAnalysisPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_simple_misc_analysis__SimpleMiscAnalysisPhase;
return self;
}
/* runtime class simple_misc_analysis__SimpleMiscVisitor */
const struct class class_simple_misc_analysis__SimpleMiscVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to simple_misc_analysis:SimpleMiscVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to simple_misc_analysis:SimpleMiscVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to simple_misc_analysis:SimpleMiscVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to simple_misc_analysis:SimpleMiscVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to simple_misc_analysis:SimpleMiscVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to simple_misc_analysis:SimpleMiscVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to simple_misc_analysis:SimpleMiscVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to simple_misc_analysis:SimpleMiscVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to simple_misc_analysis:SimpleMiscVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to simple_misc_analysis:SimpleMiscVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to simple_misc_analysis:SimpleMiscVisitor:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to simple_misc_analysis:SimpleMiscVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to simple_misc_analysis:SimpleMiscVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to simple_misc_analysis:SimpleMiscVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to simple_misc_analysis:SimpleMiscVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to simple_misc_analysis:SimpleMiscVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to simple_misc_analysis:SimpleMiscVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to simple_misc_analysis:SimpleMiscVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to simple_misc_analysis:SimpleMiscVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to simple_misc_analysis:SimpleMiscVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to simple_misc_analysis:SimpleMiscVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to simple_misc_analysis:SimpleMiscVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to simple_misc_analysis:SimpleMiscVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to simple_misc_analysis:SimpleMiscVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to simple_misc_analysis:SimpleMiscVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to simple_misc_analysis:SimpleMiscVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to simple_misc_analysis:SimpleMiscVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to simple_misc_analysis:SimpleMiscVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to simple_misc_analysis:SimpleMiscVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to simple_misc_analysis:SimpleMiscVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to simple_misc_analysis:SimpleMiscVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to simple_misc_analysis:SimpleMiscVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to simple_misc_analysis:SimpleMiscVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to simple_misc_analysis:SimpleMiscVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to simple_misc_analysis:SimpleMiscVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to simple_misc_analysis:SimpleMiscVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to simple_misc_analysis:SimpleMiscVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to simple_misc_analysis:SimpleMiscVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to simple_misc_analysis:SimpleMiscVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to simple_misc_analysis:SimpleMiscVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to simple_misc_analysis:SimpleMiscVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_simple_misc_analysis__SimpleMiscVisitor__visit, /* pointer to simple_misc_analysis:SimpleMiscVisitor:simple_misc_analysis#SimpleMiscVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to simple_misc_analysis:SimpleMiscVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to simple_misc_analysis:SimpleMiscVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to simple_misc_analysis:SimpleMiscVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to simple_misc_analysis:SimpleMiscVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__SimpleMiscVisitor__once_count, /* pointer to simple_misc_analysis:SimpleMiscVisitor:simple_misc_analysis#SimpleMiscVisitor#once_count */
(nitmethod_t)VIRTUAL_simple_misc_analysis__SimpleMiscVisitor__once_count_61d, /* pointer to simple_misc_analysis:SimpleMiscVisitor:simple_misc_analysis#SimpleMiscVisitor#once_count= */
(nitmethod_t)VIRTUAL_simple_misc_analysis__SimpleMiscVisitor__toolcontext, /* pointer to simple_misc_analysis:SimpleMiscVisitor:simple_misc_analysis#SimpleMiscVisitor#toolcontext */
(nitmethod_t)VIRTUAL_simple_misc_analysis__SimpleMiscVisitor__toolcontext_61d, /* pointer to simple_misc_analysis:SimpleMiscVisitor:simple_misc_analysis#SimpleMiscVisitor#toolcontext= */
(nitmethod_t)VIRTUAL_simple_misc_analysis__SimpleMiscVisitor__warning, /* pointer to simple_misc_analysis:SimpleMiscVisitor:simple_misc_analysis#SimpleMiscVisitor#warning */
(nitmethod_t)VIRTUAL_simple_misc_analysis__SimpleMiscVisitor__init, /* pointer to simple_misc_analysis:SimpleMiscVisitor:simple_misc_analysis#SimpleMiscVisitor#init */
}
};
/* allocate SimpleMiscVisitor */
val* NEW_simple_misc_analysis__SimpleMiscVisitor(const struct type* type) {
val* self /* : SimpleMiscVisitor */;
val* var /* : null */;
long var1 /* : Int */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_simple_misc_analysis__SimpleMiscVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:SimpleMiscVisitor exact> */
var1 = 0;
self->attrs[COLOR_simple_misc_analysis__SimpleMiscVisitor___64donce_count].l = var1; /* @once_count on <self:SimpleMiscVisitor exact> */
return self;
}
/* runtime class literal__LiteralPhase */
const struct class class_literal__LiteralPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to literal:LiteralPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to literal:LiteralPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to literal:LiteralPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to literal:LiteralPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to literal:LiteralPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to literal:LiteralPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to literal:LiteralPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to literal:LiteralPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to literal:LiteralPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to literal:LiteralPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to literal:LiteralPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to literal:LiteralPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to literal:LiteralPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to literal:LiteralPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to literal:LiteralPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to literal:LiteralPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to literal:LiteralPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to literal:LiteralPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to literal:LiteralPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to literal:LiteralPhase:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to literal:LiteralPhase:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to literal:LiteralPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to literal:LiteralPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to literal:LiteralPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to literal:LiteralPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to literal:LiteralPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to literal:LiteralPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to literal:LiteralPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to literal:LiteralPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to literal:LiteralPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to literal:LiteralPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to literal:LiteralPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to literal:LiteralPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to literal:LiteralPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to literal:LiteralPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to literal:LiteralPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to literal:LiteralPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to literal:LiteralPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to literal:LiteralPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to literal:LiteralPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to literal:LiteralPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to literal:LiteralPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to literal:LiteralPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to literal:LiteralPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to literal:LiteralPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to literal:LiteralPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to literal:LiteralPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to literal:LiteralPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to literal:LiteralPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to literal:LiteralPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to literal:LiteralPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to literal:LiteralPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to literal:LiteralPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to literal:LiteralPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to literal:LiteralPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to literal:LiteralPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_literal__LiteralPhase__process_nmodule, /* pointer to literal:LiteralPhase:literal#LiteralPhase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to literal:LiteralPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to literal:LiteralPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to literal:LiteralPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to literal:LiteralPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate LiteralPhase */
val* NEW_literal__LiteralPhase(const struct type* type) {
val* self /* : LiteralPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_literal__LiteralPhase;
return self;
}
/* runtime class literal__LiteralVisitor */
const struct class class_literal__LiteralVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to literal:LiteralVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to literal:LiteralVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to literal:LiteralVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to literal:LiteralVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to literal:LiteralVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to literal:LiteralVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to literal:LiteralVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to literal:LiteralVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to literal:LiteralVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to literal:LiteralVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to literal:LiteralVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to literal:LiteralVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to literal:LiteralVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to literal:LiteralVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to literal:LiteralVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to literal:LiteralVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to literal:LiteralVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to literal:LiteralVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to literal:LiteralVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to literal:LiteralVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to literal:LiteralVisitor:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to literal:LiteralVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to literal:LiteralVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to literal:LiteralVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to literal:LiteralVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to literal:LiteralVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to literal:LiteralVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to literal:LiteralVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to literal:LiteralVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to literal:LiteralVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to literal:LiteralVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to literal:LiteralVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to literal:LiteralVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to literal:LiteralVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to literal:LiteralVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to literal:LiteralVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to literal:LiteralVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to literal:LiteralVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to literal:LiteralVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to literal:LiteralVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to literal:LiteralVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to literal:LiteralVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to literal:LiteralVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to literal:LiteralVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to literal:LiteralVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to literal:LiteralVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_literal__LiteralVisitor__visit, /* pointer to literal:LiteralVisitor:literal#LiteralVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to literal:LiteralVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to literal:LiteralVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to literal:LiteralVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to literal:LiteralVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_literal__LiteralVisitor__toolcontext, /* pointer to literal:LiteralVisitor:literal#LiteralVisitor#toolcontext */
(nitmethod_t)VIRTUAL_literal__LiteralVisitor__toolcontext_61d, /* pointer to literal:LiteralVisitor:literal#LiteralVisitor#toolcontext= */
(nitmethod_t)VIRTUAL_literal__LiteralVisitor__init, /* pointer to literal:LiteralVisitor:literal#LiteralVisitor#init */
}
};
/* allocate LiteralVisitor */
val* NEW_literal__LiteralVisitor(const struct type* type) {
val* self /* : LiteralVisitor */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_literal__LiteralVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:LiteralVisitor exact> */
return self;
}
/* runtime class scope__ScopePhase */
const struct class class_scope__ScopePhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to scope:ScopePhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to scope:ScopePhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to scope:ScopePhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to scope:ScopePhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to scope:ScopePhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to scope:ScopePhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to scope:ScopePhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:ScopePhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:ScopePhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:ScopePhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to scope:ScopePhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to scope:ScopePhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to scope:ScopePhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to scope:ScopePhase:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to scope:ScopePhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to scope:ScopePhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to scope:ScopePhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to scope:ScopePhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to scope:ScopePhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to scope:ScopePhase:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to scope:ScopePhase:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to scope:ScopePhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to scope:ScopePhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to scope:ScopePhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to scope:ScopePhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to scope:ScopePhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to scope:ScopePhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to scope:ScopePhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to scope:ScopePhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to scope:ScopePhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to scope:ScopePhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to scope:ScopePhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to scope:ScopePhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to scope:ScopePhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to scope:ScopePhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to scope:ScopePhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to scope:ScopePhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to scope:ScopePhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to scope:ScopePhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to scope:ScopePhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to scope:ScopePhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to scope:ScopePhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to scope:ScopePhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to scope:ScopePhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to scope:ScopePhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to scope:ScopePhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to scope:ScopePhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to scope:ScopePhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to scope:ScopePhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to scope:ScopePhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to scope:ScopePhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to scope:ScopePhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to scope:ScopePhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to scope:ScopePhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to scope:ScopePhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to scope:ScopePhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to scope:ScopePhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to scope:ScopePhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_scope__ScopePhase__process_npropdef, /* pointer to scope:ScopePhase:scope#ScopePhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to scope:ScopePhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to scope:ScopePhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate ScopePhase */
val* NEW_scope__ScopePhase(const struct type* type) {
val* self /* : ScopePhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_scope__ScopePhase;
return self;
}
/* runtime class scope__Variable */
const struct class class_scope__Variable = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to scope:Variable:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to scope:Variable:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to scope:Variable:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to scope:Variable:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to scope:Variable:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to scope:Variable:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to scope:Variable:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:Variable:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:Variable:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:Variable:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to scope:Variable:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to scope:Variable:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to scope:Variable:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to scope:Variable:math#Object#srand */
(nitmethod_t)VIRTUAL_scope__Variable__to_s, /* pointer to scope:Variable:scope#Variable#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to scope:Variable:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to scope:Variable:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to scope:Variable:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to scope:Variable:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to scope:Variable:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to scope:Variable:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to scope:Variable:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to scope:Variable:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to scope:Variable:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to scope:Variable:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to scope:Variable:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to scope:Variable:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to scope:Variable:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to scope:Variable:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to scope:Variable:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to scope:Variable:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to scope:Variable:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to scope:Variable:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to scope:Variable:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to scope:Variable:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to scope:Variable:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to scope:Variable:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to scope:Variable:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to scope:Variable:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to scope:Variable:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to scope:Variable:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to scope:Variable:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to scope:Variable:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to scope:Variable:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to scope:Variable:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to scope:Variable:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to scope:Variable:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to scope:Variable:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to scope:Variable:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to scope:Variable:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to scope:Variable:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_scope__Variable__name, /* pointer to scope:Variable:scope#Variable#name */
(nitmethod_t)VIRTUAL_scope__Variable__name_61d, /* pointer to scope:Variable:scope#Variable#name= */
(nitmethod_t)VIRTUAL_scope__Variable__init, /* pointer to scope:Variable:scope#Variable#init */
(nitmethod_t)VIRTUAL_typing__Variable__declared_type, /* pointer to scope:Variable:typing#Variable#declared_type */
(nitmethod_t)VIRTUAL_typing__Variable__declared_type_61d, /* pointer to scope:Variable:typing#Variable#declared_type= */
}
};
/* allocate Variable */
val* NEW_scope__Variable(const struct type* type) {
val* self /* : Variable */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_scope__Variable;
return self;
}
/* runtime class scope__EscapeMark */
const struct class class_scope__EscapeMark = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to scope:EscapeMark:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to scope:EscapeMark:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to scope:EscapeMark:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to scope:EscapeMark:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to scope:EscapeMark:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to scope:EscapeMark:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to scope:EscapeMark:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:EscapeMark:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:EscapeMark:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:EscapeMark:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to scope:EscapeMark:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to scope:EscapeMark:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to scope:EscapeMark:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to scope:EscapeMark:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to scope:EscapeMark:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to scope:EscapeMark:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to scope:EscapeMark:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to scope:EscapeMark:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to scope:EscapeMark:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to scope:EscapeMark:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to scope:EscapeMark:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to scope:EscapeMark:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to scope:EscapeMark:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to scope:EscapeMark:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to scope:EscapeMark:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to scope:EscapeMark:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to scope:EscapeMark:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to scope:EscapeMark:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to scope:EscapeMark:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to scope:EscapeMark:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to scope:EscapeMark:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to scope:EscapeMark:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to scope:EscapeMark:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to scope:EscapeMark:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to scope:EscapeMark:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to scope:EscapeMark:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to scope:EscapeMark:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to scope:EscapeMark:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to scope:EscapeMark:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to scope:EscapeMark:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to scope:EscapeMark:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to scope:EscapeMark:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to scope:EscapeMark:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to scope:EscapeMark:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to scope:EscapeMark:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to scope:EscapeMark:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to scope:EscapeMark:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to scope:EscapeMark:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to scope:EscapeMark:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to scope:EscapeMark:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to scope:EscapeMark:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_scope__EscapeMark__name, /* pointer to scope:EscapeMark:scope#EscapeMark#name */
(nitmethod_t)VIRTUAL_scope__EscapeMark__name_61d, /* pointer to scope:EscapeMark:scope#EscapeMark#name= */
(nitmethod_t)VIRTUAL_scope__EscapeMark__for_loop, /* pointer to scope:EscapeMark:scope#EscapeMark#for_loop */
(nitmethod_t)VIRTUAL_scope__EscapeMark__for_loop_61d, /* pointer to scope:EscapeMark:scope#EscapeMark#for_loop= */
(nitmethod_t)VIRTUAL_scope__EscapeMark__continues, /* pointer to scope:EscapeMark:scope#EscapeMark#continues */
(nitmethod_t)VIRTUAL_scope__EscapeMark__continues_61d, /* pointer to scope:EscapeMark:scope#EscapeMark#continues= */
(nitmethod_t)VIRTUAL_scope__EscapeMark__breaks, /* pointer to scope:EscapeMark:scope#EscapeMark#breaks */
(nitmethod_t)VIRTUAL_scope__EscapeMark__breaks_61d, /* pointer to scope:EscapeMark:scope#EscapeMark#breaks= */
(nitmethod_t)VIRTUAL_scope__EscapeMark__init, /* pointer to scope:EscapeMark:scope#EscapeMark#init */
}
};
/* allocate EscapeMark */
val* NEW_scope__EscapeMark(const struct type* type) {
val* self /* : EscapeMark */;
val* var /* : Array[AContinueExpr] */;
val* var1 /* : Array[ABreakExpr] */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_scope__EscapeMark;
var = NEW_array__Array(&type_array__Arrayparser_nodes__AContinueExpr);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[AContinueExpr]>*/;
self->attrs[COLOR_scope__EscapeMark___64dcontinues].val = var; /* @continues on <self:EscapeMark exact> */
var1 = NEW_array__Array(&type_array__Arrayparser_nodes__ABreakExpr);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[ABreakExpr]>*/;
self->attrs[COLOR_scope__EscapeMark___64dbreaks].val = var1; /* @breaks on <self:EscapeMark exact> */
return self;
}
/* runtime class scope__ScopeVisitor */
const struct class class_scope__ScopeVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to scope:ScopeVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to scope:ScopeVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to scope:ScopeVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to scope:ScopeVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to scope:ScopeVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to scope:ScopeVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to scope:ScopeVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:ScopeVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:ScopeVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:ScopeVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to scope:ScopeVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to scope:ScopeVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to scope:ScopeVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to scope:ScopeVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to scope:ScopeVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to scope:ScopeVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to scope:ScopeVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to scope:ScopeVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to scope:ScopeVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to scope:ScopeVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to scope:ScopeVisitor:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to scope:ScopeVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to scope:ScopeVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to scope:ScopeVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to scope:ScopeVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to scope:ScopeVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to scope:ScopeVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to scope:ScopeVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to scope:ScopeVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to scope:ScopeVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to scope:ScopeVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to scope:ScopeVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to scope:ScopeVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to scope:ScopeVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to scope:ScopeVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to scope:ScopeVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to scope:ScopeVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to scope:ScopeVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to scope:ScopeVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to scope:ScopeVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to scope:ScopeVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to scope:ScopeVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to scope:ScopeVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to scope:ScopeVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to scope:ScopeVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to scope:ScopeVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__visit, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to scope:ScopeVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to scope:ScopeVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to scope:ScopeVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to scope:ScopeVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__toolcontext, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#toolcontext */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__toolcontext_61d, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#toolcontext= */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__selfvariable, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#selfvariable */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__selfvariable_61d, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#selfvariable= */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__init, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#init */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__scopes, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#scopes */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__scopes_61d, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#scopes= */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__register_variable, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#register_variable */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__search_variable, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#search_variable */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__enter_visit_block, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#enter_visit_block */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__search_label, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#search_label */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__make_escape_mark, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#make_escape_mark */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__get_escapemark, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#get_escapemark */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__error, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#error */
}
};
/* allocate ScopeVisitor */
val* NEW_scope__ScopeVisitor(const struct type* type) {
val* self /* : ScopeVisitor */;
val* var /* : null */;
val* var1 /* : Variable */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : List[Scope] */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_scope__ScopeVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:ScopeVisitor exact> */
var1 = NEW_scope__Variable(&type_scope__Variable);
if (varonce) {
var2 = varonce;
} else {
var3 = "self";
var4 = 4;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
((void (*)(val*, val*))(var1->class->vft[COLOR_scope__Variable__init]))(var1, var2) /* init on <var1:Variable>*/;
self->attrs[COLOR_scope__ScopeVisitor___64dselfvariable].val = var1; /* @selfvariable on <self:ScopeVisitor exact> */
var6 = NEW_list__List(&type_list__Listscope__Scope);
((void (*)(val*))(var6->class->vft[COLOR_list__List__init]))(var6) /* init on <var6:List[Scope]>*/;
self->attrs[COLOR_scope__ScopeVisitor___64dscopes].val = var6; /* @scopes on <self:ScopeVisitor exact> */
return self;
}
/* runtime class scope__Scope */
const struct class class_scope__Scope = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to scope:Scope:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to scope:Scope:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to scope:Scope:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to scope:Scope:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to scope:Scope:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to scope:Scope:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to scope:Scope:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:Scope:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:Scope:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:Scope:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to scope:Scope:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to scope:Scope:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to scope:Scope:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to scope:Scope:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to scope:Scope:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to scope:Scope:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to scope:Scope:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to scope:Scope:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to scope:Scope:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to scope:Scope:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to scope:Scope:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to scope:Scope:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to scope:Scope:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to scope:Scope:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to scope:Scope:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to scope:Scope:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to scope:Scope:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to scope:Scope:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to scope:Scope:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to scope:Scope:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to scope:Scope:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to scope:Scope:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to scope:Scope:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to scope:Scope:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to scope:Scope:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to scope:Scope:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to scope:Scope:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to scope:Scope:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to scope:Scope:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to scope:Scope:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to scope:Scope:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to scope:Scope:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to scope:Scope:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to scope:Scope:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to scope:Scope:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to scope:Scope:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to scope:Scope:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to scope:Scope:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to scope:Scope:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to scope:Scope:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to scope:Scope:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_scope__Scope__variables, /* pointer to scope:Scope:scope#Scope#variables */
(nitmethod_t)VIRTUAL_scope__Scope__variables_61d, /* pointer to scope:Scope:scope#Scope#variables= */
(nitmethod_t)VIRTUAL_scope__Scope__escapemark, /* pointer to scope:Scope:scope#Scope#escapemark */
(nitmethod_t)VIRTUAL_scope__Scope__escapemark_61d, /* pointer to scope:Scope:scope#Scope#escapemark= */
(nitmethod_t)VIRTUAL_scope__Scope__get_variable, /* pointer to scope:Scope:scope#Scope#get_variable */
(nitmethod_t)VIRTUAL_scope__Scope__init, /* pointer to scope:Scope:scope#Scope#init */
}
};
/* allocate Scope */
val* NEW_scope__Scope(const struct type* type) {
val* self /* : Scope */;
val* var /* : HashMap[String, Variable] */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_scope__Scope;
var = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringscope__Variable);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashMap__init]))(var) /* init on <var:HashMap[String, Variable]>*/;
self->attrs[COLOR_scope__Scope___64dvariables].val = var; /* @variables on <self:Scope exact> */
var1 = NULL;
self->attrs[COLOR_scope__Scope___64descapemark].val = var1; /* @escapemark on <self:Scope exact> */
return self;
}
/* runtime class flow__FlowPhase */
const struct class class_flow__FlowPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to flow:FlowPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to flow:FlowPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to flow:FlowPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to flow:FlowPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to flow:FlowPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to flow:FlowPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to flow:FlowPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to flow:FlowPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to flow:FlowPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to flow:FlowPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to flow:FlowPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to flow:FlowPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to flow:FlowPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to flow:FlowPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to flow:FlowPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to flow:FlowPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to flow:FlowPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to flow:FlowPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to flow:FlowPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to flow:FlowPhase:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to flow:FlowPhase:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to flow:FlowPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to flow:FlowPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to flow:FlowPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to flow:FlowPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to flow:FlowPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to flow:FlowPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to flow:FlowPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to flow:FlowPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to flow:FlowPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to flow:FlowPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to flow:FlowPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to flow:FlowPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to flow:FlowPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to flow:FlowPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to flow:FlowPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to flow:FlowPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to flow:FlowPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to flow:FlowPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to flow:FlowPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to flow:FlowPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to flow:FlowPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to flow:FlowPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to flow:FlowPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to flow:FlowPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to flow:FlowPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to flow:FlowPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to flow:FlowPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to flow:FlowPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to flow:FlowPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to flow:FlowPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to flow:FlowPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to flow:FlowPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to flow:FlowPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to flow:FlowPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to flow:FlowPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to flow:FlowPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to flow:FlowPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_flow__FlowPhase__process_npropdef, /* pointer to flow:FlowPhase:flow#FlowPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to flow:FlowPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to flow:FlowPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate FlowPhase */
val* NEW_flow__FlowPhase(const struct type* type) {
val* self /* : FlowPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_flow__FlowPhase;
return self;
}
/* runtime class flow__FlowVisitor */
const struct class class_flow__FlowVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to flow:FlowVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to flow:FlowVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to flow:FlowVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to flow:FlowVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to flow:FlowVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to flow:FlowVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to flow:FlowVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to flow:FlowVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to flow:FlowVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to flow:FlowVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to flow:FlowVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to flow:FlowVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to flow:FlowVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to flow:FlowVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to flow:FlowVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to flow:FlowVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to flow:FlowVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to flow:FlowVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to flow:FlowVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to flow:FlowVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to flow:FlowVisitor:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to flow:FlowVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to flow:FlowVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to flow:FlowVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to flow:FlowVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to flow:FlowVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to flow:FlowVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to flow:FlowVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to flow:FlowVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to flow:FlowVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to flow:FlowVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to flow:FlowVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to flow:FlowVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to flow:FlowVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to flow:FlowVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to flow:FlowVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to flow:FlowVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to flow:FlowVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to flow:FlowVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to flow:FlowVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to flow:FlowVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to flow:FlowVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to flow:FlowVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to flow:FlowVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to flow:FlowVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to flow:FlowVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to flow:FlowVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to flow:FlowVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to flow:FlowVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to flow:FlowVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to flow:FlowVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__visit, /* pointer to flow:FlowVisitor:flow#FlowVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to flow:FlowVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to flow:FlowVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to flow:FlowVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to flow:FlowVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__current_flow_context, /* pointer to flow:FlowVisitor:flow#FlowVisitor#current_flow_context */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__current_flow_context_61d, /* pointer to flow:FlowVisitor:flow#FlowVisitor#current_flow_context= */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__toolcontext, /* pointer to flow:FlowVisitor:flow#FlowVisitor#toolcontext */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__toolcontext_61d, /* pointer to flow:FlowVisitor:flow#FlowVisitor#toolcontext= */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__init, /* pointer to flow:FlowVisitor:flow#FlowVisitor#init */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__first, /* pointer to flow:FlowVisitor:flow#FlowVisitor#first */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__first_61d, /* pointer to flow:FlowVisitor:flow#FlowVisitor#first= */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__visit_expr, /* pointer to flow:FlowVisitor:flow#FlowVisitor#visit_expr */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__flows, /* pointer to flow:FlowVisitor:flow#FlowVisitor#flows */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__flows_61d, /* pointer to flow:FlowVisitor:flow#FlowVisitor#flows= */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__printflow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#printflow */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__make_sub_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_sub_flow */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__make_merge_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_merge_flow */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__make_true_false_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_true_false_flow */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__make_sub_true_false_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_sub_true_false_flow */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__make_unreachable_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_unreachable_flow */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__merge_continues_to, /* pointer to flow:FlowVisitor:flow#FlowVisitor#merge_continues_to */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__merge_breaks, /* pointer to flow:FlowVisitor:flow#FlowVisitor#merge_breaks */
}
};
/* allocate FlowVisitor */
val* NEW_flow__FlowVisitor(const struct type* type) {
val* self /* : FlowVisitor */;
val* var /* : null */;
val* var1 /* : Array[FlowContext] */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_flow__FlowVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:FlowVisitor exact> */
var1 = NEW_array__Array(&type_array__Arrayflow__FlowContext);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[FlowContext]>*/;
self->attrs[COLOR_flow__FlowVisitor___64dflows].val = var1; /* @flows on <self:FlowVisitor exact> */
return self;
}
/* runtime class flow__FlowContext */
const struct class class_flow__FlowContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to flow:FlowContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to flow:FlowContext:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to flow:FlowContext:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to flow:FlowContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to flow:FlowContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to flow:FlowContext:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to flow:FlowContext:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to flow:FlowContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to flow:FlowContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to flow:FlowContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to flow:FlowContext:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to flow:FlowContext:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to flow:FlowContext:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to flow:FlowContext:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to flow:FlowContext:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to flow:FlowContext:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to flow:FlowContext:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to flow:FlowContext:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to flow:FlowContext:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to flow:FlowContext:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to flow:FlowContext:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to flow:FlowContext:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to flow:FlowContext:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to flow:FlowContext:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to flow:FlowContext:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to flow:FlowContext:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to flow:FlowContext:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to flow:FlowContext:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to flow:FlowContext:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to flow:FlowContext:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to flow:FlowContext:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to flow:FlowContext:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to flow:FlowContext:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to flow:FlowContext:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to flow:FlowContext:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to flow:FlowContext:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to flow:FlowContext:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to flow:FlowContext:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to flow:FlowContext:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to flow:FlowContext:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to flow:FlowContext:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to flow:FlowContext:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to flow:FlowContext:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to flow:FlowContext:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to flow:FlowContext:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to flow:FlowContext:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to flow:FlowContext:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to flow:FlowContext:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to flow:FlowContext:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to flow:FlowContext:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to flow:FlowContext:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_flow__FlowContext__previous, /* pointer to flow:FlowContext:flow#FlowContext#previous */
(nitmethod_t)VIRTUAL_flow__FlowContext__previous_61d, /* pointer to flow:FlowContext:flow#FlowContext#previous= */
(nitmethod_t)VIRTUAL_flow__FlowContext__loops, /* pointer to flow:FlowContext:flow#FlowContext#loops */
(nitmethod_t)VIRTUAL_flow__FlowContext__loops_61d, /* pointer to flow:FlowContext:flow#FlowContext#loops= */
(nitmethod_t)VIRTUAL_flow__FlowContext__is_marked_unreachable, /* pointer to flow:FlowContext:flow#FlowContext#is_marked_unreachable */
(nitmethod_t)VIRTUAL_flow__FlowContext__is_marked_unreachable_61d, /* pointer to flow:FlowContext:flow#FlowContext#is_marked_unreachable= */
(nitmethod_t)VIRTUAL_flow__FlowContext__is_unreachable, /* pointer to flow:FlowContext:flow#FlowContext#is_unreachable */
(nitmethod_t)VIRTUAL_flow__FlowContext__is_already_unreachable, /* pointer to flow:FlowContext:flow#FlowContext#is_already_unreachable */
(nitmethod_t)VIRTUAL_flow__FlowContext__is_already_unreachable_61d, /* pointer to flow:FlowContext:flow#FlowContext#is_already_unreachable= */
(nitmethod_t)VIRTUAL_flow__FlowContext__is_start, /* pointer to flow:FlowContext:flow#FlowContext#is_start */
(nitmethod_t)VIRTUAL_flow__FlowContext__is_start_61d, /* pointer to flow:FlowContext:flow#FlowContext#is_start= */
(nitmethod_t)VIRTUAL_flow__FlowContext__node, /* pointer to flow:FlowContext:flow#FlowContext#node */
(nitmethod_t)VIRTUAL_flow__FlowContext__node_61d, /* pointer to flow:FlowContext:flow#FlowContext#node= */
(nitmethod_t)VIRTUAL_flow__FlowContext__name, /* pointer to flow:FlowContext:flow#FlowContext#name */
(nitmethod_t)VIRTUAL_flow__FlowContext__name_61d, /* pointer to flow:FlowContext:flow#FlowContext#name= */
(nitmethod_t)VIRTUAL_flow__FlowContext__when_true, /* pointer to flow:FlowContext:flow#FlowContext#when_true */
(nitmethod_t)VIRTUAL_flow__FlowContext__when_true_61d, /* pointer to flow:FlowContext:flow#FlowContext#when_true= */
(nitmethod_t)VIRTUAL_flow__FlowContext__when_false, /* pointer to flow:FlowContext:flow#FlowContext#when_false */
(nitmethod_t)VIRTUAL_flow__FlowContext__when_false_61d, /* pointer to flow:FlowContext:flow#FlowContext#when_false= */
(nitmethod_t)VIRTUAL_flow__FlowContext__add_previous, /* pointer to flow:FlowContext:flow#FlowContext#add_previous */
(nitmethod_t)VIRTUAL_flow__FlowContext__add_loop, /* pointer to flow:FlowContext:flow#FlowContext#add_loop */
(nitmethod_t)VIRTUAL_flow__FlowContext__init, /* pointer to flow:FlowContext:flow#FlowContext#init */
(nitmethod_t)VIRTUAL_local_var_init__FlowContext__set_vars, /* pointer to flow:FlowContext:local_var_init#FlowContext#set_vars */
(nitmethod_t)VIRTUAL_local_var_init__FlowContext__set_vars_61d, /* pointer to flow:FlowContext:local_var_init#FlowContext#set_vars= */
(nitmethod_t)VIRTUAL_local_var_init__FlowContext__is_variable_set, /* pointer to flow:FlowContext:local_var_init#FlowContext#is_variable_set */
(nitmethod_t)VIRTUAL_typing__FlowContext__vars, /* pointer to flow:FlowContext:typing#FlowContext#vars */
(nitmethod_t)VIRTUAL_typing__FlowContext__vars_61d, /* pointer to flow:FlowContext:typing#FlowContext#vars= */
(nitmethod_t)VIRTUAL_typing__FlowContext__cache, /* pointer to flow:FlowContext:typing#FlowContext#cache */
(nitmethod_t)VIRTUAL_typing__FlowContext__cache_61d, /* pointer to flow:FlowContext:typing#FlowContext#cache= */
(nitmethod_t)VIRTUAL_typing__FlowContext__set_var, /* pointer to flow:FlowContext:typing#FlowContext#set_var */
(nitmethod_t)VIRTUAL_typing__FlowContext__collect_types, /* pointer to flow:FlowContext:typing#FlowContext#collect_types */
}
};
/* allocate FlowContext */
val* NEW_flow__FlowContext(const struct type* type) {
val* self /* : FlowContext */;
val* var /* : Array[FlowContext] */;
val* var1 /* : Array[FlowContext] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : null */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : HashSet[Variable] */;
val* var11 /* : HashMap[Variable, nullable MType] */;
val* var12 /* : HashMap[Variable, nullable Array[nullable MType]] */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_flow__FlowContext;
var = NEW_array__Array(&type_array__Arrayflow__FlowContext);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[FlowContext]>*/;
self->attrs[COLOR_flow__FlowContext___64dprevious].val = var; /* @previous on <self:FlowContext exact> */
var1 = NEW_array__Array(&type_array__Arrayflow__FlowContext);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[FlowContext]>*/;
self->attrs[COLOR_flow__FlowContext___64dloops].val = var1; /* @loops on <self:FlowContext exact> */
var2 = 0;
self->attrs[COLOR_flow__FlowContext___64dis_marked_unreachable].s = var2; /* @is_marked_unreachable on <self:FlowContext exact> */
var3 = 0;
self->attrs[COLOR_flow__FlowContext___64dis_already_unreachable].s = var3; /* @is_already_unreachable on <self:FlowContext exact> */
var4 = 0;
self->attrs[COLOR_flow__FlowContext___64dis_start].s = var4; /* @is_start on <self:FlowContext exact> */
var5 = NULL;
self->attrs[COLOR_flow__FlowContext___64dnode].val = var5; /* @node on <self:FlowContext exact> */
if (varonce) {
var6 = varonce;
} else {
var7 = "";
var8 = 0;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
self->attrs[COLOR_flow__FlowContext___64dname].val = var6; /* @name on <self:FlowContext exact> */
self->attrs[COLOR_flow__FlowContext___64dwhen_true].val = self; /* @when_true on <self:FlowContext exact> */
self->attrs[COLOR_flow__FlowContext___64dwhen_false].val = self; /* @when_false on <self:FlowContext exact> */
var10 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetscope__Variable);
((void (*)(val*))(var10->class->vft[COLOR_hash_collection__HashSet__init]))(var10) /* init on <var10:HashSet[Variable]>*/;
self->attrs[COLOR_local_var_init__FlowContext___64dset_vars].val = var10; /* @set_vars on <self:FlowContext exact> */
var11 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__Variablenullable_model__MType);
((void (*)(val*))(var11->class->vft[COLOR_hash_collection__HashMap__init]))(var11) /* init on <var11:HashMap[Variable, nullable MType]>*/;
self->attrs[COLOR_typing__FlowContext___64dvars].val = var11; /* @vars on <self:FlowContext exact> */
var12 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__Variablenullable_array__Arraynullable_model__MType);
((void (*)(val*))(var12->class->vft[COLOR_hash_collection__HashMap__init]))(var12) /* init on <var12:HashMap[Variable, nullable Array[nullable MType]]>*/;
self->attrs[COLOR_typing__FlowContext___64dcache].val = var12; /* @cache on <self:FlowContext exact> */
return self;
}
/* runtime class local_var_init__LocalVarInitPhase */
const struct class class_local_var_init__LocalVarInitPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to local_var_init:LocalVarInitPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to local_var_init:LocalVarInitPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to local_var_init:LocalVarInitPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to local_var_init:LocalVarInitPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to local_var_init:LocalVarInitPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to local_var_init:LocalVarInitPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to local_var_init:LocalVarInitPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to local_var_init:LocalVarInitPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to local_var_init:LocalVarInitPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to local_var_init:LocalVarInitPhase:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to local_var_init:LocalVarInitPhase:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to local_var_init:LocalVarInitPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to local_var_init:LocalVarInitPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to local_var_init:LocalVarInitPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to local_var_init:LocalVarInitPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to local_var_init:LocalVarInitPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to local_var_init:LocalVarInitPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to local_var_init:LocalVarInitPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to local_var_init:LocalVarInitPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to local_var_init:LocalVarInitPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to local_var_init:LocalVarInitPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to local_var_init:LocalVarInitPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to local_var_init:LocalVarInitPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to local_var_init:LocalVarInitPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to local_var_init:LocalVarInitPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to local_var_init:LocalVarInitPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to local_var_init:LocalVarInitPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to local_var_init:LocalVarInitPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to local_var_init:LocalVarInitPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to local_var_init:LocalVarInitPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to local_var_init:LocalVarInitPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to local_var_init:LocalVarInitPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to local_var_init:LocalVarInitPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to local_var_init:LocalVarInitPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to local_var_init:LocalVarInitPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to local_var_init:LocalVarInitPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitPhase__process_npropdef, /* pointer to local_var_init:LocalVarInitPhase:local_var_init#LocalVarInitPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to local_var_init:LocalVarInitPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate LocalVarInitPhase */
val* NEW_local_var_init__LocalVarInitPhase(const struct type* type) {
val* self /* : LocalVarInitPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_local_var_init__LocalVarInitPhase;
return self;
}
/* runtime class local_var_init__LocalVarInitVisitor */
const struct class class_local_var_init__LocalVarInitVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to local_var_init:LocalVarInitVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to local_var_init:LocalVarInitVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to local_var_init:LocalVarInitVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to local_var_init:LocalVarInitVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to local_var_init:LocalVarInitVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to local_var_init:LocalVarInitVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to local_var_init:LocalVarInitVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to local_var_init:LocalVarInitVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to local_var_init:LocalVarInitVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to local_var_init:LocalVarInitVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to local_var_init:LocalVarInitVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to local_var_init:LocalVarInitVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to local_var_init:LocalVarInitVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to local_var_init:LocalVarInitVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to local_var_init:LocalVarInitVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__visit, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to local_var_init:LocalVarInitVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to local_var_init:LocalVarInitVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to local_var_init:LocalVarInitVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to local_var_init:LocalVarInitVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__toolcontext, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#toolcontext */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__toolcontext_61d, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#toolcontext= */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__init, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#init */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__maybe_unset_vars, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#maybe_unset_vars */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__maybe_unset_vars_61d, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#maybe_unset_vars= */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__mark_is_unset, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#mark_is_unset */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__mark_is_set, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#mark_is_set */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__check_is_set, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#check_is_set */
}
};
/* allocate LocalVarInitVisitor */
val* NEW_local_var_init__LocalVarInitVisitor(const struct type* type) {
val* self /* : LocalVarInitVisitor */;
val* var /* : null */;
val* var1 /* : HashSet[Variable] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_local_var_init__LocalVarInitVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:LocalVarInitVisitor exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetscope__Variable);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[Variable]>*/;
self->attrs[COLOR_local_var_init__LocalVarInitVisitor___64dmaybe_unset_vars].val = var1; /* @maybe_unset_vars on <self:LocalVarInitVisitor exact> */
return self;
}
/* runtime class typing__TypingPhase */
const struct class class_typing__TypingPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to typing:TypingPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to typing:TypingPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to typing:TypingPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to typing:TypingPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to typing:TypingPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to typing:TypingPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to typing:TypingPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to typing:TypingPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to typing:TypingPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to typing:TypingPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to typing:TypingPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to typing:TypingPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to typing:TypingPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to typing:TypingPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to typing:TypingPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to typing:TypingPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to typing:TypingPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to typing:TypingPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to typing:TypingPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to typing:TypingPhase:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to typing:TypingPhase:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to typing:TypingPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to typing:TypingPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to typing:TypingPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to typing:TypingPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to typing:TypingPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to typing:TypingPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to typing:TypingPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to typing:TypingPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to typing:TypingPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to typing:TypingPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to typing:TypingPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to typing:TypingPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to typing:TypingPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to typing:TypingPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to typing:TypingPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to typing:TypingPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to typing:TypingPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to typing:TypingPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to typing:TypingPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to typing:TypingPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to typing:TypingPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to typing:TypingPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to typing:TypingPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to typing:TypingPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to typing:TypingPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to typing:TypingPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to typing:TypingPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to typing:TypingPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to typing:TypingPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to typing:TypingPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to typing:TypingPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to typing:TypingPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to typing:TypingPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to typing:TypingPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to typing:TypingPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to typing:TypingPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to typing:TypingPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_typing__TypingPhase__process_npropdef, /* pointer to typing:TypingPhase:typing#TypingPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to typing:TypingPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to typing:TypingPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate TypingPhase */
val* NEW_typing__TypingPhase(const struct type* type) {
val* self /* : TypingPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_typing__TypingPhase;
return self;
}
/* runtime class typing__TypeVisitor */
const struct class class_typing__TypeVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to typing:TypeVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to typing:TypeVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to typing:TypeVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to typing:TypeVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to typing:TypeVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to typing:TypeVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to typing:TypeVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to typing:TypeVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to typing:TypeVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to typing:TypeVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to typing:TypeVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to typing:TypeVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to typing:TypeVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to typing:TypeVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to typing:TypeVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to typing:TypeVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to typing:TypeVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to typing:TypeVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to typing:TypeVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to typing:TypeVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to typing:TypeVisitor:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to typing:TypeVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to typing:TypeVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to typing:TypeVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to typing:TypeVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to typing:TypeVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to typing:TypeVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to typing:TypeVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to typing:TypeVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to typing:TypeVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to typing:TypeVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to typing:TypeVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to typing:TypeVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to typing:TypeVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to typing:TypeVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to typing:TypeVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to typing:TypeVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to typing:TypeVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to typing:TypeVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to typing:TypeVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to typing:TypeVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to typing:TypeVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to typing:TypeVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to typing:TypeVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to typing:TypeVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to typing:TypeVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to typing:TypeVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to typing:TypeVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to typing:TypeVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to typing:TypeVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to typing:TypeVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__modelbuilder, /* pointer to typing:TypeVisitor:typing#TypeVisitor#modelbuilder */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__modelbuilder_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#modelbuilder= */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__nclassdef, /* pointer to typing:TypeVisitor:typing#TypeVisitor#nclassdef */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__nclassdef_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#nclassdef= */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__mpropdef, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mpropdef */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__mpropdef_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mpropdef= */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__selfvariable, /* pointer to typing:TypeVisitor:typing#TypeVisitor#selfvariable */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__selfvariable_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#selfvariable= */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__init, /* pointer to typing:TypeVisitor:typing#TypeVisitor#init */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__mmodule, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mmodule */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__anchor, /* pointer to typing:TypeVisitor:typing#TypeVisitor#anchor */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__anchor_to, /* pointer to typing:TypeVisitor:typing#TypeVisitor#anchor_to */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__is_subtype, /* pointer to typing:TypeVisitor:typing#TypeVisitor#is_subtype */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__resolve_for, /* pointer to typing:TypeVisitor:typing#TypeVisitor#resolve_for */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__resolve_signature_for, /* pointer to typing:TypeVisitor:typing#TypeVisitor#resolve_signature_for */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__check_subtype, /* pointer to typing:TypeVisitor:typing#TypeVisitor#check_subtype */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__visit_stmt, /* pointer to typing:TypeVisitor:typing#TypeVisitor#visit_stmt */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__visit_expr, /* pointer to typing:TypeVisitor:typing#TypeVisitor#visit_expr */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__visit_expr_subtype, /* pointer to typing:TypeVisitor:typing#TypeVisitor#visit_expr_subtype */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__visit_expr_bool, /* pointer to typing:TypeVisitor:typing#TypeVisitor#visit_expr_bool */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__visit_expr_cast, /* pointer to typing:TypeVisitor:typing#TypeVisitor#visit_expr_cast */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__try_get_mproperty_by_name2, /* pointer to typing:TypeVisitor:typing#TypeVisitor#try_get_mproperty_by_name2 */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__resolve_mtype, /* pointer to typing:TypeVisitor:typing#TypeVisitor#resolve_mtype */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__try_get_mclass, /* pointer to typing:TypeVisitor:typing#TypeVisitor#try_get_mclass */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__get_mclass, /* pointer to typing:TypeVisitor:typing#TypeVisitor#get_mclass */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__type_bool, /* pointer to typing:TypeVisitor:typing#TypeVisitor#type_bool */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__get_method, /* pointer to typing:TypeVisitor:typing#TypeVisitor#get_method */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__check_signature, /* pointer to typing:TypeVisitor:typing#TypeVisitor#check_signature */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__error, /* pointer to typing:TypeVisitor:typing#TypeVisitor#error */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__get_variable, /* pointer to typing:TypeVisitor:typing#TypeVisitor#get_variable */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__set_variable, /* pointer to typing:TypeVisitor:typing#TypeVisitor#set_variable */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__merge_types, /* pointer to typing:TypeVisitor:typing#TypeVisitor#merge_types */
}
};
/* allocate TypeVisitor */
val* NEW_typing__TypeVisitor(const struct type* type) {
val* self /* : TypeVisitor */;
val* var /* : Variable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_typing__TypeVisitor;
var = NEW_scope__Variable(&type_scope__Variable);
if (varonce) {
var1 = varonce;
} else {
var2 = "self";
var3 = 4;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
((void (*)(val*, val*))(var->class->vft[COLOR_scope__Variable__init]))(var, var1) /* init on <var:Variable>*/;
self->attrs[COLOR_typing__TypeVisitor___64dselfvariable].val = var; /* @selfvariable on <self:TypeVisitor exact> */
return self;
}
/* runtime class typing__CallSite */
const struct class class_typing__CallSite = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to typing:CallSite:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to typing:CallSite:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to typing:CallSite:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to typing:CallSite:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to typing:CallSite:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to typing:CallSite:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to typing:CallSite:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to typing:CallSite:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to typing:CallSite:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to typing:CallSite:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to typing:CallSite:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to typing:CallSite:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to typing:CallSite:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to typing:CallSite:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to typing:CallSite:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to typing:CallSite:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to typing:CallSite:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to typing:CallSite:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to typing:CallSite:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to typing:CallSite:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to typing:CallSite:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to typing:CallSite:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to typing:CallSite:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to typing:CallSite:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to typing:CallSite:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to typing:CallSite:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to typing:CallSite:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to typing:CallSite:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to typing:CallSite:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to typing:CallSite:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to typing:CallSite:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to typing:CallSite:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to typing:CallSite:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to typing:CallSite:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to typing:CallSite:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to typing:CallSite:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to typing:CallSite:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to typing:CallSite:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to typing:CallSite:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to typing:CallSite:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to typing:CallSite:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to typing:CallSite:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to typing:CallSite:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to typing:CallSite:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to typing:CallSite:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to typing:CallSite:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to typing:CallSite:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to typing:CallSite:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to typing:CallSite:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to typing:CallSite:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to typing:CallSite:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_typing__CallSite__node, /* pointer to typing:CallSite:typing#CallSite#node */
(nitmethod_t)VIRTUAL_typing__CallSite__node_61d, /* pointer to typing:CallSite:typing#CallSite#node= */
(nitmethod_t)VIRTUAL_typing__CallSite__recv, /* pointer to typing:CallSite:typing#CallSite#recv */
(nitmethod_t)VIRTUAL_typing__CallSite__recv_61d, /* pointer to typing:CallSite:typing#CallSite#recv= */
(nitmethod_t)VIRTUAL_typing__CallSite__recv_is_self, /* pointer to typing:CallSite:typing#CallSite#recv_is_self */
(nitmethod_t)VIRTUAL_typing__CallSite__recv_is_self_61d, /* pointer to typing:CallSite:typing#CallSite#recv_is_self= */
(nitmethod_t)VIRTUAL_typing__CallSite__mproperty, /* pointer to typing:CallSite:typing#CallSite#mproperty */
(nitmethod_t)VIRTUAL_typing__CallSite__mproperty_61d, /* pointer to typing:CallSite:typing#CallSite#mproperty= */
(nitmethod_t)VIRTUAL_typing__CallSite__mpropdef, /* pointer to typing:CallSite:typing#CallSite#mpropdef */
(nitmethod_t)VIRTUAL_typing__CallSite__mpropdef_61d, /* pointer to typing:CallSite:typing#CallSite#mpropdef= */
(nitmethod_t)VIRTUAL_typing__CallSite__msignature, /* pointer to typing:CallSite:typing#CallSite#msignature */
(nitmethod_t)VIRTUAL_typing__CallSite__msignature_61d, /* pointer to typing:CallSite:typing#CallSite#msignature= */
(nitmethod_t)VIRTUAL_typing__CallSite__erasure_cast, /* pointer to typing:CallSite:typing#CallSite#erasure_cast */
(nitmethod_t)VIRTUAL_typing__CallSite__erasure_cast_61d, /* pointer to typing:CallSite:typing#CallSite#erasure_cast= */
(nitmethod_t)VIRTUAL_typing__CallSite__check_signature, /* pointer to typing:CallSite:typing#CallSite#check_signature */
(nitmethod_t)VIRTUAL_typing__CallSite__init, /* pointer to typing:CallSite:typing#CallSite#init */
}
};
/* allocate CallSite */
val* NEW_typing__CallSite(const struct type* type) {
val* self /* : CallSite */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_typing__CallSite;
return self;
}
/* runtime class modelize_property__ModelizePropertyPhase */
const struct class class_modelize_property__ModelizePropertyPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to modelize_property:ModelizePropertyPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to modelize_property:ModelizePropertyPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to modelize_property:ModelizePropertyPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to modelize_property:ModelizePropertyPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to modelize_property:ModelizePropertyPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to modelize_property:ModelizePropertyPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to modelize_property:ModelizePropertyPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to modelize_property:ModelizePropertyPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to modelize_property:ModelizePropertyPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to modelize_property:ModelizePropertyPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to modelize_property:ModelizePropertyPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to modelize_property:ModelizePropertyPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to modelize_property:ModelizePropertyPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to modelize_property:ModelizePropertyPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to modelize_property:ModelizePropertyPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to modelize_property:ModelizePropertyPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to modelize_property:ModelizePropertyPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to modelize_property:ModelizePropertyPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to modelize_property:ModelizePropertyPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to modelize_property:ModelizePropertyPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to modelize_property:ModelizePropertyPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to modelize_property:ModelizePropertyPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to modelize_property:ModelizePropertyPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to modelize_property:ModelizePropertyPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to modelize_property:ModelizePropertyPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_modelize_property__ModelizePropertyPhase__process_nmodule, /* pointer to modelize_property:ModelizePropertyPhase:modelize_property#ModelizePropertyPhase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to modelize_property:ModelizePropertyPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate ModelizePropertyPhase */
val* NEW_modelize_property__ModelizePropertyPhase(const struct type* type) {
val* self /* : ModelizePropertyPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_modelize_property__ModelizePropertyPhase;
return self;
}
/* runtime class modelize_property__TextCollectorVisitor */
const struct class class_modelize_property__TextCollectorVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to modelize_property:TextCollectorVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to modelize_property:TextCollectorVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to modelize_property:TextCollectorVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to modelize_property:TextCollectorVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to modelize_property:TextCollectorVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to modelize_property:TextCollectorVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to modelize_property:TextCollectorVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to modelize_property:TextCollectorVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to modelize_property:TextCollectorVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to modelize_property:TextCollectorVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to modelize_property:TextCollectorVisitor:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to modelize_property:TextCollectorVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to modelize_property:TextCollectorVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to modelize_property:TextCollectorVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to modelize_property:TextCollectorVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to modelize_property:TextCollectorVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to modelize_property:TextCollectorVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to modelize_property:TextCollectorVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to modelize_property:TextCollectorVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to modelize_property:TextCollectorVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to modelize_property:TextCollectorVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to modelize_property:TextCollectorVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to modelize_property:TextCollectorVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to modelize_property:TextCollectorVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to modelize_property:TextCollectorVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to modelize_property:TextCollectorVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to modelize_property:TextCollectorVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to modelize_property:TextCollectorVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to modelize_property:TextCollectorVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to modelize_property:TextCollectorVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to modelize_property:TextCollectorVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to modelize_property:TextCollectorVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to modelize_property:TextCollectorVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to modelize_property:TextCollectorVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to modelize_property:TextCollectorVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to modelize_property:TextCollectorVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to modelize_property:TextCollectorVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to modelize_property:TextCollectorVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to modelize_property:TextCollectorVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to modelize_property:TextCollectorVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to modelize_property:TextCollectorVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_modelize_property__TextCollectorVisitor__visit, /* pointer to modelize_property:TextCollectorVisitor:modelize_property#TextCollectorVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to modelize_property:TextCollectorVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to modelize_property:TextCollectorVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to modelize_property:TextCollectorVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to modelize_property:TextCollectorVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_modelize_property__TextCollectorVisitor__text, /* pointer to modelize_property:TextCollectorVisitor:modelize_property#TextCollectorVisitor#text */
(nitmethod_t)VIRTUAL_modelize_property__TextCollectorVisitor__text_61d, /* pointer to modelize_property:TextCollectorVisitor:modelize_property#TextCollectorVisitor#text= */
(nitmethod_t)VIRTUAL_modelize_property__TextCollectorVisitor__init, /* pointer to modelize_property:TextCollectorVisitor:modelize_property#TextCollectorVisitor#init */
}
};
/* allocate TextCollectorVisitor */
val* NEW_modelize_property__TextCollectorVisitor(const struct type* type) {
val* self /* : TextCollectorVisitor */;
val* var /* : null */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_modelize_property__TextCollectorVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:TextCollectorVisitor exact> */
if (varonce) {
var1 = varonce;
} else {
var2 = "";
var3 = 0;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
self->attrs[COLOR_modelize_property__TextCollectorVisitor___64dtext].val = var1; /* @text on <self:TextCollectorVisitor exact> */
return self;
}
/* runtime class modelize_class__ModelizeClassPhase */
const struct class class_modelize_class__ModelizeClassPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to modelize_class:ModelizeClassPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to modelize_class:ModelizeClassPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to modelize_class:ModelizeClassPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to modelize_class:ModelizeClassPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to modelize_class:ModelizeClassPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to modelize_class:ModelizeClassPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to modelize_class:ModelizeClassPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to modelize_class:ModelizeClassPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to modelize_class:ModelizeClassPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to modelize_class:ModelizeClassPhase:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to modelize_class:ModelizeClassPhase:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to modelize_class:ModelizeClassPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to modelize_class:ModelizeClassPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to modelize_class:ModelizeClassPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to modelize_class:ModelizeClassPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to modelize_class:ModelizeClassPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to modelize_class:ModelizeClassPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to modelize_class:ModelizeClassPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to modelize_class:ModelizeClassPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to modelize_class:ModelizeClassPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to modelize_class:ModelizeClassPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to modelize_class:ModelizeClassPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to modelize_class:ModelizeClassPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to modelize_class:ModelizeClassPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to modelize_class:ModelizeClassPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to modelize_class:ModelizeClassPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to modelize_class:ModelizeClassPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to modelize_class:ModelizeClassPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to modelize_class:ModelizeClassPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to modelize_class:ModelizeClassPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to modelize_class:ModelizeClassPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to modelize_class:ModelizeClassPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to modelize_class:ModelizeClassPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to modelize_class:ModelizeClassPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to modelize_class:ModelizeClassPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to modelize_class:ModelizeClassPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to modelize_class:ModelizeClassPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to modelize_class:ModelizeClassPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to modelize_class:ModelizeClassPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to modelize_class:ModelizeClassPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to modelize_class:ModelizeClassPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_modelize_class__ModelizeClassPhase__process_nmodule, /* pointer to modelize_class:ModelizeClassPhase:modelize_class#ModelizeClassPhase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to modelize_class:ModelizeClassPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate ModelizeClassPhase */
val* NEW_modelize_class__ModelizeClassPhase(const struct type* type) {
val* self /* : ModelizeClassPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_modelize_class__ModelizeClassPhase;
return self;
}
/* runtime class auto_super_init__AutoSuperInitPhase */
const struct class class_auto_super_init__AutoSuperInitPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to auto_super_init:AutoSuperInitPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to auto_super_init:AutoSuperInitPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to auto_super_init:AutoSuperInitPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to auto_super_init:AutoSuperInitPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to auto_super_init:AutoSuperInitPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to auto_super_init:AutoSuperInitPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to auto_super_init:AutoSuperInitPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to auto_super_init:AutoSuperInitPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to auto_super_init:AutoSuperInitPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to auto_super_init:AutoSuperInitPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to auto_super_init:AutoSuperInitPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to auto_super_init:AutoSuperInitPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to auto_super_init:AutoSuperInitPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to auto_super_init:AutoSuperInitPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to auto_super_init:AutoSuperInitPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to auto_super_init:AutoSuperInitPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to auto_super_init:AutoSuperInitPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to auto_super_init:AutoSuperInitPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to auto_super_init:AutoSuperInitPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to auto_super_init:AutoSuperInitPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to auto_super_init:AutoSuperInitPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to auto_super_init:AutoSuperInitPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to auto_super_init:AutoSuperInitPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to auto_super_init:AutoSuperInitPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to auto_super_init:AutoSuperInitPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_auto_super_init__AutoSuperInitPhase__process_npropdef, /* pointer to auto_super_init:AutoSuperInitPhase:auto_super_init#AutoSuperInitPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to auto_super_init:AutoSuperInitPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate AutoSuperInitPhase */
val* NEW_auto_super_init__AutoSuperInitPhase(const struct type* type) {
val* self /* : AutoSuperInitPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_auto_super_init__AutoSuperInitPhase;
return self;
}
/* runtime class auto_super_init__AutoSuperInitVisitor */
const struct class class_auto_super_init__AutoSuperInitVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to auto_super_init:AutoSuperInitVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to auto_super_init:AutoSuperInitVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to auto_super_init:AutoSuperInitVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to auto_super_init:AutoSuperInitVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to auto_super_init:AutoSuperInitVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to auto_super_init:AutoSuperInitVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to auto_super_init:AutoSuperInitVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to auto_super_init:AutoSuperInitVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to auto_super_init:AutoSuperInitVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to auto_super_init:AutoSuperInitVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to auto_super_init:AutoSuperInitVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to auto_super_init:AutoSuperInitVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to auto_super_init:AutoSuperInitVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to auto_super_init:AutoSuperInitVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to auto_super_init:AutoSuperInitVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to auto_super_init:AutoSuperInitVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to auto_super_init:AutoSuperInitVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to auto_super_init:AutoSuperInitVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to auto_super_init:AutoSuperInitVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to auto_super_init:AutoSuperInitVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to auto_super_init:AutoSuperInitVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to auto_super_init:AutoSuperInitVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to auto_super_init:AutoSuperInitVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to auto_super_init:AutoSuperInitVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to auto_super_init:AutoSuperInitVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_auto_super_init__AutoSuperInitVisitor__visit, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to auto_super_init:AutoSuperInitVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to auto_super_init:AutoSuperInitVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to auto_super_init:AutoSuperInitVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_auto_super_init__AutoSuperInitVisitor__init, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#init */
(nitmethod_t)VIRTUAL_auto_super_init__AutoSuperInitVisitor__has_explicit_super_init, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#has_explicit_super_init */
(nitmethod_t)VIRTUAL_auto_super_init__AutoSuperInitVisitor__has_explicit_super_init_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= */
}
};
/* allocate AutoSuperInitVisitor */
val* NEW_auto_super_init__AutoSuperInitVisitor(const struct type* type) {
val* self /* : AutoSuperInitVisitor */;
val* var /* : null */;
short int var1 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_auto_super_init__AutoSuperInitVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:AutoSuperInitVisitor exact> */
var1 = 0;
self->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___64dhas_explicit_super_init].s = var1; /* @has_explicit_super_init on <self:AutoSuperInitVisitor exact> */
return self;
}
/* runtime class div_by_zero__DivByZeroPhase */
const struct class class_div_by_zero__DivByZeroPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to div_by_zero:DivByZeroPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to div_by_zero:DivByZeroPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to div_by_zero:DivByZeroPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to div_by_zero:DivByZeroPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to div_by_zero:DivByZeroPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to div_by_zero:DivByZeroPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to div_by_zero:DivByZeroPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to div_by_zero:DivByZeroPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to div_by_zero:DivByZeroPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to div_by_zero:DivByZeroPhase:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to div_by_zero:DivByZeroPhase:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to div_by_zero:DivByZeroPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to div_by_zero:DivByZeroPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to div_by_zero:DivByZeroPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to div_by_zero:DivByZeroPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to div_by_zero:DivByZeroPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to div_by_zero:DivByZeroPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to div_by_zero:DivByZeroPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to div_by_zero:DivByZeroPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to div_by_zero:DivByZeroPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to div_by_zero:DivByZeroPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to div_by_zero:DivByZeroPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to div_by_zero:DivByZeroPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to div_by_zero:DivByZeroPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to div_by_zero:DivByZeroPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to div_by_zero:DivByZeroPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to div_by_zero:DivByZeroPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to div_by_zero:DivByZeroPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to div_by_zero:DivByZeroPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to div_by_zero:DivByZeroPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to div_by_zero:DivByZeroPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to div_by_zero:DivByZeroPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to div_by_zero:DivByZeroPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to div_by_zero:DivByZeroPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to div_by_zero:DivByZeroPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to div_by_zero:DivByZeroPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to div_by_zero:DivByZeroPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to div_by_zero:DivByZeroPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to div_by_zero:DivByZeroPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to div_by_zero:DivByZeroPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to div_by_zero:DivByZeroPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_div_by_zero__DivByZeroPhase__process_nmodule, /* pointer to div_by_zero:DivByZeroPhase:div_by_zero#DivByZeroPhase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to div_by_zero:DivByZeroPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate DivByZeroPhase */
val* NEW_div_by_zero__DivByZeroPhase(const struct type* type) {
val* self /* : DivByZeroPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_div_by_zero__DivByZeroPhase;
return self;
}
/* runtime class div_by_zero__DivByZeroVisitor */
const struct class class_div_by_zero__DivByZeroVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to div_by_zero:DivByZeroVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to div_by_zero:DivByZeroVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to div_by_zero:DivByZeroVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to div_by_zero:DivByZeroVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to div_by_zero:DivByZeroVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to div_by_zero:DivByZeroVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to div_by_zero:DivByZeroVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to div_by_zero:DivByZeroVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to div_by_zero:DivByZeroVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to div_by_zero:DivByZeroVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to div_by_zero:DivByZeroVisitor:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to div_by_zero:DivByZeroVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to div_by_zero:DivByZeroVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to div_by_zero:DivByZeroVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to div_by_zero:DivByZeroVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to div_by_zero:DivByZeroVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to div_by_zero:DivByZeroVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to div_by_zero:DivByZeroVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to div_by_zero:DivByZeroVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to div_by_zero:DivByZeroVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to div_by_zero:DivByZeroVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to div_by_zero:DivByZeroVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to div_by_zero:DivByZeroVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to div_by_zero:DivByZeroVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to div_by_zero:DivByZeroVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to div_by_zero:DivByZeroVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to div_by_zero:DivByZeroVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to div_by_zero:DivByZeroVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to div_by_zero:DivByZeroVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to div_by_zero:DivByZeroVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to div_by_zero:DivByZeroVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to div_by_zero:DivByZeroVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to div_by_zero:DivByZeroVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to div_by_zero:DivByZeroVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to div_by_zero:DivByZeroVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to div_by_zero:DivByZeroVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to div_by_zero:DivByZeroVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to div_by_zero:DivByZeroVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to div_by_zero:DivByZeroVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to div_by_zero:DivByZeroVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to div_by_zero:DivByZeroVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_div_by_zero__DivByZeroVisitor__visit, /* pointer to div_by_zero:DivByZeroVisitor:div_by_zero#DivByZeroVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to div_by_zero:DivByZeroVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to div_by_zero:DivByZeroVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to div_by_zero:DivByZeroVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to div_by_zero:DivByZeroVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_div_by_zero__DivByZeroVisitor__toolcontext, /* pointer to div_by_zero:DivByZeroVisitor:div_by_zero#DivByZeroVisitor#toolcontext */
(nitmethod_t)VIRTUAL_div_by_zero__DivByZeroVisitor__toolcontext_61d, /* pointer to div_by_zero:DivByZeroVisitor:div_by_zero#DivByZeroVisitor#toolcontext= */
(nitmethod_t)VIRTUAL_div_by_zero__DivByZeroVisitor__mmodule, /* pointer to div_by_zero:DivByZeroVisitor:div_by_zero#DivByZeroVisitor#mmodule */
(nitmethod_t)VIRTUAL_div_by_zero__DivByZeroVisitor__mmodule_61d, /* pointer to div_by_zero:DivByZeroVisitor:div_by_zero#DivByZeroVisitor#mmodule= */
(nitmethod_t)VIRTUAL_div_by_zero__DivByZeroVisitor__init, /* pointer to div_by_zero:DivByZeroVisitor:div_by_zero#DivByZeroVisitor#init */
}
};
/* allocate DivByZeroVisitor */
val* NEW_div_by_zero__DivByZeroVisitor(const struct type* type) {
val* self /* : DivByZeroVisitor */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_div_by_zero__DivByZeroVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:DivByZeroVisitor exact> */
return self;
}
/* runtime class cached__CachedPhase */
const struct class class_cached__CachedPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to cached:CachedPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to cached:CachedPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to cached:CachedPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to cached:CachedPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to cached:CachedPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to cached:CachedPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to cached:CachedPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to cached:CachedPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to cached:CachedPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to cached:CachedPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to cached:CachedPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to cached:CachedPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to cached:CachedPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to cached:CachedPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to cached:CachedPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to cached:CachedPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to cached:CachedPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to cached:CachedPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to cached:CachedPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to cached:CachedPhase:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to cached:CachedPhase:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to cached:CachedPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to cached:CachedPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to cached:CachedPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to cached:CachedPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to cached:CachedPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to cached:CachedPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to cached:CachedPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to cached:CachedPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to cached:CachedPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to cached:CachedPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to cached:CachedPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to cached:CachedPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to cached:CachedPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to cached:CachedPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to cached:CachedPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to cached:CachedPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to cached:CachedPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to cached:CachedPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to cached:CachedPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to cached:CachedPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to cached:CachedPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to cached:CachedPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to cached:CachedPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to cached:CachedPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to cached:CachedPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to cached:CachedPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to cached:CachedPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to cached:CachedPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to cached:CachedPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to cached:CachedPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to cached:CachedPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to cached:CachedPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to cached:CachedPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to cached:CachedPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to cached:CachedPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to cached:CachedPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to cached:CachedPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to cached:CachedPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_cached__CachedPhase__process_annotated_node, /* pointer to cached:CachedPhase:cached#CachedPhase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to cached:CachedPhase:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)VIRTUAL_cached__CachedPhase__init, /* pointer to cached:CachedPhase:cached#CachedPhase#init */
(nitmethod_t)VIRTUAL_cached__CachedPhase__associate_propdef, /* pointer to cached:CachedPhase:cached#CachedPhase#associate_propdef */
}
};
/* allocate CachedPhase */
val* NEW_cached__CachedPhase(const struct type* type) {
val* self /* : CachedPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_cached__CachedPhase;
return self;
}
/* runtime class parser_util__InjectedLexer */
/* allocate InjectedLexer */
val* NEW_parser_util__InjectedLexer(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "InjectedLexer is DEAD");
fprintf(stderr, "\n");
show_backtrace(1);
}
/* runtime class parser_util__CollectTokensByTextVisitor */
const struct class class_parser_util__CollectTokensByTextVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_util:CollectTokensByTextVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_util:CollectTokensByTextVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_util:CollectTokensByTextVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_util:CollectTokensByTextVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_util:CollectTokensByTextVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_util:CollectTokensByTextVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_util:CollectTokensByTextVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_util:CollectTokensByTextVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_util:CollectTokensByTextVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_util:CollectTokensByTextVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to parser_util:CollectTokensByTextVisitor:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_util:CollectTokensByTextVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_util:CollectTokensByTextVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_util:CollectTokensByTextVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_util:CollectTokensByTextVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_util:CollectTokensByTextVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_util:CollectTokensByTextVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_util:CollectTokensByTextVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_util:CollectTokensByTextVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_util:CollectTokensByTextVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_util:CollectTokensByTextVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_util:CollectTokensByTextVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_util:CollectTokensByTextVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_util:CollectTokensByTextVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_util:CollectTokensByTextVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_util:CollectTokensByTextVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_util:CollectTokensByTextVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_util:CollectTokensByTextVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_util:CollectTokensByTextVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_util:CollectTokensByTextVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_util:CollectTokensByTextVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_util:CollectTokensByTextVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_util:CollectTokensByTextVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to parser_util:CollectTokensByTextVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to parser_util:CollectTokensByTextVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to parser_util:CollectTokensByTextVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to parser_util:CollectTokensByTextVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to parser_util:CollectTokensByTextVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to parser_util:CollectTokensByTextVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to parser_util:CollectTokensByTextVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to parser_util:CollectTokensByTextVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_parser_util__CollectTokensByTextVisitor__visit, /* pointer to parser_util:CollectTokensByTextVisitor:parser_util#CollectTokensByTextVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to parser_util:CollectTokensByTextVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to parser_util:CollectTokensByTextVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to parser_util:CollectTokensByTextVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to parser_util:CollectTokensByTextVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_parser_util__CollectTokensByTextVisitor__text, /* pointer to parser_util:CollectTokensByTextVisitor:parser_util#CollectTokensByTextVisitor#text */
(nitmethod_t)VIRTUAL_parser_util__CollectTokensByTextVisitor__text_61d, /* pointer to parser_util:CollectTokensByTextVisitor:parser_util#CollectTokensByTextVisitor#text= */
(nitmethod_t)VIRTUAL_parser_util__CollectTokensByTextVisitor__init, /* pointer to parser_util:CollectTokensByTextVisitor:parser_util#CollectTokensByTextVisitor#init */
(nitmethod_t)VIRTUAL_parser_util__CollectTokensByTextVisitor__result, /* pointer to parser_util:CollectTokensByTextVisitor:parser_util#CollectTokensByTextVisitor#result */
(nitmethod_t)VIRTUAL_parser_util__CollectTokensByTextVisitor__result_61d, /* pointer to parser_util:CollectTokensByTextVisitor:parser_util#CollectTokensByTextVisitor#result= */
}
};
/* allocate CollectTokensByTextVisitor */
val* NEW_parser_util__CollectTokensByTextVisitor(const struct type* type) {
val* self /* : CollectTokensByTextVisitor */;
val* var /* : null */;
val* var1 /* : Array[Token] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_util__CollectTokensByTextVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:CollectTokensByTextVisitor exact> */
var1 = NEW_array__Array(&type_array__Arrayparser_nodes__Token);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[Token]>*/;
self->attrs[COLOR_parser_util__CollectTokensByTextVisitor___64dresult].val = var1; /* @result on <self:CollectTokensByTextVisitor exact> */
return self;
}
/* runtime class parser_util__CollectAnnotationsByNameVisitor */
const struct class class_parser_util__CollectAnnotationsByNameVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_util:CollectAnnotationsByNameVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_util:CollectAnnotationsByNameVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_util:CollectAnnotationsByNameVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_util:CollectAnnotationsByNameVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_util:CollectAnnotationsByNameVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_util:CollectAnnotationsByNameVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_util:CollectAnnotationsByNameVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_util:CollectAnnotationsByNameVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_util:CollectAnnotationsByNameVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_util:CollectAnnotationsByNameVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_util:CollectAnnotationsByNameVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_util:CollectAnnotationsByNameVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_util:CollectAnnotationsByNameVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_util:CollectAnnotationsByNameVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_util:CollectAnnotationsByNameVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_util:CollectAnnotationsByNameVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_util:CollectAnnotationsByNameVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_util:CollectAnnotationsByNameVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_util:CollectAnnotationsByNameVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_util:CollectAnnotationsByNameVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to parser_util:CollectAnnotationsByNameVisitor:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_util:CollectAnnotationsByNameVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_util:CollectAnnotationsByNameVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_util:CollectAnnotationsByNameVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_util:CollectAnnotationsByNameVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_util:CollectAnnotationsByNameVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_util:CollectAnnotationsByNameVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_util:CollectAnnotationsByNameVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_util:CollectAnnotationsByNameVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_util:CollectAnnotationsByNameVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_util:CollectAnnotationsByNameVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_util:CollectAnnotationsByNameVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_util:CollectAnnotationsByNameVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_util:CollectAnnotationsByNameVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_util:CollectAnnotationsByNameVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_util:CollectAnnotationsByNameVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_util:CollectAnnotationsByNameVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_util:CollectAnnotationsByNameVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_util:CollectAnnotationsByNameVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_util:CollectAnnotationsByNameVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_util:CollectAnnotationsByNameVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_util:CollectAnnotationsByNameVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_util:CollectAnnotationsByNameVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to parser_util:CollectAnnotationsByNameVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to parser_util:CollectAnnotationsByNameVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to parser_util:CollectAnnotationsByNameVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to parser_util:CollectAnnotationsByNameVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to parser_util:CollectAnnotationsByNameVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to parser_util:CollectAnnotationsByNameVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to parser_util:CollectAnnotationsByNameVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to parser_util:CollectAnnotationsByNameVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_parser_util__CollectAnnotationsByNameVisitor__visit, /* pointer to parser_util:CollectAnnotationsByNameVisitor:parser_util#CollectAnnotationsByNameVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to parser_util:CollectAnnotationsByNameVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to parser_util:CollectAnnotationsByNameVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to parser_util:CollectAnnotationsByNameVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to parser_util:CollectAnnotationsByNameVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_parser_util__CollectAnnotationsByNameVisitor__name, /* pointer to parser_util:CollectAnnotationsByNameVisitor:parser_util#CollectAnnotationsByNameVisitor#name */
(nitmethod_t)VIRTUAL_parser_util__CollectAnnotationsByNameVisitor__name_61d, /* pointer to parser_util:CollectAnnotationsByNameVisitor:parser_util#CollectAnnotationsByNameVisitor#name= */
(nitmethod_t)VIRTUAL_parser_util__CollectAnnotationsByNameVisitor__init, /* pointer to parser_util:CollectAnnotationsByNameVisitor:parser_util#CollectAnnotationsByNameVisitor#init */
(nitmethod_t)VIRTUAL_parser_util__CollectAnnotationsByNameVisitor__result, /* pointer to parser_util:CollectAnnotationsByNameVisitor:parser_util#CollectAnnotationsByNameVisitor#result */
(nitmethod_t)VIRTUAL_parser_util__CollectAnnotationsByNameVisitor__result_61d, /* pointer to parser_util:CollectAnnotationsByNameVisitor:parser_util#CollectAnnotationsByNameVisitor#result= */
}
};
/* allocate CollectAnnotationsByNameVisitor */
val* NEW_parser_util__CollectAnnotationsByNameVisitor(const struct type* type) {
val* self /* : CollectAnnotationsByNameVisitor */;
val* var /* : null */;
val* var1 /* : Array[AAnnotation] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_util__CollectAnnotationsByNameVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:CollectAnnotationsByNameVisitor exact> */
var1 = NEW_array__Array(&type_array__Arrayparser_nodes__AAnnotation);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[AAnnotation]>*/;
self->attrs[COLOR_parser_util__CollectAnnotationsByNameVisitor___64dresult].val = var1; /* @result on <self:CollectAnnotationsByNameVisitor exact> */
return self;
}
/* runtime class serialization_phase__SerializationPhase */
const struct class class_serialization_phase__SerializationPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to serialization_phase:SerializationPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to serialization_phase:SerializationPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to serialization_phase:SerializationPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to serialization_phase:SerializationPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to serialization_phase:SerializationPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to serialization_phase:SerializationPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to serialization_phase:SerializationPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to serialization_phase:SerializationPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to serialization_phase:SerializationPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to serialization_phase:SerializationPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to serialization_phase:SerializationPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to serialization_phase:SerializationPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to serialization_phase:SerializationPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to serialization_phase:SerializationPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to serialization_phase:SerializationPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to serialization_phase:SerializationPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to serialization_phase:SerializationPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to serialization_phase:SerializationPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to serialization_phase:SerializationPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to serialization_phase:SerializationPhase:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to serialization_phase:SerializationPhase:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to serialization_phase:SerializationPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to serialization_phase:SerializationPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to serialization_phase:SerializationPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to serialization_phase:SerializationPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to serialization_phase:SerializationPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to serialization_phase:SerializationPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to serialization_phase:SerializationPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to serialization_phase:SerializationPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to serialization_phase:SerializationPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to serialization_phase:SerializationPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to serialization_phase:SerializationPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to serialization_phase:SerializationPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to serialization_phase:SerializationPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to serialization_phase:SerializationPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to serialization_phase:SerializationPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to serialization_phase:SerializationPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to serialization_phase:SerializationPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to serialization_phase:SerializationPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to serialization_phase:SerializationPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to serialization_phase:SerializationPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to serialization_phase:SerializationPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to serialization_phase:SerializationPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to serialization_phase:SerializationPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to serialization_phase:SerializationPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to serialization_phase:SerializationPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to serialization_phase:SerializationPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to serialization_phase:SerializationPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to serialization_phase:SerializationPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to serialization_phase:SerializationPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to serialization_phase:SerializationPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to serialization_phase:SerializationPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to serialization_phase:SerializationPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to serialization_phase:SerializationPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to serialization_phase:SerializationPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to serialization_phase:SerializationPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_serialization_phase__SerializationPhase__process_nmodule, /* pointer to serialization_phase:SerializationPhase:serialization_phase#SerializationPhase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to serialization_phase:SerializationPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to serialization_phase:SerializationPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_serialization_phase__SerializationPhase__process_annotated_node, /* pointer to serialization_phase:SerializationPhase:serialization_phase#SerializationPhase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to serialization_phase:SerializationPhase:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)VIRTUAL_serialization_phase__SerializationPhase__generate_serialization_method, /* pointer to serialization_phase:SerializationPhase:serialization_phase#SerializationPhase#generate_serialization_method */
(nitmethod_t)VIRTUAL_serialization_phase__SerializationPhase__generate_deserialization_init, /* pointer to serialization_phase:SerializationPhase:serialization_phase#SerializationPhase#generate_deserialization_init */
(nitmethod_t)VIRTUAL_serialization_phase__SerializationPhase__generate_deserialization_method, /* pointer to serialization_phase:SerializationPhase:serialization_phase#SerializationPhase#generate_deserialization_method */
}
};
/* allocate SerializationPhase */
val* NEW_serialization_phase__SerializationPhase(const struct type* type) {
val* self /* : SerializationPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_serialization_phase__SerializationPhase;
return self;
}
/* runtime class transform__TransformPhase */
const struct class class_transform__TransformPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to transform:TransformPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to transform:TransformPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to transform:TransformPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to transform:TransformPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to transform:TransformPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to transform:TransformPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to transform:TransformPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to transform:TransformPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to transform:TransformPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to transform:TransformPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to transform:TransformPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to transform:TransformPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to transform:TransformPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to transform:TransformPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to transform:TransformPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to transform:TransformPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to transform:TransformPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to transform:TransformPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to transform:TransformPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to transform:TransformPhase:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to transform:TransformPhase:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to transform:TransformPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to transform:TransformPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to transform:TransformPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to transform:TransformPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to transform:TransformPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to transform:TransformPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to transform:TransformPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to transform:TransformPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to transform:TransformPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to transform:TransformPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to transform:TransformPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to transform:TransformPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to transform:TransformPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to transform:TransformPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to transform:TransformPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to transform:TransformPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to transform:TransformPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to transform:TransformPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to transform:TransformPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to transform:TransformPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to transform:TransformPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to transform:TransformPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to transform:TransformPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to transform:TransformPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to transform:TransformPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to transform:TransformPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to transform:TransformPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to transform:TransformPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to transform:TransformPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to transform:TransformPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to transform:TransformPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to transform:TransformPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to transform:TransformPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to transform:TransformPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to transform:TransformPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to transform:TransformPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to transform:TransformPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_transform__TransformPhase__process_npropdef, /* pointer to transform:TransformPhase:transform#TransformPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to transform:TransformPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to transform:TransformPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate TransformPhase */
val* NEW_transform__TransformPhase(const struct type* type) {
val* self /* : TransformPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_transform__TransformPhase;
return self;
}
/* runtime class transform__TransformVisitor */
const struct class class_transform__TransformVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to transform:TransformVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to transform:TransformVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to transform:TransformVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to transform:TransformVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to transform:TransformVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to transform:TransformVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to transform:TransformVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to transform:TransformVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to transform:TransformVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to transform:TransformVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to transform:TransformVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to transform:TransformVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to transform:TransformVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to transform:TransformVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to transform:TransformVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to transform:TransformVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to transform:TransformVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to transform:TransformVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to transform:TransformVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to transform:TransformVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to transform:TransformVisitor:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to transform:TransformVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to transform:TransformVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to transform:TransformVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to transform:TransformVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to transform:TransformVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to transform:TransformVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to transform:TransformVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to transform:TransformVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to transform:TransformVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to transform:TransformVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to transform:TransformVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to transform:TransformVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to transform:TransformVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to transform:TransformVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to transform:TransformVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to transform:TransformVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to transform:TransformVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to transform:TransformVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to transform:TransformVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to transform:TransformVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to transform:TransformVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to transform:TransformVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to transform:TransformVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to transform:TransformVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to transform:TransformVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to transform:TransformVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to transform:TransformVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to transform:TransformVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to transform:TransformVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to transform:TransformVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__visit, /* pointer to transform:TransformVisitor:transform#TransformVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to transform:TransformVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to transform:TransformVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to transform:TransformVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to transform:TransformVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__phase, /* pointer to transform:TransformVisitor:transform#TransformVisitor#phase */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__phase_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#phase= */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__mmodule, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mmodule */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__mmodule_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mmodule= */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__mclassdef, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mclassdef */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__mclassdef_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mclassdef= */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__mpropdef, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mpropdef */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__mpropdef_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mpropdef= */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__builder, /* pointer to transform:TransformVisitor:transform#TransformVisitor#builder */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__builder_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#builder= */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__init, /* pointer to transform:TransformVisitor:transform#TransformVisitor#init */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__get_class, /* pointer to transform:TransformVisitor:transform#TransformVisitor#get_class */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__get_method, /* pointer to transform:TransformVisitor:transform#TransformVisitor#get_method */
}
};
/* allocate TransformVisitor */
val* NEW_transform__TransformVisitor(const struct type* type) {
val* self /* : TransformVisitor */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_transform__TransformVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:TransformVisitor exact> */
return self;
}
/* runtime class astbuilder__ASTBuilder */
const struct class class_astbuilder__ASTBuilder = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to astbuilder:ASTBuilder:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to astbuilder:ASTBuilder:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to astbuilder:ASTBuilder:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to astbuilder:ASTBuilder:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to astbuilder:ASTBuilder:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to astbuilder:ASTBuilder:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to astbuilder:ASTBuilder:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to astbuilder:ASTBuilder:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to astbuilder:ASTBuilder:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to astbuilder:ASTBuilder:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to astbuilder:ASTBuilder:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to astbuilder:ASTBuilder:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to astbuilder:ASTBuilder:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to astbuilder:ASTBuilder:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to astbuilder:ASTBuilder:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to astbuilder:ASTBuilder:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to astbuilder:ASTBuilder:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to astbuilder:ASTBuilder:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to astbuilder:ASTBuilder:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to astbuilder:ASTBuilder:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to astbuilder:ASTBuilder:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to astbuilder:ASTBuilder:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to astbuilder:ASTBuilder:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to astbuilder:ASTBuilder:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to astbuilder:ASTBuilder:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to astbuilder:ASTBuilder:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to astbuilder:ASTBuilder:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to astbuilder:ASTBuilder:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to astbuilder:ASTBuilder:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to astbuilder:ASTBuilder:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to astbuilder:ASTBuilder:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to astbuilder:ASTBuilder:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to astbuilder:ASTBuilder:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to astbuilder:ASTBuilder:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to astbuilder:ASTBuilder:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to astbuilder:ASTBuilder:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to astbuilder:ASTBuilder:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to astbuilder:ASTBuilder:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to astbuilder:ASTBuilder:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to astbuilder:ASTBuilder:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to astbuilder:ASTBuilder:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to astbuilder:ASTBuilder:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to astbuilder:ASTBuilder:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to astbuilder:ASTBuilder:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to astbuilder:ASTBuilder:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to astbuilder:ASTBuilder:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to astbuilder:ASTBuilder:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to astbuilder:ASTBuilder:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to astbuilder:ASTBuilder:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to astbuilder:ASTBuilder:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to astbuilder:ASTBuilder:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__mmodule, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#mmodule */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__mmodule_61d, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#mmodule= */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__anchor, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#anchor */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__anchor_61d, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#anchor= */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_int, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_int */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_new, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_new */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_call, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_call */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_block, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_block */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_var_read, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_var_assign, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_var_assign */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_attr_read, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_attr_read */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_attr_assign, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_attr_assign */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_do, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_do */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_if, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_if */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__init, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#init */
}
};
/* allocate ASTBuilder */
val* NEW_astbuilder__ASTBuilder(const struct type* type) {
val* self /* : ASTBuilder */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_astbuilder__ASTBuilder;
return self;
}
/* runtime class astbuilder__APlaceholderExpr */
const struct class class_astbuilder__APlaceholderExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to astbuilder:APlaceholderExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to astbuilder:APlaceholderExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to astbuilder:APlaceholderExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to astbuilder:APlaceholderExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to astbuilder:APlaceholderExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to astbuilder:APlaceholderExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to astbuilder:APlaceholderExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to astbuilder:APlaceholderExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to astbuilder:APlaceholderExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to astbuilder:APlaceholderExpr:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to astbuilder:APlaceholderExpr:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to astbuilder:APlaceholderExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to astbuilder:APlaceholderExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to astbuilder:APlaceholderExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to astbuilder:APlaceholderExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to astbuilder:APlaceholderExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to astbuilder:APlaceholderExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to astbuilder:APlaceholderExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to astbuilder:APlaceholderExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to astbuilder:APlaceholderExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to astbuilder:APlaceholderExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to astbuilder:APlaceholderExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to astbuilder:APlaceholderExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to astbuilder:APlaceholderExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to astbuilder:APlaceholderExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to astbuilder:APlaceholderExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to astbuilder:APlaceholderExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to astbuilder:APlaceholderExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to astbuilder:APlaceholderExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to astbuilder:APlaceholderExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to astbuilder:APlaceholderExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to astbuilder:APlaceholderExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to astbuilder:APlaceholderExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to astbuilder:APlaceholderExpr:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to astbuilder:APlaceholderExpr:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to astbuilder:APlaceholderExpr:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to astbuilder:APlaceholderExpr:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to astbuilder:APlaceholderExpr:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to astbuilder:APlaceholderExpr:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to astbuilder:APlaceholderExpr:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to astbuilder:APlaceholderExpr:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_child, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__visit_all, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to astbuilder:APlaceholderExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to astbuilder:APlaceholderExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to astbuilder:APlaceholderExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to astbuilder:APlaceholderExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to astbuilder:APlaceholderExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to astbuilder:APlaceholderExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to astbuilder:APlaceholderExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to astbuilder:APlaceholderExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to astbuilder:APlaceholderExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__APlaceholderExpr__accept_ast_validation, /* pointer to astbuilder:APlaceholderExpr:astvalidation#APlaceholderExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to astbuilder:APlaceholderExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to astbuilder:APlaceholderExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to astbuilder:APlaceholderExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to astbuilder:APlaceholderExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to astbuilder:APlaceholderExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to astbuilder:APlaceholderExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AExpr__accept_typing, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to astbuilder:APlaceholderExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to astbuilder:APlaceholderExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to astbuilder:APlaceholderExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to astbuilder:APlaceholderExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to astbuilder:APlaceholderExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to astbuilder:APlaceholderExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to astbuilder:APlaceholderExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to astbuilder:APlaceholderExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_astbuilder__APlaceholderExpr__make, /* pointer to astbuilder:APlaceholderExpr:astbuilder#APlaceholderExpr#make */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to astbuilder:APlaceholderExpr:astvalidation#AExpr#accept_ast_validation */
}
};
/* allocate APlaceholderExpr */
val* NEW_astbuilder__APlaceholderExpr(const struct type* type) {
val* self /* : APlaceholderExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_astbuilder__APlaceholderExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:APlaceholderExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:APlaceholderExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:APlaceholderExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:APlaceholderExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:APlaceholderExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:APlaceholderExpr exact> */
return self;
}
/* runtime class astvalidation__ASTValidationVisitor */
const struct class class_astvalidation__ASTValidationVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to astvalidation:ASTValidationVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to astvalidation:ASTValidationVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to astvalidation:ASTValidationVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to astvalidation:ASTValidationVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to astvalidation:ASTValidationVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to astvalidation:ASTValidationVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to astvalidation:ASTValidationVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to astvalidation:ASTValidationVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to astvalidation:ASTValidationVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to astvalidation:ASTValidationVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to astvalidation:ASTValidationVisitor:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to astvalidation:ASTValidationVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to astvalidation:ASTValidationVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to astvalidation:ASTValidationVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to astvalidation:ASTValidationVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to astvalidation:ASTValidationVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to astvalidation:ASTValidationVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to astvalidation:ASTValidationVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to astvalidation:ASTValidationVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to astvalidation:ASTValidationVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to astvalidation:ASTValidationVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to astvalidation:ASTValidationVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to astvalidation:ASTValidationVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to astvalidation:ASTValidationVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to astvalidation:ASTValidationVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to astvalidation:ASTValidationVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to astvalidation:ASTValidationVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to astvalidation:ASTValidationVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to astvalidation:ASTValidationVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to astvalidation:ASTValidationVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to astvalidation:ASTValidationVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to astvalidation:ASTValidationVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to astvalidation:ASTValidationVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to astvalidation:ASTValidationVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to astvalidation:ASTValidationVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to astvalidation:ASTValidationVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to astvalidation:ASTValidationVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to astvalidation:ASTValidationVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to astvalidation:ASTValidationVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to astvalidation:ASTValidationVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to astvalidation:ASTValidationVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_astvalidation__ASTValidationVisitor__visit, /* pointer to astvalidation:ASTValidationVisitor:astvalidation#ASTValidationVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to astvalidation:ASTValidationVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to astvalidation:ASTValidationVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to astvalidation:ASTValidationVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to astvalidation:ASTValidationVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_astvalidation__ASTValidationVisitor__path, /* pointer to astvalidation:ASTValidationVisitor:astvalidation#ASTValidationVisitor#path */
(nitmethod_t)VIRTUAL_astvalidation__ASTValidationVisitor__path_61d, /* pointer to astvalidation:ASTValidationVisitor:astvalidation#ASTValidationVisitor#path= */
(nitmethod_t)VIRTUAL_astvalidation__ASTValidationVisitor__seen, /* pointer to astvalidation:ASTValidationVisitor:astvalidation#ASTValidationVisitor#seen */
(nitmethod_t)VIRTUAL_astvalidation__ASTValidationVisitor__seen_61d, /* pointer to astvalidation:ASTValidationVisitor:astvalidation#ASTValidationVisitor#seen= */
(nitmethod_t)VIRTUAL_astvalidation__ASTValidationVisitor__init, /* pointer to astvalidation:ASTValidationVisitor:astvalidation#ASTValidationVisitor#init */
}
};
/* allocate ASTValidationVisitor */
val* NEW_astvalidation__ASTValidationVisitor(const struct type* type) {
val* self /* : ASTValidationVisitor */;
val* var /* : null */;
val* var1 /* : List[ANode] */;
val* var2 /* : HashSet[ANode] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_astvalidation__ASTValidationVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:ASTValidationVisitor exact> */
var1 = NEW_list__List(&type_list__Listparser_nodes__ANode);
((void (*)(val*))(var1->class->vft[COLOR_list__List__init]))(var1) /* init on <var1:List[ANode]>*/;
self->attrs[COLOR_astvalidation__ASTValidationVisitor___64dpath].val = var1; /* @path on <self:ASTValidationVisitor exact> */
var2 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetparser_nodes__ANode);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashSet__init]))(var2) /* init on <var2:HashSet[ANode]>*/;
self->attrs[COLOR_astvalidation__ASTValidationVisitor___64dseen].val = var2; /* @seen on <self:ASTValidationVisitor exact> */
return self;
}
/* runtime class rapid_type_analysis__RapidTypeAnalysis */
const struct class class_rapid_type_analysis__RapidTypeAnalysis = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to rapid_type_analysis:RapidTypeAnalysis:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to rapid_type_analysis:RapidTypeAnalysis:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to rapid_type_analysis:RapidTypeAnalysis:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to rapid_type_analysis:RapidTypeAnalysis:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to rapid_type_analysis:RapidTypeAnalysis:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to rapid_type_analysis:RapidTypeAnalysis:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to rapid_type_analysis:RapidTypeAnalysis:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to rapid_type_analysis:RapidTypeAnalysis:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to rapid_type_analysis:RapidTypeAnalysis:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to rapid_type_analysis:RapidTypeAnalysis:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to rapid_type_analysis:RapidTypeAnalysis:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to rapid_type_analysis:RapidTypeAnalysis:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to rapid_type_analysis:RapidTypeAnalysis:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to rapid_type_analysis:RapidTypeAnalysis:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to rapid_type_analysis:RapidTypeAnalysis:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__modelbuilder, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#modelbuilder */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__modelbuilder_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#modelbuilder= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__mainmodule, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#mainmodule */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__mainmodule_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#mainmodule= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_types */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_types_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_types= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_open_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_open_types */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_open_types_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_open_types= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_classes, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_classes */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_classes_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_classes= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_cast_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_cast_types */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_cast_types_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_cast_types= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_open_cast_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_open_cast_types_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_methoddefs, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_methoddefs */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_methoddefs_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_methoddefs= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_methods, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_methods */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_methods_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_methods= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_super_sends, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_super_sends */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_super_sends_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_super_sends= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_types_to_csv, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_types_to_csv */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_methods_to_tree, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_methods_to_tree */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__totry_methods, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#totry_methods */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__totry_methods_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#totry_methods= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__todo, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#todo */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__todo_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#todo= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__force_alive, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#force_alive */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__run_analysis, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#run_analysis */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__check_depth, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#check_depth */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_new, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_new */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_cast, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_cast */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__try_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#try_send */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_call, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_call */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_send */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__try_super_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#try_super_send */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_super_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_super_send */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__init, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#init */
}
};
/* allocate RapidTypeAnalysis */
val* NEW_rapid_type_analysis__RapidTypeAnalysis(const struct type* type) {
val* self /* : RapidTypeAnalysis */;
val* var /* : HashSet[MClassType] */;
val* var1 /* : HashSet[MClassType] */;
val* var2 /* : HashSet[MClass] */;
val* var3 /* : HashSet[MType] */;
val* var4 /* : HashSet[MType] */;
val* var5 /* : HashSet[MMethodDef] */;
val* var6 /* : HashSet[MMethod] */;
val* var7 /* : HashSet[MMethodDef] */;
val* var8 /* : HashSet[MMethod] */;
val* var9 /* : List[MMethodDef] */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_rapid_type_analysis__RapidTypeAnalysis;
var = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClassType);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashSet__init]))(var) /* init on <var:HashSet[MClassType]>*/;
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_types].val = var; /* @live_types on <self:RapidTypeAnalysis exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClassType);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[MClassType]>*/;
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_open_types].val = var1; /* @live_open_types on <self:RapidTypeAnalysis exact> */
var2 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClass);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashSet__init]))(var2) /* init on <var2:HashSet[MClass]>*/;
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_classes].val = var2; /* @live_classes on <self:RapidTypeAnalysis exact> */
var3 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashSet__init]))(var3) /* init on <var3:HashSet[MType]>*/;
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_cast_types].val = var3; /* @live_cast_types on <self:RapidTypeAnalysis exact> */
var4 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var4->class->vft[COLOR_hash_collection__HashSet__init]))(var4) /* init on <var4:HashSet[MType]>*/;
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_open_cast_types].val = var4; /* @live_open_cast_types on <self:RapidTypeAnalysis exact> */
var5 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MMethodDef);
((void (*)(val*))(var5->class->vft[COLOR_hash_collection__HashSet__init]))(var5) /* init on <var5:HashSet[MMethodDef]>*/;
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_methoddefs].val = var5; /* @live_methoddefs on <self:RapidTypeAnalysis exact> */
var6 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MMethod);
((void (*)(val*))(var6->class->vft[COLOR_hash_collection__HashSet__init]))(var6) /* init on <var6:HashSet[MMethod]>*/;
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_methods].val = var6; /* @live_methods on <self:RapidTypeAnalysis exact> */
var7 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MMethodDef);
((void (*)(val*))(var7->class->vft[COLOR_hash_collection__HashSet__init]))(var7) /* init on <var7:HashSet[MMethodDef]>*/;
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_super_sends].val = var7; /* @live_super_sends on <self:RapidTypeAnalysis exact> */
var8 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MMethod);
((void (*)(val*))(var8->class->vft[COLOR_hash_collection__HashSet__init]))(var8) /* init on <var8:HashSet[MMethod]>*/;
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dtotry_methods].val = var8; /* @totry_methods on <self:RapidTypeAnalysis exact> */
var9 = NEW_list__List(&type_list__Listmodel__MMethodDef);
((void (*)(val*))(var9->class->vft[COLOR_list__List__init]))(var9) /* init on <var9:List[MMethodDef]>*/;
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dtodo].val = var9; /* @todo on <self:RapidTypeAnalysis exact> */
return self;
}
/* runtime class rapid_type_analysis__RapidTypeVisitor */
const struct class class_rapid_type_analysis__RapidTypeVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to rapid_type_analysis:RapidTypeVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to rapid_type_analysis:RapidTypeVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to rapid_type_analysis:RapidTypeVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to rapid_type_analysis:RapidTypeVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to rapid_type_analysis:RapidTypeVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to rapid_type_analysis:RapidTypeVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to rapid_type_analysis:RapidTypeVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to rapid_type_analysis:RapidTypeVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to rapid_type_analysis:RapidTypeVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to rapid_type_analysis:RapidTypeVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to rapid_type_analysis:RapidTypeVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to rapid_type_analysis:RapidTypeVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to rapid_type_analysis:RapidTypeVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to rapid_type_analysis:RapidTypeVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to rapid_type_analysis:RapidTypeVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to rapid_type_analysis:RapidTypeVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to rapid_type_analysis:RapidTypeVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to rapid_type_analysis:RapidTypeVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to rapid_type_analysis:RapidTypeVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to rapid_type_analysis:RapidTypeVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to rapid_type_analysis:RapidTypeVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to rapid_type_analysis:RapidTypeVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to rapid_type_analysis:RapidTypeVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to rapid_type_analysis:RapidTypeVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to rapid_type_analysis:RapidTypeVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__visit, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to rapid_type_analysis:RapidTypeVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to rapid_type_analysis:RapidTypeVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:parser_nodes#Visitor#current_node= */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to rapid_type_analysis:RapidTypeVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__analysis, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#analysis */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__analysis_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#analysis= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__receiver, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#receiver */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__receiver_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#receiver= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__mpropdef, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#mpropdef */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__mpropdef_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#mpropdef= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__init, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__cleanup_type, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#cleanup_type */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__get_class, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#get_class */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__get_method, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#get_method */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_type, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#add_type */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_send, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#add_send */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_cast_type, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#add_cast_type */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_callsite, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#add_callsite */
}
};
/* allocate RapidTypeVisitor */
val* NEW_rapid_type_analysis__RapidTypeVisitor(const struct type* type) {
val* self /* : RapidTypeVisitor */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_rapid_type_analysis__RapidTypeVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:RapidTypeVisitor exact> */
return self;
}
/* runtime class csv__CSVDocument */
/* allocate CSVDocument */
val* NEW_csv__CSVDocument(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "CSVDocument is DEAD");
fprintf(stderr, "\n");
show_backtrace(1);
}
/* runtime class ordered_tree__OrderedTree */
/* allocate OrderedTree[Object] */
val* NEW_ordered_tree__OrderedTree(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "OrderedTree is DEAD");
fprintf(stderr, "\n");
show_backtrace(1);
}
/* runtime class global_compiler__GlobalCompiler */
const struct class class_global_compiler__GlobalCompiler = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to global_compiler:GlobalCompiler:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to global_compiler:GlobalCompiler:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to global_compiler:GlobalCompiler:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to global_compiler:GlobalCompiler:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to global_compiler:GlobalCompiler:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to global_compiler:GlobalCompiler:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to global_compiler:GlobalCompiler:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to global_compiler:GlobalCompiler:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to global_compiler:GlobalCompiler:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to global_compiler:GlobalCompiler:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to global_compiler:GlobalCompiler:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to global_compiler:GlobalCompiler:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to global_compiler:GlobalCompiler:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to global_compiler:GlobalCompiler:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to global_compiler:GlobalCompiler:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to global_compiler:GlobalCompiler:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to global_compiler:GlobalCompiler:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to global_compiler:GlobalCompiler:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to global_compiler:GlobalCompiler:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to global_compiler:GlobalCompiler:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to global_compiler:GlobalCompiler:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to global_compiler:GlobalCompiler:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to global_compiler:GlobalCompiler:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to global_compiler:GlobalCompiler:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to global_compiler:GlobalCompiler:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to global_compiler:GlobalCompiler:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to global_compiler:GlobalCompiler:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to global_compiler:GlobalCompiler:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to global_compiler:GlobalCompiler:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to global_compiler:GlobalCompiler:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to global_compiler:GlobalCompiler:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to global_compiler:GlobalCompiler:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to global_compiler:GlobalCompiler:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to global_compiler:GlobalCompiler:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to global_compiler:GlobalCompiler:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to global_compiler:GlobalCompiler:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to global_compiler:GlobalCompiler:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to global_compiler:GlobalCompiler:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to global_compiler:GlobalCompiler:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to global_compiler:GlobalCompiler:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to global_compiler:GlobalCompiler:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to global_compiler:GlobalCompiler:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to global_compiler:GlobalCompiler:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to global_compiler:GlobalCompiler:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to global_compiler:GlobalCompiler:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to global_compiler:GlobalCompiler:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to global_compiler:GlobalCompiler:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to global_compiler:GlobalCompiler:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to global_compiler:GlobalCompiler:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to global_compiler:GlobalCompiler:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to global_compiler:GlobalCompiler:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__names, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#names */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__names_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#names= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__mainmodule, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#mainmodule */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__mainmodule_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#mainmodule= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__realmainmodule, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#realmainmodule */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__realmainmodule_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#realmainmodule= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__modelbuilder, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#modelbuilder */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__modelbuilder_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#modelbuilder= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__hardening, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#hardening */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__init, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#init */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__new_file, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#new_file */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#files */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#files= */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__new_visitor, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#new_visitor */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__header, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#header */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__header_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#header= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provide_declaration, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#provide_declaration */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provided_declarations, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#provided_declarations */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provided_declarations_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#provided_declarations= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__requirers_of_declarations, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#requirers_of_declarations */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__requirers_of_declarations_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#requirers_of_declarations= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__build_c_to_nit_bindings, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#build_c_to_nit_bindings */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_header, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#compile_header */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__compile_header_structs, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#compile_header_structs */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__compile_nitni_structs, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#compile_nitni_structs */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_main_function, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#compile_main_function */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#extern_bodies */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#extern_bodies= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files_to_copy, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#files_to_copy */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files_to_copy_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#files_to_copy= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#seen_extern */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#seen_extern= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__generate_init_attr, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#generate_init_attr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__generate_check_attr, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#generate_check_attr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_tags, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#count_type_test_tags */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_tags_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#count_type_test_tags= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_resolved, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#count_type_test_resolved */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_resolved_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#count_type_test_resolved= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_unresolved, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#count_type_test_unresolved */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_unresolved_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#count_type_test_unresolved= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_skipped, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#count_type_test_skipped */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_skipped_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#count_type_test_skipped= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__init_count_type_test_tags, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#init_count_type_test_tags */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__display_stats, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#display_stats */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__div, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#div */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__finalize_ffi_for_module, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#finalize_ffi_for_module */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__runtime_type_analysis, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#runtime_type_analysis */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__runtime_type_analysis_61d, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#runtime_type_analysis= */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__init, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#init */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__compile_class_names, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#compile_class_names */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__classid, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#classid */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__classids, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#classids */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__classids_61d, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#classids= */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__live_primitive_types, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#live_primitive_types */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__live_primitive_types_61d, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#live_primitive_types= */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__todo, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#todo */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__todos, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#todos */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__todos_61d, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#todos= */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__seen, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#seen */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__seen_61d, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#seen= */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__declare_runtimeclass, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#declare_runtimeclass */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__generate_init_instance, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#generate_init_instance */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__generate_box_instance, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#generate_box_instance */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__collect_types_cache, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#collect_types_cache */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__collect_types_cache_61d, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#collect_types_cache= */
}
};
/* allocate GlobalCompiler */
val* NEW_global_compiler__GlobalCompiler(const struct type* type) {
val* self /* : GlobalCompiler */;
val* var /* : HashMap[String, String] */;
val* var1 /* : List[CodeFile] */;
val* var2 /* : HashMap[String, String] */;
val* var3 /* : HashMap[String, ANode] */;
val* var4 /* : Array[ExternFile] */;
val* var5 /* : Array[String] */;
val* var6 /* : ArraySet[String] */;
val* var7 /* : Array[String] */;
long var8 /* : Int */;
val* var_ /* var : Array[String] */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : HashMap[String, Int] */;
val* var34 /* : HashMap[String, Int] */;
val* var35 /* : HashMap[String, Int] */;
val* var36 /* : HashMap[MClassType, String] */;
val* var37 /* : List[AbstractRuntimeFunction] */;
val* var38 /* : HashSet[AbstractRuntimeFunction] */;
val* var39 /* : HashMap[MType, Array[MClassType]] */;
self = nit_alloc(sizeof(struct instance) + 21*sizeof(nitattribute_t));
self->type = type;
self->class = &class_global_compiler__GlobalCompiler;
var = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringstring__String);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashMap__init]))(var) /* init on <var:HashMap[String, String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dnames].val = var; /* @names on <self:GlobalCompiler exact> */
var1 = NEW_list__List(&type_list__Listabstract_compiler__CodeFile);
((void (*)(val*))(var1->class->vft[COLOR_list__List__init]))(var1) /* init on <var1:List[CodeFile]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dfiles].val = var1; /* @files on <self:GlobalCompiler exact> */
var2 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringstring__String);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashMap__init]))(var2) /* init on <var2:HashMap[String, String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dprovided_declarations].val = var2; /* @provided_declarations on <self:GlobalCompiler exact> */
var3 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringparser_nodes__ANode);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[String, ANode]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64drequirers_of_declarations].val = var3; /* @requirers_of_declarations on <self:GlobalCompiler exact> */
var4 = NEW_array__Array(&type_array__Arrayffi_base__ExternFile);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[ExternFile]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dextern_bodies].val = var4; /* @extern_bodies on <self:GlobalCompiler exact> */
var5 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dfiles_to_copy].val = var5; /* @files_to_copy on <self:GlobalCompiler exact> */
var6 = NEW_array__ArraySet(&type_array__ArraySetstring__String);
((void (*)(val*))(var6->class->vft[COLOR_array__ArraySet__init]))(var6) /* init on <var6:ArraySet[String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dseen_extern].val = var6; /* @seen_extern on <self:GlobalCompiler exact> */
var7 = NEW_array__Array(&type_array__Arraystring__String);
var8 = 5;
((void (*)(val*, long))(var7->class->vft[COLOR_array__Array__with_capacity]))(var7, var8) /* with_capacity on <var7:Array[String]>*/;
var_ = var7;
if (varonce) {
var9 = varonce;
} else {
var10 = "isa";
var11 = 3;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var9) /* push on <var_:Array[String]>*/;
if (varonce13) {
var14 = varonce13;
} else {
var15 = "as";
var16 = 2;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var14) /* push on <var_:Array[String]>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "auto";
var21 = 4;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var19) /* push on <var_:Array[String]>*/;
if (varonce23) {
var24 = varonce23;
} else {
var25 = "covariance";
var26 = 10;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var24) /* push on <var_:Array[String]>*/;
if (varonce28) {
var29 = varonce28;
} else {
var30 = "erasure";
var31 = 7;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var29) /* push on <var_:Array[String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_tags].val = var_; /* @count_type_test_tags on <self:GlobalCompiler exact> */
var33 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:GlobalCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_resolved].val = var33; /* @count_type_test_resolved on <self:GlobalCompiler exact> */
var34 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:GlobalCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_unresolved].val = var34; /* @count_type_test_unresolved on <self:GlobalCompiler exact> */
var35 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:GlobalCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_skipped].val = var35; /* @count_type_test_skipped on <self:GlobalCompiler exact> */
var36 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassTypestring__String);
((void (*)(val*))(var36->class->vft[COLOR_hash_collection__HashMap__init]))(var36) /* init on <var36:HashMap[MClassType, String]>*/;
self->attrs[COLOR_global_compiler__GlobalCompiler___64dclassids].val = var36; /* @classids on <self:GlobalCompiler exact> */
var37 = NEW_list__List(&type_list__Listabstract_compiler__AbstractRuntimeFunction);
((void (*)(val*))(var37->class->vft[COLOR_list__List__init]))(var37) /* init on <var37:List[AbstractRuntimeFunction]>*/;
self->attrs[COLOR_global_compiler__GlobalCompiler___64dtodos].val = var37; /* @todos on <self:GlobalCompiler exact> */
var38 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetabstract_compiler__AbstractRuntimeFunction);
((void (*)(val*))(var38->class->vft[COLOR_hash_collection__HashSet__init]))(var38) /* init on <var38:HashSet[AbstractRuntimeFunction]>*/;
self->attrs[COLOR_global_compiler__GlobalCompiler___64dseen].val = var38; /* @seen on <self:GlobalCompiler exact> */
var39 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypearray__Arraymodel__MClassType);
((void (*)(val*))(var39->class->vft[COLOR_hash_collection__HashMap__init]))(var39) /* init on <var39:HashMap[MType, Array[MClassType]]>*/;
self->attrs[COLOR_global_compiler__GlobalCompiler___64dcollect_types_cache].val = var39; /* @collect_types_cache on <self:GlobalCompiler exact> */
return self;
}
/* runtime class global_compiler__GlobalCompilerVisitor */
const struct class class_global_compiler__GlobalCompilerVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to global_compiler:GlobalCompilerVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to global_compiler:GlobalCompilerVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to global_compiler:GlobalCompilerVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to global_compiler:GlobalCompilerVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to global_compiler:GlobalCompilerVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to global_compiler:GlobalCompilerVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to global_compiler:GlobalCompilerVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to global_compiler:GlobalCompilerVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to global_compiler:GlobalCompilerVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to global_compiler:GlobalCompilerVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to global_compiler:GlobalCompilerVisitor:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to global_compiler:GlobalCompilerVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to global_compiler:GlobalCompilerVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to global_compiler:GlobalCompilerVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to global_compiler:GlobalCompilerVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to global_compiler:GlobalCompilerVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to global_compiler:GlobalCompilerVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to global_compiler:GlobalCompilerVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to global_compiler:GlobalCompilerVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to global_compiler:GlobalCompilerVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to global_compiler:GlobalCompilerVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to global_compiler:GlobalCompilerVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to global_compiler:GlobalCompilerVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to global_compiler:GlobalCompilerVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to global_compiler:GlobalCompilerVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to global_compiler:GlobalCompilerVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to global_compiler:GlobalCompilerVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to global_compiler:GlobalCompilerVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to global_compiler:GlobalCompilerVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to global_compiler:GlobalCompilerVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to global_compiler:GlobalCompilerVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to global_compiler:GlobalCompilerVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to global_compiler:GlobalCompilerVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to global_compiler:GlobalCompilerVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to global_compiler:GlobalCompilerVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to global_compiler:GlobalCompilerVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to global_compiler:GlobalCompilerVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to global_compiler:GlobalCompilerVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to global_compiler:GlobalCompilerVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to global_compiler:GlobalCompilerVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to global_compiler:GlobalCompilerVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compiler, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compiler */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compiler_61d, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compiler= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__current_node, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#current_node */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__current_node_61d, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#current_node= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__frame, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#frame */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__frame_61d, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#frame= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__object_type, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#object_type */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__bool_type, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#bool_type */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__writer, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#writer */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__writer_61d, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#writer= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__init, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#init */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_class, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_class */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_property, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_property */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compile_callsite, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compile_callsite */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__calloc_array, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#calloc_array */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__native_array_def, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#native_array_def */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__varargize, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#varargize */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__anchor, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#anchor */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__resolve_for, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#resolve_for */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__autoadapt, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#autoadapt */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__supercall, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#supercall */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__adapt_signature, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#adapt_signature */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__autobox, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#autobox */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__type_test, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#type_test */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__is_same_type_test, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#is_same_type_test */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__equal_test, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#equal_test */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__call, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#call */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__send, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#send */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__monomorphic_send, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#monomorphic_send */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__monomorphic_super_send, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#monomorphic_super_send */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__isset_attribute, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#isset_attribute */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__read_attribute, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#read_attribute */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__write_attribute, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#write_attribute */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__check_recv_notnull, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#check_recv_notnull */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__names, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#names */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__names_61d, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#names= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last_61d, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_name, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_name, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_names, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_names */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_names_61d, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_names= */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__class_name_string, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#class_name_string */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variables, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variables */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variables_61d, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variables= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variable, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variable */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_var, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_var */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_named_var, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_named_var */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__assign, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#assign */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__init_instance, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#init_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__int_instance, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#int_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__string_instance, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#string_instance */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__array_instance, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#array_instance */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__vararg_instance, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#vararg_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_decl, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_decl */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__require_declaration, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#require_declaration */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__declare_once, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#declare_once */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_extern, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_extern */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_expr, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_abort, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_abort */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_raw_abort, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_raw_abort */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_cast, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_cast */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__ret, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#ret */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__stmt, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#stmt */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr_bool, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr_bool */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__debug, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#debug */
(nitmethod_t)VIRTUAL_compiler_ffi__AbstractCompilerVisitor__var_from_c, /* pointer to global_compiler:GlobalCompilerVisitor:compiler_ffi#AbstractCompilerVisitor#var_from_c */
(nitmethod_t)VIRTUAL_compiler_ffi__AbstractCompilerVisitor__ret_to_c, /* pointer to global_compiler:GlobalCompilerVisitor:compiler_ffi#AbstractCompilerVisitor#ret_to_c */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__collect_types, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#collect_types */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__check_valid_reciever, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#check_valid_reciever */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__get_recvtype, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#get_recvtype */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__get_recv, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#get_recv */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__finalize_call, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#finalize_call */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__call_without_varargize, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#call_without_varargize */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__bugtype, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#bugtype */
}
};
/* allocate GlobalCompilerVisitor */
val* NEW_global_compiler__GlobalCompilerVisitor(const struct type* type) {
val* self /* : GlobalCompilerVisitor */;
val* var /* : null */;
val* var1 /* : HashSet[String] */;
long var2 /* : Int */;
val* var3 /* : HashMap[EscapeMark, String] */;
val* var4 /* : HashMap[Variable, RuntimeVariable] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_global_compiler__GlobalCompilerVisitor;
var = NULL;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dcurrent_node].val = var; /* @current_node on <self:GlobalCompilerVisitor exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetstring__String);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dnames].val = var1; /* @names on <self:GlobalCompilerVisitor exact> */
var2 = 0;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dlast].l = var2; /* @last on <self:GlobalCompilerVisitor exact> */
var3 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__EscapeMarkstring__String);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[EscapeMark, String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64descapemark_names].val = var3; /* @escapemark_names on <self:GlobalCompilerVisitor exact> */
var4 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable);
((void (*)(val*))(var4->class->vft[COLOR_hash_collection__HashMap__init]))(var4) /* init on <var4:HashMap[Variable, RuntimeVariable]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dvariables].val = var4; /* @variables on <self:GlobalCompilerVisitor exact> */
return self;
}
/* runtime class global_compiler__CustomizedRuntimeFunction */
const struct class class_global_compiler__CustomizedRuntimeFunction = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_global_compiler__CustomizedRuntimeFunction___61d_61d, /* pointer to global_compiler:CustomizedRuntimeFunction:global_compiler#CustomizedRuntimeFunction#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#sys */
(nitmethod_t)VIRTUAL_global_compiler__CustomizedRuntimeFunction__hash, /* pointer to global_compiler:CustomizedRuntimeFunction:global_compiler#CustomizedRuntimeFunction#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to global_compiler:CustomizedRuntimeFunction:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to global_compiler:CustomizedRuntimeFunction:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to global_compiler:CustomizedRuntimeFunction:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to global_compiler:CustomizedRuntimeFunction:math#Object#srand */
(nitmethod_t)VIRTUAL_global_compiler__CustomizedRuntimeFunction__to_s, /* pointer to global_compiler:CustomizedRuntimeFunction:global_compiler#CustomizedRuntimeFunction#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to global_compiler:CustomizedRuntimeFunction:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to global_compiler:CustomizedRuntimeFunction:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to global_compiler:CustomizedRuntimeFunction:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to global_compiler:CustomizedRuntimeFunction:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to global_compiler:CustomizedRuntimeFunction:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to global_compiler:CustomizedRuntimeFunction:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to global_compiler:CustomizedRuntimeFunction:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to global_compiler:CustomizedRuntimeFunction:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to global_compiler:CustomizedRuntimeFunction:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to global_compiler:CustomizedRuntimeFunction:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to global_compiler:CustomizedRuntimeFunction:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to global_compiler:CustomizedRuntimeFunction:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to global_compiler:CustomizedRuntimeFunction:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to global_compiler:CustomizedRuntimeFunction:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to global_compiler:CustomizedRuntimeFunction:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to global_compiler:CustomizedRuntimeFunction:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to global_compiler:CustomizedRuntimeFunction:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to global_compiler:CustomizedRuntimeFunction:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to global_compiler:CustomizedRuntimeFunction:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to global_compiler:CustomizedRuntimeFunction:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to global_compiler:CustomizedRuntimeFunction:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to global_compiler:CustomizedRuntimeFunction:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to global_compiler:CustomizedRuntimeFunction:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to global_compiler:CustomizedRuntimeFunction:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to global_compiler:CustomizedRuntimeFunction:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to global_compiler:CustomizedRuntimeFunction:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to global_compiler:CustomizedRuntimeFunction:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to global_compiler:CustomizedRuntimeFunction:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to global_compiler:CustomizedRuntimeFunction:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to global_compiler:CustomizedRuntimeFunction:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to global_compiler:CustomizedRuntimeFunction:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to global_compiler:CustomizedRuntimeFunction:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to global_compiler:CustomizedRuntimeFunction:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to global_compiler:CustomizedRuntimeFunction:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to global_compiler:CustomizedRuntimeFunction:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to global_compiler:CustomizedRuntimeFunction:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef, /* pointer to global_compiler:CustomizedRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#mmethoddef */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d, /* pointer to global_compiler:CustomizedRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#mmethoddef= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name, /* pointer to global_compiler:CustomizedRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name */
(nitmethod_t)VIRTUAL_global_compiler__CustomizedRuntimeFunction__build_c_name, /* pointer to global_compiler:CustomizedRuntimeFunction:global_compiler#CustomizedRuntimeFunction#build_c_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache, /* pointer to global_compiler:CustomizedRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache_61d, /* pointer to global_compiler:CustomizedRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name_cache= */
(nitmethod_t)VIRTUAL_global_compiler__CustomizedRuntimeFunction__call, /* pointer to global_compiler:CustomizedRuntimeFunction:global_compiler#CustomizedRuntimeFunction#call */
(nitmethod_t)VIRTUAL_global_compiler__CustomizedRuntimeFunction__compile_to_c, /* pointer to global_compiler:CustomizedRuntimeFunction:global_compiler#CustomizedRuntimeFunction#compile_to_c */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__init, /* pointer to global_compiler:CustomizedRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#init */
(nitmethod_t)VIRTUAL_global_compiler__CustomizedRuntimeFunction__recv, /* pointer to global_compiler:CustomizedRuntimeFunction:global_compiler#CustomizedRuntimeFunction#recv */
(nitmethod_t)VIRTUAL_global_compiler__CustomizedRuntimeFunction__recv_61d, /* pointer to global_compiler:CustomizedRuntimeFunction:global_compiler#CustomizedRuntimeFunction#recv= */
(nitmethod_t)VIRTUAL_global_compiler__CustomizedRuntimeFunction__init, /* pointer to global_compiler:CustomizedRuntimeFunction:global_compiler#CustomizedRuntimeFunction#init */
}
};
/* allocate CustomizedRuntimeFunction */
val* NEW_global_compiler__CustomizedRuntimeFunction(const struct type* type) {
val* self /* : CustomizedRuntimeFunction */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_global_compiler__CustomizedRuntimeFunction;
var = NULL;
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dc_name_cache].val = var; /* @c_name_cache on <self:CustomizedRuntimeFunction exact> */
return self;
}
/* runtime class abstract_compiler__Toolchain */
/* allocate Toolchain */
val* NEW_abstract_compiler__Toolchain(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "Toolchain is DEAD");
fprintf(stderr, "\n");
show_backtrace(1);
}
/* runtime class abstract_compiler__MakefileToolchain */
const struct class class_abstract_compiler__MakefileToolchain = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to abstract_compiler:MakefileToolchain:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to abstract_compiler:MakefileToolchain:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to abstract_compiler:MakefileToolchain:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to abstract_compiler:MakefileToolchain:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to abstract_compiler:MakefileToolchain:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_compiler:MakefileToolchain:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_compiler:MakefileToolchain:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to abstract_compiler:MakefileToolchain:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_compiler:MakefileToolchain:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_compiler:MakefileToolchain:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to abstract_compiler:MakefileToolchain:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to abstract_compiler:MakefileToolchain:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to abstract_compiler:MakefileToolchain:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to abstract_compiler:MakefileToolchain:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to abstract_compiler:MakefileToolchain:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to abstract_compiler:MakefileToolchain:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to abstract_compiler:MakefileToolchain:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to abstract_compiler:MakefileToolchain:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to abstract_compiler:MakefileToolchain:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to abstract_compiler:MakefileToolchain:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to abstract_compiler:MakefileToolchain:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to abstract_compiler:MakefileToolchain:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to abstract_compiler:MakefileToolchain:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to abstract_compiler:MakefileToolchain:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to abstract_compiler:MakefileToolchain:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to abstract_compiler:MakefileToolchain:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to abstract_compiler:MakefileToolchain:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to abstract_compiler:MakefileToolchain:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to abstract_compiler:MakefileToolchain:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to abstract_compiler:MakefileToolchain:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to abstract_compiler:MakefileToolchain:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to abstract_compiler:MakefileToolchain:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to abstract_compiler:MakefileToolchain:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to abstract_compiler:MakefileToolchain:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to abstract_compiler:MakefileToolchain:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to abstract_compiler:MakefileToolchain:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to abstract_compiler:MakefileToolchain:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to abstract_compiler:MakefileToolchain:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to abstract_compiler:MakefileToolchain:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to abstract_compiler:MakefileToolchain:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to abstract_compiler:MakefileToolchain:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__Toolchain__toolcontext, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#Toolchain#toolcontext */
(nitmethod_t)VIRTUAL_abstract_compiler__Toolchain__toolcontext_61d, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#Toolchain#toolcontext= */
(nitmethod_t)VIRTUAL_abstract_compiler__Toolchain__compile_dir, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#Toolchain#compile_dir */
(nitmethod_t)VIRTUAL_abstract_compiler__MakefileToolchain__write_and_make, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#write_and_make */
(nitmethod_t)VIRTUAL_abstract_compiler__Toolchain__init, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#Toolchain#init */
(nitmethod_t)VIRTUAL_abstract_compiler__MakefileToolchain__cc_paths, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#cc_paths */
(nitmethod_t)VIRTUAL_abstract_compiler__MakefileToolchain__cc_paths_61d, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#cc_paths= */
(nitmethod_t)VIRTUAL_abstract_compiler__MakefileToolchain__gather_cc_paths, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#gather_cc_paths */
(nitmethod_t)VIRTUAL_abstract_compiler__MakefileToolchain__write_files, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#write_files */
(nitmethod_t)VIRTUAL_abstract_compiler__MakefileToolchain__write_makefile, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#write_makefile */
(nitmethod_t)VIRTUAL_abstract_compiler__MakefileToolchain__compile_c_code, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#compile_c_code */
}
};
/* allocate MakefileToolchain */
val* NEW_abstract_compiler__MakefileToolchain(const struct type* type) {
val* self /* : MakefileToolchain */;
val* var /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_abstract_compiler__MakefileToolchain;
var = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[String]>*/;
self->attrs[COLOR_abstract_compiler__MakefileToolchain___64dcc_paths].val = var; /* @cc_paths on <self:MakefileToolchain exact> */
return self;
}
/* runtime class abstract_compiler__CodeFile */
const struct class class_abstract_compiler__CodeFile = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_compiler:CodeFile:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to abstract_compiler:CodeFile:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to abstract_compiler:CodeFile:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_compiler:CodeFile:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_compiler:CodeFile:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to abstract_compiler:CodeFile:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to abstract_compiler:CodeFile:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_compiler:CodeFile:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_compiler:CodeFile:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_compiler:CodeFile:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to abstract_compiler:CodeFile:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to abstract_compiler:CodeFile:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to abstract_compiler:CodeFile:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to abstract_compiler:CodeFile:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to abstract_compiler:CodeFile:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_compiler:CodeFile:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_compiler:CodeFile:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to abstract_compiler:CodeFile:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_compiler:CodeFile:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_compiler:CodeFile:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to abstract_compiler:CodeFile:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to abstract_compiler:CodeFile:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to abstract_compiler:CodeFile:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to abstract_compiler:CodeFile:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to abstract_compiler:CodeFile:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to abstract_compiler:CodeFile:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to abstract_compiler:CodeFile:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to abstract_compiler:CodeFile:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to abstract_compiler:CodeFile:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to abstract_compiler:CodeFile:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to abstract_compiler:CodeFile:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to abstract_compiler:CodeFile:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to abstract_compiler:CodeFile:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to abstract_compiler:CodeFile:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to abstract_compiler:CodeFile:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to abstract_compiler:CodeFile:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to abstract_compiler:CodeFile:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to abstract_compiler:CodeFile:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to abstract_compiler:CodeFile:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to abstract_compiler:CodeFile:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to abstract_compiler:CodeFile:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to abstract_compiler:CodeFile:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to abstract_compiler:CodeFile:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to abstract_compiler:CodeFile:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to abstract_compiler:CodeFile:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to abstract_compiler:CodeFile:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to abstract_compiler:CodeFile:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to abstract_compiler:CodeFile:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to abstract_compiler:CodeFile:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to abstract_compiler:CodeFile:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to abstract_compiler:CodeFile:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeFile__name, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#name */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeFile__name_61d, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#name= */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeFile__writers, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#writers */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeFile__writers_61d, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#writers= */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeFile__required_declarations, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#required_declarations */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeFile__required_declarations_61d, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#required_declarations= */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeFile__init, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#init */
}
};
/* allocate CodeFile */
val* NEW_abstract_compiler__CodeFile(const struct type* type) {
val* self /* : CodeFile */;
val* var /* : Array[CodeWriter] */;
val* var1 /* : HashSet[String] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_abstract_compiler__CodeFile;
var = NEW_array__Array(&type_array__Arrayabstract_compiler__CodeWriter);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[CodeWriter]>*/;
self->attrs[COLOR_abstract_compiler__CodeFile___64dwriters].val = var; /* @writers on <self:CodeFile exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetstring__String);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[String]>*/;
self->attrs[COLOR_abstract_compiler__CodeFile___64drequired_declarations].val = var1; /* @required_declarations on <self:CodeFile exact> */
return self;
}
/* runtime class abstract_compiler__CodeWriter */
const struct class class_abstract_compiler__CodeWriter = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_compiler:CodeWriter:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to abstract_compiler:CodeWriter:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to abstract_compiler:CodeWriter:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_compiler:CodeWriter:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_compiler:CodeWriter:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to abstract_compiler:CodeWriter:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to abstract_compiler:CodeWriter:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_compiler:CodeWriter:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_compiler:CodeWriter:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_compiler:CodeWriter:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to abstract_compiler:CodeWriter:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to abstract_compiler:CodeWriter:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to abstract_compiler:CodeWriter:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to abstract_compiler:CodeWriter:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to abstract_compiler:CodeWriter:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_compiler:CodeWriter:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_compiler:CodeWriter:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to abstract_compiler:CodeWriter:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_compiler:CodeWriter:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_compiler:CodeWriter:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to abstract_compiler:CodeWriter:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to abstract_compiler:CodeWriter:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to abstract_compiler:CodeWriter:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to abstract_compiler:CodeWriter:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to abstract_compiler:CodeWriter:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to abstract_compiler:CodeWriter:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to abstract_compiler:CodeWriter:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to abstract_compiler:CodeWriter:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to abstract_compiler:CodeWriter:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to abstract_compiler:CodeWriter:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to abstract_compiler:CodeWriter:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to abstract_compiler:CodeWriter:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to abstract_compiler:CodeWriter:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to abstract_compiler:CodeWriter:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to abstract_compiler:CodeWriter:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to abstract_compiler:CodeWriter:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to abstract_compiler:CodeWriter:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to abstract_compiler:CodeWriter:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to abstract_compiler:CodeWriter:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to abstract_compiler:CodeWriter:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to abstract_compiler:CodeWriter:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to abstract_compiler:CodeWriter:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to abstract_compiler:CodeWriter:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to abstract_compiler:CodeWriter:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to abstract_compiler:CodeWriter:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to abstract_compiler:CodeWriter:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to abstract_compiler:CodeWriter:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to abstract_compiler:CodeWriter:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to abstract_compiler:CodeWriter:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to abstract_compiler:CodeWriter:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to abstract_compiler:CodeWriter:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__file, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#file */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__file_61d, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#file= */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__lines, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#lines */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__lines_61d, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#lines= */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__decl_lines, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#decl_lines */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__decl_lines_61d, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#decl_lines= */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__add, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#add */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__add_decl, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#add_decl */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__init, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#init */
}
};
/* allocate CodeWriter */
val* NEW_abstract_compiler__CodeWriter(const struct type* type) {
val* self /* : CodeWriter */;
val* var /* : List[String] */;
val* var1 /* : List[String] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_abstract_compiler__CodeWriter;
var = NEW_list__List(&type_list__Liststring__String);
((void (*)(val*))(var->class->vft[COLOR_list__List__init]))(var) /* init on <var:List[String]>*/;
self->attrs[COLOR_abstract_compiler__CodeWriter___64dlines].val = var; /* @lines on <self:CodeWriter exact> */
var1 = NEW_list__List(&type_list__Liststring__String);
((void (*)(val*))(var1->class->vft[COLOR_list__List__init]))(var1) /* init on <var1:List[String]>*/;
self->attrs[COLOR_abstract_compiler__CodeWriter___64ddecl_lines].val = var1; /* @decl_lines on <self:CodeWriter exact> */
return self;
}
/* runtime class abstract_compiler__RuntimeVariable */
const struct class class_abstract_compiler__RuntimeVariable = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to abstract_compiler:RuntimeVariable:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to abstract_compiler:RuntimeVariable:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to abstract_compiler:RuntimeVariable:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to abstract_compiler:RuntimeVariable:math#Object#srand */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__to_s, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_compiler:RuntimeVariable:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_compiler:RuntimeVariable:string#Object#class_name */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__inspect, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_compiler:RuntimeVariable:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_compiler:RuntimeVariable:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to abstract_compiler:RuntimeVariable:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to abstract_compiler:RuntimeVariable:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to abstract_compiler:RuntimeVariable:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to abstract_compiler:RuntimeVariable:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to abstract_compiler:RuntimeVariable:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to abstract_compiler:RuntimeVariable:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to abstract_compiler:RuntimeVariable:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to abstract_compiler:RuntimeVariable:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to abstract_compiler:RuntimeVariable:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to abstract_compiler:RuntimeVariable:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to abstract_compiler:RuntimeVariable:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to abstract_compiler:RuntimeVariable:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to abstract_compiler:RuntimeVariable:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to abstract_compiler:RuntimeVariable:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to abstract_compiler:RuntimeVariable:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to abstract_compiler:RuntimeVariable:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to abstract_compiler:RuntimeVariable:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to abstract_compiler:RuntimeVariable:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to abstract_compiler:RuntimeVariable:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to abstract_compiler:RuntimeVariable:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to abstract_compiler:RuntimeVariable:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to abstract_compiler:RuntimeVariable:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to abstract_compiler:RuntimeVariable:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to abstract_compiler:RuntimeVariable:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to abstract_compiler:RuntimeVariable:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to abstract_compiler:RuntimeVariable:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to abstract_compiler:RuntimeVariable:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to abstract_compiler:RuntimeVariable:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to abstract_compiler:RuntimeVariable:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to abstract_compiler:RuntimeVariable:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to abstract_compiler:RuntimeVariable:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__name, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#name */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__name_61d, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#name= */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__mtype, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#mtype */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__mtype_61d, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#mtype= */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__mcasttype, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#mcasttype */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__mcasttype_61d, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#mcasttype= */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__is_exact, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#is_exact */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__is_exact_61d, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#is_exact= */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__init, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#init */
}
};
/* allocate RuntimeVariable */
val* NEW_abstract_compiler__RuntimeVariable(const struct type* type) {
val* self /* : RuntimeVariable */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_abstract_compiler__RuntimeVariable;
var = 0;
self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dis_exact].s = var; /* @is_exact on <self:RuntimeVariable exact> */
return self;
}
/* runtime class abstract_compiler__Frame */
const struct class class_abstract_compiler__Frame = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_compiler:Frame:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to abstract_compiler:Frame:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to abstract_compiler:Frame:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_compiler:Frame:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_compiler:Frame:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to abstract_compiler:Frame:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to abstract_compiler:Frame:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_compiler:Frame:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_compiler:Frame:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_compiler:Frame:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to abstract_compiler:Frame:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to abstract_compiler:Frame:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to abstract_compiler:Frame:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to abstract_compiler:Frame:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to abstract_compiler:Frame:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_compiler:Frame:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_compiler:Frame:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to abstract_compiler:Frame:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_compiler:Frame:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_compiler:Frame:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to abstract_compiler:Frame:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to abstract_compiler:Frame:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to abstract_compiler:Frame:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to abstract_compiler:Frame:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to abstract_compiler:Frame:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to abstract_compiler:Frame:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to abstract_compiler:Frame:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to abstract_compiler:Frame:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to abstract_compiler:Frame:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to abstract_compiler:Frame:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to abstract_compiler:Frame:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to abstract_compiler:Frame:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to abstract_compiler:Frame:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to abstract_compiler:Frame:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to abstract_compiler:Frame:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to abstract_compiler:Frame:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to abstract_compiler:Frame:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to abstract_compiler:Frame:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to abstract_compiler:Frame:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to abstract_compiler:Frame:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to abstract_compiler:Frame:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to abstract_compiler:Frame:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to abstract_compiler:Frame:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to abstract_compiler:Frame:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to abstract_compiler:Frame:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to abstract_compiler:Frame:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to abstract_compiler:Frame:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to abstract_compiler:Frame:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to abstract_compiler:Frame:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to abstract_compiler:Frame:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to abstract_compiler:Frame:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__visitor, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#visitor */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__visitor_61d, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#visitor= */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__mpropdef, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#mpropdef */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__mpropdef_61d, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#mpropdef= */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__receiver, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#receiver */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__receiver_61d, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#receiver= */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__arguments, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#arguments */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__arguments_61d, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#arguments= */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__returnvar, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#returnvar */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__returnvar_61d, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#returnvar= */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__returnlabel, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#returnlabel */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__returnlabel_61d, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#returnlabel= */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__init, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#init */
}
};
/* allocate Frame */
val* NEW_abstract_compiler__Frame(const struct type* type) {
val* self /* : Frame */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_abstract_compiler__Frame;
var = NULL;
self->attrs[COLOR_abstract_compiler__Frame___64dreturnvar].val = var; /* @returnvar on <self:Frame exact> */
var1 = NULL;
self->attrs[COLOR_abstract_compiler__Frame___64dreturnlabel].val = var1; /* @returnlabel on <self:Frame exact> */
return self;
}
/* runtime class nitni_callbacks__VerifyNitniCallbacksPhase */
const struct class class_nitni_callbacks__VerifyNitniCallbacksPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_common_ffi__VerifyNitniCallbacksPhase__process_npropdef, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:common_ffi#VerifyNitniCallbacksPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)VIRTUAL_nitni_callbacks__VerifyNitniCallbacksPhase__process_npropdef, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:nitni_callbacks#VerifyNitniCallbacksPhase#process_npropdef */
}
};
/* allocate VerifyNitniCallbacksPhase */
val* NEW_nitni_callbacks__VerifyNitniCallbacksPhase(const struct type* type) {
val* self /* : VerifyNitniCallbacksPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitni_callbacks__VerifyNitniCallbacksPhase;
return self;
}
/* runtime class nitni_callbacks__ForeignCallbackSet */
const struct class class_nitni_callbacks__ForeignCallbackSet = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to nitni_callbacks:ForeignCallbackSet:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to nitni_callbacks:ForeignCallbackSet:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to nitni_callbacks:ForeignCallbackSet:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to nitni_callbacks:ForeignCallbackSet:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to nitni_callbacks:ForeignCallbackSet:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to nitni_callbacks:ForeignCallbackSet:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to nitni_callbacks:ForeignCallbackSet:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to nitni_callbacks:ForeignCallbackSet:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to nitni_callbacks:ForeignCallbackSet:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to nitni_callbacks:ForeignCallbackSet:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to nitni_callbacks:ForeignCallbackSet:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to nitni_callbacks:ForeignCallbackSet:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to nitni_callbacks:ForeignCallbackSet:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to nitni_callbacks:ForeignCallbackSet:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to nitni_callbacks:ForeignCallbackSet:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to nitni_callbacks:ForeignCallbackSet:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to nitni_callbacks:ForeignCallbackSet:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to nitni_callbacks:ForeignCallbackSet:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to nitni_callbacks:ForeignCallbackSet:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to nitni_callbacks:ForeignCallbackSet:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to nitni_callbacks:ForeignCallbackSet:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to nitni_callbacks:ForeignCallbackSet:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to nitni_callbacks:ForeignCallbackSet:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to nitni_callbacks:ForeignCallbackSet:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to nitni_callbacks:ForeignCallbackSet:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to nitni_callbacks:ForeignCallbackSet:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to nitni_callbacks:ForeignCallbackSet:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to nitni_callbacks:ForeignCallbackSet:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to nitni_callbacks:ForeignCallbackSet:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to nitni_callbacks:ForeignCallbackSet:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to nitni_callbacks:ForeignCallbackSet:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to nitni_callbacks:ForeignCallbackSet:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to nitni_callbacks:ForeignCallbackSet:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to nitni_callbacks:ForeignCallbackSet:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to nitni_callbacks:ForeignCallbackSet:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to nitni_callbacks:ForeignCallbackSet:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to nitni_callbacks:ForeignCallbackSet:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to nitni_callbacks:ForeignCallbackSet:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__callbacks, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#callbacks */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__callbacks_61d, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#callbacks= */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__supers, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#supers */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__supers_61d, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#supers= */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__types, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#types */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__types_61d, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#types= */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__casts, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#casts */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__casts_61d, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#casts= */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__all_cached, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#all_cached */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__all_cached_61d, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#all_cached= */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__all, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#all */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__join, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#join */
(nitmethod_t)VIRTUAL_nitni_callbacks__ForeignCallbackSet__init, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#init */
}
};
/* allocate ForeignCallbackSet */
val* NEW_nitni_callbacks__ForeignCallbackSet(const struct type* type) {
val* self /* : ForeignCallbackSet */;
val* var /* : HashSet[MExplicitCall] */;
val* var1 /* : HashSet[MExplicitSuper] */;
val* var2 /* : HashSet[MType] */;
val* var3 /* : HashSet[MExplicitCast] */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitni_callbacks__ForeignCallbackSet;
var = NEW_hash_collection__HashSet(&type_hash_collection__HashSetnitni_callbacks__MExplicitCall);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashSet__init]))(var) /* init on <var:HashSet[MExplicitCall]>*/;
self->attrs[COLOR_nitni_callbacks__ForeignCallbackSet___64dcallbacks].val = var; /* @callbacks on <self:ForeignCallbackSet exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetnitni_callbacks__MExplicitSuper);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[MExplicitSuper]>*/;
self->attrs[COLOR_nitni_callbacks__ForeignCallbackSet___64dsupers].val = var1; /* @supers on <self:ForeignCallbackSet exact> */
var2 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashSet__init]))(var2) /* init on <var2:HashSet[MType]>*/;
self->attrs[COLOR_nitni_callbacks__ForeignCallbackSet___64dtypes].val = var2; /* @types on <self:ForeignCallbackSet exact> */
var3 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetnitni_callbacks__MExplicitCast);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashSet__init]))(var3) /* init on <var3:HashSet[MExplicitCast]>*/;
self->attrs[COLOR_nitni_callbacks__ForeignCallbackSet___64dcasts].val = var3; /* @casts on <self:ForeignCallbackSet exact> */
var4 = NULL;
self->attrs[COLOR_nitni_callbacks__ForeignCallbackSet___64dall_cached].val = var4; /* @all_cached on <self:ForeignCallbackSet exact> */
return self;
}
/* runtime class nitni_callbacks__MExplicitCall */
const struct class class_nitni_callbacks__MExplicitCall = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall___61d_61d, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#sys */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall__hash, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to nitni_callbacks:MExplicitCall:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to nitni_callbacks:MExplicitCall:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to nitni_callbacks:MExplicitCall:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to nitni_callbacks:MExplicitCall:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to nitni_callbacks:MExplicitCall:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to nitni_callbacks:MExplicitCall:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to nitni_callbacks:MExplicitCall:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to nitni_callbacks:MExplicitCall:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to nitni_callbacks:MExplicitCall:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to nitni_callbacks:MExplicitCall:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to nitni_callbacks:MExplicitCall:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to nitni_callbacks:MExplicitCall:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to nitni_callbacks:MExplicitCall:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to nitni_callbacks:MExplicitCall:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to nitni_callbacks:MExplicitCall:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to nitni_callbacks:MExplicitCall:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to nitni_callbacks:MExplicitCall:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to nitni_callbacks:MExplicitCall:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to nitni_callbacks:MExplicitCall:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to nitni_callbacks:MExplicitCall:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to nitni_callbacks:MExplicitCall:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to nitni_callbacks:MExplicitCall:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to nitni_callbacks:MExplicitCall:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to nitni_callbacks:MExplicitCall:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to nitni_callbacks:MExplicitCall:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to nitni_callbacks:MExplicitCall:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to nitni_callbacks:MExplicitCall:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to nitni_callbacks:MExplicitCall:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to nitni_callbacks:MExplicitCall:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to nitni_callbacks:MExplicitCall:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to nitni_callbacks:MExplicitCall:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to nitni_callbacks:MExplicitCall:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to nitni_callbacks:MExplicitCall:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to nitni_callbacks:MExplicitCall:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to nitni_callbacks:MExplicitCall:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to nitni_callbacks:MExplicitCall:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to nitni_callbacks:MExplicitCall:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to nitni_callbacks:MExplicitCall:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to nitni_callbacks:MExplicitCall:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to nitni_callbacks:MExplicitCall:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to nitni_callbacks:MExplicitCall:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c__MExplicitCall__compile_callback_to_c, /* pointer to nitni_callbacks:MExplicitCall:c#MExplicitCall#compile_callback_to_c */
(nitmethod_t)VIRTUAL_cpp__MExplicitCall__compile_callback_to_cpp, /* pointer to nitni_callbacks:MExplicitCall:cpp#MExplicitCall#compile_callback_to_cpp */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall__recv_mtype, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#recv_mtype */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall__recv_mtype_61d, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#recv_mtype= */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall__mproperty, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#mproperty */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall__mproperty_61d, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#mproperty= */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall__from_mmodule, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#from_mmodule */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall__from_mmodule_61d, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#from_mmodule= */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall__fill_type_for, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#fill_type_for */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall__csignature, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#csignature */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCall__init, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#init */
(nitmethod_t)VIRTUAL_compiler_ffi__MExplicitCall__compile_extern_callback, /* pointer to nitni_callbacks:MExplicitCall:compiler_ffi#MExplicitCall#compile_extern_callback */
}
};
/* allocate MExplicitCall */
val* NEW_nitni_callbacks__MExplicitCall(const struct type* type) {
val* self /* : MExplicitCall */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitni_callbacks__MExplicitCall;
return self;
}
/* runtime class nitni_callbacks__MExplicitSuper */
const struct class class_nitni_callbacks__MExplicitSuper = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitSuper___61d_61d, /* pointer to nitni_callbacks:MExplicitSuper:nitni_callbacks#MExplicitSuper#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#sys */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitSuper__hash, /* pointer to nitni_callbacks:MExplicitSuper:nitni_callbacks#MExplicitSuper#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to nitni_callbacks:MExplicitSuper:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to nitni_callbacks:MExplicitSuper:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to nitni_callbacks:MExplicitSuper:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to nitni_callbacks:MExplicitSuper:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to nitni_callbacks:MExplicitSuper:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to nitni_callbacks:MExplicitSuper:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to nitni_callbacks:MExplicitSuper:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to nitni_callbacks:MExplicitSuper:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to nitni_callbacks:MExplicitSuper:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to nitni_callbacks:MExplicitSuper:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to nitni_callbacks:MExplicitSuper:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to nitni_callbacks:MExplicitSuper:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to nitni_callbacks:MExplicitSuper:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to nitni_callbacks:MExplicitSuper:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to nitni_callbacks:MExplicitSuper:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to nitni_callbacks:MExplicitSuper:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to nitni_callbacks:MExplicitSuper:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to nitni_callbacks:MExplicitSuper:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to nitni_callbacks:MExplicitSuper:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to nitni_callbacks:MExplicitSuper:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to nitni_callbacks:MExplicitSuper:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to nitni_callbacks:MExplicitSuper:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to nitni_callbacks:MExplicitSuper:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to nitni_callbacks:MExplicitSuper:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to nitni_callbacks:MExplicitSuper:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to nitni_callbacks:MExplicitSuper:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to nitni_callbacks:MExplicitSuper:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to nitni_callbacks:MExplicitSuper:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to nitni_callbacks:MExplicitSuper:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to nitni_callbacks:MExplicitSuper:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to nitni_callbacks:MExplicitSuper:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to nitni_callbacks:MExplicitSuper:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to nitni_callbacks:MExplicitSuper:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to nitni_callbacks:MExplicitSuper:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to nitni_callbacks:MExplicitSuper:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to nitni_callbacks:MExplicitSuper:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to nitni_callbacks:MExplicitSuper:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to nitni_callbacks:MExplicitSuper:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to nitni_callbacks:MExplicitSuper:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to nitni_callbacks:MExplicitSuper:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to nitni_callbacks:MExplicitSuper:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c__NitniCallback__compile_callback_to_c, /* pointer to nitni_callbacks:MExplicitSuper:c#NitniCallback#compile_callback_to_c */
(nitmethod_t)VIRTUAL_cpp__NitniCallback__compile_callback_to_cpp, /* pointer to nitni_callbacks:MExplicitSuper:cpp#NitniCallback#compile_callback_to_cpp */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitSuper__from, /* pointer to nitni_callbacks:MExplicitSuper:nitni_callbacks#MExplicitSuper#from */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitSuper__from_61d, /* pointer to nitni_callbacks:MExplicitSuper:nitni_callbacks#MExplicitSuper#from= */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitSuper__init, /* pointer to nitni_callbacks:MExplicitSuper:nitni_callbacks#MExplicitSuper#init */
(nitmethod_t)VIRTUAL_compiler_ffi__MExplicitSuper__compile_extern_callback, /* pointer to nitni_callbacks:MExplicitSuper:compiler_ffi#MExplicitSuper#compile_extern_callback */
}
};
/* allocate MExplicitSuper */
val* NEW_nitni_callbacks__MExplicitSuper(const struct type* type) {
val* self /* : MExplicitSuper */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitni_callbacks__MExplicitSuper;
return self;
}
/* runtime class nitni_callbacks__MExplicitCast */
const struct class class_nitni_callbacks__MExplicitCast = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast___61d_61d, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#sys */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast__hash, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to nitni_callbacks:MExplicitCast:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to nitni_callbacks:MExplicitCast:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to nitni_callbacks:MExplicitCast:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to nitni_callbacks:MExplicitCast:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to nitni_callbacks:MExplicitCast:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to nitni_callbacks:MExplicitCast:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to nitni_callbacks:MExplicitCast:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to nitni_callbacks:MExplicitCast:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to nitni_callbacks:MExplicitCast:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to nitni_callbacks:MExplicitCast:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to nitni_callbacks:MExplicitCast:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to nitni_callbacks:MExplicitCast:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to nitni_callbacks:MExplicitCast:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to nitni_callbacks:MExplicitCast:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to nitni_callbacks:MExplicitCast:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to nitni_callbacks:MExplicitCast:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to nitni_callbacks:MExplicitCast:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to nitni_callbacks:MExplicitCast:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to nitni_callbacks:MExplicitCast:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to nitni_callbacks:MExplicitCast:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to nitni_callbacks:MExplicitCast:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to nitni_callbacks:MExplicitCast:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to nitni_callbacks:MExplicitCast:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to nitni_callbacks:MExplicitCast:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to nitni_callbacks:MExplicitCast:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to nitni_callbacks:MExplicitCast:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to nitni_callbacks:MExplicitCast:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to nitni_callbacks:MExplicitCast:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to nitni_callbacks:MExplicitCast:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to nitni_callbacks:MExplicitCast:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to nitni_callbacks:MExplicitCast:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to nitni_callbacks:MExplicitCast:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to nitni_callbacks:MExplicitCast:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to nitni_callbacks:MExplicitCast:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to nitni_callbacks:MExplicitCast:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to nitni_callbacks:MExplicitCast:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to nitni_callbacks:MExplicitCast:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to nitni_callbacks:MExplicitCast:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to nitni_callbacks:MExplicitCast:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to nitni_callbacks:MExplicitCast:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to nitni_callbacks:MExplicitCast:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c__NitniCallback__compile_callback_to_c, /* pointer to nitni_callbacks:MExplicitCast:c#NitniCallback#compile_callback_to_c */
(nitmethod_t)VIRTUAL_cpp__NitniCallback__compile_callback_to_cpp, /* pointer to nitni_callbacks:MExplicitCast:cpp#NitniCallback#compile_callback_to_cpp */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast__from, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#from */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast__from_61d, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#from= */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast__to, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#to */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast__to_61d, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#to= */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast__check_cname, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#check_cname */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast__cast_cname, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#cast_cname */
(nitmethod_t)VIRTUAL_nitni_callbacks__MExplicitCast__init, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#init */
(nitmethod_t)VIRTUAL_compiler_ffi__MExplicitCast__compile_extern_callbacks, /* pointer to nitni_callbacks:MExplicitCast:compiler_ffi#MExplicitCast#compile_extern_callbacks */
}
};
/* allocate MExplicitCast */
val* NEW_nitni_callbacks__MExplicitCast(const struct type* type) {
val* self /* : MExplicitCast */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitni_callbacks__MExplicitCast;
return self;
}
/* runtime class nitni_utilities__CallContext */
const struct class class_nitni_utilities__CallContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to nitni_utilities:CallContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to nitni_utilities:CallContext:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to nitni_utilities:CallContext:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to nitni_utilities:CallContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to nitni_utilities:CallContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to nitni_utilities:CallContext:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to nitni_utilities:CallContext:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to nitni_utilities:CallContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to nitni_utilities:CallContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to nitni_utilities:CallContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to nitni_utilities:CallContext:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to nitni_utilities:CallContext:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to nitni_utilities:CallContext:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to nitni_utilities:CallContext:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to nitni_utilities:CallContext:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to nitni_utilities:CallContext:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to nitni_utilities:CallContext:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to nitni_utilities:CallContext:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to nitni_utilities:CallContext:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to nitni_utilities:CallContext:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to nitni_utilities:CallContext:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to nitni_utilities:CallContext:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to nitni_utilities:CallContext:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to nitni_utilities:CallContext:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to nitni_utilities:CallContext:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to nitni_utilities:CallContext:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to nitni_utilities:CallContext:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to nitni_utilities:CallContext:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to nitni_utilities:CallContext:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to nitni_utilities:CallContext:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to nitni_utilities:CallContext:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to nitni_utilities:CallContext:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to nitni_utilities:CallContext:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to nitni_utilities:CallContext:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to nitni_utilities:CallContext:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to nitni_utilities:CallContext:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to nitni_utilities:CallContext:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to nitni_utilities:CallContext:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to nitni_utilities:CallContext:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to nitni_utilities:CallContext:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to nitni_utilities:CallContext:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to nitni_utilities:CallContext:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to nitni_utilities:CallContext:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to nitni_utilities:CallContext:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to nitni_utilities:CallContext:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to nitni_utilities:CallContext:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to nitni_utilities:CallContext:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to nitni_utilities:CallContext:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to nitni_utilities:CallContext:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to nitni_utilities:CallContext:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to nitni_utilities:CallContext:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__name_mtype, /* pointer to nitni_utilities:CallContext:nitni_utilities#CallContext#name_mtype */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__cast_from, /* pointer to nitni_utilities:CallContext:nitni_utilities#CallContext#cast_from */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__cast_to, /* pointer to nitni_utilities:CallContext:nitni_utilities#CallContext#cast_to */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__init, /* pointer to nitni_utilities:CallContext:nitni_utilities#CallContext#init */
}
};
/* allocate CallContext */
val* NEW_nitni_utilities__CallContext(const struct type* type) {
val* self /* : CallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitni_utilities__CallContext;
return self;
}
/* runtime class nitni_utilities__SignatureLength */
const struct class class_nitni_utilities__SignatureLength = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to nitni_utilities:SignatureLength:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to nitni_utilities:SignatureLength:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to nitni_utilities:SignatureLength:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to nitni_utilities:SignatureLength:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to nitni_utilities:SignatureLength:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to nitni_utilities:SignatureLength:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to nitni_utilities:SignatureLength:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to nitni_utilities:SignatureLength:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to nitni_utilities:SignatureLength:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to nitni_utilities:SignatureLength:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to nitni_utilities:SignatureLength:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to nitni_utilities:SignatureLength:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to nitni_utilities:SignatureLength:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to nitni_utilities:SignatureLength:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to nitni_utilities:SignatureLength:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to nitni_utilities:SignatureLength:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to nitni_utilities:SignatureLength:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to nitni_utilities:SignatureLength:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to nitni_utilities:SignatureLength:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to nitni_utilities:SignatureLength:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to nitni_utilities:SignatureLength:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to nitni_utilities:SignatureLength:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to nitni_utilities:SignatureLength:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to nitni_utilities:SignatureLength:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to nitni_utilities:SignatureLength:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to nitni_utilities:SignatureLength:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to nitni_utilities:SignatureLength:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to nitni_utilities:SignatureLength:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to nitni_utilities:SignatureLength:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to nitni_utilities:SignatureLength:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to nitni_utilities:SignatureLength:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to nitni_utilities:SignatureLength:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to nitni_utilities:SignatureLength:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to nitni_utilities:SignatureLength:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to nitni_utilities:SignatureLength:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to nitni_utilities:SignatureLength:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to nitni_utilities:SignatureLength:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to nitni_utilities:SignatureLength:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to nitni_utilities:SignatureLength:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to nitni_utilities:SignatureLength:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to nitni_utilities:SignatureLength:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to nitni_utilities:SignatureLength:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to nitni_utilities:SignatureLength:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to nitni_utilities:SignatureLength:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to nitni_utilities:SignatureLength:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to nitni_utilities:SignatureLength:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to nitni_utilities:SignatureLength:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to nitni_utilities:SignatureLength:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to nitni_utilities:SignatureLength:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to nitni_utilities:SignatureLength:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to nitni_utilities:SignatureLength:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__SignatureLength__long, /* pointer to nitni_utilities:SignatureLength:nitni_utilities#SignatureLength#long */
(nitmethod_t)VIRTUAL_nitni_utilities__SignatureLength__long_61d, /* pointer to nitni_utilities:SignatureLength:nitni_utilities#SignatureLength#long= */
(nitmethod_t)VIRTUAL_nitni_utilities__SignatureLength__init, /* pointer to nitni_utilities:SignatureLength:nitni_utilities#SignatureLength#init */
}
};
/* allocate SignatureLength */
val* NEW_nitni_utilities__SignatureLength(const struct type* type) {
val* self /* : SignatureLength */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitni_utilities__SignatureLength;
return self;
}
/* runtime class ffi_base__FFILanguageAssignationPhase */
const struct class class_ffi_base__FFILanguageAssignationPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to ffi_base:FFILanguageAssignationPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to ffi_base:FFILanguageAssignationPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to ffi_base:FFILanguageAssignationPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to ffi_base:FFILanguageAssignationPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to ffi_base:FFILanguageAssignationPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to ffi_base:FFILanguageAssignationPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to ffi_base:FFILanguageAssignationPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to ffi_base:FFILanguageAssignationPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to ffi_base:FFILanguageAssignationPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to ffi_base:FFILanguageAssignationPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to ffi_base:FFILanguageAssignationPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to ffi_base:FFILanguageAssignationPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to ffi_base:FFILanguageAssignationPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to ffi_base:FFILanguageAssignationPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to ffi_base:FFILanguageAssignationPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to ffi_base:FFILanguageAssignationPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to ffi_base:FFILanguageAssignationPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to ffi_base:FFILanguageAssignationPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to ffi_base:FFILanguageAssignationPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to ffi_base:FFILanguageAssignationPhase:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to ffi_base:FFILanguageAssignationPhase:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to ffi_base:FFILanguageAssignationPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to ffi_base:FFILanguageAssignationPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to ffi_base:FFILanguageAssignationPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to ffi_base:FFILanguageAssignationPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to ffi_base:FFILanguageAssignationPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to ffi_base:FFILanguageAssignationPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to ffi_base:FFILanguageAssignationPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to ffi_base:FFILanguageAssignationPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to ffi_base:FFILanguageAssignationPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to ffi_base:FFILanguageAssignationPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to ffi_base:FFILanguageAssignationPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to ffi_base:FFILanguageAssignationPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to ffi_base:FFILanguageAssignationPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to ffi_base:FFILanguageAssignationPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to ffi_base:FFILanguageAssignationPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to ffi_base:FFILanguageAssignationPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to ffi_base:FFILanguageAssignationPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to ffi_base:FFILanguageAssignationPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to ffi_base:FFILanguageAssignationPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to ffi_base:FFILanguageAssignationPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to ffi_base:FFILanguageAssignationPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to ffi_base:FFILanguageAssignationPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to ffi_base:FFILanguageAssignationPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to ffi_base:FFILanguageAssignationPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to ffi_base:FFILanguageAssignationPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to ffi_base:FFILanguageAssignationPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to ffi_base:FFILanguageAssignationPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to ffi_base:FFILanguageAssignationPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to ffi_base:FFILanguageAssignationPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to ffi_base:FFILanguageAssignationPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to ffi_base:FFILanguageAssignationPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to ffi_base:FFILanguageAssignationPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to ffi_base:FFILanguageAssignationPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to ffi_base:FFILanguageAssignationPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to ffi_base:FFILanguageAssignationPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_ffi_base__FFILanguageAssignationPhase__process_nmodule, /* pointer to ffi_base:FFILanguageAssignationPhase:ffi_base#FFILanguageAssignationPhase#process_nmodule */
(nitmethod_t)VIRTUAL_ffi_base__FFILanguageAssignationPhase__process_nclassdef, /* pointer to ffi_base:FFILanguageAssignationPhase:ffi_base#FFILanguageAssignationPhase#process_nclassdef */
(nitmethod_t)VIRTUAL_ffi_base__FFILanguageAssignationPhase__process_npropdef, /* pointer to ffi_base:FFILanguageAssignationPhase:ffi_base#FFILanguageAssignationPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to ffi_base:FFILanguageAssignationPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to ffi_base:FFILanguageAssignationPhase:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)VIRTUAL_ffi_base__FFILanguageAssignationPhase__languages, /* pointer to ffi_base:FFILanguageAssignationPhase:ffi_base#FFILanguageAssignationPhase#languages */
(nitmethod_t)VIRTUAL_ffi_base__FFILanguageAssignationPhase__languages_61d, /* pointer to ffi_base:FFILanguageAssignationPhase:ffi_base#FFILanguageAssignationPhase#languages= */
(nitmethod_t)VIRTUAL_ffi_base__FFILanguageAssignationPhase__verify_foreign_code_on_node, /* pointer to ffi_base:FFILanguageAssignationPhase:ffi_base#FFILanguageAssignationPhase#verify_foreign_code_on_node */
(nitmethod_t)VIRTUAL_c__FFILanguageAssignationPhase__c_language, /* pointer to ffi_base:FFILanguageAssignationPhase:c#FFILanguageAssignationPhase#c_language */
(nitmethod_t)VIRTUAL_c__FFILanguageAssignationPhase__c_language_61d, /* pointer to ffi_base:FFILanguageAssignationPhase:c#FFILanguageAssignationPhase#c_language= */
(nitmethod_t)VIRTUAL_cpp__FFILanguageAssignationPhase__cpp_language, /* pointer to ffi_base:FFILanguageAssignationPhase:cpp#FFILanguageAssignationPhase#cpp_language */
(nitmethod_t)VIRTUAL_cpp__FFILanguageAssignationPhase__cpp_language_61d, /* pointer to ffi_base:FFILanguageAssignationPhase:cpp#FFILanguageAssignationPhase#cpp_language= */
}
};
/* allocate FFILanguageAssignationPhase */
val* NEW_ffi_base__FFILanguageAssignationPhase(const struct type* type) {
val* self /* : FFILanguageAssignationPhase */;
val* var /* : Array[FFILanguage] */;
val* var1 /* : CLanguage */;
val* var2 /* : CPPLanguage */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_ffi_base__FFILanguageAssignationPhase;
var = NEW_array__Array(&type_array__Arrayffi_base__FFILanguage);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[FFILanguage]>*/;
self->attrs[COLOR_ffi_base__FFILanguageAssignationPhase___64dlanguages].val = var; /* @languages on <self:FFILanguageAssignationPhase exact> */
var1 = NEW_c__CLanguage(&type_c__CLanguage);
((void (*)(val*, val*))(var1->class->vft[COLOR_ffi_base__FFILanguage__init]))(var1, self) /* init on <var1:CLanguage>*/;
self->attrs[COLOR_c__FFILanguageAssignationPhase___64dc_language].val = var1; /* @c_language on <self:FFILanguageAssignationPhase exact> */
var2 = NEW_cpp__CPPLanguage(&type_cpp__CPPLanguage);
((void (*)(val*, val*))(var2->class->vft[COLOR_ffi_base__FFILanguage__init]))(var2, self) /* init on <var2:CPPLanguage>*/;
self->attrs[COLOR_cpp__FFILanguageAssignationPhase___64dcpp_language].val = var2; /* @cpp_language on <self:FFILanguageAssignationPhase exact> */
return self;
}
/* runtime class ffi_base__FFILanguage */
/* allocate FFILanguage */
val* NEW_ffi_base__FFILanguage(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "FFILanguage is DEAD");
fprintf(stderr, "\n");
show_backtrace(1);
}
/* runtime class ffi_base__ExternFile */
/* allocate ExternFile */
val* NEW_ffi_base__ExternFile(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "ExternFile is DEAD");
fprintf(stderr, "\n");
show_backtrace(1);
}
/* runtime class ffi_base__ForeignType */
const struct class class_ffi_base__ForeignType = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to ffi_base:ForeignType:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to ffi_base:ForeignType:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to ffi_base:ForeignType:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to ffi_base:ForeignType:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to ffi_base:ForeignType:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to ffi_base:ForeignType:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to ffi_base:ForeignType:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to ffi_base:ForeignType:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to ffi_base:ForeignType:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to ffi_base:ForeignType:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to ffi_base:ForeignType:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to ffi_base:ForeignType:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to ffi_base:ForeignType:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to ffi_base:ForeignType:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to ffi_base:ForeignType:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to ffi_base:ForeignType:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to ffi_base:ForeignType:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to ffi_base:ForeignType:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to ffi_base:ForeignType:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to ffi_base:ForeignType:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to ffi_base:ForeignType:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to ffi_base:ForeignType:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to ffi_base:ForeignType:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to ffi_base:ForeignType:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to ffi_base:ForeignType:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to ffi_base:ForeignType:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to ffi_base:ForeignType:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to ffi_base:ForeignType:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to ffi_base:ForeignType:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to ffi_base:ForeignType:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to ffi_base:ForeignType:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to ffi_base:ForeignType:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to ffi_base:ForeignType:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to ffi_base:ForeignType:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to ffi_base:ForeignType:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to ffi_base:ForeignType:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to ffi_base:ForeignType:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to ffi_base:ForeignType:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to ffi_base:ForeignType:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to ffi_base:ForeignType:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to ffi_base:ForeignType:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to ffi_base:ForeignType:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to ffi_base:ForeignType:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to ffi_base:ForeignType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to ffi_base:ForeignType:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to ffi_base:ForeignType:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to ffi_base:ForeignType:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to ffi_base:ForeignType:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to ffi_base:ForeignType:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to ffi_base:ForeignType:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to ffi_base:ForeignType:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_ffi_base__ForeignType__ctype, /* pointer to ffi_base:ForeignType:ffi_base#ForeignType#ctype */
(nitmethod_t)VIRTUAL_ffi_base__ForeignType__init, /* pointer to ffi_base:ForeignType:ffi_base#ForeignType#init */
}
};
/* allocate ForeignType */
val* NEW_ffi_base__ForeignType(const struct type* type) {
val* self /* : ForeignType */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_ffi_base__ForeignType;
return self;
}
/* runtime class c_tools__CCompilationUnit */
const struct class class_c_tools__CCompilationUnit = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c_tools:CCompilationUnit:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to c_tools:CCompilationUnit:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c_tools:CCompilationUnit:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to c_tools:CCompilationUnit:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c_tools:CCompilationUnit:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to c_tools:CCompilationUnit:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to c_tools:CCompilationUnit:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c_tools:CCompilationUnit:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c_tools:CCompilationUnit:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to c_tools:CCompilationUnit:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to c_tools:CCompilationUnit:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to c_tools:CCompilationUnit:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to c_tools:CCompilationUnit:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to c_tools:CCompilationUnit:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c_tools:CCompilationUnit:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c_tools:CCompilationUnit:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c_tools:CCompilationUnit:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c_tools:CCompilationUnit:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c_tools:CCompilationUnit:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c_tools:CCompilationUnit:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to c_tools:CCompilationUnit:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to c_tools:CCompilationUnit:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to c_tools:CCompilationUnit:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c_tools:CCompilationUnit:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c_tools:CCompilationUnit:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c_tools:CCompilationUnit:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to c_tools:CCompilationUnit:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to c_tools:CCompilationUnit:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c_tools:CCompilationUnit:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c_tools:CCompilationUnit:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to c_tools:CCompilationUnit:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to c_tools:CCompilationUnit:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to c_tools:CCompilationUnit:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c_tools:CCompilationUnit:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c_tools:CCompilationUnit:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c_tools:CCompilationUnit:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c_tools:CCompilationUnit:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c_tools:CCompilationUnit:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c_tools:CCompilationUnit:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c_tools:CCompilationUnit:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c_tools:CCompilationUnit:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c_tools:CCompilationUnit:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c_tools:CCompilationUnit:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to c_tools:CCompilationUnit:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to c_tools:CCompilationUnit:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to c_tools:CCompilationUnit:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to c_tools:CCompilationUnit:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to c_tools:CCompilationUnit:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to c_tools:CCompilationUnit:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to c_tools:CCompilationUnit:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to c_tools:CCompilationUnit:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_c_base, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#header_c_base */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_c_base_61d, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#header_c_base= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_custom, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#header_custom */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_custom_61d, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#header_custom= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_c_types, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#header_c_types */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_c_types_61d, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#header_c_types= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_decl, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#header_decl */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_decl_61d, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#header_decl= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_decl, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#body_decl */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_decl_61d, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#body_decl= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_custom, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#body_custom */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_custom_61d, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#body_custom= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_impl, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#body_impl */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_impl_61d, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#body_impl= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__files, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#files */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__files_61d, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#files= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__add_local_function, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#add_local_function */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__add_exported_function, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#add_exported_function */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__compile_header_core, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#compile_header_core */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__compile_body_core, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#compile_body_core */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__init, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#init */
(nitmethod_t)VIRTUAL_ffi_base__CCompilationUnit__write_as_impl, /* pointer to c_tools:CCompilationUnit:ffi_base#CCompilationUnit#write_as_impl */
(nitmethod_t)VIRTUAL_ffi_base__CCompilationUnit__write_header_to_file, /* pointer to c_tools:CCompilationUnit:ffi_base#CCompilationUnit#write_header_to_file */
(nitmethod_t)VIRTUAL_ffi_base__CCompilationUnit__write_body_to_file, /* pointer to c_tools:CCompilationUnit:ffi_base#CCompilationUnit#write_body_to_file */
(nitmethod_t)VIRTUAL_compiler_ffi__CCompilationUnit__write_as_nitni, /* pointer to c_tools:CCompilationUnit:compiler_ffi#CCompilationUnit#write_as_nitni */
}
};
/* allocate CCompilationUnit */
val* NEW_c_tools__CCompilationUnit(const struct type* type) {
val* self /* : CCompilationUnit */;
val* var /* : Template */;
val* var1 /* : Template */;
val* var2 /* : Template */;
val* var3 /* : Template */;
val* var4 /* : Template */;
val* var5 /* : Template */;
val* var6 /* : Template */;
val* var7 /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c_tools__CCompilationUnit;
var = NEW_template__Template(&type_template__Template);
((void (*)(val*))(var->class->vft[COLOR_template__Template__init]))(var) /* init on <var:Template>*/;
self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_c_base].val = var; /* @header_c_base on <self:CCompilationUnit exact> */
var1 = NEW_template__Template(&type_template__Template);
((void (*)(val*))(var1->class->vft[COLOR_template__Template__init]))(var1) /* init on <var1:Template>*/;
self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_custom].val = var1; /* @header_custom on <self:CCompilationUnit exact> */
var2 = NEW_template__Template(&type_template__Template);
((void (*)(val*))(var2->class->vft[COLOR_template__Template__init]))(var2) /* init on <var2:Template>*/;
self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_c_types].val = var2; /* @header_c_types on <self:CCompilationUnit exact> */
var3 = NEW_template__Template(&type_template__Template);
((void (*)(val*))(var3->class->vft[COLOR_template__Template__init]))(var3) /* init on <var3:Template>*/;
self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_decl].val = var3; /* @header_decl on <self:CCompilationUnit exact> */
var4 = NEW_template__Template(&type_template__Template);
((void (*)(val*))(var4->class->vft[COLOR_template__Template__init]))(var4) /* init on <var4:Template>*/;
self->attrs[COLOR_c_tools__CCompilationUnit___64dbody_decl].val = var4; /* @body_decl on <self:CCompilationUnit exact> */
var5 = NEW_template__Template(&type_template__Template);
((void (*)(val*))(var5->class->vft[COLOR_template__Template__init]))(var5) /* init on <var5:Template>*/;
self->attrs[COLOR_c_tools__CCompilationUnit___64dbody_custom].val = var5; /* @body_custom on <self:CCompilationUnit exact> */
var6 = NEW_template__Template(&type_template__Template);
((void (*)(val*))(var6->class->vft[COLOR_template__Template__init]))(var6) /* init on <var6:Template>*/;
self->attrs[COLOR_c_tools__CCompilationUnit___64dbody_impl].val = var6; /* @body_impl on <self:CCompilationUnit exact> */
var7 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[String]>*/;
self->attrs[COLOR_c_tools__CCompilationUnit___64dfiles].val = var7; /* @files on <self:CCompilationUnit exact> */
return self;
}
/* runtime class c_tools__CFunction */
const struct class class_c_tools__CFunction = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c_tools:CFunction:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to c_tools:CFunction:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c_tools:CFunction:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to c_tools:CFunction:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c_tools:CFunction:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to c_tools:CFunction:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to c_tools:CFunction:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c_tools:CFunction:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c_tools:CFunction:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to c_tools:CFunction:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to c_tools:CFunction:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to c_tools:CFunction:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to c_tools:CFunction:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to c_tools:CFunction:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c_tools:CFunction:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c_tools:CFunction:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c_tools:CFunction:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c_tools:CFunction:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c_tools:CFunction:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c_tools:CFunction:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to c_tools:CFunction:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to c_tools:CFunction:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to c_tools:CFunction:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c_tools:CFunction:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c_tools:CFunction:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c_tools:CFunction:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to c_tools:CFunction:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to c_tools:CFunction:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c_tools:CFunction:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c_tools:CFunction:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to c_tools:CFunction:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to c_tools:CFunction:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to c_tools:CFunction:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c_tools:CFunction:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c_tools:CFunction:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c_tools:CFunction:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c_tools:CFunction:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c_tools:CFunction:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c_tools:CFunction:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c_tools:CFunction:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c_tools:CFunction:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c_tools:CFunction:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c_tools:CFunction:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to c_tools:CFunction:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to c_tools:CFunction:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to c_tools:CFunction:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to c_tools:CFunction:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to c_tools:CFunction:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to c_tools:CFunction:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to c_tools:CFunction:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to c_tools:CFunction:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c_tools__CFunction__signature, /* pointer to c_tools:CFunction:c_tools#CFunction#signature */
(nitmethod_t)VIRTUAL_c_tools__CFunction__signature_61d, /* pointer to c_tools:CFunction:c_tools#CFunction#signature= */
(nitmethod_t)VIRTUAL_c_tools__CFunction__decls, /* pointer to c_tools:CFunction:c_tools#CFunction#decls */
(nitmethod_t)VIRTUAL_c_tools__CFunction__decls_61d, /* pointer to c_tools:CFunction:c_tools#CFunction#decls= */
(nitmethod_t)VIRTUAL_c_tools__CFunction__exprs, /* pointer to c_tools:CFunction:c_tools#CFunction#exprs */
(nitmethod_t)VIRTUAL_c_tools__CFunction__exprs_61d, /* pointer to c_tools:CFunction:c_tools#CFunction#exprs= */
(nitmethod_t)VIRTUAL_c_tools__CFunction__to_writer, /* pointer to c_tools:CFunction:c_tools#CFunction#to_writer */
(nitmethod_t)VIRTUAL_c_tools__CFunction__init, /* pointer to c_tools:CFunction:c_tools#CFunction#init */
}
};
/* allocate CFunction */
val* NEW_c_tools__CFunction(const struct type* type) {
val* self /* : CFunction */;
val* var /* : Template */;
val* var1 /* : Template */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c_tools__CFunction;
var = NEW_template__Template(&type_template__Template);
((void (*)(val*))(var->class->vft[COLOR_template__Template__init]))(var) /* init on <var:Template>*/;
self->attrs[COLOR_c_tools__CFunction___64ddecls].val = var; /* @decls on <self:CFunction exact> */
var1 = NEW_template__Template(&type_template__Template);
((void (*)(val*))(var1->class->vft[COLOR_template__Template__init]))(var1) /* init on <var1:Template>*/;
self->attrs[COLOR_c_tools__CFunction___64dexprs].val = var1; /* @exprs on <self:CFunction exact> */
return self;
}
/* runtime class template__Template */
const struct class class_template__Template = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to template:Template:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to template:Template:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to template:Template:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to template:Template:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to template:Template:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to template:Template:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to template:Template:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to template:Template:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to template:Template:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to template:Template:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to template:Template:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to template:Template:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to template:Template:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to template:Template:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to template:Template:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to template:Template:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to template:Template:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to template:Template:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to template:Template:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to template:Template:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to template:Template:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to template:Template:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to template:Template:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to template:Template:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to template:Template:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to template:Template:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to template:Template:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to template:Template:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to template:Template:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to template:Template:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to template:Template:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to template:Template:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to template:Template:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to template:Template:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to template:Template:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to template:Template:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to template:Template:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to template:Template:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to template:Template:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to template:Template:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to template:Template:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to template:Template:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to template:Template:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to template:Template:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to template:Template:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to template:Template:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to template:Template:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to template:Template:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to template:Template:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to template:Template:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to template:Template:cpp#Object#from_cpp_call_context */
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
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_template__Template__write_to, /* pointer to template:Template:template#Template#write_to */
(nitmethod_t)VIRTUAL_template__Template__rendering, /* pointer to template:Template:template#Template#rendering */
(nitmethod_t)VIRTUAL_template__Template__add, /* pointer to template:Template:template#Template#add */
(nitmethod_t)VIRTUAL_template__Template__add_all, /* pointer to template:Template:template#Template#add_all */
(nitmethod_t)VIRTUAL_template__Template__add_list, /* pointer to template:Template:template#Template#add_list */
(nitmethod_t)VIRTUAL_template__Template__is_frozen, /* pointer to template:Template:template#Template#is_frozen */
(nitmethod_t)VIRTUAL_template__Template__is_frozen_61d, /* pointer to template:Template:template#Template#is_frozen= */
(nitmethod_t)VIRTUAL_template__Template__freeze, /* pointer to template:Template:template#Template#freeze */
(nitmethod_t)VIRTUAL_template__Template__new_sub, /* pointer to template:Template:template#Template#new_sub */
(nitmethod_t)VIRTUAL_template__Template__content, /* pointer to template:Template:template#Template#content */
(nitmethod_t)VIRTUAL_template__Template__content_61d, /* pointer to template:Template:template#Template#content= */
(nitmethod_t)VIRTUAL_template__Template__render_done, /* pointer to template:Template:template#Template#render_done */
(nitmethod_t)VIRTUAL_template__Template__render_done_61d, /* pointer to template:Template:template#Template#render_done= */
(nitmethod_t)VIRTUAL_template__Template__force_render, /* pointer to template:Template:template#Template#force_render */
(nitmethod_t)VIRTUAL_template__Template__is_writing, /* pointer to template:Template:template#Template#is_writing */
(nitmethod_t)VIRTUAL_template__Template__is_writing_61d, /* pointer to template:Template:template#Template#is_writing= */
(nitmethod_t)VIRTUAL_template__Template__write_to_string, /* pointer to template:Template:template#Template#write_to_string */
(nitmethod_t)VIRTUAL_template__Template__write_to_file, /* pointer to template:Template:template#Template#write_to_file */
(nitmethod_t)VIRTUAL_template__Template__init, /* pointer to template:Template:template#Template#init */
}
};
/* allocate Template */
val* NEW_template__Template(const struct type* type) {
val* self /* : Template */;
short int var /* : Bool */;
val* var1 /* : Array[Streamable] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_template__Template;
var = 0;
self->attrs[COLOR_template__Template___64dis_frozen].s = var; /* @is_frozen on <self:Template exact> */
var1 = NEW_array__Array(&type_array__Arraystream__Streamable);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[Streamable]>*/;
self->attrs[COLOR_template__Template___64dcontent].val = var1; /* @content on <self:Template exact> */
var2 = 0;
self->attrs[COLOR_template__Template___64drender_done].s = var2; /* @render_done on <self:Template exact> */
var3 = 0;
self->attrs[COLOR_template__Template___64dis_writing].s = var3; /* @is_writing on <self:Template exact> */
return self;
}
/* runtime class extern_classes__ExternClassesTypingPhaseAst */
const struct class class_extern_classes__ExternClassesTypingPhaseAst = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to extern_classes:ExternClassesTypingPhaseAst:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to extern_classes:ExternClassesTypingPhaseAst:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to extern_classes:ExternClassesTypingPhaseAst:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to extern_classes:ExternClassesTypingPhaseAst:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to extern_classes:ExternClassesTypingPhaseAst:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to extern_classes:ExternClassesTypingPhaseAst:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to extern_classes:ExternClassesTypingPhaseAst:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to extern_classes:ExternClassesTypingPhaseAst:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to extern_classes:ExternClassesTypingPhaseAst:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to extern_classes:ExternClassesTypingPhaseAst:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to extern_classes:ExternClassesTypingPhaseAst:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to extern_classes:ExternClassesTypingPhaseAst:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to extern_classes:ExternClassesTypingPhaseAst:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to extern_classes:ExternClassesTypingPhaseAst:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to extern_classes:ExternClassesTypingPhaseAst:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to extern_classes:ExternClassesTypingPhaseAst:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to extern_classes:ExternClassesTypingPhaseAst:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to extern_classes:ExternClassesTypingPhaseAst:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to extern_classes:ExternClassesTypingPhaseAst:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to extern_classes:ExternClassesTypingPhaseAst:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to extern_classes:ExternClassesTypingPhaseAst:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to extern_classes:ExternClassesTypingPhaseAst:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to extern_classes:ExternClassesTypingPhaseAst:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to extern_classes:ExternClassesTypingPhaseAst:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to extern_classes:ExternClassesTypingPhaseAst:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to extern_classes:ExternClassesTypingPhaseAst:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to extern_classes:ExternClassesTypingPhaseAst:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to extern_classes:ExternClassesTypingPhaseAst:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to extern_classes:ExternClassesTypingPhaseAst:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to extern_classes:ExternClassesTypingPhaseAst:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to extern_classes:ExternClassesTypingPhaseAst:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to extern_classes:ExternClassesTypingPhaseAst:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to extern_classes:ExternClassesTypingPhaseAst:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseAst:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to extern_classes:ExternClassesTypingPhaseAst:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to extern_classes:ExternClassesTypingPhaseAst:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseAst:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseAst:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseAst:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseAst:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseAst:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_extern_classes__ExternClassesTypingPhaseAst__process_nclassdef, /* pointer to extern_classes:ExternClassesTypingPhaseAst:extern_classes#ExternClassesTypingPhaseAst#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to extern_classes:ExternClassesTypingPhaseAst:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate ExternClassesTypingPhaseAst */
val* NEW_extern_classes__ExternClassesTypingPhaseAst(const struct type* type) {
val* self /* : ExternClassesTypingPhaseAst */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_extern_classes__ExternClassesTypingPhaseAst;
return self;
}
/* runtime class extern_classes__ExternClassesTypingPhaseModel */
const struct class class_extern_classes__ExternClassesTypingPhaseModel = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to extern_classes:ExternClassesTypingPhaseModel:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to extern_classes:ExternClassesTypingPhaseModel:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to extern_classes:ExternClassesTypingPhaseModel:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to extern_classes:ExternClassesTypingPhaseModel:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to extern_classes:ExternClassesTypingPhaseModel:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to extern_classes:ExternClassesTypingPhaseModel:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to extern_classes:ExternClassesTypingPhaseModel:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to extern_classes:ExternClassesTypingPhaseModel:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to extern_classes:ExternClassesTypingPhaseModel:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to extern_classes:ExternClassesTypingPhaseModel:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to extern_classes:ExternClassesTypingPhaseModel:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to extern_classes:ExternClassesTypingPhaseModel:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to extern_classes:ExternClassesTypingPhaseModel:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to extern_classes:ExternClassesTypingPhaseModel:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to extern_classes:ExternClassesTypingPhaseModel:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to extern_classes:ExternClassesTypingPhaseModel:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to extern_classes:ExternClassesTypingPhaseModel:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to extern_classes:ExternClassesTypingPhaseModel:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to extern_classes:ExternClassesTypingPhaseModel:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to extern_classes:ExternClassesTypingPhaseModel:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to extern_classes:ExternClassesTypingPhaseModel:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to extern_classes:ExternClassesTypingPhaseModel:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to extern_classes:ExternClassesTypingPhaseModel:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to extern_classes:ExternClassesTypingPhaseModel:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to extern_classes:ExternClassesTypingPhaseModel:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to extern_classes:ExternClassesTypingPhaseModel:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to extern_classes:ExternClassesTypingPhaseModel:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to extern_classes:ExternClassesTypingPhaseModel:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to extern_classes:ExternClassesTypingPhaseModel:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to extern_classes:ExternClassesTypingPhaseModel:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to extern_classes:ExternClassesTypingPhaseModel:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to extern_classes:ExternClassesTypingPhaseModel:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to extern_classes:ExternClassesTypingPhaseModel:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseModel:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to extern_classes:ExternClassesTypingPhaseModel:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to extern_classes:ExternClassesTypingPhaseModel:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseModel:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseModel:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseModel:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseModel:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseModel:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_extern_classes__ExternClassesTypingPhaseModel__process_nclassdef, /* pointer to extern_classes:ExternClassesTypingPhaseModel:extern_classes#ExternClassesTypingPhaseModel#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to extern_classes:ExternClassesTypingPhaseModel:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate ExternClassesTypingPhaseModel */
val* NEW_extern_classes__ExternClassesTypingPhaseModel(const struct type* type) {
val* self /* : ExternClassesTypingPhaseModel */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_extern_classes__ExternClassesTypingPhaseModel;
return self;
}
/* runtime class header_dependency__HeaderDependancyPhase */
const struct class class_header_dependency__HeaderDependancyPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to header_dependency:HeaderDependancyPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to header_dependency:HeaderDependancyPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to header_dependency:HeaderDependancyPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to header_dependency:HeaderDependancyPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to header_dependency:HeaderDependancyPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to header_dependency:HeaderDependancyPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to header_dependency:HeaderDependancyPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to header_dependency:HeaderDependancyPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to header_dependency:HeaderDependancyPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to header_dependency:HeaderDependancyPhase:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to header_dependency:HeaderDependancyPhase:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to header_dependency:HeaderDependancyPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to header_dependency:HeaderDependancyPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to header_dependency:HeaderDependancyPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to header_dependency:HeaderDependancyPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to header_dependency:HeaderDependancyPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to header_dependency:HeaderDependancyPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to header_dependency:HeaderDependancyPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to header_dependency:HeaderDependancyPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to header_dependency:HeaderDependancyPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to header_dependency:HeaderDependancyPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to header_dependency:HeaderDependancyPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to header_dependency:HeaderDependancyPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to header_dependency:HeaderDependancyPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to header_dependency:HeaderDependancyPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to header_dependency:HeaderDependancyPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to header_dependency:HeaderDependancyPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to header_dependency:HeaderDependancyPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to header_dependency:HeaderDependancyPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to header_dependency:HeaderDependancyPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to header_dependency:HeaderDependancyPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to header_dependency:HeaderDependancyPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to header_dependency:HeaderDependancyPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to header_dependency:HeaderDependancyPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to header_dependency:HeaderDependancyPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to header_dependency:HeaderDependancyPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to header_dependency:HeaderDependancyPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to header_dependency:HeaderDependancyPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to header_dependency:HeaderDependancyPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to header_dependency:HeaderDependancyPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to header_dependency:HeaderDependancyPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_header_dependency__HeaderDependancyPhase__process_nmodule, /* pointer to header_dependency:HeaderDependancyPhase:header_dependency#HeaderDependancyPhase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to header_dependency:HeaderDependancyPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate HeaderDependancyPhase */
val* NEW_header_dependency__HeaderDependancyPhase(const struct type* type) {
val* self /* : HeaderDependancyPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_header_dependency__HeaderDependancyPhase;
return self;
}
/* runtime class c__CLanguage */
const struct class class_c__CLanguage = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c:CLanguage:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to c:CLanguage:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c:CLanguage:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to c:CLanguage:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c:CLanguage:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to c:CLanguage:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to c:CLanguage:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c:CLanguage:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c:CLanguage:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to c:CLanguage:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to c:CLanguage:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to c:CLanguage:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to c:CLanguage:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to c:CLanguage:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c:CLanguage:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c:CLanguage:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c:CLanguage:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c:CLanguage:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c:CLanguage:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c:CLanguage:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to c:CLanguage:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to c:CLanguage:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to c:CLanguage:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c:CLanguage:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c:CLanguage:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c:CLanguage:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to c:CLanguage:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to c:CLanguage:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c:CLanguage:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c:CLanguage:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to c:CLanguage:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to c:CLanguage:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to c:CLanguage:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c:CLanguage:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c:CLanguage:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c:CLanguage:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c:CLanguage:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c:CLanguage:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c:CLanguage:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c:CLanguage:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c:CLanguage:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c:CLanguage:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c:CLanguage:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to c:CLanguage:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to c:CLanguage:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to c:CLanguage:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to c:CLanguage:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to c:CLanguage:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to c:CLanguage:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to c:CLanguage:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to c:CLanguage:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_ffi_base__FFILanguage__init, /* pointer to c:CLanguage:ffi_base#FFILanguage#init */
(nitmethod_t)VIRTUAL_c__CLanguage__identify_language, /* pointer to c:CLanguage:c#CLanguage#identify_language */
(nitmethod_t)VIRTUAL_c__CLanguage__compile_module_block, /* pointer to c:CLanguage:c#CLanguage#compile_module_block */
(nitmethod_t)VIRTUAL_c__CLanguage__compile_extern_method, /* pointer to c:CLanguage:c#CLanguage#compile_extern_method */
(nitmethod_t)VIRTUAL_c__CLanguage__compile_extern_class, /* pointer to c:CLanguage:c#CLanguage#compile_extern_class */
(nitmethod_t)VIRTUAL_c__CLanguage__get_ftype, /* pointer to c:CLanguage:c#CLanguage#get_ftype */
(nitmethod_t)VIRTUAL_c__CLanguage__compile_callback, /* pointer to c:CLanguage:c#CLanguage#compile_callback */
(nitmethod_t)VIRTUAL_ffi_base__FFILanguage__compile_to_files, /* pointer to c:CLanguage:ffi_base#FFILanguage#compile_to_files */
}
};
/* allocate CLanguage */
val* NEW_c__CLanguage(const struct type* type) {
val* self /* : CLanguage */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c__CLanguage;
return self;
}
/* runtime class c__ExternCFile */
const struct class class_c__ExternCFile = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c:ExternCFile:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to c:ExternCFile:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c:ExternCFile:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_c__ExternCFile___61d_61d, /* pointer to c:ExternCFile:c#ExternCFile#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c:ExternCFile:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to c:ExternCFile:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to c:ExternCFile:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c:ExternCFile:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c:ExternCFile:kernel#Object#sys */
(nitmethod_t)VIRTUAL_c__ExternCFile__hash, /* pointer to c:ExternCFile:c#ExternCFile#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to c:ExternCFile:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to c:ExternCFile:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to c:ExternCFile:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to c:ExternCFile:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c:ExternCFile:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c:ExternCFile:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c:ExternCFile:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c:ExternCFile:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c:ExternCFile:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c:ExternCFile:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to c:ExternCFile:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to c:ExternCFile:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to c:ExternCFile:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c:ExternCFile:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c:ExternCFile:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c:ExternCFile:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to c:ExternCFile:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to c:ExternCFile:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c:ExternCFile:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c:ExternCFile:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to c:ExternCFile:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to c:ExternCFile:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to c:ExternCFile:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c:ExternCFile:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c:ExternCFile:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c:ExternCFile:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c:ExternCFile:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c:ExternCFile:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c:ExternCFile:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c:ExternCFile:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c:ExternCFile:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c:ExternCFile:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c:ExternCFile:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to c:ExternCFile:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to c:ExternCFile:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to c:ExternCFile:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to c:ExternCFile:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to c:ExternCFile:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to c:ExternCFile:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to c:ExternCFile:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to c:ExternCFile:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_ffi_base__ExternFile__filename, /* pointer to c:ExternCFile:ffi_base#ExternFile#filename */
(nitmethod_t)VIRTUAL_ffi_base__ExternFile__filename_61d, /* pointer to c:ExternCFile:ffi_base#ExternFile#filename= */
(nitmethod_t)VIRTUAL_ffi_base__ExternFile__makefile_rule_name, /* pointer to c:ExternCFile:ffi_base#ExternFile#makefile_rule_name */
(nitmethod_t)VIRTUAL_ffi_base__ExternFile__makefile_rule_content, /* pointer to c:ExternCFile:ffi_base#ExternFile#makefile_rule_content */
(nitmethod_t)VIRTUAL_ffi_base__ExternFile__init, /* pointer to c:ExternCFile:ffi_base#ExternFile#init */
(nitmethod_t)VIRTUAL_c__ExternCFile__init, /* pointer to c:ExternCFile:c#ExternCFile#init */
(nitmethod_t)VIRTUAL_c__ExternCFile__cflags, /* pointer to c:ExternCFile:c#ExternCFile#cflags */
(nitmethod_t)VIRTUAL_c__ExternCFile__cflags_61d, /* pointer to c:ExternCFile:c#ExternCFile#cflags= */
}
};
/* allocate ExternCFile */
val* NEW_c__ExternCFile(const struct type* type) {
val* self /* : ExternCFile */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c__ExternCFile;
return self;
}
/* runtime class c__ForeignCType */
const struct class class_c__ForeignCType = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c:ForeignCType:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to c:ForeignCType:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c:ForeignCType:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to c:ForeignCType:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c:ForeignCType:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to c:ForeignCType:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to c:ForeignCType:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c:ForeignCType:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c:ForeignCType:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to c:ForeignCType:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to c:ForeignCType:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to c:ForeignCType:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to c:ForeignCType:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to c:ForeignCType:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c:ForeignCType:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c:ForeignCType:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c:ForeignCType:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c:ForeignCType:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c:ForeignCType:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c:ForeignCType:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to c:ForeignCType:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to c:ForeignCType:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to c:ForeignCType:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c:ForeignCType:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c:ForeignCType:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c:ForeignCType:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to c:ForeignCType:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to c:ForeignCType:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c:ForeignCType:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c:ForeignCType:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to c:ForeignCType:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to c:ForeignCType:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to c:ForeignCType:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c:ForeignCType:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c:ForeignCType:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c:ForeignCType:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c:ForeignCType:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c:ForeignCType:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c:ForeignCType:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c:ForeignCType:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c:ForeignCType:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c:ForeignCType:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c:ForeignCType:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to c:ForeignCType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to c:ForeignCType:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to c:ForeignCType:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to c:ForeignCType:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to c:ForeignCType:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to c:ForeignCType:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to c:ForeignCType:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to c:ForeignCType:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c__ForeignCType__ctype, /* pointer to c:ForeignCType:c#ForeignCType#ctype */
(nitmethod_t)VIRTUAL_ffi_base__ForeignType__init, /* pointer to c:ForeignCType:ffi_base#ForeignType#init */
(nitmethod_t)VIRTUAL_c__ForeignCType__ctype_61d, /* pointer to c:ForeignCType:c#ForeignCType#ctype= */
(nitmethod_t)VIRTUAL_c__ForeignCType__init, /* pointer to c:ForeignCType:c#ForeignCType#init */
}
};
/* allocate ForeignCType */
val* NEW_c__ForeignCType(const struct type* type) {
val* self /* : ForeignCType */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c__ForeignCType;
return self;
}
/* runtime class c__ToCCallContext */
/* allocate ToCCallContext */
val* NEW_c__ToCCallContext(const struct type* type) {
fprintf(stderr, "Runtime error: %s", "ToCCallContext is DEAD");
fprintf(stderr, "\n");
show_backtrace(1);
}
/* runtime class c__FromCCallContext */
const struct class class_c__FromCCallContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c:FromCCallContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to c:FromCCallContext:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c:FromCCallContext:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to c:FromCCallContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c:FromCCallContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to c:FromCCallContext:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to c:FromCCallContext:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c:FromCCallContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c:FromCCallContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to c:FromCCallContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to c:FromCCallContext:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to c:FromCCallContext:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to c:FromCCallContext:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to c:FromCCallContext:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c:FromCCallContext:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c:FromCCallContext:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c:FromCCallContext:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c:FromCCallContext:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c:FromCCallContext:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c:FromCCallContext:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to c:FromCCallContext:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to c:FromCCallContext:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to c:FromCCallContext:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c:FromCCallContext:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c:FromCCallContext:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c:FromCCallContext:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to c:FromCCallContext:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to c:FromCCallContext:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c:FromCCallContext:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c:FromCCallContext:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to c:FromCCallContext:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to c:FromCCallContext:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to c:FromCCallContext:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c:FromCCallContext:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c:FromCCallContext:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c:FromCCallContext:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c:FromCCallContext:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c:FromCCallContext:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c:FromCCallContext:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c:FromCCallContext:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c:FromCCallContext:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c:FromCCallContext:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c:FromCCallContext:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to c:FromCCallContext:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to c:FromCCallContext:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to c:FromCCallContext:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to c:FromCCallContext:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to c:FromCCallContext:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to c:FromCCallContext:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to c:FromCCallContext:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to c:FromCCallContext:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c__FromCCallContext__name_mtype, /* pointer to c:FromCCallContext:c#FromCCallContext#name_mtype */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__cast_from, /* pointer to c:FromCCallContext:nitni_utilities#CallContext#cast_from */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__cast_to, /* pointer to c:FromCCallContext:nitni_utilities#CallContext#cast_to */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__init, /* pointer to c:FromCCallContext:nitni_utilities#CallContext#init */
(nitmethod_t)VIRTUAL_c__FromCCallContext__init, /* pointer to c:FromCCallContext:c#FromCCallContext#init */
}
};
/* allocate FromCCallContext */
val* NEW_c__FromCCallContext(const struct type* type) {
val* self /* : FromCCallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c__FromCCallContext;
return self;
}
/* runtime class c__ExternCFunction */
const struct class class_c__ExternCFunction = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c:ExternCFunction:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to c:ExternCFunction:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c:ExternCFunction:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to c:ExternCFunction:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c:ExternCFunction:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to c:ExternCFunction:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to c:ExternCFunction:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c:ExternCFunction:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c:ExternCFunction:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to c:ExternCFunction:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to c:ExternCFunction:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to c:ExternCFunction:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to c:ExternCFunction:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to c:ExternCFunction:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c:ExternCFunction:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c:ExternCFunction:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c:ExternCFunction:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c:ExternCFunction:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c:ExternCFunction:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c:ExternCFunction:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to c:ExternCFunction:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to c:ExternCFunction:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to c:ExternCFunction:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c:ExternCFunction:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c:ExternCFunction:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c:ExternCFunction:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to c:ExternCFunction:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to c:ExternCFunction:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c:ExternCFunction:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c:ExternCFunction:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to c:ExternCFunction:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to c:ExternCFunction:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to c:ExternCFunction:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c:ExternCFunction:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c:ExternCFunction:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c:ExternCFunction:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c:ExternCFunction:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c:ExternCFunction:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c:ExternCFunction:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c:ExternCFunction:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c:ExternCFunction:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c:ExternCFunction:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c:ExternCFunction:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to c:ExternCFunction:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to c:ExternCFunction:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to c:ExternCFunction:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to c:ExternCFunction:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to c:ExternCFunction:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to c:ExternCFunction:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to c:ExternCFunction:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to c:ExternCFunction:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c_tools__CFunction__signature, /* pointer to c:ExternCFunction:c_tools#CFunction#signature */
(nitmethod_t)VIRTUAL_c_tools__CFunction__signature_61d, /* pointer to c:ExternCFunction:c_tools#CFunction#signature= */
(nitmethod_t)VIRTUAL_c_tools__CFunction__decls, /* pointer to c:ExternCFunction:c_tools#CFunction#decls */
(nitmethod_t)VIRTUAL_c_tools__CFunction__decls_61d, /* pointer to c:ExternCFunction:c_tools#CFunction#decls= */
(nitmethod_t)VIRTUAL_c_tools__CFunction__exprs, /* pointer to c:ExternCFunction:c_tools#CFunction#exprs */
(nitmethod_t)VIRTUAL_c_tools__CFunction__exprs_61d, /* pointer to c:ExternCFunction:c_tools#CFunction#exprs= */
(nitmethod_t)VIRTUAL_c_tools__CFunction__to_writer, /* pointer to c:ExternCFunction:c_tools#CFunction#to_writer */
(nitmethod_t)VIRTUAL_c_tools__CFunction__init, /* pointer to c:ExternCFunction:c_tools#CFunction#init */
(nitmethod_t)VIRTUAL_c__ExternCFunction__method, /* pointer to c:ExternCFunction:c#ExternCFunction#method */
(nitmethod_t)VIRTUAL_c__ExternCFunction__method_61d, /* pointer to c:ExternCFunction:c#ExternCFunction#method= */
(nitmethod_t)VIRTUAL_c__ExternCFunction__init, /* pointer to c:ExternCFunction:c#ExternCFunction#init */
}
};
/* allocate ExternCFunction */
val* NEW_c__ExternCFunction(const struct type* type) {
val* self /* : ExternCFunction */;
val* var /* : Template */;
val* var1 /* : Template */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c__ExternCFunction;
var = NEW_template__Template(&type_template__Template);
((void (*)(val*))(var->class->vft[COLOR_template__Template__init]))(var) /* init on <var:Template>*/;
self->attrs[COLOR_c_tools__CFunction___64ddecls].val = var; /* @decls on <self:ExternCFunction exact> */
var1 = NEW_template__Template(&type_template__Template);
((void (*)(val*))(var1->class->vft[COLOR_template__Template__init]))(var1) /* init on <var1:Template>*/;
self->attrs[COLOR_c_tools__CFunction___64dexprs].val = var1; /* @exprs on <self:ExternCFunction exact> */
return self;
}
/* runtime class pkgconfig__PkgconfigPhase */
const struct class class_pkgconfig__PkgconfigPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to pkgconfig:PkgconfigPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to pkgconfig:PkgconfigPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to pkgconfig:PkgconfigPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to pkgconfig:PkgconfigPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to pkgconfig:PkgconfigPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to pkgconfig:PkgconfigPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to pkgconfig:PkgconfigPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to pkgconfig:PkgconfigPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to pkgconfig:PkgconfigPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to pkgconfig:PkgconfigPhase:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to pkgconfig:PkgconfigPhase:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to pkgconfig:PkgconfigPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to pkgconfig:PkgconfigPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to pkgconfig:PkgconfigPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to pkgconfig:PkgconfigPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to pkgconfig:PkgconfigPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to pkgconfig:PkgconfigPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to pkgconfig:PkgconfigPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to pkgconfig:PkgconfigPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to pkgconfig:PkgconfigPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to pkgconfig:PkgconfigPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to pkgconfig:PkgconfigPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to pkgconfig:PkgconfigPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to pkgconfig:PkgconfigPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to pkgconfig:PkgconfigPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to pkgconfig:PkgconfigPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to pkgconfig:PkgconfigPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to pkgconfig:PkgconfigPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to pkgconfig:PkgconfigPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to pkgconfig:PkgconfigPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to pkgconfig:PkgconfigPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to pkgconfig:PkgconfigPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to pkgconfig:PkgconfigPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to pkgconfig:PkgconfigPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to pkgconfig:PkgconfigPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to pkgconfig:PkgconfigPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to pkgconfig:PkgconfigPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to pkgconfig:PkgconfigPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to pkgconfig:PkgconfigPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to pkgconfig:PkgconfigPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to pkgconfig:PkgconfigPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_pkgconfig__PkgconfigPhase__process_annotated_node, /* pointer to pkgconfig:PkgconfigPhase:pkgconfig#PkgconfigPhase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to pkgconfig:PkgconfigPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate PkgconfigPhase */
val* NEW_pkgconfig__PkgconfigPhase(const struct type* type) {
val* self /* : PkgconfigPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_pkgconfig__PkgconfigPhase;
return self;
}
/* runtime class c_compiler_options__CCompilerOptionsPhase */
const struct class class_c_compiler_options__CCompilerOptionsPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to c_compiler_options:CCompilerOptionsPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to c_compiler_options:CCompilerOptionsPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to c_compiler_options:CCompilerOptionsPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to c_compiler_options:CCompilerOptionsPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c_compiler_options:CCompilerOptionsPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c_compiler_options:CCompilerOptionsPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c_compiler_options:CCompilerOptionsPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c_compiler_options:CCompilerOptionsPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c_compiler_options:CCompilerOptionsPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c_compiler_options:CCompilerOptionsPhase:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to c_compiler_options:CCompilerOptionsPhase:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to c_compiler_options:CCompilerOptionsPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to c_compiler_options:CCompilerOptionsPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c_compiler_options:CCompilerOptionsPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c_compiler_options:CCompilerOptionsPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c_compiler_options:CCompilerOptionsPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to c_compiler_options:CCompilerOptionsPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to c_compiler_options:CCompilerOptionsPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c_compiler_options:CCompilerOptionsPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c_compiler_options:CCompilerOptionsPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to c_compiler_options:CCompilerOptionsPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to c_compiler_options:CCompilerOptionsPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to c_compiler_options:CCompilerOptionsPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c_compiler_options:CCompilerOptionsPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c_compiler_options:CCompilerOptionsPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c_compiler_options:CCompilerOptionsPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c_compiler_options:CCompilerOptionsPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c_compiler_options:CCompilerOptionsPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c_compiler_options:CCompilerOptionsPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c_compiler_options:CCompilerOptionsPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c_compiler_options:CCompilerOptionsPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c_compiler_options:CCompilerOptionsPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c_compiler_options:CCompilerOptionsPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to c_compiler_options:CCompilerOptionsPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to c_compiler_options:CCompilerOptionsPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to c_compiler_options:CCompilerOptionsPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to c_compiler_options:CCompilerOptionsPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to c_compiler_options:CCompilerOptionsPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to c_compiler_options:CCompilerOptionsPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to c_compiler_options:CCompilerOptionsPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to c_compiler_options:CCompilerOptionsPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_c_compiler_options__CCompilerOptionsPhase__process_annotated_node, /* pointer to c_compiler_options:CCompilerOptionsPhase:c_compiler_options#CCompilerOptionsPhase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to c_compiler_options:CCompilerOptionsPhase:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)VIRTUAL_c_compiler_options__CCompilerOptionsPhase__compiler_annotation_name, /* pointer to c_compiler_options:CCompilerOptionsPhase:c_compiler_options#CCompilerOptionsPhase#compiler_annotation_name */
(nitmethod_t)VIRTUAL_c_compiler_options__CCompilerOptionsPhase__linker_annotation_name, /* pointer to c_compiler_options:CCompilerOptionsPhase:c_compiler_options#CCompilerOptionsPhase#linker_annotation_name */
(nitmethod_t)VIRTUAL_c_compiler_options__CCompilerOptionsPhase__cpp_compiler_annotation_name, /* pointer to c_compiler_options:CCompilerOptionsPhase:c_compiler_options#CCompilerOptionsPhase#cpp_compiler_annotation_name */
(nitmethod_t)VIRTUAL_c_compiler_options__CCompilerOptionsPhase__process_c_compiler_annotation, /* pointer to c_compiler_options:CCompilerOptionsPhase:c_compiler_options#CCompilerOptionsPhase#process_c_compiler_annotation */
(nitmethod_t)VIRTUAL_c_compiler_options__CCompilerOptionsPhase__process_c_linker_annotation, /* pointer to c_compiler_options:CCompilerOptionsPhase:c_compiler_options#CCompilerOptionsPhase#process_c_linker_annotation */
(nitmethod_t)VIRTUAL_c_compiler_options__CCompilerOptionsPhase__process_cpp_compiler_annotation, /* pointer to c_compiler_options:CCompilerOptionsPhase:c_compiler_options#CCompilerOptionsPhase#process_cpp_compiler_annotation */
}
};
/* allocate CCompilerOptionsPhase */
val* NEW_c_compiler_options__CCompilerOptionsPhase(const struct type* type) {
val* self /* : CCompilerOptionsPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c_compiler_options__CCompilerOptionsPhase;
return self;
}
/* runtime class c_compiler_options__DirectCCompilerOption */
const struct class class_c_compiler_options__DirectCCompilerOption = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to c_compiler_options:DirectCCompilerOption:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to c_compiler_options:DirectCCompilerOption:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to c_compiler_options:DirectCCompilerOption:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to c_compiler_options:DirectCCompilerOption:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c_compiler_options:DirectCCompilerOption:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c_compiler_options:DirectCCompilerOption:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c_compiler_options:DirectCCompilerOption:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c_compiler_options:DirectCCompilerOption:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c_compiler_options:DirectCCompilerOption:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c_compiler_options:DirectCCompilerOption:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to c_compiler_options:DirectCCompilerOption:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to c_compiler_options:DirectCCompilerOption:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to c_compiler_options:DirectCCompilerOption:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c_compiler_options:DirectCCompilerOption:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c_compiler_options:DirectCCompilerOption:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c_compiler_options:DirectCCompilerOption:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to c_compiler_options:DirectCCompilerOption:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to c_compiler_options:DirectCCompilerOption:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c_compiler_options:DirectCCompilerOption:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c_compiler_options:DirectCCompilerOption:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to c_compiler_options:DirectCCompilerOption:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to c_compiler_options:DirectCCompilerOption:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to c_compiler_options:DirectCCompilerOption:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c_compiler_options:DirectCCompilerOption:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c_compiler_options:DirectCCompilerOption:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c_compiler_options:DirectCCompilerOption:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c_compiler_options:DirectCCompilerOption:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c_compiler_options:DirectCCompilerOption:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c_compiler_options:DirectCCompilerOption:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c_compiler_options:DirectCCompilerOption:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c_compiler_options:DirectCCompilerOption:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c_compiler_options:DirectCCompilerOption:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c_compiler_options:DirectCCompilerOption:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to c_compiler_options:DirectCCompilerOption:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to c_compiler_options:DirectCCompilerOption:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to c_compiler_options:DirectCCompilerOption:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to c_compiler_options:DirectCCompilerOption:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to c_compiler_options:DirectCCompilerOption:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to c_compiler_options:DirectCCompilerOption:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to c_compiler_options:DirectCCompilerOption:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to c_compiler_options:DirectCCompilerOption:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c_compiler_options__CCompilerOption__init, /* pointer to c_compiler_options:DirectCCompilerOption:c_compiler_options#CCompilerOption#init */
(nitmethod_t)VIRTUAL_c_compiler_options__DirectCCompilerOption__option, /* pointer to c_compiler_options:DirectCCompilerOption:c_compiler_options#DirectCCompilerOption#option */
(nitmethod_t)VIRTUAL_c_compiler_options__DirectCCompilerOption__option_61d, /* pointer to c_compiler_options:DirectCCompilerOption:c_compiler_options#DirectCCompilerOption#option= */
(nitmethod_t)VIRTUAL_c_compiler_options__DirectCCompilerOption__init, /* pointer to c_compiler_options:DirectCCompilerOption:c_compiler_options#DirectCCompilerOption#init */
}
};
/* allocate DirectCCompilerOption */
val* NEW_c_compiler_options__DirectCCompilerOption(const struct type* type) {
val* self /* : DirectCCompilerOption */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c_compiler_options__DirectCCompilerOption;
return self;
}
/* runtime class c_compiler_options__ExecCCompilerOption */
const struct class class_c_compiler_options__ExecCCompilerOption = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to c_compiler_options:ExecCCompilerOption:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to c_compiler_options:ExecCCompilerOption:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to c_compiler_options:ExecCCompilerOption:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to c_compiler_options:ExecCCompilerOption:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c_compiler_options:ExecCCompilerOption:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c_compiler_options:ExecCCompilerOption:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c_compiler_options:ExecCCompilerOption:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c_compiler_options:ExecCCompilerOption:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c_compiler_options:ExecCCompilerOption:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c_compiler_options:ExecCCompilerOption:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to c_compiler_options:ExecCCompilerOption:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to c_compiler_options:ExecCCompilerOption:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to c_compiler_options:ExecCCompilerOption:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c_compiler_options:ExecCCompilerOption:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c_compiler_options:ExecCCompilerOption:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c_compiler_options:ExecCCompilerOption:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to c_compiler_options:ExecCCompilerOption:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to c_compiler_options:ExecCCompilerOption:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c_compiler_options:ExecCCompilerOption:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c_compiler_options:ExecCCompilerOption:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to c_compiler_options:ExecCCompilerOption:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to c_compiler_options:ExecCCompilerOption:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to c_compiler_options:ExecCCompilerOption:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c_compiler_options:ExecCCompilerOption:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c_compiler_options:ExecCCompilerOption:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c_compiler_options:ExecCCompilerOption:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c_compiler_options:ExecCCompilerOption:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c_compiler_options:ExecCCompilerOption:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c_compiler_options:ExecCCompilerOption:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c_compiler_options:ExecCCompilerOption:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c_compiler_options:ExecCCompilerOption:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c_compiler_options:ExecCCompilerOption:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c_compiler_options:ExecCCompilerOption:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to c_compiler_options:ExecCCompilerOption:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to c_compiler_options:ExecCCompilerOption:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to c_compiler_options:ExecCCompilerOption:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to c_compiler_options:ExecCCompilerOption:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to c_compiler_options:ExecCCompilerOption:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to c_compiler_options:ExecCCompilerOption:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to c_compiler_options:ExecCCompilerOption:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to c_compiler_options:ExecCCompilerOption:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c_compiler_options__CCompilerOption__init, /* pointer to c_compiler_options:ExecCCompilerOption:c_compiler_options#CCompilerOption#init */
(nitmethod_t)VIRTUAL_c_compiler_options__ExecCCompilerOption__command, /* pointer to c_compiler_options:ExecCCompilerOption:c_compiler_options#ExecCCompilerOption#command */
(nitmethod_t)VIRTUAL_c_compiler_options__ExecCCompilerOption__command_61d, /* pointer to c_compiler_options:ExecCCompilerOption:c_compiler_options#ExecCCompilerOption#command= */
(nitmethod_t)VIRTUAL_c_compiler_options__ExecCCompilerOption__exec_node, /* pointer to c_compiler_options:ExecCCompilerOption:c_compiler_options#ExecCCompilerOption#exec_node */
(nitmethod_t)VIRTUAL_c_compiler_options__ExecCCompilerOption__exec_node_61d, /* pointer to c_compiler_options:ExecCCompilerOption:c_compiler_options#ExecCCompilerOption#exec_node= */
(nitmethod_t)VIRTUAL_c_compiler_options__ExecCCompilerOption__init, /* pointer to c_compiler_options:ExecCCompilerOption:c_compiler_options#ExecCCompilerOption#init */
}
};
/* allocate ExecCCompilerOption */
val* NEW_c_compiler_options__ExecCCompilerOption(const struct type* type) {
val* self /* : ExecCCompilerOption */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c_compiler_options__ExecCCompilerOption;
return self;
}
/* runtime class cpp__CPPLanguage */
const struct class class_cpp__CPPLanguage = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to cpp:CPPLanguage:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to cpp:CPPLanguage:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to cpp:CPPLanguage:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to cpp:CPPLanguage:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to cpp:CPPLanguage:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to cpp:CPPLanguage:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to cpp:CPPLanguage:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to cpp:CPPLanguage:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to cpp:CPPLanguage:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to cpp:CPPLanguage:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to cpp:CPPLanguage:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to cpp:CPPLanguage:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to cpp:CPPLanguage:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to cpp:CPPLanguage:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to cpp:CPPLanguage:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to cpp:CPPLanguage:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to cpp:CPPLanguage:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to cpp:CPPLanguage:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to cpp:CPPLanguage:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to cpp:CPPLanguage:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to cpp:CPPLanguage:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to cpp:CPPLanguage:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to cpp:CPPLanguage:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to cpp:CPPLanguage:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to cpp:CPPLanguage:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to cpp:CPPLanguage:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to cpp:CPPLanguage:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to cpp:CPPLanguage:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to cpp:CPPLanguage:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to cpp:CPPLanguage:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to cpp:CPPLanguage:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to cpp:CPPLanguage:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to cpp:CPPLanguage:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to cpp:CPPLanguage:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to cpp:CPPLanguage:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to cpp:CPPLanguage:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to cpp:CPPLanguage:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to cpp:CPPLanguage:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to cpp:CPPLanguage:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to cpp:CPPLanguage:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to cpp:CPPLanguage:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to cpp:CPPLanguage:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to cpp:CPPLanguage:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to cpp:CPPLanguage:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to cpp:CPPLanguage:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to cpp:CPPLanguage:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to cpp:CPPLanguage:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to cpp:CPPLanguage:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to cpp:CPPLanguage:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to cpp:CPPLanguage:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to cpp:CPPLanguage:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_ffi_base__FFILanguage__init, /* pointer to cpp:CPPLanguage:ffi_base#FFILanguage#init */
(nitmethod_t)VIRTUAL_cpp__CPPLanguage__identify_language, /* pointer to cpp:CPPLanguage:cpp#CPPLanguage#identify_language */
(nitmethod_t)VIRTUAL_cpp__CPPLanguage__compile_module_block, /* pointer to cpp:CPPLanguage:cpp#CPPLanguage#compile_module_block */
(nitmethod_t)VIRTUAL_cpp__CPPLanguage__compile_extern_method, /* pointer to cpp:CPPLanguage:cpp#CPPLanguage#compile_extern_method */
(nitmethod_t)VIRTUAL_cpp__CPPLanguage__compile_extern_class, /* pointer to cpp:CPPLanguage:cpp#CPPLanguage#compile_extern_class */
(nitmethod_t)VIRTUAL_cpp__CPPLanguage__get_ftype, /* pointer to cpp:CPPLanguage:cpp#CPPLanguage#get_ftype */
(nitmethod_t)VIRTUAL_cpp__CPPLanguage__compile_callback, /* pointer to cpp:CPPLanguage:cpp#CPPLanguage#compile_callback */
(nitmethod_t)VIRTUAL_cpp__CPPLanguage__compile_to_files, /* pointer to cpp:CPPLanguage:cpp#CPPLanguage#compile_to_files */
}
};
/* allocate CPPLanguage */
val* NEW_cpp__CPPLanguage(const struct type* type) {
val* self /* : CPPLanguage */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_cpp__CPPLanguage;
return self;
}
/* runtime class cpp__CPPCompilationUnit */
const struct class class_cpp__CPPCompilationUnit = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to cpp:CPPCompilationUnit:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to cpp:CPPCompilationUnit:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to cpp:CPPCompilationUnit:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to cpp:CPPCompilationUnit:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to cpp:CPPCompilationUnit:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to cpp:CPPCompilationUnit:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to cpp:CPPCompilationUnit:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to cpp:CPPCompilationUnit:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to cpp:CPPCompilationUnit:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to cpp:CPPCompilationUnit:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to cpp:CPPCompilationUnit:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to cpp:CPPCompilationUnit:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to cpp:CPPCompilationUnit:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to cpp:CPPCompilationUnit:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to cpp:CPPCompilationUnit:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to cpp:CPPCompilationUnit:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to cpp:CPPCompilationUnit:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to cpp:CPPCompilationUnit:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to cpp:CPPCompilationUnit:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to cpp:CPPCompilationUnit:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to cpp:CPPCompilationUnit:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to cpp:CPPCompilationUnit:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to cpp:CPPCompilationUnit:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to cpp:CPPCompilationUnit:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to cpp:CPPCompilationUnit:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to cpp:CPPCompilationUnit:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to cpp:CPPCompilationUnit:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to cpp:CPPCompilationUnit:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to cpp:CPPCompilationUnit:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to cpp:CPPCompilationUnit:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to cpp:CPPCompilationUnit:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to cpp:CPPCompilationUnit:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to cpp:CPPCompilationUnit:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to cpp:CPPCompilationUnit:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to cpp:CPPCompilationUnit:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to cpp:CPPCompilationUnit:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to cpp:CPPCompilationUnit:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to cpp:CPPCompilationUnit:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to cpp:CPPCompilationUnit:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to cpp:CPPCompilationUnit:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to cpp:CPPCompilationUnit:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to cpp:CPPCompilationUnit:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to cpp:CPPCompilationUnit:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to cpp:CPPCompilationUnit:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to cpp:CPPCompilationUnit:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to cpp:CPPCompilationUnit:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to cpp:CPPCompilationUnit:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to cpp:CPPCompilationUnit:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to cpp:CPPCompilationUnit:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to cpp:CPPCompilationUnit:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to cpp:CPPCompilationUnit:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_c_base, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#header_c_base */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_c_base_61d, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#header_c_base= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_custom, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#header_custom */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_custom_61d, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#header_custom= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_c_types, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#header_c_types */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_c_types_61d, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#header_c_types= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_decl, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#header_decl */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__header_decl_61d, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#header_decl= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_decl, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#body_decl */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_decl_61d, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#body_decl= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_custom, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#body_custom */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_custom_61d, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#body_custom= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_impl, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#body_impl */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__body_impl_61d, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#body_impl= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__files, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#files */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__files_61d, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#files= */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__add_local_function, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#add_local_function */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__add_exported_function, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#add_exported_function */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__compile_header_core, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#compile_header_core */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__compile_body_core, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#compile_body_core */
(nitmethod_t)VIRTUAL_c_tools__CCompilationUnit__init, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#init */
(nitmethod_t)VIRTUAL_ffi_base__CCompilationUnit__write_as_impl, /* pointer to cpp:CPPCompilationUnit:ffi_base#CCompilationUnit#write_as_impl */
(nitmethod_t)VIRTUAL_ffi_base__CCompilationUnit__write_header_to_file, /* pointer to cpp:CPPCompilationUnit:ffi_base#CCompilationUnit#write_header_to_file */
(nitmethod_t)VIRTUAL_ffi_base__CCompilationUnit__write_body_to_file, /* pointer to cpp:CPPCompilationUnit:ffi_base#CCompilationUnit#write_body_to_file */
(nitmethod_t)VIRTUAL_compiler_ffi__CCompilationUnit__write_as_nitni, /* pointer to cpp:CPPCompilationUnit:compiler_ffi#CCompilationUnit#write_as_nitni */
(nitmethod_t)VIRTUAL_cpp__CPPCompilationUnit__write_to_files, /* pointer to cpp:CPPCompilationUnit:cpp#CPPCompilationUnit#write_to_files */
(nitmethod_t)VIRTUAL_cpp__CPPCompilationUnit__init, /* pointer to cpp:CPPCompilationUnit:cpp#CPPCompilationUnit#init */
}
};
/* allocate CPPCompilationUnit */
val* NEW_cpp__CPPCompilationUnit(const struct type* type) {
val* self /* : CPPCompilationUnit */;
val* var /* : Template */;
val* var1 /* : Template */;
val* var2 /* : Template */;
val* var3 /* : Template */;
val* var4 /* : Template */;
val* var5 /* : Template */;
val* var6 /* : Template */;
val* var7 /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_cpp__CPPCompilationUnit;
var = NEW_template__Template(&type_template__Template);
((void (*)(val*))(var->class->vft[COLOR_template__Template__init]))(var) /* init on <var:Template>*/;
self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_c_base].val = var; /* @header_c_base on <self:CPPCompilationUnit exact> */
var1 = NEW_template__Template(&type_template__Template);
((void (*)(val*))(var1->class->vft[COLOR_template__Template__init]))(var1) /* init on <var1:Template>*/;
self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_custom].val = var1; /* @header_custom on <self:CPPCompilationUnit exact> */
var2 = NEW_template__Template(&type_template__Template);
((void (*)(val*))(var2->class->vft[COLOR_template__Template__init]))(var2) /* init on <var2:Template>*/;
self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_c_types].val = var2; /* @header_c_types on <self:CPPCompilationUnit exact> */
var3 = NEW_template__Template(&type_template__Template);
((void (*)(val*))(var3->class->vft[COLOR_template__Template__init]))(var3) /* init on <var3:Template>*/;
self->attrs[COLOR_c_tools__CCompilationUnit___64dheader_decl].val = var3; /* @header_decl on <self:CPPCompilationUnit exact> */
var4 = NEW_template__Template(&type_template__Template);
((void (*)(val*))(var4->class->vft[COLOR_template__Template__init]))(var4) /* init on <var4:Template>*/;
self->attrs[COLOR_c_tools__CCompilationUnit___64dbody_decl].val = var4; /* @body_decl on <self:CPPCompilationUnit exact> */
var5 = NEW_template__Template(&type_template__Template);
((void (*)(val*))(var5->class->vft[COLOR_template__Template__init]))(var5) /* init on <var5:Template>*/;
self->attrs[COLOR_c_tools__CCompilationUnit___64dbody_custom].val = var5; /* @body_custom on <self:CPPCompilationUnit exact> */
var6 = NEW_template__Template(&type_template__Template);
((void (*)(val*))(var6->class->vft[COLOR_template__Template__init]))(var6) /* init on <var6:Template>*/;
self->attrs[COLOR_c_tools__CCompilationUnit___64dbody_impl].val = var6; /* @body_impl on <self:CPPCompilationUnit exact> */
var7 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[String]>*/;
self->attrs[COLOR_c_tools__CCompilationUnit___64dfiles].val = var7; /* @files on <self:CPPCompilationUnit exact> */
return self;
}
/* runtime class cpp__ExternCppFile */
const struct class class_cpp__ExternCppFile = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to cpp:ExternCppFile:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to cpp:ExternCppFile:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to cpp:ExternCppFile:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to cpp:ExternCppFile:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to cpp:ExternCppFile:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to cpp:ExternCppFile:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to cpp:ExternCppFile:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to cpp:ExternCppFile:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to cpp:ExternCppFile:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to cpp:ExternCppFile:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to cpp:ExternCppFile:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to cpp:ExternCppFile:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to cpp:ExternCppFile:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to cpp:ExternCppFile:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to cpp:ExternCppFile:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to cpp:ExternCppFile:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to cpp:ExternCppFile:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to cpp:ExternCppFile:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to cpp:ExternCppFile:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to cpp:ExternCppFile:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to cpp:ExternCppFile:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to cpp:ExternCppFile:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to cpp:ExternCppFile:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to cpp:ExternCppFile:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to cpp:ExternCppFile:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to cpp:ExternCppFile:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to cpp:ExternCppFile:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to cpp:ExternCppFile:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to cpp:ExternCppFile:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to cpp:ExternCppFile:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to cpp:ExternCppFile:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to cpp:ExternCppFile:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to cpp:ExternCppFile:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to cpp:ExternCppFile:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to cpp:ExternCppFile:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to cpp:ExternCppFile:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to cpp:ExternCppFile:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to cpp:ExternCppFile:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to cpp:ExternCppFile:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to cpp:ExternCppFile:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to cpp:ExternCppFile:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to cpp:ExternCppFile:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to cpp:ExternCppFile:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to cpp:ExternCppFile:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to cpp:ExternCppFile:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to cpp:ExternCppFile:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to cpp:ExternCppFile:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to cpp:ExternCppFile:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to cpp:ExternCppFile:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to cpp:ExternCppFile:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to cpp:ExternCppFile:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_ffi_base__ExternFile__filename, /* pointer to cpp:ExternCppFile:ffi_base#ExternFile#filename */
(nitmethod_t)VIRTUAL_ffi_base__ExternFile__filename_61d, /* pointer to cpp:ExternCppFile:ffi_base#ExternFile#filename= */
(nitmethod_t)VIRTUAL_cpp__ExternCppFile__makefile_rule_name, /* pointer to cpp:ExternCppFile:cpp#ExternCppFile#makefile_rule_name */
(nitmethod_t)VIRTUAL_cpp__ExternCppFile__makefile_rule_content, /* pointer to cpp:ExternCppFile:cpp#ExternCppFile#makefile_rule_content */
(nitmethod_t)VIRTUAL_ffi_base__ExternFile__init, /* pointer to cpp:ExternCppFile:ffi_base#ExternFile#init */
(nitmethod_t)VIRTUAL_cpp__ExternCppFile__amodule, /* pointer to cpp:ExternCppFile:cpp#ExternCppFile#amodule */
(nitmethod_t)VIRTUAL_cpp__ExternCppFile__amodule_61d, /* pointer to cpp:ExternCppFile:cpp#ExternCppFile#amodule= */
(nitmethod_t)VIRTUAL_cpp__ExternCppFile__init, /* pointer to cpp:ExternCppFile:cpp#ExternCppFile#init */
}
};
/* allocate ExternCppFile */
val* NEW_cpp__ExternCppFile(const struct type* type) {
val* self /* : ExternCppFile */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_cpp__ExternCppFile;
return self;
}
/* runtime class cpp__ForeignCppType */
const struct class class_cpp__ForeignCppType = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to cpp:ForeignCppType:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to cpp:ForeignCppType:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to cpp:ForeignCppType:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to cpp:ForeignCppType:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to cpp:ForeignCppType:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to cpp:ForeignCppType:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to cpp:ForeignCppType:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to cpp:ForeignCppType:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to cpp:ForeignCppType:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to cpp:ForeignCppType:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to cpp:ForeignCppType:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to cpp:ForeignCppType:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to cpp:ForeignCppType:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to cpp:ForeignCppType:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to cpp:ForeignCppType:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to cpp:ForeignCppType:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to cpp:ForeignCppType:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to cpp:ForeignCppType:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to cpp:ForeignCppType:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to cpp:ForeignCppType:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to cpp:ForeignCppType:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to cpp:ForeignCppType:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to cpp:ForeignCppType:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to cpp:ForeignCppType:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to cpp:ForeignCppType:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to cpp:ForeignCppType:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to cpp:ForeignCppType:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to cpp:ForeignCppType:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to cpp:ForeignCppType:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to cpp:ForeignCppType:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to cpp:ForeignCppType:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to cpp:ForeignCppType:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to cpp:ForeignCppType:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to cpp:ForeignCppType:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to cpp:ForeignCppType:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to cpp:ForeignCppType:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to cpp:ForeignCppType:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to cpp:ForeignCppType:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to cpp:ForeignCppType:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to cpp:ForeignCppType:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to cpp:ForeignCppType:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to cpp:ForeignCppType:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to cpp:ForeignCppType:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to cpp:ForeignCppType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to cpp:ForeignCppType:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to cpp:ForeignCppType:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to cpp:ForeignCppType:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to cpp:ForeignCppType:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to cpp:ForeignCppType:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to cpp:ForeignCppType:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to cpp:ForeignCppType:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_ffi_base__ForeignType__ctype, /* pointer to cpp:ForeignCppType:ffi_base#ForeignType#ctype */
(nitmethod_t)VIRTUAL_ffi_base__ForeignType__init, /* pointer to cpp:ForeignCppType:ffi_base#ForeignType#init */
(nitmethod_t)VIRTUAL_cpp__ForeignCppType__cpp_type, /* pointer to cpp:ForeignCppType:cpp#ForeignCppType#cpp_type */
(nitmethod_t)VIRTUAL_cpp__ForeignCppType__cpp_type_61d, /* pointer to cpp:ForeignCppType:cpp#ForeignCppType#cpp_type= */
(nitmethod_t)VIRTUAL_cpp__ForeignCppType__init, /* pointer to cpp:ForeignCppType:cpp#ForeignCppType#init */
}
};
/* allocate ForeignCppType */
val* NEW_cpp__ForeignCppType(const struct type* type) {
val* self /* : ForeignCppType */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_cpp__ForeignCppType;
return self;
}
/* runtime class cpp__CppCallContext */
const struct class class_cpp__CppCallContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to cpp:CppCallContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to cpp:CppCallContext:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to cpp:CppCallContext:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to cpp:CppCallContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to cpp:CppCallContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to cpp:CppCallContext:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to cpp:CppCallContext:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to cpp:CppCallContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to cpp:CppCallContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to cpp:CppCallContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to cpp:CppCallContext:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to cpp:CppCallContext:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to cpp:CppCallContext:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to cpp:CppCallContext:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to cpp:CppCallContext:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to cpp:CppCallContext:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to cpp:CppCallContext:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to cpp:CppCallContext:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to cpp:CppCallContext:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to cpp:CppCallContext:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to cpp:CppCallContext:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to cpp:CppCallContext:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to cpp:CppCallContext:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to cpp:CppCallContext:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to cpp:CppCallContext:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to cpp:CppCallContext:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to cpp:CppCallContext:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to cpp:CppCallContext:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to cpp:CppCallContext:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to cpp:CppCallContext:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to cpp:CppCallContext:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to cpp:CppCallContext:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to cpp:CppCallContext:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to cpp:CppCallContext:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to cpp:CppCallContext:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to cpp:CppCallContext:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to cpp:CppCallContext:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to cpp:CppCallContext:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to cpp:CppCallContext:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to cpp:CppCallContext:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to cpp:CppCallContext:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to cpp:CppCallContext:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to cpp:CppCallContext:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to cpp:CppCallContext:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to cpp:CppCallContext:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to cpp:CppCallContext:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to cpp:CppCallContext:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to cpp:CppCallContext:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to cpp:CppCallContext:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to cpp:CppCallContext:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to cpp:CppCallContext:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__CppCallContext__name_mtype, /* pointer to cpp:CppCallContext:cpp#CppCallContext#name_mtype */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__cast_from, /* pointer to cpp:CppCallContext:nitni_utilities#CallContext#cast_from */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__cast_to, /* pointer to cpp:CppCallContext:nitni_utilities#CallContext#cast_to */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__init, /* pointer to cpp:CppCallContext:nitni_utilities#CallContext#init */
(nitmethod_t)VIRTUAL_cpp__CppCallContext__init, /* pointer to cpp:CppCallContext:cpp#CppCallContext#init */
}
};
/* allocate CppCallContext */
val* NEW_cpp__CppCallContext(const struct type* type) {
val* self /* : CppCallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_cpp__CppCallContext;
return self;
}
/* runtime class cpp__ToCppCallContext */
const struct class class_cpp__ToCppCallContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to cpp:ToCppCallContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to cpp:ToCppCallContext:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to cpp:ToCppCallContext:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to cpp:ToCppCallContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to cpp:ToCppCallContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to cpp:ToCppCallContext:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to cpp:ToCppCallContext:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to cpp:ToCppCallContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to cpp:ToCppCallContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to cpp:ToCppCallContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to cpp:ToCppCallContext:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to cpp:ToCppCallContext:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to cpp:ToCppCallContext:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to cpp:ToCppCallContext:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to cpp:ToCppCallContext:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to cpp:ToCppCallContext:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to cpp:ToCppCallContext:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to cpp:ToCppCallContext:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to cpp:ToCppCallContext:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to cpp:ToCppCallContext:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to cpp:ToCppCallContext:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to cpp:ToCppCallContext:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to cpp:ToCppCallContext:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to cpp:ToCppCallContext:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to cpp:ToCppCallContext:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to cpp:ToCppCallContext:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to cpp:ToCppCallContext:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to cpp:ToCppCallContext:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to cpp:ToCppCallContext:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to cpp:ToCppCallContext:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to cpp:ToCppCallContext:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to cpp:ToCppCallContext:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to cpp:ToCppCallContext:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to cpp:ToCppCallContext:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to cpp:ToCppCallContext:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to cpp:ToCppCallContext:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to cpp:ToCppCallContext:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to cpp:ToCppCallContext:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to cpp:ToCppCallContext:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to cpp:ToCppCallContext:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to cpp:ToCppCallContext:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to cpp:ToCppCallContext:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to cpp:ToCppCallContext:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to cpp:ToCppCallContext:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to cpp:ToCppCallContext:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to cpp:ToCppCallContext:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to cpp:ToCppCallContext:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to cpp:ToCppCallContext:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to cpp:ToCppCallContext:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to cpp:ToCppCallContext:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to cpp:ToCppCallContext:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__CppCallContext__name_mtype, /* pointer to cpp:ToCppCallContext:cpp#CppCallContext#name_mtype */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__cast_from, /* pointer to cpp:ToCppCallContext:nitni_utilities#CallContext#cast_from */
(nitmethod_t)VIRTUAL_cpp__ToCppCallContext__cast_to, /* pointer to cpp:ToCppCallContext:cpp#ToCppCallContext#cast_to */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__init, /* pointer to cpp:ToCppCallContext:nitni_utilities#CallContext#init */
(nitmethod_t)VIRTUAL_cpp__CppCallContext__init, /* pointer to cpp:ToCppCallContext:cpp#CppCallContext#init */
(nitmethod_t)VIRTUAL_cpp__ToCppCallContext__init, /* pointer to cpp:ToCppCallContext:cpp#ToCppCallContext#init */
}
};
/* allocate ToCppCallContext */
val* NEW_cpp__ToCppCallContext(const struct type* type) {
val* self /* : ToCppCallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_cpp__ToCppCallContext;
return self;
}
/* runtime class cpp__FromCppCallContext */
const struct class class_cpp__FromCppCallContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to cpp:FromCppCallContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to cpp:FromCppCallContext:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to cpp:FromCppCallContext:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to cpp:FromCppCallContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to cpp:FromCppCallContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to cpp:FromCppCallContext:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to cpp:FromCppCallContext:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to cpp:FromCppCallContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to cpp:FromCppCallContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to cpp:FromCppCallContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to cpp:FromCppCallContext:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to cpp:FromCppCallContext:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to cpp:FromCppCallContext:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to cpp:FromCppCallContext:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to cpp:FromCppCallContext:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to cpp:FromCppCallContext:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to cpp:FromCppCallContext:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to cpp:FromCppCallContext:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to cpp:FromCppCallContext:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to cpp:FromCppCallContext:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to cpp:FromCppCallContext:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to cpp:FromCppCallContext:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to cpp:FromCppCallContext:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to cpp:FromCppCallContext:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to cpp:FromCppCallContext:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to cpp:FromCppCallContext:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to cpp:FromCppCallContext:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to cpp:FromCppCallContext:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to cpp:FromCppCallContext:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to cpp:FromCppCallContext:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to cpp:FromCppCallContext:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to cpp:FromCppCallContext:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to cpp:FromCppCallContext:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to cpp:FromCppCallContext:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to cpp:FromCppCallContext:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to cpp:FromCppCallContext:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to cpp:FromCppCallContext:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to cpp:FromCppCallContext:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to cpp:FromCppCallContext:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to cpp:FromCppCallContext:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to cpp:FromCppCallContext:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to cpp:FromCppCallContext:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to cpp:FromCppCallContext:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to cpp:FromCppCallContext:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to cpp:FromCppCallContext:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to cpp:FromCppCallContext:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to cpp:FromCppCallContext:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to cpp:FromCppCallContext:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to cpp:FromCppCallContext:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to cpp:FromCppCallContext:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to cpp:FromCppCallContext:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__CppCallContext__name_mtype, /* pointer to cpp:FromCppCallContext:cpp#CppCallContext#name_mtype */
(nitmethod_t)VIRTUAL_cpp__FromCppCallContext__cast_from, /* pointer to cpp:FromCppCallContext:cpp#FromCppCallContext#cast_from */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__cast_to, /* pointer to cpp:FromCppCallContext:nitni_utilities#CallContext#cast_to */
(nitmethod_t)VIRTUAL_nitni_utilities__CallContext__init, /* pointer to cpp:FromCppCallContext:nitni_utilities#CallContext#init */
(nitmethod_t)VIRTUAL_cpp__CppCallContext__init, /* pointer to cpp:FromCppCallContext:cpp#CppCallContext#init */
(nitmethod_t)VIRTUAL_cpp__FromCppCallContext__init, /* pointer to cpp:FromCppCallContext:cpp#FromCppCallContext#init */
}
};
/* allocate FromCppCallContext */
val* NEW_cpp__FromCppCallContext(const struct type* type) {
val* self /* : FromCppCallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_cpp__FromCppCallContext;
return self;
}
/* runtime class platform__PlatformPhase */
const struct class class_platform__PlatformPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to platform:PlatformPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to platform:PlatformPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to platform:PlatformPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to platform:PlatformPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to platform:PlatformPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to platform:PlatformPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to platform:PlatformPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to platform:PlatformPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to platform:PlatformPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to platform:PlatformPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to platform:PlatformPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to platform:PlatformPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to platform:PlatformPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to platform:PlatformPhase:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to platform:PlatformPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to platform:PlatformPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to platform:PlatformPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to platform:PlatformPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to platform:PlatformPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to platform:PlatformPhase:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to platform:PlatformPhase:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to platform:PlatformPhase:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to platform:PlatformPhase:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to platform:PlatformPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to platform:PlatformPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to platform:PlatformPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to platform:PlatformPhase:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to platform:PlatformPhase:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to platform:PlatformPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to platform:PlatformPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to platform:PlatformPhase:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to platform:PlatformPhase:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to platform:PlatformPhase:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to platform:PlatformPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to platform:PlatformPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to platform:PlatformPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to platform:PlatformPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to platform:PlatformPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to platform:PlatformPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to platform:PlatformPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to platform:PlatformPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to platform:PlatformPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to platform:PlatformPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to platform:PlatformPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to platform:PlatformPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to platform:PlatformPhase:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to platform:PlatformPhase:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to platform:PlatformPhase:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to platform:PlatformPhase:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to platform:PlatformPhase:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to platform:PlatformPhase:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to platform:PlatformPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to platform:PlatformPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to platform:PlatformPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to platform:PlatformPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to platform:PlatformPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to platform:PlatformPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to platform:PlatformPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to platform:PlatformPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_platform__PlatformPhase__process_annotated_node, /* pointer to platform:PlatformPhase:platform#PlatformPhase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to platform:PlatformPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate PlatformPhase */
val* NEW_platform__PlatformPhase(const struct type* type) {
val* self /* : PlatformPhase */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_platform__PlatformPhase;
return self;
}
/* runtime class separate_erasure_compiler__SeparateErasureCompiler */
const struct class class_separate_erasure_compiler__SeparateErasureCompiler = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__names, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#names */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__names_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#names= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__mainmodule, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#mainmodule */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__mainmodule_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#mainmodule= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__realmainmodule, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#realmainmodule */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__realmainmodule_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#realmainmodule= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__modelbuilder, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#modelbuilder */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__modelbuilder_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#modelbuilder= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__hardening, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#hardening */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__init, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#init */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__new_file, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#new_file */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#files */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#files= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__new_visitor, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#new_visitor */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__header, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#header */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__header_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#header= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provide_declaration, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#provide_declaration */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provided_declarations, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#provided_declarations */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provided_declarations_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#provided_declarations= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__requirers_of_declarations, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#requirers_of_declarations */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__requirers_of_declarations_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#requirers_of_declarations= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__build_c_to_nit_bindings, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#build_c_to_nit_bindings */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_header, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#compile_header */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__compile_header_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#compile_header_structs */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_nitni_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_nitni_structs */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_main_function, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#compile_main_function */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#extern_bodies */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#extern_bodies= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files_to_copy, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#files_to_copy */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files_to_copy_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#files_to_copy= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#seen_extern */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#seen_extern= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__generate_init_attr, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#generate_init_attr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__generate_check_attr, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#generate_check_attr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_tags, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_tags */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_tags_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_tags= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_resolved, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_resolved */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_resolved_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_resolved= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_unresolved, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_unresolved */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_unresolved_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_unresolved= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_skipped, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_skipped */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_skipped_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_skipped= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__init_count_type_test_tags, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#init_count_type_test_tags */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__display_stats, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#display_stats */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__div, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#div */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__finalize_ffi_for_module, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#finalize_ffi_for_module */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__runtime_type_analysis, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__runtime_type_analysis_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__undead_types, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#undead_types */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__undead_types_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#undead_types= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__live_unresolved_types, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#live_unresolved_types */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__live_unresolved_types_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#live_unresolved_types= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_layout, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_layout */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_layout_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_layout= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__resolution_layout, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#resolution_layout */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__resolution_layout_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#resolution_layout= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__method_layout, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#method_layout */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__method_layout_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#method_layout= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_layout, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_layout */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_layout_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_layout= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__init, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#init */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_header_attribute_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_header_attribute_structs */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_box_kinds, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_box_kinds */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__box_kinds, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#box_kinds */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__box_kinds_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#box_kinds= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__box_kind_of, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#box_kind_of */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_color_consts, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_color_consts */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_color_const, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_color_const */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__color_consts_done, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#color_consts_done */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__color_consts_done_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#color_consts_done= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__do_property_coloring, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#do_property_coloring */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_method_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#build_method_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_attr_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#build_attr_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__do_type_coloring, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#do_type_coloring */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_type_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#build_type_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_resolution_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_resolution_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_resolution_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#build_resolution_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_module_to_c, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_module_to_c */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_type_to_c, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_type_to_c */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_type_resolution_table, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_type_resolution_table */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__compile_class_to_c, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#compile_class_to_c */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__hardening_live_type, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#hardening_live_type */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_tables= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__resolution_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#resolution_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__resolution_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#resolution_tables= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__method_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#method_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__method_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#method_tables= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_tables= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__display_sizes, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#display_sizes */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__display_stats, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#display_stats */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__finalize_ffi_for_module, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#finalize_ffi_for_module */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_layout, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_layout */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_layout_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_layout= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__vt_layout, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#vt_layout */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__vt_layout_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#vt_layout= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__init, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#init */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__build_vt_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#build_vt_tables */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__build_class_typing_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#build_class_typing_tables */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__build_class_vts_table, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#build_class_vts_table */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__retrieve_vt_bound, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#retrieve_vt_bound */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_tables */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_tables= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__vt_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#vt_tables */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__vt_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#vt_tables= */
}
};
/* allocate SeparateErasureCompiler */
val* NEW_separate_erasure_compiler__SeparateErasureCompiler(const struct type* type) {
val* self /* : SeparateErasureCompiler */;
val* var /* : HashMap[String, String] */;
val* var1 /* : List[CodeFile] */;
val* var2 /* : HashMap[String, String] */;
val* var3 /* : HashMap[String, ANode] */;
val* var4 /* : Array[ExternFile] */;
val* var5 /* : Array[String] */;
val* var6 /* : ArraySet[String] */;
val* var7 /* : Array[String] */;
long var8 /* : Int */;
val* var_ /* var : Array[String] */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : HashMap[String, Int] */;
val* var34 /* : HashMap[String, Int] */;
val* var35 /* : HashMap[String, Int] */;
val* var36 /* : HashSet[MType] */;
val* var37 /* : HashMap[MClassDef, HashSet[MType]] */;
val* var38 /* : HashMap[MClass, Int] */;
val* var39 /* : HashSet[Object] */;
val* var40 /* : HashMap[MType, Array[nullable MType]] */;
val* var41 /* : HashMap[MClassType, Array[nullable MType]] */;
val* var42 /* : HashMap[MClass, Array[nullable MPropDef]] */;
val* var43 /* : HashMap[MClass, Array[nullable MPropDef]] */;
self = nit_alloc(sizeof(struct instance) + 32*sizeof(nitattribute_t));
self->type = type;
self->class = &class_separate_erasure_compiler__SeparateErasureCompiler;
var = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringstring__String);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashMap__init]))(var) /* init on <var:HashMap[String, String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dnames].val = var; /* @names on <self:SeparateErasureCompiler exact> */
var1 = NEW_list__List(&type_list__Listabstract_compiler__CodeFile);
((void (*)(val*))(var1->class->vft[COLOR_list__List__init]))(var1) /* init on <var1:List[CodeFile]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dfiles].val = var1; /* @files on <self:SeparateErasureCompiler exact> */
var2 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringstring__String);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashMap__init]))(var2) /* init on <var2:HashMap[String, String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dprovided_declarations].val = var2; /* @provided_declarations on <self:SeparateErasureCompiler exact> */
var3 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringparser_nodes__ANode);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[String, ANode]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64drequirers_of_declarations].val = var3; /* @requirers_of_declarations on <self:SeparateErasureCompiler exact> */
var4 = NEW_array__Array(&type_array__Arrayffi_base__ExternFile);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[ExternFile]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dextern_bodies].val = var4; /* @extern_bodies on <self:SeparateErasureCompiler exact> */
var5 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dfiles_to_copy].val = var5; /* @files_to_copy on <self:SeparateErasureCompiler exact> */
var6 = NEW_array__ArraySet(&type_array__ArraySetstring__String);
((void (*)(val*))(var6->class->vft[COLOR_array__ArraySet__init]))(var6) /* init on <var6:ArraySet[String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dseen_extern].val = var6; /* @seen_extern on <self:SeparateErasureCompiler exact> */
var7 = NEW_array__Array(&type_array__Arraystring__String);
var8 = 5;
((void (*)(val*, long))(var7->class->vft[COLOR_array__Array__with_capacity]))(var7, var8) /* with_capacity on <var7:Array[String]>*/;
var_ = var7;
if (varonce) {
var9 = varonce;
} else {
var10 = "isa";
var11 = 3;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var9) /* push on <var_:Array[String]>*/;
if (varonce13) {
var14 = varonce13;
} else {
var15 = "as";
var16 = 2;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var14) /* push on <var_:Array[String]>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "auto";
var21 = 4;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var19) /* push on <var_:Array[String]>*/;
if (varonce23) {
var24 = varonce23;
} else {
var25 = "covariance";
var26 = 10;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var24) /* push on <var_:Array[String]>*/;
if (varonce28) {
var29 = varonce28;
} else {
var30 = "erasure";
var31 = 7;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var29) /* push on <var_:Array[String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_tags].val = var_; /* @count_type_test_tags on <self:SeparateErasureCompiler exact> */
var33 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:SeparateErasureCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_resolved].val = var33; /* @count_type_test_resolved on <self:SeparateErasureCompiler exact> */
var34 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:SeparateErasureCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_unresolved].val = var34; /* @count_type_test_unresolved on <self:SeparateErasureCompiler exact> */
var35 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:SeparateErasureCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_skipped].val = var35; /* @count_type_test_skipped on <self:SeparateErasureCompiler exact> */
var36 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var36->class->vft[COLOR_hash_collection__HashSet__init]))(var36) /* init on <var36:HashSet[MType]>*/;
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dundead_types].val = var36; /* @undead_types on <self:SeparateErasureCompiler exact> */
var37 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassDefhash_collection__HashSetmodel__MType);
((void (*)(val*))(var37->class->vft[COLOR_hash_collection__HashMap__init]))(var37) /* init on <var37:HashMap[MClassDef, HashSet[MType]]>*/;
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dlive_unresolved_types].val = var37; /* @live_unresolved_types on <self:SeparateErasureCompiler exact> */
var38 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClasskernel__Int);
((void (*)(val*))(var38->class->vft[COLOR_hash_collection__HashMap__init]))(var38) /* init on <var38:HashMap[MClass, Int]>*/;
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dbox_kinds].val = var38; /* @box_kinds on <self:SeparateErasureCompiler exact> */
var39 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetkernel__Object);
((void (*)(val*))(var39->class->vft[COLOR_hash_collection__HashSet__init]))(var39) /* init on <var39:HashSet[Object]>*/;
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dcolor_consts_done].val = var39; /* @color_consts_done on <self:SeparateErasureCompiler exact> */
var40 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypearray__Arraynullable_model__MType);
((void (*)(val*))(var40->class->vft[COLOR_hash_collection__HashMap__init]))(var40) /* init on <var40:HashMap[MType, Array[nullable MType]]>*/;
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dtype_tables].val = var40; /* @type_tables on <self:SeparateErasureCompiler exact> */
var41 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassTypearray__Arraynullable_model__MType);
((void (*)(val*))(var41->class->vft[COLOR_hash_collection__HashMap__init]))(var41) /* init on <var41:HashMap[MClassType, Array[nullable MType]]>*/;
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dresolution_tables].val = var41; /* @resolution_tables on <self:SeparateErasureCompiler exact> */
var42 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
((void (*)(val*))(var42->class->vft[COLOR_hash_collection__HashMap__init]))(var42) /* init on <var42:HashMap[MClass, Array[nullable MPropDef]]>*/;
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dmethod_tables].val = var42; /* @method_tables on <self:SeparateErasureCompiler exact> */
var43 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
((void (*)(val*))(var43->class->vft[COLOR_hash_collection__HashMap__init]))(var43) /* init on <var43:HashMap[MClass, Array[nullable MPropDef]]>*/;
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dattr_tables].val = var43; /* @attr_tables on <self:SeparateErasureCompiler exact> */
return self;
}
/* runtime class separate_erasure_compiler__SeparateErasureCompilerVisitor */
const struct class class_separate_erasure_compiler__SeparateErasureCompilerVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compiler, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compiler */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compiler_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compiler= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__current_node, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#current_node */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__current_node_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#current_node= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__frame, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#frame */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__frame_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#frame= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__object_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#object_type */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__bool_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#bool_type */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__writer, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#writer */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__writer_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#writer= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__init, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#init */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_class, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_class */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_property, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_property */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__compile_callsite, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#compile_callsite */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__calloc_array, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#calloc_array */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__native_array_def, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#native_array_def */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__varargize, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#varargize */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__anchor, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#anchor */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__resolve_for, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#resolve_for */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__autoadapt, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#autoadapt */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__supercall, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#supercall */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__adapt_signature, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#adapt_signature */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__autobox, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#autobox */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__type_test, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#type_test */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__is_same_type_test, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#is_same_type_test */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__equal_test, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#equal_test */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__call, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#call */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#send */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__monomorphic_send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#monomorphic_send */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__monomorphic_super_send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#monomorphic_super_send */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__isset_attribute, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#isset_attribute */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__read_attribute, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#read_attribute */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__write_attribute, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#write_attribute */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__check_recv_notnull, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#check_recv_notnull */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__names, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#names */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__names_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#names= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_names, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_names */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_names_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_names= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__class_name_string, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#class_name_string */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variables, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variables */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variables= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variable, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variable */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_var, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_var */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_named_var, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_named_var */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__assign, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#assign */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__init_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#init_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__int_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#int_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__string_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#string_instance */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__array_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#array_instance */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__vararg_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#vararg_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_decl, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_decl */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__require_declaration, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#require_declaration */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__declare_once, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#declare_once */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_extern */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_expr, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_abort, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_abort */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_raw_abort, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_raw_abort */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_cast, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_cast */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__ret, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#ret */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__stmt, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#stmt */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr_bool, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr_bool */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__debug, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#debug */
(nitmethod_t)VIRTUAL_compiler_ffi__AbstractCompilerVisitor__var_from_c, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:compiler_ffi#AbstractCompilerVisitor#var_from_c */
(nitmethod_t)VIRTUAL_compiler_ffi__AbstractCompilerVisitor__ret_to_c, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:compiler_ffi#AbstractCompilerVisitor#ret_to_c */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__type_info, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#type_info */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__table_send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#table_send */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__hardening_live_open_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#hardening_live_open_type */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__hardening_cast_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#hardening_cast_type */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__can_be_primitive, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#can_be_primitive */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__maybe_null, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#maybe_null */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__native_array_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#native_array_instance */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__link_unresolved_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#link_unresolved_type */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compile_callsite, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compile_callsite */
}
};
/* allocate SeparateErasureCompilerVisitor */
val* NEW_separate_erasure_compiler__SeparateErasureCompilerVisitor(const struct type* type) {
val* self /* : SeparateErasureCompilerVisitor */;
val* var /* : null */;
val* var1 /* : HashSet[String] */;
long var2 /* : Int */;
val* var3 /* : HashMap[EscapeMark, String] */;
val* var4 /* : HashMap[Variable, RuntimeVariable] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_separate_erasure_compiler__SeparateErasureCompilerVisitor;
var = NULL;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dcurrent_node].val = var; /* @current_node on <self:SeparateErasureCompilerVisitor exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetstring__String);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dnames].val = var1; /* @names on <self:SeparateErasureCompilerVisitor exact> */
var2 = 0;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dlast].l = var2; /* @last on <self:SeparateErasureCompilerVisitor exact> */
var3 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__EscapeMarkstring__String);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[EscapeMark, String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64descapemark_names].val = var3; /* @escapemark_names on <self:SeparateErasureCompilerVisitor exact> */
var4 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable);
((void (*)(val*))(var4->class->vft[COLOR_hash_collection__HashMap__init]))(var4) /* init on <var4:HashMap[Variable, RuntimeVariable]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dvariables].val = var4; /* @variables on <self:SeparateErasureCompilerVisitor exact> */
return self;
}
/* runtime class separate_compiler__SeparateCompiler */
const struct class class_separate_compiler__SeparateCompiler = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to separate_compiler:SeparateCompiler:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to separate_compiler:SeparateCompiler:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to separate_compiler:SeparateCompiler:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to separate_compiler:SeparateCompiler:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to separate_compiler:SeparateCompiler:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_compiler:SeparateCompiler:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_compiler:SeparateCompiler:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_compiler:SeparateCompiler:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_compiler:SeparateCompiler:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_compiler:SeparateCompiler:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to separate_compiler:SeparateCompiler:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to separate_compiler:SeparateCompiler:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to separate_compiler:SeparateCompiler:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to separate_compiler:SeparateCompiler:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to separate_compiler:SeparateCompiler:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to separate_compiler:SeparateCompiler:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to separate_compiler:SeparateCompiler:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to separate_compiler:SeparateCompiler:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to separate_compiler:SeparateCompiler:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to separate_compiler:SeparateCompiler:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to separate_compiler:SeparateCompiler:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to separate_compiler:SeparateCompiler:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to separate_compiler:SeparateCompiler:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to separate_compiler:SeparateCompiler:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to separate_compiler:SeparateCompiler:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to separate_compiler:SeparateCompiler:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to separate_compiler:SeparateCompiler:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to separate_compiler:SeparateCompiler:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to separate_compiler:SeparateCompiler:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to separate_compiler:SeparateCompiler:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to separate_compiler:SeparateCompiler:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to separate_compiler:SeparateCompiler:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to separate_compiler:SeparateCompiler:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to separate_compiler:SeparateCompiler:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to separate_compiler:SeparateCompiler:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to separate_compiler:SeparateCompiler:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to separate_compiler:SeparateCompiler:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to separate_compiler:SeparateCompiler:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to separate_compiler:SeparateCompiler:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to separate_compiler:SeparateCompiler:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to separate_compiler:SeparateCompiler:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__names, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#names */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__names_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#names= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__mainmodule, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#mainmodule */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__mainmodule_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#mainmodule= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__realmainmodule, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#realmainmodule */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__realmainmodule_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#realmainmodule= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__modelbuilder, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#modelbuilder */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__modelbuilder_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#modelbuilder= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__hardening, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#hardening */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__init, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#init */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__new_file, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#new_file */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#files */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#files= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__new_visitor, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#new_visitor */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__header, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#header */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__header_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#header= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provide_declaration, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#provide_declaration */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provided_declarations, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#provided_declarations */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provided_declarations_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#provided_declarations= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__requirers_of_declarations, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#requirers_of_declarations */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__requirers_of_declarations_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#requirers_of_declarations= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__build_c_to_nit_bindings, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#build_c_to_nit_bindings */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_header, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#compile_header */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_header_structs, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_header_structs */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_nitni_structs, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_nitni_structs */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_main_function, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#compile_main_function */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#extern_bodies */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#extern_bodies= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files_to_copy, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#files_to_copy */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files_to_copy_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#files_to_copy= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#seen_extern */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#seen_extern= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__generate_init_attr, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#generate_init_attr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__generate_check_attr, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#generate_check_attr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_tags, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_tags */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_tags_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_tags= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_resolved, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_resolved */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_resolved_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_resolved= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_unresolved, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_unresolved */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_unresolved_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_unresolved= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_skipped, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_skipped */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_skipped_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_skipped= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__init_count_type_test_tags, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#init_count_type_test_tags */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__display_stats, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#display_stats */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__div, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#div */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__finalize_ffi_for_module, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#finalize_ffi_for_module */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__runtime_type_analysis, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__runtime_type_analysis_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__undead_types, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#undead_types */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__undead_types_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#undead_types= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__live_unresolved_types, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#live_unresolved_types */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__live_unresolved_types_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#live_unresolved_types= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_layout, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_layout */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_layout_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_layout= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__resolution_layout, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#resolution_layout */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__resolution_layout_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#resolution_layout= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__method_layout, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#method_layout */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__method_layout_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#method_layout= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_layout, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_layout */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_layout_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_layout= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__init, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#init */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_header_attribute_structs, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_header_attribute_structs */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_box_kinds, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_box_kinds */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__box_kinds, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#box_kinds */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__box_kinds_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#box_kinds= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__box_kind_of, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#box_kind_of */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_color_consts, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_color_consts */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_color_const, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_color_const */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__color_consts_done, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#color_consts_done */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__color_consts_done_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#color_consts_done= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__do_property_coloring, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#do_property_coloring */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_method_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#build_method_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_attr_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#build_attr_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__do_type_coloring, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#do_type_coloring */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_type_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#build_type_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_resolution_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_resolution_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_resolution_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#build_resolution_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_module_to_c, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_module_to_c */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_type_to_c, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_type_to_c */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_type_resolution_table, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_type_resolution_table */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_class_to_c, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_class_to_c */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__hardening_live_type, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#hardening_live_type */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_tables_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_tables= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__resolution_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#resolution_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__resolution_tables_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#resolution_tables= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__method_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#method_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__method_tables_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#method_tables= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_tables_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_tables= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__display_sizes, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#display_sizes */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__display_stats, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#display_stats */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__finalize_ffi_for_module, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#finalize_ffi_for_module */
}
};
/* allocate SeparateCompiler */
val* NEW_separate_compiler__SeparateCompiler(const struct type* type) {
val* self /* : SeparateCompiler */;
val* var /* : HashMap[String, String] */;
val* var1 /* : List[CodeFile] */;
val* var2 /* : HashMap[String, String] */;
val* var3 /* : HashMap[String, ANode] */;
val* var4 /* : Array[ExternFile] */;
val* var5 /* : Array[String] */;
val* var6 /* : ArraySet[String] */;
val* var7 /* : Array[String] */;
long var8 /* : Int */;
val* var_ /* var : Array[String] */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : HashMap[String, Int] */;
val* var34 /* : HashMap[String, Int] */;
val* var35 /* : HashMap[String, Int] */;
val* var36 /* : HashSet[MType] */;
val* var37 /* : HashMap[MClassDef, HashSet[MType]] */;
val* var38 /* : HashMap[MClass, Int] */;
val* var39 /* : HashSet[Object] */;
val* var40 /* : HashMap[MType, Array[nullable MType]] */;
val* var41 /* : HashMap[MClassType, Array[nullable MType]] */;
val* var42 /* : HashMap[MClass, Array[nullable MPropDef]] */;
val* var43 /* : HashMap[MClass, Array[nullable MPropDef]] */;
self = nit_alloc(sizeof(struct instance) + 28*sizeof(nitattribute_t));
self->type = type;
self->class = &class_separate_compiler__SeparateCompiler;
var = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringstring__String);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashMap__init]))(var) /* init on <var:HashMap[String, String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dnames].val = var; /* @names on <self:SeparateCompiler exact> */
var1 = NEW_list__List(&type_list__Listabstract_compiler__CodeFile);
((void (*)(val*))(var1->class->vft[COLOR_list__List__init]))(var1) /* init on <var1:List[CodeFile]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dfiles].val = var1; /* @files on <self:SeparateCompiler exact> */
var2 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringstring__String);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashMap__init]))(var2) /* init on <var2:HashMap[String, String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dprovided_declarations].val = var2; /* @provided_declarations on <self:SeparateCompiler exact> */
var3 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringparser_nodes__ANode);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[String, ANode]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64drequirers_of_declarations].val = var3; /* @requirers_of_declarations on <self:SeparateCompiler exact> */
var4 = NEW_array__Array(&type_array__Arrayffi_base__ExternFile);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[ExternFile]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dextern_bodies].val = var4; /* @extern_bodies on <self:SeparateCompiler exact> */
var5 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dfiles_to_copy].val = var5; /* @files_to_copy on <self:SeparateCompiler exact> */
var6 = NEW_array__ArraySet(&type_array__ArraySetstring__String);
((void (*)(val*))(var6->class->vft[COLOR_array__ArraySet__init]))(var6) /* init on <var6:ArraySet[String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dseen_extern].val = var6; /* @seen_extern on <self:SeparateCompiler exact> */
var7 = NEW_array__Array(&type_array__Arraystring__String);
var8 = 5;
((void (*)(val*, long))(var7->class->vft[COLOR_array__Array__with_capacity]))(var7, var8) /* with_capacity on <var7:Array[String]>*/;
var_ = var7;
if (varonce) {
var9 = varonce;
} else {
var10 = "isa";
var11 = 3;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var9) /* push on <var_:Array[String]>*/;
if (varonce13) {
var14 = varonce13;
} else {
var15 = "as";
var16 = 2;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var14) /* push on <var_:Array[String]>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "auto";
var21 = 4;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var19) /* push on <var_:Array[String]>*/;
if (varonce23) {
var24 = varonce23;
} else {
var25 = "covariance";
var26 = 10;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var24) /* push on <var_:Array[String]>*/;
if (varonce28) {
var29 = varonce28;
} else {
var30 = "erasure";
var31 = 7;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var29) /* push on <var_:Array[String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_tags].val = var_; /* @count_type_test_tags on <self:SeparateCompiler exact> */
var33 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:SeparateCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_resolved].val = var33; /* @count_type_test_resolved on <self:SeparateCompiler exact> */
var34 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:SeparateCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_unresolved].val = var34; /* @count_type_test_unresolved on <self:SeparateCompiler exact> */
var35 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:SeparateCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_skipped].val = var35; /* @count_type_test_skipped on <self:SeparateCompiler exact> */
var36 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var36->class->vft[COLOR_hash_collection__HashSet__init]))(var36) /* init on <var36:HashSet[MType]>*/;
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dundead_types].val = var36; /* @undead_types on <self:SeparateCompiler exact> */
var37 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassDefhash_collection__HashSetmodel__MType);
((void (*)(val*))(var37->class->vft[COLOR_hash_collection__HashMap__init]))(var37) /* init on <var37:HashMap[MClassDef, HashSet[MType]]>*/;
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dlive_unresolved_types].val = var37; /* @live_unresolved_types on <self:SeparateCompiler exact> */
var38 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClasskernel__Int);
((void (*)(val*))(var38->class->vft[COLOR_hash_collection__HashMap__init]))(var38) /* init on <var38:HashMap[MClass, Int]>*/;
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dbox_kinds].val = var38; /* @box_kinds on <self:SeparateCompiler exact> */
var39 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetkernel__Object);
((void (*)(val*))(var39->class->vft[COLOR_hash_collection__HashSet__init]))(var39) /* init on <var39:HashSet[Object]>*/;
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dcolor_consts_done].val = var39; /* @color_consts_done on <self:SeparateCompiler exact> */
var40 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypearray__Arraynullable_model__MType);
((void (*)(val*))(var40->class->vft[COLOR_hash_collection__HashMap__init]))(var40) /* init on <var40:HashMap[MType, Array[nullable MType]]>*/;
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dtype_tables].val = var40; /* @type_tables on <self:SeparateCompiler exact> */
var41 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassTypearray__Arraynullable_model__MType);
((void (*)(val*))(var41->class->vft[COLOR_hash_collection__HashMap__init]))(var41) /* init on <var41:HashMap[MClassType, Array[nullable MType]]>*/;
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dresolution_tables].val = var41; /* @resolution_tables on <self:SeparateCompiler exact> */
var42 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
((void (*)(val*))(var42->class->vft[COLOR_hash_collection__HashMap__init]))(var42) /* init on <var42:HashMap[MClass, Array[nullable MPropDef]]>*/;
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dmethod_tables].val = var42; /* @method_tables on <self:SeparateCompiler exact> */
var43 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
((void (*)(val*))(var43->class->vft[COLOR_hash_collection__HashMap__init]))(var43) /* init on <var43:HashMap[MClass, Array[nullable MPropDef]]>*/;
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dattr_tables].val = var43; /* @attr_tables on <self:SeparateCompiler exact> */
return self;
}
/* runtime class separate_compiler__SeparateCompilerVisitor */
const struct class class_separate_compiler__SeparateCompilerVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to separate_compiler:SeparateCompilerVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to separate_compiler:SeparateCompilerVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to separate_compiler:SeparateCompilerVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to separate_compiler:SeparateCompilerVisitor:math#Object#srand */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to separate_compiler:SeparateCompilerVisitor:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to separate_compiler:SeparateCompilerVisitor:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to separate_compiler:SeparateCompilerVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to separate_compiler:SeparateCompilerVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to separate_compiler:SeparateCompilerVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to separate_compiler:SeparateCompilerVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to separate_compiler:SeparateCompilerVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to separate_compiler:SeparateCompilerVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to separate_compiler:SeparateCompilerVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to separate_compiler:SeparateCompilerVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to separate_compiler:SeparateCompilerVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to separate_compiler:SeparateCompilerVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to separate_compiler:SeparateCompilerVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to separate_compiler:SeparateCompilerVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to separate_compiler:SeparateCompilerVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to separate_compiler:SeparateCompilerVisitor:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to separate_compiler:SeparateCompilerVisitor:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to separate_compiler:SeparateCompilerVisitor:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to separate_compiler:SeparateCompilerVisitor:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to separate_compiler:SeparateCompilerVisitor:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to separate_compiler:SeparateCompilerVisitor:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compiler, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compiler */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compiler_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compiler= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__current_node, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#current_node */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__current_node_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#current_node= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__frame, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#frame */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__frame_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#frame= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__object_type, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#object_type */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__bool_type, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#bool_type */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__writer, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#writer */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__writer_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#writer= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__init, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#init */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_class, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_class */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_property, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_property */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compile_callsite, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compile_callsite */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__calloc_array, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#calloc_array */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__native_array_def, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#native_array_def */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__varargize, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#varargize */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__anchor, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#anchor */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__resolve_for, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#resolve_for */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__autoadapt, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#autoadapt */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__supercall, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#supercall */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__adapt_signature, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#adapt_signature */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__autobox, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#autobox */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__type_test, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#type_test */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__is_same_type_test, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#is_same_type_test */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__equal_test, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#equal_test */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__call, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#call */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__send, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#send */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__monomorphic_send, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#monomorphic_send */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__monomorphic_super_send, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#monomorphic_super_send */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__isset_attribute, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#isset_attribute */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__read_attribute, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#read_attribute */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__write_attribute, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#write_attribute */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__check_recv_notnull, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#check_recv_notnull */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__names, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#names */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__names_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#names= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_name, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_name, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_names, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_names */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_names_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_names= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__class_name_string, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#class_name_string */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variables, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variables */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variables_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variables= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variable, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variable */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_var, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_var */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_named_var, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_named_var */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__assign, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#assign */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__init_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#init_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__int_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#int_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__string_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#string_instance */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__array_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#array_instance */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__vararg_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#vararg_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_decl, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_decl */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__require_declaration, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#require_declaration */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__declare_once, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#declare_once */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_extern */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_expr, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_abort, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_abort */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_raw_abort, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_raw_abort */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_cast, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_cast */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__ret, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#ret */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__stmt, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#stmt */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr_bool, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr_bool */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__debug, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#debug */
(nitmethod_t)VIRTUAL_compiler_ffi__AbstractCompilerVisitor__var_from_c, /* pointer to separate_compiler:SeparateCompilerVisitor:compiler_ffi#AbstractCompilerVisitor#var_from_c */
(nitmethod_t)VIRTUAL_compiler_ffi__AbstractCompilerVisitor__ret_to_c, /* pointer to separate_compiler:SeparateCompilerVisitor:compiler_ffi#AbstractCompilerVisitor#ret_to_c */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__type_info, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#type_info */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__table_send, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#table_send */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__hardening_live_open_type, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#hardening_live_open_type */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__hardening_cast_type, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#hardening_cast_type */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__can_be_primitive, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#can_be_primitive */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__maybe_null, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#maybe_null */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__native_array_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#native_array_instance */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__link_unresolved_type, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#link_unresolved_type */
}
};
/* allocate SeparateCompilerVisitor */
val* NEW_separate_compiler__SeparateCompilerVisitor(const struct type* type) {
val* self /* : SeparateCompilerVisitor */;
val* var /* : null */;
val* var1 /* : HashSet[String] */;
long var2 /* : Int */;
val* var3 /* : HashMap[EscapeMark, String] */;
val* var4 /* : HashMap[Variable, RuntimeVariable] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_separate_compiler__SeparateCompilerVisitor;
var = NULL;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dcurrent_node].val = var; /* @current_node on <self:SeparateCompilerVisitor exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetstring__String);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dnames].val = var1; /* @names on <self:SeparateCompilerVisitor exact> */
var2 = 0;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dlast].l = var2; /* @last on <self:SeparateCompilerVisitor exact> */
var3 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__EscapeMarkstring__String);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[EscapeMark, String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64descapemark_names].val = var3; /* @escapemark_names on <self:SeparateCompilerVisitor exact> */
var4 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable);
((void (*)(val*))(var4->class->vft[COLOR_hash_collection__HashMap__init]))(var4) /* init on <var4:HashMap[Variable, RuntimeVariable]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dvariables].val = var4; /* @variables on <self:SeparateCompilerVisitor exact> */
return self;
}
/* runtime class separate_compiler__SeparateRuntimeFunction */
const struct class class_separate_compiler__SeparateRuntimeFunction = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to separate_compiler:SeparateRuntimeFunction:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to separate_compiler:SeparateRuntimeFunction:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to separate_compiler:SeparateRuntimeFunction:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to separate_compiler:SeparateRuntimeFunction:math#Object#srand */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateRuntimeFunction__to_s, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to separate_compiler:SeparateRuntimeFunction:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to separate_compiler:SeparateRuntimeFunction:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to separate_compiler:SeparateRuntimeFunction:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to separate_compiler:SeparateRuntimeFunction:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to separate_compiler:SeparateRuntimeFunction:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to separate_compiler:SeparateRuntimeFunction:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to separate_compiler:SeparateRuntimeFunction:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to separate_compiler:SeparateRuntimeFunction:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to separate_compiler:SeparateRuntimeFunction:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to separate_compiler:SeparateRuntimeFunction:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to separate_compiler:SeparateRuntimeFunction:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to separate_compiler:SeparateRuntimeFunction:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to separate_compiler:SeparateRuntimeFunction:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to separate_compiler:SeparateRuntimeFunction:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to separate_compiler:SeparateRuntimeFunction:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to separate_compiler:SeparateRuntimeFunction:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to separate_compiler:SeparateRuntimeFunction:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to separate_compiler:SeparateRuntimeFunction:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to separate_compiler:SeparateRuntimeFunction:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to separate_compiler:SeparateRuntimeFunction:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to separate_compiler:SeparateRuntimeFunction:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#mmethoddef */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#mmethoddef= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateRuntimeFunction__build_c_name, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#build_c_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name_cache= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__call, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#call */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateRuntimeFunction__compile_to_c, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#compile_to_c */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__init, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#init */
}
};
/* allocate SeparateRuntimeFunction */
val* NEW_separate_compiler__SeparateRuntimeFunction(const struct type* type) {
val* self /* : SeparateRuntimeFunction */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_separate_compiler__SeparateRuntimeFunction;
var = NULL;
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dc_name_cache].val = var; /* @c_name_cache on <self:SeparateRuntimeFunction exact> */
return self;
}
/* runtime class separate_compiler__VirtualRuntimeFunction */
const struct class class_separate_compiler__VirtualRuntimeFunction = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#hash */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to separate_compiler:VirtualRuntimeFunction:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to separate_compiler:VirtualRuntimeFunction:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to separate_compiler:VirtualRuntimeFunction:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to separate_compiler:VirtualRuntimeFunction:math#Object#srand */
(nitmethod_t)VIRTUAL_separate_compiler__VirtualRuntimeFunction__to_s, /* pointer to separate_compiler:VirtualRuntimeFunction:separate_compiler#VirtualRuntimeFunction#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_compiler:VirtualRuntimeFunction:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_compiler:VirtualRuntimeFunction:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_compiler:VirtualRuntimeFunction:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_compiler:VirtualRuntimeFunction:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_compiler:VirtualRuntimeFunction:string#Object#args */
(nitmethod_t)VIRTUAL_string__Object__alpha_comparator, /* pointer to separate_compiler:VirtualRuntimeFunction:string#Object#alpha_comparator */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to separate_compiler:VirtualRuntimeFunction:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to separate_compiler:VirtualRuntimeFunction:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to separate_compiler:VirtualRuntimeFunction:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to separate_compiler:VirtualRuntimeFunction:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to separate_compiler:VirtualRuntimeFunction:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to separate_compiler:VirtualRuntimeFunction:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to separate_compiler:VirtualRuntimeFunction:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to separate_compiler:VirtualRuntimeFunction:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to separate_compiler:VirtualRuntimeFunction:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to separate_compiler:VirtualRuntimeFunction:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to separate_compiler:VirtualRuntimeFunction:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to separate_compiler:VirtualRuntimeFunction:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to separate_compiler:VirtualRuntimeFunction:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__internal_call_context, /* pointer to separate_compiler:VirtualRuntimeFunction:nitni_utilities#Object#internal_call_context */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__long_signature, /* pointer to separate_compiler:VirtualRuntimeFunction:nitni_utilities#Object#long_signature */
(nitmethod_t)VIRTUAL_nitni_utilities__Object__short_signature, /* pointer to separate_compiler:VirtualRuntimeFunction:nitni_utilities#Object#short_signature */
(nitmethod_t)VIRTUAL_c__Object__to_c_call_context, /* pointer to separate_compiler:VirtualRuntimeFunction:c#Object#to_c_call_context */
(nitmethod_t)VIRTUAL_c__Object__from_c_call_context, /* pointer to separate_compiler:VirtualRuntimeFunction:c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__cpp_call_context, /* pointer to separate_compiler:VirtualRuntimeFunction:cpp#Object#cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__to_cpp_call_context, /* pointer to separate_compiler:VirtualRuntimeFunction:cpp#Object#to_cpp_call_context */
(nitmethod_t)VIRTUAL_cpp__Object__from_cpp_call_context, /* pointer to separate_compiler:VirtualRuntimeFunction:cpp#Object#from_cpp_call_context */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef, /* pointer to separate_compiler:VirtualRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#mmethoddef */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d, /* pointer to separate_compiler:VirtualRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#mmethoddef= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name, /* pointer to separate_compiler:VirtualRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name */
(nitmethod_t)VIRTUAL_separate_compiler__VirtualRuntimeFunction__build_c_name, /* pointer to separate_compiler:VirtualRuntimeFunction:separate_compiler#VirtualRuntimeFunction#build_c_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache, /* pointer to separate_compiler:VirtualRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache_61d, /* pointer to separate_compiler:VirtualRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name_cache= */
(nitmethod_t)VIRTUAL_separate_compiler__VirtualRuntimeFunction__call, /* pointer to separate_compiler:VirtualRuntimeFunction:separate_compiler#VirtualRuntimeFunction#call */
(nitmethod_t)VIRTUAL_separate_compiler__VirtualRuntimeFunction__compile_to_c, /* pointer to separate_compiler:VirtualRuntimeFunction:separate_compiler#VirtualRuntimeFunction#compile_to_c */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__init, /* pointer to separate_compiler:VirtualRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#init */
}
};
/* allocate VirtualRuntimeFunction */
val* NEW_separate_compiler__VirtualRuntimeFunction(const struct type* type) {
val* self /* : VirtualRuntimeFunction */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_separate_compiler__VirtualRuntimeFunction;
var = NULL;
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dc_name_cache].val = var; /* @c_name_cache on <self:VirtualRuntimeFunction exact> */
return self;
}
