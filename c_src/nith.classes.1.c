#include "nith.classes.0.h"
/* runtime class phase__AnnotationPhaseVisitor */
const struct class class_phase__AnnotationPhaseVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to phase:AnnotationPhaseVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to phase:AnnotationPhaseVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to phase:AnnotationPhaseVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to phase:AnnotationPhaseVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to phase:AnnotationPhaseVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to phase:AnnotationPhaseVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to phase:AnnotationPhaseVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to phase:AnnotationPhaseVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to phase:AnnotationPhaseVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to phase:AnnotationPhaseVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to phase:AnnotationPhaseVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to phase:AnnotationPhaseVisitor:version#Object#nit_version */
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
/* runtime class toolcontext__Message */
const struct class class_toolcontext__Message = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to toolcontext:Message:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to toolcontext:Message:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to toolcontext:Message:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to toolcontext:Message:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to toolcontext:Message:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to toolcontext:Message:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to toolcontext:Message:kernel#Object#hash */
(nitmethod_t)VIRTUAL_toolcontext__Message__to_s, /* pointer to toolcontext:Message:toolcontext#Message#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to toolcontext:Message:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to toolcontext:Message:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to toolcontext:Message:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to toolcontext:Message:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to toolcontext:Message:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to toolcontext:Message:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to toolcontext:Message:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to toolcontext:Message:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to toolcontext:Message:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to toolcontext:Message:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to toolcontext:Message:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to toolcontext:Message:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to toolcontext:Message:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to toolcontext:Message:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to toolcontext:Message:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to toolcontext:Message:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to toolcontext:Message:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to toolcontext:Message:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to toolcontext:Message:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to toolcontext:Message:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to toolcontext:Message:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_toolcontext__Message___60d, /* pointer to toolcontext:Message:toolcontext#Message#< */
(nitmethod_t)VIRTUAL_kernel__Comparable___60d_61d, /* pointer to toolcontext:Message:kernel#Comparable#<= */
(nitmethod_t)VIRTUAL_kernel__Comparable___62d_61d, /* pointer to toolcontext:Message:kernel#Comparable#>= */
(nitmethod_t)VIRTUAL_kernel__Comparable___62d, /* pointer to toolcontext:Message:kernel#Comparable#> */
(nitmethod_t)VIRTUAL_kernel__Comparable___60d_61d_62d, /* pointer to toolcontext:Message:kernel#Comparable#<=> */
(nitmethod_t)VIRTUAL_toolcontext__Message__location, /* pointer to toolcontext:Message:toolcontext#Message#location */
(nitmethod_t)VIRTUAL_toolcontext__Message__text, /* pointer to toolcontext:Message:toolcontext#Message#text */
(nitmethod_t)VIRTUAL_toolcontext__Message__to_color_string, /* pointer to toolcontext:Message:toolcontext#Message#to_color_string */
(nitmethod_t)VIRTUAL_toolcontext__Message__init, /* pointer to toolcontext:Message:toolcontext#Message#init */
}
};
/* allocate Message */
val* NEW_toolcontext__Message(const struct type* type) {
val* self /* : Message */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_toolcontext__Message;
return self;
}
/* runtime class toolcontext__ToolContext */
const struct class class_toolcontext__ToolContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to toolcontext:ToolContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to toolcontext:ToolContext:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to toolcontext:ToolContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to toolcontext:ToolContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to toolcontext:ToolContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to toolcontext:ToolContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to toolcontext:ToolContext:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to toolcontext:ToolContext:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__message_sorter, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#message_sorter */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__check_errors, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#check_errors */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__error, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#error */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__fatal_error, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#fatal_error */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__warning, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#warning */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__info, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#info */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__option_context, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#option_context */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__opt_warn, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#opt_warn */
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
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__verbose_level, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#verbose_level */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__verbose_level_61d, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#verbose_level= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__ToolContext__init, /* pointer to toolcontext:ToolContext:separate_erasure_compiler#ToolContext#init */
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
(nitmethod_t)VIRTUAL_phase__ToolContext__run_phases, /* pointer to toolcontext:ToolContext:phase#ToolContext#run_phases */
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
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__run_global_phases, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#run_global_phases */
(nitmethod_t)VIRTUAL_modelize_class__ToolContext__modelize_class_phase, /* pointer to toolcontext:ToolContext:modelize_class#ToolContext#modelize_class_phase */
(nitmethod_t)VIRTUAL_modelize_property__ToolContext__modelize_property_phase, /* pointer to toolcontext:ToolContext:modelize_property#ToolContext#modelize_property_phase */
(nitmethod_t)VIRTUAL_platform__ToolContext__platform_from_name, /* pointer to toolcontext:ToolContext:platform#ToolContext#platform_from_name */
(nitmethod_t)VIRTUAL_typing__ToolContext__typing_phase, /* pointer to toolcontext:ToolContext:typing#ToolContext#typing_phase */
(nitmethod_t)VIRTUAL_auto_super_init__ToolContext__auto_super_init_phase, /* pointer to toolcontext:ToolContext:auto_super_init#ToolContext#auto_super_init_phase */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_output, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_output */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_dir, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_dir */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_cc, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_cc */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_main, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_main */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_cc_path, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_cc_path */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_make_flags, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_make_flags */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_compile_dir, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_compile_dir */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_hardening, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_hardening */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_shortcut_range, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_shortcut_range */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_covariance, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_covariance */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_attr_isset, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_attr_isset */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_assert, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_assert */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_autocast, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_autocast */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__opt_no_check_other, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#opt_no_check_other */
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
(nitmethod_t)VIRTUAL_separate_compiler__ToolContext__process_options, /* pointer to toolcontext:ToolContext:separate_compiler#ToolContext#process_options */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__init, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#init */
(nitmethod_t)VIRTUAL_abstract_compiler__ToolContext__process_options, /* pointer to toolcontext:ToolContext:abstract_compiler#ToolContext#process_options */
(nitmethod_t)VIRTUAL_modelbuilder__ToolContext__init, /* pointer to toolcontext:ToolContext:modelbuilder#ToolContext#init */
(nitmethod_t)VIRTUAL_phase__ToolContext__process_options, /* pointer to toolcontext:ToolContext:phase#ToolContext#process_options */
(nitmethod_t)VIRTUAL_phase__ToolContext__init, /* pointer to toolcontext:ToolContext:phase#ToolContext#init */
(nitmethod_t)VIRTUAL_toolcontext__ToolContext__process_options, /* pointer to toolcontext:ToolContext:toolcontext#ToolContext#process_options */
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
val* var7 /* : ComparableSorter[Message] */;
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
val* var28 /* : OptionBool */;
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
val* var58 /* : Array[String] */;
long var59 /* : Int */;
val* var60 /* : NativeArray[String] */;
val* var61 /* : OptionString */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : FlatString */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
val* var72 /* : Array[String] */;
long var73 /* : Int */;
val* var74 /* : NativeArray[String] */;
val* var75 /* : OptionBool */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
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
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : FlatString */;
val* var96 /* : Array[String] */;
long var97 /* : Int */;
val* var98 /* : NativeArray[String] */;
val* var99 /* : OptionBool */;
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
val* var110 /* : Array[String] */;
long var111 /* : Int */;
val* var112 /* : NativeArray[String] */;
val* var113 /* : OptionBool */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : FlatString */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
long var122 /* : Int */;
val* var123 /* : FlatString */;
val* var124 /* : Array[String] */;
long var125 /* : Int */;
val* var126 /* : NativeArray[String] */;
val* var127 /* : OptionCount */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
long var131 /* : Int */;
val* var132 /* : FlatString */;
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
val* var146 /* : OptionBool */;
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
val* var157 /* : Array[String] */;
long var158 /* : Int */;
val* var159 /* : NativeArray[String] */;
val* var160 /* : OptionBool */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
long var164 /* : Int */;
val* var165 /* : FlatString */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
long var169 /* : Int */;
val* var170 /* : FlatString */;
val* var171 /* : Array[String] */;
long var172 /* : Int */;
val* var173 /* : NativeArray[String] */;
val* var174 /* : OptionBool */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
long var178 /* : Int */;
val* var179 /* : FlatString */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
long var183 /* : Int */;
val* var184 /* : FlatString */;
val* var185 /* : Array[String] */;
long var186 /* : Int */;
val* var187 /* : NativeArray[String] */;
long var188 /* : Int */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : NativeString */;
long var192 /* : Int */;
val* var193 /* : FlatString */;
short int var194 /* : Bool */;
val* var195 /* : POSet[Phase] */;
val* var197 /* : OptionArray */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
long var201 /* : Int */;
val* var202 /* : FlatString */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
long var206 /* : Int */;
val* var207 /* : FlatString */;
val* var208 /* : Array[String] */;
long var209 /* : Int */;
val* var210 /* : NativeArray[String] */;
val* var211 /* : LiteralPhase */;
val* var212 /* : null */;
val* var213 /* : ScopePhase */;
val* var214 /* : null */;
val* var215 /* : FlowPhase */;
val* var216 /* : Array[Phase] */;
long var217 /* : Int */;
val* var_ /* var : Array[Phase] */;
val* var218 /* : Phase */;
val* var220 /* : Phase */;
val* var221 /* : LocalVarInitPhase */;
val* var222 /* : Array[Phase] */;
long var223 /* : Int */;
val* var_224 /* var : Array[Phase] */;
val* var225 /* : Phase */;
val* var227 /* : Phase */;
val* var228 /* : OptionArray */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : NativeString */;
long var232 /* : Int */;
val* var233 /* : FlatString */;
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : NativeString */;
long var237 /* : Int */;
val* var238 /* : FlatString */;
static val* varonce239;
val* var240 /* : String */;
char* var241 /* : NativeString */;
long var242 /* : Int */;
val* var243 /* : FlatString */;
val* var244 /* : Array[String] */;
long var245 /* : Int */;
val* var246 /* : NativeArray[String] */;
val* var247 /* : OptionBool */;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : NativeString */;
long var251 /* : Int */;
val* var252 /* : FlatString */;
static val* varonce253;
val* var254 /* : String */;
char* var255 /* : NativeString */;
long var256 /* : Int */;
val* var257 /* : FlatString */;
val* var258 /* : Array[String] */;
long var259 /* : Int */;
val* var260 /* : NativeArray[String] */;
val* var261 /* : OptionBool */;
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
val* var272 /* : Array[String] */;
long var273 /* : Int */;
val* var274 /* : NativeArray[String] */;
val* var275 /* : OptionBool */;
static val* varonce276;
val* var277 /* : String */;
char* var278 /* : NativeString */;
long var279 /* : Int */;
val* var280 /* : FlatString */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : NativeString */;
long var284 /* : Int */;
val* var285 /* : FlatString */;
val* var286 /* : Array[String] */;
long var287 /* : Int */;
val* var288 /* : NativeArray[String] */;
val* var289 /* : null */;
val* var290 /* : ModelizeClassPhase */;
val* var291 /* : null */;
val* var292 /* : ModelizePropertyPhase */;
val* var293 /* : Array[Phase] */;
long var294 /* : Int */;
val* var_295 /* var : Array[Phase] */;
val* var296 /* : Phase */;
val* var298 /* : Phase */;
val* var299 /* : PlatformPhase */;
val* var300 /* : Array[Phase] */;
long var301 /* : Int */;
val* var_302 /* var : Array[Phase] */;
val* var303 /* : Phase */;
val* var305 /* : Phase */;
val* var306 /* : TypingPhase */;
val* var307 /* : Array[Phase] */;
long var308 /* : Int */;
val* var_309 /* var : Array[Phase] */;
val* var310 /* : Phase */;
val* var312 /* : Phase */;
val* var313 /* : Phase */;
val* var315 /* : Phase */;
val* var316 /* : Phase */;
val* var318 /* : Phase */;
val* var319 /* : AutoSuperInitPhase */;
val* var320 /* : Array[Phase] */;
long var321 /* : Int */;
val* var_322 /* var : Array[Phase] */;
val* var323 /* : Phase */;
val* var325 /* : Phase */;
val* var326 /* : TransformPhase */;
val* var327 /* : Array[Phase] */;
long var328 /* : Int */;
val* var_329 /* var : Array[Phase] */;
val* var330 /* : Phase */;
val* var332 /* : Phase */;
val* var333 /* : Phase */;
val* var335 /* : Phase */;
val* var336 /* : OptionString */;
static val* varonce337;
val* var338 /* : String */;
char* var339 /* : NativeString */;
long var340 /* : Int */;
val* var341 /* : FlatString */;
static val* varonce342;
val* var343 /* : String */;
char* var344 /* : NativeString */;
long var345 /* : Int */;
val* var346 /* : FlatString */;
static val* varonce347;
val* var348 /* : String */;
char* var349 /* : NativeString */;
long var350 /* : Int */;
val* var351 /* : FlatString */;
val* var352 /* : Array[String] */;
long var353 /* : Int */;
val* var354 /* : NativeArray[String] */;
val* var355 /* : OptionString */;
static val* varonce356;
val* var357 /* : String */;
char* var358 /* : NativeString */;
long var359 /* : Int */;
val* var360 /* : FlatString */;
static val* varonce361;
val* var362 /* : String */;
char* var363 /* : NativeString */;
long var364 /* : Int */;
val* var365 /* : FlatString */;
val* var366 /* : Array[String] */;
long var367 /* : Int */;
val* var368 /* : NativeArray[String] */;
val* var369 /* : OptionBool */;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : NativeString */;
long var373 /* : Int */;
val* var374 /* : FlatString */;
static val* varonce375;
val* var376 /* : String */;
char* var377 /* : NativeString */;
long var378 /* : Int */;
val* var379 /* : FlatString */;
val* var380 /* : Array[String] */;
long var381 /* : Int */;
val* var382 /* : NativeArray[String] */;
val* var383 /* : OptionBool */;
static val* varonce384;
val* var385 /* : String */;
char* var386 /* : NativeString */;
long var387 /* : Int */;
val* var388 /* : FlatString */;
static val* varonce389;
val* var390 /* : String */;
char* var391 /* : NativeString */;
long var392 /* : Int */;
val* var393 /* : FlatString */;
val* var394 /* : Array[String] */;
long var395 /* : Int */;
val* var396 /* : NativeArray[String] */;
val* var397 /* : OptionArray */;
static val* varonce398;
val* var399 /* : String */;
char* var400 /* : NativeString */;
long var401 /* : Int */;
val* var402 /* : FlatString */;
static val* varonce403;
val* var404 /* : String */;
char* var405 /* : NativeString */;
long var406 /* : Int */;
val* var407 /* : FlatString */;
val* var408 /* : Array[String] */;
long var409 /* : Int */;
val* var410 /* : NativeArray[String] */;
val* var411 /* : OptionString */;
static val* varonce412;
val* var413 /* : String */;
char* var414 /* : NativeString */;
long var415 /* : Int */;
val* var416 /* : FlatString */;
static val* varonce417;
val* var418 /* : String */;
char* var419 /* : NativeString */;
long var420 /* : Int */;
val* var421 /* : FlatString */;
val* var422 /* : Array[String] */;
long var423 /* : Int */;
val* var424 /* : NativeArray[String] */;
val* var425 /* : OptionString */;
static val* varonce426;
val* var427 /* : String */;
char* var428 /* : NativeString */;
long var429 /* : Int */;
val* var430 /* : FlatString */;
static val* varonce431;
val* var432 /* : String */;
char* var433 /* : NativeString */;
long var434 /* : Int */;
val* var435 /* : FlatString */;
val* var436 /* : Array[String] */;
long var437 /* : Int */;
val* var438 /* : NativeArray[String] */;
val* var439 /* : OptionBool */;
static val* varonce440;
val* var441 /* : String */;
char* var442 /* : NativeString */;
long var443 /* : Int */;
val* var444 /* : FlatString */;
static val* varonce445;
val* var446 /* : String */;
char* var447 /* : NativeString */;
long var448 /* : Int */;
val* var449 /* : FlatString */;
val* var450 /* : Array[String] */;
long var451 /* : Int */;
val* var452 /* : NativeArray[String] */;
val* var453 /* : OptionBool */;
static val* varonce454;
val* var455 /* : String */;
char* var456 /* : NativeString */;
long var457 /* : Int */;
val* var458 /* : FlatString */;
static val* varonce459;
val* var460 /* : String */;
char* var461 /* : NativeString */;
long var462 /* : Int */;
val* var463 /* : FlatString */;
val* var464 /* : Array[String] */;
long var465 /* : Int */;
val* var466 /* : NativeArray[String] */;
val* var467 /* : OptionBool */;
static val* varonce468;
val* var469 /* : String */;
char* var470 /* : NativeString */;
long var471 /* : Int */;
val* var472 /* : FlatString */;
static val* varonce473;
val* var474 /* : String */;
char* var475 /* : NativeString */;
long var476 /* : Int */;
val* var477 /* : FlatString */;
val* var478 /* : Array[String] */;
long var479 /* : Int */;
val* var480 /* : NativeArray[String] */;
val* var481 /* : OptionBool */;
static val* varonce482;
val* var483 /* : String */;
char* var484 /* : NativeString */;
long var485 /* : Int */;
val* var486 /* : FlatString */;
static val* varonce487;
val* var488 /* : String */;
char* var489 /* : NativeString */;
long var490 /* : Int */;
val* var491 /* : FlatString */;
val* var492 /* : Array[String] */;
long var493 /* : Int */;
val* var494 /* : NativeArray[String] */;
val* var495 /* : OptionBool */;
static val* varonce496;
val* var497 /* : String */;
char* var498 /* : NativeString */;
long var499 /* : Int */;
val* var500 /* : FlatString */;
static val* varonce501;
val* var502 /* : String */;
char* var503 /* : NativeString */;
long var504 /* : Int */;
val* var505 /* : FlatString */;
val* var506 /* : Array[String] */;
long var507 /* : Int */;
val* var508 /* : NativeArray[String] */;
val* var509 /* : OptionBool */;
static val* varonce510;
val* var511 /* : String */;
char* var512 /* : NativeString */;
long var513 /* : Int */;
val* var514 /* : FlatString */;
static val* varonce515;
val* var516 /* : String */;
char* var517 /* : NativeString */;
long var518 /* : Int */;
val* var519 /* : FlatString */;
val* var520 /* : Array[String] */;
long var521 /* : Int */;
val* var522 /* : NativeArray[String] */;
val* var523 /* : OptionBool */;
static val* varonce524;
val* var525 /* : String */;
char* var526 /* : NativeString */;
long var527 /* : Int */;
val* var528 /* : FlatString */;
static val* varonce529;
val* var530 /* : String */;
char* var531 /* : NativeString */;
long var532 /* : Int */;
val* var533 /* : FlatString */;
val* var534 /* : Array[String] */;
long var535 /* : Int */;
val* var536 /* : NativeArray[String] */;
val* var537 /* : OptionBool */;
static val* varonce538;
val* var539 /* : String */;
char* var540 /* : NativeString */;
long var541 /* : Int */;
val* var542 /* : FlatString */;
static val* varonce543;
val* var544 /* : String */;
char* var545 /* : NativeString */;
long var546 /* : Int */;
val* var547 /* : FlatString */;
val* var548 /* : Array[String] */;
long var549 /* : Int */;
val* var550 /* : NativeArray[String] */;
val* var551 /* : OptionBool */;
static val* varonce552;
val* var553 /* : String */;
char* var554 /* : NativeString */;
long var555 /* : Int */;
val* var556 /* : FlatString */;
static val* varonce557;
val* var558 /* : String */;
char* var559 /* : NativeString */;
long var560 /* : Int */;
val* var561 /* : FlatString */;
val* var562 /* : Array[String] */;
long var563 /* : Int */;
val* var564 /* : NativeArray[String] */;
val* var565 /* : OptionBool */;
static val* varonce566;
val* var567 /* : String */;
char* var568 /* : NativeString */;
long var569 /* : Int */;
val* var570 /* : FlatString */;
static val* varonce571;
val* var572 /* : String */;
char* var573 /* : NativeString */;
long var574 /* : Int */;
val* var575 /* : FlatString */;
val* var576 /* : Array[String] */;
long var577 /* : Int */;
val* var578 /* : NativeArray[String] */;
val* var579 /* : OptionString */;
static val* varonce580;
val* var581 /* : String */;
char* var582 /* : NativeString */;
long var583 /* : Int */;
val* var584 /* : FlatString */;
static val* varonce585;
val* var586 /* : String */;
char* var587 /* : NativeString */;
long var588 /* : Int */;
val* var589 /* : FlatString */;
val* var590 /* : Array[String] */;
long var591 /* : Int */;
val* var592 /* : NativeArray[String] */;
val* var593 /* : OptionArray */;
static val* varonce594;
val* var595 /* : String */;
char* var596 /* : NativeString */;
long var597 /* : Int */;
val* var598 /* : FlatString */;
static val* varonce599;
val* var600 /* : String */;
char* var601 /* : NativeString */;
long var602 /* : Int */;
val* var603 /* : FlatString */;
val* var604 /* : Array[String] */;
long var605 /* : Int */;
val* var606 /* : NativeArray[String] */;
val* var607 /* : OptionBool */;
static val* varonce608;
val* var609 /* : String */;
char* var610 /* : NativeString */;
long var611 /* : Int */;
val* var612 /* : FlatString */;
static val* varonce613;
val* var614 /* : String */;
char* var615 /* : NativeString */;
long var616 /* : Int */;
val* var617 /* : FlatString */;
val* var618 /* : Array[String] */;
long var619 /* : Int */;
val* var620 /* : NativeArray[String] */;
val* var621 /* : OptionBool */;
static val* varonce622;
val* var623 /* : String */;
char* var624 /* : NativeString */;
long var625 /* : Int */;
val* var626 /* : FlatString */;
static val* varonce627;
val* var628 /* : String */;
char* var629 /* : NativeString */;
long var630 /* : Int */;
val* var631 /* : FlatString */;
val* var632 /* : Array[String] */;
long var633 /* : Int */;
val* var634 /* : NativeArray[String] */;
val* var635 /* : OptionBool */;
static val* varonce636;
val* var637 /* : String */;
char* var638 /* : NativeString */;
long var639 /* : Int */;
val* var640 /* : FlatString */;
static val* varonce641;
val* var642 /* : String */;
char* var643 /* : NativeString */;
long var644 /* : Int */;
val* var645 /* : FlatString */;
val* var646 /* : Array[String] */;
long var647 /* : Int */;
val* var648 /* : NativeArray[String] */;
val* var649 /* : OptionBool */;
static val* varonce650;
val* var651 /* : String */;
char* var652 /* : NativeString */;
long var653 /* : Int */;
val* var654 /* : FlatString */;
static val* varonce655;
val* var656 /* : String */;
char* var657 /* : NativeString */;
long var658 /* : Int */;
val* var659 /* : FlatString */;
val* var660 /* : Array[String] */;
long var661 /* : Int */;
val* var662 /* : NativeArray[String] */;
val* var663 /* : OptionBool */;
static val* varonce664;
val* var665 /* : String */;
char* var666 /* : NativeString */;
long var667 /* : Int */;
val* var668 /* : FlatString */;
static val* varonce669;
val* var670 /* : String */;
char* var671 /* : NativeString */;
long var672 /* : Int */;
val* var673 /* : FlatString */;
val* var674 /* : Array[String] */;
long var675 /* : Int */;
val* var676 /* : NativeArray[String] */;
val* var677 /* : OptionBool */;
static val* varonce678;
val* var679 /* : String */;
char* var680 /* : NativeString */;
long var681 /* : Int */;
val* var682 /* : FlatString */;
static val* varonce683;
val* var684 /* : String */;
char* var685 /* : NativeString */;
long var686 /* : Int */;
val* var687 /* : FlatString */;
val* var688 /* : Array[String] */;
long var689 /* : Int */;
val* var690 /* : NativeArray[String] */;
val* var691 /* : OptionBool */;
static val* varonce692;
val* var693 /* : String */;
char* var694 /* : NativeString */;
long var695 /* : Int */;
val* var696 /* : FlatString */;
static val* varonce697;
val* var698 /* : String */;
char* var699 /* : NativeString */;
long var700 /* : Int */;
val* var701 /* : FlatString */;
val* var702 /* : Array[String] */;
long var703 /* : Int */;
val* var704 /* : NativeArray[String] */;
val* var705 /* : OptionBool */;
static val* varonce706;
val* var707 /* : String */;
char* var708 /* : NativeString */;
long var709 /* : Int */;
val* var710 /* : FlatString */;
static val* varonce711;
val* var712 /* : String */;
char* var713 /* : NativeString */;
long var714 /* : Int */;
val* var715 /* : FlatString */;
val* var716 /* : Array[String] */;
long var717 /* : Int */;
val* var718 /* : NativeArray[String] */;
val* var719 /* : OptionBool */;
static val* varonce720;
val* var721 /* : String */;
char* var722 /* : NativeString */;
long var723 /* : Int */;
val* var724 /* : FlatString */;
static val* varonce725;
val* var726 /* : String */;
char* var727 /* : NativeString */;
long var728 /* : Int */;
val* var729 /* : FlatString */;
val* var730 /* : Array[String] */;
long var731 /* : Int */;
val* var732 /* : NativeArray[String] */;
val* var733 /* : OptionBool */;
static val* varonce734;
val* var735 /* : String */;
char* var736 /* : NativeString */;
long var737 /* : Int */;
val* var738 /* : FlatString */;
static val* varonce739;
val* var740 /* : String */;
char* var741 /* : NativeString */;
long var742 /* : Int */;
val* var743 /* : FlatString */;
val* var744 /* : Array[String] */;
long var745 /* : Int */;
val* var746 /* : NativeArray[String] */;
val* var747 /* : OptionBool */;
static val* varonce748;
val* var749 /* : String */;
char* var750 /* : NativeString */;
long var751 /* : Int */;
val* var752 /* : FlatString */;
static val* varonce753;
val* var754 /* : String */;
char* var755 /* : NativeString */;
long var756 /* : Int */;
val* var757 /* : FlatString */;
val* var758 /* : Array[String] */;
long var759 /* : Int */;
val* var760 /* : NativeArray[String] */;
val* var761 /* : OptionBool */;
static val* varonce762;
val* var763 /* : String */;
char* var764 /* : NativeString */;
long var765 /* : Int */;
val* var766 /* : FlatString */;
static val* varonce767;
val* var768 /* : String */;
char* var769 /* : NativeString */;
long var770 /* : Int */;
val* var771 /* : FlatString */;
val* var772 /* : Array[String] */;
long var773 /* : Int */;
val* var774 /* : NativeArray[String] */;
val* var775 /* : SeparateCompilerPhase */;
val* var776 /* : null */;
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
val* var819 /* : ErasureCompilerPhase */;
val* var820 /* : null */;
self = nit_alloc(sizeof(struct instance) + 74*sizeof(nitattribute_t));
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
array__Array__init(var6); /* Direct call array#Array#init on <var6:Array[Message]>*/
}
self->attrs[COLOR_toolcontext__ToolContext___messages].val = var6; /* _messages on <self:ToolContext exact> */
var7 = NEW_sorter__ComparableSorter(&type_sorter__ComparableSortertoolcontext__Message);
{
{ /* Inline sorter#DefaultComparator#init (var7) on <var7:ComparableSorter[Message]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_toolcontext__ToolContext___message_sorter].val = var7; /* _message_sorter on <self:ToolContext exact> */
var8 = NEW_opts__OptionContext(&type_opts__OptionContext);
{
opts__OptionContext__init(var8); /* Direct call opts#OptionContext#init on <var8:OptionContext>*/
}
self->attrs[COLOR_toolcontext__ToolContext___option_context].val = var8; /* _option_context on <self:ToolContext exact> */
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
{
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[String]>*/;
}
}
{
opts__OptionCount__init(var9, var11, var25); /* Direct call opts#OptionCount#init on <var9:OptionCount>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_warn].val = var9; /* _opt_warn on <self:ToolContext exact> */
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
{
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[String]>*/;
}
}
{
opts__OptionBool__init(var28, var30, var44); /* Direct call opts#OptionBool#init on <var28:OptionBool>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_quiet].val = var28; /* _opt_quiet on <self:ToolContext exact> */
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
{
((void (*)(val*, val*, long))(var58->class->vft[COLOR_array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[String]>*/;
}
}
{
opts__OptionBool__init(var47, var49, var58); /* Direct call opts#OptionBool#init on <var47:OptionBool>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_log].val = var47; /* _opt_log on <self:ToolContext exact> */
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
{
((void (*)(val*, val*, long))(var72->class->vft[COLOR_array__Array__with_native]))(var72, var74, var73) /* with_native on <var72:Array[String]>*/;
}
}
{
opts__OptionString__init(var61, var63, var72); /* Direct call opts#OptionString#init on <var61:OptionString>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_log_dir].val = var61; /* _opt_log_dir on <self:ToolContext exact> */
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
{
((void (*)(val*, val*, long))(var96->class->vft[COLOR_array__Array__with_native]))(var96, var98, var97) /* with_native on <var96:Array[String]>*/;
}
}
{
opts__OptionBool__init(var75, var77, var96); /* Direct call opts#OptionBool#init on <var75:OptionBool>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_help].val = var75; /* _opt_help on <self:ToolContext exact> */
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
{
((void (*)(val*, val*, long))(var110->class->vft[COLOR_array__Array__with_native]))(var110, var112, var111) /* with_native on <var110:Array[String]>*/;
}
}
{
opts__OptionBool__init(var99, var101, var110); /* Direct call opts#OptionBool#init on <var99:OptionBool>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_version].val = var99; /* _opt_version on <self:ToolContext exact> */
var113 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce114) {
var115 = varonce114;
} else {
var116 = "Set toolname and version to DUMMY. Useful for testing";
var117 = 53;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
if (varonce119) {
var120 = varonce119;
} else {
var121 = "--set-dummy-tool";
var122 = 16;
var123 = string__NativeString__to_s_with_length(var121, var122);
var120 = var123;
varonce119 = var120;
}
var124 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var124 = array_instance Array[String] */
var125 = 1;
var126 = NEW_array__NativeArray(var125, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var126)->values[0] = (val*) var120;
{
((void (*)(val*, val*, long))(var124->class->vft[COLOR_array__Array__with_native]))(var124, var126, var125) /* with_native on <var124:Array[String]>*/;
}
}
{
opts__OptionBool__init(var113, var115, var124); /* Direct call opts#OptionBool#init on <var113:OptionBool>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_set_dummy_tool].val = var113; /* _opt_set_dummy_tool on <self:ToolContext exact> */
var127 = NEW_opts__OptionCount(&type_opts__OptionCount);
if (varonce128) {
var129 = varonce128;
} else {
var130 = "Verbose";
var131 = 7;
var132 = string__NativeString__to_s_with_length(var130, var131);
var129 = var132;
varonce128 = var129;
}
if (varonce133) {
var134 = varonce133;
} else {
var135 = "-v";
var136 = 2;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = "--verbose";
var141 = 9;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
var143 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var143 = array_instance Array[String] */
var144 = 2;
var145 = NEW_array__NativeArray(var144, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var145)->values[0] = (val*) var134;
((struct instance_array__NativeArray*)var145)->values[1] = (val*) var139;
{
((void (*)(val*, val*, long))(var143->class->vft[COLOR_array__Array__with_native]))(var143, var145, var144) /* with_native on <var143:Array[String]>*/;
}
}
{
opts__OptionCount__init(var127, var129, var143); /* Direct call opts#OptionCount#init on <var127:OptionCount>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_verbose].val = var127; /* _opt_verbose on <self:ToolContext exact> */
var146 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce147) {
var148 = varonce147;
} else {
var149 = "Stop on first error";
var150 = 19;
var151 = string__NativeString__to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
if (varonce152) {
var153 = varonce152;
} else {
var154 = "--stop-on-first-error";
var155 = 21;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
var157 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var157 = array_instance Array[String] */
var158 = 1;
var159 = NEW_array__NativeArray(var158, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var159)->values[0] = (val*) var153;
{
((void (*)(val*, val*, long))(var157->class->vft[COLOR_array__Array__with_native]))(var157, var159, var158) /* with_native on <var157:Array[String]>*/;
}
}
{
opts__OptionBool__init(var146, var148, var157); /* Direct call opts#OptionBool#init on <var146:OptionBool>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_stop_on_first_error].val = var146; /* _opt_stop_on_first_error on <self:ToolContext exact> */
var160 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce161) {
var162 = varonce161;
} else {
var163 = "Do not use color to display errors and warnings";
var164 = 47;
var165 = string__NativeString__to_s_with_length(var163, var164);
var162 = var165;
varonce161 = var162;
}
if (varonce166) {
var167 = varonce166;
} else {
var168 = "--no-color";
var169 = 10;
var170 = string__NativeString__to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
var171 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var171 = array_instance Array[String] */
var172 = 1;
var173 = NEW_array__NativeArray(var172, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var173)->values[0] = (val*) var167;
{
((void (*)(val*, val*, long))(var171->class->vft[COLOR_array__Array__with_native]))(var171, var173, var172) /* with_native on <var171:Array[String]>*/;
}
}
{
opts__OptionBool__init(var160, var162, var171); /* Direct call opts#OptionBool#init on <var160:OptionBool>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_no_color].val = var160; /* _opt_no_color on <self:ToolContext exact> */
var174 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce175) {
var176 = varonce175;
} else {
var177 = "Generate bash_completion file for this program";
var178 = 46;
var179 = string__NativeString__to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
if (varonce180) {
var181 = varonce180;
} else {
var182 = "--bash-completion";
var183 = 17;
var184 = string__NativeString__to_s_with_length(var182, var183);
var181 = var184;
varonce180 = var181;
}
var185 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var185 = array_instance Array[String] */
var186 = 1;
var187 = NEW_array__NativeArray(var186, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var187)->values[0] = (val*) var181;
{
((void (*)(val*, val*, long))(var185->class->vft[COLOR_array__Array__with_native]))(var185, var187, var186) /* with_native on <var185:Array[String]>*/;
}
}
{
opts__OptionBool__init(var174, var176, var185); /* Direct call opts#OptionBool#init on <var174:OptionBool>*/
}
self->attrs[COLOR_toolcontext__ToolContext___opt_bash_completion].val = var174; /* _opt_bash_completion on <self:ToolContext exact> */
var188 = 0;
self->attrs[COLOR_toolcontext__ToolContext___verbose_level].l = var188; /* _verbose_level on <self:ToolContext exact> */
if (varonce189) {
var190 = varonce189;
} else {
var191 = "Usage: [OPTION]... [ARG]...";
var192 = 27;
var193 = string__NativeString__to_s_with_length(var191, var192);
var190 = var193;
varonce189 = var190;
}
self->attrs[COLOR_toolcontext__ToolContext___tooldescription].val = var190; /* _tooldescription on <self:ToolContext exact> */
var194 = 0;
self->attrs[COLOR_toolcontext__ToolContext___accept_no_arguments].s = var194; /* _accept_no_arguments on <self:ToolContext exact> */
var195 = NEW_poset__POSet(&type_poset__POSetphase__Phase);
{
{ /* Inline poset#POSet#init (var195) on <var195:POSet[Phase]> */
RET_LABEL196:(void)0;
}
}
self->attrs[COLOR_phase__ToolContext___phases].val = var195; /* _phases on <self:ToolContext exact> */
var197 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (varonce198) {
var199 = varonce198;
} else {
var200 = "DEBUG: Disable a specific phase; use `list` to get the list.";
var201 = 60;
var202 = string__NativeString__to_s_with_length(var200, var201);
var199 = var202;
varonce198 = var199;
}
if (varonce203) {
var204 = varonce203;
} else {
var205 = "--disable-phase";
var206 = 15;
var207 = string__NativeString__to_s_with_length(var205, var206);
var204 = var207;
varonce203 = var204;
}
var208 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var208 = array_instance Array[String] */
var209 = 1;
var210 = NEW_array__NativeArray(var209, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var210)->values[0] = (val*) var204;
{
((void (*)(val*, val*, long))(var208->class->vft[COLOR_array__Array__with_native]))(var208, var210, var209) /* with_native on <var208:Array[String]>*/;
}
}
{
opts__OptionArray__init(var197, var199, var208); /* Direct call opts#OptionArray#init on <var197:OptionArray>*/
}
self->attrs[COLOR_phase__ToolContext___opt_disable_phase].val = var197; /* _opt_disable_phase on <self:ToolContext exact> */
var211 = NEW_literal__LiteralPhase(&type_literal__LiteralPhase);
var212 = NULL;
{
phase__Phase__init(var211, self, var212); /* Direct call phase#Phase#init on <var211:LiteralPhase>*/
}
self->attrs[COLOR_literal__ToolContext___literal_phase].val = var211; /* _literal_phase on <self:ToolContext exact> */
var213 = NEW_scope__ScopePhase(&type_scope__ScopePhase);
var214 = NULL;
{
phase__Phase__init(var213, self, var214); /* Direct call phase#Phase#init on <var213:ScopePhase>*/
}
self->attrs[COLOR_scope__ToolContext___scope_phase].val = var213; /* _scope_phase on <self:ToolContext exact> */
var215 = NEW_flow__FlowPhase(&type_flow__FlowPhase);
var216 = NEW_array__Array(&type_array__Arrayphase__Phase);
var217 = 1;
{
array__Array__with_capacity(var216, var217); /* Direct call array#Array#with_capacity on <var216:Array[Phase]>*/
}
var_ = var216;
{
{ /* Inline scope#ToolContext#scope_phase (self) on <self:ToolContext exact> */
var220 = self->attrs[COLOR_scope__ToolContext___scope_phase].val; /* _scope_phase on <self:ToolContext exact> */
if (unlikely(var220 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scope_phase");
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 25);
show_backtrace(1);
}
var218 = var220;
RET_LABEL219:(void)0;
}
}
{
array__AbstractArray__push(var_, var218); /* Direct call array#AbstractArray#push on <var_:Array[Phase]>*/
}
{
phase__Phase__init(var215, self, var_); /* Direct call phase#Phase#init on <var215:FlowPhase>*/
}
self->attrs[COLOR_flow__ToolContext___flow_phase].val = var215; /* _flow_phase on <self:ToolContext exact> */
var221 = NEW_local_var_init__LocalVarInitPhase(&type_local_var_init__LocalVarInitPhase);
var222 = NEW_array__Array(&type_array__Arrayphase__Phase);
var223 = 1;
{
array__Array__with_capacity(var222, var223); /* Direct call array#Array#with_capacity on <var222:Array[Phase]>*/
}
var_224 = var222;
{
{ /* Inline flow#ToolContext#flow_phase (self) on <self:ToolContext exact> */
var227 = self->attrs[COLOR_flow__ToolContext___flow_phase].val; /* _flow_phase on <self:ToolContext exact> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flow_phase");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 26);
show_backtrace(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
array__AbstractArray__push(var_224, var225); /* Direct call array#AbstractArray#push on <var_224:Array[Phase]>*/
}
{
phase__Phase__init(var221, self, var_224); /* Direct call phase#Phase#init on <var221:LocalVarInitPhase>*/
}
self->attrs[COLOR_local_var_init__ToolContext___local_var_init_phase].val = var221; /* _local_var_init_phase on <self:ToolContext exact> */
var228 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (varonce229) {
var230 = varonce229;
} else {
var231 = "Set include path for loaders (may be used more than once)";
var232 = 57;
var233 = string__NativeString__to_s_with_length(var231, var232);
var230 = var233;
varonce229 = var230;
}
if (varonce234) {
var235 = varonce234;
} else {
var236 = "-I";
var237 = 2;
var238 = string__NativeString__to_s_with_length(var236, var237);
var235 = var238;
varonce234 = var235;
}
if (varonce239) {
var240 = varonce239;
} else {
var241 = "--path";
var242 = 6;
var243 = string__NativeString__to_s_with_length(var241, var242);
var240 = var243;
varonce239 = var240;
}
var244 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var244 = array_instance Array[String] */
var245 = 2;
var246 = NEW_array__NativeArray(var245, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var246)->values[0] = (val*) var235;
((struct instance_array__NativeArray*)var246)->values[1] = (val*) var240;
{
((void (*)(val*, val*, long))(var244->class->vft[COLOR_array__Array__with_native]))(var244, var246, var245) /* with_native on <var244:Array[String]>*/;
}
}
{
opts__OptionArray__init(var228, var230, var244); /* Direct call opts#OptionArray#init on <var228:OptionArray>*/
}
self->attrs[COLOR_modelbuilder__ToolContext___opt_path].val = var228; /* _opt_path on <self:ToolContext exact> */
var247 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce248) {
var249 = varonce248;
} else {
var250 = "Stop after meta-model processing";
var251 = 32;
var252 = string__NativeString__to_s_with_length(var250, var251);
var249 = var252;
varonce248 = var249;
}
if (varonce253) {
var254 = varonce253;
} else {
var255 = "--only-metamodel";
var256 = 16;
var257 = string__NativeString__to_s_with_length(var255, var256);
var254 = var257;
varonce253 = var254;
}
var258 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var258 = array_instance Array[String] */
var259 = 1;
var260 = NEW_array__NativeArray(var259, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var260)->values[0] = (val*) var254;
{
((void (*)(val*, val*, long))(var258->class->vft[COLOR_array__Array__with_native]))(var258, var260, var259) /* with_native on <var258:Array[String]>*/;
}
}
{
opts__OptionBool__init(var247, var249, var258); /* Direct call opts#OptionBool#init on <var247:OptionBool>*/
}
self->attrs[COLOR_modelbuilder__ToolContext___opt_only_metamodel].val = var247; /* _opt_only_metamodel on <self:ToolContext exact> */
var261 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce262) {
var263 = varonce262;
} else {
var264 = "Only proceed to parse step of loaders";
var265 = 37;
var266 = string__NativeString__to_s_with_length(var264, var265);
var263 = var266;
varonce262 = var263;
}
if (varonce267) {
var268 = varonce267;
} else {
var269 = "--only-parse";
var270 = 12;
var271 = string__NativeString__to_s_with_length(var269, var270);
var268 = var271;
varonce267 = var268;
}
var272 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var272 = array_instance Array[String] */
var273 = 1;
var274 = NEW_array__NativeArray(var273, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var274)->values[0] = (val*) var268;
{
((void (*)(val*, val*, long))(var272->class->vft[COLOR_array__Array__with_native]))(var272, var274, var273) /* with_native on <var272:Array[String]>*/;
}
}
{
opts__OptionBool__init(var261, var263, var272); /* Direct call opts#OptionBool#init on <var261:OptionBool>*/
}
self->attrs[COLOR_modelbuilder__ToolContext___opt_only_parse].val = var261; /* _opt_only_parse on <self:ToolContext exact> */
var275 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce276) {
var277 = varonce276;
} else {
var278 = "Do not check, and produce errors, on visibility issues.";
var279 = 55;
var280 = string__NativeString__to_s_with_length(var278, var279);
var277 = var280;
varonce276 = var277;
}
if (varonce281) {
var282 = varonce281;
} else {
var283 = "--ignore-visibility";
var284 = 19;
var285 = string__NativeString__to_s_with_length(var283, var284);
var282 = var285;
varonce281 = var282;
}
var286 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var286 = array_instance Array[String] */
var287 = 1;
var288 = NEW_array__NativeArray(var287, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var288)->values[0] = (val*) var282;
{
((void (*)(val*, val*, long))(var286->class->vft[COLOR_array__Array__with_native]))(var286, var288, var287) /* with_native on <var286:Array[String]>*/;
}
}
{
opts__OptionBool__init(var275, var277, var286); /* Direct call opts#OptionBool#init on <var275:OptionBool>*/
}
self->attrs[COLOR_modelbuilder__ToolContext___opt_ignore_visibility].val = var275; /* _opt_ignore_visibility on <self:ToolContext exact> */
var289 = NULL;
self->attrs[COLOR_modelbuilder__ToolContext___modelbuilder_real].val = var289; /* _modelbuilder_real on <self:ToolContext exact> */
var290 = NEW_modelize_class__ModelizeClassPhase(&type_modelize_class__ModelizeClassPhase);
var291 = NULL;
{
phase__Phase__init(var290, self, var291); /* Direct call phase#Phase#init on <var290:ModelizeClassPhase>*/
}
self->attrs[COLOR_modelize_class__ToolContext___modelize_class_phase].val = var290; /* _modelize_class_phase on <self:ToolContext exact> */
var292 = NEW_modelize_property__ModelizePropertyPhase(&type_modelize_property__ModelizePropertyPhase);
var293 = NEW_array__Array(&type_array__Arrayphase__Phase);
var294 = 1;
{
array__Array__with_capacity(var293, var294); /* Direct call array#Array#with_capacity on <var293:Array[Phase]>*/
}
var_295 = var293;
{
{ /* Inline modelize_class#ToolContext#modelize_class_phase (self) on <self:ToolContext exact> */
var298 = self->attrs[COLOR_modelize_class__ToolContext___modelize_class_phase].val; /* _modelize_class_phase on <self:ToolContext exact> */
if (unlikely(var298 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_class_phase");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 23);
show_backtrace(1);
}
var296 = var298;
RET_LABEL297:(void)0;
}
}
{
array__AbstractArray__push(var_295, var296); /* Direct call array#AbstractArray#push on <var_295:Array[Phase]>*/
}
{
phase__Phase__init(var292, self, var_295); /* Direct call phase#Phase#init on <var292:ModelizePropertyPhase>*/
}
self->attrs[COLOR_modelize_property__ToolContext___modelize_property_phase].val = var292; /* _modelize_property_phase on <self:ToolContext exact> */
var299 = NEW_platform__PlatformPhase(&type_platform__PlatformPhase);
var300 = NEW_array__Array(&type_array__Arrayphase__Phase);
var301 = 1;
{
array__Array__with_capacity(var300, var301); /* Direct call array#Array#with_capacity on <var300:Array[Phase]>*/
}
var_302 = var300;
{
{ /* Inline modelize_property#ToolContext#modelize_property_phase (self) on <self:ToolContext exact> */
var305 = self->attrs[COLOR_modelize_property__ToolContext___modelize_property_phase].val; /* _modelize_property_phase on <self:ToolContext exact> */
if (unlikely(var305 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_property_phase");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 24);
show_backtrace(1);
}
var303 = var305;
RET_LABEL304:(void)0;
}
}
{
array__AbstractArray__push(var_302, var303); /* Direct call array#AbstractArray#push on <var_302:Array[Phase]>*/
}
{
phase__Phase__init(var299, self, var_302); /* Direct call phase#Phase#init on <var299:PlatformPhase>*/
}
self->attrs[COLOR_platform__ToolContext___platform_phase].val = var299; /* _platform_phase on <self:ToolContext exact> */
var306 = NEW_typing__TypingPhase(&type_typing__TypingPhase);
var307 = NEW_array__Array(&type_array__Arrayphase__Phase);
var308 = 3;
{
array__Array__with_capacity(var307, var308); /* Direct call array#Array#with_capacity on <var307:Array[Phase]>*/
}
var_309 = var307;
{
{ /* Inline flow#ToolContext#flow_phase (self) on <self:ToolContext exact> */
var312 = self->attrs[COLOR_flow__ToolContext___flow_phase].val; /* _flow_phase on <self:ToolContext exact> */
if (unlikely(var312 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flow_phase");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 26);
show_backtrace(1);
}
var310 = var312;
RET_LABEL311:(void)0;
}
}
{
array__AbstractArray__push(var_309, var310); /* Direct call array#AbstractArray#push on <var_309:Array[Phase]>*/
}
{
{ /* Inline modelize_property#ToolContext#modelize_property_phase (self) on <self:ToolContext exact> */
var315 = self->attrs[COLOR_modelize_property__ToolContext___modelize_property_phase].val; /* _modelize_property_phase on <self:ToolContext exact> */
if (unlikely(var315 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_property_phase");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 24);
show_backtrace(1);
}
var313 = var315;
RET_LABEL314:(void)0;
}
}
{
array__AbstractArray__push(var_309, var313); /* Direct call array#AbstractArray#push on <var_309:Array[Phase]>*/
}
{
{ /* Inline local_var_init#ToolContext#local_var_init_phase (self) on <self:ToolContext exact> */
var318 = self->attrs[COLOR_local_var_init__ToolContext___local_var_init_phase].val; /* _local_var_init_phase on <self:ToolContext exact> */
if (unlikely(var318 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _local_var_init_phase");
PRINT_ERROR(" (%s:%d)\n", "src/local_var_init.nit", 26);
show_backtrace(1);
}
var316 = var318;
RET_LABEL317:(void)0;
}
}
{
array__AbstractArray__push(var_309, var316); /* Direct call array#AbstractArray#push on <var_309:Array[Phase]>*/
}
{
phase__Phase__init(var306, self, var_309); /* Direct call phase#Phase#init on <var306:TypingPhase>*/
}
self->attrs[COLOR_typing__ToolContext___typing_phase].val = var306; /* _typing_phase on <self:ToolContext exact> */
var319 = NEW_auto_super_init__AutoSuperInitPhase(&type_auto_super_init__AutoSuperInitPhase);
var320 = NEW_array__Array(&type_array__Arrayphase__Phase);
var321 = 1;
{
array__Array__with_capacity(var320, var321); /* Direct call array#Array#with_capacity on <var320:Array[Phase]>*/
}
var_322 = var320;
{
{ /* Inline typing#ToolContext#typing_phase (self) on <self:ToolContext exact> */
var325 = self->attrs[COLOR_typing__ToolContext___typing_phase].val; /* _typing_phase on <self:ToolContext exact> */
if (unlikely(var325 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _typing_phase");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 27);
show_backtrace(1);
}
var323 = var325;
RET_LABEL324:(void)0;
}
}
{
array__AbstractArray__push(var_322, var323); /* Direct call array#AbstractArray#push on <var_322:Array[Phase]>*/
}
{
phase__Phase__init(var319, self, var_322); /* Direct call phase#Phase#init on <var319:AutoSuperInitPhase>*/
}
self->attrs[COLOR_auto_super_init__ToolContext___auto_super_init_phase].val = var319; /* _auto_super_init_phase on <self:ToolContext exact> */
var326 = NEW_transform__TransformPhase(&type_transform__TransformPhase);
var327 = NEW_array__Array(&type_array__Arrayphase__Phase);
var328 = 2;
{
array__Array__with_capacity(var327, var328); /* Direct call array#Array#with_capacity on <var327:Array[Phase]>*/
}
var_329 = var327;
{
{ /* Inline typing#ToolContext#typing_phase (self) on <self:ToolContext exact> */
var332 = self->attrs[COLOR_typing__ToolContext___typing_phase].val; /* _typing_phase on <self:ToolContext exact> */
if (unlikely(var332 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _typing_phase");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 27);
show_backtrace(1);
}
var330 = var332;
RET_LABEL331:(void)0;
}
}
{
array__AbstractArray__push(var_329, var330); /* Direct call array#AbstractArray#push on <var_329:Array[Phase]>*/
}
{
{ /* Inline auto_super_init#ToolContext#auto_super_init_phase (self) on <self:ToolContext exact> */
var335 = self->attrs[COLOR_auto_super_init__ToolContext___auto_super_init_phase].val; /* _auto_super_init_phase on <self:ToolContext exact> */
if (unlikely(var335 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _auto_super_init_phase");
PRINT_ERROR(" (%s:%d)\n", "src/auto_super_init.nit", 26);
show_backtrace(1);
}
var333 = var335;
RET_LABEL334:(void)0;
}
}
{
array__AbstractArray__push(var_329, var333); /* Direct call array#AbstractArray#push on <var_329:Array[Phase]>*/
}
{
phase__Phase__init(var326, self, var_329); /* Direct call phase#Phase#init on <var326:TransformPhase>*/
}
self->attrs[COLOR_transform__ToolContext___transform_phase].val = var326; /* _transform_phase on <self:ToolContext exact> */
var336 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce337) {
var338 = varonce337;
} else {
var339 = "Output file";
var340 = 11;
var341 = string__NativeString__to_s_with_length(var339, var340);
var338 = var341;
varonce337 = var338;
}
if (varonce342) {
var343 = varonce342;
} else {
var344 = "-o";
var345 = 2;
var346 = string__NativeString__to_s_with_length(var344, var345);
var343 = var346;
varonce342 = var343;
}
if (varonce347) {
var348 = varonce347;
} else {
var349 = "--output";
var350 = 8;
var351 = string__NativeString__to_s_with_length(var349, var350);
var348 = var351;
varonce347 = var348;
}
var352 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var352 = array_instance Array[String] */
var353 = 2;
var354 = NEW_array__NativeArray(var353, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var354)->values[0] = (val*) var343;
((struct instance_array__NativeArray*)var354)->values[1] = (val*) var348;
{
((void (*)(val*, val*, long))(var352->class->vft[COLOR_array__Array__with_native]))(var352, var354, var353) /* with_native on <var352:Array[String]>*/;
}
}
{
opts__OptionString__init(var336, var338, var352); /* Direct call opts#OptionString#init on <var336:OptionString>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_output].val = var336; /* _opt_output on <self:ToolContext exact> */
var355 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce356) {
var357 = varonce356;
} else {
var358 = "Output directory";
var359 = 16;
var360 = string__NativeString__to_s_with_length(var358, var359);
var357 = var360;
varonce356 = var357;
}
if (varonce361) {
var362 = varonce361;
} else {
var363 = "--dir";
var364 = 5;
var365 = string__NativeString__to_s_with_length(var363, var364);
var362 = var365;
varonce361 = var362;
}
var366 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var366 = array_instance Array[String] */
var367 = 1;
var368 = NEW_array__NativeArray(var367, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var368)->values[0] = (val*) var362;
{
((void (*)(val*, val*, long))(var366->class->vft[COLOR_array__Array__with_native]))(var366, var368, var367) /* with_native on <var366:Array[String]>*/;
}
}
{
opts__OptionString__init(var355, var357, var366); /* Direct call opts#OptionString#init on <var355:OptionString>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_dir].val = var355; /* _opt_dir on <self:ToolContext exact> */
var369 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce370) {
var371 = varonce370;
} else {
var372 = "Do not invoke C compiler";
var373 = 24;
var374 = string__NativeString__to_s_with_length(var372, var373);
var371 = var374;
varonce370 = var371;
}
if (varonce375) {
var376 = varonce375;
} else {
var377 = "--no-cc";
var378 = 7;
var379 = string__NativeString__to_s_with_length(var377, var378);
var376 = var379;
varonce375 = var376;
}
var380 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var380 = array_instance Array[String] */
var381 = 1;
var382 = NEW_array__NativeArray(var381, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var382)->values[0] = (val*) var376;
{
((void (*)(val*, val*, long))(var380->class->vft[COLOR_array__Array__with_native]))(var380, var382, var381) /* with_native on <var380:Array[String]>*/;
}
}
{
opts__OptionBool__init(var369, var371, var380); /* Direct call opts#OptionBool#init on <var369:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_cc].val = var369; /* _opt_no_cc on <self:ToolContext exact> */
var383 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce384) {
var385 = varonce384;
} else {
var386 = "Do not generate main entry point";
var387 = 32;
var388 = string__NativeString__to_s_with_length(var386, var387);
var385 = var388;
varonce384 = var385;
}
if (varonce389) {
var390 = varonce389;
} else {
var391 = "--no-main";
var392 = 9;
var393 = string__NativeString__to_s_with_length(var391, var392);
var390 = var393;
varonce389 = var390;
}
var394 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var394 = array_instance Array[String] */
var395 = 1;
var396 = NEW_array__NativeArray(var395, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var396)->values[0] = (val*) var390;
{
((void (*)(val*, val*, long))(var394->class->vft[COLOR_array__Array__with_native]))(var394, var396, var395) /* with_native on <var394:Array[String]>*/;
}
}
{
opts__OptionBool__init(var383, var385, var394); /* Direct call opts#OptionBool#init on <var383:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_main].val = var383; /* _opt_no_main on <self:ToolContext exact> */
var397 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (varonce398) {
var399 = varonce398;
} else {
var400 = "Set include path for C header files (may be used more than once)";
var401 = 64;
var402 = string__NativeString__to_s_with_length(var400, var401);
var399 = var402;
varonce398 = var399;
}
if (varonce403) {
var404 = varonce403;
} else {
var405 = "--cc-path";
var406 = 9;
var407 = string__NativeString__to_s_with_length(var405, var406);
var404 = var407;
varonce403 = var404;
}
var408 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var408 = array_instance Array[String] */
var409 = 1;
var410 = NEW_array__NativeArray(var409, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var410)->values[0] = (val*) var404;
{
((void (*)(val*, val*, long))(var408->class->vft[COLOR_array__Array__with_native]))(var408, var410, var409) /* with_native on <var408:Array[String]>*/;
}
}
{
opts__OptionArray__init(var397, var399, var408); /* Direct call opts#OptionArray#init on <var397:OptionArray>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_cc_path].val = var397; /* _opt_cc_path on <self:ToolContext exact> */
var411 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce412) {
var413 = varonce412;
} else {
var414 = "Additional options to make";
var415 = 26;
var416 = string__NativeString__to_s_with_length(var414, var415);
var413 = var416;
varonce412 = var413;
}
if (varonce417) {
var418 = varonce417;
} else {
var419 = "--make-flags";
var420 = 12;
var421 = string__NativeString__to_s_with_length(var419, var420);
var418 = var421;
varonce417 = var418;
}
var422 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var422 = array_instance Array[String] */
var423 = 1;
var424 = NEW_array__NativeArray(var423, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var424)->values[0] = (val*) var418;
{
((void (*)(val*, val*, long))(var422->class->vft[COLOR_array__Array__with_native]))(var422, var424, var423) /* with_native on <var422:Array[String]>*/;
}
}
{
opts__OptionString__init(var411, var413, var422); /* Direct call opts#OptionString#init on <var411:OptionString>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_make_flags].val = var411; /* _opt_make_flags on <self:ToolContext exact> */
var425 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce426) {
var427 = varonce426;
} else {
var428 = "Directory used to generate temporary files";
var429 = 42;
var430 = string__NativeString__to_s_with_length(var428, var429);
var427 = var430;
varonce426 = var427;
}
if (varonce431) {
var432 = varonce431;
} else {
var433 = "--compile-dir";
var434 = 13;
var435 = string__NativeString__to_s_with_length(var433, var434);
var432 = var435;
varonce431 = var432;
}
var436 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var436 = array_instance Array[String] */
var437 = 1;
var438 = NEW_array__NativeArray(var437, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var438)->values[0] = (val*) var432;
{
((void (*)(val*, val*, long))(var436->class->vft[COLOR_array__Array__with_native]))(var436, var438, var437) /* with_native on <var436:Array[String]>*/;
}
}
{
opts__OptionString__init(var425, var427, var436); /* Direct call opts#OptionString#init on <var425:OptionString>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_compile_dir].val = var425; /* _opt_compile_dir on <self:ToolContext exact> */
var439 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce440) {
var441 = varonce440;
} else {
var442 = "Generate contracts in the C code against bugs in the compiler";
var443 = 61;
var444 = string__NativeString__to_s_with_length(var442, var443);
var441 = var444;
varonce440 = var441;
}
if (varonce445) {
var446 = varonce445;
} else {
var447 = "--hardening";
var448 = 11;
var449 = string__NativeString__to_s_with_length(var447, var448);
var446 = var449;
varonce445 = var446;
}
var450 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var450 = array_instance Array[String] */
var451 = 1;
var452 = NEW_array__NativeArray(var451, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var452)->values[0] = (val*) var446;
{
((void (*)(val*, val*, long))(var450->class->vft[COLOR_array__Array__with_native]))(var450, var452, var451) /* with_native on <var450:Array[String]>*/;
}
}
{
opts__OptionBool__init(var439, var441, var450); /* Direct call opts#OptionBool#init on <var439:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_hardening].val = var439; /* _opt_hardening on <self:ToolContext exact> */
var453 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce454) {
var455 = varonce454;
} else {
var456 = "Always insantiate a range and its iterator on \'for\' loops";
var457 = 57;
var458 = string__NativeString__to_s_with_length(var456, var457);
var455 = var458;
varonce454 = var455;
}
if (varonce459) {
var460 = varonce459;
} else {
var461 = "--no-shortcut-range";
var462 = 19;
var463 = string__NativeString__to_s_with_length(var461, var462);
var460 = var463;
varonce459 = var460;
}
var464 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var464 = array_instance Array[String] */
var465 = 1;
var466 = NEW_array__NativeArray(var465, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var466)->values[0] = (val*) var460;
{
((void (*)(val*, val*, long))(var464->class->vft[COLOR_array__Array__with_native]))(var464, var466, var465) /* with_native on <var464:Array[String]>*/;
}
}
{
opts__OptionBool__init(var453, var455, var464); /* Direct call opts#OptionBool#init on <var453:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_shortcut_range].val = var453; /* _opt_no_shortcut_range on <self:ToolContext exact> */
var467 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce468) {
var469 = varonce468;
} else {
var470 = "Disable type tests of covariant parameters (dangerous)";
var471 = 54;
var472 = string__NativeString__to_s_with_length(var470, var471);
var469 = var472;
varonce468 = var469;
}
if (varonce473) {
var474 = varonce473;
} else {
var475 = "--no-check-covariance";
var476 = 21;
var477 = string__NativeString__to_s_with_length(var475, var476);
var474 = var477;
varonce473 = var474;
}
var478 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var478 = array_instance Array[String] */
var479 = 1;
var480 = NEW_array__NativeArray(var479, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var480)->values[0] = (val*) var474;
{
((void (*)(val*, val*, long))(var478->class->vft[COLOR_array__Array__with_native]))(var478, var480, var479) /* with_native on <var478:Array[String]>*/;
}
}
{
opts__OptionBool__init(var467, var469, var478); /* Direct call opts#OptionBool#init on <var467:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_covariance].val = var467; /* _opt_no_check_covariance on <self:ToolContext exact> */
var481 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce482) {
var483 = varonce482;
} else {
var484 = "Disable isset tests before each attribute access (dangerous)";
var485 = 60;
var486 = string__NativeString__to_s_with_length(var484, var485);
var483 = var486;
varonce482 = var483;
}
if (varonce487) {
var488 = varonce487;
} else {
var489 = "--no-check-attr-isset";
var490 = 21;
var491 = string__NativeString__to_s_with_length(var489, var490);
var488 = var491;
varonce487 = var488;
}
var492 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var492 = array_instance Array[String] */
var493 = 1;
var494 = NEW_array__NativeArray(var493, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var494)->values[0] = (val*) var488;
{
((void (*)(val*, val*, long))(var492->class->vft[COLOR_array__Array__with_native]))(var492, var494, var493) /* with_native on <var492:Array[String]>*/;
}
}
{
opts__OptionBool__init(var481, var483, var492); /* Direct call opts#OptionBool#init on <var481:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_attr_isset].val = var481; /* _opt_no_check_attr_isset on <self:ToolContext exact> */
var495 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce496) {
var497 = varonce496;
} else {
var498 = "Disable the evaluation of explicit \'assert\' and \'as\' (dangerous)";
var499 = 64;
var500 = string__NativeString__to_s_with_length(var498, var499);
var497 = var500;
varonce496 = var497;
}
if (varonce501) {
var502 = varonce501;
} else {
var503 = "--no-check-assert";
var504 = 17;
var505 = string__NativeString__to_s_with_length(var503, var504);
var502 = var505;
varonce501 = var502;
}
var506 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var506 = array_instance Array[String] */
var507 = 1;
var508 = NEW_array__NativeArray(var507, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var508)->values[0] = (val*) var502;
{
((void (*)(val*, val*, long))(var506->class->vft[COLOR_array__Array__with_native]))(var506, var508, var507) /* with_native on <var506:Array[String]>*/;
}
}
{
opts__OptionBool__init(var495, var497, var506); /* Direct call opts#OptionBool#init on <var495:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_assert].val = var495; /* _opt_no_check_assert on <self:ToolContext exact> */
var509 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce510) {
var511 = varonce510;
} else {
var512 = "Disable implicit casts on unsafe expression usage (dangerous)";
var513 = 61;
var514 = string__NativeString__to_s_with_length(var512, var513);
var511 = var514;
varonce510 = var511;
}
if (varonce515) {
var516 = varonce515;
} else {
var517 = "--no-check-autocast";
var518 = 19;
var519 = string__NativeString__to_s_with_length(var517, var518);
var516 = var519;
varonce515 = var516;
}
var520 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var520 = array_instance Array[String] */
var521 = 1;
var522 = NEW_array__NativeArray(var521, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var522)->values[0] = (val*) var516;
{
((void (*)(val*, val*, long))(var520->class->vft[COLOR_array__Array__with_native]))(var520, var522, var521) /* with_native on <var520:Array[String]>*/;
}
}
{
opts__OptionBool__init(var509, var511, var520); /* Direct call opts#OptionBool#init on <var509:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_autocast].val = var509; /* _opt_no_check_autocast on <self:ToolContext exact> */
var523 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce524) {
var525 = varonce524;
} else {
var526 = "Disable implicit tests: unset attribute, null receiver (dangerous)";
var527 = 66;
var528 = string__NativeString__to_s_with_length(var526, var527);
var525 = var528;
varonce524 = var525;
}
if (varonce529) {
var530 = varonce529;
} else {
var531 = "--no-check-other";
var532 = 16;
var533 = string__NativeString__to_s_with_length(var531, var532);
var530 = var533;
varonce529 = var530;
}
var534 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var534 = array_instance Array[String] */
var535 = 1;
var536 = NEW_array__NativeArray(var535, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var536)->values[0] = (val*) var530;
{
((void (*)(val*, val*, long))(var534->class->vft[COLOR_array__Array__with_native]))(var534, var536, var535) /* with_native on <var534:Array[String]>*/;
}
}
{
opts__OptionBool__init(var523, var525, var534); /* Direct call opts#OptionBool#init on <var523:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_other].val = var523; /* _opt_no_check_other on <self:ToolContext exact> */
var537 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce538) {
var539 = varonce538;
} else {
var540 = "Enable static and dynamic count of all type tests";
var541 = 49;
var542 = string__NativeString__to_s_with_length(var540, var541);
var539 = var542;
varonce538 = var539;
}
if (varonce543) {
var544 = varonce543;
} else {
var545 = "--typing-test-metrics";
var546 = 21;
var547 = string__NativeString__to_s_with_length(var545, var546);
var544 = var547;
varonce543 = var544;
}
var548 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var548 = array_instance Array[String] */
var549 = 1;
var550 = NEW_array__NativeArray(var549, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var550)->values[0] = (val*) var544;
{
((void (*)(val*, val*, long))(var548->class->vft[COLOR_array__Array__with_native]))(var548, var550, var549) /* with_native on <var548:Array[String]>*/;
}
}
{
opts__OptionBool__init(var537, var539, var548); /* Direct call opts#OptionBool#init on <var537:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics].val = var537; /* _opt_typing_test_metrics on <self:ToolContext exact> */
var551 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce552) {
var553 = varonce552;
} else {
var554 = "Enable static and dynamic count of all method invocations";
var555 = 57;
var556 = string__NativeString__to_s_with_length(var554, var555);
var553 = var556;
varonce552 = var553;
}
if (varonce557) {
var558 = varonce557;
} else {
var559 = "--invocation-metrics";
var560 = 20;
var561 = string__NativeString__to_s_with_length(var559, var560);
var558 = var561;
varonce557 = var558;
}
var562 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var562 = array_instance Array[String] */
var563 = 1;
var564 = NEW_array__NativeArray(var563, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var564)->values[0] = (val*) var558;
{
((void (*)(val*, val*, long))(var562->class->vft[COLOR_array__Array__with_native]))(var562, var564, var563) /* with_native on <var562:Array[String]>*/;
}
}
{
opts__OptionBool__init(var551, var553, var562); /* Direct call opts#OptionBool#init on <var551:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_invocation_metrics].val = var551; /* _opt_invocation_metrics on <self:ToolContext exact> */
var565 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce566) {
var567 = varonce566;
} else {
var568 = "Enable static and dynamic count of isset checks before attributes access";
var569 = 72;
var570 = string__NativeString__to_s_with_length(var568, var569);
var567 = var570;
varonce566 = var567;
}
if (varonce571) {
var572 = varonce571;
} else {
var573 = "--isset-checks-metrics";
var574 = 22;
var575 = string__NativeString__to_s_with_length(var573, var574);
var572 = var575;
varonce571 = var572;
}
var576 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var576 = array_instance Array[String] */
var577 = 1;
var578 = NEW_array__NativeArray(var577, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var578)->values[0] = (val*) var572;
{
((void (*)(val*, val*, long))(var576->class->vft[COLOR_array__Array__with_native]))(var576, var578, var577) /* with_native on <var576:Array[String]>*/;
}
}
{
opts__OptionBool__init(var565, var567, var576); /* Direct call opts#OptionBool#init on <var565:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_isset_checks_metrics].val = var565; /* _opt_isset_checks_metrics on <self:ToolContext exact> */
var579 = NEW_opts__OptionString(&type_opts__OptionString);
if (varonce580) {
var581 = varonce580;
} else {
var582 = "Control the generation of stack traces";
var583 = 38;
var584 = string__NativeString__to_s_with_length(var582, var583);
var581 = var584;
varonce580 = var581;
}
if (varonce585) {
var586 = varonce585;
} else {
var587 = "--stacktrace";
var588 = 12;
var589 = string__NativeString__to_s_with_length(var587, var588);
var586 = var589;
varonce585 = var586;
}
var590 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var590 = array_instance Array[String] */
var591 = 1;
var592 = NEW_array__NativeArray(var591, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var592)->values[0] = (val*) var586;
{
((void (*)(val*, val*, long))(var590->class->vft[COLOR_array__Array__with_native]))(var590, var592, var591) /* with_native on <var590:Array[String]>*/;
}
}
{
opts__OptionString__init(var579, var581, var590); /* Direct call opts#OptionString#init on <var579:OptionString>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_stacktrace].val = var579; /* _opt_stacktrace on <self:ToolContext exact> */
var593 = NEW_opts__OptionArray(&type_opts__OptionArray);
if (varonce594) {
var595 = varonce594;
} else {
var596 = "Disable a advanced gcc directives for optimization";
var597 = 50;
var598 = string__NativeString__to_s_with_length(var596, var597);
var595 = var598;
varonce594 = var595;
}
if (varonce599) {
var600 = varonce599;
} else {
var601 = "--no-gcc-directive";
var602 = 18;
var603 = string__NativeString__to_s_with_length(var601, var602);
var600 = var603;
varonce599 = var600;
}
var604 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var604 = array_instance Array[String] */
var605 = 1;
var606 = NEW_array__NativeArray(var605, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var606)->values[0] = (val*) var600;
{
((void (*)(val*, val*, long))(var604->class->vft[COLOR_array__Array__with_native]))(var604, var606, var605) /* with_native on <var604:Array[String]>*/;
}
}
{
opts__OptionArray__init(var593, var595, var604); /* Direct call opts#OptionArray#init on <var593:OptionArray>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_no_gcc_directive].val = var593; /* _opt_no_gcc_directive on <self:ToolContext exact> */
var607 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce608) {
var609 = varonce608;
} else {
var610 = "Compile in release mode and finalize application";
var611 = 48;
var612 = string__NativeString__to_s_with_length(var610, var611);
var609 = var612;
varonce608 = var609;
}
if (varonce613) {
var614 = varonce613;
} else {
var615 = "--release";
var616 = 9;
var617 = string__NativeString__to_s_with_length(var615, var616);
var614 = var617;
varonce613 = var614;
}
var618 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var618 = array_instance Array[String] */
var619 = 1;
var620 = NEW_array__NativeArray(var619, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var620)->values[0] = (val*) var614;
{
((void (*)(val*, val*, long))(var618->class->vft[COLOR_array__Array__with_native]))(var618, var620, var619) /* with_native on <var618:Array[String]>*/;
}
}
{
opts__OptionBool__init(var607, var609, var618); /* Direct call opts#OptionBool#init on <var607:OptionBool>*/
}
self->attrs[COLOR_abstract_compiler__ToolContext___opt_release].val = var607; /* _opt_release on <self:ToolContext exact> */
var621 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce622) {
var623 = varonce622;
} else {
var624 = "Use separate compilation";
var625 = 24;
var626 = string__NativeString__to_s_with_length(var624, var625);
var623 = var626;
varonce622 = var623;
}
if (varonce627) {
var628 = varonce627;
} else {
var629 = "--separate";
var630 = 10;
var631 = string__NativeString__to_s_with_length(var629, var630);
var628 = var631;
varonce627 = var628;
}
var632 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var632 = array_instance Array[String] */
var633 = 1;
var634 = NEW_array__NativeArray(var633, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var634)->values[0] = (val*) var628;
{
((void (*)(val*, val*, long))(var632->class->vft[COLOR_array__Array__with_native]))(var632, var634, var633) /* with_native on <var632:Array[String]>*/;
}
}
{
opts__OptionBool__init(var621, var623, var632); /* Direct call opts#OptionBool#init on <var621:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_separate].val = var621; /* _opt_separate on <self:ToolContext exact> */
var635 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce636) {
var637 = varonce636;
} else {
var638 = "Do not inline call to intern methods";
var639 = 36;
var640 = string__NativeString__to_s_with_length(var638, var639);
var637 = var640;
varonce636 = var637;
}
if (varonce641) {
var642 = varonce641;
} else {
var643 = "--no-inline-intern";
var644 = 18;
var645 = string__NativeString__to_s_with_length(var643, var644);
var642 = var645;
varonce641 = var642;
}
var646 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var646 = array_instance Array[String] */
var647 = 1;
var648 = NEW_array__NativeArray(var647, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var648)->values[0] = (val*) var642;
{
((void (*)(val*, val*, long))(var646->class->vft[COLOR_array__Array__with_native]))(var646, var648, var647) /* with_native on <var646:Array[String]>*/;
}
}
{
opts__OptionBool__init(var635, var637, var646); /* Direct call opts#OptionBool#init on <var635:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_no_inline_intern].val = var635; /* _opt_no_inline_intern on <self:ToolContext exact> */
var649 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce650) {
var651 = varonce650;
} else {
var652 = "Put primitive attibutes in a box instead of an union";
var653 = 52;
var654 = string__NativeString__to_s_with_length(var652, var653);
var651 = var654;
varonce650 = var651;
}
if (varonce655) {
var656 = varonce655;
} else {
var657 = "--no-union-attribute";
var658 = 20;
var659 = string__NativeString__to_s_with_length(var657, var658);
var656 = var659;
varonce655 = var656;
}
var660 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var660 = array_instance Array[String] */
var661 = 1;
var662 = NEW_array__NativeArray(var661, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var662)->values[0] = (val*) var656;
{
((void (*)(val*, val*, long))(var660->class->vft[COLOR_array__Array__with_native]))(var660, var662, var661) /* with_native on <var660:Array[String]>*/;
}
}
{
opts__OptionBool__init(var649, var651, var660); /* Direct call opts#OptionBool#init on <var649:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_no_union_attribute].val = var649; /* _opt_no_union_attribute on <self:ToolContext exact> */
var663 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce664) {
var665 = varonce664;
} else {
var666 = "Always call == in a polymorphic way";
var667 = 35;
var668 = string__NativeString__to_s_with_length(var666, var667);
var665 = var668;
varonce664 = var665;
}
if (varonce669) {
var670 = varonce669;
} else {
var671 = "--no-shortcut-equal";
var672 = 19;
var673 = string__NativeString__to_s_with_length(var671, var672);
var670 = var673;
varonce669 = var670;
}
var674 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var674 = array_instance Array[String] */
var675 = 1;
var676 = NEW_array__NativeArray(var675, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var676)->values[0] = (val*) var670;
{
((void (*)(val*, val*, long))(var674->class->vft[COLOR_array__Array__with_native]))(var674, var676, var675) /* with_native on <var674:Array[String]>*/;
}
}
{
opts__OptionBool__init(var663, var665, var674); /* Direct call opts#OptionBool#init on <var663:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_no_shortcut_equate].val = var663; /* _opt_no_shortcut_equate on <self:ToolContext exact> */
var677 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce678) {
var679 = varonce678;
} else {
var680 = "Inline colors and ids (semi-global)";
var681 = 35;
var682 = string__NativeString__to_s_with_length(var680, var681);
var679 = var682;
varonce678 = var679;
}
if (varonce683) {
var684 = varonce683;
} else {
var685 = "--inline-coloring-numbers";
var686 = 25;
var687 = string__NativeString__to_s_with_length(var685, var686);
var684 = var687;
varonce683 = var684;
}
var688 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var688 = array_instance Array[String] */
var689 = 1;
var690 = NEW_array__NativeArray(var689, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var690)->values[0] = (val*) var684;
{
((void (*)(val*, val*, long))(var688->class->vft[COLOR_array__Array__with_native]))(var688, var690, var689) /* with_native on <var688:Array[String]>*/;
}
}
{
opts__OptionBool__init(var677, var679, var688); /* Direct call opts#OptionBool#init on <var677:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_inline_coloring_numbers].val = var677; /* _opt_inline_coloring_numbers on <self:ToolContext exact> */
var691 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce692) {
var693 = varonce692;
} else {
var694 = "Allow the separate compiler to inline some methods (semi-global)";
var695 = 64;
var696 = string__NativeString__to_s_with_length(var694, var695);
var693 = var696;
varonce692 = var693;
}
if (varonce697) {
var698 = varonce697;
} else {
var699 = "--inline-some-methods";
var700 = 21;
var701 = string__NativeString__to_s_with_length(var699, var700);
var698 = var701;
varonce697 = var698;
}
var702 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var702 = array_instance Array[String] */
var703 = 1;
var704 = NEW_array__NativeArray(var703, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var704)->values[0] = (val*) var698;
{
((void (*)(val*, val*, long))(var702->class->vft[COLOR_array__Array__with_native]))(var702, var704, var703) /* with_native on <var702:Array[String]>*/;
}
}
{
opts__OptionBool__init(var691, var693, var702); /* Direct call opts#OptionBool#init on <var691:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_inline_some_methods].val = var691; /* _opt_inline_some_methods on <self:ToolContext exact> */
var705 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce706) {
var707 = varonce706;
} else {
var708 = "Allow the separate compiler to direct call monomorph sites (semi-global)";
var709 = 72;
var710 = string__NativeString__to_s_with_length(var708, var709);
var707 = var710;
varonce706 = var707;
}
if (varonce711) {
var712 = varonce711;
} else {
var713 = "--direct-call-monomorph";
var714 = 23;
var715 = string__NativeString__to_s_with_length(var713, var714);
var712 = var715;
varonce711 = var712;
}
var716 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var716 = array_instance Array[String] */
var717 = 1;
var718 = NEW_array__NativeArray(var717, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var718)->values[0] = (val*) var712;
{
((void (*)(val*, val*, long))(var716->class->vft[COLOR_array__Array__with_native]))(var716, var718, var717) /* with_native on <var716:Array[String]>*/;
}
}
{
opts__OptionBool__init(var705, var707, var716); /* Direct call opts#OptionBool#init on <var705:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_direct_call_monomorph].val = var705; /* _opt_direct_call_monomorph on <self:ToolContext exact> */
var719 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce720) {
var721 = varonce720;
} else {
var722 = "Do not compile dead methods (semi-global)";
var723 = 41;
var724 = string__NativeString__to_s_with_length(var722, var723);
var721 = var724;
varonce720 = var721;
}
if (varonce725) {
var726 = varonce725;
} else {
var727 = "--skip-dead-methods";
var728 = 19;
var729 = string__NativeString__to_s_with_length(var727, var728);
var726 = var729;
varonce725 = var726;
}
var730 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var730 = array_instance Array[String] */
var731 = 1;
var732 = NEW_array__NativeArray(var731, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var732)->values[0] = (val*) var726;
{
((void (*)(val*, val*, long))(var730->class->vft[COLOR_array__Array__with_native]))(var730, var732, var731) /* with_native on <var730:Array[String]>*/;
}
}
{
opts__OptionBool__init(var719, var721, var730); /* Direct call opts#OptionBool#init on <var719:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_skip_dead_methods].val = var719; /* _opt_skip_dead_methods on <self:ToolContext exact> */
var733 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce734) {
var735 = varonce734;
} else {
var736 = "Enable all semi-global optimizations";
var737 = 36;
var738 = string__NativeString__to_s_with_length(var736, var737);
var735 = var738;
varonce734 = var735;
}
if (varonce739) {
var740 = varonce739;
} else {
var741 = "--semi-global";
var742 = 13;
var743 = string__NativeString__to_s_with_length(var741, var742);
var740 = var743;
varonce739 = var740;
}
var744 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var744 = array_instance Array[String] */
var745 = 1;
var746 = NEW_array__NativeArray(var745, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var746)->values[0] = (val*) var740;
{
((void (*)(val*, val*, long))(var744->class->vft[COLOR_array__Array__with_native]))(var744, var746, var745) /* with_native on <var744:Array[String]>*/;
}
}
{
opts__OptionBool__init(var733, var735, var744); /* Direct call opts#OptionBool#init on <var733:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_semi_global].val = var733; /* _opt_semi_global on <self:ToolContext exact> */
var747 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce748) {
var749 = varonce748;
} else {
var750 = "Force colorization of dead methods";
var751 = 34;
var752 = string__NativeString__to_s_with_length(var750, var751);
var749 = var752;
varonce748 = var749;
}
if (varonce753) {
var754 = varonce753;
} else {
var755 = "--colo-dead-methods";
var756 = 19;
var757 = string__NativeString__to_s_with_length(var755, var756);
var754 = var757;
varonce753 = var754;
}
var758 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var758 = array_instance Array[String] */
var759 = 1;
var760 = NEW_array__NativeArray(var759, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var760)->values[0] = (val*) var754;
{
((void (*)(val*, val*, long))(var758->class->vft[COLOR_array__Array__with_native]))(var758, var760, var759) /* with_native on <var758:Array[String]>*/;
}
}
{
opts__OptionBool__init(var747, var749, var758); /* Direct call opts#OptionBool#init on <var747:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_colo_dead_methods].val = var747; /* _opt_colo_dead_methods on <self:ToolContext exact> */
var761 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce762) {
var763 = varonce762;
} else {
var764 = "Enable static size measuring of tables used for vft, typing and resolution";
var765 = 74;
var766 = string__NativeString__to_s_with_length(var764, var765);
var763 = var766;
varonce762 = var763;
}
if (varonce767) {
var768 = varonce767;
} else {
var769 = "--tables-metrics";
var770 = 16;
var771 = string__NativeString__to_s_with_length(var769, var770);
var768 = var771;
varonce767 = var768;
}
var772 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var772 = array_instance Array[String] */
var773 = 1;
var774 = NEW_array__NativeArray(var773, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var774)->values[0] = (val*) var768;
{
((void (*)(val*, val*, long))(var772->class->vft[COLOR_array__Array__with_native]))(var772, var774, var773) /* with_native on <var772:Array[String]>*/;
}
}
{
opts__OptionBool__init(var761, var763, var772); /* Direct call opts#OptionBool#init on <var761:OptionBool>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___opt_tables_metrics].val = var761; /* _opt_tables_metrics on <self:ToolContext exact> */
var775 = NEW_separate_compiler__SeparateCompilerPhase(&type_separate_compiler__SeparateCompilerPhase);
var776 = NULL;
{
phase__Phase__init(var775, self, var776); /* Direct call phase#Phase#init on <var775:SeparateCompilerPhase>*/
}
self->attrs[COLOR_separate_compiler__ToolContext___separate_compiler_phase].val = var775; /* _separate_compiler_phase on <self:ToolContext exact> */
var777 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce778) {
var779 = varonce778;
} else {
var780 = "Erase generic types";
var781 = 19;
var782 = string__NativeString__to_s_with_length(var780, var781);
var779 = var782;
varonce778 = var779;
}
if (varonce783) {
var784 = varonce783;
} else {
var785 = "--erasure";
var786 = 9;
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
self->attrs[COLOR_separate_erasure_compiler__ToolContext___opt_erasure].val = var777; /* _opt_erasure on <self:ToolContext exact> */
var791 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce792) {
var793 = varonce792;
} else {
var794 = "Activate RTA (implicit with --global and --separate)";
var795 = 52;
var796 = string__NativeString__to_s_with_length(var794, var795);
var793 = var796;
varonce792 = var793;
}
if (varonce797) {
var798 = varonce797;
} else {
var799 = "--rta";
var800 = 5;
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
self->attrs[COLOR_separate_erasure_compiler__ToolContext___opt_rta].val = var791; /* _opt_rta on <self:ToolContext exact> */
var805 = NEW_opts__OptionBool(&type_opts__OptionBool);
if (varonce806) {
var807 = varonce806;
} else {
var808 = "Disable implicit casts on unsafe return with erasure-typing policy (dangerous)";
var809 = 78;
var810 = string__NativeString__to_s_with_length(var808, var809);
var807 = var810;
varonce806 = var807;
}
if (varonce811) {
var812 = varonce811;
} else {
var813 = "--no-check-erasure-cast";
var814 = 23;
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
self->attrs[COLOR_separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast].val = var805; /* _opt_no_check_erasure_cast on <self:ToolContext exact> */
var819 = NEW_separate_erasure_compiler__ErasureCompilerPhase(&type_separate_erasure_compiler__ErasureCompilerPhase);
var820 = NULL;
{
phase__Phase__init(var819, self, var820); /* Direct call phase#Phase#init on <var819:ErasureCompilerPhase>*/
}
self->attrs[COLOR_separate_erasure_compiler__ToolContext___erasure_compiler_phase].val = var819; /* _erasure_compiler_phase on <self:ToolContext exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to toolcontext:BashCompletion:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to toolcontext:BashCompletion:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to toolcontext:BashCompletion:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to toolcontext:BashCompletion:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to toolcontext:BashCompletion:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to toolcontext:BashCompletion:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to toolcontext:BashCompletion:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to toolcontext:BashCompletion:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to toolcontext:BashCompletion:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_template__Template__init, /* pointer to toolcontext:BashCompletion:template#Template#init */
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
array__Array__init(var1); /* Direct call array#Array#init on <var1:Array[Streamable]>*/
}
self->attrs[COLOR_template__Template___content].val = var1; /* _content on <self:BashCompletion exact> */
var2 = 0;
self->attrs[COLOR_template__Template___render_done].s = var2; /* _render_done on <self:BashCompletion exact> */
var3 = 0;
self->attrs[COLOR_template__Template___is_writing].s = var3; /* _is_writing on <self:BashCompletion exact> */
return self;
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to opts:OptionBool:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to opts:OptionBool:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to opts:OptionBool:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to opts:OptionBool:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to opts:OptionBool:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to opts:OptionBool:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to opts:OptionBool:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to opts:OptionBool:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to opts:OptionBool:model_base#Object#none_visibility */
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
array__Array__init(var); /* Direct call array#Array#init on <var:Array[String]>*/
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to opts:OptionCount:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to opts:OptionCount:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to opts:OptionCount:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to opts:OptionCount:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to opts:OptionCount:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to opts:OptionCount:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to opts:OptionCount:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to opts:OptionCount:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to opts:OptionCount:model_base#Object#none_visibility */
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
array__Array__init(var); /* Direct call array#Array#init on <var:Array[String]>*/
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
/* runtime class opts__OptionString */
const struct class class_opts__OptionString = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to opts:OptionString:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to opts:OptionString:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to opts:OptionString:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to opts:OptionString:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to opts:OptionString:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to opts:OptionString:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to opts:OptionString:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to opts:OptionString:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to opts:OptionString:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to opts:OptionString:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to opts:OptionString:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to opts:OptionString:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to opts:OptionString:model_base#Object#none_visibility */
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
array__Array__init(var); /* Direct call array#Array#init on <var:Array[String]>*/
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
/* allocate OptionInt */
val* NEW_opts__OptionInt(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "OptionInt is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to opts:OptionArray:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to opts:OptionArray:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to opts:OptionArray:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to opts:OptionArray:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to opts:OptionArray:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to opts:OptionArray:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to opts:OptionArray:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to opts:OptionArray:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to opts:OptionArray:model_base#Object#none_visibility */
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
array__Array__init(var); /* Direct call array#Array#init on <var:Array[String]>*/
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to opts:OptionContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to opts:OptionContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to opts:OptionContext:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to opts:OptionContext:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to opts:OptionContext:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to opts:OptionContext:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to opts:OptionContext:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to opts:OptionContext:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to opts:OptionContext:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to opts:OptionContext:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to opts:OptionContext:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to opts:OptionContext:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to opts:OptionContext:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to opts:OptionContext:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_opts__OptionContext__options, /* pointer to opts:OptionContext:opts#OptionContext#options */
(nitmethod_t)VIRTUAL_opts__OptionContext__options_61d, /* pointer to opts:OptionContext:opts#OptionContext#options= */
(nitmethod_t)VIRTUAL_opts__OptionContext__rest, /* pointer to opts:OptionContext:opts#OptionContext#rest */
(nitmethod_t)VIRTUAL_opts__OptionContext__rest_61d, /* pointer to opts:OptionContext:opts#OptionContext#rest= */
(nitmethod_t)VIRTUAL_opts__OptionContext__errors, /* pointer to opts:OptionContext:opts#OptionContext#errors */
(nitmethod_t)VIRTUAL_opts__OptionContext__errors_61d, /* pointer to opts:OptionContext:opts#OptionContext#errors= */
(nitmethod_t)VIRTUAL_opts__OptionContext__optmap, /* pointer to opts:OptionContext:opts#OptionContext#optmap */
(nitmethod_t)VIRTUAL_opts__OptionContext__optmap_61d, /* pointer to opts:OptionContext:opts#OptionContext#optmap= */
(nitmethod_t)VIRTUAL_opts__OptionContext__init, /* pointer to opts:OptionContext:opts#OptionContext#init */
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
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_opts__OptionContext;
return self;
}
/* runtime class posix__Passwd */
const struct class class_posix__Passwd = {
6, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to posix:Passwd:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to posix:Passwd:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to posix:Passwd:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to posix:Passwd:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to posix:Passwd:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to posix:Passwd:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to posix:Passwd:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to posix:Passwd:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to posix:Passwd:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to posix:Passwd:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to posix:Passwd:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to posix:Passwd:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to posix:Passwd:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to posix:Passwd:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to posix:Passwd:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to posix:Passwd:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to posix:Passwd:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to posix:Passwd:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to posix:Passwd:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to posix:Passwd:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to posix:Passwd:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to posix:Passwd:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to posix:Passwd:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to posix:Passwd:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to posix:Passwd:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to posix:Passwd:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to posix:Passwd:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to posix:Passwd:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to posix:Passwd:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_kernel__Pointer__address_is_null, /* pointer to posix:Passwd:kernel#Pointer#address_is_null */
}
};
/* runtime class posix__Group */
const struct class class_posix__Group = {
6, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to posix:Group:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to posix:Group:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to posix:Group:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to posix:Group:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to posix:Group:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to posix:Group:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to posix:Group:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to posix:Group:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to posix:Group:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to posix:Group:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to posix:Group:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to posix:Group:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to posix:Group:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to posix:Group:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to posix:Group:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to posix:Group:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to posix:Group:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to posix:Group:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to posix:Group:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to posix:Group:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to posix:Group:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to posix:Group:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to posix:Group:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to posix:Group:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to posix:Group:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to posix:Group:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to posix:Group:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to posix:Group:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to posix:Group:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_kernel__Pointer__address_is_null, /* pointer to posix:Group:kernel#Pointer#address_is_null */
}
};
/* runtime class string__FlatSubstringsIter */
const struct class class_string__FlatSubstringsIter = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to string:FlatSubstringsIter:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to string:FlatSubstringsIter:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to string:FlatSubstringsIter:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to string:FlatSubstringsIter:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to string:FlatSubstringsIter:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to string:FlatSubstringsIter:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to string:FlatSubstringsIter:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to string:FlatSubstringsIter:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to string:FlatSubstringsIter:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to string:FlatSubstringsIter:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to string:FlatSubstringsIter:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to string:FlatSubstringsIter:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to string:FlatSubstringsIter:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to string:FlatSubstringsIter:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to string:FlatSubstringsIter:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to string:FlatSubstringsIter:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to string:FlatSubstringsIter:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to string:FlatSubstringsIter:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to string:FlatSubstringsIter:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to string:FlatSubstringsIter:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to string:FlatSubstringsIter:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to string:FlatSubstringsIter:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to string:FlatSubstringsIter:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to string:FlatSubstringsIter:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to string:FlatSubstringsIter:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to string:FlatSubstringsIter:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to string:FlatSubstringsIter:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to string:FlatSubstringsIter:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to string:FlatSubstringsIter:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_string__FlatSubstringsIter__item, /* pointer to string:FlatSubstringsIter:string#FlatSubstringsIter#item */
(nitmethod_t)VIRTUAL_string__FlatSubstringsIter__next, /* pointer to string:FlatSubstringsIter:string#FlatSubstringsIter#next */
(nitmethod_t)VIRTUAL_string__FlatSubstringsIter__is_ok, /* pointer to string:FlatSubstringsIter:string#FlatSubstringsIter#is_ok */
(nitmethod_t)VIRTUAL_abstract_collection__Iterator__iterator, /* pointer to string:FlatSubstringsIter:abstract_collection#Iterator#iterator */
(nitmethod_t)VIRTUAL_array__Iterator__to_a, /* pointer to string:FlatSubstringsIter:array#Iterator#to_a */
(nitmethod_t)VIRTUAL_string__FlatSubstringsIter__tgt, /* pointer to string:FlatSubstringsIter:string#FlatSubstringsIter#tgt */
(nitmethod_t)VIRTUAL_string__FlatSubstringsIter__tgt_61d, /* pointer to string:FlatSubstringsIter:string#FlatSubstringsIter#tgt= */
(nitmethod_t)VIRTUAL_string__FlatSubstringsIter__init, /* pointer to string:FlatSubstringsIter:string#FlatSubstringsIter#init */
}
};
/* allocate FlatSubstringsIter */
val* NEW_string__FlatSubstringsIter(const struct type* type) {
val* self /* : FlatSubstringsIter */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_string__FlatSubstringsIter;
return self;
}
/* runtime class string__FlatString */
const struct class class_string__FlatString = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to string:FlatString:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to string:FlatString:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_string__FlatString___61d_61d, /* pointer to string:FlatString:string#FlatString#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to string:FlatString:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to string:FlatString:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to string:FlatString:kernel#Object#sys */
(nitmethod_t)VIRTUAL_string__FlatString__hash, /* pointer to string:FlatString:string#FlatString#hash */
(nitmethod_t)VIRTUAL_string__String__to_s, /* pointer to string:FlatString:string#String#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to string:FlatString:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to string:FlatString:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to string:FlatString:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to string:FlatString:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to string:FlatString:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to string:FlatString:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to string:FlatString:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to string:FlatString:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to string:FlatString:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to string:FlatString:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to string:FlatString:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to string:FlatString:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to string:FlatString:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to string:FlatString:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to string:FlatString:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to string:FlatString:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to string:FlatString:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to string:FlatString:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to string:FlatString:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to string:FlatString:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to string:FlatString:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_string__FlatString___60d, /* pointer to string:FlatString:string#FlatString#< */
(nitmethod_t)VIRTUAL_kernel__Comparable___60d_61d, /* pointer to string:FlatString:kernel#Comparable#<= */
(nitmethod_t)VIRTUAL_kernel__Comparable___62d_61d, /* pointer to string:FlatString:kernel#Comparable#>= */
(nitmethod_t)VIRTUAL_kernel__Comparable___62d, /* pointer to string:FlatString:kernel#Comparable#> */
(nitmethod_t)VIRTUAL_kernel__Comparable___60d_61d_62d, /* pointer to string:FlatString:kernel#Comparable#<=> */
(nitmethod_t)VIRTUAL_string__StringCapable__calloc_string, /* pointer to string:FlatString:string#StringCapable#calloc_string */
(nitmethod_t)VIRTUAL_string_search__Text__search_index_in, /* pointer to string:FlatString:string_search#Text#search_index_in */
(nitmethod_t)VIRTUAL_string_search__Text__search_in, /* pointer to string:FlatString:string_search#Text#search_in */
(nitmethod_t)VIRTUAL_string_search__Pattern__split_in, /* pointer to string:FlatString:string_search#Pattern#split_in */
(nitmethod_t)VIRTUAL_stream__Text__write_to, /* pointer to string:FlatString:stream#Text#write_to */
(nitmethod_t)VIRTUAL_string__FlatString__chars, /* pointer to string:FlatString:string#FlatString#chars */
(nitmethod_t)VIRTUAL_string__FlatText__length, /* pointer to string:FlatString:string#FlatText#length */
(nitmethod_t)VIRTUAL_string__FlatString__substring, /* pointer to string:FlatString:string#FlatString#substring */
(nitmethod_t)VIRTUAL_string__FlatString__substrings, /* pointer to string:FlatString:string#FlatString#substrings */
(nitmethod_t)VIRTUAL_string__Text__is_empty, /* pointer to string:FlatString:string#Text#is_empty */
(nitmethod_t)VIRTUAL_string__FlatString__empty, /* pointer to string:FlatString:string#FlatString#empty */
(nitmethod_t)VIRTUAL_string__FlatString__to_cstring, /* pointer to string:FlatString:string#FlatString#to_cstring */
(nitmethod_t)VIRTUAL_string__Text__substring_from, /* pointer to string:FlatString:string#Text#substring_from */
(nitmethod_t)VIRTUAL_string__Text__has_substring, /* pointer to string:FlatString:string#Text#has_substring */
(nitmethod_t)VIRTUAL_string__Text__has_prefix, /* pointer to string:FlatString:string#Text#has_prefix */
(nitmethod_t)VIRTUAL_string__Text__has_suffix, /* pointer to string:FlatString:string#Text#has_suffix */
(nitmethod_t)VIRTUAL_string__Text__to_i, /* pointer to string:FlatString:string#Text#to_i */
(nitmethod_t)VIRTUAL_string__Text__to_f, /* pointer to string:FlatString:string#Text#to_f */
(nitmethod_t)VIRTUAL_string__Text__to_hex, /* pointer to string:FlatString:string#Text#to_hex */
(nitmethod_t)VIRTUAL_string__Text__a_to, /* pointer to string:FlatString:string#Text#a_to */
(nitmethod_t)VIRTUAL_string__Text__to_cmangle, /* pointer to string:FlatString:string#Text#to_cmangle */
(nitmethod_t)VIRTUAL_string__Text__escape_to_c, /* pointer to string:FlatString:string#Text#escape_to_c */
(nitmethod_t)VIRTUAL_string__Text__unescape_nit, /* pointer to string:FlatString:string#Text#unescape_nit */
(nitmethod_t)VIRTUAL_string__Text__hash_cache, /* pointer to string:FlatString:string#Text#hash_cache */
(nitmethod_t)VIRTUAL_string__Text__hash_cache_61d, /* pointer to string:FlatString:string#Text#hash_cache= */
(nitmethod_t)VIRTUAL_string__Text__init, /* pointer to string:FlatString:string#Text#init */
(nitmethod_t)VIRTUAL_string_search__Text__split, /* pointer to string:FlatString:string_search#Text#split */
(nitmethod_t)VIRTUAL_string_search__Text__split_with, /* pointer to string:FlatString:string_search#Text#split_with */
(nitmethod_t)VIRTUAL_string__FlatText__items, /* pointer to string:FlatString:string#FlatText#items */
(nitmethod_t)VIRTUAL_string__FlatText__items_61d, /* pointer to string:FlatString:string#FlatText#items= */
(nitmethod_t)VIRTUAL_string__FlatText__real_items, /* pointer to string:FlatString:string#FlatText#real_items */
(nitmethod_t)VIRTUAL_string__FlatText__real_items_61d, /* pointer to string:FlatString:string#FlatText#real_items= */
(nitmethod_t)VIRTUAL_string__FlatText__length_61d, /* pointer to string:FlatString:string#FlatText#length= */
(nitmethod_t)VIRTUAL_string__FlatText__init, /* pointer to string:FlatString:string#FlatText#init */
(nitmethod_t)VIRTUAL_string__FlatString___43d, /* pointer to string:FlatString:string#FlatString#+ */
(nitmethod_t)VIRTUAL_string__FlatString___42d, /* pointer to string:FlatString:string#FlatString#* */
(nitmethod_t)VIRTUAL_string__FlatString__to_lower, /* pointer to string:FlatString:string#FlatString#to_lower */
(nitmethod_t)VIRTUAL_environ__String__environ, /* pointer to string:FlatString:environ#String#environ */
(nitmethod_t)VIRTUAL_file__String__file_exists, /* pointer to string:FlatString:file#String#file_exists */
(nitmethod_t)VIRTUAL_file__String__file_copy_to, /* pointer to string:FlatString:file#String#file_copy_to */
(nitmethod_t)VIRTUAL_file__String__strip_extension, /* pointer to string:FlatString:file#String#strip_extension */
(nitmethod_t)VIRTUAL_file__String__basename, /* pointer to string:FlatString:file#String#basename */
(nitmethod_t)VIRTUAL_file__String__dirname, /* pointer to string:FlatString:file#String#dirname */
(nitmethod_t)VIRTUAL_file__String__realpath, /* pointer to string:FlatString:file#String#realpath */
(nitmethod_t)VIRTUAL_file__String__simplify_path, /* pointer to string:FlatString:file#String#simplify_path */
(nitmethod_t)VIRTUAL_file__String__join_path, /* pointer to string:FlatString:file#String#join_path */
(nitmethod_t)VIRTUAL_file__String__mkdir, /* pointer to string:FlatString:file#String#mkdir */
(nitmethod_t)VIRTUAL_file__String__file_extension, /* pointer to string:FlatString:file#String#file_extension */
(nitmethod_t)VIRTUAL_string__FlatString__index_from, /* pointer to string:FlatString:string#FlatString#index_from */
(nitmethod_t)VIRTUAL_string__FlatString__index_from_61d, /* pointer to string:FlatString:string#FlatString#index_from= */
(nitmethod_t)VIRTUAL_string__FlatString__index_to, /* pointer to string:FlatString:string#FlatString#index_to */
(nitmethod_t)VIRTUAL_string__FlatString__index_to_61d, /* pointer to string:FlatString:string#FlatString#index_to= */
(nitmethod_t)VIRTUAL_string__FlatString__with_infos, /* pointer to string:FlatString:string#FlatString#with_infos */
(nitmethod_t)VIRTUAL_string__Text___61d_61d, /* pointer to string:FlatString:string#Text#== */
(nitmethod_t)VIRTUAL_string__Text___60d, /* pointer to string:FlatString:string#Text#< */
}
};
/* allocate FlatString */
val* NEW_string__FlatString(const struct type* type) {
val* self /* : FlatString */;
val* var /* : null */;
val* var1 /* : null */;
long var2 /* : Int */;
val* var3 /* : FlatStringCharView */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_string__FlatString;
var = NULL;
self->attrs[COLOR_string__Text___hash_cache].val = var; /* _hash_cache on <self:FlatString exact> */
var1 = NULL;
self->attrs[COLOR_string__FlatText___real_items].val = var1; /* _real_items on <self:FlatString exact> */
var2 = 0;
self->attrs[COLOR_string__FlatText___length].l = var2; /* _length on <self:FlatString exact> */
var3 = NEW_string__FlatStringCharView(&type_string__FlatStringCharView);
{
string__StringCharView__init(var3, self); /* Direct call string#StringCharView#init on <var3:FlatStringCharView>*/
}
self->attrs[COLOR_string__FlatString___chars].val = var3; /* _chars on <self:FlatString exact> */
return self;
}
/* runtime class string__FlatStringReverseIterator */
/* allocate FlatStringReverseIterator */
val* NEW_string__FlatStringReverseIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "FlatStringReverseIterator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class string__FlatStringIterator */
const struct class class_string__FlatStringIterator = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to string:FlatStringIterator:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to string:FlatStringIterator:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to string:FlatStringIterator:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to string:FlatStringIterator:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to string:FlatStringIterator:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to string:FlatStringIterator:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to string:FlatStringIterator:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to string:FlatStringIterator:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to string:FlatStringIterator:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to string:FlatStringIterator:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to string:FlatStringIterator:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to string:FlatStringIterator:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to string:FlatStringIterator:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to string:FlatStringIterator:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to string:FlatStringIterator:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to string:FlatStringIterator:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to string:FlatStringIterator:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to string:FlatStringIterator:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to string:FlatStringIterator:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to string:FlatStringIterator:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to string:FlatStringIterator:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to string:FlatStringIterator:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to string:FlatStringIterator:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to string:FlatStringIterator:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to string:FlatStringIterator:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to string:FlatStringIterator:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to string:FlatStringIterator:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to string:FlatStringIterator:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to string:FlatStringIterator:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_string__FlatStringIterator__item, /* pointer to string:FlatStringIterator:string#FlatStringIterator#item */
(nitmethod_t)VIRTUAL_string__FlatStringIterator__next, /* pointer to string:FlatStringIterator:string#FlatStringIterator#next */
(nitmethod_t)VIRTUAL_string__FlatStringIterator__is_ok, /* pointer to string:FlatStringIterator:string#FlatStringIterator#is_ok */
(nitmethod_t)VIRTUAL_abstract_collection__Iterator__iterator, /* pointer to string:FlatStringIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)VIRTUAL_array__Iterator__to_a, /* pointer to string:FlatStringIterator:array#Iterator#to_a */
(nitmethod_t)VIRTUAL_string__FlatStringIterator__index, /* pointer to string:FlatStringIterator:string#FlatStringIterator#index */
(nitmethod_t)VIRTUAL_string__FlatStringIterator__target, /* pointer to string:FlatStringIterator:string#FlatStringIterator#target */
(nitmethod_t)VIRTUAL_string__FlatStringIterator__target_61d, /* pointer to string:FlatStringIterator:string#FlatStringIterator#target= */
(nitmethod_t)VIRTUAL_string__FlatStringIterator__target_items, /* pointer to string:FlatStringIterator:string#FlatStringIterator#target_items */
(nitmethod_t)VIRTUAL_string__FlatStringIterator__target_items_61d, /* pointer to string:FlatStringIterator:string#FlatStringIterator#target_items= */
(nitmethod_t)VIRTUAL_string__FlatStringIterator__curr_pos, /* pointer to string:FlatStringIterator:string#FlatStringIterator#curr_pos */
(nitmethod_t)VIRTUAL_string__FlatStringIterator__curr_pos_61d, /* pointer to string:FlatStringIterator:string#FlatStringIterator#curr_pos= */
(nitmethod_t)VIRTUAL_string__FlatStringIterator__with_pos, /* pointer to string:FlatStringIterator:string#FlatStringIterator#with_pos */
}
};
/* allocate FlatStringIterator */
val* NEW_string__FlatStringIterator(const struct type* type) {
val* self /* : FlatStringIterator */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_string__FlatStringIterator;
return self;
}
/* runtime class string__FlatStringCharView */
const struct class class_string__FlatStringCharView = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to string:FlatStringCharView:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to string:FlatStringCharView:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead___61d_61d, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to string:FlatStringCharView:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to string:FlatStringCharView:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to string:FlatStringCharView:kernel#Object#sys */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__hash, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#hash */
(nitmethod_t)VIRTUAL_string__Collection__to_s, /* pointer to string:FlatStringCharView:string#Collection#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to string:FlatStringCharView:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to string:FlatStringCharView:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to string:FlatStringCharView:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to string:FlatStringCharView:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to string:FlatStringCharView:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to string:FlatStringCharView:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to string:FlatStringCharView:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to string:FlatStringCharView:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to string:FlatStringCharView:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to string:FlatStringCharView:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to string:FlatStringCharView:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to string:FlatStringCharView:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to string:FlatStringCharView:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to string:FlatStringCharView:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to string:FlatStringCharView:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to string:FlatStringCharView:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to string:FlatStringCharView:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to string:FlatStringCharView:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to string:FlatStringCharView:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to string:FlatStringCharView:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to string:FlatStringCharView:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_string__StringCharView__iterator, /* pointer to string:FlatStringCharView:string#StringCharView#iterator */
(nitmethod_t)VIRTUAL_string__StringCharView__is_empty, /* pointer to string:FlatStringCharView:string#StringCharView#is_empty */
(nitmethod_t)VIRTUAL_string__StringCharView__length, /* pointer to string:FlatStringCharView:string#StringCharView#length */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__has, /* pointer to string:FlatStringCharView:abstract_collection#Collection#has */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__first, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#first */
NULL, /* empty */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__has_all, /* pointer to string:FlatStringCharView:abstract_collection#Collection#has_all */
(nitmethod_t)VIRTUAL_array__Collection__to_a, /* pointer to string:FlatStringCharView:array#Collection#to_a */
(nitmethod_t)VIRTUAL_string__Collection__join, /* pointer to string:FlatStringCharView:string#Collection#join */
NULL, /* empty */
(nitmethod_t)VIRTUAL_string__FlatStringCharView___91d_93d, /* pointer to string:FlatStringCharView:string#FlatStringCharView#[] */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__last, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#last */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__index_of, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#index_of */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__last_index_of, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#last_index_of */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__index_of_from, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#index_of_from */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__last_index_of_from, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#last_index_of_from */
(nitmethod_t)VIRTUAL_string__FlatStringCharView__iterator_from, /* pointer to string:FlatStringCharView:string#FlatStringCharView#iterator_from */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_string__StringCharView__target, /* pointer to string:FlatStringCharView:string#StringCharView#target */
(nitmethod_t)VIRTUAL_string__StringCharView__target_61d, /* pointer to string:FlatStringCharView:string#StringCharView#target= */
(nitmethod_t)VIRTUAL_string__StringCharView__init, /* pointer to string:FlatStringCharView:string#StringCharView#init */
}
};
/* allocate FlatStringCharView */
val* NEW_string__FlatStringCharView(const struct type* type) {
val* self /* : FlatStringCharView */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_string__FlatStringCharView;
return self;
}
/* runtime class string__FlatBuffer */
const struct class class_string__FlatBuffer = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to string:FlatBuffer:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to string:FlatBuffer:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_string__Text___61d_61d, /* pointer to string:FlatBuffer:string#Text#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to string:FlatBuffer:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to string:FlatBuffer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to string:FlatBuffer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_string__Buffer__hash, /* pointer to string:FlatBuffer:string#Buffer#hash */
(nitmethod_t)VIRTUAL_string__FlatBuffer__to_s, /* pointer to string:FlatBuffer:string#FlatBuffer#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to string:FlatBuffer:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to string:FlatBuffer:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to string:FlatBuffer:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to string:FlatBuffer:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to string:FlatBuffer:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to string:FlatBuffer:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to string:FlatBuffer:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to string:FlatBuffer:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to string:FlatBuffer:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to string:FlatBuffer:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to string:FlatBuffer:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to string:FlatBuffer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to string:FlatBuffer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to string:FlatBuffer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to string:FlatBuffer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to string:FlatBuffer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to string:FlatBuffer:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to string:FlatBuffer:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to string:FlatBuffer:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to string:FlatBuffer:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to string:FlatBuffer:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_string__Text___60d, /* pointer to string:FlatBuffer:string#Text#< */
(nitmethod_t)VIRTUAL_kernel__Comparable___60d_61d, /* pointer to string:FlatBuffer:kernel#Comparable#<= */
(nitmethod_t)VIRTUAL_kernel__Comparable___62d_61d, /* pointer to string:FlatBuffer:kernel#Comparable#>= */
(nitmethod_t)VIRTUAL_kernel__Comparable___62d, /* pointer to string:FlatBuffer:kernel#Comparable#> */
(nitmethod_t)VIRTUAL_kernel__Comparable___60d_61d_62d, /* pointer to string:FlatBuffer:kernel#Comparable#<=> */
(nitmethod_t)VIRTUAL_string__StringCapable__calloc_string, /* pointer to string:FlatBuffer:string#StringCapable#calloc_string */
(nitmethod_t)VIRTUAL_string_search__Text__search_index_in, /* pointer to string:FlatBuffer:string_search#Text#search_index_in */
(nitmethod_t)VIRTUAL_string_search__Text__search_in, /* pointer to string:FlatBuffer:string_search#Text#search_in */
(nitmethod_t)VIRTUAL_string_search__Pattern__split_in, /* pointer to string:FlatBuffer:string_search#Pattern#split_in */
(nitmethod_t)VIRTUAL_stream__Text__write_to, /* pointer to string:FlatBuffer:stream#Text#write_to */
(nitmethod_t)VIRTUAL_string__FlatBuffer__chars, /* pointer to string:FlatBuffer:string#FlatBuffer#chars */
(nitmethod_t)VIRTUAL_string__FlatText__length, /* pointer to string:FlatBuffer:string#FlatText#length */
(nitmethod_t)VIRTUAL_string__FlatBuffer__substring, /* pointer to string:FlatBuffer:string#FlatBuffer#substring */
(nitmethod_t)VIRTUAL_string__FlatBuffer__substrings, /* pointer to string:FlatBuffer:string#FlatBuffer#substrings */
(nitmethod_t)VIRTUAL_string__Text__is_empty, /* pointer to string:FlatBuffer:string#Text#is_empty */
(nitmethod_t)VIRTUAL_string__FlatBuffer__empty, /* pointer to string:FlatBuffer:string#FlatBuffer#empty */
(nitmethod_t)VIRTUAL_string__FlatBuffer__to_cstring, /* pointer to string:FlatBuffer:string#FlatBuffer#to_cstring */
(nitmethod_t)VIRTUAL_string__Text__substring_from, /* pointer to string:FlatBuffer:string#Text#substring_from */
(nitmethod_t)VIRTUAL_string__Text__has_substring, /* pointer to string:FlatBuffer:string#Text#has_substring */
(nitmethod_t)VIRTUAL_string__Text__has_prefix, /* pointer to string:FlatBuffer:string#Text#has_prefix */
(nitmethod_t)VIRTUAL_string__Text__has_suffix, /* pointer to string:FlatBuffer:string#Text#has_suffix */
(nitmethod_t)VIRTUAL_string__Text__to_i, /* pointer to string:FlatBuffer:string#Text#to_i */
(nitmethod_t)VIRTUAL_string__Text__to_f, /* pointer to string:FlatBuffer:string#Text#to_f */
(nitmethod_t)VIRTUAL_string__Text__to_hex, /* pointer to string:FlatBuffer:string#Text#to_hex */
(nitmethod_t)VIRTUAL_string__Text__a_to, /* pointer to string:FlatBuffer:string#Text#a_to */
(nitmethod_t)VIRTUAL_string__Text__to_cmangle, /* pointer to string:FlatBuffer:string#Text#to_cmangle */
(nitmethod_t)VIRTUAL_string__Text__escape_to_c, /* pointer to string:FlatBuffer:string#Text#escape_to_c */
(nitmethod_t)VIRTUAL_string__Text__unescape_nit, /* pointer to string:FlatBuffer:string#Text#unescape_nit */
(nitmethod_t)VIRTUAL_string__Text__hash_cache, /* pointer to string:FlatBuffer:string#Text#hash_cache */
(nitmethod_t)VIRTUAL_string__Text__hash_cache_61d, /* pointer to string:FlatBuffer:string#Text#hash_cache= */
(nitmethod_t)VIRTUAL_string__Text__init, /* pointer to string:FlatBuffer:string#Text#init */
(nitmethod_t)VIRTUAL_string_search__Text__split, /* pointer to string:FlatBuffer:string_search#Text#split */
(nitmethod_t)VIRTUAL_string_search__Text__split_with, /* pointer to string:FlatBuffer:string_search#Text#split_with */
(nitmethod_t)VIRTUAL_string__FlatText__items, /* pointer to string:FlatBuffer:string#FlatText#items */
(nitmethod_t)VIRTUAL_string__FlatText__items_61d, /* pointer to string:FlatBuffer:string#FlatText#items= */
(nitmethod_t)VIRTUAL_string__FlatText__real_items, /* pointer to string:FlatBuffer:string#FlatText#real_items */
(nitmethod_t)VIRTUAL_string__FlatText__real_items_61d, /* pointer to string:FlatBuffer:string#FlatText#real_items= */
(nitmethod_t)VIRTUAL_string__FlatText__length_61d, /* pointer to string:FlatBuffer:string#FlatText#length= */
(nitmethod_t)VIRTUAL_string__FlatText__init, /* pointer to string:FlatBuffer:string#FlatText#init */
(nitmethod_t)VIRTUAL_string__Buffer__is_dirty, /* pointer to string:FlatBuffer:string#Buffer#is_dirty */
(nitmethod_t)VIRTUAL_string__Buffer__is_dirty_61d, /* pointer to string:FlatBuffer:string#Buffer#is_dirty= */
(nitmethod_t)VIRTUAL_string__FlatBuffer__add, /* pointer to string:FlatBuffer:string#FlatBuffer#add */
(nitmethod_t)VIRTUAL_string__FlatBuffer__enlarge, /* pointer to string:FlatBuffer:string#FlatBuffer#enlarge */
(nitmethod_t)VIRTUAL_string__FlatBuffer__append, /* pointer to string:FlatBuffer:string#FlatBuffer#append */
(nitmethod_t)VIRTUAL_string__Text__hash, /* pointer to string:FlatBuffer:string#Text#hash */
(nitmethod_t)VIRTUAL_string__FlatBuffer__capacity, /* pointer to string:FlatBuffer:string#FlatBuffer#capacity */
(nitmethod_t)VIRTUAL_string__FlatBuffer__capacity_61d, /* pointer to string:FlatBuffer:string#FlatBuffer#capacity= */
(nitmethod_t)VIRTUAL_string__FlatBuffer__init, /* pointer to string:FlatBuffer:string#FlatBuffer#init */
(nitmethod_t)VIRTUAL_string__FlatBuffer__from, /* pointer to string:FlatBuffer:string#FlatBuffer#from */
(nitmethod_t)VIRTUAL_string__FlatBuffer__with_capacity, /* pointer to string:FlatBuffer:string#FlatBuffer#with_capacity */
}
};
/* allocate FlatBuffer */
val* NEW_string__FlatBuffer(const struct type* type) {
val* self /* : FlatBuffer */;
val* var /* : null */;
val* var1 /* : null */;
long var2 /* : Int */;
short int var3 /* : Bool */;
val* var4 /* : FlatBufferCharView */;
long var5 /* : Int */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_string__FlatBuffer;
var = NULL;
self->attrs[COLOR_string__Text___hash_cache].val = var; /* _hash_cache on <self:FlatBuffer exact> */
var1 = NULL;
self->attrs[COLOR_string__FlatText___real_items].val = var1; /* _real_items on <self:FlatBuffer exact> */
var2 = 0;
self->attrs[COLOR_string__FlatText___length].l = var2; /* _length on <self:FlatBuffer exact> */
var3 = 1;
self->attrs[COLOR_string__Buffer___is_dirty].s = var3; /* _is_dirty on <self:FlatBuffer exact> */
var4 = NEW_string__FlatBufferCharView(&type_string__FlatBufferCharView);
{
string__StringCharView__init(var4, self); /* Direct call string#StringCharView#init on <var4:FlatBufferCharView>*/
}
self->attrs[COLOR_string__FlatBuffer___chars].val = var4; /* _chars on <self:FlatBuffer exact> */
var5 = 0;
self->attrs[COLOR_string__FlatBuffer___capacity].l = var5; /* _capacity on <self:FlatBuffer exact> */
return self;
}
/* runtime class string__FlatBufferReverseIterator */
/* allocate FlatBufferReverseIterator */
val* NEW_string__FlatBufferReverseIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "FlatBufferReverseIterator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class string__FlatBufferCharView */
const struct class class_string__FlatBufferCharView = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to string:FlatBufferCharView:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to string:FlatBufferCharView:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead___61d_61d, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to string:FlatBufferCharView:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to string:FlatBufferCharView:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to string:FlatBufferCharView:kernel#Object#sys */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__hash, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#hash */
(nitmethod_t)VIRTUAL_string__Collection__to_s, /* pointer to string:FlatBufferCharView:string#Collection#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to string:FlatBufferCharView:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to string:FlatBufferCharView:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to string:FlatBufferCharView:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to string:FlatBufferCharView:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to string:FlatBufferCharView:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to string:FlatBufferCharView:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to string:FlatBufferCharView:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to string:FlatBufferCharView:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to string:FlatBufferCharView:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to string:FlatBufferCharView:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to string:FlatBufferCharView:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to string:FlatBufferCharView:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to string:FlatBufferCharView:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to string:FlatBufferCharView:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to string:FlatBufferCharView:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to string:FlatBufferCharView:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to string:FlatBufferCharView:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to string:FlatBufferCharView:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to string:FlatBufferCharView:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to string:FlatBufferCharView:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to string:FlatBufferCharView:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_string__StringCharView__iterator, /* pointer to string:FlatBufferCharView:string#StringCharView#iterator */
(nitmethod_t)VIRTUAL_string__StringCharView__is_empty, /* pointer to string:FlatBufferCharView:string#StringCharView#is_empty */
(nitmethod_t)VIRTUAL_string__StringCharView__length, /* pointer to string:FlatBufferCharView:string#StringCharView#length */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__has, /* pointer to string:FlatBufferCharView:abstract_collection#Collection#has */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__first, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#first */
(nitmethod_t)VIRTUAL_string__StringCapable__calloc_string, /* pointer to string:FlatBufferCharView:string#StringCapable#calloc_string */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__has_all, /* pointer to string:FlatBufferCharView:abstract_collection#Collection#has_all */
(nitmethod_t)VIRTUAL_array__Collection__to_a, /* pointer to string:FlatBufferCharView:array#Collection#to_a */
(nitmethod_t)VIRTUAL_string__Collection__join, /* pointer to string:FlatBufferCharView:string#Collection#join */
NULL, /* empty */
(nitmethod_t)VIRTUAL_string__FlatBufferCharView___91d_93d, /* pointer to string:FlatBufferCharView:string#FlatBufferCharView#[] */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__last, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#last */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__index_of, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#index_of */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__last_index_of, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#last_index_of */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__index_of_from, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#index_of_from */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__last_index_of_from, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#last_index_of_from */
(nitmethod_t)VIRTUAL_string__FlatBufferCharView__iterator_from, /* pointer to string:FlatBufferCharView:string#FlatBufferCharView#iterator_from */
(nitmethod_t)VIRTUAL_abstract_collection__RemovableCollection__clear, /* pointer to string:FlatBufferCharView:abstract_collection#RemovableCollection#clear */
(nitmethod_t)VIRTUAL_abstract_collection__RemovableCollection__remove, /* pointer to string:FlatBufferCharView:abstract_collection#RemovableCollection#remove */
(nitmethod_t)VIRTUAL_string__StringCharView__target, /* pointer to string:FlatBufferCharView:string#StringCharView#target */
(nitmethod_t)VIRTUAL_string__StringCharView__target_61d, /* pointer to string:FlatBufferCharView:string#StringCharView#target= */
(nitmethod_t)VIRTUAL_string__StringCharView__init, /* pointer to string:FlatBufferCharView:string#StringCharView#init */
(nitmethod_t)VIRTUAL_string__FlatBufferCharView__add, /* pointer to string:FlatBufferCharView:string#FlatBufferCharView#add */
(nitmethod_t)VIRTUAL_abstract_collection__SimpleCollection__add_all, /* pointer to string:FlatBufferCharView:abstract_collection#SimpleCollection#add_all */
(nitmethod_t)VIRTUAL_abstract_collection__Sequence__first_61d, /* pointer to string:FlatBufferCharView:abstract_collection#Sequence#first= */
(nitmethod_t)VIRTUAL_string__FlatBufferCharView__push, /* pointer to string:FlatBufferCharView:string#FlatBufferCharView#push */
(nitmethod_t)VIRTUAL_string__FlatBufferCharView__append, /* pointer to string:FlatBufferCharView:string#FlatBufferCharView#append */
(nitmethod_t)VIRTUAL_abstract_collection__Sequence__pop, /* pointer to string:FlatBufferCharView:abstract_collection#Sequence#pop */
(nitmethod_t)VIRTUAL_abstract_collection__Sequence__unshift, /* pointer to string:FlatBufferCharView:abstract_collection#Sequence#unshift */
(nitmethod_t)VIRTUAL_abstract_collection__Sequence__shift, /* pointer to string:FlatBufferCharView:abstract_collection#Sequence#shift */
(nitmethod_t)VIRTUAL_string__FlatBufferCharView___91d_93d_61d, /* pointer to string:FlatBufferCharView:string#FlatBufferCharView#[]= */
(nitmethod_t)VIRTUAL_abstract_collection__Sequence__remove_at, /* pointer to string:FlatBufferCharView:abstract_collection#Sequence#remove_at */
(nitmethod_t)VIRTUAL_string__FlatBufferCharView__enlarge, /* pointer to string:FlatBufferCharView:string#FlatBufferCharView#enlarge */
}
};
/* allocate FlatBufferCharView */
val* NEW_string__FlatBufferCharView(const struct type* type) {
val* self /* : FlatBufferCharView */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_string__FlatBufferCharView;
return self;
}
/* runtime class string__FlatBufferIterator */
const struct class class_string__FlatBufferIterator = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to string:FlatBufferIterator:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to string:FlatBufferIterator:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to string:FlatBufferIterator:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to string:FlatBufferIterator:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to string:FlatBufferIterator:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to string:FlatBufferIterator:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to string:FlatBufferIterator:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to string:FlatBufferIterator:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to string:FlatBufferIterator:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to string:FlatBufferIterator:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to string:FlatBufferIterator:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to string:FlatBufferIterator:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to string:FlatBufferIterator:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to string:FlatBufferIterator:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to string:FlatBufferIterator:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to string:FlatBufferIterator:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to string:FlatBufferIterator:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to string:FlatBufferIterator:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to string:FlatBufferIterator:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to string:FlatBufferIterator:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to string:FlatBufferIterator:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to string:FlatBufferIterator:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to string:FlatBufferIterator:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to string:FlatBufferIterator:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to string:FlatBufferIterator:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to string:FlatBufferIterator:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to string:FlatBufferIterator:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to string:FlatBufferIterator:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to string:FlatBufferIterator:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_string__FlatBufferIterator__item, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#item */
(nitmethod_t)VIRTUAL_string__FlatBufferIterator__next, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#next */
(nitmethod_t)VIRTUAL_string__FlatBufferIterator__is_ok, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#is_ok */
(nitmethod_t)VIRTUAL_abstract_collection__Iterator__iterator, /* pointer to string:FlatBufferIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)VIRTUAL_array__Iterator__to_a, /* pointer to string:FlatBufferIterator:array#Iterator#to_a */
(nitmethod_t)VIRTUAL_string__FlatBufferIterator__index, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#index */
(nitmethod_t)VIRTUAL_string__FlatBufferIterator__target, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#target */
(nitmethod_t)VIRTUAL_string__FlatBufferIterator__target_61d, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#target= */
(nitmethod_t)VIRTUAL_string__FlatBufferIterator__target_items, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#target_items */
(nitmethod_t)VIRTUAL_string__FlatBufferIterator__target_items_61d, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#target_items= */
(nitmethod_t)VIRTUAL_string__FlatBufferIterator__curr_pos, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#curr_pos */
(nitmethod_t)VIRTUAL_string__FlatBufferIterator__curr_pos_61d, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#curr_pos= */
(nitmethod_t)VIRTUAL_string__FlatBufferIterator__with_pos, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#with_pos */
}
};
/* allocate FlatBufferIterator */
val* NEW_string__FlatBufferIterator(const struct type* type) {
val* self /* : FlatBufferIterator */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_string__FlatBufferIterator;
return self;
}
/* runtime class string__NativeString */
const struct class class_string__NativeString = {
6, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to string:NativeString:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to string:NativeString:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to string:NativeString:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to string:NativeString:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to string:NativeString:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to string:NativeString:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to string:NativeString:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__NativeString__to_s, /* pointer to string:NativeString:string#NativeString#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to string:NativeString:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to string:NativeString:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to string:NativeString:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to string:NativeString:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to string:NativeString:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to string:NativeString:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to string:NativeString:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to string:NativeString:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to string:NativeString:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to string:NativeString:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to string:NativeString:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to string:NativeString:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to string:NativeString:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to string:NativeString:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to string:NativeString:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to string:NativeString:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to string:NativeString:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to string:NativeString:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to string:NativeString:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to string:NativeString:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to string:NativeString:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_kernel__Pointer__address_is_null, /* pointer to string:NativeString:kernel#Pointer#address_is_null */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_string__StringCapable__calloc_string, /* pointer to string:NativeString:string#StringCapable#calloc_string */
(nitmethod_t)VIRTUAL_string__NativeString___91d_93d, /* pointer to string:NativeString:string#NativeString#[] */
(nitmethod_t)VIRTUAL_string__NativeString___91d_93d_61d, /* pointer to string:NativeString:string#NativeString#[]= */
(nitmethod_t)VIRTUAL_string__NativeString__copy_to, /* pointer to string:NativeString:string#NativeString#copy_to */
(nitmethod_t)VIRTUAL_string__NativeString__cstring_length, /* pointer to string:NativeString:string#NativeString#cstring_length */
(nitmethod_t)VIRTUAL_string__NativeString__atoi, /* pointer to string:NativeString:string#NativeString#atoi */
(nitmethod_t)VIRTUAL_string__NativeString__atof, /* pointer to string:NativeString:string#NativeString#atof */
(nitmethod_t)VIRTUAL_string__NativeString__to_s_with_length, /* pointer to string:NativeString:string#NativeString#to_s_with_length */
(nitmethod_t)VIRTUAL_string__NativeString__to_s_with_copy, /* pointer to string:NativeString:string#NativeString#to_s_with_copy */
(nitmethod_t)VIRTUAL_environ__NativeString__get_environ, /* pointer to string:NativeString:environ#NativeString#get_environ */
(nitmethod_t)VIRTUAL_exec__NativeString__system, /* pointer to string:NativeString:exec#NativeString#system */
(nitmethod_t)VIRTUAL_file__NativeString__file_exists, /* pointer to string:NativeString:file#NativeString#file_exists */
(nitmethod_t)VIRTUAL_file__NativeString__file_mkdir, /* pointer to string:NativeString:file#NativeString#file_mkdir */
(nitmethod_t)VIRTUAL_file__NativeString__file_realpath, /* pointer to string:NativeString:file#NativeString#file_realpath */
}
};
/* allocate NativeString */
val* BOX_string__NativeString(char* value) {
struct instance_kernel__Pointer*res = nit_alloc(sizeof(struct instance_kernel__Pointer));
res->type = &type_string__NativeString;
res->class = &class_string__NativeString;
res->value = value;
return (val*)res;
}
/* runtime class string__CachedAlphaComparator */
/* allocate CachedAlphaComparator */
val* NEW_string__CachedAlphaComparator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CachedAlphaComparator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class string__AlphaComparator */
/* allocate AlphaComparator */
val* NEW_string__AlphaComparator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AlphaComparator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class kernel__Sys */
const struct class class_kernel__Sys = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to kernel:Sys:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to kernel:Sys:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to kernel:Sys:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to kernel:Sys:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to kernel:Sys:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to kernel:Sys:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to kernel:Sys:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to kernel:Sys:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to kernel:Sys:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to kernel:Sys:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to kernel:Sys:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to kernel:Sys:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to kernel:Sys:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to kernel:Sys:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to kernel:Sys:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to kernel:Sys:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to kernel:Sys:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to kernel:Sys:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to kernel:Sys:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to kernel:Sys:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to kernel:Sys:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to kernel:Sys:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to kernel:Sys:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to kernel:Sys:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to kernel:Sys:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to kernel:Sys:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to kernel:Sys:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to kernel:Sys:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to kernel:Sys:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_abstract_compiler__Sys__main, /* pointer to kernel:Sys:abstract_compiler#Sys#main */
(nitmethod_t)VIRTUAL_kernel__Sys__errno, /* pointer to kernel:Sys:kernel#Sys#errno */
(nitmethod_t)VIRTUAL_kernel__Sys__init, /* pointer to kernel:Sys:kernel#Sys#init */
(nitmethod_t)VIRTUAL_string__Sys__program_args, /* pointer to kernel:Sys:string#Sys#program_args */
(nitmethod_t)VIRTUAL_string__Sys__program_name, /* pointer to kernel:Sys:string#Sys#program_name */
(nitmethod_t)VIRTUAL_string__Sys__init_args, /* pointer to kernel:Sys:string#Sys#init_args */
(nitmethod_t)VIRTUAL_string__Sys__native_argc, /* pointer to kernel:Sys:string#Sys#native_argc */
(nitmethod_t)VIRTUAL_string__Sys__native_argv, /* pointer to kernel:Sys:string#Sys#native_argv */
(nitmethod_t)VIRTUAL_exec__Sys__system, /* pointer to kernel:Sys:exec#Sys#system */
(nitmethod_t)VIRTUAL_file__Sys__stdout, /* pointer to kernel:Sys:file#Sys#stdout */
(nitmethod_t)VIRTUAL_file__Sys__stderr, /* pointer to kernel:Sys:file#Sys#stderr */
}
};
/* allocate Sys */
val* NEW_kernel__Sys(const struct type* type) {
val* self /* : Sys */;
val* var /* : Stdin */;
val* var1 /* : Stdout */;
val* var2 /* : Stderr */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_kernel__Sys;
var = NEW_file__Stdin(&type_file__Stdin);
{
file__Stdin__init(var); /* Direct call file#Stdin#init on <var:Stdin>*/
}
self->attrs[COLOR_file__Sys___stdin].val = var; /* _stdin on <self:Sys exact> */
var1 = NEW_file__Stdout(&type_file__Stdout);
{
file__Stdout__init(var1); /* Direct call file#Stdout#init on <var1:Stdout>*/
}
self->attrs[COLOR_file__Sys___stdout].val = var1; /* _stdout on <self:Sys exact> */
var2 = NEW_file__Stderr(&type_file__Stderr);
{
file__Stderr__init(var2); /* Direct call file#Stderr#init on <var2:Stderr>*/
}
self->attrs[COLOR_file__Sys___stderr].val = var2; /* _stderr on <self:Sys exact> */
return self;
}
/* runtime class kernel__Bool */
const struct class class_kernel__Bool = {
2, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Bool__object_id, /* pointer to kernel:Bool:kernel#Bool#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to kernel:Bool:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Bool___61d_61d, /* pointer to kernel:Bool:kernel#Bool#== */
(nitmethod_t)VIRTUAL_kernel__Bool___33d_61d, /* pointer to kernel:Bool:kernel#Bool#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to kernel:Bool:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to kernel:Bool:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Bool__hash, /* pointer to kernel:Bool:kernel#Bool#hash */
(nitmethod_t)VIRTUAL_string__Bool__to_s, /* pointer to kernel:Bool:string#Bool#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to kernel:Bool:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to kernel:Bool:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to kernel:Bool:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to kernel:Bool:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to kernel:Bool:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to kernel:Bool:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to kernel:Bool:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to kernel:Bool:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to kernel:Bool:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to kernel:Bool:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to kernel:Bool:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to kernel:Bool:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to kernel:Bool:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to kernel:Bool:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to kernel:Bool:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to kernel:Bool:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to kernel:Bool:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to kernel:Bool:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to kernel:Bool:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to kernel:Bool:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to kernel:Bool:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_kernel__Bool__to_i, /* pointer to kernel:Bool:kernel#Bool#to_i */
}
};
/* allocate Bool */
val* BOX_kernel__Bool(short int value) {
struct instance_kernel__Bool*res = nit_alloc(sizeof(struct instance_kernel__Bool));
res->type = &type_kernel__Bool;
res->class = &class_kernel__Bool;
res->value = value;
return (val*)res;
}
/* runtime class kernel__Float */
const struct class class_kernel__Float = {
4, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Float__object_id, /* pointer to kernel:Float:kernel#Float#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to kernel:Float:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to kernel:Float:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to kernel:Float:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to kernel:Float:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to kernel:Float:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to kernel:Float:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Float__to_s, /* pointer to kernel:Float:string#Float#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to kernel:Float:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to kernel:Float:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to kernel:Float:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to kernel:Float:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to kernel:Float:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to kernel:Float:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to kernel:Float:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to kernel:Float:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to kernel:Float:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to kernel:Float:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to kernel:Float:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to kernel:Float:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to kernel:Float:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to kernel:Float:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to kernel:Float:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to kernel:Float:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to kernel:Float:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to kernel:Float:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to kernel:Float:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to kernel:Float:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to kernel:Float:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_kernel__Float___60d, /* pointer to kernel:Float:kernel#Float#< */
(nitmethod_t)VIRTUAL_kernel__Float___60d_61d, /* pointer to kernel:Float:kernel#Float#<= */
(nitmethod_t)VIRTUAL_kernel__Float___62d_61d, /* pointer to kernel:Float:kernel#Float#>= */
(nitmethod_t)VIRTUAL_kernel__Float___62d, /* pointer to kernel:Float:kernel#Float#> */
(nitmethod_t)VIRTUAL_kernel__Comparable___60d_61d_62d, /* pointer to kernel:Float:kernel#Comparable#<=> */
NULL, /* empty */
(nitmethod_t)VIRTUAL_kernel__Float___43d, /* pointer to kernel:Float:kernel#Float#+ */
(nitmethod_t)VIRTUAL_kernel__Float___45d, /* pointer to kernel:Float:kernel#Float#- */
(nitmethod_t)VIRTUAL_kernel__Float__unary_32d_45d, /* pointer to kernel:Float:kernel#Float#unary - */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_kernel__Float___42d, /* pointer to kernel:Float:kernel#Float#* */
(nitmethod_t)VIRTUAL_kernel__Float___47d, /* pointer to kernel:Float:kernel#Float#/ */
(nitmethod_t)VIRTUAL_kernel__Float__to_i, /* pointer to kernel:Float:kernel#Float#to_i */
(nitmethod_t)VIRTUAL_kernel__Float__to_f, /* pointer to kernel:Float:kernel#Float#to_f */
(nitmethod_t)VIRTUAL_math__Float__is_nan, /* pointer to kernel:Float:math#Float#is_nan */
(nitmethod_t)VIRTUAL_math__Float__is_inf, /* pointer to kernel:Float:math#Float#is_inf */
(nitmethod_t)VIRTUAL_math__Float__is_inf_extern, /* pointer to kernel:Float:math#Float#is_inf_extern */
(nitmethod_t)VIRTUAL_string__Float__to_precision, /* pointer to kernel:Float:string#Float#to_precision */
}
};
/* allocate Float */
val* BOX_kernel__Float(double value) {
struct instance_kernel__Float*res = nit_alloc(sizeof(struct instance_kernel__Float));
res->type = &type_kernel__Float;
res->class = &class_kernel__Float;
res->value = value;
return (val*)res;
}
/* runtime class kernel__Int */
const struct class class_kernel__Int = {
1, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Int__object_id, /* pointer to kernel:Int:kernel#Int#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to kernel:Int:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Int___61d_61d, /* pointer to kernel:Int:kernel#Int#== */
(nitmethod_t)VIRTUAL_kernel__Int___33d_61d, /* pointer to kernel:Int:kernel#Int#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to kernel:Int:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to kernel:Int:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Int__hash, /* pointer to kernel:Int:kernel#Int#hash */
(nitmethod_t)VIRTUAL_string__Int__to_s, /* pointer to kernel:Int:string#Int#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to kernel:Int:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to kernel:Int:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to kernel:Int:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to kernel:Int:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to kernel:Int:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to kernel:Int:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to kernel:Int:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to kernel:Int:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to kernel:Int:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to kernel:Int:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to kernel:Int:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to kernel:Int:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to kernel:Int:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to kernel:Int:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to kernel:Int:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to kernel:Int:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to kernel:Int:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to kernel:Int:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to kernel:Int:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to kernel:Int:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to kernel:Int:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_kernel__Int___60d, /* pointer to kernel:Int:kernel#Int#< */
(nitmethod_t)VIRTUAL_kernel__Int___60d_61d, /* pointer to kernel:Int:kernel#Int#<= */
(nitmethod_t)VIRTUAL_kernel__Int___62d_61d, /* pointer to kernel:Int:kernel#Int#>= */
(nitmethod_t)VIRTUAL_kernel__Int___62d, /* pointer to kernel:Int:kernel#Int#> */
(nitmethod_t)VIRTUAL_kernel__Int___60d_61d_62d, /* pointer to kernel:Int:kernel#Int#<=> */
(nitmethod_t)VIRTUAL_kernel__Int__successor, /* pointer to kernel:Int:kernel#Int#successor */
(nitmethod_t)VIRTUAL_kernel__Int___43d, /* pointer to kernel:Int:kernel#Int#+ */
(nitmethod_t)VIRTUAL_kernel__Int___45d, /* pointer to kernel:Int:kernel#Int#- */
(nitmethod_t)VIRTUAL_kernel__Int__unary_32d_45d, /* pointer to kernel:Int:kernel#Int#unary - */
(nitmethod_t)VIRTUAL_kernel__Int__predecessor, /* pointer to kernel:Int:kernel#Int#predecessor */
(nitmethod_t)VIRTUAL_kernel__Int__distance, /* pointer to kernel:Int:kernel#Int#distance */
(nitmethod_t)VIRTUAL_kernel__Int___42d, /* pointer to kernel:Int:kernel#Int#* */
(nitmethod_t)VIRTUAL_kernel__Int___47d, /* pointer to kernel:Int:kernel#Int#/ */
(nitmethod_t)VIRTUAL_kernel__Int__to_i, /* pointer to kernel:Int:kernel#Int#to_i */
(nitmethod_t)VIRTUAL_kernel__Int__to_f, /* pointer to kernel:Int:kernel#Int#to_f */
(nitmethod_t)VIRTUAL_kernel__Int___37d, /* pointer to kernel:Int:kernel#Int#% */
(nitmethod_t)VIRTUAL_kernel__Int__lshift, /* pointer to kernel:Int:kernel#Int#lshift */
(nitmethod_t)VIRTUAL_kernel__Int__ascii, /* pointer to kernel:Int:kernel#Int#ascii */
(nitmethod_t)VIRTUAL_kernel__Int__digit_count, /* pointer to kernel:Int:kernel#Int#digit_count */
(nitmethod_t)VIRTUAL_kernel__Int__digit_count_base_95d10, /* pointer to kernel:Int:kernel#Int#digit_count_base_10 */
(nitmethod_t)VIRTUAL_kernel__Int__to_c, /* pointer to kernel:Int:kernel#Int#to_c */
(nitmethod_t)VIRTUAL_string__Int__strerror_ext, /* pointer to kernel:Int:string#Int#strerror_ext */
(nitmethod_t)VIRTUAL_string__Int__strerror, /* pointer to kernel:Int:string#Int#strerror */
(nitmethod_t)VIRTUAL_string__Int__fill_buffer, /* pointer to kernel:Int:string#Int#fill_buffer */
(nitmethod_t)VIRTUAL_string__Int__native_int_to_s, /* pointer to kernel:Int:string#Int#native_int_to_s */
(nitmethod_t)VIRTUAL_string__Int__to_hex, /* pointer to kernel:Int:string#Int#to_hex */
(nitmethod_t)VIRTUAL_string__Int__to_base, /* pointer to kernel:Int:string#Int#to_base */
}
};
/* allocate Int */
val* BOX_kernel__Int(long value) {
struct instance_kernel__Int*res = nit_alloc(sizeof(struct instance_kernel__Int));
res->type = &type_kernel__Int;
res->class = &class_kernel__Int;
res->value = value;
return (val*)res;
}
/* runtime class kernel__Char */
const struct class class_kernel__Char = {
3, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Char__object_id, /* pointer to kernel:Char:kernel#Char#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to kernel:Char:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Char___61d_61d, /* pointer to kernel:Char:kernel#Char#== */
(nitmethod_t)VIRTUAL_kernel__Char___33d_61d, /* pointer to kernel:Char:kernel#Char#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to kernel:Char:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to kernel:Char:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Char__hash, /* pointer to kernel:Char:kernel#Char#hash */
(nitmethod_t)VIRTUAL_string__Char__to_s, /* pointer to kernel:Char:string#Char#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to kernel:Char:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to kernel:Char:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to kernel:Char:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to kernel:Char:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to kernel:Char:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to kernel:Char:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to kernel:Char:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to kernel:Char:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to kernel:Char:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to kernel:Char:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to kernel:Char:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to kernel:Char:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to kernel:Char:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to kernel:Char:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to kernel:Char:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to kernel:Char:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to kernel:Char:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to kernel:Char:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to kernel:Char:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to kernel:Char:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to kernel:Char:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_kernel__Char___60d, /* pointer to kernel:Char:kernel#Char#< */
(nitmethod_t)VIRTUAL_kernel__Char___60d_61d, /* pointer to kernel:Char:kernel#Char#<= */
(nitmethod_t)VIRTUAL_kernel__Char___62d_61d, /* pointer to kernel:Char:kernel#Char#>= */
(nitmethod_t)VIRTUAL_kernel__Char___62d, /* pointer to kernel:Char:kernel#Char#> */
(nitmethod_t)VIRTUAL_kernel__Comparable___60d_61d_62d, /* pointer to kernel:Char:kernel#Comparable#<=> */
(nitmethod_t)VIRTUAL_kernel__Char__successor, /* pointer to kernel:Char:kernel#Char#successor */
(nitmethod_t)VIRTUAL_string_search__Char__search_index_in, /* pointer to kernel:Char:string_search#Char#search_index_in */
(nitmethod_t)VIRTUAL_string_search__Char__search_in, /* pointer to kernel:Char:string_search#Char#search_in */
(nitmethod_t)VIRTUAL_string_search__Pattern__split_in, /* pointer to kernel:Char:string_search#Pattern#split_in */
(nitmethod_t)VIRTUAL_kernel__Char__predecessor, /* pointer to kernel:Char:kernel#Char#predecessor */
(nitmethod_t)VIRTUAL_kernel__Char__distance, /* pointer to kernel:Char:kernel#Char#distance */
(nitmethod_t)VIRTUAL_kernel__Char__to_i, /* pointer to kernel:Char:kernel#Char#to_i */
(nitmethod_t)VIRTUAL_kernel__Char__ascii, /* pointer to kernel:Char:kernel#Char#ascii */
(nitmethod_t)VIRTUAL_kernel__Char__to_lower, /* pointer to kernel:Char:kernel#Char#to_lower */
(nitmethod_t)VIRTUAL_kernel__Char__is_digit, /* pointer to kernel:Char:kernel#Char#is_digit */
(nitmethod_t)VIRTUAL_kernel__Char__is_upper, /* pointer to kernel:Char:kernel#Char#is_upper */
}
};
/* allocate Char */
val* BOX_kernel__Char(char value) {
struct instance_kernel__Char*res = nit_alloc(sizeof(struct instance_kernel__Char));
res->type = &type_kernel__Char;
res->class = &class_kernel__Char;
res->value = value;
return (val*)res;
}
/* runtime class kernel__Pointer */
const struct class class_kernel__Pointer = {
6, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to kernel:Pointer:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to kernel:Pointer:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to kernel:Pointer:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to kernel:Pointer:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to kernel:Pointer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to kernel:Pointer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to kernel:Pointer:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to kernel:Pointer:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to kernel:Pointer:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to kernel:Pointer:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to kernel:Pointer:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to kernel:Pointer:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to kernel:Pointer:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to kernel:Pointer:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to kernel:Pointer:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to kernel:Pointer:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to kernel:Pointer:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to kernel:Pointer:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to kernel:Pointer:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to kernel:Pointer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to kernel:Pointer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to kernel:Pointer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to kernel:Pointer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to kernel:Pointer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to kernel:Pointer:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to kernel:Pointer:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to kernel:Pointer:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to kernel:Pointer:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to kernel:Pointer:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_kernel__Pointer__address_is_null, /* pointer to kernel:Pointer:kernel#Pointer#address_is_null */
}
};
/* allocate Pointer */
val* BOX_kernel__Pointer(void* value) {
struct instance_kernel__Pointer*res = nit_alloc(sizeof(struct instance_kernel__Pointer));
res->type = &type_kernel__Pointer;
res->class = &class_kernel__Pointer;
res->value = value;
return (val*)res;
}
/* runtime class collection__CircularQueue */
/* allocate CircularQueue[nullable Object] */
val* NEW_collection__CircularQueue(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CircularQueue is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class collection__CircularQueueIterator */
/* allocate CircularQueueIterator[nullable Object] */
val* NEW_collection__CircularQueueIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CircularQueueIterator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class collection__Stack */
/* allocate Stack[nullable Object] */
val* NEW_collection__Stack(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Stack is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class collection__ArrayHeap */
/* allocate ArrayHeap[nullable Object] */
val* NEW_collection__ArrayHeap(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ArrayHeap is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class collection__PriorityQueue */
/* allocate PriorityQueue[nullable Object] */
val* NEW_collection__PriorityQueue(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "PriorityQueue is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class abstract_collection__Container */
/* allocate Container[nullable Object] */
val* NEW_abstract_collection__Container(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Container is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class abstract_collection__ContainerIterator */
const struct class class_abstract_collection__ContainerIterator = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_collection:ContainerIterator:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to abstract_collection:ContainerIterator:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_collection:ContainerIterator:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_collection:ContainerIterator:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_collection:ContainerIterator:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_collection:ContainerIterator:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_collection:ContainerIterator:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to abstract_collection:ContainerIterator:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_collection:ContainerIterator:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_collection:ContainerIterator:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to abstract_collection:ContainerIterator:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_collection:ContainerIterator:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_collection:ContainerIterator:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to abstract_collection:ContainerIterator:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to abstract_collection:ContainerIterator:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to abstract_collection:ContainerIterator:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to abstract_collection:ContainerIterator:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to abstract_collection:ContainerIterator:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to abstract_collection:ContainerIterator:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to abstract_collection:ContainerIterator:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to abstract_collection:ContainerIterator:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to abstract_collection:ContainerIterator:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to abstract_collection:ContainerIterator:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to abstract_collection:ContainerIterator:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to abstract_collection:ContainerIterator:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to abstract_collection:ContainerIterator:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to abstract_collection:ContainerIterator:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to abstract_collection:ContainerIterator:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to abstract_collection:ContainerIterator:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_abstract_collection__ContainerIterator__item, /* pointer to abstract_collection:ContainerIterator:abstract_collection#ContainerIterator#item */
(nitmethod_t)VIRTUAL_abstract_collection__ContainerIterator__next, /* pointer to abstract_collection:ContainerIterator:abstract_collection#ContainerIterator#next */
(nitmethod_t)VIRTUAL_abstract_collection__ContainerIterator__is_ok, /* pointer to abstract_collection:ContainerIterator:abstract_collection#ContainerIterator#is_ok */
(nitmethod_t)VIRTUAL_abstract_collection__Iterator__iterator, /* pointer to abstract_collection:ContainerIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)VIRTUAL_array__Iterator__to_a, /* pointer to abstract_collection:ContainerIterator:array#Iterator#to_a */
(nitmethod_t)VIRTUAL_abstract_collection__ContainerIterator__init, /* pointer to abstract_collection:ContainerIterator:abstract_collection#ContainerIterator#init */
(nitmethod_t)VIRTUAL_abstract_collection__ContainerIterator__is_ok_61d, /* pointer to abstract_collection:ContainerIterator:abstract_collection#ContainerIterator#is_ok= */
}
};
/* allocate ContainerIterator[nullable Object] */
val* NEW_abstract_collection__ContainerIterator(const struct type* type) {
val* self /* : ContainerIterator[nullable Object] */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_abstract_collection__ContainerIterator;
var = 1;
self->attrs[COLOR_abstract_collection__ContainerIterator___is_ok].s = var; /* _is_ok on <self:ContainerIterator[nullable Object] exact> */
return self;
}
/* runtime class abstract_collection__MapKeysIterator */
const struct class class_abstract_collection__MapKeysIterator = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_collection:MapKeysIterator:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to abstract_collection:MapKeysIterator:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_collection:MapKeysIterator:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_collection:MapKeysIterator:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_collection:MapKeysIterator:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_collection:MapKeysIterator:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_collection:MapKeysIterator:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to abstract_collection:MapKeysIterator:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_collection:MapKeysIterator:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_collection:MapKeysIterator:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to abstract_collection:MapKeysIterator:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_collection:MapKeysIterator:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_collection:MapKeysIterator:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to abstract_collection:MapKeysIterator:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to abstract_collection:MapKeysIterator:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to abstract_collection:MapKeysIterator:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to abstract_collection:MapKeysIterator:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to abstract_collection:MapKeysIterator:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to abstract_collection:MapKeysIterator:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to abstract_collection:MapKeysIterator:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to abstract_collection:MapKeysIterator:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to abstract_collection:MapKeysIterator:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to abstract_collection:MapKeysIterator:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to abstract_collection:MapKeysIterator:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to abstract_collection:MapKeysIterator:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to abstract_collection:MapKeysIterator:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to abstract_collection:MapKeysIterator:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to abstract_collection:MapKeysIterator:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to abstract_collection:MapKeysIterator:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_abstract_collection__MapKeysIterator__item, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#MapKeysIterator#item */
(nitmethod_t)VIRTUAL_abstract_collection__MapKeysIterator__next, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#MapKeysIterator#next */
(nitmethod_t)VIRTUAL_abstract_collection__MapKeysIterator__is_ok, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#MapKeysIterator#is_ok */
(nitmethod_t)VIRTUAL_abstract_collection__Iterator__iterator, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)VIRTUAL_array__Iterator__to_a, /* pointer to abstract_collection:MapKeysIterator:array#Iterator#to_a */
(nitmethod_t)VIRTUAL_abstract_collection__MapKeysIterator__original_iterator, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#MapKeysIterator#original_iterator */
(nitmethod_t)VIRTUAL_abstract_collection__MapKeysIterator__init, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#MapKeysIterator#init */
}
};
/* allocate MapKeysIterator[Object, nullable Object] */
val* NEW_abstract_collection__MapKeysIterator(const struct type* type) {
val* self /* : MapKeysIterator[Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_abstract_collection__MapKeysIterator;
return self;
}
/* runtime class abstract_collection__MapValuesIterator */
const struct class class_abstract_collection__MapValuesIterator = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_collection:MapValuesIterator:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to abstract_collection:MapValuesIterator:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_collection:MapValuesIterator:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_collection:MapValuesIterator:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_collection:MapValuesIterator:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_collection:MapValuesIterator:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_collection:MapValuesIterator:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to abstract_collection:MapValuesIterator:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_collection:MapValuesIterator:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_collection:MapValuesIterator:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to abstract_collection:MapValuesIterator:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_collection:MapValuesIterator:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_collection:MapValuesIterator:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to abstract_collection:MapValuesIterator:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to abstract_collection:MapValuesIterator:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to abstract_collection:MapValuesIterator:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to abstract_collection:MapValuesIterator:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to abstract_collection:MapValuesIterator:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to abstract_collection:MapValuesIterator:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to abstract_collection:MapValuesIterator:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to abstract_collection:MapValuesIterator:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to abstract_collection:MapValuesIterator:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to abstract_collection:MapValuesIterator:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to abstract_collection:MapValuesIterator:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to abstract_collection:MapValuesIterator:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to abstract_collection:MapValuesIterator:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to abstract_collection:MapValuesIterator:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to abstract_collection:MapValuesIterator:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to abstract_collection:MapValuesIterator:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_abstract_collection__MapValuesIterator__item, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#MapValuesIterator#item */
(nitmethod_t)VIRTUAL_abstract_collection__MapValuesIterator__next, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#MapValuesIterator#next */
(nitmethod_t)VIRTUAL_abstract_collection__MapValuesIterator__is_ok, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#MapValuesIterator#is_ok */
(nitmethod_t)VIRTUAL_abstract_collection__Iterator__iterator, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)VIRTUAL_array__Iterator__to_a, /* pointer to abstract_collection:MapValuesIterator:array#Iterator#to_a */
(nitmethod_t)VIRTUAL_abstract_collection__MapValuesIterator__original_iterator, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#MapValuesIterator#original_iterator */
(nitmethod_t)VIRTUAL_abstract_collection__MapValuesIterator__init, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#MapValuesIterator#init */
}
};
/* allocate MapValuesIterator[Object, nullable Object] */
val* NEW_abstract_collection__MapValuesIterator(const struct type* type) {
val* self /* : MapValuesIterator[Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_abstract_collection__MapValuesIterator;
return self;
}
/* runtime class abstract_collection__CoupleMapIterator */
const struct class class_abstract_collection__CoupleMapIterator = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_collection:CoupleMapIterator:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to abstract_collection:CoupleMapIterator:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_collection:CoupleMapIterator:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_collection:CoupleMapIterator:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_collection:CoupleMapIterator:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_collection:CoupleMapIterator:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_collection:CoupleMapIterator:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to abstract_collection:CoupleMapIterator:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_collection:CoupleMapIterator:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_collection:CoupleMapIterator:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to abstract_collection:CoupleMapIterator:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_collection:CoupleMapIterator:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_collection:CoupleMapIterator:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to abstract_collection:CoupleMapIterator:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to abstract_collection:CoupleMapIterator:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to abstract_collection:CoupleMapIterator:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to abstract_collection:CoupleMapIterator:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to abstract_collection:CoupleMapIterator:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to abstract_collection:CoupleMapIterator:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to abstract_collection:CoupleMapIterator:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to abstract_collection:CoupleMapIterator:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to abstract_collection:CoupleMapIterator:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to abstract_collection:CoupleMapIterator:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to abstract_collection:CoupleMapIterator:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to abstract_collection:CoupleMapIterator:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to abstract_collection:CoupleMapIterator:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to abstract_collection:CoupleMapIterator:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to abstract_collection:CoupleMapIterator:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to abstract_collection:CoupleMapIterator:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_abstract_collection__CoupleMapIterator__item, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection#CoupleMapIterator#item */
(nitmethod_t)VIRTUAL_abstract_collection__CoupleMapIterator__key, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection#CoupleMapIterator#key */
(nitmethod_t)VIRTUAL_abstract_collection__CoupleMapIterator__next, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection#CoupleMapIterator#next */
(nitmethod_t)VIRTUAL_abstract_collection__CoupleMapIterator__is_ok, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection#CoupleMapIterator#is_ok */
(nitmethod_t)VIRTUAL_abstract_collection__CoupleMapIterator__init, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection#CoupleMapIterator#init */
}
};
/* allocate CoupleMapIterator[Object, nullable Object] */
val* NEW_abstract_collection__CoupleMapIterator(const struct type* type) {
val* self /* : CoupleMapIterator[Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_abstract_collection__CoupleMapIterator;
return self;
}
/* runtime class abstract_collection__Couple */
const struct class class_abstract_collection__Couple = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_collection:Couple:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to abstract_collection:Couple:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_collection:Couple:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_collection:Couple:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_collection:Couple:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_collection:Couple:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_collection:Couple:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to abstract_collection:Couple:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_collection:Couple:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_collection:Couple:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to abstract_collection:Couple:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_collection:Couple:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_collection:Couple:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to abstract_collection:Couple:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to abstract_collection:Couple:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to abstract_collection:Couple:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to abstract_collection:Couple:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to abstract_collection:Couple:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to abstract_collection:Couple:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to abstract_collection:Couple:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to abstract_collection:Couple:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to abstract_collection:Couple:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to abstract_collection:Couple:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to abstract_collection:Couple:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to abstract_collection:Couple:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to abstract_collection:Couple:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to abstract_collection:Couple:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to abstract_collection:Couple:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to abstract_collection:Couple:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_abstract_collection__Couple__first, /* pointer to abstract_collection:Couple:abstract_collection#Couple#first */
(nitmethod_t)VIRTUAL_abstract_collection__Couple__first_61d, /* pointer to abstract_collection:Couple:abstract_collection#Couple#first= */
(nitmethod_t)VIRTUAL_abstract_collection__Couple__second, /* pointer to abstract_collection:Couple:abstract_collection#Couple#second */
(nitmethod_t)VIRTUAL_abstract_collection__Couple__second_61d, /* pointer to abstract_collection:Couple:abstract_collection#Couple#second= */
(nitmethod_t)VIRTUAL_abstract_collection__Couple__init, /* pointer to abstract_collection:Couple:abstract_collection#Couple#init */
}
};
/* allocate Couple[nullable Object, nullable Object] */
val* NEW_abstract_collection__Couple(const struct type* type) {
val* self /* : Couple[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_abstract_collection__Couple;
return self;
}
/* runtime class range__Range */
const struct class class_range__Range = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to range:Range:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to range:Range:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to range:Range:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to range:Range:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to range:Range:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to range:Range:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to range:Range:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Collection__to_s, /* pointer to range:Range:string#Collection#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to range:Range:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to range:Range:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to range:Range:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to range:Range:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to range:Range:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to range:Range:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to range:Range:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to range:Range:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to range:Range:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to range:Range:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to range:Range:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to range:Range:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to range:Range:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to range:Range:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to range:Range:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to range:Range:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to range:Range:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to range:Range:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to range:Range:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to range:Range:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to range:Range:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_range__Range__iterator, /* pointer to range:Range:range#Range#iterator */
(nitmethod_t)VIRTUAL_range__Range__is_empty, /* pointer to range:Range:range#Range#is_empty */
(nitmethod_t)VIRTUAL_range__Range__length, /* pointer to range:Range:range#Range#length */
(nitmethod_t)VIRTUAL_range__Range__has, /* pointer to range:Range:range#Range#has */
(nitmethod_t)VIRTUAL_range__Range__first, /* pointer to range:Range:range#Range#first */
NULL, /* empty */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__has_all, /* pointer to range:Range:abstract_collection#Collection#has_all */
(nitmethod_t)VIRTUAL_array__Collection__to_a, /* pointer to range:Range:array#Collection#to_a */
(nitmethod_t)VIRTUAL_string__Collection__join, /* pointer to range:Range:string#Collection#join */
(nitmethod_t)VIRTUAL_range__Range__first_61d, /* pointer to range:Range:range#Range#first= */
(nitmethod_t)VIRTUAL_range__Range__last, /* pointer to range:Range:range#Range#last */
(nitmethod_t)VIRTUAL_range__Range__last_61d, /* pointer to range:Range:range#Range#last= */
(nitmethod_t)VIRTUAL_range__Range__after, /* pointer to range:Range:range#Range#after */
(nitmethod_t)VIRTUAL_range__Range__after_61d, /* pointer to range:Range:range#Range#after= */
(nitmethod_t)VIRTUAL_range__Range__init, /* pointer to range:Range:range#Range#init */
(nitmethod_t)VIRTUAL_range__Range__without_last, /* pointer to range:Range:range#Range#without_last */
}
};
/* allocate Range[Discrete] */
val* NEW_range__Range(const struct type* type) {
val* self /* : Range[Discrete] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_range__Range;
return self;
}
/* runtime class range__IteratorRange */
const struct class class_range__IteratorRange = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to range:IteratorRange:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to range:IteratorRange:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to range:IteratorRange:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to range:IteratorRange:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to range:IteratorRange:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to range:IteratorRange:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to range:IteratorRange:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to range:IteratorRange:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to range:IteratorRange:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to range:IteratorRange:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to range:IteratorRange:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to range:IteratorRange:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to range:IteratorRange:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to range:IteratorRange:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to range:IteratorRange:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to range:IteratorRange:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to range:IteratorRange:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to range:IteratorRange:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to range:IteratorRange:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to range:IteratorRange:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to range:IteratorRange:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to range:IteratorRange:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to range:IteratorRange:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to range:IteratorRange:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to range:IteratorRange:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to range:IteratorRange:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to range:IteratorRange:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to range:IteratorRange:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to range:IteratorRange:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_range__IteratorRange__item, /* pointer to range:IteratorRange:range#IteratorRange#item */
(nitmethod_t)VIRTUAL_range__IteratorRange__next, /* pointer to range:IteratorRange:range#IteratorRange#next */
(nitmethod_t)VIRTUAL_range__IteratorRange__is_ok, /* pointer to range:IteratorRange:range#IteratorRange#is_ok */
(nitmethod_t)VIRTUAL_abstract_collection__Iterator__iterator, /* pointer to range:IteratorRange:abstract_collection#Iterator#iterator */
(nitmethod_t)VIRTUAL_array__Iterator__to_a, /* pointer to range:IteratorRange:array#Iterator#to_a */
(nitmethod_t)VIRTUAL_range__IteratorRange__init, /* pointer to range:IteratorRange:range#IteratorRange#init */
}
};
/* allocate IteratorRange[Discrete] */
val* NEW_range__IteratorRange(const struct type* type) {
val* self /* : IteratorRange[Discrete] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_range__IteratorRange;
return self;
}
/* runtime class list__List */
const struct class class_list__List = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to list:List:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to list:List:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead___61d_61d, /* pointer to list:List:abstract_collection#SequenceRead#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to list:List:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to list:List:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to list:List:kernel#Object#sys */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__hash, /* pointer to list:List:abstract_collection#SequenceRead#hash */
(nitmethod_t)VIRTUAL_string__Collection__to_s, /* pointer to list:List:string#Collection#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to list:List:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to list:List:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to list:List:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to list:List:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to list:List:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to list:List:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to list:List:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to list:List:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to list:List:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to list:List:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to list:List:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to list:List:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to list:List:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to list:List:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to list:List:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to list:List:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to list:List:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to list:List:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to list:List:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to list:List:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to list:List:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_list__List__iterator, /* pointer to list:List:list#List#iterator */
(nitmethod_t)VIRTUAL_list__List__is_empty, /* pointer to list:List:list#List#is_empty */
(nitmethod_t)VIRTUAL_list__List__length, /* pointer to list:List:list#List#length */
(nitmethod_t)VIRTUAL_list__List__has, /* pointer to list:List:list#List#has */
(nitmethod_t)VIRTUAL_list__List__first, /* pointer to list:List:list#List#first */
NULL, /* empty */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__has_all, /* pointer to list:List:abstract_collection#Collection#has_all */
(nitmethod_t)VIRTUAL_array__Collection__to_a, /* pointer to list:List:array#Collection#to_a */
(nitmethod_t)VIRTUAL_string__Collection__join, /* pointer to list:List:string#Collection#join */
NULL, /* empty */
(nitmethod_t)VIRTUAL_list__List___91d_93d, /* pointer to list:List:list#List#[] */
(nitmethod_t)VIRTUAL_list__List__last, /* pointer to list:List:list#List#last */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__index_of, /* pointer to list:List:abstract_collection#SequenceRead#index_of */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__last_index_of, /* pointer to list:List:abstract_collection#SequenceRead#last_index_of */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__index_of_from, /* pointer to list:List:abstract_collection#SequenceRead#index_of_from */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__last_index_of_from, /* pointer to list:List:abstract_collection#SequenceRead#last_index_of_from */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__iterator_from, /* pointer to list:List:abstract_collection#SequenceRead#iterator_from */
(nitmethod_t)VIRTUAL_list__List__clear, /* pointer to list:List:list#List#clear */
(nitmethod_t)VIRTUAL_list__List__remove, /* pointer to list:List:list#List#remove */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_abstract_collection__Sequence__add, /* pointer to list:List:abstract_collection#Sequence#add */
(nitmethod_t)VIRTUAL_abstract_collection__SimpleCollection__add_all, /* pointer to list:List:abstract_collection#SimpleCollection#add_all */
(nitmethod_t)VIRTUAL_list__List__first_61d, /* pointer to list:List:list#List#first= */
(nitmethod_t)VIRTUAL_list__List__push, /* pointer to list:List:list#List#push */
(nitmethod_t)VIRTUAL_abstract_collection__Sequence__append, /* pointer to list:List:abstract_collection#Sequence#append */
(nitmethod_t)VIRTUAL_list__List__pop, /* pointer to list:List:list#List#pop */
(nitmethod_t)VIRTUAL_list__List__unshift, /* pointer to list:List:list#List#unshift */
(nitmethod_t)VIRTUAL_list__List__shift, /* pointer to list:List:list#List#shift */
(nitmethod_t)VIRTUAL_list__List___91d_93d_61d, /* pointer to list:List:list#List#[]= */
(nitmethod_t)VIRTUAL_list__List__remove_at, /* pointer to list:List:list#List#remove_at */
(nitmethod_t)VIRTUAL_list__List__init, /* pointer to list:List:list#List#init */
(nitmethod_t)VIRTUAL_list__List__get_node, /* pointer to list:List:list#List#get_node */
(nitmethod_t)VIRTUAL_list__List__search_node_after, /* pointer to list:List:list#List#search_node_after */
(nitmethod_t)VIRTUAL_list__List__remove_node, /* pointer to list:List:list#List#remove_node */
}
};
/* allocate List[nullable Object] */
val* NEW_list__List(const struct type* type) {
val* self /* : List[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_list__List;
return self;
}
/* runtime class list__ListIterator */
const struct class class_list__ListIterator = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to list:ListIterator:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to list:ListIterator:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to list:ListIterator:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to list:ListIterator:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to list:ListIterator:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to list:ListIterator:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to list:ListIterator:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to list:ListIterator:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to list:ListIterator:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to list:ListIterator:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to list:ListIterator:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to list:ListIterator:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to list:ListIterator:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to list:ListIterator:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to list:ListIterator:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to list:ListIterator:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to list:ListIterator:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to list:ListIterator:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to list:ListIterator:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to list:ListIterator:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to list:ListIterator:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to list:ListIterator:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to list:ListIterator:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to list:ListIterator:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to list:ListIterator:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to list:ListIterator:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to list:ListIterator:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to list:ListIterator:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to list:ListIterator:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_list__ListIterator__item, /* pointer to list:ListIterator:list#ListIterator#item */
(nitmethod_t)VIRTUAL_list__ListIterator__next, /* pointer to list:ListIterator:list#ListIterator#next */
(nitmethod_t)VIRTUAL_list__ListIterator__is_ok, /* pointer to list:ListIterator:list#ListIterator#is_ok */
(nitmethod_t)VIRTUAL_abstract_collection__Iterator__iterator, /* pointer to list:ListIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)VIRTUAL_array__Iterator__to_a, /* pointer to list:ListIterator:array#Iterator#to_a */
(nitmethod_t)VIRTUAL_list__ListIterator__index, /* pointer to list:ListIterator:list#ListIterator#index */
(nitmethod_t)VIRTUAL_list__ListIterator__init, /* pointer to list:ListIterator:list#ListIterator#init */
}
};
/* allocate ListIterator[nullable Object] */
val* NEW_list__ListIterator(const struct type* type) {
val* self /* : ListIterator[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_list__ListIterator;
return self;
}
/* runtime class list__ListReverseIterator */
/* allocate ListReverseIterator[nullable Object] */
val* NEW_list__ListReverseIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ListReverseIterator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class list__ListNode */
const struct class class_list__ListNode = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to list:ListNode:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to list:ListNode:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to list:ListNode:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to list:ListNode:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to list:ListNode:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to list:ListNode:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to list:ListNode:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Collection__to_s, /* pointer to list:ListNode:string#Collection#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to list:ListNode:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to list:ListNode:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to list:ListNode:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to list:ListNode:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to list:ListNode:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to list:ListNode:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to list:ListNode:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to list:ListNode:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to list:ListNode:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to list:ListNode:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to list:ListNode:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to list:ListNode:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to list:ListNode:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to list:ListNode:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to list:ListNode:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to list:ListNode:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to list:ListNode:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to list:ListNode:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to list:ListNode:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to list:ListNode:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to list:ListNode:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_abstract_collection__Container__iterator, /* pointer to list:ListNode:abstract_collection#Container#iterator */
(nitmethod_t)VIRTUAL_abstract_collection__Container__is_empty, /* pointer to list:ListNode:abstract_collection#Container#is_empty */
(nitmethod_t)VIRTUAL_abstract_collection__Container__length, /* pointer to list:ListNode:abstract_collection#Container#length */
(nitmethod_t)VIRTUAL_abstract_collection__Container__has, /* pointer to list:ListNode:abstract_collection#Container#has */
(nitmethod_t)VIRTUAL_abstract_collection__Container__first, /* pointer to list:ListNode:abstract_collection#Container#first */
NULL, /* empty */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__has_all, /* pointer to list:ListNode:abstract_collection#Collection#has_all */
(nitmethod_t)VIRTUAL_array__Collection__to_a, /* pointer to list:ListNode:array#Collection#to_a */
(nitmethod_t)VIRTUAL_string__Collection__join, /* pointer to list:ListNode:string#Collection#join */
(nitmethod_t)VIRTUAL_abstract_collection__Container__init, /* pointer to list:ListNode:abstract_collection#Container#init */
(nitmethod_t)VIRTUAL_abstract_collection__Container__item, /* pointer to list:ListNode:abstract_collection#Container#item */
(nitmethod_t)VIRTUAL_abstract_collection__Container__item_61d, /* pointer to list:ListNode:abstract_collection#Container#item= */
(nitmethod_t)VIRTUAL_list__ListNode__init, /* pointer to list:ListNode:list#ListNode#init */
(nitmethod_t)VIRTUAL_list__ListNode__next, /* pointer to list:ListNode:list#ListNode#next */
(nitmethod_t)VIRTUAL_list__ListNode__next_61d, /* pointer to list:ListNode:list#ListNode#next= */
(nitmethod_t)VIRTUAL_list__ListNode__prev, /* pointer to list:ListNode:list#ListNode#prev */
(nitmethod_t)VIRTUAL_list__ListNode__prev_61d, /* pointer to list:ListNode:list#ListNode#prev= */
}
};
/* allocate ListNode[nullable Object] */
val* NEW_list__ListNode(const struct type* type) {
val* self /* : ListNode[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_list__ListNode;
return self;
}
/* runtime class array__Array */
const struct class class_array__Array = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to array:Array:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to array:Array:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead___61d_61d, /* pointer to array:Array:abstract_collection#SequenceRead#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to array:Array:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to array:Array:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to array:Array:kernel#Object#sys */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__hash, /* pointer to array:Array:abstract_collection#SequenceRead#hash */
(nitmethod_t)VIRTUAL_string__Array__to_s, /* pointer to array:Array:string#Array#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to array:Array:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to array:Array:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to array:Array:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to array:Array:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to array:Array:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to array:Array:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to array:Array:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to array:Array:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to array:Array:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to array:Array:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to array:Array:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to array:Array:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to array:Array:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to array:Array:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to array:Array:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to array:Array:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to array:Array:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to array:Array:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to array:Array:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to array:Array:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to array:Array:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_array__AbstractArrayRead__iterator, /* pointer to array:Array:array#AbstractArrayRead#iterator */
(nitmethod_t)VIRTUAL_array__AbstractArrayRead__is_empty, /* pointer to array:Array:array#AbstractArrayRead#is_empty */
(nitmethod_t)VIRTUAL_array__AbstractArrayRead__length, /* pointer to array:Array:array#AbstractArrayRead#length */
(nitmethod_t)VIRTUAL_array__AbstractArrayRead__has, /* pointer to array:Array:array#AbstractArrayRead#has */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__first, /* pointer to array:Array:abstract_collection#SequenceRead#first */
NULL, /* empty */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__has_all, /* pointer to array:Array:abstract_collection#Collection#has_all */
(nitmethod_t)VIRTUAL_array__Collection__to_a, /* pointer to array:Array:array#Collection#to_a */
(nitmethod_t)VIRTUAL_string__Collection__join, /* pointer to array:Array:string#Collection#join */
(nitmethod_t)VIRTUAL_array__ArrayCapable__calloc_array, /* pointer to array:Array:array#ArrayCapable#calloc_array */
(nitmethod_t)VIRTUAL_array__Array___91d_93d, /* pointer to array:Array:array#Array#[] */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__last, /* pointer to array:Array:abstract_collection#SequenceRead#last */
(nitmethod_t)VIRTUAL_array__AbstractArrayRead__index_of, /* pointer to array:Array:array#AbstractArrayRead#index_of */
(nitmethod_t)VIRTUAL_array__AbstractArrayRead__last_index_of, /* pointer to array:Array:array#AbstractArrayRead#last_index_of */
(nitmethod_t)VIRTUAL_array__AbstractArrayRead__index_of_from, /* pointer to array:Array:array#AbstractArrayRead#index_of_from */
(nitmethod_t)VIRTUAL_array__AbstractArrayRead__last_index_of_from, /* pointer to array:Array:array#AbstractArrayRead#last_index_of_from */
(nitmethod_t)VIRTUAL_abstract_collection__SequenceRead__iterator_from, /* pointer to array:Array:abstract_collection#SequenceRead#iterator_from */
(nitmethod_t)VIRTUAL_array__AbstractArray__clear, /* pointer to array:Array:array#AbstractArray#clear */
(nitmethod_t)VIRTUAL_array__AbstractArray__remove, /* pointer to array:Array:array#AbstractArray#remove */
(nitmethod_t)VIRTUAL_array__AbstractArrayRead__reversed, /* pointer to array:Array:array#AbstractArrayRead#reversed */
(nitmethod_t)VIRTUAL_array__AbstractArrayRead__init, /* pointer to array:Array:array#AbstractArrayRead#init */
NULL, /* empty */
(nitmethod_t)VIRTUAL_array__Array__add, /* pointer to array:Array:array#Array#add */
(nitmethod_t)VIRTUAL_abstract_collection__SimpleCollection__add_all, /* pointer to array:Array:abstract_collection#SimpleCollection#add_all */
(nitmethod_t)VIRTUAL_abstract_collection__Sequence__first_61d, /* pointer to array:Array:abstract_collection#Sequence#first= */
(nitmethod_t)VIRTUAL_array__AbstractArray__push, /* pointer to array:Array:array#AbstractArray#push */
(nitmethod_t)VIRTUAL_abstract_collection__Sequence__append, /* pointer to array:Array:abstract_collection#Sequence#append */
(nitmethod_t)VIRTUAL_array__AbstractArray__pop, /* pointer to array:Array:array#AbstractArray#pop */
(nitmethod_t)VIRTUAL_array__AbstractArray__unshift, /* pointer to array:Array:array#AbstractArray#unshift */
(nitmethod_t)VIRTUAL_array__AbstractArray__shift, /* pointer to array:Array:array#AbstractArray#shift */
(nitmethod_t)VIRTUAL_array__Array___91d_93d_61d, /* pointer to array:Array:array#Array#[]= */
(nitmethod_t)VIRTUAL_array__AbstractArray__remove_at, /* pointer to array:Array:array#AbstractArray#remove_at */
(nitmethod_t)VIRTUAL_array__Array__enlarge, /* pointer to array:Array:array#Array#enlarge */
(nitmethod_t)VIRTUAL_array__Array__init, /* pointer to array:Array:array#Array#init */
(nitmethod_t)VIRTUAL_array__Array__with_items, /* pointer to array:Array:array#Array#with_items */
(nitmethod_t)VIRTUAL_array__Array__with_capacity, /* pointer to array:Array:array#Array#with_capacity */
(nitmethod_t)VIRTUAL_array__Array__with_native, /* pointer to array:Array:array#Array#with_native */
}
};
/* allocate Array[nullable Object] */
val* NEW_array__Array(const struct type* type) {
val* self /* : Array[nullable Object] */;
long var /* : Int */;
val* var1 /* : null */;
long var2 /* : Int */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_array__Array;
var = 0;
self->attrs[COLOR_array__AbstractArrayRead___length].l = var; /* _length on <self:Array[nullable Object] exact> */
var1 = NULL;
self->attrs[COLOR_array__Array___items].val = var1; /* _items on <self:Array[nullable Object] exact> */
var2 = 0;
self->attrs[COLOR_array__Array___capacity].l = var2; /* _capacity on <self:Array[nullable Object] exact> */
return self;
}
/* runtime class array__ArrayIterator */
const struct class class_array__ArrayIterator = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to array:ArrayIterator:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to array:ArrayIterator:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to array:ArrayIterator:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to array:ArrayIterator:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to array:ArrayIterator:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to array:ArrayIterator:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to array:ArrayIterator:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to array:ArrayIterator:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to array:ArrayIterator:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to array:ArrayIterator:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to array:ArrayIterator:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to array:ArrayIterator:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to array:ArrayIterator:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to array:ArrayIterator:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to array:ArrayIterator:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to array:ArrayIterator:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to array:ArrayIterator:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to array:ArrayIterator:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to array:ArrayIterator:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to array:ArrayIterator:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to array:ArrayIterator:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to array:ArrayIterator:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to array:ArrayIterator:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to array:ArrayIterator:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to array:ArrayIterator:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to array:ArrayIterator:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to array:ArrayIterator:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to array:ArrayIterator:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to array:ArrayIterator:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_array__ArrayIterator__item, /* pointer to array:ArrayIterator:array#ArrayIterator#item */
(nitmethod_t)VIRTUAL_array__ArrayIterator__next, /* pointer to array:ArrayIterator:array#ArrayIterator#next */
(nitmethod_t)VIRTUAL_array__ArrayIterator__is_ok, /* pointer to array:ArrayIterator:array#ArrayIterator#is_ok */
(nitmethod_t)VIRTUAL_abstract_collection__Iterator__iterator, /* pointer to array:ArrayIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)VIRTUAL_array__Iterator__to_a, /* pointer to array:ArrayIterator:array#Iterator#to_a */
(nitmethod_t)VIRTUAL_array__ArrayIterator__index, /* pointer to array:ArrayIterator:array#ArrayIterator#index */
(nitmethod_t)VIRTUAL_array__ArrayIterator__init, /* pointer to array:ArrayIterator:array#ArrayIterator#init */
}
};
/* allocate ArrayIterator[nullable Object] */
val* NEW_array__ArrayIterator(const struct type* type) {
val* self /* : ArrayIterator[nullable Object] */;
long var /* : Int */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_array__ArrayIterator;
var = 0;
self->attrs[COLOR_array__ArrayIterator___index].l = var; /* _index on <self:ArrayIterator[nullable Object] exact> */
return self;
}
/* runtime class array__ArrayReverseIterator */
/* allocate ArrayReverseIterator[nullable Object] */
val* NEW_array__ArrayReverseIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ArrayReverseIterator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class array__ArraySet */
const struct class class_array__ArraySet = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to array:ArraySet:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to array:ArraySet:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_abstract_collection__Set___61d_61d, /* pointer to array:ArraySet:abstract_collection#Set#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to array:ArraySet:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to array:ArraySet:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to array:ArraySet:kernel#Object#sys */
(nitmethod_t)VIRTUAL_abstract_collection__Set__hash, /* pointer to array:ArraySet:abstract_collection#Set#hash */
(nitmethod_t)VIRTUAL_string__Collection__to_s, /* pointer to array:ArraySet:string#Collection#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to array:ArraySet:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to array:ArraySet:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to array:ArraySet:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to array:ArraySet:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to array:ArraySet:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to array:ArraySet:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to array:ArraySet:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to array:ArraySet:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to array:ArraySet:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to array:ArraySet:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to array:ArraySet:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to array:ArraySet:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to array:ArraySet:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to array:ArraySet:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to array:ArraySet:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to array:ArraySet:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to array:ArraySet:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to array:ArraySet:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to array:ArraySet:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to array:ArraySet:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to array:ArraySet:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_array__ArraySet__iterator, /* pointer to array:ArraySet:array#ArraySet#iterator */
(nitmethod_t)VIRTUAL_array__ArraySet__is_empty, /* pointer to array:ArraySet:array#ArraySet#is_empty */
(nitmethod_t)VIRTUAL_array__ArraySet__length, /* pointer to array:ArraySet:array#ArraySet#length */
(nitmethod_t)VIRTUAL_array__ArraySet__has, /* pointer to array:ArraySet:array#ArraySet#has */
(nitmethod_t)VIRTUAL_array__ArraySet__first, /* pointer to array:ArraySet:array#ArraySet#first */
NULL, /* empty */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__has_all, /* pointer to array:ArraySet:abstract_collection#Collection#has_all */
(nitmethod_t)VIRTUAL_array__Collection__to_a, /* pointer to array:ArraySet:array#Collection#to_a */
(nitmethod_t)VIRTUAL_string__Collection__join, /* pointer to array:ArraySet:string#Collection#join */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_array__ArraySet__clear, /* pointer to array:ArraySet:array#ArraySet#clear */
(nitmethod_t)VIRTUAL_array__ArraySet__remove, /* pointer to array:ArraySet:array#ArraySet#remove */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_array__ArraySet__add, /* pointer to array:ArraySet:array#ArraySet#add */
(nitmethod_t)VIRTUAL_abstract_collection__SimpleCollection__add_all, /* pointer to array:ArraySet:abstract_collection#SimpleCollection#add_all */
(nitmethod_t)VIRTUAL_array__ArraySet__remove_at, /* pointer to array:ArraySet:array#ArraySet#remove_at */
(nitmethod_t)VIRTUAL_array__ArraySet__init, /* pointer to array:ArraySet:array#ArraySet#init */
}
};
/* allocate ArraySet[Object] */
val* NEW_array__ArraySet(const struct type* type) {
val* self /* : ArraySet[Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_array__ArraySet;
return self;
}
/* runtime class array__ArraySetIterator */
const struct class class_array__ArraySetIterator = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to array:ArraySetIterator:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to array:ArraySetIterator:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to array:ArraySetIterator:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to array:ArraySetIterator:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to array:ArraySetIterator:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to array:ArraySetIterator:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to array:ArraySetIterator:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to array:ArraySetIterator:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to array:ArraySetIterator:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to array:ArraySetIterator:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to array:ArraySetIterator:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to array:ArraySetIterator:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to array:ArraySetIterator:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to array:ArraySetIterator:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to array:ArraySetIterator:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to array:ArraySetIterator:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to array:ArraySetIterator:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to array:ArraySetIterator:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to array:ArraySetIterator:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to array:ArraySetIterator:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to array:ArraySetIterator:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to array:ArraySetIterator:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to array:ArraySetIterator:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to array:ArraySetIterator:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to array:ArraySetIterator:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to array:ArraySetIterator:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to array:ArraySetIterator:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to array:ArraySetIterator:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to array:ArraySetIterator:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_array__ArraySetIterator__item, /* pointer to array:ArraySetIterator:array#ArraySetIterator#item */
(nitmethod_t)VIRTUAL_array__ArraySetIterator__next, /* pointer to array:ArraySetIterator:array#ArraySetIterator#next */
(nitmethod_t)VIRTUAL_array__ArraySetIterator__is_ok, /* pointer to array:ArraySetIterator:array#ArraySetIterator#is_ok */
(nitmethod_t)VIRTUAL_abstract_collection__Iterator__iterator, /* pointer to array:ArraySetIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)VIRTUAL_array__Iterator__to_a, /* pointer to array:ArraySetIterator:array#Iterator#to_a */
(nitmethod_t)VIRTUAL_array__ArraySetIterator__init, /* pointer to array:ArraySetIterator:array#ArraySetIterator#init */
}
};
/* allocate ArraySetIterator[Object] */
val* NEW_array__ArraySetIterator(const struct type* type) {
val* self /* : ArraySetIterator[Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_array__ArraySetIterator;
return self;
}
/* runtime class array__ArrayMap */
const struct class class_array__ArrayMap = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to array:ArrayMap:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to array:ArrayMap:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to array:ArrayMap:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to array:ArrayMap:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to array:ArrayMap:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to array:ArrayMap:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to array:ArrayMap:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to array:ArrayMap:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to array:ArrayMap:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to array:ArrayMap:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to array:ArrayMap:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to array:ArrayMap:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to array:ArrayMap:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to array:ArrayMap:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to array:ArrayMap:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to array:ArrayMap:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to array:ArrayMap:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to array:ArrayMap:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to array:ArrayMap:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to array:ArrayMap:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to array:ArrayMap:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to array:ArrayMap:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to array:ArrayMap:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to array:ArrayMap:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to array:ArrayMap:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to array:ArrayMap:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to array:ArrayMap:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to array:ArrayMap:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to array:ArrayMap:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_array__ArrayMap___91d_93d, /* pointer to array:ArrayMap:array#ArrayMap#[] */
(nitmethod_t)VIRTUAL_abstract_collection__MapRead__get_or_null, /* pointer to array:ArrayMap:abstract_collection#MapRead#get_or_null */
(nitmethod_t)VIRTUAL_abstract_collection__MapRead__has_key, /* pointer to array:ArrayMap:abstract_collection#MapRead#has_key */
(nitmethod_t)VIRTUAL_abstract_collection__CoupleMap__iterator, /* pointer to array:ArrayMap:abstract_collection#CoupleMap#iterator */
(nitmethod_t)VIRTUAL_array__ArrayMap__values, /* pointer to array:ArrayMap:array#ArrayMap#values */
(nitmethod_t)VIRTUAL_array__ArrayMap__keys, /* pointer to array:ArrayMap:array#ArrayMap#keys */
(nitmethod_t)VIRTUAL_array__ArrayMap__is_empty, /* pointer to array:ArrayMap:array#ArrayMap#is_empty */
(nitmethod_t)VIRTUAL_array__ArrayMap__length, /* pointer to array:ArrayMap:array#ArrayMap#length */
(nitmethod_t)VIRTUAL_abstract_collection__MapRead__provide_default_value, /* pointer to array:ArrayMap:abstract_collection#MapRead#provide_default_value */
NULL, /* empty */
(nitmethod_t)VIRTUAL_array__ArrayMap___91d_93d_61d, /* pointer to array:ArrayMap:array#ArrayMap#[]= */
(nitmethod_t)VIRTUAL_array__ArrayMap__clear, /* pointer to array:ArrayMap:array#ArrayMap#clear */
(nitmethod_t)VIRTUAL_array__ArrayMap__couple_iterator, /* pointer to array:ArrayMap:array#ArrayMap#couple_iterator */
(nitmethod_t)VIRTUAL_array__ArrayMap__remove_at_index, /* pointer to array:ArrayMap:array#ArrayMap#remove_at_index */
(nitmethod_t)VIRTUAL_array__ArrayMap__index, /* pointer to array:ArrayMap:array#ArrayMap#index */
(nitmethod_t)VIRTUAL_array__ArrayMap__init, /* pointer to array:ArrayMap:array#ArrayMap#init */
}
};
/* allocate ArrayMap[Object, nullable Object] */
val* NEW_array__ArrayMap(const struct type* type) {
val* self /* : ArrayMap[Object, nullable Object] */;
val* var /* : ArrayMapKeys[Object, nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var2 /* : ArrayMapValues[Object, nullable Object] */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const struct type* type_struct7;
const char* var_class_name8;
long var9 /* : Int */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_array__ArrayMap;
var = NEW_array__ArrayMapKeys(self->type->resolution_table->types[COLOR_array__ArrayMapKeysarray__ArrayMap_FT0array__ArrayMap_FT1]);
{
{ /* Inline array#ArrayMapKeys#init (var,self) on <var:ArrayMapKeys[Object, nullable Object]> */
/* Covariant cast for argument 0 (map) <self:ArrayMap[Object, nullable Object] exact> isa ArrayMap[ArrayMapKeys#0, ArrayMapKeys#1] */
/* <self:ArrayMap[Object, nullable Object] exact> isa ArrayMap[ArrayMapKeys#0, ArrayMapKeys#1] */
type_struct = var->type->resolution_table->types[COLOR_array__ArrayMaparray__ArrayMapKeys_FT0array__ArrayMapKeys_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ArrayMap[ArrayMapKeys#0, ArrayMapKeys#1]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/array.nit", 542);
show_backtrace(1);
}
var->attrs[COLOR_array__ArrayMapKeys___map].val = self; /* _map on <var:ArrayMapKeys[Object, nullable Object]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_array__ArrayMap___keys].val = var; /* _keys on <self:ArrayMap[Object, nullable Object] exact> */
var2 = NEW_array__ArrayMapValues(self->type->resolution_table->types[COLOR_array__ArrayMapValuesarray__ArrayMap_FT0array__ArrayMap_FT1]);
{
{ /* Inline array#ArrayMapValues#init (var2,self) on <var2:ArrayMapValues[Object, nullable Object]> */
/* Covariant cast for argument 0 (map) <self:ArrayMap[Object, nullable Object] exact> isa ArrayMap[ArrayMapValues#0, ArrayMapValues#1] */
/* <self:ArrayMap[Object, nullable Object] exact> isa ArrayMap[ArrayMapValues#0, ArrayMapValues#1] */
type_struct7 = var2->type->resolution_table->types[COLOR_array__ArrayMaparray__ArrayMapValues_FT0array__ArrayMapValues_FT1];
cltype5 = type_struct7->color;
idtype6 = type_struct7->id;
if(cltype5 >= self->type->table_size) {
var4 = 0;
} else {
var4 = self->type->type_table[cltype5] == idtype6;
}
if (unlikely(!var4)) {
var_class_name8 = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ArrayMap[ArrayMapValues#0, ArrayMapValues#1]", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/array.nit", 562);
show_backtrace(1);
}
var2->attrs[COLOR_array__ArrayMapValues___map].val = self; /* _map on <var2:ArrayMapValues[Object, nullable Object]> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_array__ArrayMap___values].val = var2; /* _values on <self:ArrayMap[Object, nullable Object] exact> */
var9 = 0;
self->attrs[COLOR_array__ArrayMap___last_index].l = var9; /* _last_index on <self:ArrayMap[Object, nullable Object] exact> */
return self;
}
/* runtime class array__ArrayMapKeys */
const struct class class_array__ArrayMapKeys = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to array:ArrayMapKeys:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to array:ArrayMapKeys:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to array:ArrayMapKeys:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to array:ArrayMapKeys:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to array:ArrayMapKeys:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to array:ArrayMapKeys:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to array:ArrayMapKeys:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Collection__to_s, /* pointer to array:ArrayMapKeys:string#Collection#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to array:ArrayMapKeys:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to array:ArrayMapKeys:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to array:ArrayMapKeys:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to array:ArrayMapKeys:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to array:ArrayMapKeys:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to array:ArrayMapKeys:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to array:ArrayMapKeys:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to array:ArrayMapKeys:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to array:ArrayMapKeys:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to array:ArrayMapKeys:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to array:ArrayMapKeys:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to array:ArrayMapKeys:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to array:ArrayMapKeys:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to array:ArrayMapKeys:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to array:ArrayMapKeys:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to array:ArrayMapKeys:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to array:ArrayMapKeys:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to array:ArrayMapKeys:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to array:ArrayMapKeys:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to array:ArrayMapKeys:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to array:ArrayMapKeys:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_array__ArrayMapKeys__iterator, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#iterator */
(nitmethod_t)VIRTUAL_array__ArrayMapKeys__is_empty, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#is_empty */
(nitmethod_t)VIRTUAL_array__ArrayMapKeys__length, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#length */
(nitmethod_t)VIRTUAL_array__ArrayMapKeys__has, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#has */
(nitmethod_t)VIRTUAL_array__ArrayMapKeys__first, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#first */
NULL, /* empty */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__has_all, /* pointer to array:ArrayMapKeys:abstract_collection#Collection#has_all */
(nitmethod_t)VIRTUAL_array__Collection__to_a, /* pointer to array:ArrayMapKeys:array#Collection#to_a */
(nitmethod_t)VIRTUAL_string__Collection__join, /* pointer to array:ArrayMapKeys:string#Collection#join */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_array__ArrayMapKeys__clear, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#clear */
(nitmethod_t)VIRTUAL_array__ArrayMapKeys__remove, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#remove */
(nitmethod_t)VIRTUAL_array__ArrayMapKeys__map, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#map */
(nitmethod_t)VIRTUAL_array__ArrayMapKeys__init, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#init */
}
};
/* allocate ArrayMapKeys[Object, nullable Object] */
val* NEW_array__ArrayMapKeys(const struct type* type) {
val* self /* : ArrayMapKeys[Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_array__ArrayMapKeys;
return self;
}
/* runtime class array__ArrayMapValues */
const struct class class_array__ArrayMapValues = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to array:ArrayMapValues:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to array:ArrayMapValues:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to array:ArrayMapValues:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to array:ArrayMapValues:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to array:ArrayMapValues:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to array:ArrayMapValues:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to array:ArrayMapValues:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Collection__to_s, /* pointer to array:ArrayMapValues:string#Collection#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to array:ArrayMapValues:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to array:ArrayMapValues:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to array:ArrayMapValues:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to array:ArrayMapValues:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to array:ArrayMapValues:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to array:ArrayMapValues:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to array:ArrayMapValues:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to array:ArrayMapValues:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to array:ArrayMapValues:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to array:ArrayMapValues:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to array:ArrayMapValues:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to array:ArrayMapValues:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to array:ArrayMapValues:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to array:ArrayMapValues:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to array:ArrayMapValues:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to array:ArrayMapValues:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to array:ArrayMapValues:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to array:ArrayMapValues:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to array:ArrayMapValues:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to array:ArrayMapValues:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to array:ArrayMapValues:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_array__ArrayMapValues__iterator, /* pointer to array:ArrayMapValues:array#ArrayMapValues#iterator */
(nitmethod_t)VIRTUAL_array__ArrayMapValues__is_empty, /* pointer to array:ArrayMapValues:array#ArrayMapValues#is_empty */
(nitmethod_t)VIRTUAL_array__ArrayMapValues__length, /* pointer to array:ArrayMapValues:array#ArrayMapValues#length */
(nitmethod_t)VIRTUAL_array__ArrayMapValues__has, /* pointer to array:ArrayMapValues:array#ArrayMapValues#has */
(nitmethod_t)VIRTUAL_array__ArrayMapValues__first, /* pointer to array:ArrayMapValues:array#ArrayMapValues#first */
NULL, /* empty */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__has_all, /* pointer to array:ArrayMapValues:abstract_collection#Collection#has_all */
(nitmethod_t)VIRTUAL_array__Collection__to_a, /* pointer to array:ArrayMapValues:array#Collection#to_a */
(nitmethod_t)VIRTUAL_string__Collection__join, /* pointer to array:ArrayMapValues:string#Collection#join */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_array__ArrayMapValues__clear, /* pointer to array:ArrayMapValues:array#ArrayMapValues#clear */
(nitmethod_t)VIRTUAL_array__ArrayMapValues__remove, /* pointer to array:ArrayMapValues:array#ArrayMapValues#remove */
(nitmethod_t)VIRTUAL_array__ArrayMapValues__map, /* pointer to array:ArrayMapValues:array#ArrayMapValues#map */
(nitmethod_t)VIRTUAL_array__ArrayMapValues__init, /* pointer to array:ArrayMapValues:array#ArrayMapValues#init */
}
};
/* allocate ArrayMapValues[Object, nullable Object] */
val* NEW_array__ArrayMapValues(const struct type* type) {
val* self /* : ArrayMapValues[Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_array__ArrayMapValues;
return self;
}
/* runtime class array__NativeArray */
const struct class class_array__NativeArray = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to array:NativeArray:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to array:NativeArray:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to array:NativeArray:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to array:NativeArray:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to array:NativeArray:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to array:NativeArray:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to array:NativeArray:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to array:NativeArray:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to array:NativeArray:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to array:NativeArray:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to array:NativeArray:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to array:NativeArray:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to array:NativeArray:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to array:NativeArray:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to array:NativeArray:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to array:NativeArray:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to array:NativeArray:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to array:NativeArray:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to array:NativeArray:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to array:NativeArray:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to array:NativeArray:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to array:NativeArray:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to array:NativeArray:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to array:NativeArray:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to array:NativeArray:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to array:NativeArray:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to array:NativeArray:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to array:NativeArray:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to array:NativeArray:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_array__NativeArray___91d_93d, /* pointer to array:NativeArray:array#NativeArray#[] */
(nitmethod_t)VIRTUAL_array__NativeArray___91d_93d_61d, /* pointer to array:NativeArray:array#NativeArray#[]= */
(nitmethod_t)VIRTUAL_array__NativeArray__copy_to, /* pointer to array:NativeArray:array#NativeArray#copy_to */
}
};
/* allocate NativeArray[nullable Object] */
val* NEW_array__NativeArray(int length, const struct type* type) {
struct instance_array__NativeArray *self;
self = nit_alloc(sizeof(struct instance_array__NativeArray) + length*sizeof(val*));
self->type = type;
self->class = &class_array__NativeArray;
self->length = length;
return (val*)self;
}
/* runtime class sorter__DefaultComparator */
/* allocate DefaultComparator[Comparable] */
val* NEW_sorter__DefaultComparator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "DefaultComparator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class sorter__ComparableSorter */
const struct class class_sorter__ComparableSorter = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to sorter:ComparableSorter:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to sorter:ComparableSorter:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to sorter:ComparableSorter:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to sorter:ComparableSorter:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to sorter:ComparableSorter:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to sorter:ComparableSorter:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to sorter:ComparableSorter:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to sorter:ComparableSorter:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to sorter:ComparableSorter:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to sorter:ComparableSorter:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to sorter:ComparableSorter:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to sorter:ComparableSorter:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to sorter:ComparableSorter:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to sorter:ComparableSorter:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to sorter:ComparableSorter:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to sorter:ComparableSorter:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to sorter:ComparableSorter:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to sorter:ComparableSorter:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to sorter:ComparableSorter:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to sorter:ComparableSorter:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to sorter:ComparableSorter:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to sorter:ComparableSorter:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to sorter:ComparableSorter:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to sorter:ComparableSorter:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to sorter:ComparableSorter:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to sorter:ComparableSorter:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to sorter:ComparableSorter:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to sorter:ComparableSorter:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to sorter:ComparableSorter:model#Object#extern_kind */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_sorter__DefaultComparator__compare, /* pointer to sorter:ComparableSorter:sorter#DefaultComparator#compare */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_sorter__Comparator__sort, /* pointer to sorter:ComparableSorter:sorter#Comparator#sort */
(nitmethod_t)VIRTUAL_sorter__Comparator__sub_sort, /* pointer to sorter:ComparableSorter:sorter#Comparator#sub_sort */
(nitmethod_t)VIRTUAL_sorter__Comparator__quick_sort, /* pointer to sorter:ComparableSorter:sorter#Comparator#quick_sort */
(nitmethod_t)VIRTUAL_sorter__Comparator__bubble_sort, /* pointer to sorter:ComparableSorter:sorter#Comparator#bubble_sort */
(nitmethod_t)VIRTUAL_sorter__DefaultComparator__init, /* pointer to sorter:ComparableSorter:sorter#DefaultComparator#init */
}
};
/* allocate ComparableSorter[Comparable] */
val* NEW_sorter__ComparableSorter(const struct type* type) {
val* self /* : ComparableSorter[Comparable] */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_sorter__ComparableSorter;
return self;
}
/* runtime class hash_collection__HashMap */
const struct class class_hash_collection__HashMap = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to hash_collection:HashMap:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to hash_collection:HashMap:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to hash_collection:HashMap:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to hash_collection:HashMap:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to hash_collection:HashMap:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to hash_collection:HashMap:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to hash_collection:HashMap:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to hash_collection:HashMap:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to hash_collection:HashMap:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to hash_collection:HashMap:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to hash_collection:HashMap:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to hash_collection:HashMap:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to hash_collection:HashMap:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to hash_collection:HashMap:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to hash_collection:HashMap:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to hash_collection:HashMap:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to hash_collection:HashMap:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to hash_collection:HashMap:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to hash_collection:HashMap:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to hash_collection:HashMap:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to hash_collection:HashMap:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to hash_collection:HashMap:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to hash_collection:HashMap:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to hash_collection:HashMap:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to hash_collection:HashMap:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to hash_collection:HashMap:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to hash_collection:HashMap:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to hash_collection:HashMap:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to hash_collection:HashMap:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_hash_collection__HashMap___91d_93d, /* pointer to hash_collection:HashMap:hash_collection#HashMap#[] */
(nitmethod_t)VIRTUAL_abstract_collection__MapRead__get_or_null, /* pointer to hash_collection:HashMap:abstract_collection#MapRead#get_or_null */
(nitmethod_t)VIRTUAL_abstract_collection__MapRead__has_key, /* pointer to hash_collection:HashMap:abstract_collection#MapRead#has_key */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__iterator, /* pointer to hash_collection:HashMap:hash_collection#HashMap#iterator */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__values, /* pointer to hash_collection:HashMap:hash_collection#HashMap#values */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__keys, /* pointer to hash_collection:HashMap:hash_collection#HashMap#keys */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__is_empty, /* pointer to hash_collection:HashMap:hash_collection#HashMap#is_empty */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__length, /* pointer to hash_collection:HashMap:hash_collection#HashMap#length */
(nitmethod_t)VIRTUAL_abstract_collection__MapRead__provide_default_value, /* pointer to hash_collection:HashMap:abstract_collection#MapRead#provide_default_value */
(nitmethod_t)VIRTUAL_array__ArrayCapable__calloc_array, /* pointer to hash_collection:HashMap:array#ArrayCapable#calloc_array */
(nitmethod_t)VIRTUAL_hash_collection__HashMap___91d_93d_61d, /* pointer to hash_collection:HashMap:hash_collection#HashMap#[]= */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__clear, /* pointer to hash_collection:HashMap:hash_collection#HashMap#clear */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__index_at, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#index_at */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__node_at, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#node_at */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__node_at_idx, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#node_at_idx */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__store, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#store */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__remove_node, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#remove_node */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__raz, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#raz */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__enlarge, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#enlarge */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__init, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#init */
(nitmethod_t)VIRTUAL_hash_collection__HashMap__init, /* pointer to hash_collection:HashMap:hash_collection#HashMap#init */
}
};
/* allocate HashMap[Object, nullable Object] */
val* NEW_hash_collection__HashMap(const struct type* type) {
val* self /* : HashMap[Object, nullable Object] */;
val* var /* : null */;
long var1 /* : Int */;
long var2 /* : Int */;
val* var3 /* : null */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : HashMapKeys[Object, nullable Object] */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var9 /* : HashMapValues[Object, nullable Object] */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const struct type* type_struct14;
const char* var_class_name15;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_hash_collection__HashMap;
var = NULL;
self->attrs[COLOR_hash_collection__HashCollection___array].val = var; /* _array on <self:HashMap[Object, nullable Object] exact> */
var1 = 0;
self->attrs[COLOR_hash_collection__HashCollection___capacity].l = var1; /* _capacity on <self:HashMap[Object, nullable Object] exact> */
var2 = 0;
self->attrs[COLOR_hash_collection__HashCollection___length].l = var2; /* _length on <self:HashMap[Object, nullable Object] exact> */
var3 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___first_item].val = var3; /* _first_item on <self:HashMap[Object, nullable Object] exact> */
var4 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_item].val = var4; /* _last_item on <self:HashMap[Object, nullable Object] exact> */
var5 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_key].val = var5; /* _last_accessed_key on <self:HashMap[Object, nullable Object] exact> */
var6 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_node].val = var6; /* _last_accessed_node on <self:HashMap[Object, nullable Object] exact> */
var7 = NEW_hash_collection__HashMapKeys(self->type->resolution_table->types[COLOR_hash_collection__HashMapKeyshash_collection__HashMap_FT0hash_collection__HashMap_FT1]);
{
{ /* Inline hash_collection#HashMapKeys#init (var7,self) on <var7:HashMapKeys[Object, nullable Object]> */
/* Covariant cast for argument 0 (map) <self:HashMap[Object, nullable Object] exact> isa HashMap[HashMapKeys#0, HashMapKeys#1] */
/* <self:HashMap[Object, nullable Object] exact> isa HashMap[HashMapKeys#0, HashMapKeys#1] */
type_struct = var7->type->resolution_table->types[COLOR_hash_collection__HashMaphash_collection__HashMapKeys_FT0hash_collection__HashMapKeys_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= self->type->table_size) {
var8 = 0;
} else {
var8 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var8)) {
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[HashMapKeys#0, HashMapKeys#1]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 249);
show_backtrace(1);
}
var7->attrs[COLOR_hash_collection__HashMapKeys___map].val = self; /* _map on <var7:HashMapKeys[Object, nullable Object]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_hash_collection__HashMap___keys].val = var7; /* _keys on <self:HashMap[Object, nullable Object] exact> */
var9 = NEW_hash_collection__HashMapValues(self->type->resolution_table->types[COLOR_hash_collection__HashMapValueshash_collection__HashMap_FT0hash_collection__HashMap_FT1]);
{
{ /* Inline hash_collection#HashMapValues#init (var9,self) on <var9:HashMapValues[Object, nullable Object]> */
/* Covariant cast for argument 0 (map) <self:HashMap[Object, nullable Object] exact> isa HashMap[HashMapValues#0, HashMapValues#1] */
/* <self:HashMap[Object, nullable Object] exact> isa HashMap[HashMapValues#0, HashMapValues#1] */
type_struct14 = var9->type->resolution_table->types[COLOR_hash_collection__HashMaphash_collection__HashMapValues_FT0hash_collection__HashMapValues_FT1];
cltype12 = type_struct14->color;
idtype13 = type_struct14->id;
if(cltype12 >= self->type->table_size) {
var11 = 0;
} else {
var11 = self->type->type_table[cltype12] == idtype13;
}
if (unlikely(!var11)) {
var_class_name15 = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap[HashMapValues#0, HashMapValues#1]", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 270);
show_backtrace(1);
}
var9->attrs[COLOR_hash_collection__HashMapValues___map].val = self; /* _map on <var9:HashMapValues[Object, nullable Object]> */
RET_LABEL10:(void)0;
}
}
self->attrs[COLOR_hash_collection__HashMap___values].val = var9; /* _values on <self:HashMap[Object, nullable Object] exact> */
return self;
}
/* runtime class hash_collection__HashMapKeys */
const struct class class_hash_collection__HashMapKeys = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to hash_collection:HashMapKeys:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to hash_collection:HashMapKeys:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to hash_collection:HashMapKeys:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to hash_collection:HashMapKeys:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to hash_collection:HashMapKeys:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to hash_collection:HashMapKeys:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to hash_collection:HashMapKeys:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Collection__to_s, /* pointer to hash_collection:HashMapKeys:string#Collection#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to hash_collection:HashMapKeys:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to hash_collection:HashMapKeys:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to hash_collection:HashMapKeys:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to hash_collection:HashMapKeys:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to hash_collection:HashMapKeys:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to hash_collection:HashMapKeys:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to hash_collection:HashMapKeys:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to hash_collection:HashMapKeys:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to hash_collection:HashMapKeys:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to hash_collection:HashMapKeys:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to hash_collection:HashMapKeys:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to hash_collection:HashMapKeys:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to hash_collection:HashMapKeys:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to hash_collection:HashMapKeys:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to hash_collection:HashMapKeys:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to hash_collection:HashMapKeys:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to hash_collection:HashMapKeys:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to hash_collection:HashMapKeys:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to hash_collection:HashMapKeys:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to hash_collection:HashMapKeys:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to hash_collection:HashMapKeys:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__iterator, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#iterator */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__is_empty, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#is_empty */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__length, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#length */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__has, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#has */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__first, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#first */
NULL, /* empty */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__has_all, /* pointer to hash_collection:HashMapKeys:abstract_collection#Collection#has_all */
(nitmethod_t)VIRTUAL_array__Collection__to_a, /* pointer to hash_collection:HashMapKeys:array#Collection#to_a */
(nitmethod_t)VIRTUAL_string__Collection__join, /* pointer to hash_collection:HashMapKeys:string#Collection#join */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__clear, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#clear */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__remove, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#remove */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__map, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#map */
(nitmethod_t)VIRTUAL_hash_collection__HashMapKeys__init, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#init */
}
};
/* allocate HashMapKeys[Object, nullable Object] */
val* NEW_hash_collection__HashMapKeys(const struct type* type) {
val* self /* : HashMapKeys[Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_hash_collection__HashMapKeys;
return self;
}
/* runtime class hash_collection__HashMapValues */
const struct class class_hash_collection__HashMapValues = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to hash_collection:HashMapValues:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to hash_collection:HashMapValues:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to hash_collection:HashMapValues:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to hash_collection:HashMapValues:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to hash_collection:HashMapValues:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to hash_collection:HashMapValues:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to hash_collection:HashMapValues:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Collection__to_s, /* pointer to hash_collection:HashMapValues:string#Collection#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to hash_collection:HashMapValues:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to hash_collection:HashMapValues:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to hash_collection:HashMapValues:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to hash_collection:HashMapValues:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to hash_collection:HashMapValues:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to hash_collection:HashMapValues:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to hash_collection:HashMapValues:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to hash_collection:HashMapValues:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to hash_collection:HashMapValues:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to hash_collection:HashMapValues:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to hash_collection:HashMapValues:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to hash_collection:HashMapValues:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to hash_collection:HashMapValues:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to hash_collection:HashMapValues:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to hash_collection:HashMapValues:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to hash_collection:HashMapValues:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to hash_collection:HashMapValues:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to hash_collection:HashMapValues:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to hash_collection:HashMapValues:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to hash_collection:HashMapValues:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to hash_collection:HashMapValues:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__iterator, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#iterator */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__is_empty, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#is_empty */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__length, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#length */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__has, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#has */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__first, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#first */
NULL, /* empty */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__has_all, /* pointer to hash_collection:HashMapValues:abstract_collection#Collection#has_all */
(nitmethod_t)VIRTUAL_array__Collection__to_a, /* pointer to hash_collection:HashMapValues:array#Collection#to_a */
(nitmethod_t)VIRTUAL_string__Collection__join, /* pointer to hash_collection:HashMapValues:string#Collection#join */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__clear, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#clear */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__remove, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#remove */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__map, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#map */
(nitmethod_t)VIRTUAL_hash_collection__HashMapValues__init, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#init */
}
};
/* allocate HashMapValues[Object, nullable Object] */
val* NEW_hash_collection__HashMapValues(const struct type* type) {
val* self /* : HashMapValues[Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_hash_collection__HashMapValues;
return self;
}
/* runtime class hash_collection__HashMapNode */
const struct class class_hash_collection__HashMapNode = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to hash_collection:HashMapNode:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to hash_collection:HashMapNode:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to hash_collection:HashMapNode:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to hash_collection:HashMapNode:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to hash_collection:HashMapNode:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to hash_collection:HashMapNode:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to hash_collection:HashMapNode:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to hash_collection:HashMapNode:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to hash_collection:HashMapNode:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to hash_collection:HashMapNode:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to hash_collection:HashMapNode:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to hash_collection:HashMapNode:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to hash_collection:HashMapNode:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to hash_collection:HashMapNode:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to hash_collection:HashMapNode:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to hash_collection:HashMapNode:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to hash_collection:HashMapNode:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to hash_collection:HashMapNode:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to hash_collection:HashMapNode:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to hash_collection:HashMapNode:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to hash_collection:HashMapNode:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to hash_collection:HashMapNode:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to hash_collection:HashMapNode:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to hash_collection:HashMapNode:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to hash_collection:HashMapNode:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to hash_collection:HashMapNode:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to hash_collection:HashMapNode:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to hash_collection:HashMapNode:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to hash_collection:HashMapNode:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_hash_collection__HashNode__init, /* pointer to hash_collection:HashMapNode:hash_collection#HashNode#init */
(nitmethod_t)VIRTUAL_hash_collection__HashMapNode__init, /* pointer to hash_collection:HashMapNode:hash_collection#HashMapNode#init */
}
};
/* allocate HashMapNode[Object, nullable Object] */
val* NEW_hash_collection__HashMapNode(const struct type* type) {
val* self /* : HashMapNode[Object, nullable Object] */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_hash_collection__HashMapNode;
var = NULL;
self->attrs[COLOR_hash_collection__HashNode___next_item].val = var; /* _next_item on <self:HashMapNode[Object, nullable Object] exact> */
var1 = NULL;
self->attrs[COLOR_hash_collection__HashNode___prev_item].val = var1; /* _prev_item on <self:HashMapNode[Object, nullable Object] exact> */
var2 = NULL;
self->attrs[COLOR_hash_collection__HashNode___prev_in_bucklet].val = var2; /* _prev_in_bucklet on <self:HashMapNode[Object, nullable Object] exact> */
var3 = NULL;
self->attrs[COLOR_hash_collection__HashNode___next_in_bucklet].val = var3; /* _next_in_bucklet on <self:HashMapNode[Object, nullable Object] exact> */
return self;
}
/* runtime class hash_collection__HashMapIterator */
const struct class class_hash_collection__HashMapIterator = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to hash_collection:HashMapIterator:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to hash_collection:HashMapIterator:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to hash_collection:HashMapIterator:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to hash_collection:HashMapIterator:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to hash_collection:HashMapIterator:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to hash_collection:HashMapIterator:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to hash_collection:HashMapIterator:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to hash_collection:HashMapIterator:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to hash_collection:HashMapIterator:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to hash_collection:HashMapIterator:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to hash_collection:HashMapIterator:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to hash_collection:HashMapIterator:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to hash_collection:HashMapIterator:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to hash_collection:HashMapIterator:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to hash_collection:HashMapIterator:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to hash_collection:HashMapIterator:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to hash_collection:HashMapIterator:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to hash_collection:HashMapIterator:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to hash_collection:HashMapIterator:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to hash_collection:HashMapIterator:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to hash_collection:HashMapIterator:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to hash_collection:HashMapIterator:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to hash_collection:HashMapIterator:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to hash_collection:HashMapIterator:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to hash_collection:HashMapIterator:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to hash_collection:HashMapIterator:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to hash_collection:HashMapIterator:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to hash_collection:HashMapIterator:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to hash_collection:HashMapIterator:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_hash_collection__HashMapIterator__item, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#item */
(nitmethod_t)VIRTUAL_hash_collection__HashMapIterator__key, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#key */
(nitmethod_t)VIRTUAL_hash_collection__HashMapIterator__next, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#next */
(nitmethod_t)VIRTUAL_hash_collection__HashMapIterator__is_ok, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#is_ok */
(nitmethod_t)VIRTUAL_hash_collection__HashMapIterator__init, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#init */
}
};
/* allocate HashMapIterator[Object, nullable Object] */
val* NEW_hash_collection__HashMapIterator(const struct type* type) {
val* self /* : HashMapIterator[Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_hash_collection__HashMapIterator;
return self;
}
/* runtime class hash_collection__HashSet */
const struct class class_hash_collection__HashSet = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to hash_collection:HashSet:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to hash_collection:HashSet:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_abstract_collection__Set___61d_61d, /* pointer to hash_collection:HashSet:abstract_collection#Set#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to hash_collection:HashSet:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to hash_collection:HashSet:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to hash_collection:HashSet:kernel#Object#sys */
(nitmethod_t)VIRTUAL_abstract_collection__Set__hash, /* pointer to hash_collection:HashSet:abstract_collection#Set#hash */
(nitmethod_t)VIRTUAL_string__Collection__to_s, /* pointer to hash_collection:HashSet:string#Collection#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to hash_collection:HashSet:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to hash_collection:HashSet:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to hash_collection:HashSet:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to hash_collection:HashSet:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to hash_collection:HashSet:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to hash_collection:HashSet:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to hash_collection:HashSet:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to hash_collection:HashSet:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to hash_collection:HashSet:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to hash_collection:HashSet:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to hash_collection:HashSet:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to hash_collection:HashSet:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to hash_collection:HashSet:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to hash_collection:HashSet:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to hash_collection:HashSet:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to hash_collection:HashSet:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to hash_collection:HashSet:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to hash_collection:HashSet:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to hash_collection:HashSet:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to hash_collection:HashSet:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to hash_collection:HashSet:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_hash_collection__HashSet__iterator, /* pointer to hash_collection:HashSet:hash_collection#HashSet#iterator */
(nitmethod_t)VIRTUAL_hash_collection__HashSet__is_empty, /* pointer to hash_collection:HashSet:hash_collection#HashSet#is_empty */
(nitmethod_t)VIRTUAL_hash_collection__HashSet__length, /* pointer to hash_collection:HashSet:hash_collection#HashSet#length */
(nitmethod_t)VIRTUAL_hash_collection__HashSet__has, /* pointer to hash_collection:HashSet:hash_collection#HashSet#has */
(nitmethod_t)VIRTUAL_hash_collection__HashSet__first, /* pointer to hash_collection:HashSet:hash_collection#HashSet#first */
NULL, /* empty */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__has_all, /* pointer to hash_collection:HashSet:abstract_collection#Collection#has_all */
(nitmethod_t)VIRTUAL_array__Collection__to_a, /* pointer to hash_collection:HashSet:array#Collection#to_a */
(nitmethod_t)VIRTUAL_string__Collection__join, /* pointer to hash_collection:HashSet:string#Collection#join */
(nitmethod_t)VIRTUAL_array__ArrayCapable__calloc_array, /* pointer to hash_collection:HashSet:array#ArrayCapable#calloc_array */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__index_at, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#index_at */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__node_at, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#node_at */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__node_at_idx, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#node_at_idx */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__store, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#store */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__remove_node, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#remove_node */
(nitmethod_t)VIRTUAL_hash_collection__HashSet__clear, /* pointer to hash_collection:HashSet:hash_collection#HashSet#clear */
(nitmethod_t)VIRTUAL_hash_collection__HashSet__remove, /* pointer to hash_collection:HashSet:hash_collection#HashSet#remove */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__raz, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#raz */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__enlarge, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#enlarge */
(nitmethod_t)VIRTUAL_hash_collection__HashCollection__init, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#init */
(nitmethod_t)VIRTUAL_hash_collection__HashSet__add, /* pointer to hash_collection:HashSet:hash_collection#HashSet#add */
(nitmethod_t)VIRTUAL_abstract_collection__SimpleCollection__add_all, /* pointer to hash_collection:HashSet:abstract_collection#SimpleCollection#add_all */
(nitmethod_t)VIRTUAL_hash_collection__HashSet__init, /* pointer to hash_collection:HashSet:hash_collection#HashSet#init */
(nitmethod_t)VIRTUAL_hash_collection__HashSet__from, /* pointer to hash_collection:HashSet:hash_collection#HashSet#from */
}
};
/* allocate HashSet[Object] */
val* NEW_hash_collection__HashSet(const struct type* type) {
val* self /* : HashSet[Object] */;
val* var /* : null */;
long var1 /* : Int */;
long var2 /* : Int */;
val* var3 /* : null */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_hash_collection__HashSet;
var = NULL;
self->attrs[COLOR_hash_collection__HashCollection___array].val = var; /* _array on <self:HashSet[Object] exact> */
var1 = 0;
self->attrs[COLOR_hash_collection__HashCollection___capacity].l = var1; /* _capacity on <self:HashSet[Object] exact> */
var2 = 0;
self->attrs[COLOR_hash_collection__HashCollection___length].l = var2; /* _length on <self:HashSet[Object] exact> */
var3 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___first_item].val = var3; /* _first_item on <self:HashSet[Object] exact> */
var4 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_item].val = var4; /* _last_item on <self:HashSet[Object] exact> */
var5 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_key].val = var5; /* _last_accessed_key on <self:HashSet[Object] exact> */
var6 = NULL;
self->attrs[COLOR_hash_collection__HashCollection___last_accessed_node].val = var6; /* _last_accessed_node on <self:HashSet[Object] exact> */
return self;
}
/* runtime class hash_collection__HashSetNode */
const struct class class_hash_collection__HashSetNode = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to hash_collection:HashSetNode:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to hash_collection:HashSetNode:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to hash_collection:HashSetNode:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to hash_collection:HashSetNode:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to hash_collection:HashSetNode:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to hash_collection:HashSetNode:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to hash_collection:HashSetNode:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to hash_collection:HashSetNode:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to hash_collection:HashSetNode:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to hash_collection:HashSetNode:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to hash_collection:HashSetNode:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to hash_collection:HashSetNode:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to hash_collection:HashSetNode:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to hash_collection:HashSetNode:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to hash_collection:HashSetNode:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to hash_collection:HashSetNode:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to hash_collection:HashSetNode:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to hash_collection:HashSetNode:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to hash_collection:HashSetNode:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to hash_collection:HashSetNode:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to hash_collection:HashSetNode:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to hash_collection:HashSetNode:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to hash_collection:HashSetNode:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to hash_collection:HashSetNode:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to hash_collection:HashSetNode:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to hash_collection:HashSetNode:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to hash_collection:HashSetNode:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to hash_collection:HashSetNode:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to hash_collection:HashSetNode:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_hash_collection__HashNode__init, /* pointer to hash_collection:HashSetNode:hash_collection#HashNode#init */
(nitmethod_t)VIRTUAL_hash_collection__HashSetNode__init, /* pointer to hash_collection:HashSetNode:hash_collection#HashSetNode#init */
}
};
/* allocate HashSetNode[Object] */
val* NEW_hash_collection__HashSetNode(const struct type* type) {
val* self /* : HashSetNode[Object] */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_hash_collection__HashSetNode;
var = NULL;
self->attrs[COLOR_hash_collection__HashNode___next_item].val = var; /* _next_item on <self:HashSetNode[Object] exact> */
var1 = NULL;
self->attrs[COLOR_hash_collection__HashNode___prev_item].val = var1; /* _prev_item on <self:HashSetNode[Object] exact> */
var2 = NULL;
self->attrs[COLOR_hash_collection__HashNode___prev_in_bucklet].val = var2; /* _prev_in_bucklet on <self:HashSetNode[Object] exact> */
var3 = NULL;
self->attrs[COLOR_hash_collection__HashNode___next_in_bucklet].val = var3; /* _next_in_bucklet on <self:HashSetNode[Object] exact> */
return self;
}
/* runtime class hash_collection__HashSetIterator */
const struct class class_hash_collection__HashSetIterator = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to hash_collection:HashSetIterator:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to hash_collection:HashSetIterator:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to hash_collection:HashSetIterator:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to hash_collection:HashSetIterator:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to hash_collection:HashSetIterator:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to hash_collection:HashSetIterator:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to hash_collection:HashSetIterator:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to hash_collection:HashSetIterator:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to hash_collection:HashSetIterator:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to hash_collection:HashSetIterator:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to hash_collection:HashSetIterator:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to hash_collection:HashSetIterator:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to hash_collection:HashSetIterator:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to hash_collection:HashSetIterator:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to hash_collection:HashSetIterator:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to hash_collection:HashSetIterator:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to hash_collection:HashSetIterator:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to hash_collection:HashSetIterator:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to hash_collection:HashSetIterator:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to hash_collection:HashSetIterator:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to hash_collection:HashSetIterator:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to hash_collection:HashSetIterator:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to hash_collection:HashSetIterator:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to hash_collection:HashSetIterator:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to hash_collection:HashSetIterator:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to hash_collection:HashSetIterator:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to hash_collection:HashSetIterator:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to hash_collection:HashSetIterator:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to hash_collection:HashSetIterator:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_hash_collection__HashSetIterator__item, /* pointer to hash_collection:HashSetIterator:hash_collection#HashSetIterator#item */
(nitmethod_t)VIRTUAL_hash_collection__HashSetIterator__next, /* pointer to hash_collection:HashSetIterator:hash_collection#HashSetIterator#next */
(nitmethod_t)VIRTUAL_hash_collection__HashSetIterator__is_ok, /* pointer to hash_collection:HashSetIterator:hash_collection#HashSetIterator#is_ok */
(nitmethod_t)VIRTUAL_abstract_collection__Iterator__iterator, /* pointer to hash_collection:HashSetIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)VIRTUAL_array__Iterator__to_a, /* pointer to hash_collection:HashSetIterator:array#Iterator#to_a */
(nitmethod_t)VIRTUAL_hash_collection__HashSetIterator__init, /* pointer to hash_collection:HashSetIterator:hash_collection#HashSetIterator#init */
}
};
/* allocate HashSetIterator[Object] */
val* NEW_hash_collection__HashSetIterator(const struct type* type) {
val* self /* : HashSetIterator[Object] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_hash_collection__HashSetIterator;
return self;
}
/* runtime class union_find__DisjointSet */
/* allocate DisjointSet[Object] */
val* NEW_union_find__DisjointSet(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "DisjointSet is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class union_find__DisjointSetNode */
/* allocate DisjointSetNode */
val* NEW_union_find__DisjointSetNode(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "DisjointSetNode is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class time__TimeT */
const struct class class_time__TimeT = {
6, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to time:TimeT:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to time:TimeT:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to time:TimeT:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to time:TimeT:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to time:TimeT:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to time:TimeT:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to time:TimeT:kernel#Object#hash */
NULL, /* DEAD time:TimeT:time#TimeT#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to time:TimeT:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to time:TimeT:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to time:TimeT:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to time:TimeT:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to time:TimeT:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to time:TimeT:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to time:TimeT:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to time:TimeT:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to time:TimeT:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to time:TimeT:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to time:TimeT:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to time:TimeT:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to time:TimeT:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to time:TimeT:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to time:TimeT:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to time:TimeT:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to time:TimeT:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to time:TimeT:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to time:TimeT:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to time:TimeT:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to time:TimeT:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_kernel__Pointer__address_is_null, /* pointer to time:TimeT:kernel#Pointer#address_is_null */
}
};
/* runtime class time__Tm */
const struct class class_time__Tm = {
6, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to time:Tm:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to time:Tm:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to time:Tm:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to time:Tm:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to time:Tm:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to time:Tm:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to time:Tm:kernel#Object#hash */
NULL, /* DEAD time:Tm:time#Tm#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to time:Tm:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to time:Tm:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to time:Tm:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to time:Tm:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to time:Tm:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to time:Tm:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to time:Tm:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to time:Tm:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to time:Tm:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to time:Tm:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to time:Tm:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to time:Tm:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to time:Tm:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to time:Tm:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to time:Tm:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to time:Tm:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to time:Tm:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to time:Tm:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to time:Tm:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to time:Tm:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to time:Tm:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_kernel__Pointer__address_is_null, /* pointer to time:Tm:kernel#Pointer#address_is_null */
}
};
/* runtime class string_search__BM_Pattern */
/* allocate BM_Pattern */
val* NEW_string_search__BM_Pattern(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "BM_Pattern is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class string_search__Match */
const struct class class_string_search__Match = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to string_search:Match:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to string_search:Match:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to string_search:Match:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to string_search:Match:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to string_search:Match:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to string_search:Match:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to string_search:Match:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string_search__Match__to_s, /* pointer to string_search:Match:string_search#Match#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to string_search:Match:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to string_search:Match:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to string_search:Match:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to string_search:Match:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to string_search:Match:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to string_search:Match:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to string_search:Match:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to string_search:Match:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to string_search:Match:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to string_search:Match:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to string_search:Match:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to string_search:Match:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to string_search:Match:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to string_search:Match:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to string_search:Match:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to string_search:Match:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to string_search:Match:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to string_search:Match:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to string_search:Match:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to string_search:Match:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to string_search:Match:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_string_search__Match__string, /* pointer to string_search:Match:string_search#Match#string */
(nitmethod_t)VIRTUAL_string_search__Match__string_61d, /* pointer to string_search:Match:string_search#Match#string= */
(nitmethod_t)VIRTUAL_string_search__Match__from, /* pointer to string_search:Match:string_search#Match#from */
(nitmethod_t)VIRTUAL_string_search__Match__from_61d, /* pointer to string_search:Match:string_search#Match#from= */
(nitmethod_t)VIRTUAL_string_search__Match__length, /* pointer to string_search:Match:string_search#Match#length */
(nitmethod_t)VIRTUAL_string_search__Match__length_61d, /* pointer to string_search:Match:string_search#Match#length= */
(nitmethod_t)VIRTUAL_string_search__Match__after, /* pointer to string_search:Match:string_search#Match#after */
(nitmethod_t)VIRTUAL_string_search__Match__init, /* pointer to string_search:Match:string_search#Match#init */
}
};
/* allocate Match */
val* NEW_string_search__Match(const struct type* type) {
val* self /* : Match */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_string_search__Match;
return self;
}
/* runtime class file__IFStream */
const struct class class_file__IFStream = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to file:IFStream:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to file:IFStream:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to file:IFStream:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to file:IFStream:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to file:IFStream:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to file:IFStream:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to file:IFStream:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to file:IFStream:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to file:IFStream:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to file:IFStream:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to file:IFStream:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to file:IFStream:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to file:IFStream:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to file:IFStream:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to file:IFStream:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to file:IFStream:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to file:IFStream:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to file:IFStream:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to file:IFStream:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to file:IFStream:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to file:IFStream:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to file:IFStream:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to file:IFStream:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to file:IFStream:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to file:IFStream:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to file:IFStream:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to file:IFStream:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to file:IFStream:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to file:IFStream:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_file__IFStream__close, /* pointer to file:IFStream:file#IFStream#close */
(nitmethod_t)VIRTUAL_file__FStream__path_61d, /* pointer to file:IFStream:file#FStream#path= */
(nitmethod_t)VIRTUAL_file__FStream__init, /* pointer to file:IFStream:file#FStream#init */
NULL, /* empty */
(nitmethod_t)VIRTUAL_stream__BufferedIStream__read, /* pointer to file:IFStream:stream#BufferedIStream#read */
(nitmethod_t)VIRTUAL_stream__IStream__read_line, /* pointer to file:IFStream:stream#IStream#read_line */
(nitmethod_t)VIRTUAL_stream__BufferedIStream__read_all, /* pointer to file:IFStream:stream#BufferedIStream#read_all */
(nitmethod_t)VIRTUAL_stream__BufferedIStream__append_line_to, /* pointer to file:IFStream:stream#BufferedIStream#append_line_to */
(nitmethod_t)VIRTUAL_stream__BufferedIStream__eof, /* pointer to file:IFStream:stream#BufferedIStream#eof */
(nitmethod_t)VIRTUAL_file__IFStream__fill_buffer, /* pointer to file:IFStream:file#IFStream#fill_buffer */
(nitmethod_t)VIRTUAL_file__IFStream__end_reached, /* pointer to file:IFStream:file#IFStream#end_reached */
(nitmethod_t)VIRTUAL_stream__BufferedIStream__prepare_buffer, /* pointer to file:IFStream:stream#BufferedIStream#prepare_buffer */
(nitmethod_t)VIRTUAL_stream__BufferedIStream__init, /* pointer to file:IFStream:stream#BufferedIStream#init */
(nitmethod_t)VIRTUAL_file__IFStream__end_reached_61d, /* pointer to file:IFStream:file#IFStream#end_reached= */
(nitmethod_t)VIRTUAL_file__IFStream__open, /* pointer to file:IFStream:file#IFStream#open */
(nitmethod_t)VIRTUAL_file__IFStream__init, /* pointer to file:IFStream:file#IFStream#init */
}
};
/* allocate IFStream */
val* NEW_file__IFStream(const struct type* type) {
val* self /* : IFStream */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
long var3 /* : Int */;
short int var4 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_file__IFStream;
var = NULL;
self->attrs[COLOR_file__FStream___path].val = var; /* _path on <self:IFStream exact> */
var1 = NULL;
self->attrs[COLOR_file__FStream___file].val = var1; /* _file on <self:IFStream exact> */
var2 = NULL;
self->attrs[COLOR_stream__BufferedIStream___buffer].val = var2; /* _buffer on <self:IFStream exact> */
var3 = 0;
self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l = var3; /* _buffer_pos on <self:IFStream exact> */
var4 = 0;
self->attrs[COLOR_file__IFStream___end_reached].s = var4; /* _end_reached on <self:IFStream exact> */
return self;
}
/* runtime class file__OFStream */
const struct class class_file__OFStream = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to file:OFStream:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to file:OFStream:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to file:OFStream:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to file:OFStream:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to file:OFStream:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to file:OFStream:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to file:OFStream:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to file:OFStream:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to file:OFStream:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to file:OFStream:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to file:OFStream:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to file:OFStream:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to file:OFStream:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to file:OFStream:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to file:OFStream:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to file:OFStream:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to file:OFStream:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to file:OFStream:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to file:OFStream:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to file:OFStream:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to file:OFStream:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to file:OFStream:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to file:OFStream:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to file:OFStream:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to file:OFStream:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to file:OFStream:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to file:OFStream:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to file:OFStream:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to file:OFStream:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_file__OFStream__close, /* pointer to file:OFStream:file#OFStream#close */
(nitmethod_t)VIRTUAL_file__FStream__path_61d, /* pointer to file:OFStream:file#FStream#path= */
(nitmethod_t)VIRTUAL_file__FStream__init, /* pointer to file:OFStream:file#FStream#init */
(nitmethod_t)VIRTUAL_file__OFStream__write, /* pointer to file:OFStream:file#OFStream#write */
(nitmethod_t)VIRTUAL_file__OFStream__write_native, /* pointer to file:OFStream:file#OFStream#write_native */
(nitmethod_t)VIRTUAL_file__OFStream__open, /* pointer to file:OFStream:file#OFStream#open */
(nitmethod_t)VIRTUAL_file__OFStream__init, /* pointer to file:OFStream:file#OFStream#init */
}
};
/* allocate OFStream */
val* NEW_file__OFStream(const struct type* type) {
val* self /* : OFStream */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_file__OFStream;
var = NULL;
self->attrs[COLOR_file__FStream___path].val = var; /* _path on <self:OFStream exact> */
var1 = NULL;
self->attrs[COLOR_file__FStream___file].val = var1; /* _file on <self:OFStream exact> */
return self;
}
/* runtime class file__Stdin */
const struct class class_file__Stdin = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to file:Stdin:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to file:Stdin:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to file:Stdin:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to file:Stdin:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to file:Stdin:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to file:Stdin:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to file:Stdin:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to file:Stdin:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to file:Stdin:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to file:Stdin:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to file:Stdin:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to file:Stdin:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to file:Stdin:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to file:Stdin:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to file:Stdin:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to file:Stdin:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to file:Stdin:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to file:Stdin:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to file:Stdin:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to file:Stdin:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to file:Stdin:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to file:Stdin:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to file:Stdin:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to file:Stdin:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to file:Stdin:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to file:Stdin:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to file:Stdin:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to file:Stdin:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to file:Stdin:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_file__IFStream__close, /* pointer to file:Stdin:file#IFStream#close */
(nitmethod_t)VIRTUAL_file__FStream__path_61d, /* pointer to file:Stdin:file#FStream#path= */
(nitmethod_t)VIRTUAL_file__FStream__init, /* pointer to file:Stdin:file#FStream#init */
NULL, /* empty */
(nitmethod_t)VIRTUAL_stream__BufferedIStream__read, /* pointer to file:Stdin:stream#BufferedIStream#read */
(nitmethod_t)VIRTUAL_stream__IStream__read_line, /* pointer to file:Stdin:stream#IStream#read_line */
(nitmethod_t)VIRTUAL_stream__BufferedIStream__read_all, /* pointer to file:Stdin:stream#BufferedIStream#read_all */
(nitmethod_t)VIRTUAL_stream__BufferedIStream__append_line_to, /* pointer to file:Stdin:stream#BufferedIStream#append_line_to */
(nitmethod_t)VIRTUAL_stream__BufferedIStream__eof, /* pointer to file:Stdin:stream#BufferedIStream#eof */
(nitmethod_t)VIRTUAL_file__IFStream__fill_buffer, /* pointer to file:Stdin:file#IFStream#fill_buffer */
(nitmethod_t)VIRTUAL_file__IFStream__end_reached, /* pointer to file:Stdin:file#IFStream#end_reached */
(nitmethod_t)VIRTUAL_stream__BufferedIStream__prepare_buffer, /* pointer to file:Stdin:stream#BufferedIStream#prepare_buffer */
(nitmethod_t)VIRTUAL_stream__BufferedIStream__init, /* pointer to file:Stdin:stream#BufferedIStream#init */
(nitmethod_t)VIRTUAL_file__IFStream__end_reached_61d, /* pointer to file:Stdin:file#IFStream#end_reached= */
(nitmethod_t)VIRTUAL_file__IFStream__open, /* pointer to file:Stdin:file#IFStream#open */
(nitmethod_t)VIRTUAL_file__IFStream__init, /* pointer to file:Stdin:file#IFStream#init */
(nitmethod_t)VIRTUAL_file__Stdin__init, /* pointer to file:Stdin:file#Stdin#init */
}
};
/* allocate Stdin */
val* NEW_file__Stdin(const struct type* type) {
val* self /* : Stdin */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
long var3 /* : Int */;
short int var4 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_file__Stdin;
var = NULL;
self->attrs[COLOR_file__FStream___path].val = var; /* _path on <self:Stdin exact> */
var1 = NULL;
self->attrs[COLOR_file__FStream___file].val = var1; /* _file on <self:Stdin exact> */
var2 = NULL;
self->attrs[COLOR_stream__BufferedIStream___buffer].val = var2; /* _buffer on <self:Stdin exact> */
var3 = 0;
self->attrs[COLOR_stream__BufferedIStream___buffer_pos].l = var3; /* _buffer_pos on <self:Stdin exact> */
var4 = 0;
self->attrs[COLOR_file__IFStream___end_reached].s = var4; /* _end_reached on <self:Stdin exact> */
return self;
}
/* runtime class file__Stdout */
const struct class class_file__Stdout = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to file:Stdout:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to file:Stdout:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to file:Stdout:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to file:Stdout:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to file:Stdout:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to file:Stdout:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to file:Stdout:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to file:Stdout:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to file:Stdout:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to file:Stdout:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to file:Stdout:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to file:Stdout:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to file:Stdout:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to file:Stdout:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to file:Stdout:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to file:Stdout:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to file:Stdout:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to file:Stdout:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to file:Stdout:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to file:Stdout:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to file:Stdout:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to file:Stdout:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to file:Stdout:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to file:Stdout:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to file:Stdout:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to file:Stdout:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to file:Stdout:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to file:Stdout:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to file:Stdout:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_file__OFStream__close, /* pointer to file:Stdout:file#OFStream#close */
(nitmethod_t)VIRTUAL_file__FStream__path_61d, /* pointer to file:Stdout:file#FStream#path= */
(nitmethod_t)VIRTUAL_file__FStream__init, /* pointer to file:Stdout:file#FStream#init */
(nitmethod_t)VIRTUAL_file__OFStream__write, /* pointer to file:Stdout:file#OFStream#write */
(nitmethod_t)VIRTUAL_file__OFStream__write_native, /* pointer to file:Stdout:file#OFStream#write_native */
(nitmethod_t)VIRTUAL_file__OFStream__open, /* pointer to file:Stdout:file#OFStream#open */
(nitmethod_t)VIRTUAL_file__OFStream__init, /* pointer to file:Stdout:file#OFStream#init */
(nitmethod_t)VIRTUAL_file__Stdout__init, /* pointer to file:Stdout:file#Stdout#init */
}
};
/* allocate Stdout */
val* NEW_file__Stdout(const struct type* type) {
val* self /* : Stdout */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_file__Stdout;
var = NULL;
self->attrs[COLOR_file__FStream___path].val = var; /* _path on <self:Stdout exact> */
var1 = NULL;
self->attrs[COLOR_file__FStream___file].val = var1; /* _file on <self:Stdout exact> */
return self;
}
/* runtime class file__Stderr */
const struct class class_file__Stderr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to file:Stderr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to file:Stderr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to file:Stderr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to file:Stderr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to file:Stderr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to file:Stderr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to file:Stderr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to file:Stderr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to file:Stderr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to file:Stderr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to file:Stderr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to file:Stderr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to file:Stderr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to file:Stderr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to file:Stderr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to file:Stderr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to file:Stderr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to file:Stderr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to file:Stderr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to file:Stderr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to file:Stderr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to file:Stderr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to file:Stderr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to file:Stderr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to file:Stderr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to file:Stderr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to file:Stderr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to file:Stderr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to file:Stderr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_file__OFStream__close, /* pointer to file:Stderr:file#OFStream#close */
(nitmethod_t)VIRTUAL_file__FStream__path_61d, /* pointer to file:Stderr:file#FStream#path= */
(nitmethod_t)VIRTUAL_file__FStream__init, /* pointer to file:Stderr:file#FStream#init */
(nitmethod_t)VIRTUAL_file__OFStream__write, /* pointer to file:Stderr:file#OFStream#write */
(nitmethod_t)VIRTUAL_file__OFStream__write_native, /* pointer to file:Stderr:file#OFStream#write_native */
(nitmethod_t)VIRTUAL_file__OFStream__open, /* pointer to file:Stderr:file#OFStream#open */
(nitmethod_t)VIRTUAL_file__OFStream__init, /* pointer to file:Stderr:file#OFStream#init */
(nitmethod_t)VIRTUAL_file__Stderr__init, /* pointer to file:Stderr:file#Stderr#init */
}
};
/* allocate Stderr */
val* NEW_file__Stderr(const struct type* type) {
val* self /* : Stderr */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_file__Stderr;
var = NULL;
self->attrs[COLOR_file__FStream___path].val = var; /* _path on <self:Stderr exact> */
var1 = NULL;
self->attrs[COLOR_file__FStream___file].val = var1; /* _file on <self:Stderr exact> */
return self;
}
/* runtime class file__FileStat */
const struct class class_file__FileStat = {
6, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to file:FileStat:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to file:FileStat:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to file:FileStat:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to file:FileStat:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to file:FileStat:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to file:FileStat:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to file:FileStat:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to file:FileStat:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to file:FileStat:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to file:FileStat:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to file:FileStat:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to file:FileStat:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to file:FileStat:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to file:FileStat:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to file:FileStat:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to file:FileStat:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to file:FileStat:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to file:FileStat:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to file:FileStat:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to file:FileStat:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to file:FileStat:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to file:FileStat:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to file:FileStat:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to file:FileStat:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to file:FileStat:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to file:FileStat:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to file:FileStat:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to file:FileStat:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to file:FileStat:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_kernel__Pointer__address_is_null, /* pointer to file:FileStat:kernel#Pointer#address_is_null */
}
};
/* runtime class file__NativeFile */
const struct class class_file__NativeFile = {
6, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to file:NativeFile:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to file:NativeFile:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to file:NativeFile:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to file:NativeFile:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to file:NativeFile:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to file:NativeFile:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to file:NativeFile:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to file:NativeFile:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to file:NativeFile:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to file:NativeFile:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to file:NativeFile:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to file:NativeFile:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to file:NativeFile:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to file:NativeFile:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to file:NativeFile:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to file:NativeFile:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to file:NativeFile:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to file:NativeFile:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to file:NativeFile:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to file:NativeFile:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to file:NativeFile:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to file:NativeFile:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to file:NativeFile:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to file:NativeFile:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to file:NativeFile:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to file:NativeFile:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to file:NativeFile:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to file:NativeFile:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to file:NativeFile:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_kernel__Pointer__address_is_null, /* pointer to file:NativeFile:kernel#Pointer#address_is_null */
(nitmethod_t)VIRTUAL_file__NativeFile__io_read, /* pointer to file:NativeFile:file#NativeFile#io_read */
(nitmethod_t)VIRTUAL_file__NativeFile__io_write, /* pointer to file:NativeFile:file#NativeFile#io_write */
(nitmethod_t)VIRTUAL_file__NativeFile__io_close, /* pointer to file:NativeFile:file#NativeFile#io_close */
(nitmethod_t)VIRTUAL_file__NativeFile__io_open_read, /* pointer to file:NativeFile:file#NativeFile#io_open_read */
(nitmethod_t)VIRTUAL_file__NativeFile__io_open_write, /* pointer to file:NativeFile:file#NativeFile#io_open_write */
(nitmethod_t)VIRTUAL_file__NativeFile__native_stdin, /* pointer to file:NativeFile:file#NativeFile#native_stdin */
(nitmethod_t)VIRTUAL_file__NativeFile__native_stdout, /* pointer to file:NativeFile:file#NativeFile#native_stdout */
(nitmethod_t)VIRTUAL_file__NativeFile__native_stderr, /* pointer to file:NativeFile:file#NativeFile#native_stderr */
}
};
/* allocate NativeFile */
val* BOX_file__NativeFile(void* value) {
struct instance_kernel__Pointer*res = nit_alloc(sizeof(struct instance_kernel__Pointer));
res->type = &type_file__NativeFile;
res->class = &class_file__NativeFile;
res->value = value;
return (val*)res;
}
/* runtime class stream__FDIStream */
/* allocate FDIStream */
val* NEW_stream__FDIStream(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "FDIStream is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class stream__FDOStream */
/* allocate FDOStream */
val* NEW_stream__FDOStream(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "FDOStream is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class stream__FDIOStream */
/* allocate FDIOStream */
val* NEW_stream__FDIOStream(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "FDIOStream is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class stream__StringOStream */
/* allocate StringOStream */
val* NEW_stream__StringOStream(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "StringOStream is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class ropes__Path */
/* allocate Path */
val* NEW_ropes__Path(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Path is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class ropes__PathElement */
/* allocate PathElement */
val* NEW_ropes__PathElement(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "PathElement is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class ropes__Concat */
/* allocate Concat */
val* NEW_ropes__Concat(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Concat is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class ropes__StringLeaf */
/* allocate StringLeaf */
val* NEW_ropes__StringLeaf(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "StringLeaf is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class ropes__RopeString */
/* allocate RopeString */
val* NEW_ropes__RopeString(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "RopeString is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class ropes__RopeStringChars */
/* allocate RopeStringChars */
val* NEW_ropes__RopeStringChars(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "RopeStringChars is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class ropes__IteratorElement */
/* allocate IteratorElement */
val* NEW_ropes__IteratorElement(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "IteratorElement is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class ropes__Postfix */
/* allocate Postfix */
val* NEW_ropes__Postfix(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Postfix is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class ropes__LeavesIterator */
/* allocate LeavesIterator */
val* NEW_ropes__LeavesIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "LeavesIterator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class ropes__SubstringsIterator */
/* allocate SubstringsIterator */
val* NEW_ropes__SubstringsIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "SubstringsIterator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class ropes__RopeCharIterator */
/* allocate RopeCharIterator */
val* NEW_ropes__RopeCharIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "RopeCharIterator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class ropes__ReversePostfix */
/* allocate ReversePostfix */
val* NEW_ropes__ReversePostfix(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ReversePostfix is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class ropes__ReverseLeavesIterator */
/* allocate ReverseLeavesIterator */
val* NEW_ropes__ReverseLeavesIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ReverseLeavesIterator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class ropes__ReverseSubstringsIterator */
/* allocate ReverseSubstringsIterator */
val* NEW_ropes__ReverseSubstringsIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ReverseSubstringsIterator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class ropes__ReverseRopeCharIterator */
/* allocate ReverseRopeCharIterator */
val* NEW_ropes__ReverseRopeCharIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ReverseRopeCharIterator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class exec__Process */
/* allocate Process */
val* NEW_exec__Process(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Process is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class exec__IProcess */
/* allocate IProcess */
val* NEW_exec__IProcess(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "IProcess is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class exec__OProcess */
/* allocate OProcess */
val* NEW_exec__OProcess(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "OProcess is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class exec__IOProcess */
/* allocate IOProcess */
val* NEW_exec__IOProcess(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "IOProcess is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class exec__NativeProcess */
const struct class class_exec__NativeProcess = {
6, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to exec:NativeProcess:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to exec:NativeProcess:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to exec:NativeProcess:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to exec:NativeProcess:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to exec:NativeProcess:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to exec:NativeProcess:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to exec:NativeProcess:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to exec:NativeProcess:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to exec:NativeProcess:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to exec:NativeProcess:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to exec:NativeProcess:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to exec:NativeProcess:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to exec:NativeProcess:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to exec:NativeProcess:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to exec:NativeProcess:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to exec:NativeProcess:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to exec:NativeProcess:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to exec:NativeProcess:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to exec:NativeProcess:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to exec:NativeProcess:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to exec:NativeProcess:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to exec:NativeProcess:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to exec:NativeProcess:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to exec:NativeProcess:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to exec:NativeProcess:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to exec:NativeProcess:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to exec:NativeProcess:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to exec:NativeProcess:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to exec:NativeProcess:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_kernel__Pointer__address_is_null, /* pointer to exec:NativeProcess:kernel#Pointer#address_is_null */
}
};
/* runtime class location__SourceFile */
const struct class class_location__SourceFile = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to location:SourceFile:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to location:SourceFile:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to location:SourceFile:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to location:SourceFile:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to location:SourceFile:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to location:SourceFile:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to location:SourceFile:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to location:SourceFile:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to location:SourceFile:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to location:SourceFile:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to location:SourceFile:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to location:SourceFile:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to location:SourceFile:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to location:SourceFile:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to location:SourceFile:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to location:SourceFile:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to location:SourceFile:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to location:SourceFile:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to location:SourceFile:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to location:SourceFile:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to location:SourceFile:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to location:SourceFile:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to location:SourceFile:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to location:SourceFile:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to location:SourceFile:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to location:SourceFile:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to location:SourceFile:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to location:SourceFile:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to location:SourceFile:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_location__SourceFile__filename, /* pointer to location:SourceFile:location#SourceFile#filename */
(nitmethod_t)VIRTUAL_location__SourceFile__filename_61d, /* pointer to location:SourceFile:location#SourceFile#filename= */
(nitmethod_t)VIRTUAL_location__SourceFile__string, /* pointer to location:SourceFile:location#SourceFile#string */
(nitmethod_t)VIRTUAL_location__SourceFile__string_61d, /* pointer to location:SourceFile:location#SourceFile#string= */
(nitmethod_t)VIRTUAL_location__SourceFile__init, /* pointer to location:SourceFile:location#SourceFile#init */
(nitmethod_t)VIRTUAL_location__SourceFile__line_starts, /* pointer to location:SourceFile:location#SourceFile#line_starts */
(nitmethod_t)VIRTUAL_parser_nodes__SourceFile__first_token_61d, /* pointer to location:SourceFile:parser_nodes#SourceFile#first_token= */
(nitmethod_t)VIRTUAL_parser_nodes__SourceFile__last_token_61d, /* pointer to location:SourceFile:parser_nodes#SourceFile#last_token= */
}
};
/* allocate SourceFile */
val* NEW_location__SourceFile(const struct type* type) {
val* self /* : SourceFile */;
val* var /* : Array[Int] */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_location__SourceFile;
var = NEW_array__Array(&type_array__Arraykernel__Int);
{
array__Array__init(var); /* Direct call array#Array#init on <var:Array[Int]>*/
}
self->attrs[COLOR_location__SourceFile___line_starts].val = var; /* _line_starts on <self:SourceFile exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__SourceFile___first_token].val = var1; /* _first_token on <self:SourceFile exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__SourceFile___last_token].val = var2; /* _last_token on <self:SourceFile exact> */
return self;
}
/* runtime class location__Location */
const struct class class_location__Location = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to location:Location:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to location:Location:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_location__Location___61d_61d, /* pointer to location:Location:location#Location#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to location:Location:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to location:Location:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to location:Location:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to location:Location:kernel#Object#hash */
(nitmethod_t)VIRTUAL_location__Location__to_s, /* pointer to location:Location:location#Location#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to location:Location:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to location:Location:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to location:Location:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to location:Location:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to location:Location:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to location:Location:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to location:Location:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to location:Location:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to location:Location:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to location:Location:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to location:Location:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to location:Location:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to location:Location:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to location:Location:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to location:Location:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to location:Location:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to location:Location:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to location:Location:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to location:Location:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to location:Location:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to location:Location:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_location__Location___60d, /* pointer to location:Location:location#Location#< */
(nitmethod_t)VIRTUAL_kernel__Comparable___60d_61d, /* pointer to location:Location:kernel#Comparable#<= */
(nitmethod_t)VIRTUAL_kernel__Comparable___62d_61d, /* pointer to location:Location:kernel#Comparable#>= */
(nitmethod_t)VIRTUAL_kernel__Comparable___62d, /* pointer to location:Location:kernel#Comparable#> */
(nitmethod_t)VIRTUAL_kernel__Comparable___60d_61d_62d, /* pointer to location:Location:kernel#Comparable#<=> */
(nitmethod_t)VIRTUAL_location__Location__file, /* pointer to location:Location:location#Location#file */
(nitmethod_t)VIRTUAL_location__Location__file_61d, /* pointer to location:Location:location#Location#file= */
(nitmethod_t)VIRTUAL_location__Location__line_start, /* pointer to location:Location:location#Location#line_start */
(nitmethod_t)VIRTUAL_location__Location__line_start_61d, /* pointer to location:Location:location#Location#line_start= */
(nitmethod_t)VIRTUAL_location__Location__line_end, /* pointer to location:Location:location#Location#line_end */
(nitmethod_t)VIRTUAL_location__Location__line_end_61d, /* pointer to location:Location:location#Location#line_end= */
(nitmethod_t)VIRTUAL_location__Location__column_start, /* pointer to location:Location:location#Location#column_start */
(nitmethod_t)VIRTUAL_location__Location__column_start_61d, /* pointer to location:Location:location#Location#column_start= */
(nitmethod_t)VIRTUAL_location__Location__column_end, /* pointer to location:Location:location#Location#column_end */
(nitmethod_t)VIRTUAL_location__Location__column_end_61d, /* pointer to location:Location:location#Location#column_end= */
(nitmethod_t)VIRTUAL_location__Location__init, /* pointer to location:Location:location#Location#init */
(nitmethod_t)VIRTUAL_location__Location__pstart, /* pointer to location:Location:location#Location#pstart */
(nitmethod_t)VIRTUAL_location__Location__pend, /* pointer to location:Location:location#Location#pend */
(nitmethod_t)VIRTUAL_location__Location__text, /* pointer to location:Location:location#Location#text */
(nitmethod_t)VIRTUAL_location__Location__text_cache, /* pointer to location:Location:location#Location#text_cache */
(nitmethod_t)VIRTUAL_location__Location__text_cache_61d, /* pointer to location:Location:location#Location#text_cache= */
(nitmethod_t)VIRTUAL_location__Location__located_in, /* pointer to location:Location:location#Location#located_in */
(nitmethod_t)VIRTUAL_location__Location__colored_line, /* pointer to location:Location:location#Location#colored_line */
}
};
/* allocate Location */
val* NEW_location__Location(const struct type* type) {
val* self /* : Location */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_location__Location;
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction0:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction0:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction0:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction0:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction0:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction0:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction0:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction0:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction0:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction1:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction1:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction1:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction1:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction1:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction1:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction1:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction1:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction1:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction2:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction2:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction2:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction2:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction2:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction2:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction2:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction2:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction2:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction3:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction3:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction3:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction3:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction3:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction3:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction3:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction3:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction3:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction4:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction4:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction4:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction4:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction4:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction4:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction4:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction4:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction4:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction5:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction5:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction5:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction5:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction5:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction5:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction5:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction5:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction5:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction6:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction6:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction6:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction6:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction6:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction6:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction6:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction6:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction6:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction7:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction7:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction7:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction7:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction7:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction7:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction7:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction7:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction7:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction8:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction8:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction8:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction8:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction8:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction8:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction8:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction8:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction8:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction9:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction9:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction9:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction9:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction9:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction9:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction9:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction9:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction9:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction10:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction10:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction10:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction10:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction10:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction10:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction10:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction10:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction10:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction11:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction11:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction11:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction11:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction11:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction11:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction11:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction11:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction11:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction12:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction12:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction12:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction12:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction12:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction12:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction12:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction12:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction12:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction13:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction13:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction13:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction13:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction13:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction13:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction13:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction13:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction13:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction14:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction14:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction14:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction14:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction14:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction14:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction14:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction14:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction14:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction15:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction15:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction15:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction15:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction15:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction15:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction15:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction15:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction15:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction16:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction16:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction16:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction16:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction16:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction16:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction16:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction16:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction16:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction17:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction17:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction17:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction17:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction17:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction17:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction17:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction17:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction17:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction18:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction18:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction18:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction18:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction18:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction18:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction18:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction18:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction18:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction19:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction19:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction19:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction19:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction19:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction19:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction19:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction19:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction19:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction20:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction20:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction20:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction20:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction20:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction20:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction20:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction20:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction20:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction21:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction21:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction21:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction21:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction21:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction21:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction21:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction21:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction21:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction22:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction22:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction22:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction22:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction22:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction22:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction22:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction22:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction22:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction23:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction23:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction23:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction23:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction23:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction23:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction23:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction23:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction23:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction24:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction24:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction24:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction24:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction24:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction24:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction24:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction24:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction24:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction26:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction26:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction26:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction26:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction26:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction26:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction26:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction26:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction26:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction27:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction27:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction27:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction27:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction27:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction27:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction27:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction27:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction27:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction28:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction28:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction28:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction28:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction28:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction28:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction28:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction28:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction28:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction29:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction29:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction29:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction29:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction29:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction29:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction29:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction29:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction29:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction30:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction30:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction30:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction30:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction30:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction30:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction30:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction30:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction30:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction31:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction31:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction31:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction31:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction31:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction31:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction31:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction31:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction31:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction32:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction32:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction32:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction32:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction32:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction32:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction32:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction32:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction32:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction33:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction33:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction33:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction33:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction33:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction33:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction33:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction33:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction33:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction34:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction34:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction34:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction34:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction34:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction34:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction34:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction34:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction34:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction35:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction35:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction35:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction35:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction35:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction35:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction35:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction35:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction35:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction36:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction36:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction36:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction36:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction36:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction36:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction36:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction36:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction36:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction37:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction37:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction37:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction37:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction37:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction37:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction37:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction37:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction37:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction38:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction38:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction38:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction38:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction38:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction38:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction38:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction38:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction38:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction39:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction39:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction39:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction39:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction39:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction39:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction39:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction39:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction39:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction40:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction40:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction40:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction40:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction40:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction40:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction40:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction40:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction40:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction41:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction41:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction41:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction41:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction41:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction41:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction41:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction41:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction41:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction43:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction43:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction43:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction43:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction43:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction43:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction43:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction43:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction43:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction44:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction44:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction44:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction44:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction44:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction44:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction44:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction44:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction44:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction45:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction45:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction45:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction45:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction45:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction45:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction45:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction45:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction45:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction46:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction46:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction46:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction46:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction46:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction46:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction46:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction46:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction46:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction47:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction47:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction47:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction47:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction47:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction47:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction47:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction47:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction47:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction48:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction48:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction48:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction48:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction48:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction48:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction48:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction48:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction48:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction49:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction49:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction49:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction49:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction49:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction49:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction49:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction49:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction49:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction50:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction50:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction50:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction50:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction50:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction50:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction50:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction50:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction50:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction51:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction51:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction51:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction51:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction51:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction51:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction51:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction51:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction51:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction52:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction52:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction52:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction52:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction52:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction52:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction52:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction52:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction52:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction53:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction53:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction53:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction53:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction53:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction53:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction53:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction53:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction53:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction54:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction54:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction54:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction54:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction54:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction54:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction54:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction54:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction54:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction55:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction55:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction55:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction55:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction55:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction55:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction55:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction55:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction55:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction56:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction56:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction56:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction56:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction56:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction56:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction56:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction56:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction56:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction57:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction57:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction57:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction57:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction57:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction57:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction57:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction57:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction57:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction58:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction58:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction58:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction58:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction58:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction58:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction58:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction58:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction58:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction59:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction59:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction59:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction59:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction59:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction59:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction59:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction59:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction59:model_base#Object#none_visibility */
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
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser:ReduceAction60:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser:ReduceAction60:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser:ReduceAction60:kernel#Object#hash */
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
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser:ReduceAction60:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser:ReduceAction60:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser:ReduceAction60:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser:ReduceAction60:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser:ReduceAction60:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser:ReduceAction60:model_base#Object#none_visibility */
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
