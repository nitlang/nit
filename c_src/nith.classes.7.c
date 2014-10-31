#include "nith.classes.0.h"
/* runtime class platform__PlatformPhase */
const struct class class_platform__PlatformPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to platform:PlatformPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to platform:PlatformPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to platform:PlatformPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to platform:PlatformPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to platform:PlatformPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to platform:PlatformPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to platform:PlatformPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to platform:PlatformPhase:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to platform:PlatformPhase:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_phase__Phase__to_s, /* pointer to platform:PlatformPhase:phase#Phase#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to platform:PlatformPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to platform:PlatformPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to platform:PlatformPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to platform:PlatformPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to platform:PlatformPhase:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to platform:PlatformPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to platform:PlatformPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to platform:PlatformPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to platform:PlatformPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to platform:PlatformPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to platform:PlatformPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to platform:PlatformPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to platform:PlatformPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to platform:PlatformPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to platform:PlatformPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to platform:PlatformPhase:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to platform:PlatformPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to platform:PlatformPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to platform:PlatformPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to platform:PlatformPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to platform:PlatformPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to platform:PlatformPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to platform:PlatformPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to platform:PlatformPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to platform:PlatformPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to platform:PlatformPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__disabled, /* pointer to platform:PlatformPhase:phase#Phase#disabled */
(nitmethod_t)VIRTUAL_phase__Phase__disabled_61d, /* pointer to platform:PlatformPhase:phase#Phase#disabled= */
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
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_platform__PlatformPhase;
var = 0;
self->attrs[COLOR_phase__Phase___disabled].s = var; /* _disabled on <self:PlatformPhase exact> */
return self;
}
/* runtime class platform__Platform */
/* allocate Platform */
val* NEW_platform__Platform(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Platform is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class parser_util__InjectedLexer */
/* allocate InjectedLexer */
val* NEW_parser_util__InjectedLexer(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "InjectedLexer is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class parser_util__CollectTokensByTextVisitor */
/* allocate CollectTokensByTextVisitor */
val* NEW_parser_util__CollectTokensByTextVisitor(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CollectTokensByTextVisitor is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class parser_util__CollectAnnotationsByNameVisitor */
/* allocate CollectAnnotationsByNameVisitor */
val* NEW_parser_util__CollectAnnotationsByNameVisitor(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CollectAnnotationsByNameVisitor is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class c_tools__CCompilationUnit */
/* allocate CCompilationUnit */
val* NEW_c_tools__CCompilationUnit(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CCompilationUnit is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class c_tools__CFunction */
/* allocate CFunction */
val* NEW_c_tools__CFunction(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CFunction is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class c_tools__ExternFile */
/* allocate ExternFile */
val* NEW_c_tools__ExternFile(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ExternFile is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class c_tools__ExternCFile */
const struct class class_c_tools__ExternCFile = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to c_tools:ExternCFile:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to c_tools:ExternCFile:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_c_tools__ExternCFile___61d_61d, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to c_tools:ExternCFile:kernel#Object#!= */
(nitmethod_t)VIRTUAL_c_tools__ExternCFile__hash, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to c_tools:ExternCFile:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to c_tools:ExternCFile:kernel#Object#sys */
(nitmethod_t)VIRTUAL_c_tools__ExternFile__init, /* pointer to c_tools:ExternCFile:c_tools#ExternFile#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to c_tools:ExternCFile:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to c_tools:ExternCFile:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to c_tools:ExternCFile:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to c_tools:ExternCFile:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to c_tools:ExternCFile:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to c_tools:ExternCFile:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to c_tools:ExternCFile:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to c_tools:ExternCFile:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to c_tools:ExternCFile:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to c_tools:ExternCFile:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to c_tools:ExternCFile:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to c_tools:ExternCFile:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to c_tools:ExternCFile:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to c_tools:ExternCFile:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to c_tools:ExternCFile:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to c_tools:ExternCFile:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to c_tools:ExternCFile:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to c_tools:ExternCFile:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to c_tools:ExternCFile:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to c_tools:ExternCFile:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to c_tools:ExternCFile:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to c_tools:ExternCFile:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to c_tools:ExternCFile:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_c_tools__ExternFile__filename, /* pointer to c_tools:ExternCFile:c_tools#ExternFile#filename */
(nitmethod_t)VIRTUAL_c_tools__ExternFile__filename_61d, /* pointer to c_tools:ExternCFile:c_tools#ExternFile#filename= */
(nitmethod_t)VIRTUAL_c_tools__ExternCFile__makefile_rule_name, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#makefile_rule_name */
(nitmethod_t)VIRTUAL_c_tools__ExternCFile__makefile_rule_content, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#makefile_rule_content */
(nitmethod_t)VIRTUAL_c_tools__ExternCFile__compiles_to_o_file, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#compiles_to_o_file */
(nitmethod_t)VIRTUAL_c_tools__ExternFile__add_to_jar, /* pointer to c_tools:ExternCFile:c_tools#ExternFile#add_to_jar */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to c_tools:ExternCFile:kernel#Object#init */
(nitmethod_t)VIRTUAL_c_tools__ExternCFile__init, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#init */
(nitmethod_t)VIRTUAL_c_tools__ExternCFile__cflags, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#cflags */
(nitmethod_t)VIRTUAL_c_tools__ExternCFile__cflags_61d, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#cflags= */
}
};
/* allocate ExternCFile */
val* NEW_c_tools__ExternCFile(const struct type* type) {
val* self /* : ExternCFile */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_c_tools__ExternCFile;
return self;
}
/* runtime class coloring__POSetConflictGraph */
const struct class class_coloring__POSetConflictGraph = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to coloring:POSetConflictGraph:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to coloring:POSetConflictGraph:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to coloring:POSetConflictGraph:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to coloring:POSetConflictGraph:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to coloring:POSetConflictGraph:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to coloring:POSetConflictGraph:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to coloring:POSetConflictGraph:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to coloring:POSetConflictGraph:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to coloring:POSetConflictGraph:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to coloring:POSetConflictGraph:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to coloring:POSetConflictGraph:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to coloring:POSetConflictGraph:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to coloring:POSetConflictGraph:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to coloring:POSetConflictGraph:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to coloring:POSetConflictGraph:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to coloring:POSetConflictGraph:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to coloring:POSetConflictGraph:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to coloring:POSetConflictGraph:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to coloring:POSetConflictGraph:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to coloring:POSetConflictGraph:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to coloring:POSetConflictGraph:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to coloring:POSetConflictGraph:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to coloring:POSetConflictGraph:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to coloring:POSetConflictGraph:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to coloring:POSetConflictGraph:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to coloring:POSetConflictGraph:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to coloring:POSetConflictGraph:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to coloring:POSetConflictGraph:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to coloring:POSetConflictGraph:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to coloring:POSetConflictGraph:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to coloring:POSetConflictGraph:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_coloring__POSetConflictGraph__core, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#core */
(nitmethod_t)VIRTUAL_coloring__POSetConflictGraph__border, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#border */
(nitmethod_t)VIRTUAL_coloring__POSetConflictGraph__crown, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#crown */
(nitmethod_t)VIRTUAL_coloring__POSetConflictGraph__conflicts, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#conflicts */
(nitmethod_t)VIRTUAL_coloring__POSetConflictGraph__poset, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#poset */
(nitmethod_t)VIRTUAL_coloring__POSetConflictGraph__poset_61d, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#poset= */
(nitmethod_t)VIRTUAL_coloring__POSetConflictGraph__init, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#init */
(nitmethod_t)VIRTUAL_coloring__POSetConflictGraph__extract_core, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#extract_core */
(nitmethod_t)VIRTUAL_coloring__POSetConflictGraph__extract_border, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#extract_border */
(nitmethod_t)VIRTUAL_coloring__POSetConflictGraph__is_border, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#is_border */
(nitmethod_t)VIRTUAL_coloring__POSetConflictGraph__extract_crown, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#extract_crown */
(nitmethod_t)VIRTUAL_coloring__POSetConflictGraph__compute_conflicts, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#compute_conflicts */
(nitmethod_t)VIRTUAL_coloring__POSetConflictGraph__add_conflict, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#add_conflict */
(nitmethod_t)VIRTUAL_coloring__POSetConflictGraph__add_conflicts, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#add_conflicts */
}
};
/* allocate POSetConflictGraph[Object] */
val* NEW_coloring__POSetConflictGraph(const struct type* type) {
val* self /* : POSetConflictGraph[Object] */;
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
val* var2 /* : HashSet[Object] */;
val* var3 /* : HashMap[Object, Set[Object]] */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_coloring__POSetConflictGraph;
var = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetcoloring__POSetConflictGraph_FT0]);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:HashSet[Object]>*/;
}
self->attrs[COLOR_coloring__POSetConflictGraph___core].val = var; /* _core on <self:POSetConflictGraph[Object] exact> */
var1 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetcoloring__POSetConflictGraph_FT0]);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:HashSet[Object]>*/;
}
self->attrs[COLOR_coloring__POSetConflictGraph___border].val = var1; /* _border on <self:POSetConflictGraph[Object] exact> */
var2 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetcoloring__POSetConflictGraph_FT0]);
{
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:HashSet[Object]>*/;
}
self->attrs[COLOR_coloring__POSetConflictGraph___crown].val = var2; /* _crown on <self:POSetConflictGraph[Object] exact> */
var3 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMapcoloring__POSetConflictGraph_FT0abstract_collection__Setcoloring__POSetConflictGraph_FT0]);
{
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:HashMap[Object, Set[Object]]>*/;
}
self->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val = var3; /* _conflicts on <self:POSetConflictGraph[Object] exact> */
return self;
}
/* runtime class coloring__POSetColorer */
const struct class class_coloring__POSetColorer = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to coloring:POSetColorer:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to coloring:POSetColorer:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to coloring:POSetColorer:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to coloring:POSetColorer:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to coloring:POSetColorer:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to coloring:POSetColorer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to coloring:POSetColorer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to coloring:POSetColorer:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to coloring:POSetColorer:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to coloring:POSetColorer:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to coloring:POSetColorer:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to coloring:POSetColorer:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to coloring:POSetColorer:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to coloring:POSetColorer:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to coloring:POSetColorer:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to coloring:POSetColorer:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to coloring:POSetColorer:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to coloring:POSetColorer:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to coloring:POSetColorer:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to coloring:POSetColorer:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to coloring:POSetColorer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to coloring:POSetColorer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to coloring:POSetColorer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to coloring:POSetColorer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to coloring:POSetColorer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to coloring:POSetColorer:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to coloring:POSetColorer:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to coloring:POSetColorer:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to coloring:POSetColorer:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to coloring:POSetColorer:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to coloring:POSetColorer:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_coloring__POSetColorer__is_colored, /* pointer to coloring:POSetColorer:coloring#POSetColorer#is_colored */
(nitmethod_t)VIRTUAL_coloring__POSetColorer__is_colored_61d, /* pointer to coloring:POSetColorer:coloring#POSetColorer#is_colored= */
(nitmethod_t)VIRTUAL_coloring__POSetColorer__ids, /* pointer to coloring:POSetColorer:coloring#POSetColorer#ids */
(nitmethod_t)VIRTUAL_coloring__POSetColorer__ids_cache, /* pointer to coloring:POSetColorer:coloring#POSetColorer#ids_cache */
(nitmethod_t)VIRTUAL_coloring__POSetColorer__colors, /* pointer to coloring:POSetColorer:coloring#POSetColorer#colors */
(nitmethod_t)VIRTUAL_coloring__POSetColorer__colors_cache, /* pointer to coloring:POSetColorer:coloring#POSetColorer#colors_cache */
(nitmethod_t)VIRTUAL_coloring__POSetColorer__poset_cache, /* pointer to coloring:POSetColorer:coloring#POSetColorer#poset_cache */
(nitmethod_t)VIRTUAL_coloring__POSetColorer__poset_cache_61d, /* pointer to coloring:POSetColorer:coloring#POSetColorer#poset_cache= */
(nitmethod_t)VIRTUAL_coloring__POSetColorer__conflicts, /* pointer to coloring:POSetColorer:coloring#POSetColorer#conflicts */
(nitmethod_t)VIRTUAL_coloring__POSetColorer__conflicts_cache, /* pointer to coloring:POSetColorer:coloring#POSetColorer#conflicts_cache */
(nitmethod_t)VIRTUAL_coloring__POSetColorer__conflicts_cache_61d, /* pointer to coloring:POSetColorer:coloring#POSetColorer#conflicts_cache= */
(nitmethod_t)VIRTUAL_coloring__POSetColorer__graph, /* pointer to coloring:POSetColorer:coloring#POSetColorer#graph */
(nitmethod_t)VIRTUAL_coloring__POSetColorer__graph_61d, /* pointer to coloring:POSetColorer:coloring#POSetColorer#graph= */
(nitmethod_t)VIRTUAL_coloring__POSetColorer__colorize, /* pointer to coloring:POSetColorer:coloring#POSetColorer#colorize */
(nitmethod_t)VIRTUAL_coloring__POSetColorer__allocate_ids, /* pointer to coloring:POSetColorer:coloring#POSetColorer#allocate_ids */
(nitmethod_t)VIRTUAL_coloring__POSetColorer__compute_colors, /* pointer to coloring:POSetColorer:coloring#POSetColorer#compute_colors */
(nitmethod_t)VIRTUAL_coloring__POSetColorer__colorize_core, /* pointer to coloring:POSetColorer:coloring#POSetColorer#colorize_core */
(nitmethod_t)VIRTUAL_coloring__POSetColorer__colorize_set, /* pointer to coloring:POSetColorer:coloring#POSetColorer#colorize_set */
(nitmethod_t)VIRTUAL_coloring__POSetColorer__min_color, /* pointer to coloring:POSetColorer:coloring#POSetColorer#min_color */
(nitmethod_t)VIRTUAL_coloring__POSetColorer__is_color_free, /* pointer to coloring:POSetColorer:coloring#POSetColorer#is_color_free */
}
};
/* allocate POSetColorer[Object] */
val* NEW_coloring__POSetColorer(const struct type* type) {
val* self /* : POSetColorer[Object] */;
short int var /* : Bool */;
val* var1 /* : HashMap[Object, Int] */;
val* var2 /* : HashMap[Object, Int] */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_coloring__POSetColorer;
var = 0;
self->attrs[COLOR_coloring__POSetColorer___is_colored].s = var; /* _is_colored on <self:POSetColorer[Object] exact> */
var1 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMapcoloring__POSetColorer_FT0kernel__Int]);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:HashMap[Object, Int]>*/;
}
self->attrs[COLOR_coloring__POSetColorer___ids_cache].val = var1; /* _ids_cache on <self:POSetColorer[Object] exact> */
var2 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMapcoloring__POSetColorer_FT0kernel__Int]);
{
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:HashMap[Object, Int]>*/;
}
self->attrs[COLOR_coloring__POSetColorer___colors_cache].val = var2; /* _colors_cache on <self:POSetColorer[Object] exact> */
return self;
}
/* runtime class coloring__BucketsColorer */
const struct class class_coloring__BucketsColorer = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to coloring:BucketsColorer:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to coloring:BucketsColorer:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to coloring:BucketsColorer:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to coloring:BucketsColorer:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to coloring:BucketsColorer:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to coloring:BucketsColorer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to coloring:BucketsColorer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to coloring:BucketsColorer:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to coloring:BucketsColorer:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to coloring:BucketsColorer:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to coloring:BucketsColorer:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to coloring:BucketsColorer:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to coloring:BucketsColorer:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to coloring:BucketsColorer:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to coloring:BucketsColorer:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to coloring:BucketsColorer:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to coloring:BucketsColorer:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to coloring:BucketsColorer:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to coloring:BucketsColorer:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to coloring:BucketsColorer:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to coloring:BucketsColorer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to coloring:BucketsColorer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to coloring:BucketsColorer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to coloring:BucketsColorer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to coloring:BucketsColorer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to coloring:BucketsColorer:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to coloring:BucketsColorer:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to coloring:BucketsColorer:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to coloring:BucketsColorer:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to coloring:BucketsColorer:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to coloring:BucketsColorer:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_coloring__BucketsColorer__colors, /* pointer to coloring:BucketsColorer:coloring#BucketsColorer#colors */
(nitmethod_t)VIRTUAL_coloring__BucketsColorer__conflicts, /* pointer to coloring:BucketsColorer:coloring#BucketsColorer#conflicts */
(nitmethod_t)VIRTUAL_coloring__BucketsColorer__colorize, /* pointer to coloring:BucketsColorer:coloring#BucketsColorer#colorize */
(nitmethod_t)VIRTUAL_coloring__BucketsColorer__is_color_free, /* pointer to coloring:BucketsColorer:coloring#BucketsColorer#is_color_free */
(nitmethod_t)VIRTUAL_coloring__BucketsColorer__compute_conflicts, /* pointer to coloring:BucketsColorer:coloring#BucketsColorer#compute_conflicts */
}
};
/* allocate BucketsColorer[Object, Object] */
val* NEW_coloring__BucketsColorer(const struct type* type) {
val* self /* : BucketsColorer[Object, Object] */;
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Set[Object]] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_coloring__BucketsColorer;
var = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMapcoloring__BucketsColorer_FT1kernel__Int]);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:HashMap[Object, Int]>*/;
}
self->attrs[COLOR_coloring__BucketsColorer___colors].val = var; /* _colors on <self:BucketsColorer[Object, Object] exact> */
var1 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMapcoloring__BucketsColorer_FT1abstract_collection__Setcoloring__BucketsColorer_FT1]);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:HashMap[Object, Set[Object]]>*/;
}
self->attrs[COLOR_coloring__BucketsColorer___conflicts].val = var1; /* _conflicts on <self:BucketsColorer[Object, Object] exact> */
return self;
}
/* runtime class coloring__POSetBucketsColorer */
const struct class class_coloring__POSetBucketsColorer = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to coloring:POSetBucketsColorer:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to coloring:POSetBucketsColorer:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to coloring:POSetBucketsColorer:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to coloring:POSetBucketsColorer:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to coloring:POSetBucketsColorer:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to coloring:POSetBucketsColorer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to coloring:POSetBucketsColorer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to coloring:POSetBucketsColorer:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to coloring:POSetBucketsColorer:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to coloring:POSetBucketsColorer:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to coloring:POSetBucketsColorer:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to coloring:POSetBucketsColorer:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to coloring:POSetBucketsColorer:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to coloring:POSetBucketsColorer:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to coloring:POSetBucketsColorer:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to coloring:POSetBucketsColorer:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to coloring:POSetBucketsColorer:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to coloring:POSetBucketsColorer:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to coloring:POSetBucketsColorer:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to coloring:POSetBucketsColorer:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to coloring:POSetBucketsColorer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to coloring:POSetBucketsColorer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to coloring:POSetBucketsColorer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to coloring:POSetBucketsColorer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to coloring:POSetBucketsColorer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to coloring:POSetBucketsColorer:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to coloring:POSetBucketsColorer:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to coloring:POSetBucketsColorer:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to coloring:POSetBucketsColorer:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to coloring:POSetBucketsColorer:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to coloring:POSetBucketsColorer:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_coloring__POSetBucketsColorer__colors, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#colors */
(nitmethod_t)VIRTUAL_coloring__POSetBucketsColorer__poset, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#poset */
(nitmethod_t)VIRTUAL_coloring__POSetBucketsColorer__poset_61d, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#poset= */
(nitmethod_t)VIRTUAL_coloring__POSetBucketsColorer__conflicts, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#conflicts */
(nitmethod_t)VIRTUAL_coloring__POSetBucketsColorer__conflicts_61d, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#conflicts= */
(nitmethod_t)VIRTUAL_coloring__POSetBucketsColorer__init, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#init */
(nitmethod_t)VIRTUAL_coloring__POSetBucketsColorer__colorize, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#colorize */
(nitmethod_t)VIRTUAL_coloring__POSetBucketsColorer__min_color, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#min_color */
(nitmethod_t)VIRTUAL_coloring__POSetBucketsColorer__max_color, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#max_color */
(nitmethod_t)VIRTUAL_coloring__POSetBucketsColorer__is_color_free, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#is_color_free */
}
};
/* allocate POSetBucketsColorer[Object, Object] */
val* NEW_coloring__POSetBucketsColorer(const struct type* type) {
val* self /* : POSetBucketsColorer[Object, Object] */;
val* var /* : HashMap[Object, Int] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_coloring__POSetBucketsColorer;
var = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMapcoloring__POSetBucketsColorer_FT1kernel__Int]);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:HashMap[Object, Int]>*/;
}
self->attrs[COLOR_coloring__POSetBucketsColorer___colors].val = var; /* _colors on <self:POSetBucketsColorer[Object, Object] exact> */
return self;
}
