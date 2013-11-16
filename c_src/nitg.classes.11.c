#include "nitg.classes.0.h"
/* runtime class toolcontext__ToolContext */
const struct class class_toolcontext__ToolContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to toolcontext:ToolContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to toolcontext:ToolContext:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to toolcontext:ToolContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to toolcontext:ToolContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to toolcontext:ToolContext:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to toolcontext:ToolContext:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to toolcontext:ToolContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to toolcontext:ToolContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to toolcontext:ToolContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to toolcontext:ToolContext:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to toolcontext:ToolContext:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to toolcontext:ToolContext:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to toolcontext:ToolContext:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to toolcontext:ToolContext:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to toolcontext:ToolContext:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to toolcontext:ToolContext:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to toolcontext:ToolContext:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to toolcontext:ToolContext:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to toolcontext:ToolContext:math#Object#srand */
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
(nitmethod_t)VIRTUAL_modelize_class__ToolContext__modelize_class_phase, /* pointer to toolcontext:ToolContext:modelize_class#ToolContext#modelize_class_phase */
(nitmethod_t)VIRTUAL_modelize_class__ToolContext__modelize_class_phase_61d, /* pointer to toolcontext:ToolContext:modelize_class#ToolContext#modelize_class_phase= */
(nitmethod_t)VIRTUAL_modelize_property__ToolContext__modelize_property_phase, /* pointer to toolcontext:ToolContext:modelize_property#ToolContext#modelize_property_phase */
(nitmethod_t)VIRTUAL_modelize_property__ToolContext__modelize_property_phase_61d, /* pointer to toolcontext:ToolContext:modelize_property#ToolContext#modelize_property_phase= */
(nitmethod_t)VIRTUAL_cached__ToolContext__cached_phase, /* pointer to toolcontext:ToolContext:cached#ToolContext#cached_phase */
(nitmethod_t)VIRTUAL_cached__ToolContext__cached_phase_61d, /* pointer to toolcontext:ToolContext:cached#ToolContext#cached_phase= */
(nitmethod_t)VIRTUAL_typing__ToolContext__typing_phase, /* pointer to toolcontext:ToolContext:typing#ToolContext#typing_phase */
(nitmethod_t)VIRTUAL_typing__ToolContext__typing_phase_61d, /* pointer to toolcontext:ToolContext:typing#ToolContext#typing_phase= */
(nitmethod_t)VIRTUAL_auto_super_init__ToolContext__auto_super_init_phase, /* pointer to toolcontext:ToolContext:auto_super_init#ToolContext#auto_super_init_phase */
(nitmethod_t)VIRTUAL_auto_super_init__ToolContext__auto_super_init_phase_61d, /* pointer to toolcontext:ToolContext:auto_super_init#ToolContext#auto_super_init_phase= */
(nitmethod_t)VIRTUAL_div_by_zero__ToolContext__div_by_zero_phase, /* pointer to toolcontext:ToolContext:div_by_zero#ToolContext#div_by_zero_phase */
(nitmethod_t)VIRTUAL_div_by_zero__ToolContext__div_by_zero_phase_61d, /* pointer to toolcontext:ToolContext:div_by_zero#ToolContext#div_by_zero_phase= */
(nitmethod_t)VIRTUAL_transform__ToolContext__transform_phase, /* pointer to toolcontext:ToolContext:transform#ToolContext#transform_phase */
(nitmethod_t)VIRTUAL_transform__ToolContext__transform_phase_61d, /* pointer to toolcontext:ToolContext:transform#ToolContext#transform_phase= */
(nitmethod_t)VIRTUAL_frontend__ToolContext__dummy, /* pointer to toolcontext:ToolContext:frontend#ToolContext#dummy */
(nitmethod_t)VIRTUAL_frontend__ToolContext__dummy_61d, /* pointer to toolcontext:ToolContext:frontend#ToolContext#dummy= */
(nitmethod_t)VIRTUAL_frontend__ToolContext__do_dummy, /* pointer to toolcontext:ToolContext:frontend#ToolContext#do_dummy */
(nitmethod_t)VIRTUAL_frontend__ToolContext__run_global_phases, /* pointer to toolcontext:ToolContext:frontend#ToolContext#run_global_phases */
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
val* var172 /* : LocalVarInitPhase */;
val* var173 /* : Array[Phase] */;
long var174 /* : Int */;
val* var_175 /* var : Array[Phase] */;
val* var176 /* : Phase */;
val* var177 /* : OptionArray */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
long var181 /* : Int */;
val* var182 /* : String */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : String */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
long var191 /* : Int */;
val* var192 /* : String */;
val* var193 /* : Array[String] */;
long var194 /* : Int */;
val* var195 /* : NativeArray[String] */;
val* var196 /* : OptionBool */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : NativeString */;
long var200 /* : Int */;
val* var201 /* : String */;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : NativeString */;
long var205 /* : Int */;
val* var206 /* : String */;
val* var207 /* : Array[String] */;
long var208 /* : Int */;
val* var209 /* : NativeArray[String] */;
val* var210 /* : OptionBool */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
long var214 /* : Int */;
val* var215 /* : String */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
long var219 /* : Int */;
val* var220 /* : String */;
val* var221 /* : Array[String] */;
long var222 /* : Int */;
val* var223 /* : NativeArray[String] */;
val* var224 /* : null */;
val* var225 /* : ModelizeClassPhase */;
val* var226 /* : null */;
val* var227 /* : ModelizePropertyPhase */;
val* var228 /* : Array[Phase] */;
long var229 /* : Int */;
val* var_230 /* var : Array[Phase] */;
val* var231 /* : Phase */;
val* var232 /* : CachedPhase */;
val* var233 /* : Array[Phase] */;
long var234 /* : Int */;
val* var_235 /* var : Array[Phase] */;
val* var236 /* : Phase */;
val* var237 /* : TypingPhase */;
val* var238 /* : Array[Phase] */;
long var239 /* : Int */;
val* var_240 /* var : Array[Phase] */;
val* var241 /* : Phase */;
val* var242 /* : Phase */;
val* var243 /* : Phase */;
val* var244 /* : AutoSuperInitPhase */;
val* var245 /* : Array[Phase] */;
long var246 /* : Int */;
val* var_247 /* var : Array[Phase] */;
val* var248 /* : Phase */;
val* var249 /* : DivByZeroPhase */;
val* var250 /* : Array[Phase] */;
long var251 /* : Int */;
val* var_252 /* var : Array[Phase] */;
val* var253 /* : Phase */;
val* var254 /* : Phase */;
val* var255 /* : TransformPhase */;
val* var256 /* : Array[Phase] */;
long var257 /* : Int */;
val* var_258 /* var : Array[Phase] */;
val* var259 /* : Phase */;
val* var260 /* : Phase */;
short int var261 /* : Bool */;
val* var262 /* : OptionString */;
static val* varonce263;
val* var264 /* : String */;
char* var265 /* : NativeString */;
long var266 /* : Int */;
val* var267 /* : String */;
static val* varonce268;
val* var269 /* : String */;
char* var270 /* : NativeString */;
long var271 /* : Int */;
val* var272 /* : String */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
long var276 /* : Int */;
val* var277 /* : String */;
val* var278 /* : Array[String] */;
long var279 /* : Int */;
val* var280 /* : NativeArray[String] */;
val* var281 /* : OptionBool */;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : NativeString */;
long var285 /* : Int */;
val* var286 /* : String */;
static val* varonce287;
val* var288 /* : String */;
char* var289 /* : NativeString */;
long var290 /* : Int */;
val* var291 /* : String */;
val* var292 /* : Array[String] */;
long var293 /* : Int */;
val* var294 /* : NativeArray[String] */;
val* var295 /* : OptionArray */;
static val* varonce296;
val* var297 /* : String */;
char* var298 /* : NativeString */;
long var299 /* : Int */;
val* var300 /* : String */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : NativeString */;
long var304 /* : Int */;
val* var305 /* : String */;
val* var306 /* : Array[String] */;
long var307 /* : Int */;
val* var308 /* : NativeArray[String] */;
val* var309 /* : OptionString */;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : NativeString */;
long var313 /* : Int */;
val* var314 /* : String */;
static val* varonce315;
val* var316 /* : String */;
char* var317 /* : NativeString */;
long var318 /* : Int */;
val* var319 /* : String */;
val* var320 /* : Array[String] */;
long var321 /* : Int */;
val* var322 /* : NativeArray[String] */;
val* var323 /* : OptionString */;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : NativeString */;
long var327 /* : Int */;
val* var328 /* : String */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
long var332 /* : Int */;
val* var333 /* : String */;
val* var334 /* : Array[String] */;
long var335 /* : Int */;
val* var336 /* : NativeArray[String] */;
val* var337 /* : OptionBool */;
static val* varonce338;
val* var339 /* : String */;
char* var340 /* : NativeString */;
long var341 /* : Int */;
val* var342 /* : String */;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : NativeString */;
long var346 /* : Int */;
val* var347 /* : String */;
val* var348 /* : Array[String] */;
long var349 /* : Int */;
val* var350 /* : NativeArray[String] */;
val* var351 /* : OptionBool */;
static val* varonce352;
val* var353 /* : String */;
char* var354 /* : NativeString */;
long var355 /* : Int */;
val* var356 /* : String */;
static val* varonce357;
val* var358 /* : String */;
char* var359 /* : NativeString */;
long var360 /* : Int */;
val* var361 /* : String */;
val* var362 /* : Array[String] */;
long var363 /* : Int */;
val* var364 /* : NativeArray[String] */;
val* var365 /* : OptionBool */;
static val* varonce366;
val* var367 /* : String */;
char* var368 /* : NativeString */;
long var369 /* : Int */;
val* var370 /* : String */;
static val* varonce371;
val* var372 /* : String */;
char* var373 /* : NativeString */;
long var374 /* : Int */;
val* var375 /* : String */;
val* var376 /* : Array[String] */;
long var377 /* : Int */;
val* var378 /* : NativeArray[String] */;
val* var379 /* : OptionBool */;
static val* varonce380;
val* var381 /* : String */;
char* var382 /* : NativeString */;
long var383 /* : Int */;
val* var384 /* : String */;
static val* varonce385;
val* var386 /* : String */;
char* var387 /* : NativeString */;
long var388 /* : Int */;
val* var389 /* : String */;
val* var390 /* : Array[String] */;
long var391 /* : Int */;
val* var392 /* : NativeArray[String] */;
val* var393 /* : OptionBool */;
static val* varonce394;
val* var395 /* : String */;
char* var396 /* : NativeString */;
long var397 /* : Int */;
val* var398 /* : String */;
static val* varonce399;
val* var400 /* : String */;
char* var401 /* : NativeString */;
long var402 /* : Int */;
val* var403 /* : String */;
val* var404 /* : Array[String] */;
long var405 /* : Int */;
val* var406 /* : NativeArray[String] */;
val* var407 /* : OptionBool */;
static val* varonce408;
val* var409 /* : String */;
char* var410 /* : NativeString */;
long var411 /* : Int */;
val* var412 /* : String */;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : NativeString */;
long var416 /* : Int */;
val* var417 /* : String */;
val* var418 /* : Array[String] */;
long var419 /* : Int */;
val* var420 /* : NativeArray[String] */;
val* var421 /* : OptionBool */;
static val* varonce422;
val* var423 /* : String */;
char* var424 /* : NativeString */;
long var425 /* : Int */;
val* var426 /* : String */;
static val* varonce427;
val* var428 /* : String */;
char* var429 /* : NativeString */;
long var430 /* : Int */;
val* var431 /* : String */;
val* var432 /* : Array[String] */;
long var433 /* : Int */;
val* var434 /* : NativeArray[String] */;
val* var435 /* : OptionBool */;
static val* varonce436;
val* var437 /* : String */;
char* var438 /* : NativeString */;
long var439 /* : Int */;
val* var440 /* : String */;
static val* varonce441;
val* var442 /* : String */;
char* var443 /* : NativeString */;
long var444 /* : Int */;
val* var445 /* : String */;
val* var446 /* : Array[String] */;
long var447 /* : Int */;
val* var448 /* : NativeArray[String] */;
val* var449 /* : OptionBool */;
static val* varonce450;
val* var451 /* : String */;
char* var452 /* : NativeString */;
long var453 /* : Int */;
val* var454 /* : String */;
static val* varonce455;
val* var456 /* : String */;
char* var457 /* : NativeString */;
long var458 /* : Int */;
val* var459 /* : String */;
val* var460 /* : Array[String] */;
long var461 /* : Int */;
val* var462 /* : NativeArray[String] */;
val* var463 /* : OptionBool */;
static val* varonce464;
val* var465 /* : String */;
char* var466 /* : NativeString */;
long var467 /* : Int */;
val* var468 /* : String */;
static val* varonce469;
val* var470 /* : String */;
char* var471 /* : NativeString */;
long var472 /* : Int */;
val* var473 /* : String */;
val* var474 /* : Array[String] */;
long var475 /* : Int */;
val* var476 /* : NativeArray[String] */;
val* var477 /* : OptionBool */;
static val* varonce478;
val* var479 /* : String */;
char* var480 /* : NativeString */;
long var481 /* : Int */;
val* var482 /* : String */;
static val* varonce483;
val* var484 /* : String */;
char* var485 /* : NativeString */;
long var486 /* : Int */;
val* var487 /* : String */;
val* var488 /* : Array[String] */;
long var489 /* : Int */;
val* var490 /* : NativeArray[String] */;
val* var491 /* : OptionBool */;
static val* varonce492;
val* var493 /* : String */;
char* var494 /* : NativeString */;
long var495 /* : Int */;
val* var496 /* : String */;
static val* varonce497;
val* var498 /* : String */;
char* var499 /* : NativeString */;
long var500 /* : Int */;
val* var501 /* : String */;
val* var502 /* : Array[String] */;
long var503 /* : Int */;
val* var504 /* : NativeArray[String] */;
val* var505 /* : OptionBool */;
static val* varonce506;
val* var507 /* : String */;
char* var508 /* : NativeString */;
long var509 /* : Int */;
val* var510 /* : String */;
static val* varonce511;
val* var512 /* : String */;
char* var513 /* : NativeString */;
long var514 /* : Int */;
val* var515 /* : String */;
val* var516 /* : Array[String] */;
long var517 /* : Int */;
val* var518 /* : NativeArray[String] */;
val* var519 /* : OptionBool */;
static val* varonce520;
val* var521 /* : String */;
char* var522 /* : NativeString */;
long var523 /* : Int */;
val* var524 /* : String */;
static val* varonce525;
val* var526 /* : String */;
char* var527 /* : NativeString */;
long var528 /* : Int */;
val* var529 /* : String */;
val* var530 /* : Array[String] */;
long var531 /* : Int */;
val* var532 /* : NativeArray[String] */;
val* var533 /* : OptionBool */;
static val* varonce534;
val* var535 /* : String */;
char* var536 /* : NativeString */;
long var537 /* : Int */;
val* var538 /* : String */;
static val* varonce539;
val* var540 /* : String */;
char* var541 /* : NativeString */;
long var542 /* : Int */;
val* var543 /* : String */;
val* var544 /* : Array[String] */;
long var545 /* : Int */;
val* var546 /* : NativeArray[String] */;
val* var547 /* : OptionBool */;
static val* varonce548;
val* var549 /* : String */;
char* var550 /* : NativeString */;
long var551 /* : Int */;
val* var552 /* : String */;
static val* varonce553;
val* var554 /* : String */;
char* var555 /* : NativeString */;
long var556 /* : Int */;
val* var557 /* : String */;
val* var558 /* : Array[String] */;
long var559 /* : Int */;
val* var560 /* : NativeArray[String] */;
val* var561 /* : OptionBool */;
static val* varonce562;
val* var563 /* : String */;
char* var564 /* : NativeString */;
long var565 /* : Int */;
val* var566 /* : String */;
static val* varonce567;
val* var568 /* : String */;
char* var569 /* : NativeString */;
long var570 /* : Int */;
val* var571 /* : String */;
val* var572 /* : Array[String] */;
long var573 /* : Int */;
val* var574 /* : NativeArray[String] */;
val* var575 /* : OptionBool */;
static val* varonce576;
val* var577 /* : String */;
char* var578 /* : NativeString */;
long var579 /* : Int */;
val* var580 /* : String */;
static val* varonce581;
val* var582 /* : String */;
char* var583 /* : NativeString */;
long var584 /* : Int */;
val* var585 /* : String */;
val* var586 /* : Array[String] */;
long var587 /* : Int */;
val* var588 /* : NativeArray[String] */;
val* var589 /* : OptionBool */;
static val* varonce590;
val* var591 /* : String */;
char* var592 /* : NativeString */;
long var593 /* : Int */;
val* var594 /* : String */;
static val* varonce595;
val* var596 /* : String */;
char* var597 /* : NativeString */;
long var598 /* : Int */;
val* var599 /* : String */;
val* var600 /* : Array[String] */;
long var601 /* : Int */;
val* var602 /* : NativeArray[String] */;
self = nit_alloc(sizeof(struct instance) + 58*sizeof(nitattribute_t));
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
CHECK_NEW_array__Array(var6);
self->attrs[COLOR_toolcontext__ToolContext___64dmessages].val = var6; /* @messages on <self:ToolContext exact> */
var7 = NEW_sorter__ComparableSorter(&type_sorter__ComparableSortertoolcontext__Message);
((void (*)(val*))(var7->class->vft[COLOR_sorter__ComparableSorter__init]))(var7) /* init on <var7:ComparableSorter[Message]>*/;
CHECK_NEW_sorter__ComparableSorter(var7);
self->attrs[COLOR_toolcontext__ToolContext___64dmessage_sorter].val = var7; /* @message_sorter on <self:ToolContext exact> */
var8 = NEW_opts__OptionContext(&type_opts__OptionContext);
((void (*)(val*))(var8->class->vft[COLOR_opts__OptionContext__init]))(var8) /* init on <var8:OptionContext>*/;
CHECK_NEW_opts__OptionContext(var8);
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
CHECK_NEW_array__Array(var25);
}
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_opts__OptionCount__init]))(var9, var11, var25) /* init on <var9:OptionCount>*/;
CHECK_NEW_opts__OptionCount(var9);
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
CHECK_NEW_array__Array(var44);
}
((void (*)(val*, val*, val*))(var28->class->vft[COLOR_opts__OptionBool__init]))(var28, var30, var44) /* init on <var28:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var28);
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
CHECK_NEW_array__Array(var58);
}
((void (*)(val*, val*, val*))(var47->class->vft[COLOR_opts__OptionBool__init]))(var47, var49, var58) /* init on <var47:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var47);
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
CHECK_NEW_array__Array(var72);
}
((void (*)(val*, val*, val*))(var61->class->vft[COLOR_opts__OptionString__init]))(var61, var63, var72) /* init on <var61:OptionString>*/;
CHECK_NEW_opts__OptionString(var61);
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
CHECK_NEW_array__Array(var96);
}
((void (*)(val*, val*, val*))(var75->class->vft[COLOR_opts__OptionBool__init]))(var75, var77, var96) /* init on <var75:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var75);
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
CHECK_NEW_array__Array(var110);
}
((void (*)(val*, val*, val*))(var99->class->vft[COLOR_opts__OptionBool__init]))(var99, var101, var110) /* init on <var99:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var99);
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
CHECK_NEW_array__Array(var129);
}
((void (*)(val*, val*, val*))(var113->class->vft[COLOR_opts__OptionCount__init]))(var113, var115, var129) /* init on <var113:OptionCount>*/;
CHECK_NEW_opts__OptionCount(var113);
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
CHECK_NEW_array__Array(var143);
}
((void (*)(val*, val*, val*))(var132->class->vft[COLOR_opts__OptionBool__init]))(var132, var134, var143) /* init on <var132:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var132);
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
CHECK_NEW_array__Array(var157);
}
((void (*)(val*, val*, val*))(var146->class->vft[COLOR_opts__OptionBool__init]))(var146, var148, var157) /* init on <var146:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var146);
self->attrs[COLOR_toolcontext__ToolContext___64dopt_no_color].val = var146; /* @opt_no_color on <self:ToolContext exact> */
var160 = 0;
self->attrs[COLOR_toolcontext__ToolContext___64dverbose_level].l = var160; /* @verbose_level on <self:ToolContext exact> */
var161 = NEW_poset__POSet(&type_poset__POSetphase__Phase);
((void (*)(val*))(var161->class->vft[COLOR_poset__POSet__init]))(var161) /* init on <var161:POSet[Phase]>*/;
CHECK_NEW_poset__POSet(var161);
self->attrs[COLOR_phase__ToolContext___64dphases].val = var161; /* @phases on <self:ToolContext exact> */
var162 = NEW_simple_misc_analysis__SimpleMiscAnalysisPhase(&type_simple_misc_analysis__SimpleMiscAnalysisPhase);
var163 = NULL;
((void (*)(val*, val*, val*))(var162->class->vft[COLOR_phase__Phase__init]))(var162, self, var163) /* init on <var162:SimpleMiscAnalysisPhase>*/;
CHECK_NEW_simple_misc_analysis__SimpleMiscAnalysisPhase(var162);
self->attrs[COLOR_simple_misc_analysis__ToolContext___64dsimple_misc_analysis_phase].val = var162; /* @simple_misc_analysis_phase on <self:ToolContext exact> */
var164 = NEW_literal__LiteralPhase(&type_literal__LiteralPhase);
var165 = NULL;
((void (*)(val*, val*, val*))(var164->class->vft[COLOR_phase__Phase__init]))(var164, self, var165) /* init on <var164:LiteralPhase>*/;
CHECK_NEW_literal__LiteralPhase(var164);
self->attrs[COLOR_literal__ToolContext___64dliteral_phase].val = var164; /* @literal_phase on <self:ToolContext exact> */
var166 = NEW_scope__ScopePhase(&type_scope__ScopePhase);
var167 = NULL;
((void (*)(val*, val*, val*))(var166->class->vft[COLOR_phase__Phase__init]))(var166, self, var167) /* init on <var166:ScopePhase>*/;
CHECK_NEW_scope__ScopePhase(var166);
self->attrs[COLOR_scope__ToolContext___64dscope_phase].val = var166; /* @scope_phase on <self:ToolContext exact> */
var168 = NEW_flow__FlowPhase(&type_flow__FlowPhase);
var169 = NEW_array__Array(&type_array__Arrayphase__Phase);
var170 = 1;
((void (*)(val*, long))(var169->class->vft[COLOR_array__Array__with_capacity]))(var169, var170) /* with_capacity on <var169:Array[Phase]>*/;
CHECK_NEW_array__Array(var169);
var_ = var169;
var171 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ToolContext__scope_phase]))(self) /* scope_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var171) /* push on <var_:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var168->class->vft[COLOR_phase__Phase__init]))(var168, self, var_) /* init on <var168:FlowPhase>*/;
CHECK_NEW_flow__FlowPhase(var168);
self->attrs[COLOR_flow__ToolContext___64dflow_phase].val = var168; /* @flow_phase on <self:ToolContext exact> */
var172 = NEW_local_var_init__LocalVarInitPhase(&type_local_var_init__LocalVarInitPhase);
var173 = NEW_array__Array(&type_array__Arrayphase__Phase);
var174 = 1;
((void (*)(val*, long))(var173->class->vft[COLOR_array__Array__with_capacity]))(var173, var174) /* with_capacity on <var173:Array[Phase]>*/;
CHECK_NEW_array__Array(var173);
var_175 = var173;
var176 = ((val* (*)(val*))(self->class->vft[COLOR_flow__ToolContext__flow_phase]))(self) /* flow_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_175->class->vft[COLOR_abstract_collection__Sequence__push]))(var_175, var176) /* push on <var_175:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var172->class->vft[COLOR_phase__Phase__init]))(var172, self, var_175) /* init on <var172:LocalVarInitPhase>*/;
CHECK_NEW_local_var_init__LocalVarInitPhase(var172);
self->attrs[COLOR_local_var_init__ToolContext___64dlocal_var_init_phase].val = var172; /* @local_var_init_phase on <self:ToolContext exact> */
var177 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (varonce178) {
var179 = varonce178;
} else {
var180 = "Set include path for loaders (may be used more than once)";
var181 = 57;
var182 = string__NativeString__to_s_with_length(var180, var181);
var179 = var182;
varonce178 = var179;
}
if (varonce183) {
var184 = varonce183;
} else {
var185 = "-I";
var186 = 2;
var187 = string__NativeString__to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
if (varonce188) {
var189 = varonce188;
} else {
var190 = "--path";
var191 = 6;
var192 = string__NativeString__to_s_with_length(var190, var191);
var189 = var192;
varonce188 = var189;
}
var193 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var193 = array_instance Array[String] */
var194 = 2;
var195 = NEW_array__NativeArray(var194, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var195)->values[0] = (val*) var184;
((struct instance_array__NativeArray*)var195)->values[1] = (val*) var189;
((void (*)(val*, val*, long))(var193->class->vft[COLOR_array__Array__with_native]))(var193, var195, var194) /* with_native on <var193:Array[String]>*/;
CHECK_NEW_array__Array(var193);
}
((void (*)(val*, val*, val*))(var177->class->vft[COLOR_opts__OptionArray__init]))(var177, var179, var193) /* init on <var177:OptionArray>*/;
CHECK_NEW_opts__OptionArray(var177);
self->attrs[COLOR_modelbuilder__ToolContext___64dopt_path].val = var177; /* @opt_path on <self:ToolContext exact> */
var196 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce197) {
var198 = varonce197;
} else {
var199 = "Stop after meta-model processing";
var200 = 32;
var201 = string__NativeString__to_s_with_length(var199, var200);
var198 = var201;
varonce197 = var198;
}
if (varonce202) {
var203 = varonce202;
} else {
var204 = "--only-metamodel";
var205 = 16;
var206 = string__NativeString__to_s_with_length(var204, var205);
var203 = var206;
varonce202 = var203;
}
var207 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var207 = array_instance Array[String] */
var208 = 1;
var209 = NEW_array__NativeArray(var208, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var209)->values[0] = (val*) var203;
((void (*)(val*, val*, long))(var207->class->vft[COLOR_array__Array__with_native]))(var207, var209, var208) /* with_native on <var207:Array[String]>*/;
CHECK_NEW_array__Array(var207);
}
((void (*)(val*, val*, val*))(var196->class->vft[COLOR_opts__OptionBool__init]))(var196, var198, var207) /* init on <var196:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var196);
self->attrs[COLOR_modelbuilder__ToolContext___64dopt_only_metamodel].val = var196; /* @opt_only_metamodel on <self:ToolContext exact> */
var210 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce211) {
var212 = varonce211;
} else {
var213 = "Only proceed to parse step of loaders";
var214 = 37;
var215 = string__NativeString__to_s_with_length(var213, var214);
var212 = var215;
varonce211 = var212;
}
if (varonce216) {
var217 = varonce216;
} else {
var218 = "--only-parse";
var219 = 12;
var220 = string__NativeString__to_s_with_length(var218, var219);
var217 = var220;
varonce216 = var217;
}
var221 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var221 = array_instance Array[String] */
var222 = 1;
var223 = NEW_array__NativeArray(var222, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var223)->values[0] = (val*) var217;
((void (*)(val*, val*, long))(var221->class->vft[COLOR_array__Array__with_native]))(var221, var223, var222) /* with_native on <var221:Array[String]>*/;
CHECK_NEW_array__Array(var221);
}
((void (*)(val*, val*, val*))(var210->class->vft[COLOR_opts__OptionBool__init]))(var210, var212, var221) /* init on <var210:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var210);
self->attrs[COLOR_modelbuilder__ToolContext___64dopt_only_parse].val = var210; /* @opt_only_parse on <self:ToolContext exact> */
var224 = NULL;
self->attrs[COLOR_modelbuilder__ToolContext___64dmodelbuilder_real].val = var224; /* @modelbuilder_real on <self:ToolContext exact> */
var225 = NEW_modelize_class__ModelizeClassPhase(&type_modelize_class__ModelizeClassPhase);
var226 = NULL;
((void (*)(val*, val*, val*))(var225->class->vft[COLOR_phase__Phase__init]))(var225, self, var226) /* init on <var225:ModelizeClassPhase>*/;
CHECK_NEW_modelize_class__ModelizeClassPhase(var225);
self->attrs[COLOR_modelize_class__ToolContext___64dmodelize_class_phase].val = var225; /* @modelize_class_phase on <self:ToolContext exact> */
var227 = NEW_modelize_property__ModelizePropertyPhase(&type_modelize_property__ModelizePropertyPhase);
var228 = NEW_array__Array(&type_array__Arrayphase__Phase);
var229 = 1;
((void (*)(val*, long))(var228->class->vft[COLOR_array__Array__with_capacity]))(var228, var229) /* with_capacity on <var228:Array[Phase]>*/;
CHECK_NEW_array__Array(var228);
var_230 = var228;
var231 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_class__ToolContext__modelize_class_phase]))(self) /* modelize_class_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_230->class->vft[COLOR_abstract_collection__Sequence__push]))(var_230, var231) /* push on <var_230:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var227->class->vft[COLOR_phase__Phase__init]))(var227, self, var_230) /* init on <var227:ModelizePropertyPhase>*/;
CHECK_NEW_modelize_property__ModelizePropertyPhase(var227);
self->attrs[COLOR_modelize_property__ToolContext___64dmodelize_property_phase].val = var227; /* @modelize_property_phase on <self:ToolContext exact> */
var232 = NEW_cached__CachedPhase(&type_cached__CachedPhase);
var233 = NEW_array__Array(&type_array__Arrayphase__Phase);
var234 = 1;
((void (*)(val*, long))(var233->class->vft[COLOR_array__Array__with_capacity]))(var233, var234) /* with_capacity on <var233:Array[Phase]>*/;
CHECK_NEW_array__Array(var233);
var_235 = var233;
var236 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__ToolContext__modelize_property_phase]))(self) /* modelize_property_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_235->class->vft[COLOR_abstract_collection__Sequence__push]))(var_235, var236) /* push on <var_235:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var232->class->vft[COLOR_cached__CachedPhase__init]))(var232, self, var_235) /* init on <var232:CachedPhase>*/;
CHECK_NEW_cached__CachedPhase(var232);
self->attrs[COLOR_cached__ToolContext___64dcached_phase].val = var232; /* @cached_phase on <self:ToolContext exact> */
var237 = NEW_typing__TypingPhase(&type_typing__TypingPhase);
var238 = NEW_array__Array(&type_array__Arrayphase__Phase);
var239 = 3;
((void (*)(val*, long))(var238->class->vft[COLOR_array__Array__with_capacity]))(var238, var239) /* with_capacity on <var238:Array[Phase]>*/;
CHECK_NEW_array__Array(var238);
var_240 = var238;
var241 = ((val* (*)(val*))(self->class->vft[COLOR_flow__ToolContext__flow_phase]))(self) /* flow_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_240->class->vft[COLOR_abstract_collection__Sequence__push]))(var_240, var241) /* push on <var_240:Array[Phase]>*/;
var242 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__ToolContext__modelize_property_phase]))(self) /* modelize_property_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_240->class->vft[COLOR_abstract_collection__Sequence__push]))(var_240, var242) /* push on <var_240:Array[Phase]>*/;
var243 = ((val* (*)(val*))(self->class->vft[COLOR_local_var_init__ToolContext__local_var_init_phase]))(self) /* local_var_init_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_240->class->vft[COLOR_abstract_collection__Sequence__push]))(var_240, var243) /* push on <var_240:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var237->class->vft[COLOR_phase__Phase__init]))(var237, self, var_240) /* init on <var237:TypingPhase>*/;
CHECK_NEW_typing__TypingPhase(var237);
self->attrs[COLOR_typing__ToolContext___64dtyping_phase].val = var237; /* @typing_phase on <self:ToolContext exact> */
var244 = NEW_auto_super_init__AutoSuperInitPhase(&type_auto_super_init__AutoSuperInitPhase);
var245 = NEW_array__Array(&type_array__Arrayphase__Phase);
var246 = 1;
((void (*)(val*, long))(var245->class->vft[COLOR_array__Array__with_capacity]))(var245, var246) /* with_capacity on <var245:Array[Phase]>*/;
CHECK_NEW_array__Array(var245);
var_247 = var245;
var248 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ToolContext__typing_phase]))(self) /* typing_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_247->class->vft[COLOR_abstract_collection__Sequence__push]))(var_247, var248) /* push on <var_247:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var244->class->vft[COLOR_phase__Phase__init]))(var244, self, var_247) /* init on <var244:AutoSuperInitPhase>*/;
CHECK_NEW_auto_super_init__AutoSuperInitPhase(var244);
self->attrs[COLOR_auto_super_init__ToolContext___64dauto_super_init_phase].val = var244; /* @auto_super_init_phase on <self:ToolContext exact> */
var249 = NEW_div_by_zero__DivByZeroPhase(&type_div_by_zero__DivByZeroPhase);
var250 = NEW_array__Array(&type_array__Arrayphase__Phase);
var251 = 2;
((void (*)(val*, long))(var250->class->vft[COLOR_array__Array__with_capacity]))(var250, var251) /* with_capacity on <var250:Array[Phase]>*/;
CHECK_NEW_array__Array(var250);
var_252 = var250;
var253 = ((val* (*)(val*))(self->class->vft[COLOR_literal__ToolContext__literal_phase]))(self) /* literal_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_252->class->vft[COLOR_abstract_collection__Sequence__push]))(var_252, var253) /* push on <var_252:Array[Phase]>*/;
var254 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ToolContext__typing_phase]))(self) /* typing_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_252->class->vft[COLOR_abstract_collection__Sequence__push]))(var_252, var254) /* push on <var_252:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var249->class->vft[COLOR_phase__Phase__init]))(var249, self, var_252) /* init on <var249:DivByZeroPhase>*/;
CHECK_NEW_div_by_zero__DivByZeroPhase(var249);
self->attrs[COLOR_div_by_zero__ToolContext___64ddiv_by_zero_phase].val = var249; /* @div_by_zero_phase on <self:ToolContext exact> */
var255 = NEW_transform__TransformPhase(&type_transform__TransformPhase);
var256 = NEW_array__Array(&type_array__Arrayphase__Phase);
var257 = 2;
((void (*)(val*, long))(var256->class->vft[COLOR_array__Array__with_capacity]))(var256, var257) /* with_capacity on <var256:Array[Phase]>*/;
CHECK_NEW_array__Array(var256);
var_258 = var256;
var259 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ToolContext__typing_phase]))(self) /* typing_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_258->class->vft[COLOR_abstract_collection__Sequence__push]))(var_258, var259) /* push on <var_258:Array[Phase]>*/;
var260 = ((val* (*)(val*))(self->class->vft[COLOR_auto_super_init__ToolContext__auto_super_init_phase]))(self) /* auto_super_init_phase on <self:ToolContext exact>*/;
((void (*)(val*, val*))(var_258->class->vft[COLOR_abstract_collection__Sequence__push]))(var_258, var260) /* push on <var_258:Array[Phase]>*/;
((void (*)(val*, val*, val*))(var255->class->vft[COLOR_phase__Phase__init]))(var255, self, var_258) /* init on <var255:TransformPhase>*/;
CHECK_NEW_transform__TransformPhase(var255);
self->attrs[COLOR_transform__ToolContext___64dtransform_phase].val = var255; /* @transform_phase on <self:ToolContext exact> */
var261 = ((short int (*)(val*))(self->class->vft[COLOR_frontend__ToolContext__do_dummy]))(self) /* do_dummy on <self:ToolContext exact>*/;
self->attrs[COLOR_frontend__ToolContext___64ddummy].s = var261; /* @dummy on <self:ToolContext exact> */
var262 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce263) {
var264 = varonce263;
} else {
var265 = "Output file";
var266 = 11;
var267 = string__NativeString__to_s_with_length(var265, var266);
var264 = var267;
varonce263 = var264;
}
if (varonce268) {
var269 = varonce268;
} else {
var270 = "-o";
var271 = 2;
var272 = string__NativeString__to_s_with_length(var270, var271);
var269 = var272;
varonce268 = var269;
}
if (varonce273) {
var274 = varonce273;
} else {
var275 = "--output";
var276 = 8;
var277 = string__NativeString__to_s_with_length(var275, var276);
var274 = var277;
varonce273 = var274;
}
var278 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var278 = array_instance Array[String] */
var279 = 2;
var280 = NEW_array__NativeArray(var279, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var280)->values[0] = (val*) var269;
((struct instance_array__NativeArray*)var280)->values[1] = (val*) var274;
((void (*)(val*, val*, long))(var278->class->vft[COLOR_array__Array__with_native]))(var278, var280, var279) /* with_native on <var278:Array[String]>*/;
CHECK_NEW_array__Array(var278);
}
((void (*)(val*, val*, val*))(var262->class->vft[COLOR_opts__OptionString__init]))(var262, var264, var278) /* init on <var262:OptionString>*/;
CHECK_NEW_opts__OptionString(var262);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_output].val = var262; /* @opt_output on <self:ToolContext exact> */
var281 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce282) {
var283 = varonce282;
} else {
var284 = "Do not invoke C compiler";
var285 = 24;
var286 = string__NativeString__to_s_with_length(var284, var285);
var283 = var286;
varonce282 = var283;
}
if (varonce287) {
var288 = varonce287;
} else {
var289 = "--no-cc";
var290 = 7;
var291 = string__NativeString__to_s_with_length(var289, var290);
var288 = var291;
varonce287 = var288;
}
var292 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var292 = array_instance Array[String] */
var293 = 1;
var294 = NEW_array__NativeArray(var293, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var294)->values[0] = (val*) var288;
((void (*)(val*, val*, long))(var292->class->vft[COLOR_array__Array__with_native]))(var292, var294, var293) /* with_native on <var292:Array[String]>*/;
CHECK_NEW_array__Array(var292);
}
((void (*)(val*, val*, val*))(var281->class->vft[COLOR_opts__OptionBool__init]))(var281, var283, var292) /* init on <var281:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var281);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_cc].val = var281; /* @opt_no_cc on <self:ToolContext exact> */
var295 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (varonce296) {
var297 = varonce296;
} else {
var298 = "Set include path for C header files (may be used more than once)";
var299 = 64;
var300 = string__NativeString__to_s_with_length(var298, var299);
var297 = var300;
varonce296 = var297;
}
if (varonce301) {
var302 = varonce301;
} else {
var303 = "--cc-path";
var304 = 9;
var305 = string__NativeString__to_s_with_length(var303, var304);
var302 = var305;
varonce301 = var302;
}
var306 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var306 = array_instance Array[String] */
var307 = 1;
var308 = NEW_array__NativeArray(var307, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var308)->values[0] = (val*) var302;
((void (*)(val*, val*, long))(var306->class->vft[COLOR_array__Array__with_native]))(var306, var308, var307) /* with_native on <var306:Array[String]>*/;
CHECK_NEW_array__Array(var306);
}
((void (*)(val*, val*, val*))(var295->class->vft[COLOR_opts__OptionArray__init]))(var295, var297, var306) /* init on <var295:OptionArray>*/;
CHECK_NEW_opts__OptionArray(var295);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_cc_path].val = var295; /* @opt_cc_path on <self:ToolContext exact> */
var309 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce310) {
var311 = varonce310;
} else {
var312 = "Additional options to make";
var313 = 26;
var314 = string__NativeString__to_s_with_length(var312, var313);
var311 = var314;
varonce310 = var311;
}
if (varonce315) {
var316 = varonce315;
} else {
var317 = "--make-flags";
var318 = 12;
var319 = string__NativeString__to_s_with_length(var317, var318);
var316 = var319;
varonce315 = var316;
}
var320 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var320 = array_instance Array[String] */
var321 = 1;
var322 = NEW_array__NativeArray(var321, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var322)->values[0] = (val*) var316;
((void (*)(val*, val*, long))(var320->class->vft[COLOR_array__Array__with_native]))(var320, var322, var321) /* with_native on <var320:Array[String]>*/;
CHECK_NEW_array__Array(var320);
}
((void (*)(val*, val*, val*))(var309->class->vft[COLOR_opts__OptionString__init]))(var309, var311, var320) /* init on <var309:OptionString>*/;
CHECK_NEW_opts__OptionString(var309);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_make_flags].val = var309; /* @opt_make_flags on <self:ToolContext exact> */
var323 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce324) {
var325 = varonce324;
} else {
var326 = "Directory used to generate temporary files";
var327 = 42;
var328 = string__NativeString__to_s_with_length(var326, var327);
var325 = var328;
varonce324 = var325;
}
if (varonce329) {
var330 = varonce329;
} else {
var331 = "--compile-dir";
var332 = 13;
var333 = string__NativeString__to_s_with_length(var331, var332);
var330 = var333;
varonce329 = var330;
}
var334 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var334 = array_instance Array[String] */
var335 = 1;
var336 = NEW_array__NativeArray(var335, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var336)->values[0] = (val*) var330;
((void (*)(val*, val*, long))(var334->class->vft[COLOR_array__Array__with_native]))(var334, var336, var335) /* with_native on <var334:Array[String]>*/;
CHECK_NEW_array__Array(var334);
}
((void (*)(val*, val*, val*))(var323->class->vft[COLOR_opts__OptionString__init]))(var323, var325, var334) /* init on <var323:OptionString>*/;
CHECK_NEW_opts__OptionString(var323);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_compile_dir].val = var323; /* @opt_compile_dir on <self:ToolContext exact> */
var337 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce338) {
var339 = varonce338;
} else {
var340 = "Generate contracts in the C code against bugs in the compiler";
var341 = 61;
var342 = string__NativeString__to_s_with_length(var340, var341);
var339 = var342;
varonce338 = var339;
}
if (varonce343) {
var344 = varonce343;
} else {
var345 = "--hardening";
var346 = 11;
var347 = string__NativeString__to_s_with_length(var345, var346);
var344 = var347;
varonce343 = var344;
}
var348 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var348 = array_instance Array[String] */
var349 = 1;
var350 = NEW_array__NativeArray(var349, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var350)->values[0] = (val*) var344;
((void (*)(val*, val*, long))(var348->class->vft[COLOR_array__Array__with_native]))(var348, var350, var349) /* with_native on <var348:Array[String]>*/;
CHECK_NEW_array__Array(var348);
}
((void (*)(val*, val*, val*))(var337->class->vft[COLOR_opts__OptionBool__init]))(var337, var339, var348) /* init on <var337:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var337);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_hardening].val = var337; /* @opt_hardening on <self:ToolContext exact> */
var351 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce352) {
var353 = varonce352;
} else {
var354 = "Always insantiate a range and its iterator on \'for\' loops";
var355 = 57;
var356 = string__NativeString__to_s_with_length(var354, var355);
var353 = var356;
varonce352 = var353;
}
if (varonce357) {
var358 = varonce357;
} else {
var359 = "--no-shortcut-range";
var360 = 19;
var361 = string__NativeString__to_s_with_length(var359, var360);
var358 = var361;
varonce357 = var358;
}
var362 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var362 = array_instance Array[String] */
var363 = 1;
var364 = NEW_array__NativeArray(var363, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var364)->values[0] = (val*) var358;
((void (*)(val*, val*, long))(var362->class->vft[COLOR_array__Array__with_native]))(var362, var364, var363) /* with_native on <var362:Array[String]>*/;
CHECK_NEW_array__Array(var362);
}
((void (*)(val*, val*, val*))(var351->class->vft[COLOR_opts__OptionBool__init]))(var351, var353, var362) /* init on <var351:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var351);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_shortcut_range].val = var351; /* @opt_no_shortcut_range on <self:ToolContext exact> */
var365 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce366) {
var367 = varonce366;
} else {
var368 = "Disable type tests of covariant parameters (dangerous)";
var369 = 54;
var370 = string__NativeString__to_s_with_length(var368, var369);
var367 = var370;
varonce366 = var367;
}
if (varonce371) {
var372 = varonce371;
} else {
var373 = "--no-check-covariance";
var374 = 21;
var375 = string__NativeString__to_s_with_length(var373, var374);
var372 = var375;
varonce371 = var372;
}
var376 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var376 = array_instance Array[String] */
var377 = 1;
var378 = NEW_array__NativeArray(var377, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var378)->values[0] = (val*) var372;
((void (*)(val*, val*, long))(var376->class->vft[COLOR_array__Array__with_native]))(var376, var378, var377) /* with_native on <var376:Array[String]>*/;
CHECK_NEW_array__Array(var376);
}
((void (*)(val*, val*, val*))(var365->class->vft[COLOR_opts__OptionBool__init]))(var365, var367, var376) /* init on <var365:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var365);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_covariance].val = var365; /* @opt_no_check_covariance on <self:ToolContext exact> */
var379 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce380) {
var381 = varonce380;
} else {
var382 = "Disable isset tests at the end of constructors (dangerous)";
var383 = 58;
var384 = string__NativeString__to_s_with_length(var382, var383);
var381 = var384;
varonce380 = var381;
}
if (varonce385) {
var386 = varonce385;
} else {
var387 = "--no-check-initialization";
var388 = 25;
var389 = string__NativeString__to_s_with_length(var387, var388);
var386 = var389;
varonce385 = var386;
}
var390 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var390 = array_instance Array[String] */
var391 = 1;
var392 = NEW_array__NativeArray(var391, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var392)->values[0] = (val*) var386;
((void (*)(val*, val*, long))(var390->class->vft[COLOR_array__Array__with_native]))(var390, var392, var391) /* with_native on <var390:Array[String]>*/;
CHECK_NEW_array__Array(var390);
}
((void (*)(val*, val*, val*))(var379->class->vft[COLOR_opts__OptionBool__init]))(var379, var381, var390) /* init on <var379:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var379);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_initialization].val = var379; /* @opt_no_check_initialization on <self:ToolContext exact> */
var393 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce394) {
var395 = varonce394;
} else {
var396 = "Disable the evaluation of explicit \'assert\' and \'as\' (dangerous)";
var397 = 64;
var398 = string__NativeString__to_s_with_length(var396, var397);
var395 = var398;
varonce394 = var395;
}
if (varonce399) {
var400 = varonce399;
} else {
var401 = "--no-check-assert";
var402 = 17;
var403 = string__NativeString__to_s_with_length(var401, var402);
var400 = var403;
varonce399 = var400;
}
var404 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var404 = array_instance Array[String] */
var405 = 1;
var406 = NEW_array__NativeArray(var405, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var406)->values[0] = (val*) var400;
((void (*)(val*, val*, long))(var404->class->vft[COLOR_array__Array__with_native]))(var404, var406, var405) /* with_native on <var404:Array[String]>*/;
CHECK_NEW_array__Array(var404);
}
((void (*)(val*, val*, val*))(var393->class->vft[COLOR_opts__OptionBool__init]))(var393, var395, var404) /* init on <var393:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var393);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_assert].val = var393; /* @opt_no_check_assert on <self:ToolContext exact> */
var407 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce408) {
var409 = varonce408;
} else {
var410 = "Disable implicit casts on unsafe expression usage (dangerous)";
var411 = 61;
var412 = string__NativeString__to_s_with_length(var410, var411);
var409 = var412;
varonce408 = var409;
}
if (varonce413) {
var414 = varonce413;
} else {
var415 = "--no-check-autocast";
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
((void (*)(val*, val*, long))(var418->class->vft[COLOR_array__Array__with_native]))(var418, var420, var419) /* with_native on <var418:Array[String]>*/;
CHECK_NEW_array__Array(var418);
}
((void (*)(val*, val*, val*))(var407->class->vft[COLOR_opts__OptionBool__init]))(var407, var409, var418) /* init on <var407:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var407);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_autocast].val = var407; /* @opt_no_check_autocast on <self:ToolContext exact> */
var421 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce422) {
var423 = varonce422;
} else {
var424 = "Disable implicit tests: unset attribute, null receiver (dangerous)";
var425 = 66;
var426 = string__NativeString__to_s_with_length(var424, var425);
var423 = var426;
varonce422 = var423;
}
if (varonce427) {
var428 = varonce427;
} else {
var429 = "--no-check-other";
var430 = 16;
var431 = string__NativeString__to_s_with_length(var429, var430);
var428 = var431;
varonce427 = var428;
}
var432 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var432 = array_instance Array[String] */
var433 = 1;
var434 = NEW_array__NativeArray(var433, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var434)->values[0] = (val*) var428;
((void (*)(val*, val*, long))(var432->class->vft[COLOR_array__Array__with_native]))(var432, var434, var433) /* with_native on <var432:Array[String]>*/;
CHECK_NEW_array__Array(var432);
}
((void (*)(val*, val*, val*))(var421->class->vft[COLOR_opts__OptionBool__init]))(var421, var423, var432) /* init on <var421:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var421);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_no_check_other].val = var421; /* @opt_no_check_other on <self:ToolContext exact> */
var435 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce436) {
var437 = varonce436;
} else {
var438 = "Enable static and dynamic count of all type tests";
var439 = 49;
var440 = string__NativeString__to_s_with_length(var438, var439);
var437 = var440;
varonce436 = var437;
}
if (varonce441) {
var442 = varonce441;
} else {
var443 = "--typing-test-metrics";
var444 = 21;
var445 = string__NativeString__to_s_with_length(var443, var444);
var442 = var445;
varonce441 = var442;
}
var446 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var446 = array_instance Array[String] */
var447 = 1;
var448 = NEW_array__NativeArray(var447, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var448)->values[0] = (val*) var442;
((void (*)(val*, val*, long))(var446->class->vft[COLOR_array__Array__with_native]))(var446, var448, var447) /* with_native on <var446:Array[String]>*/;
CHECK_NEW_array__Array(var446);
}
((void (*)(val*, val*, val*))(var435->class->vft[COLOR_opts__OptionBool__init]))(var435, var437, var446) /* init on <var435:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var435);
self->attrs[COLOR_abstract_compiler__ToolContext___64dopt_typing_test_metrics].val = var435; /* @opt_typing_test_metrics on <self:ToolContext exact> */
var449 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce450) {
var451 = varonce450;
} else {
var452 = "Use separate compilation";
var453 = 24;
var454 = string__NativeString__to_s_with_length(var452, var453);
var451 = var454;
varonce450 = var451;
}
if (varonce455) {
var456 = varonce455;
} else {
var457 = "--separate";
var458 = 10;
var459 = string__NativeString__to_s_with_length(var457, var458);
var456 = var459;
varonce455 = var456;
}
var460 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var460 = array_instance Array[String] */
var461 = 1;
var462 = NEW_array__NativeArray(var461, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var462)->values[0] = (val*) var456;
((void (*)(val*, val*, long))(var460->class->vft[COLOR_array__Array__with_native]))(var460, var462, var461) /* with_native on <var460:Array[String]>*/;
CHECK_NEW_array__Array(var460);
}
((void (*)(val*, val*, val*))(var449->class->vft[COLOR_opts__OptionBool__init]))(var449, var451, var460) /* init on <var449:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var449);
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_separate].val = var449; /* @opt_separate on <self:ToolContext exact> */
var463 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce464) {
var465 = varonce464;
} else {
var466 = "Do not inline call to intern methods";
var467 = 36;
var468 = string__NativeString__to_s_with_length(var466, var467);
var465 = var468;
varonce464 = var465;
}
if (varonce469) {
var470 = varonce469;
} else {
var471 = "--no-inline-intern";
var472 = 18;
var473 = string__NativeString__to_s_with_length(var471, var472);
var470 = var473;
varonce469 = var470;
}
var474 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var474 = array_instance Array[String] */
var475 = 1;
var476 = NEW_array__NativeArray(var475, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var476)->values[0] = (val*) var470;
((void (*)(val*, val*, long))(var474->class->vft[COLOR_array__Array__with_native]))(var474, var476, var475) /* with_native on <var474:Array[String]>*/;
CHECK_NEW_array__Array(var474);
}
((void (*)(val*, val*, val*))(var463->class->vft[COLOR_opts__OptionBool__init]))(var463, var465, var474) /* init on <var463:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var463);
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_no_inline_intern].val = var463; /* @opt_no_inline_intern on <self:ToolContext exact> */
var477 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce478) {
var479 = varonce478;
} else {
var480 = "Put primitive attibutes in a box instead of an union";
var481 = 52;
var482 = string__NativeString__to_s_with_length(var480, var481);
var479 = var482;
varonce478 = var479;
}
if (varonce483) {
var484 = varonce483;
} else {
var485 = "--no-union-attribute";
var486 = 20;
var487 = string__NativeString__to_s_with_length(var485, var486);
var484 = var487;
varonce483 = var484;
}
var488 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var488 = array_instance Array[String] */
var489 = 1;
var490 = NEW_array__NativeArray(var489, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var490)->values[0] = (val*) var484;
((void (*)(val*, val*, long))(var488->class->vft[COLOR_array__Array__with_native]))(var488, var490, var489) /* with_native on <var488:Array[String]>*/;
CHECK_NEW_array__Array(var488);
}
((void (*)(val*, val*, val*))(var477->class->vft[COLOR_opts__OptionBool__init]))(var477, var479, var488) /* init on <var477:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var477);
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_no_union_attribute].val = var477; /* @opt_no_union_attribute on <self:ToolContext exact> */
var491 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce492) {
var493 = varonce492;
} else {
var494 = "Always call == in a polymorphic way";
var495 = 35;
var496 = string__NativeString__to_s_with_length(var494, var495);
var493 = var496;
varonce492 = var493;
}
if (varonce497) {
var498 = varonce497;
} else {
var499 = "--no-shortcut-equal";
var500 = 19;
var501 = string__NativeString__to_s_with_length(var499, var500);
var498 = var501;
varonce497 = var498;
}
var502 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var502 = array_instance Array[String] */
var503 = 1;
var504 = NEW_array__NativeArray(var503, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var504)->values[0] = (val*) var498;
((void (*)(val*, val*, long))(var502->class->vft[COLOR_array__Array__with_native]))(var502, var504, var503) /* with_native on <var502:Array[String]>*/;
CHECK_NEW_array__Array(var502);
}
((void (*)(val*, val*, val*))(var491->class->vft[COLOR_opts__OptionBool__init]))(var491, var493, var502) /* init on <var491:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var491);
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_no_shortcut_equate].val = var491; /* @opt_no_shortcut_equate on <self:ToolContext exact> */
var505 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce506) {
var507 = varonce506;
} else {
var508 = "Inline colors and ids";
var509 = 21;
var510 = string__NativeString__to_s_with_length(var508, var509);
var507 = var510;
varonce506 = var507;
}
if (varonce511) {
var512 = varonce511;
} else {
var513 = "--inline-coloring-numbers";
var514 = 25;
var515 = string__NativeString__to_s_with_length(var513, var514);
var512 = var515;
varonce511 = var512;
}
var516 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var516 = array_instance Array[String] */
var517 = 1;
var518 = NEW_array__NativeArray(var517, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var518)->values[0] = (val*) var512;
((void (*)(val*, val*, long))(var516->class->vft[COLOR_array__Array__with_native]))(var516, var518, var517) /* with_native on <var516:Array[String]>*/;
CHECK_NEW_array__Array(var516);
}
((void (*)(val*, val*, val*))(var505->class->vft[COLOR_opts__OptionBool__init]))(var505, var507, var516) /* init on <var505:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var505);
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_inline_coloring_numbers].val = var505; /* @opt_inline_coloring_numbers on <self:ToolContext exact> */
var519 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce520) {
var521 = varonce520;
} else {
var522 = "Colorize items incrementaly, used to simulate binary matrix typing";
var523 = 66;
var524 = string__NativeString__to_s_with_length(var522, var523);
var521 = var524;
varonce520 = var521;
}
if (varonce525) {
var526 = varonce525;
} else {
var527 = "--bm-typing";
var528 = 11;
var529 = string__NativeString__to_s_with_length(var527, var528);
var526 = var529;
varonce525 = var526;
}
var530 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var530 = array_instance Array[String] */
var531 = 1;
var532 = NEW_array__NativeArray(var531, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var532)->values[0] = (val*) var526;
((void (*)(val*, val*, long))(var530->class->vft[COLOR_array__Array__with_native]))(var530, var532, var531) /* with_native on <var530:Array[String]>*/;
CHECK_NEW_array__Array(var530);
}
((void (*)(val*, val*, val*))(var519->class->vft[COLOR_opts__OptionBool__init]))(var519, var521, var530) /* init on <var519:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var519);
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_bm_typing].val = var519; /* @opt_bm_typing on <self:ToolContext exact> */
var533 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce534) {
var535 = varonce534;
} else {
var536 = "Replace coloration by perfect hashing (with mod operator)";
var537 = 57;
var538 = string__NativeString__to_s_with_length(var536, var537);
var535 = var538;
varonce534 = var535;
}
if (varonce539) {
var540 = varonce539;
} else {
var541 = "--phmod-typing";
var542 = 14;
var543 = string__NativeString__to_s_with_length(var541, var542);
var540 = var543;
varonce539 = var540;
}
var544 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var544 = array_instance Array[String] */
var545 = 1;
var546 = NEW_array__NativeArray(var545, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var546)->values[0] = (val*) var540;
((void (*)(val*, val*, long))(var544->class->vft[COLOR_array__Array__with_native]))(var544, var546, var545) /* with_native on <var544:Array[String]>*/;
CHECK_NEW_array__Array(var544);
}
((void (*)(val*, val*, val*))(var533->class->vft[COLOR_opts__OptionBool__init]))(var533, var535, var544) /* init on <var533:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var533);
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_phmod_typing].val = var533; /* @opt_phmod_typing on <self:ToolContext exact> */
var547 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce548) {
var549 = varonce548;
} else {
var550 = "Replace coloration by perfect hashing (with and operator)";
var551 = 57;
var552 = string__NativeString__to_s_with_length(var550, var551);
var549 = var552;
varonce548 = var549;
}
if (varonce553) {
var554 = varonce553;
} else {
var555 = "--phand-typing";
var556 = 14;
var557 = string__NativeString__to_s_with_length(var555, var556);
var554 = var557;
varonce553 = var554;
}
var558 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var558 = array_instance Array[String] */
var559 = 1;
var560 = NEW_array__NativeArray(var559, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var560)->values[0] = (val*) var554;
((void (*)(val*, val*, long))(var558->class->vft[COLOR_array__Array__with_native]))(var558, var560, var559) /* with_native on <var558:Array[String]>*/;
CHECK_NEW_array__Array(var558);
}
((void (*)(val*, val*, val*))(var547->class->vft[COLOR_opts__OptionBool__init]))(var547, var549, var558) /* init on <var547:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var547);
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_phand_typing].val = var547; /* @opt_phand_typing on <self:ToolContext exact> */
var561 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce562) {
var563 = varonce562;
} else {
var564 = "Enable static size measuring of tables used for vft, typing and resolution";
var565 = 74;
var566 = string__NativeString__to_s_with_length(var564, var565);
var563 = var566;
varonce562 = var563;
}
if (varonce567) {
var568 = varonce567;
} else {
var569 = "--tables-metrics";
var570 = 16;
var571 = string__NativeString__to_s_with_length(var569, var570);
var568 = var571;
varonce567 = var568;
}
var572 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var572 = array_instance Array[String] */
var573 = 1;
var574 = NEW_array__NativeArray(var573, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var574)->values[0] = (val*) var568;
((void (*)(val*, val*, long))(var572->class->vft[COLOR_array__Array__with_native]))(var572, var574, var573) /* with_native on <var572:Array[String]>*/;
CHECK_NEW_array__Array(var572);
}
((void (*)(val*, val*, val*))(var561->class->vft[COLOR_opts__OptionBool__init]))(var561, var563, var572) /* init on <var561:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var561);
self->attrs[COLOR_separate_compiler__ToolContext___64dopt_tables_metrics].val = var561; /* @opt_tables_metrics on <self:ToolContext exact> */
var575 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce576) {
var577 = varonce576;
} else {
var578 = "Erase generic types";
var579 = 19;
var580 = string__NativeString__to_s_with_length(var578, var579);
var577 = var580;
varonce576 = var577;
}
if (varonce581) {
var582 = varonce581;
} else {
var583 = "--erasure";
var584 = 9;
var585 = string__NativeString__to_s_with_length(var583, var584);
var582 = var585;
varonce581 = var582;
}
var586 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var586 = array_instance Array[String] */
var587 = 1;
var588 = NEW_array__NativeArray(var587, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var588)->values[0] = (val*) var582;
((void (*)(val*, val*, long))(var586->class->vft[COLOR_array__Array__with_native]))(var586, var588, var587) /* with_native on <var586:Array[String]>*/;
CHECK_NEW_array__Array(var586);
}
((void (*)(val*, val*, val*))(var575->class->vft[COLOR_opts__OptionBool__init]))(var575, var577, var586) /* init on <var575:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var575);
self->attrs[COLOR_separate_erasure_compiler__ToolContext___64dopt_erasure].val = var575; /* @opt_erasure on <self:ToolContext exact> */
var589 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce590) {
var591 = varonce590;
} else {
var592 = "Disable implicit casts on unsafe return with erasure-typing policy (dangerous)";
var593 = 78;
var594 = string__NativeString__to_s_with_length(var592, var593);
var591 = var594;
varonce590 = var591;
}
if (varonce595) {
var596 = varonce595;
} else {
var597 = "--no-check-erasure-cast";
var598 = 23;
var599 = string__NativeString__to_s_with_length(var597, var598);
var596 = var599;
varonce595 = var596;
}
var600 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var600 = array_instance Array[String] */
var601 = 1;
var602 = NEW_array__NativeArray(var601, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var602)->values[0] = (val*) var596;
((void (*)(val*, val*, long))(var600->class->vft[COLOR_array__Array__with_native]))(var600, var602, var601) /* with_native on <var600:Array[String]>*/;
CHECK_NEW_array__Array(var600);
}
((void (*)(val*, val*, val*))(var589->class->vft[COLOR_opts__OptionBool__init]))(var589, var591, var600) /* init on <var589:OptionBool>*/;
CHECK_NEW_opts__OptionBool(var589);
self->attrs[COLOR_separate_erasure_compiler__ToolContext___64dopt_no_check_erasure_cast].val = var589; /* @opt_no_check_erasure_cast on <self:ToolContext exact> */
return self;
}
/* allocate ToolContext */
void CHECK_NEW_toolcontext__ToolContext(val* self) {
}
/* runtime class phase__AnnotationPhaseVisitor */
const struct class class_phase__AnnotationPhaseVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to phase:AnnotationPhaseVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to phase:AnnotationPhaseVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to phase:AnnotationPhaseVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to phase:AnnotationPhaseVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to phase:AnnotationPhaseVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to phase:AnnotationPhaseVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to phase:AnnotationPhaseVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to phase:AnnotationPhaseVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to phase:AnnotationPhaseVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to phase:AnnotationPhaseVisitor:math#Object#srand */
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
/* allocate AnnotationPhaseVisitor */
void CHECK_NEW_phase__AnnotationPhaseVisitor(val* self) {
val* var /* : Phase */;
var = self->attrs[COLOR_phase__AnnotationPhaseVisitor___64dphase].val; /* @phase on <self:AnnotationPhaseVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @phase", "src/phase.nit", 93);
exit(1);
}
}
/* runtime class simple_misc_analysis__SimpleMiscAnalysisPhase */
const struct class class_simple_misc_analysis__SimpleMiscAnalysisPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:math#Object#srand */
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
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__SimpleMiscAnalysisPhase__process_nmodule, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:simple_misc_analysis#SimpleMiscAnalysisPhase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to simple_misc_analysis:SimpleMiscAnalysisPhase:frontend#Phase#process_mainmodule */
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
/* allocate SimpleMiscAnalysisPhase */
void CHECK_NEW_simple_misc_analysis__SimpleMiscAnalysisPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:SimpleMiscAnalysisPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @toolcontext", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:SimpleMiscAnalysisPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @in_hierarchy", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class simple_misc_analysis__SimpleMiscVisitor */
const struct class class_simple_misc_analysis__SimpleMiscVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to simple_misc_analysis:SimpleMiscVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to simple_misc_analysis:SimpleMiscVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to simple_misc_analysis:SimpleMiscVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to simple_misc_analysis:SimpleMiscVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to simple_misc_analysis:SimpleMiscVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to simple_misc_analysis:SimpleMiscVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to simple_misc_analysis:SimpleMiscVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to simple_misc_analysis:SimpleMiscVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to simple_misc_analysis:SimpleMiscVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to simple_misc_analysis:SimpleMiscVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to simple_misc_analysis:SimpleMiscVisitor:math#Object#srand */
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
/* allocate SimpleMiscVisitor */
void CHECK_NEW_simple_misc_analysis__SimpleMiscVisitor(val* self) {
val* var /* : ToolContext */;
var = self->attrs[COLOR_simple_misc_analysis__SimpleMiscVisitor___64dtoolcontext].val; /* @toolcontext on <self:SimpleMiscVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @toolcontext", "src/simple_misc_analysis.nit", 57);
exit(1);
}
}
/* runtime class literal__LiteralPhase */
const struct class class_literal__LiteralPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to literal:LiteralPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to literal:LiteralPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to literal:LiteralPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to literal:LiteralPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to literal:LiteralPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to literal:LiteralPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to literal:LiteralPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to literal:LiteralPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to literal:LiteralPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to literal:LiteralPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to literal:LiteralPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to literal:LiteralPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to literal:LiteralPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to literal:LiteralPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to literal:LiteralPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to literal:LiteralPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to literal:LiteralPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to literal:LiteralPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to literal:LiteralPhase:math#Object#srand */
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
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to literal:LiteralPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to literal:LiteralPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to literal:LiteralPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to literal:LiteralPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to literal:LiteralPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_literal__LiteralPhase__process_nmodule, /* pointer to literal:LiteralPhase:literal#LiteralPhase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to literal:LiteralPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to literal:LiteralPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to literal:LiteralPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to literal:LiteralPhase:frontend#Phase#process_mainmodule */
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
/* allocate LiteralPhase */
void CHECK_NEW_literal__LiteralPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:LiteralPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @toolcontext", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:LiteralPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @in_hierarchy", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class literal__LiteralVisitor */
const struct class class_literal__LiteralVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to literal:LiteralVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to literal:LiteralVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to literal:LiteralVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to literal:LiteralVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to literal:LiteralVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to literal:LiteralVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to literal:LiteralVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to literal:LiteralVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to literal:LiteralVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to literal:LiteralVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to literal:LiteralVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to literal:LiteralVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to literal:LiteralVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to literal:LiteralVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to literal:LiteralVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to literal:LiteralVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to literal:LiteralVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to literal:LiteralVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to literal:LiteralVisitor:math#Object#srand */
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
/* allocate LiteralVisitor */
void CHECK_NEW_literal__LiteralVisitor(val* self) {
val* var /* : ToolContext */;
var = self->attrs[COLOR_literal__LiteralVisitor___64dtoolcontext].val; /* @toolcontext on <self:LiteralVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @toolcontext", "src/literal.nit", 47);
exit(1);
}
}
/* runtime class scope__ScopePhase */
const struct class class_scope__ScopePhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to scope:ScopePhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to scope:ScopePhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to scope:ScopePhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to scope:ScopePhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to scope:ScopePhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to scope:ScopePhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:ScopePhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:ScopePhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:ScopePhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to scope:ScopePhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to scope:ScopePhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to scope:ScopePhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to scope:ScopePhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to scope:ScopePhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to scope:ScopePhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to scope:ScopePhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to scope:ScopePhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to scope:ScopePhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to scope:ScopePhase:math#Object#srand */
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
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to scope:ScopePhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to scope:ScopePhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to scope:ScopePhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to scope:ScopePhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to scope:ScopePhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to scope:ScopePhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to scope:ScopePhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_scope__ScopePhase__process_npropdef, /* pointer to scope:ScopePhase:scope#ScopePhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to scope:ScopePhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to scope:ScopePhase:frontend#Phase#process_mainmodule */
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
/* allocate ScopePhase */
void CHECK_NEW_scope__ScopePhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:ScopePhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @toolcontext", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:ScopePhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @in_hierarchy", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class scope__Variable */
const struct class class_scope__Variable = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to scope:Variable:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to scope:Variable:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to scope:Variable:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to scope:Variable:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to scope:Variable:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to scope:Variable:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:Variable:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:Variable:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:Variable:kernel#Object#hash */
(nitmethod_t)VIRTUAL_scope__Variable__to_s, /* pointer to scope:Variable:scope#Variable#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to scope:Variable:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to scope:Variable:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to scope:Variable:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to scope:Variable:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to scope:Variable:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to scope:Variable:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to scope:Variable:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to scope:Variable:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to scope:Variable:math#Object#srand */
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
/* allocate Variable */
void CHECK_NEW_scope__Variable(val* self) {
val* var /* : String */;
val* var1 /* : nullable MType */;
var = self->attrs[COLOR_scope__Variable___64dname].val; /* @name on <self:Variable> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @name", "src/scope.nit", 36);
exit(1);
}
var1 = self->attrs[COLOR_typing__Variable___64ddeclared_type].val; /* @declared_type on <self:Variable> */
}
/* runtime class scope__ClosureVariable */
const struct class class_scope__ClosureVariable = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to scope:ClosureVariable:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to scope:ClosureVariable:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to scope:ClosureVariable:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to scope:ClosureVariable:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to scope:ClosureVariable:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to scope:ClosureVariable:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:ClosureVariable:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:ClosureVariable:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:ClosureVariable:kernel#Object#hash */
(nitmethod_t)VIRTUAL_scope__Variable__to_s, /* pointer to scope:ClosureVariable:scope#Variable#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to scope:ClosureVariable:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to scope:ClosureVariable:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to scope:ClosureVariable:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to scope:ClosureVariable:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to scope:ClosureVariable:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to scope:ClosureVariable:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to scope:ClosureVariable:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to scope:ClosureVariable:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to scope:ClosureVariable:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to scope:ClosureVariable:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to scope:ClosureVariable:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to scope:ClosureVariable:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to scope:ClosureVariable:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to scope:ClosureVariable:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to scope:ClosureVariable:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to scope:ClosureVariable:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to scope:ClosureVariable:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to scope:ClosureVariable:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to scope:ClosureVariable:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to scope:ClosureVariable:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to scope:ClosureVariable:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to scope:ClosureVariable:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to scope:ClosureVariable:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to scope:ClosureVariable:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to scope:ClosureVariable:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to scope:ClosureVariable:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to scope:ClosureVariable:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to scope:ClosureVariable:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to scope:ClosureVariable:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to scope:ClosureVariable:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to scope:ClosureVariable:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_scope__Variable__name, /* pointer to scope:ClosureVariable:scope#Variable#name */
(nitmethod_t)VIRTUAL_scope__Variable__name_61d, /* pointer to scope:ClosureVariable:scope#Variable#name= */
(nitmethod_t)VIRTUAL_scope__Variable__init, /* pointer to scope:ClosureVariable:scope#Variable#init */
(nitmethod_t)VIRTUAL_typing__Variable__declared_type, /* pointer to scope:ClosureVariable:typing#Variable#declared_type */
(nitmethod_t)VIRTUAL_typing__Variable__declared_type_61d, /* pointer to scope:ClosureVariable:typing#Variable#declared_type= */
}
};
/* allocate ClosureVariable */
val* NEW_scope__ClosureVariable(const struct type* type) {
val* self /* : ClosureVariable */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_scope__ClosureVariable;
return self;
}
/* allocate ClosureVariable */
void CHECK_NEW_scope__ClosureVariable(val* self) {
val* var /* : String */;
val* var1 /* : nullable MType */;
var = self->attrs[COLOR_scope__Variable___64dname].val; /* @name on <self:ClosureVariable> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @name", "src/scope.nit", 36);
exit(1);
}
var1 = self->attrs[COLOR_typing__Variable___64ddeclared_type].val; /* @declared_type on <self:ClosureVariable> */
}
/* runtime class scope__EscapeMark */
const struct class class_scope__EscapeMark = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to scope:EscapeMark:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to scope:EscapeMark:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to scope:EscapeMark:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to scope:EscapeMark:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to scope:EscapeMark:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to scope:EscapeMark:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:EscapeMark:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:EscapeMark:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:EscapeMark:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to scope:EscapeMark:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to scope:EscapeMark:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to scope:EscapeMark:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to scope:EscapeMark:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to scope:EscapeMark:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to scope:EscapeMark:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to scope:EscapeMark:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to scope:EscapeMark:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to scope:EscapeMark:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to scope:EscapeMark:math#Object#srand */
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
CHECK_NEW_array__Array(var);
self->attrs[COLOR_scope__EscapeMark___64dcontinues].val = var; /* @continues on <self:EscapeMark exact> */
var1 = NEW_array__Array(&type_array__Arrayparser_nodes__ABreakExpr);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[ABreakExpr]>*/;
CHECK_NEW_array__Array(var1);
self->attrs[COLOR_scope__EscapeMark___64dbreaks].val = var1; /* @breaks on <self:EscapeMark exact> */
return self;
}
/* allocate EscapeMark */
void CHECK_NEW_scope__EscapeMark(val* self) {
val* var /* : nullable String */;
short int var1 /* : Bool */;
var = self->attrs[COLOR_scope__EscapeMark___64dname].val; /* @name on <self:EscapeMark> */
var1 = self->attrs[COLOR_scope__EscapeMark___64dfor_loop].s; /* @for_loop on <self:EscapeMark> */
}
/* runtime class scope__ScopeVisitor */
const struct class class_scope__ScopeVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to scope:ScopeVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to scope:ScopeVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to scope:ScopeVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to scope:ScopeVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to scope:ScopeVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to scope:ScopeVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:ScopeVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:ScopeVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:ScopeVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to scope:ScopeVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to scope:ScopeVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to scope:ScopeVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to scope:ScopeVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to scope:ScopeVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to scope:ScopeVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to scope:ScopeVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to scope:ScopeVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to scope:ScopeVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to scope:ScopeVisitor:math#Object#srand */
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
CHECK_NEW_scope__Variable(var1);
self->attrs[COLOR_scope__ScopeVisitor___64dselfvariable].val = var1; /* @selfvariable on <self:ScopeVisitor exact> */
var6 = NEW_list__List(&type_list__Listscope__Scope);
((void (*)(val*))(var6->class->vft[COLOR_list__List__init]))(var6) /* init on <var6:List[Scope]>*/;
CHECK_NEW_list__List(var6);
self->attrs[COLOR_scope__ScopeVisitor___64dscopes].val = var6; /* @scopes on <self:ScopeVisitor exact> */
return self;
}
/* allocate ScopeVisitor */
void CHECK_NEW_scope__ScopeVisitor(val* self) {
val* var /* : ToolContext */;
var = self->attrs[COLOR_scope__ScopeVisitor___64dtoolcontext].val; /* @toolcontext on <self:ScopeVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @toolcontext", "src/scope.nit", 74);
exit(1);
}
}
/* runtime class scope__Scope */
const struct class class_scope__Scope = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to scope:Scope:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to scope:Scope:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to scope:Scope:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to scope:Scope:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to scope:Scope:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to scope:Scope:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:Scope:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:Scope:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:Scope:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to scope:Scope:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to scope:Scope:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to scope:Scope:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to scope:Scope:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to scope:Scope:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to scope:Scope:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to scope:Scope:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to scope:Scope:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to scope:Scope:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to scope:Scope:math#Object#srand */
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
CHECK_NEW_hash_collection__HashMap(var);
self->attrs[COLOR_scope__Scope___64dvariables].val = var; /* @variables on <self:Scope exact> */
var1 = NULL;
self->attrs[COLOR_scope__Scope___64descapemark].val = var1; /* @escapemark on <self:Scope exact> */
return self;
}
/* allocate Scope */
void CHECK_NEW_scope__Scope(val* self) {
}
/* runtime class flow__FlowPhase */
const struct class class_flow__FlowPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to flow:FlowPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to flow:FlowPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to flow:FlowPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to flow:FlowPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to flow:FlowPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to flow:FlowPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to flow:FlowPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to flow:FlowPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to flow:FlowPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to flow:FlowPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to flow:FlowPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to flow:FlowPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to flow:FlowPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to flow:FlowPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to flow:FlowPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to flow:FlowPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to flow:FlowPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to flow:FlowPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to flow:FlowPhase:math#Object#srand */
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
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to flow:FlowPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to flow:FlowPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to flow:FlowPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to flow:FlowPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to flow:FlowPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to flow:FlowPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to flow:FlowPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_flow__FlowPhase__process_npropdef, /* pointer to flow:FlowPhase:flow#FlowPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to flow:FlowPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to flow:FlowPhase:frontend#Phase#process_mainmodule */
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
/* allocate FlowPhase */
void CHECK_NEW_flow__FlowPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:FlowPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @toolcontext", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:FlowPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @in_hierarchy", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class flow__FlowVisitor */
const struct class class_flow__FlowVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to flow:FlowVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to flow:FlowVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to flow:FlowVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to flow:FlowVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to flow:FlowVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to flow:FlowVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to flow:FlowVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to flow:FlowVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to flow:FlowVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to flow:FlowVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to flow:FlowVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to flow:FlowVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to flow:FlowVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to flow:FlowVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to flow:FlowVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to flow:FlowVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to flow:FlowVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to flow:FlowVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to flow:FlowVisitor:math#Object#srand */
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
CHECK_NEW_array__Array(var1);
self->attrs[COLOR_flow__FlowVisitor___64dflows].val = var1; /* @flows on <self:FlowVisitor exact> */
return self;
}
/* allocate FlowVisitor */
void CHECK_NEW_flow__FlowVisitor(val* self) {
val* var /* : FlowContext */;
val* var1 /* : ToolContext */;
val* var2 /* : nullable ANode */;
var = self->attrs[COLOR_flow__FlowVisitor___64dcurrent_flow_context].val; /* @current_flow_context on <self:FlowVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @current_flow_context", "src/flow.nit", 39);
exit(1);
}
var1 = self->attrs[COLOR_flow__FlowVisitor___64dtoolcontext].val; /* @toolcontext on <self:FlowVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @toolcontext", "src/flow.nit", 41);
exit(1);
}
var2 = self->attrs[COLOR_flow__FlowVisitor___64dfirst].val; /* @first on <self:FlowVisitor> */
}
/* runtime class flow__FlowContext */
const struct class class_flow__FlowContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to flow:FlowContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to flow:FlowContext:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to flow:FlowContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to flow:FlowContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to flow:FlowContext:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to flow:FlowContext:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to flow:FlowContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to flow:FlowContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to flow:FlowContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to flow:FlowContext:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to flow:FlowContext:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to flow:FlowContext:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to flow:FlowContext:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to flow:FlowContext:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to flow:FlowContext:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to flow:FlowContext:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to flow:FlowContext:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to flow:FlowContext:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to flow:FlowContext:math#Object#srand */
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
CHECK_NEW_array__Array(var);
self->attrs[COLOR_flow__FlowContext___64dprevious].val = var; /* @previous on <self:FlowContext exact> */
var1 = NEW_array__Array(&type_array__Arrayflow__FlowContext);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[FlowContext]>*/;
CHECK_NEW_array__Array(var1);
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
CHECK_NEW_hash_collection__HashSet(var10);
self->attrs[COLOR_local_var_init__FlowContext___64dset_vars].val = var10; /* @set_vars on <self:FlowContext exact> */
var11 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__Variablenullable_model__MType);
((void (*)(val*))(var11->class->vft[COLOR_hash_collection__HashMap__init]))(var11) /* init on <var11:HashMap[Variable, nullable MType]>*/;
CHECK_NEW_hash_collection__HashMap(var11);
self->attrs[COLOR_typing__FlowContext___64dvars].val = var11; /* @vars on <self:FlowContext exact> */
var12 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__Variablenullable_array__Arraynullable_model__MType);
((void (*)(val*))(var12->class->vft[COLOR_hash_collection__HashMap__init]))(var12) /* init on <var12:HashMap[Variable, nullable Array[nullable MType]]>*/;
CHECK_NEW_hash_collection__HashMap(var12);
self->attrs[COLOR_typing__FlowContext___64dcache].val = var12; /* @cache on <self:FlowContext exact> */
return self;
}
/* allocate FlowContext */
void CHECK_NEW_flow__FlowContext(val* self) {
}
/* runtime class local_var_init__LocalVarInitPhase */
const struct class class_local_var_init__LocalVarInitPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to local_var_init:LocalVarInitPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to local_var_init:LocalVarInitPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to local_var_init:LocalVarInitPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to local_var_init:LocalVarInitPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to local_var_init:LocalVarInitPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to local_var_init:LocalVarInitPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to local_var_init:LocalVarInitPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to local_var_init:LocalVarInitPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to local_var_init:LocalVarInitPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to local_var_init:LocalVarInitPhase:math#Object#srand */
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
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitPhase__process_npropdef, /* pointer to local_var_init:LocalVarInitPhase:local_var_init#LocalVarInitPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to local_var_init:LocalVarInitPhase:frontend#Phase#process_mainmodule */
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
/* allocate LocalVarInitPhase */
void CHECK_NEW_local_var_init__LocalVarInitPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:LocalVarInitPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @toolcontext", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:LocalVarInitPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @in_hierarchy", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class local_var_init__LocalVarInitVisitor */
const struct class class_local_var_init__LocalVarInitVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to local_var_init:LocalVarInitVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to local_var_init:LocalVarInitVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to local_var_init:LocalVarInitVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to local_var_init:LocalVarInitVisitor:math#Object#srand */
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
CHECK_NEW_hash_collection__HashSet(var1);
self->attrs[COLOR_local_var_init__LocalVarInitVisitor___64dmaybe_unset_vars].val = var1; /* @maybe_unset_vars on <self:LocalVarInitVisitor exact> */
return self;
}
/* allocate LocalVarInitVisitor */
void CHECK_NEW_local_var_init__LocalVarInitVisitor(val* self) {
val* var /* : ToolContext */;
var = self->attrs[COLOR_local_var_init__LocalVarInitVisitor___64dtoolcontext].val; /* @toolcontext on <self:LocalVarInitVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @toolcontext", "src/local_var_init.nit", 47);
exit(1);
}
}
/* runtime class typing__TypingPhase */
const struct class class_typing__TypingPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to typing:TypingPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to typing:TypingPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to typing:TypingPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to typing:TypingPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to typing:TypingPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to typing:TypingPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to typing:TypingPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to typing:TypingPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to typing:TypingPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to typing:TypingPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to typing:TypingPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to typing:TypingPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to typing:TypingPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to typing:TypingPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to typing:TypingPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to typing:TypingPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to typing:TypingPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to typing:TypingPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to typing:TypingPhase:math#Object#srand */
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
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to typing:TypingPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to typing:TypingPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to typing:TypingPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to typing:TypingPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to typing:TypingPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to typing:TypingPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to typing:TypingPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_typing__TypingPhase__process_npropdef, /* pointer to typing:TypingPhase:typing#TypingPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to typing:TypingPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to typing:TypingPhase:frontend#Phase#process_mainmodule */
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
/* allocate TypingPhase */
void CHECK_NEW_typing__TypingPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:TypingPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @toolcontext", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:TypingPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @in_hierarchy", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class typing__TypeVisitor */
const struct class class_typing__TypeVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to typing:TypeVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to typing:TypeVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to typing:TypeVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to typing:TypeVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to typing:TypeVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to typing:TypeVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to typing:TypeVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to typing:TypeVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to typing:TypeVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to typing:TypeVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to typing:TypeVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to typing:TypeVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to typing:TypeVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to typing:TypeVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to typing:TypeVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to typing:TypeVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to typing:TypeVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to typing:TypeVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to typing:TypeVisitor:math#Object#srand */
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
CHECK_NEW_scope__Variable(var);
self->attrs[COLOR_typing__TypeVisitor___64dselfvariable].val = var; /* @selfvariable on <self:TypeVisitor exact> */
return self;
}
/* allocate TypeVisitor */
void CHECK_NEW_typing__TypeVisitor(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : AClassdef */;
val* var2 /* : MPropDef */;
var = self->attrs[COLOR_typing__TypeVisitor___64dmodelbuilder].val; /* @modelbuilder on <self:TypeVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @modelbuilder", "src/typing.nit", 41);
exit(1);
}
var1 = self->attrs[COLOR_typing__TypeVisitor___64dnclassdef].val; /* @nclassdef on <self:TypeVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @nclassdef", "src/typing.nit", 42);
exit(1);
}
var2 = self->attrs[COLOR_typing__TypeVisitor___64dmpropdef].val; /* @mpropdef on <self:TypeVisitor> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mpropdef", "src/typing.nit", 43);
exit(1);
}
}
/* runtime class typing__CallSite */
const struct class class_typing__CallSite = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to typing:CallSite:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to typing:CallSite:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to typing:CallSite:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to typing:CallSite:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to typing:CallSite:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to typing:CallSite:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to typing:CallSite:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to typing:CallSite:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to typing:CallSite:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to typing:CallSite:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to typing:CallSite:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to typing:CallSite:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to typing:CallSite:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to typing:CallSite:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to typing:CallSite:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to typing:CallSite:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to typing:CallSite:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to typing:CallSite:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to typing:CallSite:math#Object#srand */
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
/* allocate CallSite */
void CHECK_NEW_typing__CallSite(val* self) {
val* var /* : ANode */;
val* var1 /* : MType */;
short int var2 /* : Bool */;
val* var3 /* : MMethod */;
val* var4 /* : MMethodDef */;
val* var5 /* : MSignature */;
short int var6 /* : Bool */;
var = self->attrs[COLOR_typing__CallSite___64dnode].val; /* @node on <self:CallSite> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @node", "src/typing.nit", 391);
exit(1);
}
var1 = self->attrs[COLOR_typing__CallSite___64drecv].val; /* @recv on <self:CallSite> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @recv", "src/typing.nit", 394);
exit(1);
}
var2 = self->attrs[COLOR_typing__CallSite___64drecv_is_self].s; /* @recv_is_self on <self:CallSite> */
var3 = self->attrs[COLOR_typing__CallSite___64dmproperty].val; /* @mproperty on <self:CallSite> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mproperty", "src/typing.nit", 402);
exit(1);
}
var4 = self->attrs[COLOR_typing__CallSite___64dmpropdef].val; /* @mpropdef on <self:CallSite> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mpropdef", "src/typing.nit", 405);
exit(1);
}
var5 = self->attrs[COLOR_typing__CallSite___64dmsignature].val; /* @msignature on <self:CallSite> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @msignature", "src/typing.nit", 409);
exit(1);
}
var6 = self->attrs[COLOR_typing__CallSite___64derasure_cast].s; /* @erasure_cast on <self:CallSite> */
}
/* runtime class modelize_property__ModelizePropertyPhase */
const struct class class_modelize_property__ModelizePropertyPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to modelize_property:ModelizePropertyPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to modelize_property:ModelizePropertyPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to modelize_property:ModelizePropertyPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to modelize_property:ModelizePropertyPhase:math#Object#srand */
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
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_modelize_property__ModelizePropertyPhase__process_nmodule, /* pointer to modelize_property:ModelizePropertyPhase:modelize_property#ModelizePropertyPhase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to modelize_property:ModelizePropertyPhase:frontend#Phase#process_mainmodule */
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
/* allocate ModelizePropertyPhase */
void CHECK_NEW_modelize_property__ModelizePropertyPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:ModelizePropertyPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @toolcontext", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:ModelizePropertyPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @in_hierarchy", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class modelize_property__TextCollectorVisitor */
const struct class class_modelize_property__TextCollectorVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to modelize_property:TextCollectorVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to modelize_property:TextCollectorVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to modelize_property:TextCollectorVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to modelize_property:TextCollectorVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to modelize_property:TextCollectorVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to modelize_property:TextCollectorVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to modelize_property:TextCollectorVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to modelize_property:TextCollectorVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to modelize_property:TextCollectorVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to modelize_property:TextCollectorVisitor:math#Object#srand */
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
/* allocate TextCollectorVisitor */
void CHECK_NEW_modelize_property__TextCollectorVisitor(val* self) {
}
/* runtime class modelize_class__ModelizeClassPhase */
const struct class class_modelize_class__ModelizeClassPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to modelize_class:ModelizeClassPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to modelize_class:ModelizeClassPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to modelize_class:ModelizeClassPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to modelize_class:ModelizeClassPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to modelize_class:ModelizeClassPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to modelize_class:ModelizeClassPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to modelize_class:ModelizeClassPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to modelize_class:ModelizeClassPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to modelize_class:ModelizeClassPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to modelize_class:ModelizeClassPhase:math#Object#srand */
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
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_modelize_class__ModelizeClassPhase__process_nmodule, /* pointer to modelize_class:ModelizeClassPhase:modelize_class#ModelizeClassPhase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to modelize_class:ModelizeClassPhase:frontend#Phase#process_mainmodule */
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
/* allocate ModelizeClassPhase */
void CHECK_NEW_modelize_class__ModelizeClassPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:ModelizeClassPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @toolcontext", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:ModelizeClassPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @in_hierarchy", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class auto_super_init__AutoSuperInitPhase */
const struct class class_auto_super_init__AutoSuperInitPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to auto_super_init:AutoSuperInitPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to auto_super_init:AutoSuperInitPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to auto_super_init:AutoSuperInitPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to auto_super_init:AutoSuperInitPhase:math#Object#srand */
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
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_auto_super_init__AutoSuperInitPhase__process_npropdef, /* pointer to auto_super_init:AutoSuperInitPhase:auto_super_init#AutoSuperInitPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to auto_super_init:AutoSuperInitPhase:frontend#Phase#process_mainmodule */
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
/* allocate AutoSuperInitPhase */
void CHECK_NEW_auto_super_init__AutoSuperInitPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:AutoSuperInitPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @toolcontext", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:AutoSuperInitPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @in_hierarchy", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class auto_super_init__AutoSuperInitVisitor */
const struct class class_auto_super_init__AutoSuperInitVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to auto_super_init:AutoSuperInitVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to auto_super_init:AutoSuperInitVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to auto_super_init:AutoSuperInitVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to auto_super_init:AutoSuperInitVisitor:math#Object#srand */
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
/* allocate AutoSuperInitVisitor */
void CHECK_NEW_auto_super_init__AutoSuperInitVisitor(val* self) {
}
/* runtime class div_by_zero__DivByZeroPhase */
const struct class class_div_by_zero__DivByZeroPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to div_by_zero:DivByZeroPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to div_by_zero:DivByZeroPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to div_by_zero:DivByZeroPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to div_by_zero:DivByZeroPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to div_by_zero:DivByZeroPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to div_by_zero:DivByZeroPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to div_by_zero:DivByZeroPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to div_by_zero:DivByZeroPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to div_by_zero:DivByZeroPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to div_by_zero:DivByZeroPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to div_by_zero:DivByZeroPhase:math#Object#srand */
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
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_div_by_zero__DivByZeroPhase__process_nmodule, /* pointer to div_by_zero:DivByZeroPhase:div_by_zero#DivByZeroPhase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to div_by_zero:DivByZeroPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to div_by_zero:DivByZeroPhase:frontend#Phase#process_mainmodule */
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
/* allocate DivByZeroPhase */
void CHECK_NEW_div_by_zero__DivByZeroPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:DivByZeroPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @toolcontext", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:DivByZeroPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @in_hierarchy", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class div_by_zero__DivByZeroVisitor */
const struct class class_div_by_zero__DivByZeroVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to div_by_zero:DivByZeroVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to div_by_zero:DivByZeroVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to div_by_zero:DivByZeroVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to div_by_zero:DivByZeroVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to div_by_zero:DivByZeroVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to div_by_zero:DivByZeroVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to div_by_zero:DivByZeroVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to div_by_zero:DivByZeroVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to div_by_zero:DivByZeroVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to div_by_zero:DivByZeroVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to div_by_zero:DivByZeroVisitor:math#Object#srand */
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
/* allocate DivByZeroVisitor */
void CHECK_NEW_div_by_zero__DivByZeroVisitor(val* self) {
val* var /* : ToolContext */;
val* var1 /* : MModule */;
var = self->attrs[COLOR_div_by_zero__DivByZeroVisitor___64dtoolcontext].val; /* @toolcontext on <self:DivByZeroVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @toolcontext", "src/div_by_zero.nit", 53);
exit(1);
}
var1 = self->attrs[COLOR_div_by_zero__DivByZeroVisitor___64dmmodule].val; /* @mmodule on <self:DivByZeroVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mmodule", "src/div_by_zero.nit", 56);
exit(1);
}
}
/* runtime class cached__CachedPhase */
const struct class class_cached__CachedPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to cached:CachedPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to cached:CachedPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to cached:CachedPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to cached:CachedPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to cached:CachedPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to cached:CachedPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to cached:CachedPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to cached:CachedPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to cached:CachedPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to cached:CachedPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to cached:CachedPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to cached:CachedPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to cached:CachedPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to cached:CachedPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to cached:CachedPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to cached:CachedPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to cached:CachedPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to cached:CachedPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to cached:CachedPhase:math#Object#srand */
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
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to cached:CachedPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to cached:CachedPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to cached:CachedPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to cached:CachedPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to cached:CachedPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to cached:CachedPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to cached:CachedPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to cached:CachedPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_cached__CachedPhase__process_annotated_node, /* pointer to cached:CachedPhase:cached#CachedPhase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to cached:CachedPhase:frontend#Phase#process_mainmodule */
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
/* allocate CachedPhase */
void CHECK_NEW_cached__CachedPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:CachedPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @toolcontext", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:CachedPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @in_hierarchy", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class parser_util__InjectedLexer */
/* allocate InjectedLexer */
val* NEW_parser_util__InjectedLexer(const struct type* type) {
fprintf(stderr, "Runtime error: %s\n", "InjectedLexer is DEAD");
exit(1);
}
/* allocate InjectedLexer */
void CHECK_NEW_parser_util__InjectedLexer(val* self) {
fprintf(stderr, "Runtime error: %s\n", "InjectedLexer is DEAD");
exit(1);
}
/* runtime class parser_util__CollectTokensByTextVisitor */
const struct class class_parser_util__CollectTokensByTextVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_util:CollectTokensByTextVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_util:CollectTokensByTextVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_util:CollectTokensByTextVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_util:CollectTokensByTextVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_util:CollectTokensByTextVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_util:CollectTokensByTextVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_util:CollectTokensByTextVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_util:CollectTokensByTextVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_util:CollectTokensByTextVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_util:CollectTokensByTextVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_util:CollectTokensByTextVisitor:math#Object#srand */
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
CHECK_NEW_array__Array(var1);
self->attrs[COLOR_parser_util__CollectTokensByTextVisitor___64dresult].val = var1; /* @result on <self:CollectTokensByTextVisitor exact> */
return self;
}
/* allocate CollectTokensByTextVisitor */
void CHECK_NEW_parser_util__CollectTokensByTextVisitor(val* self) {
val* var /* : String */;
var = self->attrs[COLOR_parser_util__CollectTokensByTextVisitor___64dtext].val; /* @text on <self:CollectTokensByTextVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @text", "src/parser_util.nit", 213);
exit(1);
}
}
/* runtime class parser_util__CollectAnnotationsByNameVisitor */
/* allocate CollectAnnotationsByNameVisitor */
val* NEW_parser_util__CollectAnnotationsByNameVisitor(const struct type* type) {
fprintf(stderr, "Runtime error: %s\n", "CollectAnnotationsByNameVisitor is DEAD");
exit(1);
}
/* allocate CollectAnnotationsByNameVisitor */
void CHECK_NEW_parser_util__CollectAnnotationsByNameVisitor(val* self) {
fprintf(stderr, "Runtime error: %s\n", "CollectAnnotationsByNameVisitor is DEAD");
exit(1);
}
/* runtime class transform__TransformPhase */
const struct class class_transform__TransformPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to transform:TransformPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to transform:TransformPhase:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to transform:TransformPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to transform:TransformPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to transform:TransformPhase:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to transform:TransformPhase:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to transform:TransformPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to transform:TransformPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to transform:TransformPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to transform:TransformPhase:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to transform:TransformPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to transform:TransformPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to transform:TransformPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to transform:TransformPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to transform:TransformPhase:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to transform:TransformPhase:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to transform:TransformPhase:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to transform:TransformPhase:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to transform:TransformPhase:math#Object#srand */
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
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to transform:TransformPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to transform:TransformPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to transform:TransformPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to transform:TransformPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to transform:TransformPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to transform:TransformPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to transform:TransformPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_transform__TransformPhase__process_npropdef, /* pointer to transform:TransformPhase:transform#TransformPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to transform:TransformPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_frontend__Phase__process_mainmodule, /* pointer to transform:TransformPhase:frontend#Phase#process_mainmodule */
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
/* allocate TransformPhase */
void CHECK_NEW_transform__TransformPhase(val* self) {
val* var /* : ToolContext */;
val* var1 /* : POSetElement[Phase] */;
var = self->attrs[COLOR_phase__Phase___64dtoolcontext].val; /* @toolcontext on <self:TransformPhase> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @toolcontext", "src/phase.nit", 107);
exit(1);
}
var1 = self->attrs[COLOR_phase__Phase___64din_hierarchy].val; /* @in_hierarchy on <self:TransformPhase> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @in_hierarchy", "src/phase.nit", 110);
exit(1);
}
}
/* runtime class transform__TransformVisitor */
const struct class class_transform__TransformVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to transform:TransformVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to transform:TransformVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to transform:TransformVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to transform:TransformVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to transform:TransformVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to transform:TransformVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to transform:TransformVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to transform:TransformVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to transform:TransformVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to transform:TransformVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to transform:TransformVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to transform:TransformVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to transform:TransformVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to transform:TransformVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to transform:TransformVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to transform:TransformVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to transform:TransformVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to transform:TransformVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to transform:TransformVisitor:math#Object#srand */
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
/* allocate TransformVisitor */
void CHECK_NEW_transform__TransformVisitor(val* self) {
val* var /* : TransformPhase */;
val* var1 /* : MModule */;
val* var2 /* : MClassDef */;
val* var3 /* : MPropDef */;
val* var4 /* : ASTBuilder */;
var = self->attrs[COLOR_transform__TransformVisitor___64dphase].val; /* @phase on <self:TransformVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @phase", "src/transform.nit", 45);
exit(1);
}
var1 = self->attrs[COLOR_transform__TransformVisitor___64dmmodule].val; /* @mmodule on <self:TransformVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mmodule", "src/transform.nit", 46);
exit(1);
}
var2 = self->attrs[COLOR_transform__TransformVisitor___64dmclassdef].val; /* @mclassdef on <self:TransformVisitor> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mclassdef", "src/transform.nit", 47);
exit(1);
}
var3 = self->attrs[COLOR_transform__TransformVisitor___64dmpropdef].val; /* @mpropdef on <self:TransformVisitor> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mpropdef", "src/transform.nit", 48);
exit(1);
}
var4 = self->attrs[COLOR_transform__TransformVisitor___64dbuilder].val; /* @builder on <self:TransformVisitor> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @builder", "src/transform.nit", 49);
exit(1);
}
}
/* runtime class astbuilder__ASTBuilder */
const struct class class_astbuilder__ASTBuilder = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to astbuilder:ASTBuilder:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to astbuilder:ASTBuilder:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to astbuilder:ASTBuilder:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to astbuilder:ASTBuilder:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to astbuilder:ASTBuilder:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to astbuilder:ASTBuilder:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to astbuilder:ASTBuilder:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to astbuilder:ASTBuilder:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to astbuilder:ASTBuilder:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to astbuilder:ASTBuilder:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to astbuilder:ASTBuilder:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to astbuilder:ASTBuilder:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to astbuilder:ASTBuilder:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to astbuilder:ASTBuilder:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to astbuilder:ASTBuilder:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to astbuilder:ASTBuilder:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to astbuilder:ASTBuilder:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to astbuilder:ASTBuilder:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to astbuilder:ASTBuilder:math#Object#srand */
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
/* allocate ASTBuilder */
void CHECK_NEW_astbuilder__ASTBuilder(val* self) {
val* var /* : MModule */;
val* var1 /* : nullable MClassType */;
var = self->attrs[COLOR_astbuilder__ASTBuilder___64dmmodule].val; /* @mmodule on <self:ASTBuilder> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mmodule", "src/astbuilder.nit", 25);
exit(1);
}
var1 = self->attrs[COLOR_astbuilder__ASTBuilder___64danchor].val; /* @anchor on <self:ASTBuilder> */
}
/* runtime class astbuilder__APlaceholderExpr */
const struct class class_astbuilder__APlaceholderExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to astbuilder:APlaceholderExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to astbuilder:APlaceholderExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to astbuilder:APlaceholderExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to astbuilder:APlaceholderExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to astbuilder:APlaceholderExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to astbuilder:APlaceholderExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to astbuilder:APlaceholderExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to astbuilder:APlaceholderExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to astbuilder:APlaceholderExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to astbuilder:APlaceholderExpr:math#Object#srand */
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
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to astbuilder:APlaceholderExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__APlaceholderExpr__accept_ast_validation, /* pointer to astbuilder:APlaceholderExpr:astvalidation#APlaceholderExpr#accept_ast_validation */
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
/* allocate APlaceholderExpr */
void CHECK_NEW_astbuilder__APlaceholderExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:APlaceholderExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:APlaceholderExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:APlaceholderExpr> */
}
/* runtime class astvalidation__ASTValidationVisitor */
const struct class class_astvalidation__ASTValidationVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to astvalidation:ASTValidationVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to astvalidation:ASTValidationVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to astvalidation:ASTValidationVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to astvalidation:ASTValidationVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to astvalidation:ASTValidationVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to astvalidation:ASTValidationVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to astvalidation:ASTValidationVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to astvalidation:ASTValidationVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to astvalidation:ASTValidationVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to astvalidation:ASTValidationVisitor:math#Object#srand */
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
CHECK_NEW_list__List(var1);
self->attrs[COLOR_astvalidation__ASTValidationVisitor___64dpath].val = var1; /* @path on <self:ASTValidationVisitor exact> */
var2 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetparser_nodes__ANode);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashSet__init]))(var2) /* init on <var2:HashSet[ANode]>*/;
CHECK_NEW_hash_collection__HashSet(var2);
self->attrs[COLOR_astvalidation__ASTValidationVisitor___64dseen].val = var2; /* @seen on <self:ASTValidationVisitor exact> */
return self;
}
/* allocate ASTValidationVisitor */
void CHECK_NEW_astvalidation__ASTValidationVisitor(val* self) {
}
/* runtime class rapid_type_analysis__RapidTypeAnalysis */
const struct class class_rapid_type_analysis__RapidTypeAnalysis = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to rapid_type_analysis:RapidTypeAnalysis:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to rapid_type_analysis:RapidTypeAnalysis:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to rapid_type_analysis:RapidTypeAnalysis:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to rapid_type_analysis:RapidTypeAnalysis:math#Object#srand */
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
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__totry_methods, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#totry_methods */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__totry_methods_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#totry_methods= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__todo, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#todo */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__todo_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#todo= */
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
val* var3 /* : HashSet[MClassType] */;
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
CHECK_NEW_hash_collection__HashSet(var);
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_types].val = var; /* @live_types on <self:RapidTypeAnalysis exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClassType);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[MClassType]>*/;
CHECK_NEW_hash_collection__HashSet(var1);
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_open_types].val = var1; /* @live_open_types on <self:RapidTypeAnalysis exact> */
var2 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClass);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashSet__init]))(var2) /* init on <var2:HashSet[MClass]>*/;
CHECK_NEW_hash_collection__HashSet(var2);
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_classes].val = var2; /* @live_classes on <self:RapidTypeAnalysis exact> */
var3 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClassType);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashSet__init]))(var3) /* init on <var3:HashSet[MClassType]>*/;
CHECK_NEW_hash_collection__HashSet(var3);
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_cast_types].val = var3; /* @live_cast_types on <self:RapidTypeAnalysis exact> */
var4 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var4->class->vft[COLOR_hash_collection__HashSet__init]))(var4) /* init on <var4:HashSet[MType]>*/;
CHECK_NEW_hash_collection__HashSet(var4);
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_open_cast_types].val = var4; /* @live_open_cast_types on <self:RapidTypeAnalysis exact> */
var5 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MMethodDef);
((void (*)(val*))(var5->class->vft[COLOR_hash_collection__HashSet__init]))(var5) /* init on <var5:HashSet[MMethodDef]>*/;
CHECK_NEW_hash_collection__HashSet(var5);
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_methoddefs].val = var5; /* @live_methoddefs on <self:RapidTypeAnalysis exact> */
var6 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MMethod);
((void (*)(val*))(var6->class->vft[COLOR_hash_collection__HashSet__init]))(var6) /* init on <var6:HashSet[MMethod]>*/;
CHECK_NEW_hash_collection__HashSet(var6);
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_methods].val = var6; /* @live_methods on <self:RapidTypeAnalysis exact> */
var7 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MMethodDef);
((void (*)(val*))(var7->class->vft[COLOR_hash_collection__HashSet__init]))(var7) /* init on <var7:HashSet[MMethodDef]>*/;
CHECK_NEW_hash_collection__HashSet(var7);
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dlive_super_sends].val = var7; /* @live_super_sends on <self:RapidTypeAnalysis exact> */
var8 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MMethod);
((void (*)(val*))(var8->class->vft[COLOR_hash_collection__HashSet__init]))(var8) /* init on <var8:HashSet[MMethod]>*/;
CHECK_NEW_hash_collection__HashSet(var8);
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dtotry_methods].val = var8; /* @totry_methods on <self:RapidTypeAnalysis exact> */
var9 = NEW_list__List(&type_list__Listmodel__MMethodDef);
((void (*)(val*))(var9->class->vft[COLOR_list__List__init]))(var9) /* init on <var9:List[MMethodDef]>*/;
CHECK_NEW_list__List(var9);
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dtodo].val = var9; /* @todo on <self:RapidTypeAnalysis exact> */
return self;
}
/* allocate RapidTypeAnalysis */
void CHECK_NEW_rapid_type_analysis__RapidTypeAnalysis(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : MModule */;
var = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dmodelbuilder].val; /* @modelbuilder on <self:RapidTypeAnalysis> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @modelbuilder", "src/rapid_type_analysis.nit", 43);
exit(1);
}
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___64dmainmodule].val; /* @mainmodule on <self:RapidTypeAnalysis> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mainmodule", "src/rapid_type_analysis.nit", 46);
exit(1);
}
}
/* runtime class rapid_type_analysis__RapidTypeVisitor */
const struct class class_rapid_type_analysis__RapidTypeVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to rapid_type_analysis:RapidTypeVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to rapid_type_analysis:RapidTypeVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to rapid_type_analysis:RapidTypeVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to rapid_type_analysis:RapidTypeVisitor:math#Object#srand */
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
/* allocate RapidTypeVisitor */
void CHECK_NEW_rapid_type_analysis__RapidTypeVisitor(val* self) {
val* var /* : RapidTypeAnalysis */;
val* var1 /* : MClassType */;
val* var2 /* : MPropDef */;
var = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___64danalysis].val; /* @analysis on <self:RapidTypeVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @analysis", "src/rapid_type_analysis.nit", 327);
exit(1);
}
var1 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___64dreceiver].val; /* @receiver on <self:RapidTypeVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @receiver", "src/rapid_type_analysis.nit", 328);
exit(1);
}
var2 = self->attrs[COLOR_rapid_type_analysis__RapidTypeVisitor___64dmpropdef].val; /* @mpropdef on <self:RapidTypeVisitor> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mpropdef", "src/rapid_type_analysis.nit", 329);
exit(1);
}
}
/* runtime class global_compiler__GlobalCompiler */
const struct class class_global_compiler__GlobalCompiler = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to global_compiler:GlobalCompiler:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to global_compiler:GlobalCompiler:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to global_compiler:GlobalCompiler:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to global_compiler:GlobalCompiler:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to global_compiler:GlobalCompiler:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to global_compiler:GlobalCompiler:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to global_compiler:GlobalCompiler:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to global_compiler:GlobalCompiler:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to global_compiler:GlobalCompiler:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to global_compiler:GlobalCompiler:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to global_compiler:GlobalCompiler:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to global_compiler:GlobalCompiler:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to global_compiler:GlobalCompiler:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to global_compiler:GlobalCompiler:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to global_compiler:GlobalCompiler:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to global_compiler:GlobalCompiler:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to global_compiler:GlobalCompiler:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to global_compiler:GlobalCompiler:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to global_compiler:GlobalCompiler:math#Object#srand */
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
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_header, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#compile_header */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__compile_header_structs, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#compile_header_structs */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_main_function, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#compile_main_function */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#extern_bodies */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#extern_bodies= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#seen_extern */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern_61d, /* pointer to global_compiler:GlobalCompiler:abstract_compiler#AbstractCompiler#seen_extern= */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompiler__generate_check_init_instance, /* pointer to global_compiler:GlobalCompiler:global_compiler#GlobalCompiler#generate_check_init_instance */
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
val* var /* : List[CodeFile] */;
val* var1 /* : HashMap[String, String] */;
val* var2 /* : Array[ExternCFile] */;
val* var3 /* : ArraySet[String] */;
val* var4 /* : Array[String] */;
long var5 /* : Int */;
val* var_ /* var : Array[String] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
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
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : HashMap[String, Int] */;
val* var31 /* : HashMap[String, Int] */;
val* var32 /* : HashMap[String, Int] */;
val* var33 /* : HashMap[MClassType, String] */;
val* var34 /* : List[AbstractRuntimeFunction] */;
val* var35 /* : HashSet[AbstractRuntimeFunction] */;
val* var36 /* : HashMap[MType, Array[MClassType]] */;
self = nit_alloc(sizeof(struct instance) + 18*sizeof(nitattribute_t));
self->type = type;
self->class = &class_global_compiler__GlobalCompiler;
var = NEW_list__List(&type_list__Listabstract_compiler__CodeFile);
((void (*)(val*))(var->class->vft[COLOR_list__List__init]))(var) /* init on <var:List[CodeFile]>*/;
CHECK_NEW_list__List(var);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dfiles].val = var; /* @files on <self:GlobalCompiler exact> */
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringstring__String);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashMap__init]))(var1) /* init on <var1:HashMap[String, String]>*/;
CHECK_NEW_hash_collection__HashMap(var1);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dprovided_declarations].val = var1; /* @provided_declarations on <self:GlobalCompiler exact> */
var2 = NEW_array__Array(&type_array__Arrayabstract_compiler__ExternCFile);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[ExternCFile]>*/;
CHECK_NEW_array__Array(var2);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dextern_bodies].val = var2; /* @extern_bodies on <self:GlobalCompiler exact> */
var3 = NEW_array__ArraySet(&type_array__ArraySetstring__String);
((void (*)(val*))(var3->class->vft[COLOR_array__ArraySet__init]))(var3) /* init on <var3:ArraySet[String]>*/;
CHECK_NEW_array__ArraySet(var3);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dseen_extern].val = var3; /* @seen_extern on <self:GlobalCompiler exact> */
var4 = NEW_array__Array(&type_array__Arraystring__String);
var5 = 5;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[String]>*/;
CHECK_NEW_array__Array(var4);
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = "isa";
var8 = 3;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var6) /* push on <var_:Array[String]>*/;
if (varonce10) {
var11 = varonce10;
} else {
var12 = "as";
var13 = 2;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var11) /* push on <var_:Array[String]>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "auto";
var18 = 4;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var16) /* push on <var_:Array[String]>*/;
if (varonce20) {
var21 = varonce20;
} else {
var22 = "covariance";
var23 = 10;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var21) /* push on <var_:Array[String]>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "erasure";
var28 = 7;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var26) /* push on <var_:Array[String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_tags].val = var_; /* @count_type_test_tags on <self:GlobalCompiler exact> */
var30 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:GlobalCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_resolved].val = var30; /* @count_type_test_resolved on <self:GlobalCompiler exact> */
var31 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:GlobalCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_unresolved].val = var31; /* @count_type_test_unresolved on <self:GlobalCompiler exact> */
var32 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:GlobalCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_skipped].val = var32; /* @count_type_test_skipped on <self:GlobalCompiler exact> */
var33 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassTypestring__String);
((void (*)(val*))(var33->class->vft[COLOR_hash_collection__HashMap__init]))(var33) /* init on <var33:HashMap[MClassType, String]>*/;
CHECK_NEW_hash_collection__HashMap(var33);
self->attrs[COLOR_global_compiler__GlobalCompiler___64dclassids].val = var33; /* @classids on <self:GlobalCompiler exact> */
var34 = NEW_list__List(&type_list__Listabstract_compiler__AbstractRuntimeFunction);
((void (*)(val*))(var34->class->vft[COLOR_list__List__init]))(var34) /* init on <var34:List[AbstractRuntimeFunction]>*/;
CHECK_NEW_list__List(var34);
self->attrs[COLOR_global_compiler__GlobalCompiler___64dtodos].val = var34; /* @todos on <self:GlobalCompiler exact> */
var35 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetabstract_compiler__AbstractRuntimeFunction);
((void (*)(val*))(var35->class->vft[COLOR_hash_collection__HashSet__init]))(var35) /* init on <var35:HashSet[AbstractRuntimeFunction]>*/;
CHECK_NEW_hash_collection__HashSet(var35);
self->attrs[COLOR_global_compiler__GlobalCompiler___64dseen].val = var35; /* @seen on <self:GlobalCompiler exact> */
var36 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypearray__Arraymodel__MClassType);
((void (*)(val*))(var36->class->vft[COLOR_hash_collection__HashMap__init]))(var36) /* init on <var36:HashMap[MType, Array[MClassType]]>*/;
CHECK_NEW_hash_collection__HashMap(var36);
self->attrs[COLOR_global_compiler__GlobalCompiler___64dcollect_types_cache].val = var36; /* @collect_types_cache on <self:GlobalCompiler exact> */
return self;
}
/* allocate GlobalCompiler */
void CHECK_NEW_global_compiler__GlobalCompiler(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
val* var2 /* : ModelBuilder */;
val* var3 /* : CodeWriter */;
val* var4 /* : RapidTypeAnalysis */;
val* var5 /* : Array[MClassType] */;
var = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dmainmodule].val; /* @mainmodule on <self:GlobalCompiler> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mainmodule", "src/abstract_compiler.nit", 259);
exit(1);
}
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64drealmainmodule].val; /* @realmainmodule on <self:GlobalCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @realmainmodule", "src/abstract_compiler.nit", 263);
exit(1);
}
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dmodelbuilder].val; /* @modelbuilder on <self:GlobalCompiler> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @modelbuilder", "src/abstract_compiler.nit", 266);
exit(1);
}
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dheader].val; /* @header on <self:GlobalCompiler> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @header", "src/abstract_compiler.nit", 295);
exit(1);
}
var4 = self->attrs[COLOR_global_compiler__GlobalCompiler___64druntime_type_analysis].val; /* @runtime_type_analysis on <self:GlobalCompiler> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @runtime_type_analysis", "src/global_compiler.nit", 85);
exit(1);
}
var5 = self->attrs[COLOR_global_compiler__GlobalCompiler___64dlive_primitive_types].val; /* @live_primitive_types on <self:GlobalCompiler> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @live_primitive_types", "src/global_compiler.nit", 135);
exit(1);
}
}
/* runtime class global_compiler__GlobalCompilerVisitor */
const struct class class_global_compiler__GlobalCompilerVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to global_compiler:GlobalCompilerVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to global_compiler:GlobalCompilerVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to global_compiler:GlobalCompilerVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to global_compiler:GlobalCompilerVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to global_compiler:GlobalCompilerVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to global_compiler:GlobalCompilerVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to global_compiler:GlobalCompilerVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to global_compiler:GlobalCompilerVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to global_compiler:GlobalCompilerVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to global_compiler:GlobalCompilerVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to global_compiler:GlobalCompilerVisitor:math#Object#srand */
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
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__isset_attribute, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#isset_attribute */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__read_attribute, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#read_attribute */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__write_attribute, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#write_attribute */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__check_recv_notnull, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#check_recv_notnull */
(nitmethod_t)VIRTUAL_global_compiler__GlobalCompilerVisitor__check_init_instance, /* pointer to global_compiler:GlobalCompilerVisitor:global_compiler#GlobalCompilerVisitor#check_init_instance */
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
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__ret, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#ret */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__stmt, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#stmt */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr_bool, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr_bool */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__debug, /* pointer to global_compiler:GlobalCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#debug */
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
CHECK_NEW_hash_collection__HashSet(var1);
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dnames].val = var1; /* @names on <self:GlobalCompilerVisitor exact> */
var2 = 0;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dlast].l = var2; /* @last on <self:GlobalCompilerVisitor exact> */
var3 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__EscapeMarkstring__String);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[EscapeMark, String]>*/;
CHECK_NEW_hash_collection__HashMap(var3);
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64descapemark_names].val = var3; /* @escapemark_names on <self:GlobalCompilerVisitor exact> */
var4 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable);
((void (*)(val*))(var4->class->vft[COLOR_hash_collection__HashMap__init]))(var4) /* init on <var4:HashMap[Variable, RuntimeVariable]>*/;
CHECK_NEW_hash_collection__HashMap(var4);
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dvariables].val = var4; /* @variables on <self:GlobalCompilerVisitor exact> */
return self;
}
/* allocate GlobalCompilerVisitor */
void CHECK_NEW_global_compiler__GlobalCompilerVisitor(val* self) {
val* var /* : AbstractCompiler */;
val* var1 /* : nullable Frame */;
val* var2 /* : CodeWriter */;
var = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dcompiler].val; /* @compiler on <self:GlobalCompilerVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @compiler", "src/abstract_compiler.nit", 533);
exit(1);
}
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dframe].val; /* @frame on <self:GlobalCompilerVisitor> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dwriter].val; /* @writer on <self:GlobalCompilerVisitor> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @writer", "src/abstract_compiler.nit", 548);
exit(1);
}
}
/* runtime class global_compiler__CustomizedRuntimeFunction */
const struct class class_global_compiler__CustomizedRuntimeFunction = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_global_compiler__CustomizedRuntimeFunction___61d_61d, /* pointer to global_compiler:CustomizedRuntimeFunction:global_compiler#CustomizedRuntimeFunction#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to global_compiler:CustomizedRuntimeFunction:kernel#Object#sys */
(nitmethod_t)VIRTUAL_global_compiler__CustomizedRuntimeFunction__hash, /* pointer to global_compiler:CustomizedRuntimeFunction:global_compiler#CustomizedRuntimeFunction#hash */
(nitmethod_t)VIRTUAL_global_compiler__CustomizedRuntimeFunction__to_s, /* pointer to global_compiler:CustomizedRuntimeFunction:global_compiler#CustomizedRuntimeFunction#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to global_compiler:CustomizedRuntimeFunction:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to global_compiler:CustomizedRuntimeFunction:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to global_compiler:CustomizedRuntimeFunction:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to global_compiler:CustomizedRuntimeFunction:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to global_compiler:CustomizedRuntimeFunction:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to global_compiler:CustomizedRuntimeFunction:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to global_compiler:CustomizedRuntimeFunction:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to global_compiler:CustomizedRuntimeFunction:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to global_compiler:CustomizedRuntimeFunction:math#Object#srand */
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
/* allocate CustomizedRuntimeFunction */
void CHECK_NEW_global_compiler__CustomizedRuntimeFunction(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MClassType */;
var = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dmmethoddef].val; /* @mmethoddef on <self:CustomizedRuntimeFunction> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mmethoddef", "src/abstract_compiler.nit", 969);
exit(1);
}
var1 = self->attrs[COLOR_global_compiler__CustomizedRuntimeFunction___64drecv].val; /* @recv on <self:CustomizedRuntimeFunction> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @recv", "src/global_compiler.nit", 869);
exit(1);
}
}
/* runtime class abstract_compiler__CodeFile */
const struct class class_abstract_compiler__CodeFile = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_compiler:CodeFile:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to abstract_compiler:CodeFile:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_compiler:CodeFile:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_compiler:CodeFile:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to abstract_compiler:CodeFile:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to abstract_compiler:CodeFile:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_compiler:CodeFile:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_compiler:CodeFile:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_compiler:CodeFile:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to abstract_compiler:CodeFile:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_compiler:CodeFile:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_compiler:CodeFile:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to abstract_compiler:CodeFile:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_compiler:CodeFile:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_compiler:CodeFile:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to abstract_compiler:CodeFile:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to abstract_compiler:CodeFile:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to abstract_compiler:CodeFile:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to abstract_compiler:CodeFile:math#Object#srand */
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
CHECK_NEW_array__Array(var);
self->attrs[COLOR_abstract_compiler__CodeFile___64dwriters].val = var; /* @writers on <self:CodeFile exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetstring__String);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[String]>*/;
CHECK_NEW_hash_collection__HashSet(var1);
self->attrs[COLOR_abstract_compiler__CodeFile___64drequired_declarations].val = var1; /* @required_declarations on <self:CodeFile exact> */
return self;
}
/* allocate CodeFile */
void CHECK_NEW_abstract_compiler__CodeFile(val* self) {
val* var /* : String */;
var = self->attrs[COLOR_abstract_compiler__CodeFile___64dname].val; /* @name on <self:CodeFile> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @name", "src/abstract_compiler.nit", 503);
exit(1);
}
}
/* runtime class abstract_compiler__CodeWriter */
const struct class class_abstract_compiler__CodeWriter = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_compiler:CodeWriter:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to abstract_compiler:CodeWriter:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_compiler:CodeWriter:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_compiler:CodeWriter:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to abstract_compiler:CodeWriter:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to abstract_compiler:CodeWriter:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_compiler:CodeWriter:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_compiler:CodeWriter:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_compiler:CodeWriter:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to abstract_compiler:CodeWriter:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_compiler:CodeWriter:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_compiler:CodeWriter:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to abstract_compiler:CodeWriter:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_compiler:CodeWriter:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_compiler:CodeWriter:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to abstract_compiler:CodeWriter:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to abstract_compiler:CodeWriter:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to abstract_compiler:CodeWriter:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to abstract_compiler:CodeWriter:math#Object#srand */
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
CHECK_NEW_list__List(var);
self->attrs[COLOR_abstract_compiler__CodeWriter___64dlines].val = var; /* @lines on <self:CodeWriter exact> */
var1 = NEW_list__List(&type_list__Liststring__String);
((void (*)(val*))(var1->class->vft[COLOR_list__List__init]))(var1) /* init on <var1:List[String]>*/;
CHECK_NEW_list__List(var1);
self->attrs[COLOR_abstract_compiler__CodeWriter___64ddecl_lines].val = var1; /* @decl_lines on <self:CodeWriter exact> */
return self;
}
/* allocate CodeWriter */
void CHECK_NEW_abstract_compiler__CodeWriter(val* self) {
val* var /* : CodeFile */;
var = self->attrs[COLOR_abstract_compiler__CodeWriter___64dfile].val; /* @file on <self:CodeWriter> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @file", "src/abstract_compiler.nit", 510);
exit(1);
}
}
/* runtime class abstract_compiler__RuntimeVariable */
const struct class class_abstract_compiler__RuntimeVariable = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#hash */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__to_s, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_compiler:RuntimeVariable:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_compiler:RuntimeVariable:string#Object#class_name */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__inspect, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_compiler:RuntimeVariable:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_compiler:RuntimeVariable:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to abstract_compiler:RuntimeVariable:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to abstract_compiler:RuntimeVariable:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to abstract_compiler:RuntimeVariable:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to abstract_compiler:RuntimeVariable:math#Object#srand */
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
/* allocate RuntimeVariable */
void CHECK_NEW_abstract_compiler__RuntimeVariable(val* self) {
val* var /* : String */;
val* var1 /* : MType */;
val* var2 /* : MType */;
var = self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dname].val; /* @name on <self:RuntimeVariable> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @name", "src/abstract_compiler.nit", 1002);
exit(1);
}
var1 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dmtype].val; /* @mtype on <self:RuntimeVariable> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mtype", "src/abstract_compiler.nit", 1005);
exit(1);
}
var2 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dmcasttype].val; /* @mcasttype on <self:RuntimeVariable> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mcasttype", "src/abstract_compiler.nit", 1008);
exit(1);
}
}
/* runtime class abstract_compiler__Frame */
const struct class class_abstract_compiler__Frame = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_compiler:Frame:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to abstract_compiler:Frame:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_compiler:Frame:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_compiler:Frame:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to abstract_compiler:Frame:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to abstract_compiler:Frame:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_compiler:Frame:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_compiler:Frame:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_compiler:Frame:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to abstract_compiler:Frame:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_compiler:Frame:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_compiler:Frame:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to abstract_compiler:Frame:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_compiler:Frame:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_compiler:Frame:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to abstract_compiler:Frame:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to abstract_compiler:Frame:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to abstract_compiler:Frame:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to abstract_compiler:Frame:math#Object#srand */
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
/* allocate Frame */
void CHECK_NEW_abstract_compiler__Frame(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var1 /* : MPropDef */;
val* var2 /* : MClassType */;
val* var3 /* : Array[RuntimeVariable] */;
var = self->attrs[COLOR_abstract_compiler__Frame___64dvisitor].val; /* @visitor on <self:Frame> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @visitor", "src/abstract_compiler.nit", 1049);
exit(1);
}
var1 = self->attrs[COLOR_abstract_compiler__Frame___64dmpropdef].val; /* @mpropdef on <self:Frame> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mpropdef", "src/abstract_compiler.nit", 1052);
exit(1);
}
var2 = self->attrs[COLOR_abstract_compiler__Frame___64dreceiver].val; /* @receiver on <self:Frame> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @receiver", "src/abstract_compiler.nit", 1056);
exit(1);
}
var3 = self->attrs[COLOR_abstract_compiler__Frame___64darguments].val; /* @arguments on <self:Frame> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @arguments", "src/abstract_compiler.nit", 1059);
exit(1);
}
}
/* runtime class abstract_compiler__ExternCFile */
const struct class class_abstract_compiler__ExternCFile = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_compiler:ExternCFile:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to abstract_compiler:ExternCFile:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_compiler:ExternCFile:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_compiler:ExternCFile:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to abstract_compiler:ExternCFile:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to abstract_compiler:ExternCFile:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_compiler:ExternCFile:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_compiler:ExternCFile:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_compiler:ExternCFile:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to abstract_compiler:ExternCFile:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_compiler:ExternCFile:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_compiler:ExternCFile:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to abstract_compiler:ExternCFile:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_compiler:ExternCFile:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_compiler:ExternCFile:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to abstract_compiler:ExternCFile:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to abstract_compiler:ExternCFile:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to abstract_compiler:ExternCFile:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to abstract_compiler:ExternCFile:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to abstract_compiler:ExternCFile:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to abstract_compiler:ExternCFile:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to abstract_compiler:ExternCFile:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to abstract_compiler:ExternCFile:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to abstract_compiler:ExternCFile:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to abstract_compiler:ExternCFile:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to abstract_compiler:ExternCFile:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to abstract_compiler:ExternCFile:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to abstract_compiler:ExternCFile:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to abstract_compiler:ExternCFile:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to abstract_compiler:ExternCFile:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to abstract_compiler:ExternCFile:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to abstract_compiler:ExternCFile:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to abstract_compiler:ExternCFile:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to abstract_compiler:ExternCFile:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to abstract_compiler:ExternCFile:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to abstract_compiler:ExternCFile:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to abstract_compiler:ExternCFile:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to abstract_compiler:ExternCFile:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to abstract_compiler:ExternCFile:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to abstract_compiler:ExternCFile:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to abstract_compiler:ExternCFile:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_abstract_compiler__ExternCFile__filename, /* pointer to abstract_compiler:ExternCFile:abstract_compiler#ExternCFile#filename */
(nitmethod_t)VIRTUAL_abstract_compiler__ExternCFile__filename_61d, /* pointer to abstract_compiler:ExternCFile:abstract_compiler#ExternCFile#filename= */
(nitmethod_t)VIRTUAL_abstract_compiler__ExternCFile__cflags, /* pointer to abstract_compiler:ExternCFile:abstract_compiler#ExternCFile#cflags */
(nitmethod_t)VIRTUAL_abstract_compiler__ExternCFile__cflags_61d, /* pointer to abstract_compiler:ExternCFile:abstract_compiler#ExternCFile#cflags= */
(nitmethod_t)VIRTUAL_abstract_compiler__ExternCFile__init, /* pointer to abstract_compiler:ExternCFile:abstract_compiler#ExternCFile#init */
}
};
/* allocate ExternCFile */
val* NEW_abstract_compiler__ExternCFile(const struct type* type) {
val* self /* : ExternCFile */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_abstract_compiler__ExternCFile;
return self;
}
/* allocate ExternCFile */
void CHECK_NEW_abstract_compiler__ExternCFile(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var = self->attrs[COLOR_abstract_compiler__ExternCFile___64dfilename].val; /* @filename on <self:ExternCFile> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @filename", "src/abstract_compiler.nit", 1071);
exit(1);
}
var1 = self->attrs[COLOR_abstract_compiler__ExternCFile___64dcflags].val; /* @cflags on <self:ExternCFile> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @cflags", "src/abstract_compiler.nit", 1073);
exit(1);
}
}
/* runtime class separate_erasure_compiler__SeparateErasureCompiler */
const struct class class_separate_erasure_compiler__SeparateErasureCompiler = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:math#Object#srand */
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
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_header, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#compile_header */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__compile_header_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#compile_header_structs */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_main_function, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#compile_main_function */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#extern_bodies */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#extern_bodies= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#seen_extern */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#seen_extern= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__generate_check_init_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#generate_check_init_instance */
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
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__runtime_type_analysis, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__runtime_type_analysis_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__undead_types, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#undead_types */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__undead_types_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#undead_types= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__partial_types, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#partial_types */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__partial_types_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#partial_types= */
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
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__retrieve_partial_types, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#retrieve_partial_types */
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
val* var /* : List[CodeFile] */;
val* var1 /* : HashMap[String, String] */;
val* var2 /* : Array[ExternCFile] */;
val* var3 /* : ArraySet[String] */;
val* var4 /* : Array[String] */;
long var5 /* : Int */;
val* var_ /* var : Array[String] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
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
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : HashMap[String, Int] */;
val* var31 /* : HashMap[String, Int] */;
val* var32 /* : HashMap[String, Int] */;
val* var33 /* : HashSet[MType] */;
val* var34 /* : HashSet[MType] */;
val* var35 /* : HashMap[MClassDef, HashSet[MType]] */;
val* var36 /* : HashMap[MClass, Int] */;
val* var37 /* : HashSet[Object] */;
val* var38 /* : HashMap[MType, Array[nullable MType]] */;
val* var39 /* : HashMap[MClassType, Array[nullable MType]] */;
val* var40 /* : HashMap[MClass, Array[nullable MPropDef]] */;
val* var41 /* : HashMap[MClass, Array[nullable MPropDef]] */;
self = nit_alloc(sizeof(struct instance) + 30*sizeof(nitattribute_t));
self->type = type;
self->class = &class_separate_erasure_compiler__SeparateErasureCompiler;
var = NEW_list__List(&type_list__Listabstract_compiler__CodeFile);
((void (*)(val*))(var->class->vft[COLOR_list__List__init]))(var) /* init on <var:List[CodeFile]>*/;
CHECK_NEW_list__List(var);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dfiles].val = var; /* @files on <self:SeparateErasureCompiler exact> */
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringstring__String);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashMap__init]))(var1) /* init on <var1:HashMap[String, String]>*/;
CHECK_NEW_hash_collection__HashMap(var1);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dprovided_declarations].val = var1; /* @provided_declarations on <self:SeparateErasureCompiler exact> */
var2 = NEW_array__Array(&type_array__Arrayabstract_compiler__ExternCFile);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[ExternCFile]>*/;
CHECK_NEW_array__Array(var2);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dextern_bodies].val = var2; /* @extern_bodies on <self:SeparateErasureCompiler exact> */
var3 = NEW_array__ArraySet(&type_array__ArraySetstring__String);
((void (*)(val*))(var3->class->vft[COLOR_array__ArraySet__init]))(var3) /* init on <var3:ArraySet[String]>*/;
CHECK_NEW_array__ArraySet(var3);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dseen_extern].val = var3; /* @seen_extern on <self:SeparateErasureCompiler exact> */
var4 = NEW_array__Array(&type_array__Arraystring__String);
var5 = 5;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[String]>*/;
CHECK_NEW_array__Array(var4);
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = "isa";
var8 = 3;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var6) /* push on <var_:Array[String]>*/;
if (varonce10) {
var11 = varonce10;
} else {
var12 = "as";
var13 = 2;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var11) /* push on <var_:Array[String]>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "auto";
var18 = 4;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var16) /* push on <var_:Array[String]>*/;
if (varonce20) {
var21 = varonce20;
} else {
var22 = "covariance";
var23 = 10;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var21) /* push on <var_:Array[String]>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "erasure";
var28 = 7;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var26) /* push on <var_:Array[String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_tags].val = var_; /* @count_type_test_tags on <self:SeparateErasureCompiler exact> */
var30 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:SeparateErasureCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_resolved].val = var30; /* @count_type_test_resolved on <self:SeparateErasureCompiler exact> */
var31 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:SeparateErasureCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_unresolved].val = var31; /* @count_type_test_unresolved on <self:SeparateErasureCompiler exact> */
var32 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:SeparateErasureCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_skipped].val = var32; /* @count_type_test_skipped on <self:SeparateErasureCompiler exact> */
var33 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var33->class->vft[COLOR_hash_collection__HashSet__init]))(var33) /* init on <var33:HashSet[MType]>*/;
CHECK_NEW_hash_collection__HashSet(var33);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dundead_types].val = var33; /* @undead_types on <self:SeparateErasureCompiler exact> */
var34 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var34->class->vft[COLOR_hash_collection__HashSet__init]))(var34) /* init on <var34:HashSet[MType]>*/;
CHECK_NEW_hash_collection__HashSet(var34);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dpartial_types].val = var34; /* @partial_types on <self:SeparateErasureCompiler exact> */
var35 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassDefhash_collection__HashSetmodel__MType);
((void (*)(val*))(var35->class->vft[COLOR_hash_collection__HashMap__init]))(var35) /* init on <var35:HashMap[MClassDef, HashSet[MType]]>*/;
CHECK_NEW_hash_collection__HashMap(var35);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dlive_unresolved_types].val = var35; /* @live_unresolved_types on <self:SeparateErasureCompiler exact> */
var36 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClasskernel__Int);
((void (*)(val*))(var36->class->vft[COLOR_hash_collection__HashMap__init]))(var36) /* init on <var36:HashMap[MClass, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var36);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dbox_kinds].val = var36; /* @box_kinds on <self:SeparateErasureCompiler exact> */
var37 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetkernel__Object);
((void (*)(val*))(var37->class->vft[COLOR_hash_collection__HashSet__init]))(var37) /* init on <var37:HashSet[Object]>*/;
CHECK_NEW_hash_collection__HashSet(var37);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dcolor_consts_done].val = var37; /* @color_consts_done on <self:SeparateErasureCompiler exact> */
var38 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypearray__Arraynullable_model__MType);
((void (*)(val*))(var38->class->vft[COLOR_hash_collection__HashMap__init]))(var38) /* init on <var38:HashMap[MType, Array[nullable MType]]>*/;
CHECK_NEW_hash_collection__HashMap(var38);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dtype_tables].val = var38; /* @type_tables on <self:SeparateErasureCompiler exact> */
var39 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassTypearray__Arraynullable_model__MType);
((void (*)(val*))(var39->class->vft[COLOR_hash_collection__HashMap__init]))(var39) /* init on <var39:HashMap[MClassType, Array[nullable MType]]>*/;
CHECK_NEW_hash_collection__HashMap(var39);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dresolution_tables].val = var39; /* @resolution_tables on <self:SeparateErasureCompiler exact> */
var40 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
((void (*)(val*))(var40->class->vft[COLOR_hash_collection__HashMap__init]))(var40) /* init on <var40:HashMap[MClass, Array[nullable MPropDef]]>*/;
CHECK_NEW_hash_collection__HashMap(var40);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dmethod_tables].val = var40; /* @method_tables on <self:SeparateErasureCompiler exact> */
var41 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
((void (*)(val*))(var41->class->vft[COLOR_hash_collection__HashMap__init]))(var41) /* init on <var41:HashMap[MClass, Array[nullable MPropDef]]>*/;
CHECK_NEW_hash_collection__HashMap(var41);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dattr_tables].val = var41; /* @attr_tables on <self:SeparateErasureCompiler exact> */
return self;
}
/* allocate SeparateErasureCompiler */
void CHECK_NEW_separate_erasure_compiler__SeparateErasureCompiler(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
val* var2 /* : ModelBuilder */;
val* var3 /* : CodeWriter */;
val* var4 /* : RapidTypeAnalysis */;
val* var5 /* : nullable Layout[MType] */;
val* var6 /* : nullable Layout[MType] */;
val* var7 /* : nullable Layout[PropertyLayoutElement] */;
val* var8 /* : nullable Layout[MAttribute] */;
val* var9 /* : nullable Layout[MClass] */;
val* var10 /* : nullable Layout[MVirtualTypeProp] */;
val* var11 /* : Map[MClass, Array[nullable MClass]] */;
val* var12 /* : Map[MClass, Array[nullable MPropDef]] */;
var = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dmainmodule].val; /* @mainmodule on <self:SeparateErasureCompiler> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mainmodule", "src/abstract_compiler.nit", 259);
exit(1);
}
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64drealmainmodule].val; /* @realmainmodule on <self:SeparateErasureCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @realmainmodule", "src/abstract_compiler.nit", 263);
exit(1);
}
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dmodelbuilder].val; /* @modelbuilder on <self:SeparateErasureCompiler> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @modelbuilder", "src/abstract_compiler.nit", 266);
exit(1);
}
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dheader].val; /* @header on <self:SeparateErasureCompiler> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @header", "src/abstract_compiler.nit", 295);
exit(1);
}
var4 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64druntime_type_analysis].val; /* @runtime_type_analysis on <self:SeparateErasureCompiler> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @runtime_type_analysis", "src/separate_compiler.nit", 111);
exit(1);
}
var5 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dtype_layout].val; /* @type_layout on <self:SeparateErasureCompiler> */
var6 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dresolution_layout].val; /* @resolution_layout on <self:SeparateErasureCompiler> */
var7 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dmethod_layout].val; /* @method_layout on <self:SeparateErasureCompiler> */
var8 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dattr_layout].val; /* @attr_layout on <self:SeparateErasureCompiler> */
var9 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___64dclass_layout].val; /* @class_layout on <self:SeparateErasureCompiler> */
var10 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___64dvt_layout].val; /* @vt_layout on <self:SeparateErasureCompiler> */
var11 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___64dclass_tables].val; /* @class_tables on <self:SeparateErasureCompiler> */
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @class_tables", "src/separate_erasure_compiler.nit", 393);
exit(1);
}
var12 = self->attrs[COLOR_separate_erasure_compiler__SeparateErasureCompiler___64dvt_tables].val; /* @vt_tables on <self:SeparateErasureCompiler> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @vt_tables", "src/separate_erasure_compiler.nit", 394);
exit(1);
}
}
/* runtime class separate_erasure_compiler__SeparateErasureCompilerVisitor */
const struct class class_separate_erasure_compiler__SeparateErasureCompilerVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:math#Object#srand */
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
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__isset_attribute, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#isset_attribute */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__read_attribute, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#read_attribute */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__write_attribute, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#write_attribute */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__check_recv_notnull, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#check_recv_notnull */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__check_init_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#check_init_instance */
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
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__ret, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#ret */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__stmt, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#stmt */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr_bool, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr_bool */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__debug, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#debug */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__type_info, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#type_info */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__table_send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#table_send */
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
CHECK_NEW_hash_collection__HashSet(var1);
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dnames].val = var1; /* @names on <self:SeparateErasureCompilerVisitor exact> */
var2 = 0;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dlast].l = var2; /* @last on <self:SeparateErasureCompilerVisitor exact> */
var3 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__EscapeMarkstring__String);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[EscapeMark, String]>*/;
CHECK_NEW_hash_collection__HashMap(var3);
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64descapemark_names].val = var3; /* @escapemark_names on <self:SeparateErasureCompilerVisitor exact> */
var4 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable);
((void (*)(val*))(var4->class->vft[COLOR_hash_collection__HashMap__init]))(var4) /* init on <var4:HashMap[Variable, RuntimeVariable]>*/;
CHECK_NEW_hash_collection__HashMap(var4);
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dvariables].val = var4; /* @variables on <self:SeparateErasureCompilerVisitor exact> */
return self;
}
/* allocate SeparateErasureCompilerVisitor */
void CHECK_NEW_separate_erasure_compiler__SeparateErasureCompilerVisitor(val* self) {
val* var /* : AbstractCompiler */;
val* var1 /* : nullable Frame */;
val* var2 /* : CodeWriter */;
var = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dcompiler].val; /* @compiler on <self:SeparateErasureCompilerVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @compiler", "src/abstract_compiler.nit", 533);
exit(1);
}
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dframe].val; /* @frame on <self:SeparateErasureCompilerVisitor> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dwriter].val; /* @writer on <self:SeparateErasureCompilerVisitor> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @writer", "src/abstract_compiler.nit", 548);
exit(1);
}
}
/* runtime class separate_compiler__SeparateCompiler */
const struct class class_separate_compiler__SeparateCompiler = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to separate_compiler:SeparateCompiler:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_compiler:SeparateCompiler:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_compiler:SeparateCompiler:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_compiler:SeparateCompiler:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_compiler:SeparateCompiler:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_compiler:SeparateCompiler:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to separate_compiler:SeparateCompiler:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to separate_compiler:SeparateCompiler:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to separate_compiler:SeparateCompiler:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to separate_compiler:SeparateCompiler:math#Object#srand */
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
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_header, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#compile_header */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_header_structs, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_header_structs */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_main_function, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#compile_main_function */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#extern_bodies */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#extern_bodies= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#seen_extern */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#seen_extern= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__generate_check_init_instance, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#generate_check_init_instance */
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
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__runtime_type_analysis, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__runtime_type_analysis_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__undead_types, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#undead_types */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__undead_types_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#undead_types= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__partial_types, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#partial_types */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__partial_types_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#partial_types= */
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
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__retrieve_partial_types, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#retrieve_partial_types */
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
}
};
/* allocate SeparateCompiler */
val* NEW_separate_compiler__SeparateCompiler(const struct type* type) {
val* self /* : SeparateCompiler */;
val* var /* : List[CodeFile] */;
val* var1 /* : HashMap[String, String] */;
val* var2 /* : Array[ExternCFile] */;
val* var3 /* : ArraySet[String] */;
val* var4 /* : Array[String] */;
long var5 /* : Int */;
val* var_ /* var : Array[String] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
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
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : HashMap[String, Int] */;
val* var31 /* : HashMap[String, Int] */;
val* var32 /* : HashMap[String, Int] */;
val* var33 /* : HashSet[MType] */;
val* var34 /* : HashSet[MType] */;
val* var35 /* : HashMap[MClassDef, HashSet[MType]] */;
val* var36 /* : HashMap[MClass, Int] */;
val* var37 /* : HashSet[Object] */;
val* var38 /* : HashMap[MType, Array[nullable MType]] */;
val* var39 /* : HashMap[MClassType, Array[nullable MType]] */;
val* var40 /* : HashMap[MClass, Array[nullable MPropDef]] */;
val* var41 /* : HashMap[MClass, Array[nullable MPropDef]] */;
self = nit_alloc(sizeof(struct instance) + 26*sizeof(nitattribute_t));
self->type = type;
self->class = &class_separate_compiler__SeparateCompiler;
var = NEW_list__List(&type_list__Listabstract_compiler__CodeFile);
((void (*)(val*))(var->class->vft[COLOR_list__List__init]))(var) /* init on <var:List[CodeFile]>*/;
CHECK_NEW_list__List(var);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dfiles].val = var; /* @files on <self:SeparateCompiler exact> */
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringstring__String);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashMap__init]))(var1) /* init on <var1:HashMap[String, String]>*/;
CHECK_NEW_hash_collection__HashMap(var1);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dprovided_declarations].val = var1; /* @provided_declarations on <self:SeparateCompiler exact> */
var2 = NEW_array__Array(&type_array__Arrayabstract_compiler__ExternCFile);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[ExternCFile]>*/;
CHECK_NEW_array__Array(var2);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dextern_bodies].val = var2; /* @extern_bodies on <self:SeparateCompiler exact> */
var3 = NEW_array__ArraySet(&type_array__ArraySetstring__String);
((void (*)(val*))(var3->class->vft[COLOR_array__ArraySet__init]))(var3) /* init on <var3:ArraySet[String]>*/;
CHECK_NEW_array__ArraySet(var3);
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dseen_extern].val = var3; /* @seen_extern on <self:SeparateCompiler exact> */
var4 = NEW_array__Array(&type_array__Arraystring__String);
var5 = 5;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[String]>*/;
CHECK_NEW_array__Array(var4);
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = "isa";
var8 = 3;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var6) /* push on <var_:Array[String]>*/;
if (varonce10) {
var11 = varonce10;
} else {
var12 = "as";
var13 = 2;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var11) /* push on <var_:Array[String]>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "auto";
var18 = 4;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var16) /* push on <var_:Array[String]>*/;
if (varonce20) {
var21 = varonce20;
} else {
var22 = "covariance";
var23 = 10;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var21) /* push on <var_:Array[String]>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "erasure";
var28 = 7;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var26) /* push on <var_:Array[String]>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_tags].val = var_; /* @count_type_test_tags on <self:SeparateCompiler exact> */
var30 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:SeparateCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_resolved].val = var30; /* @count_type_test_resolved on <self:SeparateCompiler exact> */
var31 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:SeparateCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_unresolved].val = var31; /* @count_type_test_unresolved on <self:SeparateCompiler exact> */
var32 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompiler__init_count_type_test_tags]))(self) /* init_count_type_test_tags on <self:SeparateCompiler exact>*/;
self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dcount_type_test_skipped].val = var32; /* @count_type_test_skipped on <self:SeparateCompiler exact> */
var33 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var33->class->vft[COLOR_hash_collection__HashSet__init]))(var33) /* init on <var33:HashSet[MType]>*/;
CHECK_NEW_hash_collection__HashSet(var33);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dundead_types].val = var33; /* @undead_types on <self:SeparateCompiler exact> */
var34 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
((void (*)(val*))(var34->class->vft[COLOR_hash_collection__HashSet__init]))(var34) /* init on <var34:HashSet[MType]>*/;
CHECK_NEW_hash_collection__HashSet(var34);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dpartial_types].val = var34; /* @partial_types on <self:SeparateCompiler exact> */
var35 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassDefhash_collection__HashSetmodel__MType);
((void (*)(val*))(var35->class->vft[COLOR_hash_collection__HashMap__init]))(var35) /* init on <var35:HashMap[MClassDef, HashSet[MType]]>*/;
CHECK_NEW_hash_collection__HashMap(var35);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dlive_unresolved_types].val = var35; /* @live_unresolved_types on <self:SeparateCompiler exact> */
var36 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClasskernel__Int);
((void (*)(val*))(var36->class->vft[COLOR_hash_collection__HashMap__init]))(var36) /* init on <var36:HashMap[MClass, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var36);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dbox_kinds].val = var36; /* @box_kinds on <self:SeparateCompiler exact> */
var37 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetkernel__Object);
((void (*)(val*))(var37->class->vft[COLOR_hash_collection__HashSet__init]))(var37) /* init on <var37:HashSet[Object]>*/;
CHECK_NEW_hash_collection__HashSet(var37);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dcolor_consts_done].val = var37; /* @color_consts_done on <self:SeparateCompiler exact> */
var38 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypearray__Arraynullable_model__MType);
((void (*)(val*))(var38->class->vft[COLOR_hash_collection__HashMap__init]))(var38) /* init on <var38:HashMap[MType, Array[nullable MType]]>*/;
CHECK_NEW_hash_collection__HashMap(var38);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dtype_tables].val = var38; /* @type_tables on <self:SeparateCompiler exact> */
var39 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassTypearray__Arraynullable_model__MType);
((void (*)(val*))(var39->class->vft[COLOR_hash_collection__HashMap__init]))(var39) /* init on <var39:HashMap[MClassType, Array[nullable MType]]>*/;
CHECK_NEW_hash_collection__HashMap(var39);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dresolution_tables].val = var39; /* @resolution_tables on <self:SeparateCompiler exact> */
var40 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
((void (*)(val*))(var40->class->vft[COLOR_hash_collection__HashMap__init]))(var40) /* init on <var40:HashMap[MClass, Array[nullable MPropDef]]>*/;
CHECK_NEW_hash_collection__HashMap(var40);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dmethod_tables].val = var40; /* @method_tables on <self:SeparateCompiler exact> */
var41 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
((void (*)(val*))(var41->class->vft[COLOR_hash_collection__HashMap__init]))(var41) /* init on <var41:HashMap[MClass, Array[nullable MPropDef]]>*/;
CHECK_NEW_hash_collection__HashMap(var41);
self->attrs[COLOR_separate_compiler__SeparateCompiler___64dattr_tables].val = var41; /* @attr_tables on <self:SeparateCompiler exact> */
return self;
}
/* allocate SeparateCompiler */
void CHECK_NEW_separate_compiler__SeparateCompiler(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
val* var2 /* : ModelBuilder */;
val* var3 /* : CodeWriter */;
val* var4 /* : RapidTypeAnalysis */;
val* var5 /* : nullable Layout[MType] */;
val* var6 /* : nullable Layout[MType] */;
val* var7 /* : nullable Layout[PropertyLayoutElement] */;
val* var8 /* : nullable Layout[MAttribute] */;
var = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dmainmodule].val; /* @mainmodule on <self:SeparateCompiler> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mainmodule", "src/abstract_compiler.nit", 259);
exit(1);
}
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64drealmainmodule].val; /* @realmainmodule on <self:SeparateCompiler> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @realmainmodule", "src/abstract_compiler.nit", 263);
exit(1);
}
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dmodelbuilder].val; /* @modelbuilder on <self:SeparateCompiler> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @modelbuilder", "src/abstract_compiler.nit", 266);
exit(1);
}
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompiler___64dheader].val; /* @header on <self:SeparateCompiler> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @header", "src/abstract_compiler.nit", 295);
exit(1);
}
var4 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64druntime_type_analysis].val; /* @runtime_type_analysis on <self:SeparateCompiler> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @runtime_type_analysis", "src/separate_compiler.nit", 111);
exit(1);
}
var5 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dtype_layout].val; /* @type_layout on <self:SeparateCompiler> */
var6 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dresolution_layout].val; /* @resolution_layout on <self:SeparateCompiler> */
var7 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dmethod_layout].val; /* @method_layout on <self:SeparateCompiler> */
var8 = self->attrs[COLOR_separate_compiler__SeparateCompiler___64dattr_layout].val; /* @attr_layout on <self:SeparateCompiler> */
}
/* runtime class separate_compiler__SeparateCompilerVisitor */
const struct class class_separate_compiler__SeparateCompilerVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to separate_compiler:SeparateCompilerVisitor:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to separate_compiler:SeparateCompilerVisitor:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to separate_compiler:SeparateCompilerVisitor:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to separate_compiler:SeparateCompilerVisitor:math#Object#srand */
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
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__isset_attribute, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#isset_attribute */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__read_attribute, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#read_attribute */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__write_attribute, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#write_attribute */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__check_recv_notnull, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#check_recv_notnull */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__check_init_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#check_init_instance */
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
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__ret, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#ret */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__stmt, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#stmt */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr_bool, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr_bool */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__debug, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#debug */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__type_info, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#type_info */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__table_send, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#table_send */
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
CHECK_NEW_hash_collection__HashSet(var1);
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dnames].val = var1; /* @names on <self:SeparateCompilerVisitor exact> */
var2 = 0;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dlast].l = var2; /* @last on <self:SeparateCompilerVisitor exact> */
var3 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__EscapeMarkstring__String);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[EscapeMark, String]>*/;
CHECK_NEW_hash_collection__HashMap(var3);
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64descapemark_names].val = var3; /* @escapemark_names on <self:SeparateCompilerVisitor exact> */
var4 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable);
((void (*)(val*))(var4->class->vft[COLOR_hash_collection__HashMap__init]))(var4) /* init on <var4:HashMap[Variable, RuntimeVariable]>*/;
CHECK_NEW_hash_collection__HashMap(var4);
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dvariables].val = var4; /* @variables on <self:SeparateCompilerVisitor exact> */
return self;
}
/* allocate SeparateCompilerVisitor */
void CHECK_NEW_separate_compiler__SeparateCompilerVisitor(val* self) {
val* var /* : AbstractCompiler */;
val* var1 /* : nullable Frame */;
val* var2 /* : CodeWriter */;
var = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dcompiler].val; /* @compiler on <self:SeparateCompilerVisitor> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @compiler", "src/abstract_compiler.nit", 533);
exit(1);
}
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dframe].val; /* @frame on <self:SeparateCompilerVisitor> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dwriter].val; /* @writer on <self:SeparateCompilerVisitor> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @writer", "src/abstract_compiler.nit", 548);
exit(1);
}
}
/* runtime class separate_compiler__SeparateRuntimeFunction */
const struct class class_separate_compiler__SeparateRuntimeFunction = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#hash */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateRuntimeFunction__to_s, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to separate_compiler:SeparateRuntimeFunction:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to separate_compiler:SeparateRuntimeFunction:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to separate_compiler:SeparateRuntimeFunction:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to separate_compiler:SeparateRuntimeFunction:math#Object#srand */
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
/* allocate SeparateRuntimeFunction */
void CHECK_NEW_separate_compiler__SeparateRuntimeFunction(val* self) {
val* var /* : MMethodDef */;
var = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dmmethoddef].val; /* @mmethoddef on <self:SeparateRuntimeFunction> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mmethoddef", "src/abstract_compiler.nit", 969);
exit(1);
}
}
/* runtime class separate_compiler__VirtualRuntimeFunction */
const struct class class_separate_compiler__VirtualRuntimeFunction = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#hash */
(nitmethod_t)VIRTUAL_separate_compiler__VirtualRuntimeFunction__to_s, /* pointer to separate_compiler:VirtualRuntimeFunction:separate_compiler#VirtualRuntimeFunction#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_compiler:VirtualRuntimeFunction:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_compiler:VirtualRuntimeFunction:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_compiler:VirtualRuntimeFunction:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_compiler:VirtualRuntimeFunction:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_compiler:VirtualRuntimeFunction:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to separate_compiler:VirtualRuntimeFunction:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to separate_compiler:VirtualRuntimeFunction:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to separate_compiler:VirtualRuntimeFunction:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to separate_compiler:VirtualRuntimeFunction:math#Object#srand */
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
/* allocate VirtualRuntimeFunction */
void CHECK_NEW_separate_compiler__VirtualRuntimeFunction(val* self) {
val* var /* : MMethodDef */;
var = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dmmethoddef].val; /* @mmethoddef on <self:VirtualRuntimeFunction> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mmethoddef", "src/abstract_compiler.nit", 969);
exit(1);
}
}
/* runtime class layout_builders__Layout */
const struct class class_layout_builders__Layout = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:Layout:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:Layout:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:Layout:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:Layout:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:Layout:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:Layout:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:Layout:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:Layout:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:Layout:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:Layout:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:Layout:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:Layout:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:Layout:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:Layout:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:Layout:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:Layout:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:Layout:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:Layout:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:Layout:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:Layout:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:Layout:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:Layout:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:Layout:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:Layout:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:Layout:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:Layout:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:Layout:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:Layout:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:Layout:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:Layout:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:Layout:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:Layout:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:Layout:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:Layout:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:Layout:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:Layout:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:Layout:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:Layout:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:Layout:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:Layout:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:Layout:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_layout_builders__Layout__ids, /* pointer to layout_builders:Layout:layout_builders#Layout#ids */
(nitmethod_t)VIRTUAL_layout_builders__Layout__ids_61d, /* pointer to layout_builders:Layout:layout_builders#Layout#ids= */
(nitmethod_t)VIRTUAL_layout_builders__Layout__pos, /* pointer to layout_builders:Layout:layout_builders#Layout#pos */
(nitmethod_t)VIRTUAL_layout_builders__Layout__pos_61d, /* pointer to layout_builders:Layout:layout_builders#Layout#pos= */
(nitmethod_t)VIRTUAL_layout_builders__Layout__init, /* pointer to layout_builders:Layout:layout_builders#Layout#init */
}
};
/* allocate Layout[Object] */
val* NEW_layout_builders__Layout(const struct type* type) {
val* self /* : Layout[Object] */;
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__Layout;
var = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__Layout_FT0kernel__Int]);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashMap__init]))(var) /* init on <var:HashMap[Object, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var);
self->attrs[COLOR_layout_builders__Layout___64dids].val = var; /* @ids on <self:Layout[Object] exact> */
var1 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__Layout_FT0kernel__Int]);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashMap__init]))(var1) /* init on <var1:HashMap[Object, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var1);
self->attrs[COLOR_layout_builders__Layout___64dpos].val = var1; /* @pos on <self:Layout[Object] exact> */
return self;
}
/* allocate Layout[Object] */
void CHECK_NEW_layout_builders__Layout(val* self) {
}
/* runtime class layout_builders__PHLayout */
const struct class class_layout_builders__PHLayout = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:PHLayout:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:PHLayout:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:PHLayout:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:PHLayout:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:PHLayout:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:PHLayout:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:PHLayout:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:PHLayout:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:PHLayout:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:PHLayout:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:PHLayout:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:PHLayout:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:PHLayout:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:PHLayout:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:PHLayout:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:PHLayout:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:PHLayout:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:PHLayout:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:PHLayout:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:PHLayout:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:PHLayout:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:PHLayout:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:PHLayout:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:PHLayout:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:PHLayout:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:PHLayout:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:PHLayout:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:PHLayout:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:PHLayout:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:PHLayout:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:PHLayout:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:PHLayout:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:PHLayout:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:PHLayout:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:PHLayout:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:PHLayout:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:PHLayout:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:PHLayout:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:PHLayout:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:PHLayout:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:PHLayout:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_layout_builders__Layout__ids, /* pointer to layout_builders:PHLayout:layout_builders#Layout#ids */
(nitmethod_t)VIRTUAL_layout_builders__Layout__ids_61d, /* pointer to layout_builders:PHLayout:layout_builders#Layout#ids= */
(nitmethod_t)VIRTUAL_layout_builders__Layout__pos, /* pointer to layout_builders:PHLayout:layout_builders#Layout#pos */
(nitmethod_t)VIRTUAL_layout_builders__Layout__pos_61d, /* pointer to layout_builders:PHLayout:layout_builders#Layout#pos= */
(nitmethod_t)VIRTUAL_layout_builders__Layout__init, /* pointer to layout_builders:PHLayout:layout_builders#Layout#init */
(nitmethod_t)VIRTUAL_layout_builders__PHLayout__masks, /* pointer to layout_builders:PHLayout:layout_builders#PHLayout#masks */
(nitmethod_t)VIRTUAL_layout_builders__PHLayout__masks_61d, /* pointer to layout_builders:PHLayout:layout_builders#PHLayout#masks= */
(nitmethod_t)VIRTUAL_layout_builders__PHLayout__hashes, /* pointer to layout_builders:PHLayout:layout_builders#PHLayout#hashes */
(nitmethod_t)VIRTUAL_layout_builders__PHLayout__hashes_61d, /* pointer to layout_builders:PHLayout:layout_builders#PHLayout#hashes= */
(nitmethod_t)VIRTUAL_layout_builders__PHLayout__init, /* pointer to layout_builders:PHLayout:layout_builders#PHLayout#init */
}
};
/* allocate PHLayout[Object, Object] */
val* NEW_layout_builders__PHLayout(const struct type* type) {
val* self /* : PHLayout[Object, Object] */;
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
val* var2 /* : HashMap[Object, Int] */;
val* var3 /* : HashMap[Object, Map[Object, Int]] */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__PHLayout;
var = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__Layout_FT0kernel__Int]);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashMap__init]))(var) /* init on <var:HashMap[Object, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var);
self->attrs[COLOR_layout_builders__Layout___64dids].val = var; /* @ids on <self:PHLayout[Object, Object] exact> */
var1 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__Layout_FT0kernel__Int]);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashMap__init]))(var1) /* init on <var1:HashMap[Object, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var1);
self->attrs[COLOR_layout_builders__Layout___64dpos].val = var1; /* @pos on <self:PHLayout[Object, Object] exact> */
var2 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__PHLayout_FT0kernel__Int]);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashMap__init]))(var2) /* init on <var2:HashMap[Object, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var2);
self->attrs[COLOR_layout_builders__PHLayout___64dmasks].val = var2; /* @masks on <self:PHLayout[Object, Object] exact> */
var3 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__PHLayout_FT0abstract_collection__Maplayout_builders__PHLayout_FT1kernel__Int]);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[Object, Map[Object, Int]]>*/;
CHECK_NEW_hash_collection__HashMap(var3);
self->attrs[COLOR_layout_builders__PHLayout___64dhashes].val = var3; /* @hashes on <self:PHLayout[Object, Object] exact> */
return self;
}
/* allocate PHLayout[Object, Object] */
void CHECK_NEW_layout_builders__PHLayout(val* self) {
}
/* runtime class layout_builders__MTypePOSetBuilder */
const struct class class_layout_builders__MTypePOSetBuilder = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:MTypePOSetBuilder:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:MTypePOSetBuilder:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:MTypePOSetBuilder:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:MTypePOSetBuilder:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:MTypePOSetBuilder:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:MTypePOSetBuilder:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:MTypePOSetBuilder:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:MTypePOSetBuilder:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:MTypePOSetBuilder:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:MTypePOSetBuilder:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:MTypePOSetBuilder:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:MTypePOSetBuilder:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:MTypePOSetBuilder:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:MTypePOSetBuilder:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:MTypePOSetBuilder:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:MTypePOSetBuilder:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:MTypePOSetBuilder:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:MTypePOSetBuilder:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:MTypePOSetBuilder:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:MTypePOSetBuilder:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:MTypePOSetBuilder:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:MTypePOSetBuilder:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:MTypePOSetBuilder:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:MTypePOSetBuilder:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:MTypePOSetBuilder:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:MTypePOSetBuilder:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:MTypePOSetBuilder:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:MTypePOSetBuilder:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:MTypePOSetBuilder:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:MTypePOSetBuilder:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:MTypePOSetBuilder:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:MTypePOSetBuilder:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:MTypePOSetBuilder:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:MTypePOSetBuilder:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:MTypePOSetBuilder:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:MTypePOSetBuilder:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:MTypePOSetBuilder:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:MTypePOSetBuilder:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:MTypePOSetBuilder:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:MTypePOSetBuilder:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:MTypePOSetBuilder:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_layout_builders__POSetBuilder__mmodule, /* pointer to layout_builders:MTypePOSetBuilder:layout_builders#POSetBuilder#mmodule */
(nitmethod_t)VIRTUAL_layout_builders__POSetBuilder__mmodule_61d, /* pointer to layout_builders:MTypePOSetBuilder:layout_builders#POSetBuilder#mmodule= */
(nitmethod_t)VIRTUAL_layout_builders__POSetBuilder__init, /* pointer to layout_builders:MTypePOSetBuilder:layout_builders#POSetBuilder#init */
(nitmethod_t)VIRTUAL_layout_builders__MTypePOSetBuilder__build_poset, /* pointer to layout_builders:MTypePOSetBuilder:layout_builders#MTypePOSetBuilder#build_poset */
}
};
/* allocate MTypePOSetBuilder */
val* NEW_layout_builders__MTypePOSetBuilder(const struct type* type) {
val* self /* : MTypePOSetBuilder */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__MTypePOSetBuilder;
return self;
}
/* allocate MTypePOSetBuilder */
void CHECK_NEW_layout_builders__MTypePOSetBuilder(val* self) {
val* var /* : MModule */;
var = self->attrs[COLOR_layout_builders__POSetBuilder___64dmmodule].val; /* @mmodule on <self:MTypePOSetBuilder> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mmodule", "src/layout_builders.nit", 94);
exit(1);
}
}
/* runtime class layout_builders__MClassPOSetBuilder */
const struct class class_layout_builders__MClassPOSetBuilder = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:MClassPOSetBuilder:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:MClassPOSetBuilder:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:MClassPOSetBuilder:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:MClassPOSetBuilder:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:MClassPOSetBuilder:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:MClassPOSetBuilder:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:MClassPOSetBuilder:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:MClassPOSetBuilder:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:MClassPOSetBuilder:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:MClassPOSetBuilder:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:MClassPOSetBuilder:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:MClassPOSetBuilder:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:MClassPOSetBuilder:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:MClassPOSetBuilder:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:MClassPOSetBuilder:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:MClassPOSetBuilder:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:MClassPOSetBuilder:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:MClassPOSetBuilder:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:MClassPOSetBuilder:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:MClassPOSetBuilder:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:MClassPOSetBuilder:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:MClassPOSetBuilder:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:MClassPOSetBuilder:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:MClassPOSetBuilder:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:MClassPOSetBuilder:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:MClassPOSetBuilder:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:MClassPOSetBuilder:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:MClassPOSetBuilder:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:MClassPOSetBuilder:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:MClassPOSetBuilder:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:MClassPOSetBuilder:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:MClassPOSetBuilder:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:MClassPOSetBuilder:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:MClassPOSetBuilder:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:MClassPOSetBuilder:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:MClassPOSetBuilder:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:MClassPOSetBuilder:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:MClassPOSetBuilder:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:MClassPOSetBuilder:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:MClassPOSetBuilder:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:MClassPOSetBuilder:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_layout_builders__POSetBuilder__mmodule, /* pointer to layout_builders:MClassPOSetBuilder:layout_builders#POSetBuilder#mmodule */
(nitmethod_t)VIRTUAL_layout_builders__POSetBuilder__mmodule_61d, /* pointer to layout_builders:MClassPOSetBuilder:layout_builders#POSetBuilder#mmodule= */
(nitmethod_t)VIRTUAL_layout_builders__POSetBuilder__init, /* pointer to layout_builders:MClassPOSetBuilder:layout_builders#POSetBuilder#init */
(nitmethod_t)VIRTUAL_layout_builders__MClassPOSetBuilder__build_poset, /* pointer to layout_builders:MClassPOSetBuilder:layout_builders#MClassPOSetBuilder#build_poset */
}
};
/* allocate MClassPOSetBuilder */
val* NEW_layout_builders__MClassPOSetBuilder(const struct type* type) {
val* self /* : MClassPOSetBuilder */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__MClassPOSetBuilder;
return self;
}
/* allocate MClassPOSetBuilder */
void CHECK_NEW_layout_builders__MClassPOSetBuilder(val* self) {
val* var /* : MModule */;
var = self->attrs[COLOR_layout_builders__POSetBuilder___64dmmodule].val; /* @mmodule on <self:MClassPOSetBuilder> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mmodule", "src/layout_builders.nit", 94);
exit(1);
}
}
/* runtime class layout_builders__MTypeBMizer */
const struct class class_layout_builders__MTypeBMizer = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:MTypeBMizer:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:MTypeBMizer:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:MTypeBMizer:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:MTypeBMizer:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:MTypeBMizer:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:MTypeBMizer:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:MTypeBMizer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:MTypeBMizer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:MTypeBMizer:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:MTypeBMizer:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:MTypeBMizer:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:MTypeBMizer:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:MTypeBMizer:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:MTypeBMizer:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:MTypeBMizer:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:MTypeBMizer:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:MTypeBMizer:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:MTypeBMizer:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:MTypeBMizer:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:MTypeBMizer:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:MTypeBMizer:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:MTypeBMizer:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:MTypeBMizer:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:MTypeBMizer:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:MTypeBMizer:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:MTypeBMizer:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:MTypeBMizer:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:MTypeBMizer:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:MTypeBMizer:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:MTypeBMizer:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:MTypeBMizer:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:MTypeBMizer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:MTypeBMizer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:MTypeBMizer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:MTypeBMizer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:MTypeBMizer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:MTypeBMizer:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:MTypeBMizer:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:MTypeBMizer:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:MTypeBMizer:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:MTypeBMizer:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__build_layout, /* pointer to layout_builders:MTypeBMizer:layout_builders#TypingBMizer#build_layout */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__poset, /* pointer to layout_builders:MTypeBMizer:layout_builders#TypingBMizer#poset */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__mmodule, /* pointer to layout_builders:MTypeBMizer:layout_builders#TypingBMizer#mmodule */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__mmodule_61d, /* pointer to layout_builders:MTypeBMizer:layout_builders#TypingBMizer#mmodule= */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__poset_builder, /* pointer to layout_builders:MTypeBMizer:layout_builders#TypingBMizer#poset_builder */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__poset_builder_61d, /* pointer to layout_builders:MTypeBMizer:layout_builders#TypingBMizer#poset_builder= */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__poset_cache, /* pointer to layout_builders:MTypeBMizer:layout_builders#TypingBMizer#poset_cache */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__poset_cache_61d, /* pointer to layout_builders:MTypeBMizer:layout_builders#TypingBMizer#poset_cache= */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__init, /* pointer to layout_builders:MTypeBMizer:layout_builders#TypingBMizer#init */
(nitmethod_t)VIRTUAL_layout_builders__MTypeBMizer__init, /* pointer to layout_builders:MTypeBMizer:layout_builders#MTypeBMizer#init */
}
};
/* allocate MTypeBMizer */
val* NEW_layout_builders__MTypeBMizer(const struct type* type) {
val* self /* : MTypeBMizer */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__MTypeBMizer;
return self;
}
/* allocate MTypeBMizer */
void CHECK_NEW_layout_builders__MTypeBMizer(val* self) {
val* var /* : MModule */;
val* var1 /* : POSetBuilder[Object] */;
val* var2 /* : nullable POSet[Object] */;
var = self->attrs[COLOR_layout_builders__TypingBMizer___64dmmodule].val; /* @mmodule on <self:MTypeBMizer> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mmodule", "src/layout_builders.nit", 132);
exit(1);
}
var1 = self->attrs[COLOR_layout_builders__TypingBMizer___64dposet_builder].val; /* @poset_builder on <self:MTypeBMizer> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @poset_builder", "src/layout_builders.nit", 133);
exit(1);
}
var2 = self->attrs[COLOR_layout_builders__TypingBMizer___64dposet_cache].val; /* @poset_cache on <self:MTypeBMizer> */
}
/* runtime class layout_builders__MClassBMizer */
const struct class class_layout_builders__MClassBMizer = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:MClassBMizer:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:MClassBMizer:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:MClassBMizer:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:MClassBMizer:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:MClassBMizer:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:MClassBMizer:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:MClassBMizer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:MClassBMizer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:MClassBMizer:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:MClassBMizer:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:MClassBMizer:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:MClassBMizer:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:MClassBMizer:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:MClassBMizer:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:MClassBMizer:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:MClassBMizer:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:MClassBMizer:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:MClassBMizer:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:MClassBMizer:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:MClassBMizer:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:MClassBMizer:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:MClassBMizer:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:MClassBMizer:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:MClassBMizer:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:MClassBMizer:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:MClassBMizer:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:MClassBMizer:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:MClassBMizer:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:MClassBMizer:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:MClassBMizer:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:MClassBMizer:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:MClassBMizer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:MClassBMizer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:MClassBMizer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:MClassBMizer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:MClassBMizer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:MClassBMizer:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:MClassBMizer:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:MClassBMizer:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:MClassBMizer:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:MClassBMizer:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__build_layout, /* pointer to layout_builders:MClassBMizer:layout_builders#TypingBMizer#build_layout */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__poset, /* pointer to layout_builders:MClassBMizer:layout_builders#TypingBMizer#poset */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__mmodule, /* pointer to layout_builders:MClassBMizer:layout_builders#TypingBMizer#mmodule */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__mmodule_61d, /* pointer to layout_builders:MClassBMizer:layout_builders#TypingBMizer#mmodule= */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__poset_builder, /* pointer to layout_builders:MClassBMizer:layout_builders#TypingBMizer#poset_builder */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__poset_builder_61d, /* pointer to layout_builders:MClassBMizer:layout_builders#TypingBMizer#poset_builder= */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__poset_cache, /* pointer to layout_builders:MClassBMizer:layout_builders#TypingBMizer#poset_cache */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__poset_cache_61d, /* pointer to layout_builders:MClassBMizer:layout_builders#TypingBMizer#poset_cache= */
(nitmethod_t)VIRTUAL_layout_builders__TypingBMizer__init, /* pointer to layout_builders:MClassBMizer:layout_builders#TypingBMizer#init */
(nitmethod_t)VIRTUAL_layout_builders__MClassBMizer__init, /* pointer to layout_builders:MClassBMizer:layout_builders#MClassBMizer#init */
}
};
/* allocate MClassBMizer */
val* NEW_layout_builders__MClassBMizer(const struct type* type) {
val* self /* : MClassBMizer */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__MClassBMizer;
return self;
}
/* allocate MClassBMizer */
void CHECK_NEW_layout_builders__MClassBMizer(val* self) {
val* var /* : MModule */;
val* var1 /* : POSetBuilder[Object] */;
val* var2 /* : nullable POSet[Object] */;
var = self->attrs[COLOR_layout_builders__TypingBMizer___64dmmodule].val; /* @mmodule on <self:MClassBMizer> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mmodule", "src/layout_builders.nit", 132);
exit(1);
}
var1 = self->attrs[COLOR_layout_builders__TypingBMizer___64dposet_builder].val; /* @poset_builder on <self:MClassBMizer> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @poset_builder", "src/layout_builders.nit", 133);
exit(1);
}
var2 = self->attrs[COLOR_layout_builders__TypingBMizer___64dposet_cache].val; /* @poset_cache on <self:MClassBMizer> */
}
/* runtime class layout_builders__ResolutionBMizer */
const struct class class_layout_builders__ResolutionBMizer = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:ResolutionBMizer:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:ResolutionBMizer:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:ResolutionBMizer:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:ResolutionBMizer:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:ResolutionBMizer:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:ResolutionBMizer:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:ResolutionBMizer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:ResolutionBMizer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:ResolutionBMizer:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:ResolutionBMizer:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:ResolutionBMizer:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:ResolutionBMizer:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:ResolutionBMizer:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:ResolutionBMizer:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:ResolutionBMizer:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:ResolutionBMizer:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:ResolutionBMizer:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:ResolutionBMizer:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:ResolutionBMizer:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:ResolutionBMizer:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:ResolutionBMizer:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:ResolutionBMizer:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:ResolutionBMizer:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:ResolutionBMizer:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:ResolutionBMizer:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:ResolutionBMizer:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:ResolutionBMizer:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:ResolutionBMizer:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:ResolutionBMizer:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:ResolutionBMizer:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:ResolutionBMizer:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:ResolutionBMizer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:ResolutionBMizer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:ResolutionBMizer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:ResolutionBMizer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:ResolutionBMizer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:ResolutionBMizer:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:ResolutionBMizer:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:ResolutionBMizer:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:ResolutionBMizer:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:ResolutionBMizer:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionBMizer__build_layout, /* pointer to layout_builders:ResolutionBMizer:layout_builders#ResolutionBMizer#build_layout */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionBMizer__init, /* pointer to layout_builders:ResolutionBMizer:layout_builders#ResolutionBMizer#init */
}
};
/* allocate ResolutionBMizer */
val* NEW_layout_builders__ResolutionBMizer(const struct type* type) {
val* self /* : ResolutionBMizer */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__ResolutionBMizer;
return self;
}
/* allocate ResolutionBMizer */
void CHECK_NEW_layout_builders__ResolutionBMizer(val* self) {
}
/* runtime class layout_builders__MPropertyBMizer */
/* allocate MPropertyBMizer[PropertyLayoutElement] */
val* NEW_layout_builders__MPropertyBMizer(const struct type* type) {
fprintf(stderr, "Runtime error: %s\n", "MPropertyBMizer is DEAD");
exit(1);
}
/* allocate MPropertyBMizer[PropertyLayoutElement] */
void CHECK_NEW_layout_builders__MPropertyBMizer(val* self) {
fprintf(stderr, "Runtime error: %s\n", "MPropertyBMizer is DEAD");
exit(1);
}
/* runtime class layout_builders__MTypeColorer */
const struct class class_layout_builders__MTypeColorer = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:MTypeColorer:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:MTypeColorer:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:MTypeColorer:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:MTypeColorer:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:MTypeColorer:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:MTypeColorer:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:MTypeColorer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:MTypeColorer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:MTypeColorer:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:MTypeColorer:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:MTypeColorer:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:MTypeColorer:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:MTypeColorer:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:MTypeColorer:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:MTypeColorer:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:MTypeColorer:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:MTypeColorer:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:MTypeColorer:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:MTypeColorer:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:MTypeColorer:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:MTypeColorer:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:MTypeColorer:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:MTypeColorer:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:MTypeColorer:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:MTypeColorer:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:MTypeColorer:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:MTypeColorer:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:MTypeColorer:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:MTypeColorer:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:MTypeColorer:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:MTypeColorer:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:MTypeColorer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:MTypeColorer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:MTypeColorer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:MTypeColorer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:MTypeColorer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:MTypeColorer:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:MTypeColorer:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:MTypeColorer:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:MTypeColorer:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:MTypeColorer:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__build_layout, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#build_layout */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__poset, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#poset */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__core, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#core */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__core_61d, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#core= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__crown, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#crown */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__crown_61d, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#crown= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__border, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#border */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__border_61d, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#border= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__coloration_result, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#coloration_result */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__coloration_result_61d, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#coloration_result= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__mmodule, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#mmodule */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__mmodule_61d, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#mmodule= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__poset_builder, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#poset_builder */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__poset_builder_61d, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#poset_builder= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__poset_cache, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#poset_cache */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__poset_cache_61d, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#poset_cache= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__init, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#init */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__compute_ids, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#compute_ids */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__colorize, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#colorize */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__colorize_elements, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#colorize_elements */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__is_color_free, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#is_color_free */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__tag_elements, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#tag_elements */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__build_conflicts_graph, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#build_conflicts_graph */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__conflicts_graph, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#conflicts_graph */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__conflicts_graph_61d, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#conflicts_graph= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__linear_extensions_cache, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#linear_extensions_cache */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__linear_extensions_cache_61d, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#linear_extensions_cache= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__linear_extension, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#linear_extension */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__reverse_linearize, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#reverse_linearize */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__linearize, /* pointer to layout_builders:MTypeColorer:layout_builders#TypingColorer#linearize */
(nitmethod_t)VIRTUAL_layout_builders__MTypeColorer__init, /* pointer to layout_builders:MTypeColorer:layout_builders#MTypeColorer#init */
}
};
/* allocate MTypeColorer */
val* NEW_layout_builders__MTypeColorer(const struct type* type) {
val* self /* : MTypeColorer */;
val* var /* : HashSet[MType] */;
val* var1 /* : HashSet[MType] */;
val* var2 /* : HashSet[MType] */;
val* var3 /* : HashMap[MType, Int] */;
val* var4 /* : HashMap[MType, Array[MType]] */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__MTypeColorer;
var = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetlayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashSet__init]))(var) /* init on <var:HashSet[MType]>*/;
CHECK_NEW_hash_collection__HashSet(var);
self->attrs[COLOR_layout_builders__TypingColorer___64dcore].val = var; /* @core on <self:MTypeColorer exact> */
var1 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetlayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[MType]>*/;
CHECK_NEW_hash_collection__HashSet(var1);
self->attrs[COLOR_layout_builders__TypingColorer___64dcrown].val = var1; /* @crown on <self:MTypeColorer exact> */
var2 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetlayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashSet__init]))(var2) /* init on <var2:HashSet[MType]>*/;
CHECK_NEW_hash_collection__HashSet(var2);
self->attrs[COLOR_layout_builders__TypingColorer___64dborder].val = var2; /* @border on <self:MTypeColorer exact> */
var3 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__TypingColorer_FT0kernel__Int]);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[MType, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var3);
self->attrs[COLOR_layout_builders__TypingColorer___64dcoloration_result].val = var3; /* @coloration_result on <self:MTypeColorer exact> */
var4 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__TypingColorer_FT0array__Arraylayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var4->class->vft[COLOR_hash_collection__HashMap__init]))(var4) /* init on <var4:HashMap[MType, Array[MType]]>*/;
CHECK_NEW_hash_collection__HashMap(var4);
self->attrs[COLOR_layout_builders__TypingColorer___64dlinear_extensions_cache].val = var4; /* @linear_extensions_cache on <self:MTypeColorer exact> */
return self;
}
/* allocate MTypeColorer */
void CHECK_NEW_layout_builders__MTypeColorer(val* self) {
val* var /* : MModule */;
val* var1 /* : POSetBuilder[Object] */;
val* var2 /* : nullable POSet[Object] */;
val* var3 /* : nullable HashMap[Object, Set[Object]] */;
var = self->attrs[COLOR_layout_builders__TypingColorer___64dmmodule].val; /* @mmodule on <self:MTypeColorer> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mmodule", "src/layout_builders.nit", 230);
exit(1);
}
var1 = self->attrs[COLOR_layout_builders__TypingColorer___64dposet_builder].val; /* @poset_builder on <self:MTypeColorer> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @poset_builder", "src/layout_builders.nit", 231);
exit(1);
}
var2 = self->attrs[COLOR_layout_builders__TypingColorer___64dposet_cache].val; /* @poset_cache on <self:MTypeColorer> */
var3 = self->attrs[COLOR_layout_builders__TypingColorer___64dconflicts_graph].val; /* @conflicts_graph on <self:MTypeColorer> */
}
/* runtime class layout_builders__MClassColorer */
const struct class class_layout_builders__MClassColorer = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:MClassColorer:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:MClassColorer:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:MClassColorer:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:MClassColorer:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:MClassColorer:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:MClassColorer:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:MClassColorer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:MClassColorer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:MClassColorer:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:MClassColorer:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:MClassColorer:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:MClassColorer:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:MClassColorer:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:MClassColorer:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:MClassColorer:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:MClassColorer:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:MClassColorer:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:MClassColorer:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:MClassColorer:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:MClassColorer:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:MClassColorer:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:MClassColorer:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:MClassColorer:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:MClassColorer:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:MClassColorer:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:MClassColorer:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:MClassColorer:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:MClassColorer:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:MClassColorer:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:MClassColorer:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:MClassColorer:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:MClassColorer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:MClassColorer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:MClassColorer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:MClassColorer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:MClassColorer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:MClassColorer:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:MClassColorer:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:MClassColorer:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:MClassColorer:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:MClassColorer:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__build_layout, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#build_layout */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__poset, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#poset */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__core, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#core */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__core_61d, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#core= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__crown, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#crown */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__crown_61d, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#crown= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__border, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#border */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__border_61d, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#border= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__coloration_result, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#coloration_result */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__coloration_result_61d, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#coloration_result= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__mmodule, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#mmodule */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__mmodule_61d, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#mmodule= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__poset_builder, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#poset_builder */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__poset_builder_61d, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#poset_builder= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__poset_cache, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#poset_cache */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__poset_cache_61d, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#poset_cache= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__init, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#init */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__compute_ids, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#compute_ids */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__colorize, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#colorize */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__colorize_elements, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#colorize_elements */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__is_color_free, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#is_color_free */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__tag_elements, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#tag_elements */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__build_conflicts_graph, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#build_conflicts_graph */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__conflicts_graph, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#conflicts_graph */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__conflicts_graph_61d, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#conflicts_graph= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__linear_extensions_cache, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#linear_extensions_cache */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__linear_extensions_cache_61d, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#linear_extensions_cache= */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__linear_extension, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#linear_extension */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__reverse_linearize, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#reverse_linearize */
(nitmethod_t)VIRTUAL_layout_builders__TypingColorer__linearize, /* pointer to layout_builders:MClassColorer:layout_builders#TypingColorer#linearize */
(nitmethod_t)VIRTUAL_layout_builders__MClassColorer__init, /* pointer to layout_builders:MClassColorer:layout_builders#MClassColorer#init */
}
};
/* allocate MClassColorer */
val* NEW_layout_builders__MClassColorer(const struct type* type) {
val* self /* : MClassColorer */;
val* var /* : HashSet[MClass] */;
val* var1 /* : HashSet[MClass] */;
val* var2 /* : HashSet[MClass] */;
val* var3 /* : HashMap[MClass, Int] */;
val* var4 /* : HashMap[MClass, Array[MClass]] */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__MClassColorer;
var = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetlayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashSet__init]))(var) /* init on <var:HashSet[MClass]>*/;
CHECK_NEW_hash_collection__HashSet(var);
self->attrs[COLOR_layout_builders__TypingColorer___64dcore].val = var; /* @core on <self:MClassColorer exact> */
var1 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetlayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashSet__init]))(var1) /* init on <var1:HashSet[MClass]>*/;
CHECK_NEW_hash_collection__HashSet(var1);
self->attrs[COLOR_layout_builders__TypingColorer___64dcrown].val = var1; /* @crown on <self:MClassColorer exact> */
var2 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetlayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var2->class->vft[COLOR_hash_collection__HashSet__init]))(var2) /* init on <var2:HashSet[MClass]>*/;
CHECK_NEW_hash_collection__HashSet(var2);
self->attrs[COLOR_layout_builders__TypingColorer___64dborder].val = var2; /* @border on <self:MClassColorer exact> */
var3 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__TypingColorer_FT0kernel__Int]);
((void (*)(val*))(var3->class->vft[COLOR_hash_collection__HashMap__init]))(var3) /* init on <var3:HashMap[MClass, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var3);
self->attrs[COLOR_layout_builders__TypingColorer___64dcoloration_result].val = var3; /* @coloration_result on <self:MClassColorer exact> */
var4 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__TypingColorer_FT0array__Arraylayout_builders__TypingColorer_FT0]);
((void (*)(val*))(var4->class->vft[COLOR_hash_collection__HashMap__init]))(var4) /* init on <var4:HashMap[MClass, Array[MClass]]>*/;
CHECK_NEW_hash_collection__HashMap(var4);
self->attrs[COLOR_layout_builders__TypingColorer___64dlinear_extensions_cache].val = var4; /* @linear_extensions_cache on <self:MClassColorer exact> */
return self;
}
/* allocate MClassColorer */
void CHECK_NEW_layout_builders__MClassColorer(val* self) {
val* var /* : MModule */;
val* var1 /* : POSetBuilder[Object] */;
val* var2 /* : nullable POSet[Object] */;
val* var3 /* : nullable HashMap[Object, Set[Object]] */;
var = self->attrs[COLOR_layout_builders__TypingColorer___64dmmodule].val; /* @mmodule on <self:MClassColorer> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mmodule", "src/layout_builders.nit", 230);
exit(1);
}
var1 = self->attrs[COLOR_layout_builders__TypingColorer___64dposet_builder].val; /* @poset_builder on <self:MClassColorer> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @poset_builder", "src/layout_builders.nit", 231);
exit(1);
}
var2 = self->attrs[COLOR_layout_builders__TypingColorer___64dposet_cache].val; /* @poset_cache on <self:MClassColorer> */
var3 = self->attrs[COLOR_layout_builders__TypingColorer___64dconflicts_graph].val; /* @conflicts_graph on <self:MClassColorer> */
}
/* runtime class layout_builders__MPropertyColorer */
const struct class class_layout_builders__MPropertyColorer = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:MPropertyColorer:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:MPropertyColorer:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:MPropertyColorer:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:MPropertyColorer:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:MPropertyColorer:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:MPropertyColorer:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:MPropertyColorer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:MPropertyColorer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:MPropertyColorer:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:MPropertyColorer:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:MPropertyColorer:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:MPropertyColorer:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:MPropertyColorer:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:MPropertyColorer:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:MPropertyColorer:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:MPropertyColorer:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:MPropertyColorer:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:MPropertyColorer:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:MPropertyColorer:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:MPropertyColorer:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:MPropertyColorer:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:MPropertyColorer:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:MPropertyColorer:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:MPropertyColorer:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:MPropertyColorer:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:MPropertyColorer:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:MPropertyColorer:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:MPropertyColorer:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:MPropertyColorer:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:MPropertyColorer:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:MPropertyColorer:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:MPropertyColorer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:MPropertyColorer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:MPropertyColorer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:MPropertyColorer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:MPropertyColorer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:MPropertyColorer:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:MPropertyColorer:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:MPropertyColorer:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:MPropertyColorer:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:MPropertyColorer:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__build_layout, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#build_layout */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__mmodule, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#mmodule */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__mmodule_61d, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#mmodule= */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__class_colorer, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#class_colorer */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__class_colorer_61d, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#class_colorer= */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__coloration_result, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#coloration_result */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__coloration_result_61d, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#coloration_result= */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__init, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#init */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__colorize, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#colorize */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__colorize_core, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#colorize_core */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__colorize_crown, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#colorize_crown */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__colorize_elements, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#colorize_elements */
(nitmethod_t)VIRTUAL_layout_builders__MPropertyColorer__max_color, /* pointer to layout_builders:MPropertyColorer:layout_builders#MPropertyColorer#max_color */
}
};
/* allocate MPropertyColorer[PropertyLayoutElement] */
val* NEW_layout_builders__MPropertyColorer(const struct type* type) {
val* self /* : MPropertyColorer[PropertyLayoutElement] */;
val* var /* : HashMap[PropertyLayoutElement, Int] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__MPropertyColorer;
var = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMaplayout_builders__MPropertyColorer_FT0kernel__Int]);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashMap__init]))(var) /* init on <var:HashMap[PropertyLayoutElement, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var);
self->attrs[COLOR_layout_builders__MPropertyColorer___64dcoloration_result].val = var; /* @coloration_result on <self:MPropertyColorer[PropertyLayoutElement] exact> */
return self;
}
/* allocate MPropertyColorer[PropertyLayoutElement] */
void CHECK_NEW_layout_builders__MPropertyColorer(val* self) {
val* var /* : MModule */;
val* var1 /* : MClassColorer */;
var = self->attrs[COLOR_layout_builders__MPropertyColorer___64dmmodule].val; /* @mmodule on <self:MPropertyColorer[PropertyLayoutElement]> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mmodule", "src/layout_builders.nit", 394);
exit(1);
}
var1 = self->attrs[COLOR_layout_builders__MPropertyColorer___64dclass_colorer].val; /* @class_colorer on <self:MPropertyColorer[PropertyLayoutElement]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @class_colorer", "src/layout_builders.nit", 395);
exit(1);
}
}
/* runtime class layout_builders__ResolutionColorer */
const struct class class_layout_builders__ResolutionColorer = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:ResolutionColorer:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:ResolutionColorer:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:ResolutionColorer:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:ResolutionColorer:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:ResolutionColorer:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:ResolutionColorer:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:ResolutionColorer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:ResolutionColorer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:ResolutionColorer:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:ResolutionColorer:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:ResolutionColorer:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:ResolutionColorer:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:ResolutionColorer:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:ResolutionColorer:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:ResolutionColorer:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:ResolutionColorer:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:ResolutionColorer:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:ResolutionColorer:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:ResolutionColorer:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:ResolutionColorer:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:ResolutionColorer:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:ResolutionColorer:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:ResolutionColorer:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:ResolutionColorer:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:ResolutionColorer:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:ResolutionColorer:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:ResolutionColorer:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:ResolutionColorer:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:ResolutionColorer:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:ResolutionColorer:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:ResolutionColorer:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:ResolutionColorer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:ResolutionColorer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:ResolutionColorer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:ResolutionColorer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:ResolutionColorer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:ResolutionColorer:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:ResolutionColorer:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:ResolutionColorer:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:ResolutionColorer:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:ResolutionColorer:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__build_layout, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#build_layout */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__coloration_result, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#coloration_result */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__coloration_result_61d, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#coloration_result= */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__init, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#init */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__compute_ids, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#compute_ids */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__colorize_elements, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#colorize_elements */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__is_color_free, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#is_color_free */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__build_conflicts_graph, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#build_conflicts_graph */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__conflicts_graph, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#conflicts_graph */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__conflicts_graph_61d, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#conflicts_graph= */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionColorer__add_conflict, /* pointer to layout_builders:ResolutionColorer:layout_builders#ResolutionColorer#add_conflict */
}
};
/* allocate ResolutionColorer */
val* NEW_layout_builders__ResolutionColorer(const struct type* type) {
val* self /* : ResolutionColorer */;
val* var /* : HashMap[MType, Int] */;
val* var1 /* : HashMap[MType, Set[MType]] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__ResolutionColorer;
var = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypekernel__Int);
((void (*)(val*))(var->class->vft[COLOR_hash_collection__HashMap__init]))(var) /* init on <var:HashMap[MType, Int]>*/;
CHECK_NEW_hash_collection__HashMap(var);
self->attrs[COLOR_layout_builders__ResolutionColorer___64dcoloration_result].val = var; /* @coloration_result on <self:ResolutionColorer exact> */
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypeabstract_collection__Setmodel__MType);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashMap__init]))(var1) /* init on <var1:HashMap[MType, Set[MType]]>*/;
CHECK_NEW_hash_collection__HashMap(var1);
self->attrs[COLOR_layout_builders__ResolutionColorer___64dconflicts_graph].val = var1; /* @conflicts_graph on <self:ResolutionColorer exact> */
return self;
}
/* allocate ResolutionColorer */
void CHECK_NEW_layout_builders__ResolutionColorer(val* self) {
}
/* runtime class layout_builders__PerfectHasher */
/* allocate PerfectHasher[Object, Object] */
val* NEW_layout_builders__PerfectHasher(const struct type* type) {
fprintf(stderr, "Runtime error: %s\n", "PerfectHasher is DEAD");
exit(1);
}
/* allocate PerfectHasher[Object, Object] */
void CHECK_NEW_layout_builders__PerfectHasher(val* self) {
fprintf(stderr, "Runtime error: %s\n", "PerfectHasher is DEAD");
exit(1);
}
/* runtime class layout_builders__PHModOperator */
const struct class class_layout_builders__PHModOperator = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:PHModOperator:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:PHModOperator:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:PHModOperator:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:PHModOperator:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:PHModOperator:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:PHModOperator:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:PHModOperator:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:PHModOperator:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:PHModOperator:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:PHModOperator:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:PHModOperator:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:PHModOperator:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:PHModOperator:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:PHModOperator:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:PHModOperator:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:PHModOperator:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:PHModOperator:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:PHModOperator:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:PHModOperator:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:PHModOperator:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:PHModOperator:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:PHModOperator:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:PHModOperator:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:PHModOperator:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:PHModOperator:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:PHModOperator:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:PHModOperator:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:PHModOperator:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:PHModOperator:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:PHModOperator:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:PHModOperator:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:PHModOperator:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:PHModOperator:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:PHModOperator:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:PHModOperator:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:PHModOperator:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:PHModOperator:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:PHModOperator:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:PHModOperator:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:PHModOperator:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:PHModOperator:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_layout_builders__PHModOperator__op, /* pointer to layout_builders:PHModOperator:layout_builders#PHModOperator#op */
(nitmethod_t)VIRTUAL_layout_builders__PHOperator__init, /* pointer to layout_builders:PHModOperator:layout_builders#PHOperator#init */
(nitmethod_t)VIRTUAL_layout_builders__PHModOperator__init, /* pointer to layout_builders:PHModOperator:layout_builders#PHModOperator#init */
}
};
/* allocate PHModOperator */
val* NEW_layout_builders__PHModOperator(const struct type* type) {
val* self /* : PHModOperator */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__PHModOperator;
return self;
}
/* allocate PHModOperator */
void CHECK_NEW_layout_builders__PHModOperator(val* self) {
}
/* runtime class layout_builders__PHAndOperator */
const struct class class_layout_builders__PHAndOperator = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:PHAndOperator:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:PHAndOperator:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:PHAndOperator:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:PHAndOperator:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:PHAndOperator:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:PHAndOperator:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:PHAndOperator:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:PHAndOperator:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:PHAndOperator:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:PHAndOperator:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:PHAndOperator:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:PHAndOperator:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:PHAndOperator:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:PHAndOperator:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:PHAndOperator:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:PHAndOperator:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:PHAndOperator:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:PHAndOperator:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:PHAndOperator:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:PHAndOperator:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:PHAndOperator:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:PHAndOperator:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:PHAndOperator:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:PHAndOperator:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:PHAndOperator:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:PHAndOperator:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:PHAndOperator:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:PHAndOperator:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:PHAndOperator:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:PHAndOperator:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:PHAndOperator:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:PHAndOperator:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:PHAndOperator:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:PHAndOperator:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:PHAndOperator:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:PHAndOperator:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:PHAndOperator:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:PHAndOperator:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:PHAndOperator:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:PHAndOperator:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:PHAndOperator:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_layout_builders__PHAndOperator__op, /* pointer to layout_builders:PHAndOperator:layout_builders#PHAndOperator#op */
(nitmethod_t)VIRTUAL_layout_builders__PHOperator__init, /* pointer to layout_builders:PHAndOperator:layout_builders#PHOperator#init */
(nitmethod_t)VIRTUAL_layout_builders__PHAndOperator__init, /* pointer to layout_builders:PHAndOperator:layout_builders#PHAndOperator#init */
}
};
/* allocate PHAndOperator */
val* NEW_layout_builders__PHAndOperator(const struct type* type) {
val* self /* : PHAndOperator */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__PHAndOperator;
return self;
}
/* allocate PHAndOperator */
void CHECK_NEW_layout_builders__PHAndOperator(val* self) {
}
/* runtime class layout_builders__TypingHasher */
/* allocate TypingHasher[Object] */
val* NEW_layout_builders__TypingHasher(const struct type* type) {
fprintf(stderr, "Runtime error: %s\n", "TypingHasher is DEAD");
exit(1);
}
/* allocate TypingHasher[Object] */
void CHECK_NEW_layout_builders__TypingHasher(val* self) {
fprintf(stderr, "Runtime error: %s\n", "TypingHasher is DEAD");
exit(1);
}
/* runtime class layout_builders__MTypeHasher */
const struct class class_layout_builders__MTypeHasher = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:MTypeHasher:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:MTypeHasher:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:MTypeHasher:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:MTypeHasher:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:MTypeHasher:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:MTypeHasher:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:MTypeHasher:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:MTypeHasher:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:MTypeHasher:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:MTypeHasher:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:MTypeHasher:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:MTypeHasher:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:MTypeHasher:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:MTypeHasher:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:MTypeHasher:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:MTypeHasher:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:MTypeHasher:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:MTypeHasher:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:MTypeHasher:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:MTypeHasher:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:MTypeHasher:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:MTypeHasher:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:MTypeHasher:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:MTypeHasher:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:MTypeHasher:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:MTypeHasher:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:MTypeHasher:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:MTypeHasher:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:MTypeHasher:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:MTypeHasher:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:MTypeHasher:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:MTypeHasher:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:MTypeHasher:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:MTypeHasher:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:MTypeHasher:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:MTypeHasher:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:MTypeHasher:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:MTypeHasher:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:MTypeHasher:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:MTypeHasher:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:MTypeHasher:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__build_layout, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingHasher#build_layout */
(nitmethod_t)VIRTUAL_layout_builders__TypingLayoutBuilder__poset, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingLayoutBuilder#poset */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__operator, /* pointer to layout_builders:MTypeHasher:layout_builders#PerfectHasher#operator */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__operator_61d, /* pointer to layout_builders:MTypeHasher:layout_builders#PerfectHasher#operator= */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__init, /* pointer to layout_builders:MTypeHasher:layout_builders#PerfectHasher#init */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__compute_masks, /* pointer to layout_builders:MTypeHasher:layout_builders#PerfectHasher#compute_masks */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__compute_mask, /* pointer to layout_builders:MTypeHasher:layout_builders#PerfectHasher#compute_mask */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__compute_hashes, /* pointer to layout_builders:MTypeHasher:layout_builders#PerfectHasher#compute_hashes */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__mmodule, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingHasher#mmodule */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__mmodule_61d, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingHasher#mmodule= */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__poset_builder, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingHasher#poset_builder */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__poset_builder_61d, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingHasher#poset_builder= */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__poset_cache, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingHasher#poset_cache */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__poset_cache_61d, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingHasher#poset_cache= */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__init, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingHasher#init */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__compute_ids, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingHasher#compute_ids */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__build_conflicts, /* pointer to layout_builders:MTypeHasher:layout_builders#TypingHasher#build_conflicts */
(nitmethod_t)VIRTUAL_layout_builders__MTypeHasher__init, /* pointer to layout_builders:MTypeHasher:layout_builders#MTypeHasher#init */
}
};
/* allocate MTypeHasher */
val* NEW_layout_builders__MTypeHasher(const struct type* type) {
val* self /* : MTypeHasher */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__MTypeHasher;
return self;
}
/* allocate MTypeHasher */
void CHECK_NEW_layout_builders__MTypeHasher(val* self) {
val* var /* : PHOperator */;
val* var1 /* : MModule */;
val* var2 /* : POSetBuilder[Object] */;
val* var3 /* : nullable POSet[Object] */;
var = self->attrs[COLOR_layout_builders__PerfectHasher___64doperator].val; /* @operator on <self:MTypeHasher> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @operator", "src/layout_builders.nit", 552);
exit(1);
}
var1 = self->attrs[COLOR_layout_builders__TypingHasher___64dmmodule].val; /* @mmodule on <self:MTypeHasher> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mmodule", "src/layout_builders.nit", 625);
exit(1);
}
var2 = self->attrs[COLOR_layout_builders__TypingHasher___64dposet_builder].val; /* @poset_builder on <self:MTypeHasher> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @poset_builder", "src/layout_builders.nit", 626);
exit(1);
}
var3 = self->attrs[COLOR_layout_builders__TypingHasher___64dposet_cache].val; /* @poset_cache on <self:MTypeHasher> */
}
/* runtime class layout_builders__MClassHasher */
const struct class class_layout_builders__MClassHasher = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:MClassHasher:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:MClassHasher:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:MClassHasher:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:MClassHasher:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:MClassHasher:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:MClassHasher:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:MClassHasher:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:MClassHasher:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:MClassHasher:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:MClassHasher:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:MClassHasher:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:MClassHasher:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:MClassHasher:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:MClassHasher:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:MClassHasher:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:MClassHasher:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:MClassHasher:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:MClassHasher:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:MClassHasher:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:MClassHasher:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:MClassHasher:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:MClassHasher:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:MClassHasher:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:MClassHasher:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:MClassHasher:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:MClassHasher:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:MClassHasher:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:MClassHasher:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:MClassHasher:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:MClassHasher:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:MClassHasher:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:MClassHasher:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:MClassHasher:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:MClassHasher:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:MClassHasher:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:MClassHasher:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:MClassHasher:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:MClassHasher:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:MClassHasher:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:MClassHasher:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:MClassHasher:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__build_layout, /* pointer to layout_builders:MClassHasher:layout_builders#TypingHasher#build_layout */
(nitmethod_t)VIRTUAL_layout_builders__TypingLayoutBuilder__poset, /* pointer to layout_builders:MClassHasher:layout_builders#TypingLayoutBuilder#poset */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__operator, /* pointer to layout_builders:MClassHasher:layout_builders#PerfectHasher#operator */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__operator_61d, /* pointer to layout_builders:MClassHasher:layout_builders#PerfectHasher#operator= */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__init, /* pointer to layout_builders:MClassHasher:layout_builders#PerfectHasher#init */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__compute_masks, /* pointer to layout_builders:MClassHasher:layout_builders#PerfectHasher#compute_masks */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__compute_mask, /* pointer to layout_builders:MClassHasher:layout_builders#PerfectHasher#compute_mask */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__compute_hashes, /* pointer to layout_builders:MClassHasher:layout_builders#PerfectHasher#compute_hashes */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__mmodule, /* pointer to layout_builders:MClassHasher:layout_builders#TypingHasher#mmodule */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__mmodule_61d, /* pointer to layout_builders:MClassHasher:layout_builders#TypingHasher#mmodule= */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__poset_builder, /* pointer to layout_builders:MClassHasher:layout_builders#TypingHasher#poset_builder */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__poset_builder_61d, /* pointer to layout_builders:MClassHasher:layout_builders#TypingHasher#poset_builder= */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__poset_cache, /* pointer to layout_builders:MClassHasher:layout_builders#TypingHasher#poset_cache */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__poset_cache_61d, /* pointer to layout_builders:MClassHasher:layout_builders#TypingHasher#poset_cache= */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__init, /* pointer to layout_builders:MClassHasher:layout_builders#TypingHasher#init */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__compute_ids, /* pointer to layout_builders:MClassHasher:layout_builders#TypingHasher#compute_ids */
(nitmethod_t)VIRTUAL_layout_builders__TypingHasher__build_conflicts, /* pointer to layout_builders:MClassHasher:layout_builders#TypingHasher#build_conflicts */
(nitmethod_t)VIRTUAL_layout_builders__MClassHasher__init, /* pointer to layout_builders:MClassHasher:layout_builders#MClassHasher#init */
}
};
/* allocate MClassHasher */
val* NEW_layout_builders__MClassHasher(const struct type* type) {
val* self /* : MClassHasher */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__MClassHasher;
return self;
}
/* allocate MClassHasher */
void CHECK_NEW_layout_builders__MClassHasher(val* self) {
val* var /* : PHOperator */;
val* var1 /* : MModule */;
val* var2 /* : POSetBuilder[Object] */;
val* var3 /* : nullable POSet[Object] */;
var = self->attrs[COLOR_layout_builders__PerfectHasher___64doperator].val; /* @operator on <self:MClassHasher> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @operator", "src/layout_builders.nit", 552);
exit(1);
}
var1 = self->attrs[COLOR_layout_builders__TypingHasher___64dmmodule].val; /* @mmodule on <self:MClassHasher> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mmodule", "src/layout_builders.nit", 625);
exit(1);
}
var2 = self->attrs[COLOR_layout_builders__TypingHasher___64dposet_builder].val; /* @poset_builder on <self:MClassHasher> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @poset_builder", "src/layout_builders.nit", 626);
exit(1);
}
var3 = self->attrs[COLOR_layout_builders__TypingHasher___64dposet_cache].val; /* @poset_cache on <self:MClassHasher> */
}
/* runtime class layout_builders__MPropertyHasher */
/* allocate MPropertyHasher[PropertyLayoutElement] */
val* NEW_layout_builders__MPropertyHasher(const struct type* type) {
fprintf(stderr, "Runtime error: %s\n", "MPropertyHasher is DEAD");
exit(1);
}
/* allocate MPropertyHasher[PropertyLayoutElement] */
void CHECK_NEW_layout_builders__MPropertyHasher(val* self) {
fprintf(stderr, "Runtime error: %s\n", "MPropertyHasher is DEAD");
exit(1);
}
/* runtime class layout_builders__ResolutionHasher */
const struct class class_layout_builders__ResolutionHasher = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to layout_builders:ResolutionHasher:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to layout_builders:ResolutionHasher:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to layout_builders:ResolutionHasher:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to layout_builders:ResolutionHasher:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to layout_builders:ResolutionHasher:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to layout_builders:ResolutionHasher:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to layout_builders:ResolutionHasher:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to layout_builders:ResolutionHasher:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to layout_builders:ResolutionHasher:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to layout_builders:ResolutionHasher:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to layout_builders:ResolutionHasher:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to layout_builders:ResolutionHasher:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to layout_builders:ResolutionHasher:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to layout_builders:ResolutionHasher:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to layout_builders:ResolutionHasher:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to layout_builders:ResolutionHasher:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to layout_builders:ResolutionHasher:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to layout_builders:ResolutionHasher:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to layout_builders:ResolutionHasher:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to layout_builders:ResolutionHasher:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to layout_builders:ResolutionHasher:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to layout_builders:ResolutionHasher:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to layout_builders:ResolutionHasher:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to layout_builders:ResolutionHasher:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to layout_builders:ResolutionHasher:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to layout_builders:ResolutionHasher:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to layout_builders:ResolutionHasher:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to layout_builders:ResolutionHasher:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to layout_builders:ResolutionHasher:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to layout_builders:ResolutionHasher:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to layout_builders:ResolutionHasher:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to layout_builders:ResolutionHasher:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to layout_builders:ResolutionHasher:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to layout_builders:ResolutionHasher:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to layout_builders:ResolutionHasher:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to layout_builders:ResolutionHasher:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to layout_builders:ResolutionHasher:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to layout_builders:ResolutionHasher:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to layout_builders:ResolutionHasher:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to layout_builders:ResolutionHasher:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to layout_builders:ResolutionHasher:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionHasher__build_layout, /* pointer to layout_builders:ResolutionHasher:layout_builders#ResolutionHasher#build_layout */
NULL, /* empty */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__operator, /* pointer to layout_builders:ResolutionHasher:layout_builders#PerfectHasher#operator */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__operator_61d, /* pointer to layout_builders:ResolutionHasher:layout_builders#PerfectHasher#operator= */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__init, /* pointer to layout_builders:ResolutionHasher:layout_builders#PerfectHasher#init */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__compute_masks, /* pointer to layout_builders:ResolutionHasher:layout_builders#PerfectHasher#compute_masks */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__compute_mask, /* pointer to layout_builders:ResolutionHasher:layout_builders#PerfectHasher#compute_mask */
(nitmethod_t)VIRTUAL_layout_builders__PerfectHasher__compute_hashes, /* pointer to layout_builders:ResolutionHasher:layout_builders#PerfectHasher#compute_hashes */
(nitmethod_t)VIRTUAL_layout_builders__ResolutionHasher__init, /* pointer to layout_builders:ResolutionHasher:layout_builders#ResolutionHasher#init */
}
};
/* allocate ResolutionHasher */
val* NEW_layout_builders__ResolutionHasher(const struct type* type) {
val* self /* : ResolutionHasher */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_layout_builders__ResolutionHasher;
return self;
}
/* allocate ResolutionHasher */
void CHECK_NEW_layout_builders__ResolutionHasher(val* self) {
val* var /* : PHOperator */;
var = self->attrs[COLOR_layout_builders__PerfectHasher___64doperator].val; /* @operator on <self:ResolutionHasher> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @operator", "src/layout_builders.nit", 552);
exit(1);
}
}
