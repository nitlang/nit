#include "nit__nith.classes.0.h"
/* runtime class nit__modelize_property__ModelizePropertyPhase */
const struct class class_nit__modelize_property__ModelizePropertyPhase = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to modelize_property:ModelizePropertyPhase:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to modelize_property:ModelizePropertyPhase:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to modelize_property:ModelizePropertyPhase:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to modelize_property:ModelizePropertyPhase:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to modelize_property:ModelizePropertyPhase:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to modelize_property:ModelizePropertyPhase:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to modelize_property:ModelizePropertyPhase:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to modelize_property:ModelizePropertyPhase:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to modelize_property:ModelizePropertyPhase:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to modelize_property:ModelizePropertyPhase:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to modelize_property:ModelizePropertyPhase:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to modelize_property:ModelizePropertyPhase:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to modelize_property:ModelizePropertyPhase:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to modelize_property:ModelizePropertyPhase:model#Object#extern_kind */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#disabled */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#disabled= */
(nitmethod_t)nit__modelize_property___nit__modelize_property__ModelizePropertyPhase___nit__phase__Phase__process_nmodule, /* pointer to modelize_property:ModelizePropertyPhase:modelize_property#ModelizePropertyPhase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit___nit__Phase___process_npropdef, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#process_npropdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nit__modelbuilder___Phase___process_mainmodule, /* pointer to modelize_property:ModelizePropertyPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate ModelizePropertyPhase */
val* NEW_nit__modelize_property__ModelizePropertyPhase(const struct type* type) {
val* self /* : ModelizePropertyPhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__modelize_property__ModelizePropertyPhase;
var = 0;
self->attrs[COLOR_nit__phase__Phase___disabled].s = var; /* _disabled on <self:ModelizePropertyPhase exact> */
return self;
}
/* runtime class nit__modelize_class__ModelizeClassPhase */
const struct class class_nit__modelize_class__ModelizeClassPhase = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to modelize_class:ModelizeClassPhase:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to modelize_class:ModelizeClassPhase:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to modelize_class:ModelizeClassPhase:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to modelize_class:ModelizeClassPhase:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to modelize_class:ModelizeClassPhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to modelize_class:ModelizeClassPhase:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to modelize_class:ModelizeClassPhase:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to modelize_class:ModelizeClassPhase:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to modelize_class:ModelizeClassPhase:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to modelize_class:ModelizeClassPhase:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to modelize_class:ModelizeClassPhase:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to modelize_class:ModelizeClassPhase:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to modelize_class:ModelizeClassPhase:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to modelize_class:ModelizeClassPhase:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to modelize_class:ModelizeClassPhase:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to modelize_class:ModelizeClassPhase:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to modelize_class:ModelizeClassPhase:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to modelize_class:ModelizeClassPhase:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to modelize_class:ModelizeClassPhase:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to modelize_class:ModelizeClassPhase:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to modelize_class:ModelizeClassPhase:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to modelize_class:ModelizeClassPhase:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to modelize_class:ModelizeClassPhase:model#Object#extern_kind */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#disabled */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#disabled= */
(nitmethod_t)nit__modelize_class___nit__modelize_class__ModelizeClassPhase___nit__phase__Phase__process_nmodule, /* pointer to modelize_class:ModelizeClassPhase:modelize_class#ModelizeClassPhase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit___nit__Phase___process_npropdef, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#process_npropdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nit__modelbuilder___Phase___process_mainmodule, /* pointer to modelize_class:ModelizeClassPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate ModelizeClassPhase */
val* NEW_nit__modelize_class__ModelizeClassPhase(const struct type* type) {
val* self /* : ModelizeClassPhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__modelize_class__ModelizeClassPhase;
var = 0;
self->attrs[COLOR_nit__phase__Phase___disabled].s = var; /* _disabled on <self:ModelizeClassPhase exact> */
return self;
}
/* runtime class nit__ModulePath */
const struct class class_nit__ModulePath = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to loader:ModulePath:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to loader:ModulePath:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to loader:ModulePath:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to loader:ModulePath:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to loader:ModulePath:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to loader:ModulePath:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to loader:ModulePath:kernel#Object#sys */
(nitmethod_t)nit___nit__ModulePath___standard__kernel__Object__init, /* pointer to loader:ModulePath:loader#ModulePath#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to loader:ModulePath:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__ModulePath___standard__string__Object__to_s, /* pointer to loader:ModulePath:loader#ModulePath#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to loader:ModulePath:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to loader:ModulePath:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to loader:ModulePath:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to loader:ModulePath:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to loader:ModulePath:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to loader:ModulePath:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to loader:ModulePath:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to loader:ModulePath:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to loader:ModulePath:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to loader:ModulePath:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to loader:ModulePath:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to loader:ModulePath:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to loader:ModulePath:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to loader:ModulePath:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to loader:ModulePath:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to loader:ModulePath:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to loader:ModulePath:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to loader:ModulePath:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to loader:ModulePath:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to loader:ModulePath:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to loader:ModulePath:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to loader:ModulePath:model#Object#extern_kind */
(nitmethod_t)nit___nit__ModulePath___name, /* pointer to loader:ModulePath:loader#ModulePath#name */
(nitmethod_t)nit___nit__ModulePath___name_61d, /* pointer to loader:ModulePath:loader#ModulePath#name= */
(nitmethod_t)nit___nit__ModulePath___filepath, /* pointer to loader:ModulePath:loader#ModulePath#filepath */
(nitmethod_t)nit___nit__ModulePath___filepath_61d, /* pointer to loader:ModulePath:loader#ModulePath#filepath= */
(nitmethod_t)nit___nit__ModulePath___mgroup, /* pointer to loader:ModulePath:loader#ModulePath#mgroup */
(nitmethod_t)nit___nit__ModulePath___mgroup_61d, /* pointer to loader:ModulePath:loader#ModulePath#mgroup= */
(nitmethod_t)nit___nit__ModulePath___mmodule, /* pointer to loader:ModulePath:loader#ModulePath#mmodule */
(nitmethod_t)nit___nit__ModulePath___mmodule_61d, /* pointer to loader:ModulePath:loader#ModulePath#mmodule= */
(nitmethod_t)standard___standard__Object___init, /* pointer to loader:ModulePath:kernel#Object#init */
}
};
/* allocate ModulePath */
val* NEW_nit__ModulePath(const struct type* type) {
val* self /* : ModulePath */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ModulePath;
var = NULL;
self->attrs[COLOR_nit__loader__ModulePath___mmodule].val = var; /* _mmodule on <self:ModulePath exact> */
return self;
}
/* runtime class nit__ModelBuilder */
const struct class class_nit__ModelBuilder = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to modelbuilder_base:ModelBuilder:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to modelbuilder_base:ModelBuilder:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to modelbuilder_base:ModelBuilder:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to modelbuilder_base:ModelBuilder:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to modelbuilder_base:ModelBuilder:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to modelbuilder_base:ModelBuilder:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to modelbuilder_base:ModelBuilder:kernel#Object#sys */
(nitmethod_t)nit__loader___ModelBuilder___standard__kernel__Object__init, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to modelbuilder_base:ModelBuilder:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to modelbuilder_base:ModelBuilder:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to modelbuilder_base:ModelBuilder:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to modelbuilder_base:ModelBuilder:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to modelbuilder_base:ModelBuilder:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to modelbuilder_base:ModelBuilder:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to modelbuilder_base:ModelBuilder:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to modelbuilder_base:ModelBuilder:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to modelbuilder_base:ModelBuilder:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to modelbuilder_base:ModelBuilder:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to modelbuilder_base:ModelBuilder:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to modelbuilder_base:ModelBuilder:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to modelbuilder_base:ModelBuilder:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to modelbuilder_base:ModelBuilder:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to modelbuilder_base:ModelBuilder:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to modelbuilder_base:ModelBuilder:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to modelbuilder_base:ModelBuilder:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to modelbuilder_base:ModelBuilder:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to modelbuilder_base:ModelBuilder:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to modelbuilder_base:ModelBuilder:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to modelbuilder_base:ModelBuilder:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to modelbuilder_base:ModelBuilder:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to modelbuilder_base:ModelBuilder:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to modelbuilder_base:ModelBuilder:model#Object#extern_kind */
(nitmethod_t)nit___nit__ModelBuilder___model, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#model */
(nitmethod_t)nit___nit__ModelBuilder___model_61d, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#model= */
(nitmethod_t)nit___nit__ModelBuilder___toolcontext, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#toolcontext */
(nitmethod_t)nit___nit__ModelBuilder___toolcontext_61d, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#toolcontext= */
(nitmethod_t)nit___nit__ModelBuilder___try_get_mclass_by_name, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#try_get_mclass_by_name */
(nitmethod_t)nit___nit__ModelBuilder___try_get_mproperty_by_name2, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#try_get_mproperty_by_name2 */
(nitmethod_t)nit___nit__ModelBuilder___try_get_mproperty_by_name2_cache, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#try_get_mproperty_by_name2_cache */
(nitmethod_t)nit___nit__ModelBuilder___try_get_mproperty_by_name, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#try_get_mproperty_by_name */
(nitmethod_t)nit___nit__ModelBuilder___error, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#error */
(nitmethod_t)nit___nit__ModelBuilder___warning, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#warning */
(nitmethod_t)nit___nit__ModelBuilder___advice, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#advice */
(nitmethod_t)nit___nit__ModelBuilder___force_get_primitive_method, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#force_get_primitive_method */
(nitmethod_t)nit__loader___ModelBuilder___parse, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#parse */
(nitmethod_t)nit__loader___ModelBuilder___paths, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#paths */
(nitmethod_t)nit__loader___ModelBuilder___search_mmodule_by_name, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#search_mmodule_by_name */
(nitmethod_t)nit__loader___ModelBuilder___get_mmodule_by_name, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#get_mmodule_by_name */
(nitmethod_t)nit__loader___ModelBuilder___search_module_in_paths, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#search_module_in_paths */
(nitmethod_t)nit__loader___ModelBuilder___identified_files_by_path, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#identified_files_by_path */
(nitmethod_t)nit__loader___ModelBuilder___identified_files, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#identified_files */
(nitmethod_t)nit__loader___ModelBuilder___identify_file, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#identify_file */
(nitmethod_t)nit__loader___ModelBuilder___mgroups, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#mgroups */
(nitmethod_t)nit__loader___ModelBuilder___get_mgroup, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#get_mgroup */
(nitmethod_t)nit__loader___ModelBuilder___module_absolute_path, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#module_absolute_path */
(nitmethod_t)nit__loader___ModelBuilder___load_module_ast, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#load_module_ast */
(nitmethod_t)nit__loader___ModelBuilder___load_module, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#load_module */
(nitmethod_t)nit__loader___ModelBuilder___build_a_mmodule, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#build_a_mmodule */
(nitmethod_t)nit__loader___ModelBuilder___build_module_importation, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#build_module_importation */
(nitmethod_t)nit__loader___ModelBuilder___nmodules, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#nmodules */
(nitmethod_t)nit__loader___ModelBuilder___mmodule2nmodule, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#mmodule2nmodule */
(nitmethod_t)nit__loader___ModelBuilder___mmodule2node, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#mmodule2node */
(nitmethod_t)nit__modelbuilder___ModelBuilder___run_phases, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder#ModelBuilder#run_phases */
(nitmethod_t)nit__modelize_class___ModelBuilder___build_a_mclass, /* pointer to modelbuilder_base:ModelBuilder:modelize_class#ModelBuilder#build_a_mclass */
(nitmethod_t)nit__modelize_class___ModelBuilder___build_a_mclassdef, /* pointer to modelbuilder_base:ModelBuilder:modelize_class#ModelBuilder#build_a_mclassdef */
(nitmethod_t)nit__modelize_class___ModelBuilder___collect_a_mclassdef_inheritance, /* pointer to modelbuilder_base:ModelBuilder:modelize_class#ModelBuilder#collect_a_mclassdef_inheritance */
(nitmethod_t)nit__modelize_class___ModelBuilder___check_supertypes, /* pointer to modelbuilder_base:ModelBuilder:modelize_class#ModelBuilder#check_supertypes */
(nitmethod_t)nit__modelize_class___ModelBuilder___build_classes, /* pointer to modelbuilder_base:ModelBuilder:modelize_class#ModelBuilder#build_classes */
(nitmethod_t)nit__modelize_class___ModelBuilder___mclassdef2nclassdef, /* pointer to modelbuilder_base:ModelBuilder:modelize_class#ModelBuilder#mclassdef2nclassdef */
(nitmethod_t)nit__modelize_class___ModelBuilder___resolve_mtype_unchecked, /* pointer to modelbuilder_base:ModelBuilder:modelize_class#ModelBuilder#resolve_mtype_unchecked */
(nitmethod_t)nit__modelize_class___ModelBuilder___resolve_mtype, /* pointer to modelbuilder_base:ModelBuilder:modelize_class#ModelBuilder#resolve_mtype */
(nitmethod_t)nit__modelize_property___ModelBuilder___mpropdef2npropdef, /* pointer to modelbuilder_base:ModelBuilder:modelize_property#ModelBuilder#mpropdef2npropdef */
(nitmethod_t)nit__modelize_property___ModelBuilder___mpropdef2node, /* pointer to modelbuilder_base:ModelBuilder:modelize_property#ModelBuilder#mpropdef2node */
(nitmethod_t)nit__modelize_property___ModelBuilder___collect_attr_propdef, /* pointer to modelbuilder_base:ModelBuilder:modelize_property#ModelBuilder#collect_attr_propdef */
(nitmethod_t)nit__modelize_property___ModelBuilder___build_properties, /* pointer to modelbuilder_base:ModelBuilder:modelize_property#ModelBuilder#build_properties */
(nitmethod_t)nit__modelize_property___ModelBuilder___the_root_init_mmethod, /* pointer to modelbuilder_base:ModelBuilder:modelize_property#ModelBuilder#the_root_init_mmethod */
(nitmethod_t)nit__modelize_property___ModelBuilder___the_root_init_mmethod_61d, /* pointer to modelbuilder_base:ModelBuilder:modelize_property#ModelBuilder#the_root_init_mmethod= */
(nitmethod_t)nit__modelize_property___ModelBuilder___process_default_constructors, /* pointer to modelbuilder_base:ModelBuilder:modelize_property#ModelBuilder#process_default_constructors */
(nitmethod_t)nit__modelize_property___ModelBuilder___check_visibility, /* pointer to modelbuilder_base:ModelBuilder:modelize_property#ModelBuilder#check_visibility */
(nitmethod_t)nit__rapid_type_analysis___ModelBuilder___do_rapid_type_analysis, /* pointer to modelbuilder_base:ModelBuilder:rapid_type_analysis#ModelBuilder#do_rapid_type_analysis */
(nitmethod_t)nit__abstract_compiler___ModelBuilder___compile_dir, /* pointer to modelbuilder_base:ModelBuilder:abstract_compiler#ModelBuilder#compile_dir */
(nitmethod_t)nit__abstract_compiler___ModelBuilder___compile_dir_61d, /* pointer to modelbuilder_base:ModelBuilder:abstract_compiler#ModelBuilder#compile_dir= */
(nitmethod_t)nit__abstract_compiler___ModelBuilder___write_and_make, /* pointer to modelbuilder_base:ModelBuilder:abstract_compiler#ModelBuilder#write_and_make */
(nitmethod_t)nit__separate_compiler___ModelBuilder___run_separate_compiler, /* pointer to modelbuilder_base:ModelBuilder:separate_compiler#ModelBuilder#run_separate_compiler */
(nitmethod_t)nit__separate_compiler___ModelBuilder___nb_invok_by_tables, /* pointer to modelbuilder_base:ModelBuilder:separate_compiler#ModelBuilder#nb_invok_by_tables */
(nitmethod_t)nit__separate_compiler___ModelBuilder___nb_invok_by_tables_61d, /* pointer to modelbuilder_base:ModelBuilder:separate_compiler#ModelBuilder#nb_invok_by_tables= */
(nitmethod_t)nit__separate_compiler___ModelBuilder___nb_invok_by_direct, /* pointer to modelbuilder_base:ModelBuilder:separate_compiler#ModelBuilder#nb_invok_by_direct */
(nitmethod_t)nit__separate_compiler___ModelBuilder___nb_invok_by_direct_61d, /* pointer to modelbuilder_base:ModelBuilder:separate_compiler#ModelBuilder#nb_invok_by_direct= */
(nitmethod_t)nit__separate_compiler___ModelBuilder___nb_invok_by_inline, /* pointer to modelbuilder_base:ModelBuilder:separate_compiler#ModelBuilder#nb_invok_by_inline */
(nitmethod_t)nit__separate_compiler___ModelBuilder___nb_invok_by_inline_61d, /* pointer to modelbuilder_base:ModelBuilder:separate_compiler#ModelBuilder#nb_invok_by_inline= */
(nitmethod_t)nit__separate_erasure_compiler___ModelBuilder___run_separate_erasure_compiler, /* pointer to modelbuilder_base:ModelBuilder:separate_erasure_compiler#ModelBuilder#run_separate_erasure_compiler */
(nitmethod_t)nit___nit__ModelBuilder___standard__kernel__Object__init, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#init */
}
};
/* allocate ModelBuilder */
val* NEW_nit__ModelBuilder(const struct type* type) {
val* self /* : ModelBuilder */;
val* var /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var1 /* : Array[String] */;
val* var2 /* : HashMap[String, nullable ModulePath] */;
val* var3 /* : Array[ModulePath] */;
val* var4 /* : HashMap[String, nullable MGroup] */;
val* var5 /* : Array[AModule] */;
val* var6 /* : HashMap[MModule, AModule] */;
val* var7 /* : HashMap[MClassDef, AClassdef] */;
val* var8 /* : HashMap[String, MModuleData[AAnnotation]] */;
val* var9 /* : HashMap[MPropDef, APropdef] */;
long var10 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ModelBuilder;
var = NEW_more_collections__HashMap3(&type_more_collections__HashMap3__nit__MModule__nit__MType__standard__String__nullable__nit__MProperty);
{
{ /* Inline kernel#Object#init (var) on <var:HashMap3[MModule, MType, String, nullable MProperty]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___try_get_mproperty_by_name2_cache].val = var; /* _try_get_mproperty_by_name2_cache on <self:ModelBuilder exact> */
var1 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[String]>*/
}
self->attrs[COLOR_nit__loader__ModelBuilder___paths].val = var1; /* _paths on <self:ModelBuilder exact> */
var2 = NEW_standard__HashMap(&type_standard__HashMap__standard__String__nullable__nit__ModulePath);
{
standard___standard__HashMap___standard__kernel__Object__init(var2); /* Direct call hash_collection#HashMap#init on <var2:HashMap[String, nullable ModulePath]>*/
}
self->attrs[COLOR_nit__loader__ModelBuilder___identified_files_by_path].val = var2; /* _identified_files_by_path on <self:ModelBuilder exact> */
var3 = NEW_standard__Array(&type_standard__Array__nit__ModulePath);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[ModulePath]>*/
}
self->attrs[COLOR_nit__loader__ModelBuilder___identified_files].val = var3; /* _identified_files on <self:ModelBuilder exact> */
var4 = NEW_standard__HashMap(&type_standard__HashMap__standard__String__nullable__nit__MGroup);
{
standard___standard__HashMap___standard__kernel__Object__init(var4); /* Direct call hash_collection#HashMap#init on <var4:HashMap[String, nullable MGroup]>*/
}
self->attrs[COLOR_nit__loader__ModelBuilder___mgroups].val = var4; /* _mgroups on <self:ModelBuilder exact> */
var5 = NEW_standard__Array(&type_standard__Array__nit__AModule);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[AModule]>*/
}
self->attrs[COLOR_nit__loader__ModelBuilder___nmodules].val = var5; /* _nmodules on <self:ModelBuilder exact> */
var6 = NEW_standard__HashMap(&type_standard__HashMap__nit__MModule__nit__AModule);
{
standard___standard__HashMap___standard__kernel__Object__init(var6); /* Direct call hash_collection#HashMap#init on <var6:HashMap[MModule, AModule]>*/
}
self->attrs[COLOR_nit__loader__ModelBuilder___mmodule2nmodule].val = var6; /* _mmodule2nmodule on <self:ModelBuilder exact> */
var7 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClassDef__nit__AClassdef);
{
standard___standard__HashMap___standard__kernel__Object__init(var7); /* Direct call hash_collection#HashMap#init on <var7:HashMap[MClassDef, AClassdef]>*/
}
self->attrs[COLOR_nit__modelize_class__ModelBuilder___mclassdef2nclassdef].val = var7; /* _mclassdef2nclassdef on <self:ModelBuilder exact> */
var8 = NEW_standard__HashMap(&type_standard__HashMap__standard__String__nit__MModuleData__nit__AAnnotation);
{
standard___standard__HashMap___standard__kernel__Object__init(var8); /* Direct call hash_collection#HashMap#init on <var8:HashMap[String, MModuleData[AAnnotation]]>*/
}
self->attrs[COLOR_nit__annotation__ModelBuilder___collect_annotations_data_cache].val = var8; /* _collect_annotations_data_cache on <self:ModelBuilder exact> */
var9 = NEW_standard__HashMap(&type_standard__HashMap__nit__MPropDef__nit__APropdef);
{
standard___standard__HashMap___standard__kernel__Object__init(var9); /* Direct call hash_collection#HashMap#init on <var9:HashMap[MPropDef, APropdef]>*/
}
self->attrs[COLOR_nit__modelize_property__ModelBuilder___mpropdef2npropdef].val = var9; /* _mpropdef2npropdef on <self:ModelBuilder exact> */
var10 = 0;
self->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_tables].l = var10; /* _nb_invok_by_tables on <self:ModelBuilder exact> */
var11 = 0;
self->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_direct].l = var11; /* _nb_invok_by_direct on <self:ModelBuilder exact> */
var12 = 0;
self->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_inline].l = var12; /* _nb_invok_by_inline on <self:ModelBuilder exact> */
return self;
}
/* runtime class nit__ConcernsTree */
/* allocate ConcernsTree */
val* NEW_nit__ConcernsTree(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ConcernsTree is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__model__MClassDefSorter */
const struct class class_nit__model__MClassDefSorter = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MClassDefSorter:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MClassDefSorter:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MClassDefSorter:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MClassDefSorter:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MClassDefSorter:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to model:MClassDefSorter:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MClassDefSorter:kernel#Object#sys */
(nitmethod_t)nit__model___nit__model__MClassDefSorter___standard__kernel__Object__init, /* pointer to model:MClassDefSorter:model#MClassDefSorter#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to model:MClassDefSorter:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to model:MClassDefSorter:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MClassDefSorter:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MClassDefSorter:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MClassDefSorter:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MClassDefSorter:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to model:MClassDefSorter:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to model:MClassDefSorter:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MClassDefSorter:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to model:MClassDefSorter:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to model:MClassDefSorter:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to model:MClassDefSorter:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to model:MClassDefSorter:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to model:MClassDefSorter:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to model:MClassDefSorter:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to model:MClassDefSorter:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to model:MClassDefSorter:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to model:MClassDefSorter:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to model:MClassDefSorter:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to model:MClassDefSorter:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to model:MClassDefSorter:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to model:MClassDefSorter:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to model:MClassDefSorter:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to model:MClassDefSorter:model#Object#extern_kind */
(nitmethod_t)nit__model___nit__model__MClassDefSorter___standard__sorter__Comparator__compare, /* pointer to model:MClassDefSorter:model#MClassDefSorter#compare */
(nitmethod_t)standard___standard__Comparator___sort, /* pointer to model:MClassDefSorter:sorter#Comparator#sort */
(nitmethod_t)standard___standard__Comparator___sub_sort, /* pointer to model:MClassDefSorter:sorter#Comparator#sub_sort */
(nitmethod_t)standard___standard__Comparator___quick_sort, /* pointer to model:MClassDefSorter:sorter#Comparator#quick_sort */
(nitmethod_t)standard___standard__Comparator___bubble_sort, /* pointer to model:MClassDefSorter:sorter#Comparator#bubble_sort */
(nitmethod_t)nit__model___nit__model__MClassDefSorter___mmodule, /* pointer to model:MClassDefSorter:model#MClassDefSorter#mmodule */
(nitmethod_t)nit__model___nit__model__MClassDefSorter___mmodule_61d, /* pointer to model:MClassDefSorter:model#MClassDefSorter#mmodule= */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MClassDefSorter:kernel#Object#init */
}
};
/* allocate MClassDefSorter */
val* NEW_nit__model__MClassDefSorter(const struct type* type) {
val* self /* : MClassDefSorter */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__model__MClassDefSorter;
return self;
}
/* runtime class nit__model__MPropDefSorter */
const struct class class_nit__model__MPropDefSorter = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MPropDefSorter:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MPropDefSorter:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MPropDefSorter:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MPropDefSorter:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MPropDefSorter:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to model:MPropDefSorter:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MPropDefSorter:kernel#Object#sys */
(nitmethod_t)nit__model___nit__model__MPropDefSorter___standard__kernel__Object__init, /* pointer to model:MPropDefSorter:model#MPropDefSorter#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to model:MPropDefSorter:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to model:MPropDefSorter:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MPropDefSorter:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MPropDefSorter:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MPropDefSorter:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MPropDefSorter:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to model:MPropDefSorter:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to model:MPropDefSorter:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MPropDefSorter:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to model:MPropDefSorter:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to model:MPropDefSorter:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to model:MPropDefSorter:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to model:MPropDefSorter:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to model:MPropDefSorter:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to model:MPropDefSorter:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to model:MPropDefSorter:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to model:MPropDefSorter:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to model:MPropDefSorter:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to model:MPropDefSorter:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to model:MPropDefSorter:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to model:MPropDefSorter:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to model:MPropDefSorter:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to model:MPropDefSorter:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to model:MPropDefSorter:model#Object#extern_kind */
(nitmethod_t)nit__model___nit__model__MPropDefSorter___standard__sorter__Comparator__compare, /* pointer to model:MPropDefSorter:model#MPropDefSorter#compare */
(nitmethod_t)standard___standard__Comparator___sort, /* pointer to model:MPropDefSorter:sorter#Comparator#sort */
(nitmethod_t)standard___standard__Comparator___sub_sort, /* pointer to model:MPropDefSorter:sorter#Comparator#sub_sort */
(nitmethod_t)standard___standard__Comparator___quick_sort, /* pointer to model:MPropDefSorter:sorter#Comparator#quick_sort */
(nitmethod_t)standard___standard__Comparator___bubble_sort, /* pointer to model:MPropDefSorter:sorter#Comparator#bubble_sort */
(nitmethod_t)nit__model___nit__model__MPropDefSorter___mmodule, /* pointer to model:MPropDefSorter:model#MPropDefSorter#mmodule */
(nitmethod_t)nit__model___nit__model__MPropDefSorter___mmodule_61d, /* pointer to model:MPropDefSorter:model#MPropDefSorter#mmodule= */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MPropDefSorter:kernel#Object#init */
}
};
/* allocate MPropDefSorter */
val* NEW_nit__model__MPropDefSorter(const struct type* type) {
val* self /* : MPropDefSorter */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__model__MPropDefSorter;
return self;
}
/* runtime class nit__MClass */
const struct class class_nit__MClass = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MClass:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MClass:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MClass:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MClass:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MClass:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to model:MClass:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MClass:kernel#Object#sys */
(nitmethod_t)nit___nit__MClass___standard__kernel__Object__init, /* pointer to model:MClass:model#MClass#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to model:MClass:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__MClass___standard__string__Object__to_s, /* pointer to model:MClass:model#MClass#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MClass:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MClass:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MClass:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MClass:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to model:MClass:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to model:MClass:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MClass:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to model:MClass:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to model:MClass:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to model:MClass:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to model:MClass:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to model:MClass:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to model:MClass:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to model:MClass:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to model:MClass:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to model:MClass:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to model:MClass:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to model:MClass:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to model:MClass:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to model:MClass:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to model:MClass:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to model:MClass:model#Object#extern_kind */
(nitmethod_t)nit___nit__MClass___nit__model_base__MEntity__name, /* pointer to model:MClass:model#MClass#name */
(nitmethod_t)nit___nit__MClass___nit__model_base__MEntity__full_name, /* pointer to model:MClass:model#MClass#full_name */
(nitmethod_t)nit___nit__MClass___nit__model_base__MEntity__c_name, /* pointer to model:MClass:model#MClass#c_name */
(nitmethod_t)nit___nit__MClass___nit__model_base__MEntity__model, /* pointer to model:MClass:model#MClass#model */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MClass:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MClass:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MClass:mdoc#MEntity#deprecation */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MClass:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MClass:separate_compiler#MEntity#const_color */
(nitmethod_t)nit___nit__MClass___intro_mmodule, /* pointer to model:MClass:model#MClass#intro_mmodule */
(nitmethod_t)nit___nit__MClass___intro_mmodule_61d, /* pointer to model:MClass:model#MClass#intro_mmodule= */
(nitmethod_t)nit___nit__MClass___name_61d, /* pointer to model:MClass:model#MClass#name= */
(nitmethod_t)nit___nit__MClass___arity, /* pointer to model:MClass:model#MClass#arity */
(nitmethod_t)nit___nit__MClass___arity_61d, /* pointer to model:MClass:model#MClass#arity= */
(nitmethod_t)nit___nit__MClass___mparameters, /* pointer to model:MClass:model#MClass#mparameters */
(nitmethod_t)nit___nit__MClass___mparameters_61d, /* pointer to model:MClass:model#MClass#mparameters= */
(nitmethod_t)nit___nit__MClass___setup_parameter_names, /* pointer to model:MClass:model#MClass#setup_parameter_names */
(nitmethod_t)nit___nit__MClass___kind, /* pointer to model:MClass:model#MClass#kind */
(nitmethod_t)nit___nit__MClass___kind_61d, /* pointer to model:MClass:model#MClass#kind= */
(nitmethod_t)nit___nit__MClass___visibility, /* pointer to model:MClass:model#MClass#visibility */
(nitmethod_t)nit___nit__MClass___visibility_61d, /* pointer to model:MClass:model#MClass#visibility= */
(nitmethod_t)nit___nit__MClass___mclassdefs, /* pointer to model:MClass:model#MClass#mclassdefs */
(nitmethod_t)nit___nit__MClass___intro, /* pointer to model:MClass:model#MClass#intro */
(nitmethod_t)nit___nit__MClass___intro_61d, /* pointer to model:MClass:model#MClass#intro= */
(nitmethod_t)nit___nit__MClass___in_hierarchy, /* pointer to model:MClass:model#MClass#in_hierarchy */
(nitmethod_t)nit___nit__MClass___mclass_type, /* pointer to model:MClass:model#MClass#mclass_type */
(nitmethod_t)nit___nit__MClass___mclass_type_61d, /* pointer to model:MClass:model#MClass#mclass_type= */
(nitmethod_t)nit___nit__MClass___get_mtype, /* pointer to model:MClass:model#MClass#get_mtype */
(nitmethod_t)nit___nit__MClass___get_mtype_cache, /* pointer to model:MClass:model#MClass#get_mtype_cache */
(nitmethod_t)nit__modelize_property___MClass___root_init, /* pointer to model:MClass:modelize_property#MClass#root_init */
(nitmethod_t)nit__modelize_property___MClass___root_init_61d, /* pointer to model:MClass:modelize_property#MClass#root_init= */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MClass:kernel#Object#init */
}
};
/* allocate MClass */
val* NEW_nit__MClass(const struct type* type) {
val* self /* : MClass */;
val* var /* : null */;
val* var1 /* : Array[MParameterType] */;
val* var2 /* : Array[MClassDef] */;
val* var3 /* : HashMap[Array[MType], MGenericType] */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 19*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MClass;
var = NULL;
self->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var; /* _deprecation on <self:MClass exact> */
var1 = NEW_standard__Array(&type_standard__Array__nit__MParameterType);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[MParameterType]>*/
}
self->attrs[COLOR_nit__model__MClass___mparameters].val = var1; /* _mparameters on <self:MClass exact> */
var2 = NEW_standard__Array(&type_standard__Array__nit__MClassDef);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[MClassDef]>*/
}
self->attrs[COLOR_nit__model__MClass___mclassdefs].val = var2; /* _mclassdefs on <self:MClass exact> */
var3 = NEW_standard__HashMap(&type_standard__HashMap__standard__Array__nit__MType__nit__MGenericType);
{
standard___standard__HashMap___standard__kernel__Object__init(var3); /* Direct call hash_collection#HashMap#init on <var3:HashMap[Array[MType], MGenericType]>*/
}
self->attrs[COLOR_nit__model__MClass___get_mtype_cache].val = var3; /* _get_mtype_cache on <self:MClass exact> */
var4 = NULL;
self->attrs[COLOR_nit__modelize_property__MClass___root_init].val = var4; /* _root_init on <self:MClass exact> */
return self;
}
/* runtime class nit__MClassDef */
const struct class class_nit__MClassDef = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MClassDef:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MClassDef:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MClassDef:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MClassDef:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MClassDef:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to model:MClassDef:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MClassDef:kernel#Object#sys */
(nitmethod_t)nit___nit__MClassDef___standard__kernel__Object__init, /* pointer to model:MClassDef:model#MClassDef#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to model:MClassDef:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__MClassDef___standard__string__Object__to_s, /* pointer to model:MClassDef:model#MClassDef#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MClassDef:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MClassDef:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MClassDef:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MClassDef:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to model:MClassDef:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to model:MClassDef:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MClassDef:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to model:MClassDef:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to model:MClassDef:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to model:MClassDef:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to model:MClassDef:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to model:MClassDef:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to model:MClassDef:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to model:MClassDef:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to model:MClassDef:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to model:MClassDef:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to model:MClassDef:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to model:MClassDef:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to model:MClassDef:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to model:MClassDef:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to model:MClassDef:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to model:MClassDef:model#Object#extern_kind */
(nitmethod_t)nit___nit__MClassDef___nit__model_base__MEntity__name, /* pointer to model:MClassDef:model#MClassDef#name */
(nitmethod_t)nit___nit__MClassDef___nit__model_base__MEntity__full_name, /* pointer to model:MClassDef:model#MClassDef#full_name */
(nitmethod_t)nit___nit__MClassDef___nit__model_base__MEntity__c_name, /* pointer to model:MClassDef:model#MClassDef#c_name */
(nitmethod_t)nit___nit__MClassDef___nit__model_base__MEntity__model, /* pointer to model:MClassDef:model#MClassDef#model */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MClassDef:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MClassDef:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MClassDef:mdoc#MEntity#deprecation */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MClassDef:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MClassDef:separate_compiler#MEntity#const_color */
(nitmethod_t)nit___nit__MClassDef___mmodule, /* pointer to model:MClassDef:model#MClassDef#mmodule */
(nitmethod_t)nit___nit__MClassDef___mmodule_61d, /* pointer to model:MClassDef:model#MClassDef#mmodule= */
(nitmethod_t)nit___nit__MClassDef___mclass, /* pointer to model:MClassDef:model#MClassDef#mclass */
(nitmethod_t)nit___nit__MClassDef___mclass_61d, /* pointer to model:MClassDef:model#MClassDef#mclass= */
(nitmethod_t)nit___nit__MClassDef___bound_mtype, /* pointer to model:MClassDef:model#MClassDef#bound_mtype */
(nitmethod_t)nit___nit__MClassDef___bound_mtype_61d, /* pointer to model:MClassDef:model#MClassDef#bound_mtype= */
(nitmethod_t)nit___nit__MClassDef___location, /* pointer to model:MClassDef:model#MClassDef#location */
(nitmethod_t)nit___nit__MClassDef___location_61d, /* pointer to model:MClassDef:model#MClassDef#location= */
(nitmethod_t)nit___nit__MClassDef___to_s_61d, /* pointer to model:MClassDef:model#MClassDef#to_s= */
(nitmethod_t)nit___nit__MClassDef___supertypes, /* pointer to model:MClassDef:model#MClassDef#supertypes */
(nitmethod_t)nit___nit__MClassDef___set_supertypes, /* pointer to model:MClassDef:model#MClassDef#set_supertypes */
(nitmethod_t)nit___nit__MClassDef___add_in_hierarchy, /* pointer to model:MClassDef:model#MClassDef#add_in_hierarchy */
(nitmethod_t)nit___nit__MClassDef___in_hierarchy, /* pointer to model:MClassDef:model#MClassDef#in_hierarchy */
(nitmethod_t)nit___nit__MClassDef___in_hierarchy_61d, /* pointer to model:MClassDef:model#MClassDef#in_hierarchy= */
(nitmethod_t)nit___nit__MClassDef___is_intro, /* pointer to model:MClassDef:model#MClassDef#is_intro */
(nitmethod_t)nit___nit__MClassDef___intro_mproperties, /* pointer to model:MClassDef:model#MClassDef#intro_mproperties */
(nitmethod_t)nit___nit__MClassDef___mpropdefs, /* pointer to model:MClassDef:model#MClassDef#mpropdefs */
(nitmethod_t)nit__modelize_property___MClassDef___mprop2npropdef, /* pointer to model:MClassDef:modelize_property#MClassDef#mprop2npropdef */
(nitmethod_t)nit__modelize_property___MClassDef___build_self_type, /* pointer to model:MClassDef:modelize_property#MClassDef#build_self_type */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MClassDef:kernel#Object#init */
}
};
/* allocate MClassDef */
val* NEW_nit__MClassDef(const struct type* type) {
val* self /* : MClassDef */;
val* var /* : null */;
val* var1 /* : Array[MClassType] */;
val* var2 /* : null */;
val* var3 /* : Array[MProperty] */;
val* var4 /* : Array[MPropDef] */;
val* var5 /* : HashMap[MProperty, APropdef] */;
self = nit_alloc(sizeof(struct instance) + 18*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MClassDef;
var = NULL;
self->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var; /* _deprecation on <self:MClassDef exact> */
var1 = NEW_standard__Array(&type_standard__Array__nit__MClassType);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[MClassType]>*/
}
self->attrs[COLOR_nit__model__MClassDef___supertypes].val = var1; /* _supertypes on <self:MClassDef exact> */
var2 = NULL;
self->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val = var2; /* _in_hierarchy on <self:MClassDef exact> */
var3 = NEW_standard__Array(&type_standard__Array__nit__MProperty);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[MProperty]>*/
}
self->attrs[COLOR_nit__model__MClassDef___intro_mproperties].val = var3; /* _intro_mproperties on <self:MClassDef exact> */
var4 = NEW_standard__Array(&type_standard__Array__nit__MPropDef);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[MPropDef]>*/
}
self->attrs[COLOR_nit__model__MClassDef___mpropdefs].val = var4; /* _mpropdefs on <self:MClassDef exact> */
var5 = NEW_standard__HashMap(&type_standard__HashMap__nit__MProperty__nit__APropdef);
{
standard___standard__HashMap___standard__kernel__Object__init(var5); /* Direct call hash_collection#HashMap#init on <var5:HashMap[MProperty, APropdef]>*/
}
self->attrs[COLOR_nit__modelize_property__MClassDef___mprop2npropdef].val = var5; /* _mprop2npropdef on <self:MClassDef exact> */
return self;
}
/* runtime class nit__MType */
/* allocate MType */
val* NEW_nit__MType(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MType is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__MClassType */
const struct class class_nit__MClassType = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MClassType:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MClassType:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MClassType:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MClassType:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MClassType:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to model:MClassType:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MClassType:kernel#Object#sys */
(nitmethod_t)nit___nit__MClassType___standard__kernel__Object__init, /* pointer to model:MClassType:model#MClassType#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to model:MClassType:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__MClassType___standard__string__Object__to_s, /* pointer to model:MClassType:model#MClassType#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MClassType:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MClassType:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MClassType:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MClassType:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to model:MClassType:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to model:MClassType:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MClassType:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to model:MClassType:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to model:MClassType:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to model:MClassType:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to model:MClassType:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to model:MClassType:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to model:MClassType:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to model:MClassType:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to model:MClassType:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to model:MClassType:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to model:MClassType:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to model:MClassType:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to model:MClassType:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to model:MClassType:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to model:MClassType:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to model:MClassType:model#Object#extern_kind */
(nitmethod_t)nit___nit__MType___nit__model_base__MEntity__name, /* pointer to model:MClassType:model#MType#name */
(nitmethod_t)nit___nit__MClassType___nit__model_base__MEntity__full_name, /* pointer to model:MClassType:model#MClassType#full_name */
(nitmethod_t)nit___nit__MClassType___nit__model_base__MEntity__c_name, /* pointer to model:MClassType:model#MClassType#c_name */
(nitmethod_t)nit___nit__MClassType___nit__model_base__MEntity__model, /* pointer to model:MClassType:model#MClassType#model */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MClassType:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MClassType:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MClassType:mdoc#MEntity#deprecation */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MClassType:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MClassType:separate_compiler#MEntity#const_color */
(nitmethod_t)nit___nit__MType___is_subtype, /* pointer to model:MClassType:model#MType#is_subtype */
(nitmethod_t)nit___nit__MClassType___MType__anchor_to, /* pointer to model:MClassType:model#MClassType#anchor_to */
(nitmethod_t)nit___nit__MClassType___MType__need_anchor, /* pointer to model:MClassType:model#MClassType#need_anchor */
(nitmethod_t)nit___nit__MType___supertype_to, /* pointer to model:MClassType:model#MType#supertype_to */
(nitmethod_t)nit___nit__MClassType___MType__resolve_for, /* pointer to model:MClassType:model#MClassType#resolve_for */
(nitmethod_t)nit___nit__MType___lookup_bound, /* pointer to model:MClassType:model#MType#lookup_bound */
(nitmethod_t)nit___nit__MType___lookup_fixed, /* pointer to model:MClassType:model#MType#lookup_fixed */
(nitmethod_t)nit___nit__MClassType___MType__can_resolve_for, /* pointer to model:MClassType:model#MClassType#can_resolve_for */
(nitmethod_t)nit___nit__MType___as_nullable, /* pointer to model:MClassType:model#MType#as_nullable */
(nitmethod_t)nit___nit__MType___as_notnullable, /* pointer to model:MClassType:model#MType#as_notnullable */
(nitmethod_t)nit___nit__MType___as_nullable_cache, /* pointer to model:MClassType:model#MType#as_nullable_cache */
(nitmethod_t)nit___nit__MType___as_nullable_cache_61d, /* pointer to model:MClassType:model#MType#as_nullable_cache= */
(nitmethod_t)nit___nit__MType___length, /* pointer to model:MClassType:model#MType#length */
(nitmethod_t)nit___nit__MClassType___MType__collect_mclassdefs, /* pointer to model:MClassType:model#MClassType#collect_mclassdefs */
(nitmethod_t)nit___nit__MClassType___MType__collect_mclasses, /* pointer to model:MClassType:model#MClassType#collect_mclasses */
(nitmethod_t)nit___nit__MClassType___MType__collect_mtypes, /* pointer to model:MClassType:model#MClassType#collect_mtypes */
(nitmethod_t)nit___nit__MType___has_mproperty, /* pointer to model:MClassType:model#MType#has_mproperty */
(nitmethod_t)nit__abstract_compiler___MClassType___MType__ctype, /* pointer to model:MClassType:abstract_compiler#MClassType#ctype */
(nitmethod_t)nit__abstract_compiler___MClassType___MType__ctype_extern, /* pointer to model:MClassType:abstract_compiler#MClassType#ctype_extern */
(nitmethod_t)nit__abstract_compiler___MClassType___MType__ctypename, /* pointer to model:MClassType:abstract_compiler#MClassType#ctypename */
(nitmethod_t)nit___nit__MClassType___mclass, /* pointer to model:MClassType:model#MClassType#mclass */
(nitmethod_t)nit___nit__MClassType___mclass_61d, /* pointer to model:MClassType:model#MClassType#mclass= */
(nitmethod_t)nit___nit__MClassType___arguments, /* pointer to model:MClassType:model#MClassType#arguments */
(nitmethod_t)nit___nit__MClassType___arguments_61d, /* pointer to model:MClassType:model#MClassType#arguments= */
(nitmethod_t)nit___nit__MClassType___collect_mclasses_last_module, /* pointer to model:MClassType:model#MClassType#collect_mclasses_last_module */
(nitmethod_t)nit___nit__MClassType___collect_mclasses_last_module_61d, /* pointer to model:MClassType:model#MClassType#collect_mclasses_last_module= */
(nitmethod_t)nit___nit__MClassType___collect_mclasses_last_module_cache, /* pointer to model:MClassType:model#MClassType#collect_mclasses_last_module_cache */
(nitmethod_t)nit___nit__MClassType___collect_mclasses_last_module_cache_61d, /* pointer to model:MClassType:model#MClassType#collect_mclasses_last_module_cache= */
(nitmethod_t)nit___nit__MClassType___collect_things, /* pointer to model:MClassType:model#MClassType#collect_things */
(nitmethod_t)nit___nit__MClassType___collect_mclassdefs_cache, /* pointer to model:MClassType:model#MClassType#collect_mclassdefs_cache */
(nitmethod_t)nit___nit__MClassType___collect_mclasses_cache, /* pointer to model:MClassType:model#MClassType#collect_mclasses_cache */
(nitmethod_t)nit___nit__MClassType___collect_mtypes_cache, /* pointer to model:MClassType:model#MClassType#collect_mtypes_cache */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MClassType:kernel#Object#init */
(nitmethod_t)nit___nit__MType___anchor_to, /* pointer to model:MClassType:model#MType#anchor_to */
}
};
/* allocate MClassType */
val* NEW_nit__MClassType(const struct type* type) {
val* self /* : MClassType */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : Array[MType] */;
val* var3 /* : null */;
val* var4 /* : HashMap[MModule, Set[MClassDef]] */;
val* var5 /* : HashMap[MModule, Set[MClass]] */;
val* var6 /* : HashMap[MModule, Set[MClassType]] */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MClassType;
var = NULL;
self->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var; /* _deprecation on <self:MClassType exact> */
var1 = NULL;
self->attrs[COLOR_nit__model__MType___as_nullable_cache].val = var1; /* _as_nullable_cache on <self:MClassType exact> */
var2 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[MType]>*/
}
self->attrs[COLOR_nit__model__MClassType___arguments].val = var2; /* _arguments on <self:MClassType exact> */
var3 = NULL;
self->attrs[COLOR_nit__model__MClassType___collect_mclasses_last_module].val = var3; /* _collect_mclasses_last_module on <self:MClassType exact> */
var4 = NEW_standard__HashMap(&type_standard__HashMap__nit__MModule__standard__Set__nit__MClassDef);
{
standard___standard__HashMap___standard__kernel__Object__init(var4); /* Direct call hash_collection#HashMap#init on <var4:HashMap[MModule, Set[MClassDef]]>*/
}
self->attrs[COLOR_nit__model__MClassType___collect_mclassdefs_cache].val = var4; /* _collect_mclassdefs_cache on <self:MClassType exact> */
var5 = NEW_standard__HashMap(&type_standard__HashMap__nit__MModule__standard__Set__nit__MClass);
{
standard___standard__HashMap___standard__kernel__Object__init(var5); /* Direct call hash_collection#HashMap#init on <var5:HashMap[MModule, Set[MClass]]>*/
}
self->attrs[COLOR_nit__model__MClassType___collect_mclasses_cache].val = var5; /* _collect_mclasses_cache on <self:MClassType exact> */
var6 = NEW_standard__HashMap(&type_standard__HashMap__nit__MModule__standard__Set__nit__MClassType);
{
standard___standard__HashMap___standard__kernel__Object__init(var6); /* Direct call hash_collection#HashMap#init on <var6:HashMap[MModule, Set[MClassType]]>*/
}
self->attrs[COLOR_nit__model__MClassType___collect_mtypes_cache].val = var6; /* _collect_mtypes_cache on <self:MClassType exact> */
return self;
}
/* runtime class nit__MGenericType */
const struct class class_nit__MGenericType = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MGenericType:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MGenericType:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MGenericType:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MGenericType:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MGenericType:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to model:MGenericType:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MGenericType:kernel#Object#sys */
(nitmethod_t)nit___nit__MGenericType___standard__kernel__Object__init, /* pointer to model:MGenericType:model#MGenericType#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to model:MGenericType:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__MGenericType___standard__string__Object__to_s, /* pointer to model:MGenericType:model#MGenericType#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MGenericType:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MGenericType:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MGenericType:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MGenericType:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to model:MGenericType:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to model:MGenericType:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MGenericType:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to model:MGenericType:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to model:MGenericType:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to model:MGenericType:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to model:MGenericType:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to model:MGenericType:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to model:MGenericType:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to model:MGenericType:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to model:MGenericType:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to model:MGenericType:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to model:MGenericType:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to model:MGenericType:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to model:MGenericType:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to model:MGenericType:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to model:MGenericType:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to model:MGenericType:model#Object#extern_kind */
(nitmethod_t)nit___nit__MType___nit__model_base__MEntity__name, /* pointer to model:MGenericType:model#MType#name */
(nitmethod_t)nit___nit__MGenericType___nit__model_base__MEntity__full_name, /* pointer to model:MGenericType:model#MGenericType#full_name */
(nitmethod_t)nit___nit__MGenericType___nit__model_base__MEntity__c_name, /* pointer to model:MGenericType:model#MGenericType#c_name */
(nitmethod_t)nit___nit__MClassType___nit__model_base__MEntity__model, /* pointer to model:MGenericType:model#MClassType#model */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MGenericType:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MGenericType:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MGenericType:mdoc#MEntity#deprecation */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MGenericType:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MGenericType:separate_compiler#MEntity#const_color */
(nitmethod_t)nit___nit__MType___is_subtype, /* pointer to model:MGenericType:model#MType#is_subtype */
(nitmethod_t)nit___nit__MClassType___MType__anchor_to, /* pointer to model:MGenericType:model#MClassType#anchor_to */
(nitmethod_t)nit___nit__MGenericType___MType__need_anchor, /* pointer to model:MGenericType:model#MGenericType#need_anchor */
(nitmethod_t)nit___nit__MType___supertype_to, /* pointer to model:MGenericType:model#MType#supertype_to */
(nitmethod_t)nit___nit__MGenericType___MType__resolve_for, /* pointer to model:MGenericType:model#MGenericType#resolve_for */
(nitmethod_t)nit___nit__MType___lookup_bound, /* pointer to model:MGenericType:model#MType#lookup_bound */
(nitmethod_t)nit___nit__MType___lookup_fixed, /* pointer to model:MGenericType:model#MType#lookup_fixed */
(nitmethod_t)nit___nit__MGenericType___MType__can_resolve_for, /* pointer to model:MGenericType:model#MGenericType#can_resolve_for */
(nitmethod_t)nit___nit__MType___as_nullable, /* pointer to model:MGenericType:model#MType#as_nullable */
(nitmethod_t)nit___nit__MType___as_notnullable, /* pointer to model:MGenericType:model#MType#as_notnullable */
(nitmethod_t)nit___nit__MType___as_nullable_cache, /* pointer to model:MGenericType:model#MType#as_nullable_cache */
(nitmethod_t)nit___nit__MType___as_nullable_cache_61d, /* pointer to model:MGenericType:model#MType#as_nullable_cache= */
(nitmethod_t)nit___nit__MGenericType___MType__length, /* pointer to model:MGenericType:model#MGenericType#length */
(nitmethod_t)nit___nit__MClassType___MType__collect_mclassdefs, /* pointer to model:MGenericType:model#MClassType#collect_mclassdefs */
(nitmethod_t)nit___nit__MClassType___MType__collect_mclasses, /* pointer to model:MGenericType:model#MClassType#collect_mclasses */
(nitmethod_t)nit___nit__MClassType___MType__collect_mtypes, /* pointer to model:MGenericType:model#MClassType#collect_mtypes */
(nitmethod_t)nit___nit__MType___has_mproperty, /* pointer to model:MGenericType:model#MType#has_mproperty */
(nitmethod_t)nit__abstract_compiler___MClassType___MType__ctype, /* pointer to model:MGenericType:abstract_compiler#MClassType#ctype */
(nitmethod_t)nit__abstract_compiler___MClassType___MType__ctype_extern, /* pointer to model:MGenericType:abstract_compiler#MClassType#ctype_extern */
(nitmethod_t)nit__abstract_compiler___MClassType___MType__ctypename, /* pointer to model:MGenericType:abstract_compiler#MClassType#ctypename */
(nitmethod_t)nit___nit__MClassType___mclass, /* pointer to model:MGenericType:model#MClassType#mclass */
(nitmethod_t)nit___nit__MClassType___mclass_61d, /* pointer to model:MGenericType:model#MClassType#mclass= */
(nitmethod_t)nit___nit__MGenericType___MClassType__arguments, /* pointer to model:MGenericType:model#MGenericType#arguments */
(nitmethod_t)nit___nit__MGenericType___MClassType__arguments_61d, /* pointer to model:MGenericType:model#MGenericType#arguments= */
(nitmethod_t)nit___nit__MClassType___collect_mclasses_last_module, /* pointer to model:MGenericType:model#MClassType#collect_mclasses_last_module */
(nitmethod_t)nit___nit__MClassType___collect_mclasses_last_module_61d, /* pointer to model:MGenericType:model#MClassType#collect_mclasses_last_module= */
(nitmethod_t)nit___nit__MClassType___collect_mclasses_last_module_cache, /* pointer to model:MGenericType:model#MClassType#collect_mclasses_last_module_cache */
(nitmethod_t)nit___nit__MClassType___collect_mclasses_last_module_cache_61d, /* pointer to model:MGenericType:model#MClassType#collect_mclasses_last_module_cache= */
(nitmethod_t)nit___nit__MClassType___collect_things, /* pointer to model:MGenericType:model#MClassType#collect_things */
(nitmethod_t)nit___nit__MClassType___collect_mclassdefs_cache, /* pointer to model:MGenericType:model#MClassType#collect_mclassdefs_cache */
(nitmethod_t)nit___nit__MClassType___collect_mclasses_cache, /* pointer to model:MGenericType:model#MClassType#collect_mclasses_cache */
(nitmethod_t)nit___nit__MClassType___collect_mtypes_cache, /* pointer to model:MGenericType:model#MClassType#collect_mtypes_cache */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MGenericType:kernel#Object#init */
(nitmethod_t)nit___nit__MType___anchor_to, /* pointer to model:MGenericType:model#MType#anchor_to */
(nitmethod_t)nit___nit__MGenericType___to_s_61d, /* pointer to model:MGenericType:model#MGenericType#to_s= */
(nitmethod_t)nit___nit__MGenericType___need_anchor_61d, /* pointer to model:MGenericType:model#MGenericType#need_anchor= */
(nitmethod_t)nit___nit__MClassType___standard__kernel__Object__init, /* pointer to model:MGenericType:model#MClassType#init */
}
};
/* allocate MGenericType */
val* NEW_nit__MGenericType(const struct type* type) {
val* self /* : MGenericType */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : Array[MType] */;
val* var3 /* : null */;
val* var4 /* : HashMap[MModule, Set[MClassDef]] */;
val* var5 /* : HashMap[MModule, Set[MClass]] */;
val* var6 /* : HashMap[MModule, Set[MClassType]] */;
self = nit_alloc(sizeof(struct instance) + 19*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MGenericType;
var = NULL;
self->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var; /* _deprecation on <self:MGenericType exact> */
var1 = NULL;
self->attrs[COLOR_nit__model__MType___as_nullable_cache].val = var1; /* _as_nullable_cache on <self:MGenericType exact> */
var2 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[MType]>*/
}
self->attrs[COLOR_nit__model__MClassType___arguments].val = var2; /* _arguments on <self:MGenericType exact> */
var3 = NULL;
self->attrs[COLOR_nit__model__MClassType___collect_mclasses_last_module].val = var3; /* _collect_mclasses_last_module on <self:MGenericType exact> */
var4 = NEW_standard__HashMap(&type_standard__HashMap__nit__MModule__standard__Set__nit__MClassDef);
{
standard___standard__HashMap___standard__kernel__Object__init(var4); /* Direct call hash_collection#HashMap#init on <var4:HashMap[MModule, Set[MClassDef]]>*/
}
self->attrs[COLOR_nit__model__MClassType___collect_mclassdefs_cache].val = var4; /* _collect_mclassdefs_cache on <self:MGenericType exact> */
var5 = NEW_standard__HashMap(&type_standard__HashMap__nit__MModule__standard__Set__nit__MClass);
{
standard___standard__HashMap___standard__kernel__Object__init(var5); /* Direct call hash_collection#HashMap#init on <var5:HashMap[MModule, Set[MClass]]>*/
}
self->attrs[COLOR_nit__model__MClassType___collect_mclasses_cache].val = var5; /* _collect_mclasses_cache on <self:MGenericType exact> */
var6 = NEW_standard__HashMap(&type_standard__HashMap__nit__MModule__standard__Set__nit__MClassType);
{
standard___standard__HashMap___standard__kernel__Object__init(var6); /* Direct call hash_collection#HashMap#init on <var6:HashMap[MModule, Set[MClassType]]>*/
}
self->attrs[COLOR_nit__model__MClassType___collect_mtypes_cache].val = var6; /* _collect_mtypes_cache on <self:MGenericType exact> */
return self;
}
/* runtime class nit__MVirtualType */
const struct class class_nit__MVirtualType = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MVirtualType:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MVirtualType:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MVirtualType:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MVirtualType:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MVirtualType:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to model:MVirtualType:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MVirtualType:kernel#Object#sys */
(nitmethod_t)nit___nit__MVirtualType___standard__kernel__Object__init, /* pointer to model:MVirtualType:model#MVirtualType#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to model:MVirtualType:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__MVirtualType___standard__string__Object__to_s, /* pointer to model:MVirtualType:model#MVirtualType#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MVirtualType:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MVirtualType:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MVirtualType:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MVirtualType:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to model:MVirtualType:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to model:MVirtualType:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MVirtualType:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to model:MVirtualType:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to model:MVirtualType:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to model:MVirtualType:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to model:MVirtualType:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to model:MVirtualType:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to model:MVirtualType:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to model:MVirtualType:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to model:MVirtualType:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to model:MVirtualType:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to model:MVirtualType:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to model:MVirtualType:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to model:MVirtualType:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to model:MVirtualType:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to model:MVirtualType:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to model:MVirtualType:model#Object#extern_kind */
(nitmethod_t)nit___nit__MType___nit__model_base__MEntity__name, /* pointer to model:MVirtualType:model#MType#name */
(nitmethod_t)nit___nit__MVirtualType___nit__model_base__MEntity__full_name, /* pointer to model:MVirtualType:model#MVirtualType#full_name */
(nitmethod_t)nit___nit__MVirtualType___nit__model_base__MEntity__c_name, /* pointer to model:MVirtualType:model#MVirtualType#c_name */
(nitmethod_t)nit___nit__MVirtualType___nit__model_base__MEntity__model, /* pointer to model:MVirtualType:model#MVirtualType#model */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MVirtualType:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MVirtualType:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MVirtualType:mdoc#MEntity#deprecation */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MVirtualType:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MVirtualType:separate_compiler#MEntity#const_color */
(nitmethod_t)nit___nit__MType___is_subtype, /* pointer to model:MVirtualType:model#MType#is_subtype */
(nitmethod_t)nit___nit__MType___anchor_to, /* pointer to model:MVirtualType:model#MType#anchor_to */
(nitmethod_t)nit___nit__MType___need_anchor, /* pointer to model:MVirtualType:model#MType#need_anchor */
(nitmethod_t)nit___nit__MType___supertype_to, /* pointer to model:MVirtualType:model#MType#supertype_to */
(nitmethod_t)nit___nit__MVirtualType___MType__resolve_for, /* pointer to model:MVirtualType:model#MVirtualType#resolve_for */
(nitmethod_t)nit___nit__MVirtualType___MType__lookup_bound, /* pointer to model:MVirtualType:model#MVirtualType#lookup_bound */
(nitmethod_t)nit___nit__MVirtualType___MType__lookup_fixed, /* pointer to model:MVirtualType:model#MVirtualType#lookup_fixed */
(nitmethod_t)nit___nit__MVirtualType___MType__can_resolve_for, /* pointer to model:MVirtualType:model#MVirtualType#can_resolve_for */
(nitmethod_t)nit___nit__MType___as_nullable, /* pointer to model:MVirtualType:model#MType#as_nullable */
(nitmethod_t)nit___nit__MType___as_notnullable, /* pointer to model:MVirtualType:model#MType#as_notnullable */
(nitmethod_t)nit___nit__MType___as_nullable_cache, /* pointer to model:MVirtualType:model#MType#as_nullable_cache */
(nitmethod_t)nit___nit__MType___as_nullable_cache_61d, /* pointer to model:MVirtualType:model#MType#as_nullable_cache= */
(nitmethod_t)nit___nit__MType___length, /* pointer to model:MVirtualType:model#MType#length */
(nitmethod_t)nit___nit__MType___collect_mclassdefs, /* pointer to model:MVirtualType:model#MType#collect_mclassdefs */
(nitmethod_t)nit___nit__MType___collect_mclasses, /* pointer to model:MVirtualType:model#MType#collect_mclasses */
(nitmethod_t)nit___nit__MType___collect_mtypes, /* pointer to model:MVirtualType:model#MType#collect_mtypes */
(nitmethod_t)nit___nit__MType___has_mproperty, /* pointer to model:MVirtualType:model#MType#has_mproperty */
(nitmethod_t)nit__abstract_compiler___MType___ctype, /* pointer to model:MVirtualType:abstract_compiler#MType#ctype */
(nitmethod_t)nit__abstract_compiler___MType___ctype_extern, /* pointer to model:MVirtualType:abstract_compiler#MType#ctype_extern */
(nitmethod_t)nit__abstract_compiler___MType___ctypename, /* pointer to model:MVirtualType:abstract_compiler#MType#ctypename */
(nitmethod_t)nit___nit__MVirtualType___mproperty, /* pointer to model:MVirtualType:model#MVirtualType#mproperty */
(nitmethod_t)nit___nit__MVirtualType___mproperty_61d, /* pointer to model:MVirtualType:model#MVirtualType#mproperty= */
(nitmethod_t)nit___nit__MVirtualType___lookup_single_definition, /* pointer to model:MVirtualType:model#MVirtualType#lookup_single_definition */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MVirtualType:kernel#Object#init */
}
};
/* allocate MVirtualType */
val* NEW_nit__MVirtualType(const struct type* type) {
val* self /* : MVirtualType */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MVirtualType;
var = NULL;
self->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var; /* _deprecation on <self:MVirtualType exact> */
var1 = NULL;
self->attrs[COLOR_nit__model__MType___as_nullable_cache].val = var1; /* _as_nullable_cache on <self:MVirtualType exact> */
return self;
}
/* runtime class nit__MParameterType */
const struct class class_nit__MParameterType = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MParameterType:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MParameterType:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MParameterType:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MParameterType:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MParameterType:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to model:MParameterType:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MParameterType:kernel#Object#sys */
(nitmethod_t)nit___nit__MParameterType___standard__kernel__Object__init, /* pointer to model:MParameterType:model#MParameterType#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to model:MParameterType:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__MParameterType___standard__string__Object__to_s, /* pointer to model:MParameterType:model#MParameterType#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MParameterType:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MParameterType:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MParameterType:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MParameterType:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to model:MParameterType:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to model:MParameterType:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MParameterType:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to model:MParameterType:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to model:MParameterType:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to model:MParameterType:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to model:MParameterType:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to model:MParameterType:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to model:MParameterType:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to model:MParameterType:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to model:MParameterType:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to model:MParameterType:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to model:MParameterType:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to model:MParameterType:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to model:MParameterType:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to model:MParameterType:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to model:MParameterType:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to model:MParameterType:model#Object#extern_kind */
(nitmethod_t)nit___nit__MParameterType___nit__model_base__MEntity__name, /* pointer to model:MParameterType:model#MParameterType#name */
(nitmethod_t)nit___nit__MParameterType___nit__model_base__MEntity__full_name, /* pointer to model:MParameterType:model#MParameterType#full_name */
(nitmethod_t)nit___nit__MParameterType___nit__model_base__MEntity__c_name, /* pointer to model:MParameterType:model#MParameterType#c_name */
(nitmethod_t)nit___nit__MParameterType___nit__model_base__MEntity__model, /* pointer to model:MParameterType:model#MParameterType#model */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MParameterType:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MParameterType:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MParameterType:mdoc#MEntity#deprecation */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MParameterType:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MParameterType:separate_compiler#MEntity#const_color */
(nitmethod_t)nit___nit__MType___is_subtype, /* pointer to model:MParameterType:model#MType#is_subtype */
(nitmethod_t)nit___nit__MType___anchor_to, /* pointer to model:MParameterType:model#MType#anchor_to */
(nitmethod_t)nit___nit__MType___need_anchor, /* pointer to model:MParameterType:model#MType#need_anchor */
(nitmethod_t)nit___nit__MType___supertype_to, /* pointer to model:MParameterType:model#MType#supertype_to */
(nitmethod_t)nit___nit__MParameterType___MType__resolve_for, /* pointer to model:MParameterType:model#MParameterType#resolve_for */
(nitmethod_t)nit___nit__MParameterType___MType__lookup_bound, /* pointer to model:MParameterType:model#MParameterType#lookup_bound */
(nitmethod_t)nit___nit__MParameterType___MType__lookup_fixed, /* pointer to model:MParameterType:model#MParameterType#lookup_fixed */
(nitmethod_t)nit___nit__MParameterType___MType__can_resolve_for, /* pointer to model:MParameterType:model#MParameterType#can_resolve_for */
(nitmethod_t)nit___nit__MType___as_nullable, /* pointer to model:MParameterType:model#MType#as_nullable */
(nitmethod_t)nit___nit__MType___as_notnullable, /* pointer to model:MParameterType:model#MType#as_notnullable */
(nitmethod_t)nit___nit__MType___as_nullable_cache, /* pointer to model:MParameterType:model#MType#as_nullable_cache */
(nitmethod_t)nit___nit__MType___as_nullable_cache_61d, /* pointer to model:MParameterType:model#MType#as_nullable_cache= */
(nitmethod_t)nit___nit__MType___length, /* pointer to model:MParameterType:model#MType#length */
(nitmethod_t)nit___nit__MType___collect_mclassdefs, /* pointer to model:MParameterType:model#MType#collect_mclassdefs */
(nitmethod_t)nit___nit__MType___collect_mclasses, /* pointer to model:MParameterType:model#MType#collect_mclasses */
(nitmethod_t)nit___nit__MType___collect_mtypes, /* pointer to model:MParameterType:model#MType#collect_mtypes */
(nitmethod_t)nit___nit__MType___has_mproperty, /* pointer to model:MParameterType:model#MType#has_mproperty */
(nitmethod_t)nit__abstract_compiler___MType___ctype, /* pointer to model:MParameterType:abstract_compiler#MType#ctype */
(nitmethod_t)nit__abstract_compiler___MType___ctype_extern, /* pointer to model:MParameterType:abstract_compiler#MType#ctype_extern */
(nitmethod_t)nit__abstract_compiler___MType___ctypename, /* pointer to model:MParameterType:abstract_compiler#MType#ctypename */
(nitmethod_t)nit___nit__MParameterType___mclass, /* pointer to model:MParameterType:model#MParameterType#mclass */
(nitmethod_t)nit___nit__MParameterType___mclass_61d, /* pointer to model:MParameterType:model#MParameterType#mclass= */
(nitmethod_t)nit___nit__MParameterType___rank, /* pointer to model:MParameterType:model#MParameterType#rank */
(nitmethod_t)nit___nit__MParameterType___rank_61d, /* pointer to model:MParameterType:model#MParameterType#rank= */
(nitmethod_t)nit___nit__MParameterType___name_61d, /* pointer to model:MParameterType:model#MParameterType#name= */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MParameterType:kernel#Object#init */
}
};
/* allocate MParameterType */
val* NEW_nit__MParameterType(const struct type* type) {
val* self /* : MParameterType */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MParameterType;
var = NULL;
self->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var; /* _deprecation on <self:MParameterType exact> */
var1 = NULL;
self->attrs[COLOR_nit__model__MType___as_nullable_cache].val = var1; /* _as_nullable_cache on <self:MParameterType exact> */
return self;
}
/* runtime class nit__MNullableType */
const struct class class_nit__MNullableType = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MNullableType:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MNullableType:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MNullableType:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MNullableType:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MNullableType:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to model:MNullableType:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MNullableType:kernel#Object#sys */
(nitmethod_t)nit___nit__MNullableType___standard__kernel__Object__init, /* pointer to model:MNullableType:model#MNullableType#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to model:MNullableType:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__MNullableType___standard__string__Object__to_s, /* pointer to model:MNullableType:model#MNullableType#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MNullableType:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MNullableType:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MNullableType:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MNullableType:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to model:MNullableType:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to model:MNullableType:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MNullableType:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to model:MNullableType:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to model:MNullableType:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to model:MNullableType:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to model:MNullableType:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to model:MNullableType:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to model:MNullableType:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to model:MNullableType:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to model:MNullableType:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to model:MNullableType:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to model:MNullableType:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to model:MNullableType:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to model:MNullableType:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to model:MNullableType:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to model:MNullableType:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to model:MNullableType:model#Object#extern_kind */
(nitmethod_t)nit___nit__MType___nit__model_base__MEntity__name, /* pointer to model:MNullableType:model#MType#name */
(nitmethod_t)nit___nit__MNullableType___nit__model_base__MEntity__full_name, /* pointer to model:MNullableType:model#MNullableType#full_name */
(nitmethod_t)nit___nit__MNullableType___nit__model_base__MEntity__c_name, /* pointer to model:MNullableType:model#MNullableType#c_name */
(nitmethod_t)nit___nit__MNullableType___nit__model_base__MEntity__model, /* pointer to model:MNullableType:model#MNullableType#model */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MNullableType:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MNullableType:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MNullableType:mdoc#MEntity#deprecation */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MNullableType:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MNullableType:separate_compiler#MEntity#const_color */
(nitmethod_t)nit___nit__MType___is_subtype, /* pointer to model:MNullableType:model#MType#is_subtype */
(nitmethod_t)nit___nit__MType___anchor_to, /* pointer to model:MNullableType:model#MType#anchor_to */
(nitmethod_t)nit___nit__MNullableType___MType__need_anchor, /* pointer to model:MNullableType:model#MNullableType#need_anchor */
(nitmethod_t)nit___nit__MType___supertype_to, /* pointer to model:MNullableType:model#MType#supertype_to */
(nitmethod_t)nit___nit__MNullableType___MType__resolve_for, /* pointer to model:MNullableType:model#MNullableType#resolve_for */
(nitmethod_t)nit___nit__MType___lookup_bound, /* pointer to model:MNullableType:model#MType#lookup_bound */
(nitmethod_t)nit___nit__MNullableType___MType__lookup_fixed, /* pointer to model:MNullableType:model#MNullableType#lookup_fixed */
(nitmethod_t)nit___nit__MNullableType___MType__can_resolve_for, /* pointer to model:MNullableType:model#MNullableType#can_resolve_for */
(nitmethod_t)nit___nit__MNullableType___MType__as_nullable, /* pointer to model:MNullableType:model#MNullableType#as_nullable */
(nitmethod_t)nit___nit__MNullableType___MType__as_notnullable, /* pointer to model:MNullableType:model#MNullableType#as_notnullable */
(nitmethod_t)nit___nit__MType___as_nullable_cache, /* pointer to model:MNullableType:model#MType#as_nullable_cache */
(nitmethod_t)nit___nit__MType___as_nullable_cache_61d, /* pointer to model:MNullableType:model#MType#as_nullable_cache= */
(nitmethod_t)nit___nit__MNullableType___MType__length, /* pointer to model:MNullableType:model#MNullableType#length */
(nitmethod_t)nit___nit__MNullableType___MType__collect_mclassdefs, /* pointer to model:MNullableType:model#MNullableType#collect_mclassdefs */
(nitmethod_t)nit___nit__MNullableType___MType__collect_mclasses, /* pointer to model:MNullableType:model#MNullableType#collect_mclasses */
(nitmethod_t)nit___nit__MNullableType___MType__collect_mtypes, /* pointer to model:MNullableType:model#MNullableType#collect_mtypes */
(nitmethod_t)nit___nit__MType___has_mproperty, /* pointer to model:MNullableType:model#MType#has_mproperty */
(nitmethod_t)nit__abstract_compiler___MType___ctype, /* pointer to model:MNullableType:abstract_compiler#MType#ctype */
(nitmethod_t)nit__abstract_compiler___MType___ctype_extern, /* pointer to model:MNullableType:abstract_compiler#MType#ctype_extern */
(nitmethod_t)nit__abstract_compiler___MType___ctypename, /* pointer to model:MNullableType:abstract_compiler#MType#ctypename */
(nitmethod_t)nit___nit__MNullableType___mtype, /* pointer to model:MNullableType:model#MNullableType#mtype */
(nitmethod_t)nit___nit__MNullableType___mtype_61d, /* pointer to model:MNullableType:model#MNullableType#mtype= */
(nitmethod_t)nit___nit__MNullableType___to_s_61d, /* pointer to model:MNullableType:model#MNullableType#to_s= */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MNullableType:kernel#Object#init */
}
};
/* allocate MNullableType */
val* NEW_nit__MNullableType(const struct type* type) {
val* self /* : MNullableType */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MNullableType;
var = NULL;
self->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var; /* _deprecation on <self:MNullableType exact> */
var1 = NULL;
self->attrs[COLOR_nit__model__MType___as_nullable_cache].val = var1; /* _as_nullable_cache on <self:MNullableType exact> */
return self;
}
/* runtime class nit__MNullType */
const struct class class_nit__MNullType = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MNullType:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MNullType:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MNullType:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MNullType:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MNullType:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to model:MNullType:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MNullType:kernel#Object#sys */
(nitmethod_t)nit___nit__MNullType___standard__kernel__Object__init, /* pointer to model:MNullType:model#MNullType#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to model:MNullType:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__MNullType___standard__string__Object__to_s, /* pointer to model:MNullType:model#MNullType#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MNullType:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MNullType:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MNullType:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MNullType:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to model:MNullType:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to model:MNullType:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MNullType:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to model:MNullType:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to model:MNullType:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to model:MNullType:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to model:MNullType:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to model:MNullType:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to model:MNullType:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to model:MNullType:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to model:MNullType:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to model:MNullType:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to model:MNullType:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to model:MNullType:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to model:MNullType:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to model:MNullType:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to model:MNullType:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to model:MNullType:model#Object#extern_kind */
(nitmethod_t)nit___nit__MType___nit__model_base__MEntity__name, /* pointer to model:MNullType:model#MType#name */
(nitmethod_t)nit___nit__MNullType___nit__model_base__MEntity__full_name, /* pointer to model:MNullType:model#MNullType#full_name */
(nitmethod_t)nit___nit__MNullType___nit__model_base__MEntity__c_name, /* pointer to model:MNullType:model#MNullType#c_name */
(nitmethod_t)nit___nit__MNullType___nit__model_base__MEntity__model, /* pointer to model:MNullType:model#MNullType#model */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MNullType:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MNullType:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MNullType:mdoc#MEntity#deprecation */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MNullType:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MNullType:separate_compiler#MEntity#const_color */
(nitmethod_t)nit___nit__MType___is_subtype, /* pointer to model:MNullType:model#MType#is_subtype */
(nitmethod_t)nit___nit__MType___anchor_to, /* pointer to model:MNullType:model#MType#anchor_to */
(nitmethod_t)nit___nit__MNullType___MType__need_anchor, /* pointer to model:MNullType:model#MNullType#need_anchor */
(nitmethod_t)nit___nit__MType___supertype_to, /* pointer to model:MNullType:model#MType#supertype_to */
(nitmethod_t)nit___nit__MNullType___MType__resolve_for, /* pointer to model:MNullType:model#MNullType#resolve_for */
(nitmethod_t)nit___nit__MType___lookup_bound, /* pointer to model:MNullType:model#MType#lookup_bound */
(nitmethod_t)nit___nit__MType___lookup_fixed, /* pointer to model:MNullType:model#MType#lookup_fixed */
(nitmethod_t)nit___nit__MNullType___MType__can_resolve_for, /* pointer to model:MNullType:model#MNullType#can_resolve_for */
(nitmethod_t)nit___nit__MNullType___MType__as_nullable, /* pointer to model:MNullType:model#MNullType#as_nullable */
(nitmethod_t)nit___nit__MType___as_notnullable, /* pointer to model:MNullType:model#MType#as_notnullable */
(nitmethod_t)nit___nit__MType___as_nullable_cache, /* pointer to model:MNullType:model#MType#as_nullable_cache */
(nitmethod_t)nit___nit__MType___as_nullable_cache_61d, /* pointer to model:MNullType:model#MType#as_nullable_cache= */
(nitmethod_t)nit___nit__MType___length, /* pointer to model:MNullType:model#MType#length */
(nitmethod_t)nit___nit__MNullType___MType__collect_mclassdefs, /* pointer to model:MNullType:model#MNullType#collect_mclassdefs */
(nitmethod_t)nit___nit__MNullType___MType__collect_mclasses, /* pointer to model:MNullType:model#MNullType#collect_mclasses */
(nitmethod_t)nit___nit__MNullType___MType__collect_mtypes, /* pointer to model:MNullType:model#MNullType#collect_mtypes */
(nitmethod_t)nit___nit__MType___has_mproperty, /* pointer to model:MNullType:model#MType#has_mproperty */
(nitmethod_t)nit__abstract_compiler___MType___ctype, /* pointer to model:MNullType:abstract_compiler#MType#ctype */
(nitmethod_t)nit__abstract_compiler___MType___ctype_extern, /* pointer to model:MNullType:abstract_compiler#MType#ctype_extern */
(nitmethod_t)nit__abstract_compiler___MType___ctypename, /* pointer to model:MNullType:abstract_compiler#MType#ctypename */
(nitmethod_t)nit___nit__MNullType___model_61d, /* pointer to model:MNullType:model#MNullType#model= */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MNullType:kernel#Object#init */
}
};
/* allocate MNullType */
val* NEW_nit__MNullType(const struct type* type) {
val* self /* : MNullType */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MNullType;
var = NULL;
self->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var; /* _deprecation on <self:MNullType exact> */
var1 = NULL;
self->attrs[COLOR_nit__model__MType___as_nullable_cache].val = var1; /* _as_nullable_cache on <self:MNullType exact> */
return self;
}
/* runtime class nit__MSignature */
const struct class class_nit__MSignature = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MSignature:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MSignature:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MSignature:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MSignature:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MSignature:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to model:MSignature:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MSignature:kernel#Object#sys */
(nitmethod_t)nit___nit__MSignature___standard__kernel__Object__init, /* pointer to model:MSignature:model#MSignature#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to model:MSignature:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__MSignature___standard__string__Object__to_s, /* pointer to model:MSignature:model#MSignature#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MSignature:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MSignature:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MSignature:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MSignature:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to model:MSignature:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to model:MSignature:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MSignature:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to model:MSignature:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to model:MSignature:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to model:MSignature:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to model:MSignature:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to model:MSignature:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to model:MSignature:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to model:MSignature:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to model:MSignature:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to model:MSignature:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to model:MSignature:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to model:MSignature:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to model:MSignature:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to model:MSignature:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to model:MSignature:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to model:MSignature:model#Object#extern_kind */
(nitmethod_t)nit___nit__MType___nit__model_base__MEntity__name, /* pointer to model:MSignature:model#MType#name */
(nitmethod_t)nit___nit__MEntity___full_name, /* pointer to model:MSignature:model_base#MEntity#full_name */
(nitmethod_t)nit___nit__MEntity___c_name, /* pointer to model:MSignature:model_base#MEntity#c_name */
(nitmethod_t)nit___nit__MEntity___model, /* pointer to model:MSignature:model_base#MEntity#model */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MSignature:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MSignature:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MSignature:mdoc#MEntity#deprecation */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MSignature:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MSignature:separate_compiler#MEntity#const_color */
(nitmethod_t)nit___nit__MType___is_subtype, /* pointer to model:MSignature:model#MType#is_subtype */
(nitmethod_t)nit___nit__MType___anchor_to, /* pointer to model:MSignature:model#MType#anchor_to */
(nitmethod_t)nit___nit__MType___need_anchor, /* pointer to model:MSignature:model#MType#need_anchor */
(nitmethod_t)nit___nit__MType___supertype_to, /* pointer to model:MSignature:model#MType#supertype_to */
(nitmethod_t)nit___nit__MSignature___MType__resolve_for, /* pointer to model:MSignature:model#MSignature#resolve_for */
(nitmethod_t)nit___nit__MType___lookup_bound, /* pointer to model:MSignature:model#MType#lookup_bound */
(nitmethod_t)nit___nit__MType___lookup_fixed, /* pointer to model:MSignature:model#MType#lookup_fixed */
(nitmethod_t)nit___nit__MType___can_resolve_for, /* pointer to model:MSignature:model#MType#can_resolve_for */
(nitmethod_t)nit___nit__MType___as_nullable, /* pointer to model:MSignature:model#MType#as_nullable */
(nitmethod_t)nit___nit__MType___as_notnullable, /* pointer to model:MSignature:model#MType#as_notnullable */
(nitmethod_t)nit___nit__MType___as_nullable_cache, /* pointer to model:MSignature:model#MType#as_nullable_cache */
(nitmethod_t)nit___nit__MType___as_nullable_cache_61d, /* pointer to model:MSignature:model#MType#as_nullable_cache= */
(nitmethod_t)nit___nit__MSignature___MType__length, /* pointer to model:MSignature:model#MSignature#length */
(nitmethod_t)nit___nit__MType___collect_mclassdefs, /* pointer to model:MSignature:model#MType#collect_mclassdefs */
(nitmethod_t)nit___nit__MType___collect_mclasses, /* pointer to model:MSignature:model#MType#collect_mclasses */
(nitmethod_t)nit___nit__MType___collect_mtypes, /* pointer to model:MSignature:model#MType#collect_mtypes */
(nitmethod_t)nit___nit__MType___has_mproperty, /* pointer to model:MSignature:model#MType#has_mproperty */
(nitmethod_t)nit__abstract_compiler___MType___ctype, /* pointer to model:MSignature:abstract_compiler#MType#ctype */
(nitmethod_t)nit__abstract_compiler___MType___ctype_extern, /* pointer to model:MSignature:abstract_compiler#MType#ctype_extern */
(nitmethod_t)nit__abstract_compiler___MType___ctypename, /* pointer to model:MSignature:abstract_compiler#MType#ctypename */
(nitmethod_t)nit___nit__MSignature___mparameters, /* pointer to model:MSignature:model#MSignature#mparameters */
(nitmethod_t)nit___nit__MSignature___mparameters_61d, /* pointer to model:MSignature:model#MSignature#mparameters= */
(nitmethod_t)nit___nit__MSignature___return_mtype, /* pointer to model:MSignature:model#MSignature#return_mtype */
(nitmethod_t)nit___nit__MSignature___return_mtype_61d, /* pointer to model:MSignature:model#MSignature#return_mtype= */
(nitmethod_t)nit___nit__MSignature___vararg_rank, /* pointer to model:MSignature:model#MSignature#vararg_rank */
(nitmethod_t)nit___nit__MSignature___vararg_rank_61d, /* pointer to model:MSignature:model#MSignature#vararg_rank= */
(nitmethod_t)nit___nit__MSignature___arity, /* pointer to model:MSignature:model#MSignature#arity */
(nitmethod_t)nit__separate_compiler___MSignature___c_equiv, /* pointer to model:MSignature:separate_compiler#MSignature#c_equiv */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MSignature:kernel#Object#init */
}
};
/* allocate MSignature */
val* NEW_nit__MSignature(const struct type* type) {
val* self /* : MSignature */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MSignature;
var = NULL;
self->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var; /* _deprecation on <self:MSignature exact> */
var1 = NULL;
self->attrs[COLOR_nit__model__MType___as_nullable_cache].val = var1; /* _as_nullable_cache on <self:MSignature exact> */
return self;
}
/* runtime class nit__MParameter */
const struct class class_nit__MParameter = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MParameter:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MParameter:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MParameter:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MParameter:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MParameter:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to model:MParameter:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MParameter:kernel#Object#sys */
(nitmethod_t)nit___nit__MParameter___standard__kernel__Object__init, /* pointer to model:MParameter:model#MParameter#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to model:MParameter:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__MParameter___standard__string__Object__to_s, /* pointer to model:MParameter:model#MParameter#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MParameter:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MParameter:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MParameter:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MParameter:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to model:MParameter:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to model:MParameter:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MParameter:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to model:MParameter:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to model:MParameter:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to model:MParameter:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to model:MParameter:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to model:MParameter:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to model:MParameter:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to model:MParameter:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to model:MParameter:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to model:MParameter:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to model:MParameter:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to model:MParameter:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to model:MParameter:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to model:MParameter:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to model:MParameter:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to model:MParameter:model#Object#extern_kind */
(nitmethod_t)nit___nit__MParameter___nit__model_base__MEntity__name, /* pointer to model:MParameter:model#MParameter#name */
(nitmethod_t)nit___nit__MEntity___full_name, /* pointer to model:MParameter:model_base#MEntity#full_name */
(nitmethod_t)nit___nit__MEntity___c_name, /* pointer to model:MParameter:model_base#MEntity#c_name */
(nitmethod_t)nit___nit__MParameter___nit__model_base__MEntity__model, /* pointer to model:MParameter:model#MParameter#model */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MParameter:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MParameter:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MParameter:mdoc#MEntity#deprecation */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MParameter:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MParameter:separate_compiler#MEntity#const_color */
(nitmethod_t)nit___nit__MParameter___name_61d, /* pointer to model:MParameter:model#MParameter#name= */
(nitmethod_t)nit___nit__MParameter___mtype, /* pointer to model:MParameter:model#MParameter#mtype */
(nitmethod_t)nit___nit__MParameter___mtype_61d, /* pointer to model:MParameter:model#MParameter#mtype= */
(nitmethod_t)nit___nit__MParameter___is_vararg, /* pointer to model:MParameter:model#MParameter#is_vararg */
(nitmethod_t)nit___nit__MParameter___is_vararg_61d, /* pointer to model:MParameter:model#MParameter#is_vararg= */
(nitmethod_t)nit___nit__MParameter___resolve_for, /* pointer to model:MParameter:model#MParameter#resolve_for */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MParameter:kernel#Object#init */
}
};
/* allocate MParameter */
val* NEW_nit__MParameter(const struct type* type) {
val* self /* : MParameter */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MParameter;
var = NULL;
self->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var; /* _deprecation on <self:MParameter exact> */
return self;
}
/* runtime class nit__MProperty */
/* allocate MProperty */
val* NEW_nit__MProperty(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MProperty is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__MMethod */
const struct class class_nit__MMethod = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MMethod:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MMethod:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MMethod:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MMethod:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MMethod:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to model:MMethod:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MMethod:kernel#Object#sys */
(nitmethod_t)nit___nit__MProperty___standard__kernel__Object__init, /* pointer to model:MMethod:model#MProperty#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to model:MMethod:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__MProperty___standard__string__Object__to_s, /* pointer to model:MMethod:model#MProperty#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MMethod:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MMethod:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MMethod:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MMethod:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to model:MMethod:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to model:MMethod:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MMethod:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to model:MMethod:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to model:MMethod:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to model:MMethod:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to model:MMethod:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to model:MMethod:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to model:MMethod:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to model:MMethod:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to model:MMethod:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to model:MMethod:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to model:MMethod:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to model:MMethod:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to model:MMethod:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to model:MMethod:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to model:MMethod:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to model:MMethod:model#Object#extern_kind */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__name, /* pointer to model:MMethod:model#MProperty#name */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__full_name, /* pointer to model:MMethod:model#MProperty#full_name */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__c_name, /* pointer to model:MMethod:model#MProperty#c_name */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__model, /* pointer to model:MMethod:model#MProperty#model */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MMethod:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MMethod:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MMethod:mdoc#MEntity#deprecation */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MMethod:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MMethod:separate_compiler#MEntity#const_color */
(nitmethod_t)nit___nit__MProperty___intro_mclassdef, /* pointer to model:MMethod:model#MProperty#intro_mclassdef */
(nitmethod_t)nit___nit__MProperty___intro_mclassdef_61d, /* pointer to model:MMethod:model#MProperty#intro_mclassdef= */
(nitmethod_t)nit___nit__MProperty___name_61d, /* pointer to model:MMethod:model#MProperty#name= */
(nitmethod_t)nit___nit__MProperty___visibility, /* pointer to model:MMethod:model#MProperty#visibility */
(nitmethod_t)nit___nit__MProperty___visibility_61d, /* pointer to model:MMethod:model#MProperty#visibility= */
(nitmethod_t)nit___nit__MProperty___mpropdefs, /* pointer to model:MMethod:model#MProperty#mpropdefs */
(nitmethod_t)nit___nit__MProperty___intro, /* pointer to model:MMethod:model#MProperty#intro */
(nitmethod_t)nit___nit__MProperty___intro_61d, /* pointer to model:MMethod:model#MProperty#intro= */
(nitmethod_t)nit___nit__MProperty___lookup_definitions, /* pointer to model:MMethod:model#MProperty#lookup_definitions */
(nitmethod_t)nit___nit__MProperty___lookup_definitions_cache, /* pointer to model:MMethod:model#MProperty#lookup_definitions_cache */
(nitmethod_t)nit___nit__MProperty___lookup_super_definitions, /* pointer to model:MMethod:model#MProperty#lookup_super_definitions */
(nitmethod_t)nit___nit__MProperty___select_most_specific, /* pointer to model:MMethod:model#MProperty#select_most_specific */
(nitmethod_t)nit___nit__MProperty___lookup_first_definition, /* pointer to model:MMethod:model#MProperty#lookup_first_definition */
(nitmethod_t)nit___nit__MProperty___lookup_all_definitions, /* pointer to model:MMethod:model#MProperty#lookup_all_definitions */
(nitmethod_t)nit___nit__MProperty___lookup_all_definitions_cache, /* pointer to model:MMethod:model#MProperty#lookup_all_definitions_cache */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MMethod:kernel#Object#init */
(nitmethod_t)nit___nit__MMethod___is_toplevel, /* pointer to model:MMethod:model#MMethod#is_toplevel */
(nitmethod_t)nit___nit__MMethod___is_toplevel_61d, /* pointer to model:MMethod:model#MMethod#is_toplevel= */
(nitmethod_t)nit___nit__MMethod___is_init, /* pointer to model:MMethod:model#MMethod#is_init */
(nitmethod_t)nit___nit__MMethod___is_init_61d, /* pointer to model:MMethod:model#MMethod#is_init= */
(nitmethod_t)nit___nit__MMethod___is_root_init, /* pointer to model:MMethod:model#MMethod#is_root_init */
(nitmethod_t)nit___nit__MMethod___is_root_init_61d, /* pointer to model:MMethod:model#MMethod#is_root_init= */
(nitmethod_t)nit___nit__MMethod___is_new, /* pointer to model:MMethod:model#MMethod#is_new */
(nitmethod_t)nit___nit__MMethod___is_new_61d, /* pointer to model:MMethod:model#MMethod#is_new= */
(nitmethod_t)nit___nit__MMethod___is_init_for, /* pointer to model:MMethod:model#MMethod#is_init_for */
}
};
/* allocate MMethod */
val* NEW_nit__MMethod(const struct type* type) {
val* self /* : MMethod */;
val* var /* : null */;
val* var1 /* : Array[MMethodDef] */;
val* var2 /* : HashMap2[MModule, MType, Array[MMethodDef]] */;
val* var3 /* : HashMap2[MModule, MType, Array[MMethodDef]] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 19*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MMethod;
var = NULL;
self->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var; /* _deprecation on <self:MMethod exact> */
var1 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__nit__model__MProperty__MPROPDEF]);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[MMethodDef]>*/
}
self->attrs[COLOR_nit__model__MProperty___mpropdefs].val = var1; /* _mpropdefs on <self:MMethod exact> */
var2 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__model__MProperty__MPROPDEF]);
{
{ /* Inline kernel#Object#init (var2) on <var2:HashMap2[MModule, MType, Array[MMethodDef]]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__model__MProperty___lookup_definitions_cache].val = var2; /* _lookup_definitions_cache on <self:MMethod exact> */
var3 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__model__MProperty__MPROPDEF]);
{
{ /* Inline kernel#Object#init (var3) on <var3:HashMap2[MModule, MType, Array[MMethodDef]]> */
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_nit__model__MProperty___lookup_all_definitions_cache].val = var3; /* _lookup_all_definitions_cache on <self:MMethod exact> */
var5 = 0;
self->attrs[COLOR_nit__model__MMethod___is_toplevel].s = var5; /* _is_toplevel on <self:MMethod exact> */
var6 = 0;
self->attrs[COLOR_nit__model__MMethod___is_init].s = var6; /* _is_init on <self:MMethod exact> */
var7 = 0;
self->attrs[COLOR_nit__model__MMethod___is_root_init].s = var7; /* _is_root_init on <self:MMethod exact> */
var8 = 0;
self->attrs[COLOR_nit__model__MMethod___is_new].s = var8; /* _is_new on <self:MMethod exact> */
return self;
}
/* runtime class nit__MAttribute */
const struct class class_nit__MAttribute = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MAttribute:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MAttribute:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MAttribute:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MAttribute:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MAttribute:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to model:MAttribute:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MAttribute:kernel#Object#sys */
(nitmethod_t)nit___nit__MProperty___standard__kernel__Object__init, /* pointer to model:MAttribute:model#MProperty#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to model:MAttribute:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__MProperty___standard__string__Object__to_s, /* pointer to model:MAttribute:model#MProperty#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MAttribute:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MAttribute:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MAttribute:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MAttribute:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to model:MAttribute:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to model:MAttribute:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MAttribute:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to model:MAttribute:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to model:MAttribute:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to model:MAttribute:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to model:MAttribute:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to model:MAttribute:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to model:MAttribute:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to model:MAttribute:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to model:MAttribute:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to model:MAttribute:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to model:MAttribute:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to model:MAttribute:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to model:MAttribute:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to model:MAttribute:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to model:MAttribute:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to model:MAttribute:model#Object#extern_kind */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__name, /* pointer to model:MAttribute:model#MProperty#name */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__full_name, /* pointer to model:MAttribute:model#MProperty#full_name */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__c_name, /* pointer to model:MAttribute:model#MProperty#c_name */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__model, /* pointer to model:MAttribute:model#MProperty#model */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MAttribute:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MAttribute:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MAttribute:mdoc#MEntity#deprecation */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MAttribute:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MAttribute:separate_compiler#MEntity#const_color */
(nitmethod_t)nit___nit__MProperty___intro_mclassdef, /* pointer to model:MAttribute:model#MProperty#intro_mclassdef */
(nitmethod_t)nit___nit__MProperty___intro_mclassdef_61d, /* pointer to model:MAttribute:model#MProperty#intro_mclassdef= */
(nitmethod_t)nit___nit__MProperty___name_61d, /* pointer to model:MAttribute:model#MProperty#name= */
(nitmethod_t)nit___nit__MProperty___visibility, /* pointer to model:MAttribute:model#MProperty#visibility */
(nitmethod_t)nit___nit__MProperty___visibility_61d, /* pointer to model:MAttribute:model#MProperty#visibility= */
(nitmethod_t)nit___nit__MProperty___mpropdefs, /* pointer to model:MAttribute:model#MProperty#mpropdefs */
(nitmethod_t)nit___nit__MProperty___intro, /* pointer to model:MAttribute:model#MProperty#intro */
(nitmethod_t)nit___nit__MProperty___intro_61d, /* pointer to model:MAttribute:model#MProperty#intro= */
(nitmethod_t)nit___nit__MProperty___lookup_definitions, /* pointer to model:MAttribute:model#MProperty#lookup_definitions */
(nitmethod_t)nit___nit__MProperty___lookup_definitions_cache, /* pointer to model:MAttribute:model#MProperty#lookup_definitions_cache */
(nitmethod_t)nit___nit__MProperty___lookup_super_definitions, /* pointer to model:MAttribute:model#MProperty#lookup_super_definitions */
(nitmethod_t)nit___nit__MProperty___select_most_specific, /* pointer to model:MAttribute:model#MProperty#select_most_specific */
(nitmethod_t)nit___nit__MProperty___lookup_first_definition, /* pointer to model:MAttribute:model#MProperty#lookup_first_definition */
(nitmethod_t)nit___nit__MProperty___lookup_all_definitions, /* pointer to model:MAttribute:model#MProperty#lookup_all_definitions */
(nitmethod_t)nit___nit__MProperty___lookup_all_definitions_cache, /* pointer to model:MAttribute:model#MProperty#lookup_all_definitions_cache */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MAttribute:kernel#Object#init */
}
};
/* allocate MAttribute */
val* NEW_nit__MAttribute(const struct type* type) {
val* self /* : MAttribute */;
val* var /* : null */;
val* var1 /* : Array[MAttributeDef] */;
val* var2 /* : HashMap2[MModule, MType, Array[MAttributeDef]] */;
val* var3 /* : HashMap2[MModule, MType, Array[MAttributeDef]] */;
self = nit_alloc(sizeof(struct instance) + 15*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MAttribute;
var = NULL;
self->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var; /* _deprecation on <self:MAttribute exact> */
var1 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__nit__model__MProperty__MPROPDEF]);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[MAttributeDef]>*/
}
self->attrs[COLOR_nit__model__MProperty___mpropdefs].val = var1; /* _mpropdefs on <self:MAttribute exact> */
var2 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__model__MProperty__MPROPDEF]);
{
{ /* Inline kernel#Object#init (var2) on <var2:HashMap2[MModule, MType, Array[MAttributeDef]]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__model__MProperty___lookup_definitions_cache].val = var2; /* _lookup_definitions_cache on <self:MAttribute exact> */
var3 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__model__MProperty__MPROPDEF]);
{
{ /* Inline kernel#Object#init (var3) on <var3:HashMap2[MModule, MType, Array[MAttributeDef]]> */
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_nit__model__MProperty___lookup_all_definitions_cache].val = var3; /* _lookup_all_definitions_cache on <self:MAttribute exact> */
return self;
}
/* runtime class nit__MVirtualTypeProp */
const struct class class_nit__MVirtualTypeProp = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MVirtualTypeProp:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MVirtualTypeProp:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MVirtualTypeProp:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MVirtualTypeProp:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MVirtualTypeProp:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to model:MVirtualTypeProp:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MVirtualTypeProp:kernel#Object#sys */
(nitmethod_t)nit___nit__MProperty___standard__kernel__Object__init, /* pointer to model:MVirtualTypeProp:model#MProperty#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to model:MVirtualTypeProp:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__MProperty___standard__string__Object__to_s, /* pointer to model:MVirtualTypeProp:model#MProperty#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MVirtualTypeProp:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MVirtualTypeProp:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MVirtualTypeProp:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MVirtualTypeProp:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to model:MVirtualTypeProp:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to model:MVirtualTypeProp:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MVirtualTypeProp:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to model:MVirtualTypeProp:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to model:MVirtualTypeProp:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to model:MVirtualTypeProp:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to model:MVirtualTypeProp:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to model:MVirtualTypeProp:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to model:MVirtualTypeProp:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to model:MVirtualTypeProp:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to model:MVirtualTypeProp:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to model:MVirtualTypeProp:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to model:MVirtualTypeProp:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to model:MVirtualTypeProp:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to model:MVirtualTypeProp:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to model:MVirtualTypeProp:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to model:MVirtualTypeProp:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to model:MVirtualTypeProp:model#Object#extern_kind */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__name, /* pointer to model:MVirtualTypeProp:model#MProperty#name */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__full_name, /* pointer to model:MVirtualTypeProp:model#MProperty#full_name */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__c_name, /* pointer to model:MVirtualTypeProp:model#MProperty#c_name */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__model, /* pointer to model:MVirtualTypeProp:model#MProperty#model */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MVirtualTypeProp:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MVirtualTypeProp:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MVirtualTypeProp:mdoc#MEntity#deprecation */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MVirtualTypeProp:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MVirtualTypeProp:separate_compiler#MEntity#const_color */
(nitmethod_t)nit___nit__MProperty___intro_mclassdef, /* pointer to model:MVirtualTypeProp:model#MProperty#intro_mclassdef */
(nitmethod_t)nit___nit__MProperty___intro_mclassdef_61d, /* pointer to model:MVirtualTypeProp:model#MProperty#intro_mclassdef= */
(nitmethod_t)nit___nit__MProperty___name_61d, /* pointer to model:MVirtualTypeProp:model#MProperty#name= */
(nitmethod_t)nit___nit__MProperty___visibility, /* pointer to model:MVirtualTypeProp:model#MProperty#visibility */
(nitmethod_t)nit___nit__MProperty___visibility_61d, /* pointer to model:MVirtualTypeProp:model#MProperty#visibility= */
(nitmethod_t)nit___nit__MProperty___mpropdefs, /* pointer to model:MVirtualTypeProp:model#MProperty#mpropdefs */
(nitmethod_t)nit___nit__MProperty___intro, /* pointer to model:MVirtualTypeProp:model#MProperty#intro */
(nitmethod_t)nit___nit__MProperty___intro_61d, /* pointer to model:MVirtualTypeProp:model#MProperty#intro= */
(nitmethod_t)nit___nit__MProperty___lookup_definitions, /* pointer to model:MVirtualTypeProp:model#MProperty#lookup_definitions */
(nitmethod_t)nit___nit__MProperty___lookup_definitions_cache, /* pointer to model:MVirtualTypeProp:model#MProperty#lookup_definitions_cache */
(nitmethod_t)nit___nit__MProperty___lookup_super_definitions, /* pointer to model:MVirtualTypeProp:model#MProperty#lookup_super_definitions */
(nitmethod_t)nit___nit__MProperty___select_most_specific, /* pointer to model:MVirtualTypeProp:model#MProperty#select_most_specific */
(nitmethod_t)nit___nit__MProperty___lookup_first_definition, /* pointer to model:MVirtualTypeProp:model#MProperty#lookup_first_definition */
(nitmethod_t)nit___nit__MProperty___lookup_all_definitions, /* pointer to model:MVirtualTypeProp:model#MProperty#lookup_all_definitions */
(nitmethod_t)nit___nit__MProperty___lookup_all_definitions_cache, /* pointer to model:MVirtualTypeProp:model#MProperty#lookup_all_definitions_cache */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MVirtualTypeProp:kernel#Object#init */
(nitmethod_t)nit___nit__MVirtualTypeProp___mvirtualtype, /* pointer to model:MVirtualTypeProp:model#MVirtualTypeProp#mvirtualtype */
}
};
/* allocate MVirtualTypeProp */
val* NEW_nit__MVirtualTypeProp(const struct type* type) {
val* self /* : MVirtualTypeProp */;
val* var /* : null */;
val* var1 /* : Array[MVirtualTypeDef] */;
val* var2 /* : HashMap2[MModule, MType, Array[MVirtualTypeDef]] */;
val* var3 /* : HashMap2[MModule, MType, Array[MVirtualTypeDef]] */;
val* var5 /* : MVirtualType */;
self = nit_alloc(sizeof(struct instance) + 16*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MVirtualTypeProp;
var = NULL;
self->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var; /* _deprecation on <self:MVirtualTypeProp exact> */
var1 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__nit__model__MProperty__MPROPDEF]);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[MVirtualTypeDef]>*/
}
self->attrs[COLOR_nit__model__MProperty___mpropdefs].val = var1; /* _mpropdefs on <self:MVirtualTypeProp exact> */
var2 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__model__MProperty__MPROPDEF]);
{
{ /* Inline kernel#Object#init (var2) on <var2:HashMap2[MModule, MType, Array[MVirtualTypeDef]]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__model__MProperty___lookup_definitions_cache].val = var2; /* _lookup_definitions_cache on <self:MVirtualTypeProp exact> */
var3 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__model__MProperty__MPROPDEF]);
{
{ /* Inline kernel#Object#init (var3) on <var3:HashMap2[MModule, MType, Array[MVirtualTypeDef]]> */
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_nit__model__MProperty___lookup_all_definitions_cache].val = var3; /* _lookup_all_definitions_cache on <self:MVirtualTypeProp exact> */
var5 = NEW_nit__MVirtualType(&type_nit__MVirtualType);
{
((void (*)(val* self, val* p0))(var5->class->vft[COLOR_nit__model__MVirtualType__mproperty_61d]))(var5, self) /* mproperty= on <var5:MVirtualType>*/;
}
{
((void (*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5) /* init on <var5:MVirtualType>*/;
}
self->attrs[COLOR_nit__model__MVirtualTypeProp___mvirtualtype].val = var5; /* _mvirtualtype on <self:MVirtualTypeProp exact> */
return self;
}
/* runtime class nit__MPropDef */
/* allocate MPropDef */
val* NEW_nit__MPropDef(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MPropDef is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__MMethodDef */
const struct class class_nit__MMethodDef = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MMethodDef:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MMethodDef:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MMethodDef:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MMethodDef:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MMethodDef:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to model:MMethodDef:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MMethodDef:kernel#Object#sys */
(nitmethod_t)nit___nit__MPropDef___standard__kernel__Object__init, /* pointer to model:MMethodDef:model#MPropDef#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to model:MMethodDef:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__MPropDef___standard__string__Object__to_s, /* pointer to model:MMethodDef:model#MPropDef#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MMethodDef:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MMethodDef:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MMethodDef:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MMethodDef:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to model:MMethodDef:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to model:MMethodDef:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MMethodDef:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to model:MMethodDef:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to model:MMethodDef:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to model:MMethodDef:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to model:MMethodDef:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to model:MMethodDef:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to model:MMethodDef:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to model:MMethodDef:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to model:MMethodDef:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to model:MMethodDef:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to model:MMethodDef:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to model:MMethodDef:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to model:MMethodDef:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to model:MMethodDef:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to model:MMethodDef:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to model:MMethodDef:model#Object#extern_kind */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__name, /* pointer to model:MMethodDef:model#MPropDef#name */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__full_name, /* pointer to model:MMethodDef:model#MPropDef#full_name */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__c_name, /* pointer to model:MMethodDef:model#MPropDef#c_name */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__model, /* pointer to model:MMethodDef:model#MPropDef#model */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MMethodDef:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MMethodDef:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MMethodDef:mdoc#MEntity#deprecation */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MMethodDef:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MMethodDef:separate_compiler#MEntity#const_color */
(nitmethod_t)nit___nit__MPropDef___mclassdef, /* pointer to model:MMethodDef:model#MPropDef#mclassdef */
(nitmethod_t)nit___nit__MPropDef___mclassdef_61d, /* pointer to model:MMethodDef:model#MPropDef#mclassdef= */
(nitmethod_t)nit___nit__MPropDef___mproperty, /* pointer to model:MMethodDef:model#MPropDef#mproperty */
(nitmethod_t)nit___nit__MPropDef___mproperty_61d, /* pointer to model:MMethodDef:model#MPropDef#mproperty= */
(nitmethod_t)nit___nit__MPropDef___location, /* pointer to model:MMethodDef:model#MPropDef#location */
(nitmethod_t)nit___nit__MPropDef___location_61d, /* pointer to model:MMethodDef:model#MPropDef#location= */
(nitmethod_t)nit___nit__MPropDef___to_s_61d, /* pointer to model:MMethodDef:model#MPropDef#to_s= */
(nitmethod_t)nit___nit__MPropDef___is_intro, /* pointer to model:MMethodDef:model#MPropDef#is_intro */
(nitmethod_t)nit___nit__MPropDef___lookup_next_definition, /* pointer to model:MMethodDef:model#MPropDef#lookup_next_definition */
(nitmethod_t)nit__modelize_property___MPropDef___has_supercall, /* pointer to model:MMethodDef:modelize_property#MPropDef#has_supercall */
(nitmethod_t)nit__modelize_property___MPropDef___has_supercall_61d, /* pointer to model:MMethodDef:modelize_property#MPropDef#has_supercall= */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MMethodDef:kernel#Object#init */
(nitmethod_t)nit___nit__MMethodDef___msignature, /* pointer to model:MMethodDef:model#MMethodDef#msignature */
(nitmethod_t)nit___nit__MMethodDef___msignature_61d, /* pointer to model:MMethodDef:model#MMethodDef#msignature= */
(nitmethod_t)nit___nit__MMethodDef___new_msignature, /* pointer to model:MMethodDef:model#MMethodDef#new_msignature */
(nitmethod_t)nit___nit__MMethodDef___new_msignature_61d, /* pointer to model:MMethodDef:model#MMethodDef#new_msignature= */
(nitmethod_t)nit___nit__MMethodDef___initializers, /* pointer to model:MMethodDef:model#MMethodDef#initializers */
(nitmethod_t)nit___nit__MMethodDef___is_abstract, /* pointer to model:MMethodDef:model#MMethodDef#is_abstract */
(nitmethod_t)nit___nit__MMethodDef___is_abstract_61d, /* pointer to model:MMethodDef:model#MMethodDef#is_abstract= */
(nitmethod_t)nit___nit__MMethodDef___is_intern, /* pointer to model:MMethodDef:model#MMethodDef#is_intern */
(nitmethod_t)nit___nit__MMethodDef___is_intern_61d, /* pointer to model:MMethodDef:model#MMethodDef#is_intern= */
(nitmethod_t)nit___nit__MMethodDef___is_extern, /* pointer to model:MMethodDef:model#MMethodDef#is_extern */
(nitmethod_t)nit___nit__MMethodDef___is_extern_61d, /* pointer to model:MMethodDef:model#MMethodDef#is_extern= */
(nitmethod_t)nit___nit__MMethodDef___constant_value, /* pointer to model:MMethodDef:model#MMethodDef#constant_value */
(nitmethod_t)nit___nit__MMethodDef___constant_value_61d, /* pointer to model:MMethodDef:model#MMethodDef#constant_value= */
(nitmethod_t)nit__abstract_compiler___MMethodDef___can_inline, /* pointer to model:MMethodDef:abstract_compiler#MMethodDef#can_inline */
(nitmethod_t)nit__abstract_compiler___MMethodDef___compile_inside_to_c, /* pointer to model:MMethodDef:abstract_compiler#MMethodDef#compile_inside_to_c */
(nitmethod_t)nit__abstract_compiler___MMethodDef___compile_parameter_check, /* pointer to model:MMethodDef:abstract_compiler#MMethodDef#compile_parameter_check */
(nitmethod_t)nit__separate_compiler___MMethodDef___separate_runtime_function, /* pointer to model:MMethodDef:separate_compiler#MMethodDef#separate_runtime_function */
(nitmethod_t)nit__separate_compiler___MMethodDef___separate_runtime_function_cache, /* pointer to model:MMethodDef:separate_compiler#MMethodDef#separate_runtime_function_cache */
(nitmethod_t)nit__separate_compiler___MMethodDef___separate_runtime_function_cache_61d, /* pointer to model:MMethodDef:separate_compiler#MMethodDef#separate_runtime_function_cache= */
(nitmethod_t)nit__separate_compiler___MMethodDef___virtual_runtime_function, /* pointer to model:MMethodDef:separate_compiler#MMethodDef#virtual_runtime_function */
(nitmethod_t)nit__separate_compiler___MMethodDef___virtual_runtime_function_cache, /* pointer to model:MMethodDef:separate_compiler#MMethodDef#virtual_runtime_function_cache */
(nitmethod_t)nit__separate_compiler___MMethodDef___virtual_runtime_function_cache_61d, /* pointer to model:MMethodDef:separate_compiler#MMethodDef#virtual_runtime_function_cache= */
}
};
/* allocate MMethodDef */
val* NEW_nit__MMethodDef(const struct type* type) {
val* self /* : MMethodDef */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : Array[MProperty] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : null */;
self = nit_alloc(sizeof(struct instance) + 22*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MMethodDef;
var = NULL;
self->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var; /* _deprecation on <self:MMethodDef exact> */
var1 = 0;
self->attrs[COLOR_nit__modelize_property__MPropDef___has_supercall].s = var1; /* _has_supercall on <self:MMethodDef exact> */
var2 = NULL;
self->attrs[COLOR_nit__model__MMethodDef___msignature].val = var2; /* _msignature on <self:MMethodDef exact> */
var3 = NULL;
self->attrs[COLOR_nit__model__MMethodDef___new_msignature].val = var3; /* _new_msignature on <self:MMethodDef exact> */
var4 = NEW_standard__Array(&type_standard__Array__nit__MProperty);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[MProperty]>*/
}
self->attrs[COLOR_nit__model__MMethodDef___initializers].val = var4; /* _initializers on <self:MMethodDef exact> */
var5 = 0;
self->attrs[COLOR_nit__model__MMethodDef___is_abstract].s = var5; /* _is_abstract on <self:MMethodDef exact> */
var6 = 0;
self->attrs[COLOR_nit__model__MMethodDef___is_intern].s = var6; /* _is_intern on <self:MMethodDef exact> */
var7 = 0;
self->attrs[COLOR_nit__model__MMethodDef___is_extern].s = var7; /* _is_extern on <self:MMethodDef exact> */
var8 = NULL;
self->attrs[COLOR_nit__model__MMethodDef___constant_value].val = var8; /* _constant_value on <self:MMethodDef exact> */
return self;
}
/* runtime class nit__MAttributeDef */
const struct class class_nit__MAttributeDef = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MAttributeDef:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MAttributeDef:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MAttributeDef:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MAttributeDef:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MAttributeDef:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to model:MAttributeDef:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MAttributeDef:kernel#Object#sys */
(nitmethod_t)nit___nit__MPropDef___standard__kernel__Object__init, /* pointer to model:MAttributeDef:model#MPropDef#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to model:MAttributeDef:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__MPropDef___standard__string__Object__to_s, /* pointer to model:MAttributeDef:model#MPropDef#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MAttributeDef:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MAttributeDef:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MAttributeDef:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MAttributeDef:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to model:MAttributeDef:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to model:MAttributeDef:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MAttributeDef:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to model:MAttributeDef:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to model:MAttributeDef:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to model:MAttributeDef:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to model:MAttributeDef:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to model:MAttributeDef:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to model:MAttributeDef:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to model:MAttributeDef:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to model:MAttributeDef:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to model:MAttributeDef:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to model:MAttributeDef:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to model:MAttributeDef:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to model:MAttributeDef:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to model:MAttributeDef:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to model:MAttributeDef:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to model:MAttributeDef:model#Object#extern_kind */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__name, /* pointer to model:MAttributeDef:model#MPropDef#name */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__full_name, /* pointer to model:MAttributeDef:model#MPropDef#full_name */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__c_name, /* pointer to model:MAttributeDef:model#MPropDef#c_name */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__model, /* pointer to model:MAttributeDef:model#MPropDef#model */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MAttributeDef:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MAttributeDef:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MAttributeDef:mdoc#MEntity#deprecation */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MAttributeDef:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MAttributeDef:separate_compiler#MEntity#const_color */
(nitmethod_t)nit___nit__MPropDef___mclassdef, /* pointer to model:MAttributeDef:model#MPropDef#mclassdef */
(nitmethod_t)nit___nit__MPropDef___mclassdef_61d, /* pointer to model:MAttributeDef:model#MPropDef#mclassdef= */
(nitmethod_t)nit___nit__MPropDef___mproperty, /* pointer to model:MAttributeDef:model#MPropDef#mproperty */
(nitmethod_t)nit___nit__MPropDef___mproperty_61d, /* pointer to model:MAttributeDef:model#MPropDef#mproperty= */
(nitmethod_t)nit___nit__MPropDef___location, /* pointer to model:MAttributeDef:model#MPropDef#location */
(nitmethod_t)nit___nit__MPropDef___location_61d, /* pointer to model:MAttributeDef:model#MPropDef#location= */
(nitmethod_t)nit___nit__MPropDef___to_s_61d, /* pointer to model:MAttributeDef:model#MPropDef#to_s= */
(nitmethod_t)nit___nit__MPropDef___is_intro, /* pointer to model:MAttributeDef:model#MPropDef#is_intro */
(nitmethod_t)nit___nit__MPropDef___lookup_next_definition, /* pointer to model:MAttributeDef:model#MPropDef#lookup_next_definition */
(nitmethod_t)nit__modelize_property___MPropDef___has_supercall, /* pointer to model:MAttributeDef:modelize_property#MPropDef#has_supercall */
(nitmethod_t)nit__modelize_property___MPropDef___has_supercall_61d, /* pointer to model:MAttributeDef:modelize_property#MPropDef#has_supercall= */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MAttributeDef:kernel#Object#init */
(nitmethod_t)nit___nit__MAttributeDef___static_mtype, /* pointer to model:MAttributeDef:model#MAttributeDef#static_mtype */
(nitmethod_t)nit___nit__MAttributeDef___static_mtype_61d, /* pointer to model:MAttributeDef:model#MAttributeDef#static_mtype= */
}
};
/* allocate MAttributeDef */
val* NEW_nit__MAttributeDef(const struct type* type) {
val* self /* : MAttributeDef */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MAttributeDef;
var = NULL;
self->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var; /* _deprecation on <self:MAttributeDef exact> */
var1 = 0;
self->attrs[COLOR_nit__modelize_property__MPropDef___has_supercall].s = var1; /* _has_supercall on <self:MAttributeDef exact> */
var2 = NULL;
self->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val = var2; /* _static_mtype on <self:MAttributeDef exact> */
return self;
}
/* runtime class nit__MVirtualTypeDef */
const struct class class_nit__MVirtualTypeDef = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MVirtualTypeDef:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MVirtualTypeDef:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MVirtualTypeDef:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MVirtualTypeDef:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MVirtualTypeDef:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to model:MVirtualTypeDef:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MVirtualTypeDef:kernel#Object#sys */
(nitmethod_t)nit___nit__MPropDef___standard__kernel__Object__init, /* pointer to model:MVirtualTypeDef:model#MPropDef#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to model:MVirtualTypeDef:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__MPropDef___standard__string__Object__to_s, /* pointer to model:MVirtualTypeDef:model#MPropDef#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MVirtualTypeDef:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MVirtualTypeDef:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MVirtualTypeDef:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MVirtualTypeDef:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to model:MVirtualTypeDef:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to model:MVirtualTypeDef:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MVirtualTypeDef:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to model:MVirtualTypeDef:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to model:MVirtualTypeDef:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to model:MVirtualTypeDef:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to model:MVirtualTypeDef:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to model:MVirtualTypeDef:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to model:MVirtualTypeDef:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to model:MVirtualTypeDef:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to model:MVirtualTypeDef:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to model:MVirtualTypeDef:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to model:MVirtualTypeDef:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to model:MVirtualTypeDef:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to model:MVirtualTypeDef:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to model:MVirtualTypeDef:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to model:MVirtualTypeDef:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to model:MVirtualTypeDef:model#Object#extern_kind */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__name, /* pointer to model:MVirtualTypeDef:model#MPropDef#name */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__full_name, /* pointer to model:MVirtualTypeDef:model#MPropDef#full_name */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__c_name, /* pointer to model:MVirtualTypeDef:model#MPropDef#c_name */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__model, /* pointer to model:MVirtualTypeDef:model#MPropDef#model */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MVirtualTypeDef:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MVirtualTypeDef:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MVirtualTypeDef:mdoc#MEntity#deprecation */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MVirtualTypeDef:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MVirtualTypeDef:separate_compiler#MEntity#const_color */
(nitmethod_t)nit___nit__MPropDef___mclassdef, /* pointer to model:MVirtualTypeDef:model#MPropDef#mclassdef */
(nitmethod_t)nit___nit__MPropDef___mclassdef_61d, /* pointer to model:MVirtualTypeDef:model#MPropDef#mclassdef= */
(nitmethod_t)nit___nit__MPropDef___mproperty, /* pointer to model:MVirtualTypeDef:model#MPropDef#mproperty */
(nitmethod_t)nit___nit__MPropDef___mproperty_61d, /* pointer to model:MVirtualTypeDef:model#MPropDef#mproperty= */
(nitmethod_t)nit___nit__MPropDef___location, /* pointer to model:MVirtualTypeDef:model#MPropDef#location */
(nitmethod_t)nit___nit__MPropDef___location_61d, /* pointer to model:MVirtualTypeDef:model#MPropDef#location= */
(nitmethod_t)nit___nit__MPropDef___to_s_61d, /* pointer to model:MVirtualTypeDef:model#MPropDef#to_s= */
(nitmethod_t)nit___nit__MPropDef___is_intro, /* pointer to model:MVirtualTypeDef:model#MPropDef#is_intro */
(nitmethod_t)nit___nit__MPropDef___lookup_next_definition, /* pointer to model:MVirtualTypeDef:model#MPropDef#lookup_next_definition */
(nitmethod_t)nit__modelize_property___MPropDef___has_supercall, /* pointer to model:MVirtualTypeDef:modelize_property#MPropDef#has_supercall */
(nitmethod_t)nit__modelize_property___MPropDef___has_supercall_61d, /* pointer to model:MVirtualTypeDef:modelize_property#MPropDef#has_supercall= */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MVirtualTypeDef:kernel#Object#init */
(nitmethod_t)nit___nit__MVirtualTypeDef___bound, /* pointer to model:MVirtualTypeDef:model#MVirtualTypeDef#bound */
(nitmethod_t)nit___nit__MVirtualTypeDef___bound_61d, /* pointer to model:MVirtualTypeDef:model#MVirtualTypeDef#bound= */
(nitmethod_t)nit___nit__MVirtualTypeDef___is_fixed, /* pointer to model:MVirtualTypeDef:model#MVirtualTypeDef#is_fixed */
(nitmethod_t)nit___nit__MVirtualTypeDef___is_fixed_61d, /* pointer to model:MVirtualTypeDef:model#MVirtualTypeDef#is_fixed= */
}
};
/* allocate MVirtualTypeDef */
val* NEW_nit__MVirtualTypeDef(const struct type* type) {
val* self /* : MVirtualTypeDef */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 15*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MVirtualTypeDef;
var = NULL;
self->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var; /* _deprecation on <self:MVirtualTypeDef exact> */
var1 = 0;
self->attrs[COLOR_nit__modelize_property__MPropDef___has_supercall].s = var1; /* _has_supercall on <self:MVirtualTypeDef exact> */
var2 = NULL;
self->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val = var2; /* _bound on <self:MVirtualTypeDef exact> */
var3 = 0;
self->attrs[COLOR_nit__model__MVirtualTypeDef___is_fixed].s = var3; /* _is_fixed on <self:MVirtualTypeDef exact> */
return self;
}
/* runtime class nit__MClassKind */
const struct class class_nit__MClassKind = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MClassKind:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MClassKind:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MClassKind:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MClassKind:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MClassKind:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to model:MClassKind:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MClassKind:kernel#Object#sys */
(nitmethod_t)nit___nit__MClassKind___standard__kernel__Object__init, /* pointer to model:MClassKind:model#MClassKind#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to model:MClassKind:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__MClassKind___standard__string__Object__to_s, /* pointer to model:MClassKind:model#MClassKind#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MClassKind:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MClassKind:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MClassKind:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MClassKind:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to model:MClassKind:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to model:MClassKind:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MClassKind:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to model:MClassKind:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to model:MClassKind:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to model:MClassKind:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to model:MClassKind:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to model:MClassKind:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to model:MClassKind:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to model:MClassKind:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to model:MClassKind:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to model:MClassKind:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to model:MClassKind:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to model:MClassKind:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to model:MClassKind:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to model:MClassKind:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to model:MClassKind:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to model:MClassKind:model#Object#extern_kind */
(nitmethod_t)nit___nit__MClassKind___to_s_61d, /* pointer to model:MClassKind:model#MClassKind#to_s= */
(nitmethod_t)nit___nit__MClassKind___need_init, /* pointer to model:MClassKind:model#MClassKind#need_init */
(nitmethod_t)nit___nit__MClassKind___need_init_61d, /* pointer to model:MClassKind:model#MClassKind#need_init= */
(nitmethod_t)nit___nit__MClassKind___can_specialize, /* pointer to model:MClassKind:model#MClassKind#can_specialize */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MClassKind:kernel#Object#init */
}
};
/* allocate MClassKind */
val* NEW_nit__MClassKind(const struct type* type) {
val* self /* : MClassKind */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MClassKind;
return self;
}
/* runtime class nit__MModule */
const struct class class_nit__MModule = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to mmodule:MModule:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to mmodule:MModule:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to mmodule:MModule:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to mmodule:MModule:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to mmodule:MModule:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to mmodule:MModule:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to mmodule:MModule:kernel#Object#sys */
(nitmethod_t)nit___nit__MModule___standard__kernel__Object__init, /* pointer to mmodule:MModule:mmodule#MModule#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to mmodule:MModule:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__MModule___standard__string__Object__to_s, /* pointer to mmodule:MModule:mmodule#MModule#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to mmodule:MModule:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to mmodule:MModule:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to mmodule:MModule:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to mmodule:MModule:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to mmodule:MModule:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to mmodule:MModule:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to mmodule:MModule:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to mmodule:MModule:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to mmodule:MModule:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to mmodule:MModule:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to mmodule:MModule:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to mmodule:MModule:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to mmodule:MModule:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to mmodule:MModule:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to mmodule:MModule:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to mmodule:MModule:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to mmodule:MModule:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to mmodule:MModule:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to mmodule:MModule:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to mmodule:MModule:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to mmodule:MModule:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to mmodule:MModule:model#Object#extern_kind */
(nitmethod_t)nit___nit__MModule___nit__model_base__MEntity__name, /* pointer to mmodule:MModule:mmodule#MModule#name */
(nitmethod_t)nit___nit__MModule___nit__model_base__MEntity__full_name, /* pointer to mmodule:MModule:mmodule#MModule#full_name */
(nitmethod_t)nit___nit__MModule___nit__model_base__MEntity__c_name, /* pointer to mmodule:MModule:mmodule#MModule#c_name */
(nitmethod_t)nit___nit__MModule___nit__model_base__MEntity__model, /* pointer to mmodule:MModule:mmodule#MModule#model */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to mmodule:MModule:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to mmodule:MModule:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to mmodule:MModule:mdoc#MEntity#deprecation */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to mmodule:MModule:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to mmodule:MModule:separate_compiler#MEntity#const_color */
(nitmethod_t)nit___nit__MModule___model_61d, /* pointer to mmodule:MModule:mmodule#MModule#model= */
(nitmethod_t)nit___nit__MModule___mgroup, /* pointer to mmodule:MModule:mmodule#MModule#mgroup */
(nitmethod_t)nit___nit__MModule___mgroup_61d, /* pointer to mmodule:MModule:mmodule#MModule#mgroup= */
(nitmethod_t)nit___nit__MModule___mproject, /* pointer to mmodule:MModule:mmodule#MModule#mproject */
(nitmethod_t)nit___nit__MModule___name_61d, /* pointer to mmodule:MModule:mmodule#MModule#name= */
(nitmethod_t)nit___nit__MModule___location, /* pointer to mmodule:MModule:mmodule#MModule#location */
(nitmethod_t)nit___nit__MModule___location_61d, /* pointer to mmodule:MModule:mmodule#MModule#location= */
(nitmethod_t)nit___nit__MModule___in_importation, /* pointer to mmodule:MModule:mmodule#MModule#in_importation */
(nitmethod_t)nit___nit__MModule___in_importation_61d, /* pointer to mmodule:MModule:mmodule#MModule#in_importation= */
(nitmethod_t)nit___nit__MModule___namespace_for, /* pointer to mmodule:MModule:mmodule#MModule#namespace_for */
(nitmethod_t)nit___nit__MModule___c_namespace_for, /* pointer to mmodule:MModule:mmodule#MModule#c_namespace_for */
(nitmethod_t)nit___nit__MModule___set_imported_mmodules, /* pointer to mmodule:MModule:mmodule#MModule#set_imported_mmodules */
(nitmethod_t)nit___nit__MModule___intrude_mmodules, /* pointer to mmodule:MModule:mmodule#MModule#intrude_mmodules */
(nitmethod_t)nit___nit__MModule___public_mmodules, /* pointer to mmodule:MModule:mmodule#MModule#public_mmodules */
(nitmethod_t)nit___nit__MModule___private_mmodules, /* pointer to mmodule:MModule:mmodule#MModule#private_mmodules */
(nitmethod_t)nit___nit__MModule___visibility_for, /* pointer to mmodule:MModule:mmodule#MModule#visibility_for */
(nitmethod_t)nit___nit__MModule___set_visibility_for, /* pointer to mmodule:MModule:mmodule#MModule#set_visibility_for */
(nitmethod_t)nit___nit__MModule___is_visible, /* pointer to mmodule:MModule:mmodule#MModule#is_visible */
(nitmethod_t)nit___nit__MModule___is_fictive, /* pointer to mmodule:MModule:mmodule#MModule#is_fictive */
(nitmethod_t)nit___nit__MModule___is_fictive_61d, /* pointer to mmodule:MModule:mmodule#MModule#is_fictive= */
(nitmethod_t)nit___nit__MModule___is_test_suite_61d, /* pointer to mmodule:MModule:mmodule#MModule#is_test_suite= */
(nitmethod_t)nit__model___MModule___intro_mclasses, /* pointer to mmodule:MModule:model#MModule#intro_mclasses */
(nitmethod_t)nit__model___MModule___mclassdefs, /* pointer to mmodule:MModule:model#MModule#mclassdefs */
(nitmethod_t)nit__model___MModule___flatten_mclass_hierarchy, /* pointer to mmodule:MModule:model#MModule#flatten_mclass_hierarchy */
(nitmethod_t)nit__model___MModule___linearize_mclasses, /* pointer to mmodule:MModule:model#MModule#linearize_mclasses */
(nitmethod_t)nit__model___MModule___linearize_mclassdefs, /* pointer to mmodule:MModule:model#MModule#linearize_mclassdefs */
(nitmethod_t)nit__model___MModule___linearize_mpropdefs, /* pointer to mmodule:MModule:model#MModule#linearize_mpropdefs */
(nitmethod_t)nit__model___MModule___flatten_mclass_hierarchy_cache, /* pointer to mmodule:MModule:model#MModule#flatten_mclass_hierarchy_cache */
(nitmethod_t)nit__model___MModule___flatten_mclass_hierarchy_cache_61d, /* pointer to mmodule:MModule:model#MModule#flatten_mclass_hierarchy_cache= */
(nitmethod_t)nit__model___MModule___object_type, /* pointer to mmodule:MModule:model#MModule#object_type */
(nitmethod_t)nit__model___MModule___object_type_cache, /* pointer to mmodule:MModule:model#MModule#object_type_cache */
(nitmethod_t)nit__model___MModule___object_type_cache_61d, /* pointer to mmodule:MModule:model#MModule#object_type_cache= */
(nitmethod_t)nit__model___MModule___pointer_type, /* pointer to mmodule:MModule:model#MModule#pointer_type */
(nitmethod_t)nit__model___MModule___bool_type, /* pointer to mmodule:MModule:model#MModule#bool_type */
(nitmethod_t)nit__model___MModule___bool_type_cache, /* pointer to mmodule:MModule:model#MModule#bool_type_cache */
(nitmethod_t)nit__model___MModule___bool_type_cache_61d, /* pointer to mmodule:MModule:model#MModule#bool_type_cache= */
(nitmethod_t)nit__model___MModule___sys_type, /* pointer to mmodule:MModule:model#MModule#sys_type */
(nitmethod_t)nit__model___MModule___finalizable_type, /* pointer to mmodule:MModule:model#MModule#finalizable_type */
(nitmethod_t)nit__model___MModule___get_primitive_class, /* pointer to mmodule:MModule:model#MModule#get_primitive_class */
(nitmethod_t)nit__model___MModule___try_get_primitive_method, /* pointer to mmodule:MModule:model#MModule#try_get_primitive_method */
(nitmethod_t)nit__platform___MModule___local_target_platform, /* pointer to mmodule:MModule:platform#MModule#local_target_platform */
(nitmethod_t)nit__platform___MModule___local_target_platform_61d, /* pointer to mmodule:MModule:platform#MModule#local_target_platform= */
(nitmethod_t)nit__platform___MModule___target_platform, /* pointer to mmodule:MModule:platform#MModule#target_platform */
(nitmethod_t)nit__abstract_compiler___MModule___properties, /* pointer to mmodule:MModule:abstract_compiler#MModule#properties */
(nitmethod_t)nit__abstract_compiler___MModule___properties_cache, /* pointer to mmodule:MModule:abstract_compiler#MModule#properties_cache */
(nitmethod_t)nit__abstract_compiler___MModule___finalize_ffi, /* pointer to mmodule:MModule:abstract_compiler#MModule#finalize_ffi */
(nitmethod_t)nit__abstract_compiler___MModule___collect_linker_libs, /* pointer to mmodule:MModule:abstract_compiler#MModule#collect_linker_libs */
(nitmethod_t)standard___standard__Object___init, /* pointer to mmodule:MModule:kernel#Object#init */
}
};
/* allocate MModule */
val* NEW_nit__MModule(const struct type* type) {
val* self /* : MModule */;
val* var /* : null */;
val* var1 /* : HashSet[MModule] */;
val* var2 /* : HashSet[MModule] */;
val* var3 /* : HashSet[MModule] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[MClass] */;
val* var7 /* : Array[MClassDef] */;
val* var8 /* : null */;
val* var9 /* : null */;
val* var10 /* : HashMap[MClass, Set[MProperty]] */;
self = nit_alloc(sizeof(struct instance) + 27*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MModule;
var = NULL;
self->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var; /* _deprecation on <self:MModule exact> */
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MModule);
{
standard___standard__HashSet___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashSet#init on <var1:HashSet[MModule]>*/
}
self->attrs[COLOR_nit__mmodule__MModule___intrude_mmodules].val = var1; /* _intrude_mmodules on <self:MModule exact> */
var2 = NEW_standard__HashSet(&type_standard__HashSet__nit__MModule);
{
standard___standard__HashSet___standard__kernel__Object__init(var2); /* Direct call hash_collection#HashSet#init on <var2:HashSet[MModule]>*/
}
self->attrs[COLOR_nit__mmodule__MModule___public_mmodules].val = var2; /* _public_mmodules on <self:MModule exact> */
var3 = NEW_standard__HashSet(&type_standard__HashSet__nit__MModule);
{
standard___standard__HashSet___standard__kernel__Object__init(var3); /* Direct call hash_collection#HashSet#init on <var3:HashSet[MModule]>*/
}
self->attrs[COLOR_nit__mmodule__MModule___private_mmodules].val = var3; /* _private_mmodules on <self:MModule exact> */
var4 = 0;
self->attrs[COLOR_nit__mmodule__MModule___is_fictive].s = var4; /* _is_fictive on <self:MModule exact> */
var5 = 0;
self->attrs[COLOR_nit__mmodule__MModule___is_test_suite].s = var5; /* _is_test_suite on <self:MModule exact> */
var6 = NEW_standard__Array(&type_standard__Array__nit__MClass);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[MClass]>*/
}
self->attrs[COLOR_nit__model__MModule___intro_mclasses].val = var6; /* _intro_mclasses on <self:MModule exact> */
var7 = NEW_standard__Array(&type_standard__Array__nit__MClassDef);
{
standard___standard__Array___standard__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[MClassDef]>*/
}
self->attrs[COLOR_nit__model__MModule___mclassdefs].val = var7; /* _mclassdefs on <self:MModule exact> */
var8 = NULL;
self->attrs[COLOR_nit__model__MModule___flatten_mclass_hierarchy_cache].val = var8; /* _flatten_mclass_hierarchy_cache on <self:MModule exact> */
var9 = NULL;
self->attrs[COLOR_nit__platform__MModule___local_target_platform].val = var9; /* _local_target_platform on <self:MModule exact> */
var10 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClass__standard__Set__nit__MProperty);
{
standard___standard__HashMap___standard__kernel__Object__init(var10); /* Direct call hash_collection#HashMap#init on <var10:HashMap[MClass, Set[MProperty]]>*/
}
self->attrs[COLOR_nit__abstract_compiler__MModule___properties_cache].val = var10; /* _properties_cache on <self:MModule exact> */
return self;
}
/* runtime class nit__SourceFile */
const struct class class_nit__SourceFile = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to location:SourceFile:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to location:SourceFile:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to location:SourceFile:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to location:SourceFile:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to location:SourceFile:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to location:SourceFile:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to location:SourceFile:kernel#Object#sys */
(nitmethod_t)nit___nit__SourceFile___standard__kernel__Object__init, /* pointer to location:SourceFile:location#SourceFile#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to location:SourceFile:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to location:SourceFile:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to location:SourceFile:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to location:SourceFile:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to location:SourceFile:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to location:SourceFile:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to location:SourceFile:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to location:SourceFile:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to location:SourceFile:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to location:SourceFile:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to location:SourceFile:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to location:SourceFile:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to location:SourceFile:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to location:SourceFile:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to location:SourceFile:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to location:SourceFile:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to location:SourceFile:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to location:SourceFile:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to location:SourceFile:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to location:SourceFile:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to location:SourceFile:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to location:SourceFile:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to location:SourceFile:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to location:SourceFile:model#Object#extern_kind */
(nitmethod_t)nit___nit__SourceFile___filename, /* pointer to location:SourceFile:location#SourceFile#filename */
(nitmethod_t)nit___nit__SourceFile___filename_61d, /* pointer to location:SourceFile:location#SourceFile#filename= */
(nitmethod_t)nit___nit__SourceFile___string, /* pointer to location:SourceFile:location#SourceFile#string */
(nitmethod_t)nit___nit__SourceFile___string_61d, /* pointer to location:SourceFile:location#SourceFile#string= */
(nitmethod_t)nit___nit__SourceFile___stream, /* pointer to location:SourceFile:location#SourceFile#stream */
(nitmethod_t)nit___nit__SourceFile___stream_61d, /* pointer to location:SourceFile:location#SourceFile#stream= */
(nitmethod_t)nit___nit__SourceFile___line_starts, /* pointer to location:SourceFile:location#SourceFile#line_starts */
(nitmethod_t)nit__parser_nodes___SourceFile___first_token_61d, /* pointer to location:SourceFile:parser_nodes#SourceFile#first_token= */
(nitmethod_t)nit__parser_nodes___SourceFile___last_token_61d, /* pointer to location:SourceFile:parser_nodes#SourceFile#last_token= */
(nitmethod_t)nit__loader___SourceFile___mmodule, /* pointer to location:SourceFile:loader#SourceFile#mmodule */
(nitmethod_t)nit__loader___SourceFile___mmodule_61d, /* pointer to location:SourceFile:loader#SourceFile#mmodule= */
}
};
/* allocate SourceFile */
val* NEW_nit__SourceFile(const struct type* type) {
val* self /* : SourceFile */;
val* var /* : Array[Int] */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__SourceFile;
var = NEW_standard__Array(&type_standard__Array__standard__Int);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[Int]>*/
}
self->attrs[COLOR_nit__location__SourceFile___line_starts].val = var; /* _line_starts on <self:SourceFile exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__SourceFile___first_token].val = var1; /* _first_token on <self:SourceFile exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__SourceFile___last_token].val = var2; /* _last_token on <self:SourceFile exact> */
var3 = NULL;
self->attrs[COLOR_nit__loader__SourceFile___mmodule].val = var3; /* _mmodule on <self:SourceFile exact> */
return self;
}
/* runtime class nit__Location */
const struct class class_nit__Location = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to location:Location:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to location:Location:kernel#Object#is_same_instance */
(nitmethod_t)nit___nit__Location___standard__kernel__Object___61d_61d, /* pointer to location:Location:location#Location#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to location:Location:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to location:Location:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to location:Location:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to location:Location:kernel#Object#sys */
(nitmethod_t)nit___nit__Location___standard__kernel__Object__init, /* pointer to location:Location:location#Location#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to location:Location:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__Location___standard__string__Object__to_s, /* pointer to location:Location:location#Location#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to location:Location:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to location:Location:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to location:Location:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to location:Location:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to location:Location:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to location:Location:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to location:Location:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to location:Location:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to location:Location:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to location:Location:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to location:Location:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to location:Location:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to location:Location:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to location:Location:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to location:Location:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to location:Location:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to location:Location:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to location:Location:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to location:Location:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to location:Location:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to location:Location:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to location:Location:model#Object#extern_kind */
(nitmethod_t)nit___nit__Location___standard__kernel__Comparable___60d, /* pointer to location:Location:location#Location#< */
(nitmethod_t)standard___standard__Comparable____60d_61d, /* pointer to location:Location:kernel#Comparable#<= */
(nitmethod_t)standard___standard__Comparable____62d_61d, /* pointer to location:Location:kernel#Comparable#>= */
(nitmethod_t)standard___standard__Comparable____62d, /* pointer to location:Location:kernel#Comparable#> */
(nitmethod_t)standard___standard__Comparable____60d_61d_62d, /* pointer to location:Location:kernel#Comparable#<=> */
(nitmethod_t)nit___nit__Location___file, /* pointer to location:Location:location#Location#file */
(nitmethod_t)nit___nit__Location___file_61d, /* pointer to location:Location:location#Location#file= */
(nitmethod_t)nit___nit__Location___line_start, /* pointer to location:Location:location#Location#line_start */
(nitmethod_t)nit___nit__Location___line_start_61d, /* pointer to location:Location:location#Location#line_start= */
(nitmethod_t)nit___nit__Location___line_end, /* pointer to location:Location:location#Location#line_end */
(nitmethod_t)nit___nit__Location___line_end_61d, /* pointer to location:Location:location#Location#line_end= */
(nitmethod_t)nit___nit__Location___column_start, /* pointer to location:Location:location#Location#column_start */
(nitmethod_t)nit___nit__Location___column_start_61d, /* pointer to location:Location:location#Location#column_start= */
(nitmethod_t)nit___nit__Location___column_end, /* pointer to location:Location:location#Location#column_end */
(nitmethod_t)nit___nit__Location___column_end_61d, /* pointer to location:Location:location#Location#column_end= */
(nitmethod_t)nit___nit__Location___pstart, /* pointer to location:Location:location#Location#pstart */
(nitmethod_t)nit___nit__Location___pend, /* pointer to location:Location:location#Location#pend */
(nitmethod_t)nit___nit__Location___text, /* pointer to location:Location:location#Location#text */
(nitmethod_t)nit___nit__Location___text_cache, /* pointer to location:Location:location#Location#text_cache */
(nitmethod_t)nit___nit__Location___text_cache_61d, /* pointer to location:Location:location#Location#text_cache= */
(nitmethod_t)nit___nit__Location___located_in, /* pointer to location:Location:location#Location#located_in */
(nitmethod_t)nit___nit__Location___colored_line, /* pointer to location:Location:location#Location#colored_line */
(nitmethod_t)standard___standard__Object___init, /* pointer to location:Location:kernel#Object#init */
}
};
/* allocate Location */
val* NEW_nit__Location(const struct type* type) {
val* self /* : Location */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__Location;
var = NULL;
self->attrs[COLOR_nit__location__Location___text_cache].val = var; /* _text_cache on <self:Location exact> */
return self;
}
/* runtime class standard__Passwd */
/* allocate Passwd */
val* NEW_standard__Passwd(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Passwd is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Group */
/* allocate Group */
val* NEW_standard__Group(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Group is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Text */
/* allocate Text */
val* NEW_standard__Text(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Text is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__FlatText */
/* allocate FlatText */
val* NEW_standard__FlatText(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "FlatText is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__string__StringCharView */
/* allocate StringCharView */
val* NEW_standard__string__StringCharView(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "StringCharView is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__string__BufferCharView */
/* allocate BufferCharView */
val* NEW_standard__string__BufferCharView(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "BufferCharView is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__String */
/* allocate String */
val* NEW_standard__String(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "String is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__string__FlatSubstringsIter */
const struct class class_standard__string__FlatSubstringsIter = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to string:FlatSubstringsIter:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to string:FlatSubstringsIter:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to string:FlatSubstringsIter:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to string:FlatSubstringsIter:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to string:FlatSubstringsIter:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to string:FlatSubstringsIter:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to string:FlatSubstringsIter:kernel#Object#sys */
(nitmethod_t)standard__string___standard__string__FlatSubstringsIter___standard__kernel__Object__init, /* pointer to string:FlatSubstringsIter:string#FlatSubstringsIter#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to string:FlatSubstringsIter:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to string:FlatSubstringsIter:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to string:FlatSubstringsIter:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to string:FlatSubstringsIter:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to string:FlatSubstringsIter:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to string:FlatSubstringsIter:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to string:FlatSubstringsIter:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to string:FlatSubstringsIter:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to string:FlatSubstringsIter:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to string:FlatSubstringsIter:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to string:FlatSubstringsIter:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to string:FlatSubstringsIter:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to string:FlatSubstringsIter:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to string:FlatSubstringsIter:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to string:FlatSubstringsIter:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to string:FlatSubstringsIter:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to string:FlatSubstringsIter:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to string:FlatSubstringsIter:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to string:FlatSubstringsIter:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to string:FlatSubstringsIter:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to string:FlatSubstringsIter:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to string:FlatSubstringsIter:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to string:FlatSubstringsIter:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to string:FlatSubstringsIter:model#Object#extern_kind */
(nitmethod_t)standard__string___standard__string__FlatSubstringsIter___standard__abstract_collection__Iterator__item, /* pointer to string:FlatSubstringsIter:string#FlatSubstringsIter#item */
(nitmethod_t)standard__string___standard__string__FlatSubstringsIter___standard__abstract_collection__Iterator__next, /* pointer to string:FlatSubstringsIter:string#FlatSubstringsIter#next */
(nitmethod_t)standard__string___standard__string__FlatSubstringsIter___standard__abstract_collection__Iterator__is_ok, /* pointer to string:FlatSubstringsIter:string#FlatSubstringsIter#is_ok */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to string:FlatSubstringsIter:abstract_collection#Iterator#iterator */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to string:FlatSubstringsIter:abstract_collection#Iterator#finish */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to string:FlatSubstringsIter:array#Iterator#to_a */
(nitmethod_t)standard__string___standard__string__FlatSubstringsIter___tgt, /* pointer to string:FlatSubstringsIter:string#FlatSubstringsIter#tgt */
(nitmethod_t)standard__string___standard__string__FlatSubstringsIter___tgt_61d, /* pointer to string:FlatSubstringsIter:string#FlatSubstringsIter#tgt= */
(nitmethod_t)standard___standard__Object___init, /* pointer to string:FlatSubstringsIter:kernel#Object#init */
}
};
/* allocate FlatSubstringsIter */
val* NEW_standard__string__FlatSubstringsIter(const struct type* type) {
val* self /* : FlatSubstringsIter */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__string__FlatSubstringsIter;
return self;
}
/* runtime class standard__FlatString */
const struct class class_standard__FlatString = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to string:FlatString:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to string:FlatString:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__FlatString___standard__kernel__Object___61d_61d, /* pointer to string:FlatString:string#FlatString#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to string:FlatString:kernel#Object#!= */
(nitmethod_t)standard___standard__FlatString___standard__kernel__Object__hash, /* pointer to string:FlatString:string#FlatString#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to string:FlatString:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to string:FlatString:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to string:FlatString:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to string:FlatString:sorter#Object#default_comparator */
(nitmethod_t)standard___standard__String___Object__to_s, /* pointer to string:FlatString:string#String#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to string:FlatString:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to string:FlatString:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to string:FlatString:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to string:FlatString:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to string:FlatString:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to string:FlatString:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to string:FlatString:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to string:FlatString:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to string:FlatString:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to string:FlatString:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to string:FlatString:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to string:FlatString:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to string:FlatString:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to string:FlatString:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to string:FlatString:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to string:FlatString:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to string:FlatString:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to string:FlatString:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to string:FlatString:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to string:FlatString:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to string:FlatString:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to string:FlatString:model#Object#extern_kind */
(nitmethod_t)standard___standard__FlatString___standard__kernel__Comparable___60d, /* pointer to string:FlatString:string#FlatString#< */
(nitmethod_t)standard___standard__Comparable____60d_61d, /* pointer to string:FlatString:kernel#Comparable#<= */
(nitmethod_t)standard___standard__Comparable____62d_61d, /* pointer to string:FlatString:kernel#Comparable#>= */
(nitmethod_t)standard___standard__Comparable____62d, /* pointer to string:FlatString:kernel#Comparable#> */
(nitmethod_t)standard___standard__Comparable____60d_61d_62d, /* pointer to string:FlatString:kernel#Comparable#<=> */
(nitmethod_t)standard__string_search___Text___Pattern__search_index_in, /* pointer to string:FlatString:string_search#Text#search_index_in */
(nitmethod_t)standard__string_search___Text___Pattern__search_in, /* pointer to string:FlatString:string_search#Text#search_in */
(nitmethod_t)standard___standard__Pattern___split_in, /* pointer to string:FlatString:string_search#Pattern#split_in */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__stream___Text___Streamable__write_to, /* pointer to string:FlatString:stream#Text#write_to */
(nitmethod_t)standard___standard__FlatString___Text__chars, /* pointer to string:FlatString:string#FlatString#chars */
(nitmethod_t)standard___standard__FlatText___Text__length, /* pointer to string:FlatString:string#FlatText#length */
(nitmethod_t)standard___standard__FlatString___Text__substring, /* pointer to string:FlatString:string#FlatString#substring */
(nitmethod_t)standard___standard__FlatString___Text__substrings, /* pointer to string:FlatString:string#FlatString#substrings */
(nitmethod_t)standard___standard__Text___is_empty, /* pointer to string:FlatString:string#Text#is_empty */
(nitmethod_t)standard___standard__FlatString___Text__empty, /* pointer to string:FlatString:string#FlatString#empty */
(nitmethod_t)standard___standard__FlatString___Text___91d_93d, /* pointer to string:FlatString:string#FlatString#[] */
(nitmethod_t)standard___standard__Text___last, /* pointer to string:FlatString:string#Text#last */
(nitmethod_t)standard___standard__FlatString___Text__to_cstring, /* pointer to string:FlatString:string#FlatString#to_cstring */
(nitmethod_t)standard___standard__Text___substring_from, /* pointer to string:FlatString:string#Text#substring_from */
(nitmethod_t)standard___standard__Text___has_substring, /* pointer to string:FlatString:string#Text#has_substring */
(nitmethod_t)standard___standard__Text___has_prefix, /* pointer to string:FlatString:string#Text#has_prefix */
(nitmethod_t)standard___standard__Text___has_suffix, /* pointer to string:FlatString:string#Text#has_suffix */
(nitmethod_t)standard___standard__Text___to_i, /* pointer to string:FlatString:string#Text#to_i */
(nitmethod_t)standard___standard__Text___to_f, /* pointer to string:FlatString:string#Text#to_f */
(nitmethod_t)standard___standard__Text___to_hex, /* pointer to string:FlatString:string#Text#to_hex */
(nitmethod_t)standard___standard__Text___a_to, /* pointer to string:FlatString:string#Text#a_to */
(nitmethod_t)standard___standard__Text___is_numeric, /* pointer to string:FlatString:string#Text#is_numeric */
(nitmethod_t)standard___standard__Text___chomp, /* pointer to string:FlatString:string#Text#chomp */
(nitmethod_t)standard___standard__Text___to_cmangle, /* pointer to string:FlatString:string#Text#to_cmangle */
(nitmethod_t)standard___standard__Text___escape_to_c, /* pointer to string:FlatString:string#Text#escape_to_c */
(nitmethod_t)standard___standard__Text___escape_to_sh, /* pointer to string:FlatString:string#Text#escape_to_sh */
(nitmethod_t)standard___standard__Text___escape_to_mk, /* pointer to string:FlatString:string#Text#escape_to_mk */
(nitmethod_t)standard___standard__Text___unescape_nit, /* pointer to string:FlatString:string#Text#unescape_nit */
(nitmethod_t)standard___standard__Text___hash_cache, /* pointer to string:FlatString:string#Text#hash_cache */
(nitmethod_t)standard___standard__Text___hash_cache_61d, /* pointer to string:FlatString:string#Text#hash_cache= */
(nitmethod_t)standard__string_search___Text___split, /* pointer to string:FlatString:string_search#Text#split */
(nitmethod_t)standard__string_search___Text___split_with, /* pointer to string:FlatString:string_search#Text#split_with */
(nitmethod_t)standard__string_search___Text___split_once_on, /* pointer to string:FlatString:string_search#Text#split_once_on */
(nitmethod_t)standard__string_search___Text___replace, /* pointer to string:FlatString:string_search#Text#replace */
(nitmethod_t)standard__file___Text___to_path, /* pointer to string:FlatString:file#Text#to_path */
(nitmethod_t)standard___standard__FlatText___items, /* pointer to string:FlatString:string#FlatText#items */
(nitmethod_t)standard___standard__FlatText___items_61d, /* pointer to string:FlatString:string#FlatText#items= */
(nitmethod_t)standard___standard__FlatText___real_items, /* pointer to string:FlatString:string#FlatText#real_items */
(nitmethod_t)standard___standard__FlatText___real_items_61d, /* pointer to string:FlatString:string#FlatText#real_items= */
(nitmethod_t)standard___standard__FlatText___length_61d, /* pointer to string:FlatString:string#FlatText#length= */
(nitmethod_t)standard__ropes___FlatString___standard__string__String___43d, /* pointer to string:FlatString:ropes#FlatString#+ */
(nitmethod_t)standard___standard__FlatString___String___42d, /* pointer to string:FlatString:string#FlatString#* */
(nitmethod_t)standard___standard__FlatString___String__to_upper, /* pointer to string:FlatString:string#FlatString#to_upper */
(nitmethod_t)standard___standard__FlatString___String__to_lower, /* pointer to string:FlatString:string#FlatString#to_lower */
(nitmethod_t)standard__file___String___file_exists, /* pointer to string:FlatString:file#String#file_exists */
(nitmethod_t)standard__file___String___file_copy_to, /* pointer to string:FlatString:file#String#file_copy_to */
(nitmethod_t)standard__file___String___strip_extension, /* pointer to string:FlatString:file#String#strip_extension */
(nitmethod_t)standard__file___String___basename, /* pointer to string:FlatString:file#String#basename */
(nitmethod_t)standard__file___String___dirname, /* pointer to string:FlatString:file#String#dirname */
(nitmethod_t)standard__file___String___realpath, /* pointer to string:FlatString:file#String#realpath */
(nitmethod_t)standard__file___String___simplify_path, /* pointer to string:FlatString:file#String#simplify_path */
(nitmethod_t)standard__file___String___join_path, /* pointer to string:FlatString:file#String#join_path */
(nitmethod_t)standard__file___String____47d, /* pointer to string:FlatString:file#String#/ */
(nitmethod_t)standard__file___String___relpath, /* pointer to string:FlatString:file#String#relpath */
(nitmethod_t)standard__file___String___mkdir, /* pointer to string:FlatString:file#String#mkdir */
(nitmethod_t)standard__file___String___file_extension, /* pointer to string:FlatString:file#String#file_extension */
(nitmethod_t)standard__environ___String___environ, /* pointer to string:FlatString:environ#String#environ */
(nitmethod_t)standard___standard__FlatString___index_from, /* pointer to string:FlatString:string#FlatString#index_from */
(nitmethod_t)standard___standard__FlatString___index_from_61d, /* pointer to string:FlatString:string#FlatString#index_from= */
(nitmethod_t)standard___standard__FlatString___index_to, /* pointer to string:FlatString:string#FlatString#index_to */
(nitmethod_t)standard___standard__FlatString___index_to_61d, /* pointer to string:FlatString:string#FlatString#index_to= */
(nitmethod_t)standard___standard__FlatString___with_infos, /* pointer to string:FlatString:string#FlatString#with_infos */
(nitmethod_t)standard___standard__Text___standard__kernel__Object___61d_61d, /* pointer to string:FlatString:string#Text#== */
(nitmethod_t)standard___standard__Text___standard__kernel__Comparable___60d, /* pointer to string:FlatString:string#Text#< */
}
};
/* allocate FlatString */
val* NEW_standard__FlatString(const struct type* type) {
val* self /* : FlatString */;
val* var /* : null */;
val* var1 /* : null */;
long var2 /* : Int */;
val* var3 /* : FlatStringCharView */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__FlatString;
var = NULL;
self->attrs[COLOR_standard__string__Text___hash_cache].val = var; /* _hash_cache on <self:FlatString exact> */
var1 = NULL;
self->attrs[COLOR_standard__string__FlatText___real_items].val = var1; /* _real_items on <self:FlatString exact> */
var2 = 0;
self->attrs[COLOR_standard__string__FlatText___length].l = var2; /* _length on <self:FlatString exact> */
var3 = NEW_standard__string__FlatStringCharView(&type_standard__string__FlatStringCharView);
{
((void (*)(val* self, val* p0))(var3->class->vft[COLOR_standard__string__StringCharView__target_61d]))(var3, self) /* target= on <var3:FlatStringCharView>*/;
}
{
((void (*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3) /* init on <var3:FlatStringCharView>*/;
}
self->attrs[COLOR_standard__string__FlatString___chars].val = var3; /* _chars on <self:FlatString exact> */
return self;
}
/* runtime class standard__string__FlatStringReverseIterator */
/* allocate FlatStringReverseIterator */
val* NEW_standard__string__FlatStringReverseIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "FlatStringReverseIterator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__string__FlatStringIterator */
const struct class class_standard__string__FlatStringIterator = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to string:FlatStringIterator:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to string:FlatStringIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to string:FlatStringIterator:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to string:FlatStringIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to string:FlatStringIterator:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to string:FlatStringIterator:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to string:FlatStringIterator:kernel#Object#sys */
(nitmethod_t)standard__string___standard__string__FlatStringIterator___standard__kernel__Object__init, /* pointer to string:FlatStringIterator:string#FlatStringIterator#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to string:FlatStringIterator:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to string:FlatStringIterator:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to string:FlatStringIterator:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to string:FlatStringIterator:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to string:FlatStringIterator:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to string:FlatStringIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to string:FlatStringIterator:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to string:FlatStringIterator:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to string:FlatStringIterator:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to string:FlatStringIterator:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to string:FlatStringIterator:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to string:FlatStringIterator:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to string:FlatStringIterator:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to string:FlatStringIterator:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to string:FlatStringIterator:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to string:FlatStringIterator:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to string:FlatStringIterator:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to string:FlatStringIterator:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to string:FlatStringIterator:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to string:FlatStringIterator:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to string:FlatStringIterator:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to string:FlatStringIterator:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to string:FlatStringIterator:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to string:FlatStringIterator:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_standard__string___standard__string__FlatStringIterator___standard__abstract_collection__Iterator__item, /* pointer to string:FlatStringIterator:string#FlatStringIterator#item */
(nitmethod_t)standard__string___standard__string__FlatStringIterator___standard__abstract_collection__Iterator__next, /* pointer to string:FlatStringIterator:string#FlatStringIterator#next */
(nitmethod_t)standard__string___standard__string__FlatStringIterator___standard__abstract_collection__Iterator__is_ok, /* pointer to string:FlatStringIterator:string#FlatStringIterator#is_ok */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to string:FlatStringIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to string:FlatStringIterator:abstract_collection#Iterator#finish */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to string:FlatStringIterator:array#Iterator#to_a */
(nitmethod_t)standard__string___standard__string__FlatStringIterator___standard__abstract_collection__IndexedIterator__index, /* pointer to string:FlatStringIterator:string#FlatStringIterator#index */
(nitmethod_t)standard__string___standard__string__FlatStringIterator___target, /* pointer to string:FlatStringIterator:string#FlatStringIterator#target */
(nitmethod_t)standard__string___standard__string__FlatStringIterator___target_61d, /* pointer to string:FlatStringIterator:string#FlatStringIterator#target= */
(nitmethod_t)standard__string___standard__string__FlatStringIterator___target_items, /* pointer to string:FlatStringIterator:string#FlatStringIterator#target_items */
(nitmethod_t)standard__string___standard__string__FlatStringIterator___target_items_61d, /* pointer to string:FlatStringIterator:string#FlatStringIterator#target_items= */
(nitmethod_t)standard__string___standard__string__FlatStringIterator___curr_pos, /* pointer to string:FlatStringIterator:string#FlatStringIterator#curr_pos */
(nitmethod_t)standard__string___standard__string__FlatStringIterator___curr_pos_61d, /* pointer to string:FlatStringIterator:string#FlatStringIterator#curr_pos= */
(nitmethod_t)standard__string___standard__string__FlatStringIterator___with_pos, /* pointer to string:FlatStringIterator:string#FlatStringIterator#with_pos */
(nitmethod_t)standard___standard__Object___init, /* pointer to string:FlatStringIterator:kernel#Object#init */
}
};
/* allocate FlatStringIterator */
val* NEW_standard__string__FlatStringIterator(const struct type* type) {
val* self /* : FlatStringIterator */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__string__FlatStringIterator;
return self;
}
/* runtime class standard__string__FlatStringCharView */
const struct class class_standard__string__FlatStringCharView = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to string:FlatStringCharView:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to string:FlatStringCharView:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object___61d_61d, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to string:FlatStringCharView:kernel#Object#!= */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object__hash, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to string:FlatStringCharView:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to string:FlatStringCharView:kernel#Object#sys */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__kernel__Object__init, /* pointer to string:FlatStringCharView:string#StringCharView#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to string:FlatStringCharView:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to string:FlatStringCharView:string#Collection#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to string:FlatStringCharView:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to string:FlatStringCharView:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to string:FlatStringCharView:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to string:FlatStringCharView:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to string:FlatStringCharView:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to string:FlatStringCharView:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to string:FlatStringCharView:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to string:FlatStringCharView:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to string:FlatStringCharView:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to string:FlatStringCharView:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to string:FlatStringCharView:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to string:FlatStringCharView:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to string:FlatStringCharView:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to string:FlatStringCharView:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to string:FlatStringCharView:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to string:FlatStringCharView:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to string:FlatStringCharView:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to string:FlatStringCharView:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to string:FlatStringCharView:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to string:FlatStringCharView:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to string:FlatStringCharView:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to string:FlatStringCharView:model#Object#extern_kind */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__iterator, /* pointer to string:FlatStringCharView:string#StringCharView#iterator */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__is_empty, /* pointer to string:FlatStringCharView:string#StringCharView#is_empty */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__length, /* pointer to string:FlatStringCharView:string#StringCharView#length */
(nitmethod_t)standard___standard__Collection___has, /* pointer to string:FlatStringCharView:abstract_collection#Collection#has */
(nitmethod_t)standard___standard__SequenceRead___Collection__first, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#first */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to string:FlatStringCharView:abstract_collection#Collection#has_all */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to string:FlatStringCharView:array#Collection#to_a */
(nitmethod_t)standard__string___Collection___join, /* pointer to string:FlatStringCharView:string#Collection#join */
(nitmethod_t)VIRTUAL_standard__string___standard__string__FlatStringCharView___standard__abstract_collection__SequenceRead___91d_93d, /* pointer to string:FlatStringCharView:string#FlatStringCharView#[] */
(nitmethod_t)standard___standard__SequenceRead___last, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#last */
(nitmethod_t)standard___standard__SequenceRead___index_of, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#index_of */
(nitmethod_t)standard___standard__SequenceRead___last_index_of, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#last_index_of */
(nitmethod_t)standard___standard__SequenceRead___index_of_from, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#index_of_from */
(nitmethod_t)standard___standard__SequenceRead___last_index_of_from, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#last_index_of_from */
(nitmethod_t)standard__string___standard__string__FlatStringCharView___standard__abstract_collection__SequenceRead__iterator_from, /* pointer to string:FlatStringCharView:string#FlatStringCharView#iterator_from */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__string___standard__string__StringCharView___target, /* pointer to string:FlatStringCharView:string#StringCharView#target */
(nitmethod_t)standard__string___standard__string__StringCharView___target_61d, /* pointer to string:FlatStringCharView:string#StringCharView#target= */
(nitmethod_t)standard___standard__Object___init, /* pointer to string:FlatStringCharView:kernel#Object#init */
}
};
/* allocate FlatStringCharView */
val* NEW_standard__string__FlatStringCharView(const struct type* type) {
val* self /* : FlatStringCharView */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__string__FlatStringCharView;
return self;
}
/* runtime class standard__Buffer */
/* allocate Buffer */
val* NEW_standard__Buffer(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Buffer is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__FlatBuffer */
const struct class class_standard__FlatBuffer = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to string:FlatBuffer:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to string:FlatBuffer:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Text___standard__kernel__Object___61d_61d, /* pointer to string:FlatBuffer:string#Text#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to string:FlatBuffer:kernel#Object#!= */
(nitmethod_t)standard___standard__Buffer___standard__kernel__Object__hash, /* pointer to string:FlatBuffer:string#Buffer#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to string:FlatBuffer:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to string:FlatBuffer:kernel#Object#sys */
(nitmethod_t)standard___standard__FlatBuffer___standard__kernel__Object__init, /* pointer to string:FlatBuffer:string#FlatBuffer#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to string:FlatBuffer:sorter#Object#default_comparator */
(nitmethod_t)standard___standard__FlatBuffer___Object__to_s, /* pointer to string:FlatBuffer:string#FlatBuffer#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to string:FlatBuffer:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to string:FlatBuffer:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to string:FlatBuffer:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to string:FlatBuffer:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to string:FlatBuffer:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to string:FlatBuffer:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to string:FlatBuffer:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to string:FlatBuffer:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to string:FlatBuffer:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to string:FlatBuffer:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to string:FlatBuffer:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to string:FlatBuffer:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to string:FlatBuffer:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to string:FlatBuffer:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to string:FlatBuffer:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to string:FlatBuffer:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to string:FlatBuffer:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to string:FlatBuffer:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to string:FlatBuffer:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to string:FlatBuffer:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to string:FlatBuffer:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to string:FlatBuffer:model#Object#extern_kind */
(nitmethod_t)standard___standard__Text___standard__kernel__Comparable___60d, /* pointer to string:FlatBuffer:string#Text#< */
(nitmethod_t)standard___standard__Comparable____60d_61d, /* pointer to string:FlatBuffer:kernel#Comparable#<= */
(nitmethod_t)standard___standard__Comparable____62d_61d, /* pointer to string:FlatBuffer:kernel#Comparable#>= */
(nitmethod_t)standard___standard__Comparable____62d, /* pointer to string:FlatBuffer:kernel#Comparable#> */
(nitmethod_t)standard___standard__Comparable____60d_61d_62d, /* pointer to string:FlatBuffer:kernel#Comparable#<=> */
(nitmethod_t)standard__string_search___Text___Pattern__search_index_in, /* pointer to string:FlatBuffer:string_search#Text#search_index_in */
(nitmethod_t)standard__string_search___Text___Pattern__search_in, /* pointer to string:FlatBuffer:string_search#Text#search_in */
(nitmethod_t)standard___standard__Pattern___split_in, /* pointer to string:FlatBuffer:string_search#Pattern#split_in */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__stream___Text___Streamable__write_to, /* pointer to string:FlatBuffer:stream#Text#write_to */
(nitmethod_t)standard___standard__FlatBuffer___Text__chars, /* pointer to string:FlatBuffer:string#FlatBuffer#chars */
(nitmethod_t)standard___standard__FlatText___Text__length, /* pointer to string:FlatBuffer:string#FlatText#length */
(nitmethod_t)standard___standard__FlatBuffer___Text__substring, /* pointer to string:FlatBuffer:string#FlatBuffer#substring */
(nitmethod_t)standard___standard__FlatBuffer___Text__substrings, /* pointer to string:FlatBuffer:string#FlatBuffer#substrings */
(nitmethod_t)standard___standard__Text___is_empty, /* pointer to string:FlatBuffer:string#Text#is_empty */
(nitmethod_t)standard___standard__FlatBuffer___Text__empty, /* pointer to string:FlatBuffer:string#FlatBuffer#empty */
(nitmethod_t)standard___standard__FlatBuffer___Text___91d_93d, /* pointer to string:FlatBuffer:string#FlatBuffer#[] */
(nitmethod_t)standard___standard__Text___last, /* pointer to string:FlatBuffer:string#Text#last */
(nitmethod_t)standard___standard__FlatBuffer___Text__to_cstring, /* pointer to string:FlatBuffer:string#FlatBuffer#to_cstring */
(nitmethod_t)standard___standard__Text___substring_from, /* pointer to string:FlatBuffer:string#Text#substring_from */
(nitmethod_t)standard___standard__Text___has_substring, /* pointer to string:FlatBuffer:string#Text#has_substring */
(nitmethod_t)standard___standard__Text___has_prefix, /* pointer to string:FlatBuffer:string#Text#has_prefix */
(nitmethod_t)standard___standard__Text___has_suffix, /* pointer to string:FlatBuffer:string#Text#has_suffix */
(nitmethod_t)standard___standard__Text___to_i, /* pointer to string:FlatBuffer:string#Text#to_i */
(nitmethod_t)standard___standard__Text___to_f, /* pointer to string:FlatBuffer:string#Text#to_f */
(nitmethod_t)standard___standard__Text___to_hex, /* pointer to string:FlatBuffer:string#Text#to_hex */
(nitmethod_t)standard___standard__Text___a_to, /* pointer to string:FlatBuffer:string#Text#a_to */
(nitmethod_t)standard___standard__Text___is_numeric, /* pointer to string:FlatBuffer:string#Text#is_numeric */
(nitmethod_t)standard___standard__Text___chomp, /* pointer to string:FlatBuffer:string#Text#chomp */
(nitmethod_t)standard___standard__Text___to_cmangle, /* pointer to string:FlatBuffer:string#Text#to_cmangle */
(nitmethod_t)standard___standard__Text___escape_to_c, /* pointer to string:FlatBuffer:string#Text#escape_to_c */
(nitmethod_t)standard___standard__Text___escape_to_sh, /* pointer to string:FlatBuffer:string#Text#escape_to_sh */
(nitmethod_t)standard___standard__Text___escape_to_mk, /* pointer to string:FlatBuffer:string#Text#escape_to_mk */
(nitmethod_t)standard___standard__Text___unescape_nit, /* pointer to string:FlatBuffer:string#Text#unescape_nit */
(nitmethod_t)standard___standard__Text___hash_cache, /* pointer to string:FlatBuffer:string#Text#hash_cache */
(nitmethod_t)standard___standard__Text___hash_cache_61d, /* pointer to string:FlatBuffer:string#Text#hash_cache= */
(nitmethod_t)standard__string_search___Text___split, /* pointer to string:FlatBuffer:string_search#Text#split */
(nitmethod_t)standard__string_search___Text___split_with, /* pointer to string:FlatBuffer:string_search#Text#split_with */
(nitmethod_t)standard__string_search___Text___split_once_on, /* pointer to string:FlatBuffer:string_search#Text#split_once_on */
(nitmethod_t)standard__string_search___Text___replace, /* pointer to string:FlatBuffer:string_search#Text#replace */
(nitmethod_t)standard__file___Text___to_path, /* pointer to string:FlatBuffer:file#Text#to_path */
(nitmethod_t)standard___standard__FlatText___items, /* pointer to string:FlatBuffer:string#FlatText#items */
(nitmethod_t)standard___standard__FlatText___items_61d, /* pointer to string:FlatBuffer:string#FlatText#items= */
(nitmethod_t)standard___standard__FlatText___real_items, /* pointer to string:FlatBuffer:string#FlatText#real_items */
(nitmethod_t)standard___standard__FlatText___real_items_61d, /* pointer to string:FlatBuffer:string#FlatText#real_items= */
(nitmethod_t)standard___standard__FlatText___length_61d, /* pointer to string:FlatBuffer:string#FlatText#length= */
(nitmethod_t)standard___standard__Buffer___is_dirty, /* pointer to string:FlatBuffer:string#Buffer#is_dirty */
(nitmethod_t)standard___standard__Buffer___is_dirty_61d, /* pointer to string:FlatBuffer:string#Buffer#is_dirty= */
(nitmethod_t)standard___standard__Buffer___written, /* pointer to string:FlatBuffer:string#Buffer#written */
(nitmethod_t)standard___standard__Buffer___written_61d, /* pointer to string:FlatBuffer:string#Buffer#written= */
(nitmethod_t)standard___standard__FlatBuffer___Buffer__add, /* pointer to string:FlatBuffer:string#FlatBuffer#add */
(nitmethod_t)standard___standard__FlatBuffer___Buffer__clear, /* pointer to string:FlatBuffer:string#FlatBuffer#clear */
(nitmethod_t)standard___standard__FlatBuffer___Buffer__enlarge, /* pointer to string:FlatBuffer:string#FlatBuffer#enlarge */
(nitmethod_t)standard___standard__FlatBuffer___Buffer__append, /* pointer to string:FlatBuffer:string#FlatBuffer#append */
(nitmethod_t)standard___standard__Text___standard__kernel__Object__hash, /* pointer to string:FlatBuffer:string#Text#hash */
(nitmethod_t)standard___standard__FlatBuffer___capacity, /* pointer to string:FlatBuffer:string#FlatBuffer#capacity */
(nitmethod_t)standard___standard__FlatBuffer___capacity_61d, /* pointer to string:FlatBuffer:string#FlatBuffer#capacity= */
(nitmethod_t)standard___standard__FlatBuffer___reset, /* pointer to string:FlatBuffer:string#FlatBuffer#reset */
(nitmethod_t)standard___standard__FlatBuffer___from, /* pointer to string:FlatBuffer:string#FlatBuffer#from */
(nitmethod_t)standard___standard__FlatBuffer___with_capacity, /* pointer to string:FlatBuffer:string#FlatBuffer#with_capacity */
(nitmethod_t)standard___standard__Object___init, /* pointer to string:FlatBuffer:kernel#Object#init */
}
};
/* allocate FlatBuffer */
val* NEW_standard__FlatBuffer(const struct type* type) {
val* self /* : FlatBuffer */;
val* var /* : null */;
val* var1 /* : null */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : FlatBufferCharView */;
long var6 /* : Int */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__FlatBuffer;
var = NULL;
self->attrs[COLOR_standard__string__Text___hash_cache].val = var; /* _hash_cache on <self:FlatBuffer exact> */
var1 = NULL;
self->attrs[COLOR_standard__string__FlatText___real_items].val = var1; /* _real_items on <self:FlatBuffer exact> */
var2 = 0;
self->attrs[COLOR_standard__string__FlatText___length].l = var2; /* _length on <self:FlatBuffer exact> */
var3 = 1;
self->attrs[COLOR_standard__string__Buffer___is_dirty].s = var3; /* _is_dirty on <self:FlatBuffer exact> */
var4 = 0;
self->attrs[COLOR_standard__string__Buffer___written].s = var4; /* _written on <self:FlatBuffer exact> */
var5 = NEW_standard__string__FlatBufferCharView(&type_standard__string__FlatBufferCharView);
{
((void (*)(val* self, val* p0))(var5->class->vft[COLOR_standard__string__StringCharView__target_61d]))(var5, self) /* target= on <var5:FlatBufferCharView>*/;
}
{
((void (*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5) /* init on <var5:FlatBufferCharView>*/;
}
self->attrs[COLOR_standard__string__FlatBuffer___chars].val = var5; /* _chars on <self:FlatBuffer exact> */
var6 = 0;
self->attrs[COLOR_standard__string__FlatBuffer___capacity].l = var6; /* _capacity on <self:FlatBuffer exact> */
return self;
}
/* runtime class standard__string__FlatBufferReverseIterator */
/* allocate FlatBufferReverseIterator */
val* NEW_standard__string__FlatBufferReverseIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "FlatBufferReverseIterator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__string__FlatBufferCharView */
const struct class class_standard__string__FlatBufferCharView = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to string:FlatBufferCharView:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to string:FlatBufferCharView:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object___61d_61d, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to string:FlatBufferCharView:kernel#Object#!= */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object__hash, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to string:FlatBufferCharView:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to string:FlatBufferCharView:kernel#Object#sys */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__kernel__Object__init, /* pointer to string:FlatBufferCharView:string#StringCharView#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to string:FlatBufferCharView:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to string:FlatBufferCharView:string#Collection#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to string:FlatBufferCharView:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to string:FlatBufferCharView:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to string:FlatBufferCharView:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to string:FlatBufferCharView:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to string:FlatBufferCharView:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to string:FlatBufferCharView:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to string:FlatBufferCharView:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to string:FlatBufferCharView:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to string:FlatBufferCharView:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to string:FlatBufferCharView:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to string:FlatBufferCharView:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to string:FlatBufferCharView:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to string:FlatBufferCharView:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to string:FlatBufferCharView:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to string:FlatBufferCharView:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to string:FlatBufferCharView:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to string:FlatBufferCharView:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to string:FlatBufferCharView:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to string:FlatBufferCharView:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to string:FlatBufferCharView:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to string:FlatBufferCharView:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to string:FlatBufferCharView:model#Object#extern_kind */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__iterator, /* pointer to string:FlatBufferCharView:string#StringCharView#iterator */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__is_empty, /* pointer to string:FlatBufferCharView:string#StringCharView#is_empty */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__length, /* pointer to string:FlatBufferCharView:string#StringCharView#length */
(nitmethod_t)standard___standard__Collection___has, /* pointer to string:FlatBufferCharView:abstract_collection#Collection#has */
(nitmethod_t)standard___standard__SequenceRead___Collection__first, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#first */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to string:FlatBufferCharView:abstract_collection#Collection#has_all */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to string:FlatBufferCharView:array#Collection#to_a */
(nitmethod_t)standard__string___Collection___join, /* pointer to string:FlatBufferCharView:string#Collection#join */
(nitmethod_t)VIRTUAL_standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SequenceRead___91d_93d, /* pointer to string:FlatBufferCharView:string#FlatBufferCharView#[] */
(nitmethod_t)standard___standard__SequenceRead___last, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#last */
(nitmethod_t)standard___standard__SequenceRead___index_of, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#index_of */
(nitmethod_t)standard___standard__SequenceRead___last_index_of, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#last_index_of */
(nitmethod_t)standard___standard__SequenceRead___index_of_from, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#index_of_from */
(nitmethod_t)standard___standard__SequenceRead___last_index_of_from, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#last_index_of_from */
(nitmethod_t)standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SequenceRead__iterator_from, /* pointer to string:FlatBufferCharView:string#FlatBufferCharView#iterator_from */
(nitmethod_t)standard___standard__RemovableCollection___clear, /* pointer to string:FlatBufferCharView:abstract_collection#RemovableCollection#clear */
(nitmethod_t)standard___standard__RemovableCollection___remove, /* pointer to string:FlatBufferCharView:abstract_collection#RemovableCollection#remove */
(nitmethod_t)standard__string___standard__string__StringCharView___target, /* pointer to string:FlatBufferCharView:string#StringCharView#target */
(nitmethod_t)standard__string___standard__string__StringCharView___target_61d, /* pointer to string:FlatBufferCharView:string#StringCharView#target= */
(nitmethod_t)standard___standard__Object___init, /* pointer to string:FlatBufferCharView:kernel#Object#init */
(nitmethod_t)VIRTUAL_standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SimpleCollection__add, /* pointer to string:FlatBufferCharView:string#FlatBufferCharView#add */
(nitmethod_t)standard___standard__SimpleCollection___add_all, /* pointer to string:FlatBufferCharView:abstract_collection#SimpleCollection#add_all */
(nitmethod_t)standard___standard__Sequence___first_61d, /* pointer to string:FlatBufferCharView:abstract_collection#Sequence#first= */
(nitmethod_t)VIRTUAL_standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence__push, /* pointer to string:FlatBufferCharView:string#FlatBufferCharView#push */
(nitmethod_t)standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence__append, /* pointer to string:FlatBufferCharView:string#FlatBufferCharView#append */
(nitmethod_t)standard___standard__Sequence___pop, /* pointer to string:FlatBufferCharView:abstract_collection#Sequence#pop */
(nitmethod_t)standard___standard__Sequence___unshift, /* pointer to string:FlatBufferCharView:abstract_collection#Sequence#unshift */
(nitmethod_t)standard___standard__Sequence___prepend, /* pointer to string:FlatBufferCharView:abstract_collection#Sequence#prepend */
(nitmethod_t)standard___standard__Sequence___shift, /* pointer to string:FlatBufferCharView:abstract_collection#Sequence#shift */
(nitmethod_t)VIRTUAL_standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence___91d_93d_61d, /* pointer to string:FlatBufferCharView:string#FlatBufferCharView#[]= */
(nitmethod_t)standard___standard__Sequence___insert, /* pointer to string:FlatBufferCharView:abstract_collection#Sequence#insert */
(nitmethod_t)standard___standard__Sequence___insert_all, /* pointer to string:FlatBufferCharView:abstract_collection#Sequence#insert_all */
(nitmethod_t)standard___standard__Sequence___remove_at, /* pointer to string:FlatBufferCharView:abstract_collection#Sequence#remove_at */
(nitmethod_t)standard__string___standard__string__FlatBufferCharView___enlarge, /* pointer to string:FlatBufferCharView:string#FlatBufferCharView#enlarge */
}
};
/* allocate FlatBufferCharView */
val* NEW_standard__string__FlatBufferCharView(const struct type* type) {
val* self /* : FlatBufferCharView */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__string__FlatBufferCharView;
return self;
}
/* runtime class standard__string__FlatBufferIterator */
const struct class class_standard__string__FlatBufferIterator = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to string:FlatBufferIterator:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to string:FlatBufferIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to string:FlatBufferIterator:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to string:FlatBufferIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to string:FlatBufferIterator:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to string:FlatBufferIterator:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to string:FlatBufferIterator:kernel#Object#sys */
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___standard__kernel__Object__init, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to string:FlatBufferIterator:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to string:FlatBufferIterator:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to string:FlatBufferIterator:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to string:FlatBufferIterator:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to string:FlatBufferIterator:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to string:FlatBufferIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to string:FlatBufferIterator:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to string:FlatBufferIterator:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to string:FlatBufferIterator:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to string:FlatBufferIterator:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to string:FlatBufferIterator:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to string:FlatBufferIterator:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to string:FlatBufferIterator:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to string:FlatBufferIterator:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to string:FlatBufferIterator:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to string:FlatBufferIterator:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to string:FlatBufferIterator:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to string:FlatBufferIterator:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to string:FlatBufferIterator:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to string:FlatBufferIterator:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to string:FlatBufferIterator:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to string:FlatBufferIterator:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to string:FlatBufferIterator:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to string:FlatBufferIterator:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__Iterator__item, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#item */
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__Iterator__next, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#next */
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__Iterator__is_ok, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#is_ok */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to string:FlatBufferIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to string:FlatBufferIterator:abstract_collection#Iterator#finish */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to string:FlatBufferIterator:array#Iterator#to_a */
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__IndexedIterator__index, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#index */
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___target, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#target */
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___target_61d, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#target= */
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___target_items, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#target_items */
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___target_items_61d, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#target_items= */
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___curr_pos, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#curr_pos */
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___curr_pos_61d, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#curr_pos= */
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___with_pos, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#with_pos */
(nitmethod_t)standard___standard__Object___init, /* pointer to string:FlatBufferIterator:kernel#Object#init */
}
};
/* allocate FlatBufferIterator */
val* NEW_standard__string__FlatBufferIterator(const struct type* type) {
val* self /* : FlatBufferIterator */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__string__FlatBufferIterator;
return self;
}
/* runtime class standard__NativeString */
const struct class class_standard__NativeString = {
5, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to string:NativeString:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to string:NativeString:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to string:NativeString:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to string:NativeString:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to string:NativeString:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to string:NativeString:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to string:NativeString:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to string:NativeString:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to string:NativeString:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_standard___standard__NativeString___Object__to_s, /* pointer to string:NativeString:string#NativeString#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to string:NativeString:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to string:NativeString:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to string:NativeString:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to string:NativeString:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to string:NativeString:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to string:NativeString:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to string:NativeString:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to string:NativeString:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to string:NativeString:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to string:NativeString:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to string:NativeString:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to string:NativeString:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to string:NativeString:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to string:NativeString:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to string:NativeString:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to string:NativeString:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to string:NativeString:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to string:NativeString:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to string:NativeString:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to string:NativeString:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to string:NativeString:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to string:NativeString:model#Object#extern_kind */
(nitmethod_t)standard___standard__Pointer___address_is_null, /* pointer to string:NativeString:kernel#Pointer#address_is_null */
(nitmethod_t)standard___standard__NativeString___new, /* pointer to string:NativeString:string#NativeString#new */
(nitmethod_t)standard___standard__NativeString____91d_93d, /* pointer to string:NativeString:string#NativeString#[] */
(nitmethod_t)standard___standard__NativeString____91d_93d_61d, /* pointer to string:NativeString:string#NativeString#[]= */
(nitmethod_t)standard___standard__NativeString___copy_to, /* pointer to string:NativeString:string#NativeString#copy_to */
(nitmethod_t)standard___standard__NativeString___cstring_length, /* pointer to string:NativeString:string#NativeString#cstring_length */
(nitmethod_t)standard___standard__NativeString___atoi, /* pointer to string:NativeString:string#NativeString#atoi */
(nitmethod_t)standard___standard__NativeString___atof, /* pointer to string:NativeString:string#NativeString#atof */
(nitmethod_t)standard___standard__NativeString___to_s_with_length, /* pointer to string:NativeString:string#NativeString#to_s_with_length */
(nitmethod_t)standard___standard__NativeString___to_s_with_copy, /* pointer to string:NativeString:string#NativeString#to_s_with_copy */
(nitmethod_t)standard__file___NativeString___file_exists, /* pointer to string:NativeString:file#NativeString#file_exists */
(nitmethod_t)standard__file___NativeString___file_mkdir, /* pointer to string:NativeString:file#NativeString#file_mkdir */
(nitmethod_t)standard__file___NativeString___file_realpath, /* pointer to string:NativeString:file#NativeString#file_realpath */
(nitmethod_t)standard__environ___NativeString___get_environ, /* pointer to string:NativeString:environ#NativeString#get_environ */
(nitmethod_t)standard__exec___NativeString___system, /* pointer to string:NativeString:exec#NativeString#system */
}
};
/* allocate NativeString */
val* BOX_standard__NativeString(void* value) {
struct instance_standard__NativeString*res = nit_alloc(sizeof(struct instance_standard__NativeString));
res->type = &type_standard__NativeString;
res->class = &class_standard__NativeString;
res->value = value;
return (val*)res;
}
/* runtime class standard__CachedAlphaComparator */
/* allocate CachedAlphaComparator */
val* NEW_standard__CachedAlphaComparator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CachedAlphaComparator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__string__AlphaComparator */
/* allocate AlphaComparator */
val* NEW_standard__string__AlphaComparator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AlphaComparator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Object */
const struct class class_standard__Object = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to kernel:Object:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to kernel:Object:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to kernel:Object:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to kernel:Object:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to kernel:Object:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to kernel:Object:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to kernel:Object:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to kernel:Object:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to kernel:Object:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to kernel:Object:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to kernel:Object:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to kernel:Object:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to kernel:Object:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to kernel:Object:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to kernel:Object:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to kernel:Object:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to kernel:Object:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to kernel:Object:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to kernel:Object:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to kernel:Object:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to kernel:Object:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to kernel:Object:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to kernel:Object:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to kernel:Object:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to kernel:Object:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to kernel:Object:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to kernel:Object:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to kernel:Object:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to kernel:Object:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to kernel:Object:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to kernel:Object:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to kernel:Object:model#Object#extern_kind */
}
};
/* allocate Object */
val* NEW_standard__Object(const struct type* type) {
val* self /* : Object */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__Object;
return self;
}
/* runtime class standard__Sys */
const struct class class_standard__Sys = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to kernel:Sys:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to kernel:Sys:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to kernel:Sys:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to kernel:Sys:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to kernel:Sys:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to kernel:Sys:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to kernel:Sys:kernel#Object#sys */
(nitmethod_t)standard__file___Sys___standard__kernel__Object__init, /* pointer to kernel:Sys:file#Sys#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to kernel:Sys:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to kernel:Sys:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to kernel:Sys:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to kernel:Sys:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to kernel:Sys:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to kernel:Sys:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to kernel:Sys:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to kernel:Sys:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to kernel:Sys:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to kernel:Sys:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to kernel:Sys:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to kernel:Sys:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to kernel:Sys:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to kernel:Sys:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to kernel:Sys:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to kernel:Sys:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to kernel:Sys:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to kernel:Sys:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to kernel:Sys:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to kernel:Sys:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to kernel:Sys:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to kernel:Sys:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to kernel:Sys:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to kernel:Sys:model#Object#extern_kind */
(nitmethod_t)nit__abstract_compiler___standard__Sys___main, /* pointer to kernel:Sys:abstract_compiler#Sys#main */
(nitmethod_t)standard___standard__Sys___run, /* pointer to kernel:Sys:kernel#Sys#run */
(nitmethod_t)standard___standard__Sys___errno, /* pointer to kernel:Sys:kernel#Sys#errno */
(nitmethod_t)standard__string___Sys___program_args, /* pointer to kernel:Sys:string#Sys#program_args */
(nitmethod_t)standard__string___Sys___program_name, /* pointer to kernel:Sys:string#Sys#program_name */
(nitmethod_t)standard__string___Sys___init_args, /* pointer to kernel:Sys:string#Sys#init_args */
(nitmethod_t)standard__string___Sys___native_argc, /* pointer to kernel:Sys:string#Sys#native_argc */
(nitmethod_t)standard__string___Sys___native_argv, /* pointer to kernel:Sys:string#Sys#native_argv */
(nitmethod_t)standard__file___Sys___stdout, /* pointer to kernel:Sys:file#Sys#stdout */
(nitmethod_t)standard__file___Sys___stderr, /* pointer to kernel:Sys:file#Sys#stderr */
(nitmethod_t)standard__file___Sys___buffer_mode_line, /* pointer to kernel:Sys:file#Sys#buffer_mode_line */
(nitmethod_t)standard__exec___Sys___system, /* pointer to kernel:Sys:exec#Sys#system */
}
};
/* allocate Sys */
val* NEW_standard__Sys(const struct type* type) {
val* self /* : Sys */;
val* var /* : Stdin */;
val* var1 /* : Stdout */;
val* var2 /* : Stderr */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__Sys;
var = NEW_standard__Stdin(&type_standard__Stdin);
{
standard___standard__Stdin___standard__kernel__Object__init(var); /* Direct call file#Stdin#init on <var:Stdin>*/
}
self->attrs[COLOR_standard__file__Sys___stdin].val = var; /* _stdin on <self:Sys exact> */
var1 = NEW_standard__Stdout(&type_standard__Stdout);
{
standard___standard__Stdout___standard__kernel__Object__init(var1); /* Direct call file#Stdout#init on <var1:Stdout>*/
}
self->attrs[COLOR_standard__file__Sys___stdout].val = var1; /* _stdout on <self:Sys exact> */
var2 = NEW_standard__Stderr(&type_standard__Stderr);
{
standard___standard__Stderr___standard__kernel__Object__init(var2); /* Direct call file#Stderr#init on <var2:Stderr>*/
}
self->attrs[COLOR_standard__file__Sys___stderr].val = var2; /* _stderr on <self:Sys exact> */
return self;
}
/* runtime class standard__Comparable */
/* allocate Comparable */
val* NEW_standard__Comparable(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Comparable is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Discrete */
/* allocate Discrete */
val* NEW_standard__Discrete(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Discrete is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Numeric */
/* allocate Numeric */
val* NEW_standard__Numeric(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Numeric is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Bool */
const struct class class_standard__Bool = {
2, /* box_kind */
{
(nitmethod_t)VIRTUAL_standard___standard__Bool___Object__object_id, /* pointer to kernel:Bool:kernel#Bool#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to kernel:Bool:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_standard___standard__Bool___Object___61d_61d, /* pointer to kernel:Bool:kernel#Bool#== */
(nitmethod_t)VIRTUAL_standard___standard__Bool___Object___33d_61d, /* pointer to kernel:Bool:kernel#Bool#!= */
(nitmethod_t)VIRTUAL_standard___standard__Bool___Object__hash, /* pointer to kernel:Bool:kernel#Bool#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to kernel:Bool:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to kernel:Bool:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to kernel:Bool:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to kernel:Bool:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_standard__string___Bool___Object__to_s, /* pointer to kernel:Bool:string#Bool#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to kernel:Bool:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to kernel:Bool:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to kernel:Bool:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to kernel:Bool:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to kernel:Bool:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to kernel:Bool:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to kernel:Bool:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to kernel:Bool:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to kernel:Bool:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to kernel:Bool:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to kernel:Bool:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to kernel:Bool:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to kernel:Bool:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to kernel:Bool:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to kernel:Bool:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to kernel:Bool:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to kernel:Bool:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to kernel:Bool:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to kernel:Bool:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to kernel:Bool:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to kernel:Bool:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to kernel:Bool:model#Object#extern_kind */
(nitmethod_t)standard___standard__Bool___to_i, /* pointer to kernel:Bool:kernel#Bool#to_i */
}
};
/* allocate Bool */
val* BOX_standard__Bool(short int value) {
struct instance_standard__Bool*res = nit_alloc(sizeof(struct instance_standard__Bool));
res->type = &type_standard__Bool;
res->class = &class_standard__Bool;
res->value = value;
return (val*)res;
}
/* runtime class standard__Float */
const struct class class_standard__Float = {
4, /* box_kind */
{
(nitmethod_t)VIRTUAL_standard___standard__Float___Object__object_id, /* pointer to kernel:Float:kernel#Float#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to kernel:Float:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_standard___standard__Float___Object___61d_61d, /* pointer to kernel:Float:kernel#Float#== */
(nitmethod_t)VIRTUAL_standard___standard__Float___Object___33d_61d, /* pointer to kernel:Float:kernel#Float#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to kernel:Float:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to kernel:Float:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to kernel:Float:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to kernel:Float:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to kernel:Float:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_standard__string___Float___Object__to_s, /* pointer to kernel:Float:string#Float#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to kernel:Float:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to kernel:Float:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to kernel:Float:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to kernel:Float:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to kernel:Float:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to kernel:Float:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to kernel:Float:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to kernel:Float:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to kernel:Float:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to kernel:Float:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to kernel:Float:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to kernel:Float:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to kernel:Float:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to kernel:Float:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to kernel:Float:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to kernel:Float:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to kernel:Float:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to kernel:Float:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to kernel:Float:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to kernel:Float:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to kernel:Float:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to kernel:Float:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_standard___standard__Float___Comparable___60d, /* pointer to kernel:Float:kernel#Float#< */
(nitmethod_t)VIRTUAL_standard___standard__Float___Comparable___60d_61d, /* pointer to kernel:Float:kernel#Float#<= */
(nitmethod_t)VIRTUAL_standard___standard__Float___Comparable___62d_61d, /* pointer to kernel:Float:kernel#Float#>= */
(nitmethod_t)VIRTUAL_standard___standard__Float___Comparable___62d, /* pointer to kernel:Float:kernel#Float#> */
(nitmethod_t)VIRTUAL_standard___standard__Float___Comparable___60d_61d_62d, /* pointer to kernel:Float:kernel#Float#<=> */
(nitmethod_t)VIRTUAL_standard___standard__Float___Numeric___43d, /* pointer to kernel:Float:kernel#Float#+ */
(nitmethod_t)VIRTUAL_standard___standard__Float___Numeric___45d, /* pointer to kernel:Float:kernel#Float#- */
(nitmethod_t)VIRTUAL_standard___standard__Float___Numeric__unary_32d_45d, /* pointer to kernel:Float:kernel#Float#unary - */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_standard___standard__Float___Numeric___42d, /* pointer to kernel:Float:kernel#Float#* */
(nitmethod_t)VIRTUAL_standard___standard__Float___Numeric___47d, /* pointer to kernel:Float:kernel#Float#/ */
(nitmethod_t)VIRTUAL_standard___standard__Float___Numeric__to_i, /* pointer to kernel:Float:kernel#Float#to_i */
(nitmethod_t)VIRTUAL_standard___standard__Float___Numeric__to_f, /* pointer to kernel:Float:kernel#Float#to_f */
(nitmethod_t)standard__math___Float___is_nan, /* pointer to kernel:Float:math#Float#is_nan */
(nitmethod_t)standard__math___Float___is_inf, /* pointer to kernel:Float:math#Float#is_inf */
(nitmethod_t)standard__math___Float___is_inf_extern, /* pointer to kernel:Float:math#Float#is_inf_extern */
(nitmethod_t)standard__string___Float___to_precision, /* pointer to kernel:Float:string#Float#to_precision */
}
};
/* allocate Float */
val* BOX_standard__Float(double value) {
struct instance_standard__Float*res = nit_alloc(sizeof(struct instance_standard__Float));
res->type = &type_standard__Float;
res->class = &class_standard__Float;
res->value = value;
return (val*)res;
}
/* runtime class standard__Int */
const struct class class_standard__Int = {
1, /* box_kind */
{
(nitmethod_t)VIRTUAL_standard___standard__Int___Object__object_id, /* pointer to kernel:Int:kernel#Int#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to kernel:Int:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_standard___standard__Int___Object___61d_61d, /* pointer to kernel:Int:kernel#Int#== */
(nitmethod_t)VIRTUAL_standard___standard__Int___Object___33d_61d, /* pointer to kernel:Int:kernel#Int#!= */
(nitmethod_t)VIRTUAL_standard___standard__Int___Object__hash, /* pointer to kernel:Int:kernel#Int#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to kernel:Int:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to kernel:Int:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to kernel:Int:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to kernel:Int:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_standard__string___Int___Object__to_s, /* pointer to kernel:Int:string#Int#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to kernel:Int:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to kernel:Int:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to kernel:Int:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to kernel:Int:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to kernel:Int:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to kernel:Int:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to kernel:Int:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to kernel:Int:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to kernel:Int:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to kernel:Int:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to kernel:Int:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to kernel:Int:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to kernel:Int:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to kernel:Int:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to kernel:Int:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to kernel:Int:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to kernel:Int:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to kernel:Int:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to kernel:Int:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to kernel:Int:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to kernel:Int:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to kernel:Int:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_standard___standard__Int___Comparable___60d, /* pointer to kernel:Int:kernel#Int#< */
(nitmethod_t)VIRTUAL_standard___standard__Int___Comparable___60d_61d, /* pointer to kernel:Int:kernel#Int#<= */
(nitmethod_t)VIRTUAL_standard___standard__Int___Comparable___62d_61d, /* pointer to kernel:Int:kernel#Int#>= */
(nitmethod_t)VIRTUAL_standard___standard__Int___Comparable___62d, /* pointer to kernel:Int:kernel#Int#> */
(nitmethod_t)VIRTUAL_standard___standard__Int___Comparable___60d_61d_62d, /* pointer to kernel:Int:kernel#Int#<=> */
(nitmethod_t)VIRTUAL_standard___standard__Int___Numeric___43d, /* pointer to kernel:Int:kernel#Int#+ */
(nitmethod_t)VIRTUAL_standard___standard__Int___Numeric___45d, /* pointer to kernel:Int:kernel#Int#- */
(nitmethod_t)VIRTUAL_standard___standard__Int___Numeric__unary_32d_45d, /* pointer to kernel:Int:kernel#Int#unary - */
(nitmethod_t)VIRTUAL_standard___standard__Int___Discrete__successor, /* pointer to kernel:Int:kernel#Int#successor */
(nitmethod_t)VIRTUAL_standard___standard__Int___Discrete__distance, /* pointer to kernel:Int:kernel#Int#distance */
(nitmethod_t)VIRTUAL_standard___standard__Int___Numeric___42d, /* pointer to kernel:Int:kernel#Int#* */
(nitmethod_t)VIRTUAL_standard___standard__Int___Numeric___47d, /* pointer to kernel:Int:kernel#Int#/ */
(nitmethod_t)VIRTUAL_standard___standard__Int___Numeric__to_i, /* pointer to kernel:Int:kernel#Int#to_i */
(nitmethod_t)VIRTUAL_standard___standard__Int___Numeric__to_f, /* pointer to kernel:Int:kernel#Int#to_f */
(nitmethod_t)standard___standard__Int____37d, /* pointer to kernel:Int:kernel#Int#% */
(nitmethod_t)standard___standard__Int___lshift, /* pointer to kernel:Int:kernel#Int#lshift */
(nitmethod_t)standard___standard__Int___ascii, /* pointer to kernel:Int:kernel#Int#ascii */
(nitmethod_t)standard___standard__Int___digit_count, /* pointer to kernel:Int:kernel#Int#digit_count */
(nitmethod_t)standard___standard__Int___digit_count_base_95d10, /* pointer to kernel:Int:kernel#Int#digit_count_base_10 */
(nitmethod_t)standard___standard__Int___to_c, /* pointer to kernel:Int:kernel#Int#to_c */
(nitmethod_t)standard___standard__Int___abs, /* pointer to kernel:Int:kernel#Int#abs */
(nitmethod_t)standard__string___Int___strerror_ext, /* pointer to kernel:Int:string#Int#strerror_ext */
(nitmethod_t)standard__string___Int___strerror, /* pointer to kernel:Int:string#Int#strerror */
(nitmethod_t)standard__string___Int___fill_buffer, /* pointer to kernel:Int:string#Int#fill_buffer */
(nitmethod_t)standard__string___Int___int_to_s_len, /* pointer to kernel:Int:string#Int#int_to_s_len */
(nitmethod_t)standard__string___Int___native_int_to_s, /* pointer to kernel:Int:string#Int#native_int_to_s */
(nitmethod_t)standard__string___Int___to_hex, /* pointer to kernel:Int:string#Int#to_hex */
(nitmethod_t)standard__string___Int___to_base, /* pointer to kernel:Int:string#Int#to_base */
}
};
/* allocate Int */
val* BOX_standard__Int(long value) {
struct instance_standard__Int*res = nit_alloc(sizeof(struct instance_standard__Int));
res->type = &type_standard__Int;
res->class = &class_standard__Int;
res->value = value;
return (val*)res;
}
/* runtime class standard__Char */
const struct class class_standard__Char = {
3, /* box_kind */
{
(nitmethod_t)VIRTUAL_standard___standard__Char___Object__object_id, /* pointer to kernel:Char:kernel#Char#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to kernel:Char:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_standard___standard__Char___Object___61d_61d, /* pointer to kernel:Char:kernel#Char#== */
(nitmethod_t)VIRTUAL_standard___standard__Char___Object___33d_61d, /* pointer to kernel:Char:kernel#Char#!= */
(nitmethod_t)VIRTUAL_standard___standard__Char___Object__hash, /* pointer to kernel:Char:kernel#Char#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to kernel:Char:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to kernel:Char:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to kernel:Char:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to kernel:Char:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_standard__string___Char___Object__to_s, /* pointer to kernel:Char:string#Char#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to kernel:Char:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to kernel:Char:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to kernel:Char:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to kernel:Char:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to kernel:Char:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to kernel:Char:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to kernel:Char:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to kernel:Char:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to kernel:Char:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to kernel:Char:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to kernel:Char:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to kernel:Char:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to kernel:Char:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to kernel:Char:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to kernel:Char:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to kernel:Char:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to kernel:Char:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to kernel:Char:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to kernel:Char:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to kernel:Char:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to kernel:Char:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to kernel:Char:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_standard___standard__Char___Comparable___60d, /* pointer to kernel:Char:kernel#Char#< */
(nitmethod_t)VIRTUAL_standard___standard__Char___Comparable___60d_61d, /* pointer to kernel:Char:kernel#Char#<= */
(nitmethod_t)VIRTUAL_standard___standard__Char___Comparable___62d_61d, /* pointer to kernel:Char:kernel#Char#>= */
(nitmethod_t)VIRTUAL_standard___standard__Char___Comparable___62d, /* pointer to kernel:Char:kernel#Char#> */
(nitmethod_t)standard___standard__Comparable____60d_61d_62d, /* pointer to kernel:Char:kernel#Comparable#<=> */
(nitmethod_t)VIRTUAL_standard__string_search___Char___Pattern__search_index_in, /* pointer to kernel:Char:string_search#Char#search_index_in */
(nitmethod_t)VIRTUAL_standard__string_search___Char___Pattern__search_in, /* pointer to kernel:Char:string_search#Char#search_in */
(nitmethod_t)standard___standard__Pattern___split_in, /* pointer to kernel:Char:string_search#Pattern#split_in */
(nitmethod_t)VIRTUAL_standard___standard__Char___Discrete__successor, /* pointer to kernel:Char:kernel#Char#successor */
(nitmethod_t)VIRTUAL_standard___standard__Char___Discrete__distance, /* pointer to kernel:Char:kernel#Char#distance */
(nitmethod_t)standard___standard__Char___to_i, /* pointer to kernel:Char:kernel#Char#to_i */
(nitmethod_t)standard___standard__Char___ascii, /* pointer to kernel:Char:kernel#Char#ascii */
(nitmethod_t)standard___standard__Char___to_lower, /* pointer to kernel:Char:kernel#Char#to_lower */
(nitmethod_t)standard___standard__Char___to_upper, /* pointer to kernel:Char:kernel#Char#to_upper */
(nitmethod_t)standard___standard__Char___is_digit, /* pointer to kernel:Char:kernel#Char#is_digit */
(nitmethod_t)standard___standard__Char___is_lower, /* pointer to kernel:Char:kernel#Char#is_lower */
(nitmethod_t)standard___standard__Char___is_upper, /* pointer to kernel:Char:kernel#Char#is_upper */
(nitmethod_t)standard__string___Char___is_numeric, /* pointer to kernel:Char:string#Char#is_numeric */
}
};
/* allocate Char */
val* BOX_standard__Char(char value) {
struct instance_standard__Char*res = nit_alloc(sizeof(struct instance_standard__Char));
res->type = &type_standard__Char;
res->class = &class_standard__Char;
res->value = value;
return (val*)res;
}
/* runtime class standard__Pointer */
const struct class class_standard__Pointer = {
6, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to kernel:Pointer:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to kernel:Pointer:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to kernel:Pointer:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to kernel:Pointer:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to kernel:Pointer:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to kernel:Pointer:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to kernel:Pointer:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to kernel:Pointer:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to kernel:Pointer:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to kernel:Pointer:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to kernel:Pointer:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to kernel:Pointer:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to kernel:Pointer:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to kernel:Pointer:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to kernel:Pointer:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to kernel:Pointer:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to kernel:Pointer:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to kernel:Pointer:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to kernel:Pointer:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to kernel:Pointer:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to kernel:Pointer:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to kernel:Pointer:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to kernel:Pointer:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to kernel:Pointer:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to kernel:Pointer:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to kernel:Pointer:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to kernel:Pointer:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to kernel:Pointer:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to kernel:Pointer:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to kernel:Pointer:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to kernel:Pointer:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to kernel:Pointer:model#Object#extern_kind */
(nitmethod_t)standard___standard__Pointer___address_is_null, /* pointer to kernel:Pointer:kernel#Pointer#address_is_null */
}
};
/* allocate Pointer */
val* BOX_standard__Pointer(void* value) {
struct instance_standard__Pointer*res = nit_alloc(sizeof(struct instance_standard__Pointer));
res->type = &type_standard__Pointer;
res->class = &class_standard__Pointer;
res->value = value;
return (val*)res;
}
/* allocate Pointer */
val* NEW_standard__Pointer(const struct type* type) {
val* self /* : Pointer */;
self = nit_alloc(sizeof(struct instance_standard__Pointer));
self->type = type;
self->class = &class_standard__Pointer;
((struct instance_standard__Pointer*)self)->value = NULL;
return self;
}
/* runtime class standard__Range */
/* allocate Range[Discrete] */
val* NEW_standard__Range(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Range is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__range__IteratorRange */
/* allocate IteratorRange[Discrete] */
val* NEW_standard__range__IteratorRange(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "IteratorRange is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Collection */
/* allocate Collection[nullable Object] */
val* NEW_standard__Collection(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Collection is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Iterator */
/* allocate Iterator[nullable Object] */
val* NEW_standard__Iterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Iterator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Container */
/* allocate Container[nullable Object] */
val* NEW_standard__Container(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Container is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__abstract_collection__ContainerIterator */
const struct class class_standard__abstract_collection__ContainerIterator = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to abstract_collection:ContainerIterator:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to abstract_collection:ContainerIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to abstract_collection:ContainerIterator:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to abstract_collection:ContainerIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to abstract_collection:ContainerIterator:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to abstract_collection:ContainerIterator:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to abstract_collection:ContainerIterator:kernel#Object#sys */
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__ContainerIterator___standard__kernel__Object__init, /* pointer to abstract_collection:ContainerIterator:abstract_collection#ContainerIterator#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to abstract_collection:ContainerIterator:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to abstract_collection:ContainerIterator:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to abstract_collection:ContainerIterator:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to abstract_collection:ContainerIterator:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to abstract_collection:ContainerIterator:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to abstract_collection:ContainerIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to abstract_collection:ContainerIterator:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to abstract_collection:ContainerIterator:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to abstract_collection:ContainerIterator:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to abstract_collection:ContainerIterator:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to abstract_collection:ContainerIterator:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to abstract_collection:ContainerIterator:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to abstract_collection:ContainerIterator:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to abstract_collection:ContainerIterator:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to abstract_collection:ContainerIterator:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to abstract_collection:ContainerIterator:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to abstract_collection:ContainerIterator:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to abstract_collection:ContainerIterator:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to abstract_collection:ContainerIterator:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to abstract_collection:ContainerIterator:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to abstract_collection:ContainerIterator:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to abstract_collection:ContainerIterator:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to abstract_collection:ContainerIterator:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to abstract_collection:ContainerIterator:model#Object#extern_kind */
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__ContainerIterator___Iterator__item, /* pointer to abstract_collection:ContainerIterator:abstract_collection#ContainerIterator#item */
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__ContainerIterator___Iterator__next, /* pointer to abstract_collection:ContainerIterator:abstract_collection#ContainerIterator#next */
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__ContainerIterator___Iterator__is_ok, /* pointer to abstract_collection:ContainerIterator:abstract_collection#ContainerIterator#is_ok */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to abstract_collection:ContainerIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to abstract_collection:ContainerIterator:abstract_collection#Iterator#finish */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to abstract_collection:ContainerIterator:array#Iterator#to_a */
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__ContainerIterator___is_ok_61d, /* pointer to abstract_collection:ContainerIterator:abstract_collection#ContainerIterator#is_ok= */
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__ContainerIterator___container_61d, /* pointer to abstract_collection:ContainerIterator:abstract_collection#ContainerIterator#container= */
(nitmethod_t)standard___standard__Object___init, /* pointer to abstract_collection:ContainerIterator:kernel#Object#init */
}
};
/* allocate ContainerIterator[nullable Object] */
val* NEW_standard__abstract_collection__ContainerIterator(const struct type* type) {
val* self /* : ContainerIterator[nullable Object] */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__abstract_collection__ContainerIterator;
var = 1;
self->attrs[COLOR_standard__abstract_collection__ContainerIterator___is_ok].s = var; /* _is_ok on <self:ContainerIterator[nullable Object] exact> */
return self;
}
/* runtime class standard__RemovableCollection */
/* allocate RemovableCollection[nullable Object] */
val* NEW_standard__RemovableCollection(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "RemovableCollection is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__SimpleCollection */
/* allocate SimpleCollection[nullable Object] */
val* NEW_standard__SimpleCollection(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "SimpleCollection is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Set */
/* allocate Set[nullable Object] */
val* NEW_standard__Set(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Set is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__MapRead */
/* allocate MapRead[nullable Object, nullable Object] */
val* NEW_standard__MapRead(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MapRead is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Map */
/* allocate Map[nullable Object, nullable Object] */
val* NEW_standard__Map(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Map is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__MapIterator */
/* allocate MapIterator[nullable Object, nullable Object] */
val* NEW_standard__MapIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MapIterator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__MapKeysIterator */
const struct class class_standard__MapKeysIterator = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to abstract_collection:MapKeysIterator:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to abstract_collection:MapKeysIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to abstract_collection:MapKeysIterator:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to abstract_collection:MapKeysIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to abstract_collection:MapKeysIterator:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to abstract_collection:MapKeysIterator:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to abstract_collection:MapKeysIterator:kernel#Object#sys */
(nitmethod_t)standard___standard__MapKeysIterator___standard__kernel__Object__init, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#MapKeysIterator#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to abstract_collection:MapKeysIterator:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to abstract_collection:MapKeysIterator:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to abstract_collection:MapKeysIterator:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to abstract_collection:MapKeysIterator:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to abstract_collection:MapKeysIterator:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to abstract_collection:MapKeysIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to abstract_collection:MapKeysIterator:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to abstract_collection:MapKeysIterator:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to abstract_collection:MapKeysIterator:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to abstract_collection:MapKeysIterator:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to abstract_collection:MapKeysIterator:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to abstract_collection:MapKeysIterator:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to abstract_collection:MapKeysIterator:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to abstract_collection:MapKeysIterator:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to abstract_collection:MapKeysIterator:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to abstract_collection:MapKeysIterator:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to abstract_collection:MapKeysIterator:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to abstract_collection:MapKeysIterator:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to abstract_collection:MapKeysIterator:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to abstract_collection:MapKeysIterator:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to abstract_collection:MapKeysIterator:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to abstract_collection:MapKeysIterator:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to abstract_collection:MapKeysIterator:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to abstract_collection:MapKeysIterator:model#Object#extern_kind */
(nitmethod_t)standard___standard__MapKeysIterator___Iterator__item, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#MapKeysIterator#item */
(nitmethod_t)standard___standard__MapKeysIterator___Iterator__next, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#MapKeysIterator#next */
(nitmethod_t)standard___standard__MapKeysIterator___Iterator__is_ok, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#MapKeysIterator#is_ok */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#Iterator#finish */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to abstract_collection:MapKeysIterator:array#Iterator#to_a */
(nitmethod_t)standard___standard__MapKeysIterator___original_iterator, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#MapKeysIterator#original_iterator */
(nitmethod_t)standard___standard__MapKeysIterator___original_iterator_61d, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#MapKeysIterator#original_iterator= */
(nitmethod_t)standard___standard__Object___init, /* pointer to abstract_collection:MapKeysIterator:kernel#Object#init */
}
};
/* allocate MapKeysIterator[nullable Object, nullable Object] */
val* NEW_standard__MapKeysIterator(const struct type* type) {
val* self /* : MapKeysIterator[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__MapKeysIterator;
return self;
}
/* runtime class standard__MapValuesIterator */
const struct class class_standard__MapValuesIterator = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to abstract_collection:MapValuesIterator:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to abstract_collection:MapValuesIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to abstract_collection:MapValuesIterator:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to abstract_collection:MapValuesIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to abstract_collection:MapValuesIterator:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to abstract_collection:MapValuesIterator:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to abstract_collection:MapValuesIterator:kernel#Object#sys */
(nitmethod_t)standard___standard__MapValuesIterator___standard__kernel__Object__init, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#MapValuesIterator#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to abstract_collection:MapValuesIterator:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to abstract_collection:MapValuesIterator:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to abstract_collection:MapValuesIterator:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to abstract_collection:MapValuesIterator:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to abstract_collection:MapValuesIterator:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to abstract_collection:MapValuesIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to abstract_collection:MapValuesIterator:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to abstract_collection:MapValuesIterator:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to abstract_collection:MapValuesIterator:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to abstract_collection:MapValuesIterator:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to abstract_collection:MapValuesIterator:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to abstract_collection:MapValuesIterator:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to abstract_collection:MapValuesIterator:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to abstract_collection:MapValuesIterator:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to abstract_collection:MapValuesIterator:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to abstract_collection:MapValuesIterator:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to abstract_collection:MapValuesIterator:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to abstract_collection:MapValuesIterator:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to abstract_collection:MapValuesIterator:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to abstract_collection:MapValuesIterator:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to abstract_collection:MapValuesIterator:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to abstract_collection:MapValuesIterator:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to abstract_collection:MapValuesIterator:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to abstract_collection:MapValuesIterator:model#Object#extern_kind */
(nitmethod_t)standard___standard__MapValuesIterator___Iterator__item, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#MapValuesIterator#item */
(nitmethod_t)standard___standard__MapValuesIterator___Iterator__next, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#MapValuesIterator#next */
(nitmethod_t)standard___standard__MapValuesIterator___Iterator__is_ok, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#MapValuesIterator#is_ok */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#Iterator#finish */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to abstract_collection:MapValuesIterator:array#Iterator#to_a */
(nitmethod_t)standard___standard__MapValuesIterator___original_iterator, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#MapValuesIterator#original_iterator */
(nitmethod_t)standard___standard__MapValuesIterator___original_iterator_61d, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#MapValuesIterator#original_iterator= */
(nitmethod_t)standard___standard__Object___init, /* pointer to abstract_collection:MapValuesIterator:kernel#Object#init */
}
};
/* allocate MapValuesIterator[nullable Object, nullable Object] */
val* NEW_standard__MapValuesIterator(const struct type* type) {
val* self /* : MapValuesIterator[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__MapValuesIterator;
return self;
}
/* runtime class standard__SequenceRead */
/* allocate SequenceRead[nullable Object] */
val* NEW_standard__SequenceRead(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "SequenceRead is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Sequence */
/* allocate Sequence[nullable Object] */
val* NEW_standard__Sequence(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Sequence is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__IndexedIterator */
/* allocate IndexedIterator[nullable Object] */
val* NEW_standard__IndexedIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "IndexedIterator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__CoupleMap */
/* allocate CoupleMap[nullable Object, nullable Object] */
val* NEW_standard__CoupleMap(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CoupleMap is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__abstract_collection__CoupleMapIterator */
const struct class class_standard__abstract_collection__CoupleMapIterator = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to abstract_collection:CoupleMapIterator:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to abstract_collection:CoupleMapIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to abstract_collection:CoupleMapIterator:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to abstract_collection:CoupleMapIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to abstract_collection:CoupleMapIterator:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to abstract_collection:CoupleMapIterator:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to abstract_collection:CoupleMapIterator:kernel#Object#sys */
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___standard__kernel__Object__init, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection#CoupleMapIterator#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to abstract_collection:CoupleMapIterator:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to abstract_collection:CoupleMapIterator:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to abstract_collection:CoupleMapIterator:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to abstract_collection:CoupleMapIterator:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to abstract_collection:CoupleMapIterator:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to abstract_collection:CoupleMapIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to abstract_collection:CoupleMapIterator:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to abstract_collection:CoupleMapIterator:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to abstract_collection:CoupleMapIterator:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to abstract_collection:CoupleMapIterator:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to abstract_collection:CoupleMapIterator:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to abstract_collection:CoupleMapIterator:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to abstract_collection:CoupleMapIterator:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to abstract_collection:CoupleMapIterator:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to abstract_collection:CoupleMapIterator:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to abstract_collection:CoupleMapIterator:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to abstract_collection:CoupleMapIterator:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to abstract_collection:CoupleMapIterator:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to abstract_collection:CoupleMapIterator:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to abstract_collection:CoupleMapIterator:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to abstract_collection:CoupleMapIterator:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to abstract_collection:CoupleMapIterator:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to abstract_collection:CoupleMapIterator:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to abstract_collection:CoupleMapIterator:model#Object#extern_kind */
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___MapIterator__item, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection#CoupleMapIterator#item */
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___MapIterator__key, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection#CoupleMapIterator#key */
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___MapIterator__next, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection#CoupleMapIterator#next */
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___MapIterator__is_ok, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection#CoupleMapIterator#is_ok */
(nitmethod_t)standard___standard__MapIterator___finish, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection#MapIterator#finish */
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___iter_61d, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection#CoupleMapIterator#iter= */
(nitmethod_t)standard___standard__Object___init, /* pointer to abstract_collection:CoupleMapIterator:kernel#Object#init */
}
};
/* allocate CoupleMapIterator[nullable Object, nullable Object] */
val* NEW_standard__abstract_collection__CoupleMapIterator(const struct type* type) {
val* self /* : CoupleMapIterator[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__abstract_collection__CoupleMapIterator;
return self;
}
/* runtime class standard__Couple */
const struct class class_standard__Couple = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to abstract_collection:Couple:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to abstract_collection:Couple:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to abstract_collection:Couple:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to abstract_collection:Couple:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to abstract_collection:Couple:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to abstract_collection:Couple:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to abstract_collection:Couple:kernel#Object#sys */
(nitmethod_t)standard___standard__Couple___standard__kernel__Object__init, /* pointer to abstract_collection:Couple:abstract_collection#Couple#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to abstract_collection:Couple:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to abstract_collection:Couple:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to abstract_collection:Couple:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to abstract_collection:Couple:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to abstract_collection:Couple:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to abstract_collection:Couple:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to abstract_collection:Couple:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to abstract_collection:Couple:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to abstract_collection:Couple:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to abstract_collection:Couple:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to abstract_collection:Couple:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to abstract_collection:Couple:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to abstract_collection:Couple:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to abstract_collection:Couple:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to abstract_collection:Couple:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to abstract_collection:Couple:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to abstract_collection:Couple:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to abstract_collection:Couple:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to abstract_collection:Couple:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to abstract_collection:Couple:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to abstract_collection:Couple:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to abstract_collection:Couple:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to abstract_collection:Couple:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to abstract_collection:Couple:model#Object#extern_kind */
(nitmethod_t)standard___standard__Couple___first, /* pointer to abstract_collection:Couple:abstract_collection#Couple#first */
(nitmethod_t)standard___standard__Couple___first_61d, /* pointer to abstract_collection:Couple:abstract_collection#Couple#first= */
(nitmethod_t)standard___standard__Couple___second, /* pointer to abstract_collection:Couple:abstract_collection#Couple#second */
(nitmethod_t)standard___standard__Couple___second_61d, /* pointer to abstract_collection:Couple:abstract_collection#Couple#second= */
(nitmethod_t)standard___standard__Object___init, /* pointer to abstract_collection:Couple:kernel#Object#init */
}
};
/* allocate Couple[nullable Object, nullable Object] */
val* NEW_standard__Couple(const struct type* type) {
val* self /* : Couple[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__Couple;
return self;
}
/* runtime class standard__List */
const struct class class_standard__List = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to list:List:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to list:List:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object___61d_61d, /* pointer to list:List:abstract_collection#SequenceRead#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to list:List:kernel#Object#!= */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object__hash, /* pointer to list:List:abstract_collection#SequenceRead#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to list:List:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to list:List:kernel#Object#sys */
(nitmethod_t)standard___standard__List___standard__kernel__Object__init, /* pointer to list:List:list#List#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to list:List:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to list:List:string#Collection#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to list:List:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to list:List:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to list:List:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to list:List:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to list:List:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to list:List:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to list:List:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to list:List:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to list:List:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to list:List:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to list:List:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to list:List:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to list:List:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to list:List:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to list:List:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to list:List:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to list:List:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to list:List:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to list:List:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to list:List:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to list:List:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to list:List:model#Object#extern_kind */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Collection__iterator, /* pointer to list:List:list#List#iterator */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Collection__is_empty, /* pointer to list:List:list#List#is_empty */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Collection__length, /* pointer to list:List:list#List#length */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Collection__has, /* pointer to list:List:list#List#has */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Collection__first, /* pointer to list:List:list#List#first */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to list:List:abstract_collection#Collection#has_all */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to list:List:array#Collection#to_a */
(nitmethod_t)standard__string___Collection___join, /* pointer to list:List:string#Collection#join */
(nitmethod_t)standard___standard__List___standard__abstract_collection__SequenceRead___91d_93d, /* pointer to list:List:list#List#[] */
(nitmethod_t)standard___standard__List___standard__abstract_collection__SequenceRead__last, /* pointer to list:List:list#List#last */
(nitmethod_t)standard___standard__SequenceRead___index_of, /* pointer to list:List:abstract_collection#SequenceRead#index_of */
(nitmethod_t)standard___standard__SequenceRead___last_index_of, /* pointer to list:List:abstract_collection#SequenceRead#last_index_of */
(nitmethod_t)standard___standard__SequenceRead___index_of_from, /* pointer to list:List:abstract_collection#SequenceRead#index_of_from */
(nitmethod_t)standard___standard__SequenceRead___last_index_of_from, /* pointer to list:List:abstract_collection#SequenceRead#last_index_of_from */
(nitmethod_t)standard___standard__SequenceRead___iterator_from, /* pointer to list:List:abstract_collection#SequenceRead#iterator_from */
(nitmethod_t)standard___standard__List___standard__abstract_collection__RemovableCollection__clear, /* pointer to list:List:list#List#clear */
(nitmethod_t)standard___standard__List___standard__abstract_collection__RemovableCollection__remove, /* pointer to list:List:list#List#remove */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard___standard__Sequence___SimpleCollection__add, /* pointer to list:List:abstract_collection#Sequence#add */
(nitmethod_t)standard___standard__SimpleCollection___add_all, /* pointer to list:List:abstract_collection#SimpleCollection#add_all */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Sequence__first_61d, /* pointer to list:List:list#List#first= */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Sequence__push, /* pointer to list:List:list#List#push */
(nitmethod_t)standard___standard__Sequence___append, /* pointer to list:List:abstract_collection#Sequence#append */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Sequence__pop, /* pointer to list:List:list#List#pop */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Sequence__unshift, /* pointer to list:List:list#List#unshift */
(nitmethod_t)standard___standard__Sequence___prepend, /* pointer to list:List:abstract_collection#Sequence#prepend */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Sequence__shift, /* pointer to list:List:list#List#shift */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Sequence___91d_93d_61d, /* pointer to list:List:list#List#[]= */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Sequence__insert, /* pointer to list:List:list#List#insert */
(nitmethod_t)standard___standard__Sequence___insert_all, /* pointer to list:List:abstract_collection#Sequence#insert_all */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Sequence__remove_at, /* pointer to list:List:list#List#remove_at */
(nitmethod_t)standard___standard__List___get_node, /* pointer to list:List:list#List#get_node */
(nitmethod_t)standard___standard__List___search_node_after, /* pointer to list:List:list#List#search_node_after */
(nitmethod_t)standard___standard__List___remove_node, /* pointer to list:List:list#List#remove_node */
}
};
/* allocate List[nullable Object] */
val* NEW_standard__List(const struct type* type) {
val* self /* : List[nullable Object] */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__List;
var = NULL;
self->attrs[COLOR_standard__list__List___head].val = var; /* _head on <self:List[nullable Object] exact> */
var1 = NULL;
self->attrs[COLOR_standard__list__List___tail].val = var1; /* _tail on <self:List[nullable Object] exact> */
return self;
}
/* runtime class standard__ListIterator */
const struct class class_standard__ListIterator = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to list:ListIterator:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to list:ListIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to list:ListIterator:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to list:ListIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to list:ListIterator:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to list:ListIterator:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to list:ListIterator:kernel#Object#sys */
(nitmethod_t)standard___standard__ListIterator___standard__kernel__Object__init, /* pointer to list:ListIterator:list#ListIterator#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to list:ListIterator:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to list:ListIterator:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to list:ListIterator:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to list:ListIterator:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to list:ListIterator:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to list:ListIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to list:ListIterator:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to list:ListIterator:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to list:ListIterator:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to list:ListIterator:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to list:ListIterator:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to list:ListIterator:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to list:ListIterator:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to list:ListIterator:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to list:ListIterator:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to list:ListIterator:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to list:ListIterator:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to list:ListIterator:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to list:ListIterator:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to list:ListIterator:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to list:ListIterator:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to list:ListIterator:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to list:ListIterator:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to list:ListIterator:model#Object#extern_kind */
(nitmethod_t)standard___standard__ListIterator___standard__abstract_collection__Iterator__item, /* pointer to list:ListIterator:list#ListIterator#item */
(nitmethod_t)standard___standard__ListIterator___standard__abstract_collection__Iterator__next, /* pointer to list:ListIterator:list#ListIterator#next */
(nitmethod_t)standard___standard__ListIterator___standard__abstract_collection__Iterator__is_ok, /* pointer to list:ListIterator:list#ListIterator#is_ok */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to list:ListIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to list:ListIterator:abstract_collection#Iterator#finish */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to list:ListIterator:array#Iterator#to_a */
(nitmethod_t)standard___standard__ListIterator___standard__abstract_collection__IndexedIterator__index, /* pointer to list:ListIterator:list#ListIterator#index */
(nitmethod_t)standard___standard__ListIterator___list_61d, /* pointer to list:ListIterator:list#ListIterator#list= */
}
};
/* allocate ListIterator[nullable Object] */
val* NEW_standard__ListIterator(const struct type* type) {
val* self /* : ListIterator[nullable Object] */;
val* var /* : null */;
long var1 /* : Int */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__ListIterator;
var = NULL;
self->attrs[COLOR_standard__list__ListIterator___node].val = var; /* _node on <self:ListIterator[nullable Object] exact> */
var1 = 0;
self->attrs[COLOR_standard__list__ListIterator___index].l = var1; /* _index on <self:ListIterator[nullable Object] exact> */
return self;
}
/* runtime class standard__list__ListReverseIterator */
/* allocate ListReverseIterator[nullable Object] */
val* NEW_standard__list__ListReverseIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ListReverseIterator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__list__ListNode */
const struct class class_standard__list__ListNode = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to list:ListNode:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to list:ListNode:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to list:ListNode:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to list:ListNode:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to list:ListNode:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to list:ListNode:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to list:ListNode:kernel#Object#sys */
(nitmethod_t)standard___standard__Container___standard__kernel__Object__init, /* pointer to list:ListNode:abstract_collection#Container#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to list:ListNode:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to list:ListNode:string#Collection#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to list:ListNode:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to list:ListNode:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to list:ListNode:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to list:ListNode:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to list:ListNode:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to list:ListNode:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to list:ListNode:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to list:ListNode:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to list:ListNode:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to list:ListNode:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to list:ListNode:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to list:ListNode:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to list:ListNode:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to list:ListNode:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to list:ListNode:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to list:ListNode:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to list:ListNode:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to list:ListNode:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to list:ListNode:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to list:ListNode:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to list:ListNode:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to list:ListNode:model#Object#extern_kind */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard___standard__Container___Collection__iterator, /* pointer to list:ListNode:abstract_collection#Container#iterator */
(nitmethod_t)standard___standard__Container___Collection__is_empty, /* pointer to list:ListNode:abstract_collection#Container#is_empty */
(nitmethod_t)standard___standard__Container___Collection__length, /* pointer to list:ListNode:abstract_collection#Container#length */
(nitmethod_t)standard___standard__Container___Collection__has, /* pointer to list:ListNode:abstract_collection#Container#has */
(nitmethod_t)standard___standard__Container___Collection__first, /* pointer to list:ListNode:abstract_collection#Container#first */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to list:ListNode:abstract_collection#Collection#has_all */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to list:ListNode:array#Collection#to_a */
(nitmethod_t)standard__string___Collection___join, /* pointer to list:ListNode:string#Collection#join */
(nitmethod_t)standard___standard__Container___item, /* pointer to list:ListNode:abstract_collection#Container#item */
(nitmethod_t)standard___standard__Container___item_61d, /* pointer to list:ListNode:abstract_collection#Container#item= */
(nitmethod_t)standard___standard__Object___init, /* pointer to list:ListNode:kernel#Object#init */
(nitmethod_t)standard__list___standard__list__ListNode___next, /* pointer to list:ListNode:list#ListNode#next */
(nitmethod_t)standard__list___standard__list__ListNode___next_61d, /* pointer to list:ListNode:list#ListNode#next= */
(nitmethod_t)standard__list___standard__list__ListNode___prev, /* pointer to list:ListNode:list#ListNode#prev */
(nitmethod_t)standard__list___standard__list__ListNode___prev_61d, /* pointer to list:ListNode:list#ListNode#prev= */
}
};
/* allocate ListNode[nullable Object] */
val* NEW_standard__list__ListNode(const struct type* type) {
val* self /* : ListNode[nullable Object] */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__list__ListNode;
var = NULL;
self->attrs[COLOR_standard__list__ListNode___next].val = var; /* _next on <self:ListNode[nullable Object] exact> */
var1 = NULL;
self->attrs[COLOR_standard__list__ListNode___prev].val = var1; /* _prev on <self:ListNode[nullable Object] exact> */
return self;
}
/* runtime class standard__AbstractArrayRead */
/* allocate AbstractArrayRead[nullable Object] */
val* NEW_standard__AbstractArrayRead(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AbstractArrayRead is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__AbstractArray */
/* allocate AbstractArray[nullable Object] */
val* NEW_standard__AbstractArray(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AbstractArray is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Array */
const struct class class_standard__Array = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to array:Array:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to array:Array:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Array___standard__kernel__Object___61d_61d, /* pointer to array:Array:array#Array#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to array:Array:kernel#Object#!= */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object__hash, /* pointer to array:Array:abstract_collection#SequenceRead#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to array:Array:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to array:Array:kernel#Object#sys */
(nitmethod_t)standard___standard__Array___standard__kernel__Object__init, /* pointer to array:Array:array#Array#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to array:Array:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Array___Object__to_s, /* pointer to array:Array:string#Array#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to array:Array:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to array:Array:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to array:Array:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to array:Array:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to array:Array:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to array:Array:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to array:Array:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to array:Array:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to array:Array:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to array:Array:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to array:Array:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to array:Array:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to array:Array:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to array:Array:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to array:Array:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to array:Array:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to array:Array:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to array:Array:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to array:Array:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to array:Array:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to array:Array:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to array:Array:model#Object#extern_kind */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator, /* pointer to array:Array:array#AbstractArrayRead#iterator */
(nitmethod_t)standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty, /* pointer to array:Array:array#AbstractArrayRead#is_empty */
(nitmethod_t)standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__length, /* pointer to array:Array:array#AbstractArrayRead#length */
(nitmethod_t)standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has, /* pointer to array:Array:array#AbstractArrayRead#has */
(nitmethod_t)standard___standard__SequenceRead___Collection__first, /* pointer to array:Array:abstract_collection#SequenceRead#first */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to array:Array:abstract_collection#Collection#has_all */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to array:Array:array#Collection#to_a */
(nitmethod_t)standard__string___Collection___join, /* pointer to array:Array:string#Collection#join */
(nitmethod_t)standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d, /* pointer to array:Array:array#Array#[] */
(nitmethod_t)standard___standard__SequenceRead___last, /* pointer to array:Array:abstract_collection#SequenceRead#last */
(nitmethod_t)standard___standard__AbstractArrayRead___standard__abstract_collection__SequenceRead__index_of, /* pointer to array:Array:array#AbstractArrayRead#index_of */
(nitmethod_t)standard___standard__AbstractArrayRead___standard__abstract_collection__SequenceRead__last_index_of, /* pointer to array:Array:array#AbstractArrayRead#last_index_of */
(nitmethod_t)standard___standard__AbstractArrayRead___standard__abstract_collection__SequenceRead__index_of_from, /* pointer to array:Array:array#AbstractArrayRead#index_of_from */
(nitmethod_t)standard___standard__AbstractArrayRead___standard__abstract_collection__SequenceRead__last_index_of_from, /* pointer to array:Array:array#AbstractArrayRead#last_index_of_from */
(nitmethod_t)standard___standard__SequenceRead___iterator_from, /* pointer to array:Array:abstract_collection#SequenceRead#iterator_from */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__RemovableCollection__clear, /* pointer to array:Array:array#AbstractArray#clear */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__RemovableCollection__remove, /* pointer to array:Array:array#AbstractArray#remove */
(nitmethod_t)standard___standard__AbstractArrayRead___reversed, /* pointer to array:Array:array#AbstractArrayRead#reversed */
(nitmethod_t)standard___standard__AbstractArrayRead___copy_to, /* pointer to array:Array:array#AbstractArrayRead#copy_to */
NULL, /* empty */
(nitmethod_t)standard___standard__Array___standard__abstract_collection__SimpleCollection__add, /* pointer to array:Array:array#Array#add */
(nitmethod_t)standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all, /* pointer to array:Array:array#Array#add_all */
(nitmethod_t)standard___standard__Sequence___first_61d, /* pointer to array:Array:abstract_collection#Sequence#first= */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__Sequence__push, /* pointer to array:Array:array#AbstractArray#push */
(nitmethod_t)standard___standard__Sequence___append, /* pointer to array:Array:abstract_collection#Sequence#append */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__Sequence__pop, /* pointer to array:Array:array#AbstractArray#pop */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__Sequence__unshift, /* pointer to array:Array:array#AbstractArray#unshift */
(nitmethod_t)standard___standard__Sequence___prepend, /* pointer to array:Array:abstract_collection#Sequence#prepend */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__Sequence__shift, /* pointer to array:Array:array#AbstractArray#shift */
(nitmethod_t)standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d, /* pointer to array:Array:array#Array#[]= */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__Sequence__insert, /* pointer to array:Array:array#AbstractArray#insert */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__Sequence__insert_all, /* pointer to array:Array:array#AbstractArray#insert_all */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__Sequence__remove_at, /* pointer to array:Array:array#AbstractArray#remove_at */
(nitmethod_t)standard___standard__Array___AbstractArray__enlarge, /* pointer to array:Array:array#Array#enlarge */
(nitmethod_t)standard___standard__Array___with_items, /* pointer to array:Array:array#Array#with_items */
(nitmethod_t)standard___standard__Array___with_capacity, /* pointer to array:Array:array#Array#with_capacity */
(nitmethod_t)standard___standard__Array___with_native, /* pointer to array:Array:array#Array#with_native */
(nitmethod_t)standard___standard__Object___init, /* pointer to array:Array:kernel#Object#init */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object___61d_61d, /* pointer to array:Array:abstract_collection#SequenceRead#== */
}
};
/* allocate Array[nullable Object] */
val* NEW_standard__Array(const struct type* type) {
val* self /* : Array[nullable Object] */;
long var /* : Int */;
val* var1 /* : null */;
long var2 /* : Int */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__Array;
var = 0;
self->attrs[COLOR_standard__array__AbstractArrayRead___length].l = var; /* _length on <self:Array[nullable Object] exact> */
var1 = NULL;
self->attrs[COLOR_standard__array__Array___items].val = var1; /* _items on <self:Array[nullable Object] exact> */
var2 = 0;
self->attrs[COLOR_standard__array__Array___capacity].l = var2; /* _capacity on <self:Array[nullable Object] exact> */
return self;
}
/* runtime class standard__array__ArrayIterator */
const struct class class_standard__array__ArrayIterator = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to array:ArrayIterator:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to array:ArrayIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to array:ArrayIterator:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to array:ArrayIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to array:ArrayIterator:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to array:ArrayIterator:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to array:ArrayIterator:kernel#Object#sys */
(nitmethod_t)standard__array___standard__array__ArrayIterator___standard__kernel__Object__init, /* pointer to array:ArrayIterator:array#ArrayIterator#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to array:ArrayIterator:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to array:ArrayIterator:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to array:ArrayIterator:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to array:ArrayIterator:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to array:ArrayIterator:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to array:ArrayIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to array:ArrayIterator:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to array:ArrayIterator:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to array:ArrayIterator:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to array:ArrayIterator:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to array:ArrayIterator:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to array:ArrayIterator:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to array:ArrayIterator:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to array:ArrayIterator:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to array:ArrayIterator:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to array:ArrayIterator:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to array:ArrayIterator:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to array:ArrayIterator:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to array:ArrayIterator:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to array:ArrayIterator:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to array:ArrayIterator:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to array:ArrayIterator:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to array:ArrayIterator:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to array:ArrayIterator:model#Object#extern_kind */
(nitmethod_t)standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item, /* pointer to array:ArrayIterator:array#ArrayIterator#item */
(nitmethod_t)standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next, /* pointer to array:ArrayIterator:array#ArrayIterator#next */
(nitmethod_t)standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok, /* pointer to array:ArrayIterator:array#ArrayIterator#is_ok */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to array:ArrayIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to array:ArrayIterator:abstract_collection#Iterator#finish */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to array:ArrayIterator:array#Iterator#to_a */
(nitmethod_t)standard__array___standard__array__ArrayIterator___standard__abstract_collection__IndexedIterator__index, /* pointer to array:ArrayIterator:array#ArrayIterator#index */
(nitmethod_t)standard__array___standard__array__ArrayIterator___array_61d, /* pointer to array:ArrayIterator:array#ArrayIterator#array= */
(nitmethod_t)standard___standard__Object___init, /* pointer to array:ArrayIterator:kernel#Object#init */
}
};
/* allocate ArrayIterator[nullable Object] */
val* NEW_standard__array__ArrayIterator(const struct type* type) {
val* self /* : ArrayIterator[nullable Object] */;
long var /* : Int */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__array__ArrayIterator;
var = 0;
self->attrs[COLOR_standard__array__ArrayIterator___index].l = var; /* _index on <self:ArrayIterator[nullable Object] exact> */
return self;
}
/* runtime class standard__array__ArrayReverseIterator */
/* allocate ArrayReverseIterator[nullable Object] */
val* NEW_standard__array__ArrayReverseIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ArrayReverseIterator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__ArraySet */
const struct class class_standard__ArraySet = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to array:ArraySet:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to array:ArraySet:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Set___standard__kernel__Object___61d_61d, /* pointer to array:ArraySet:abstract_collection#Set#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to array:ArraySet:kernel#Object#!= */
(nitmethod_t)standard___standard__Set___standard__kernel__Object__hash, /* pointer to array:ArraySet:abstract_collection#Set#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to array:ArraySet:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to array:ArraySet:kernel#Object#sys */
(nitmethod_t)standard___standard__ArraySet___standard__kernel__Object__init, /* pointer to array:ArraySet:array#ArraySet#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to array:ArraySet:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to array:ArraySet:string#Collection#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to array:ArraySet:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to array:ArraySet:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to array:ArraySet:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to array:ArraySet:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to array:ArraySet:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to array:ArraySet:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to array:ArraySet:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to array:ArraySet:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to array:ArraySet:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to array:ArraySet:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to array:ArraySet:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to array:ArraySet:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to array:ArraySet:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to array:ArraySet:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to array:ArraySet:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to array:ArraySet:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to array:ArraySet:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to array:ArraySet:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to array:ArraySet:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to array:ArraySet:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to array:ArraySet:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to array:ArraySet:model#Object#extern_kind */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard___standard__ArraySet___standard__abstract_collection__Collection__iterator, /* pointer to array:ArraySet:array#ArraySet#iterator */
(nitmethod_t)standard___standard__ArraySet___standard__abstract_collection__Collection__is_empty, /* pointer to array:ArraySet:array#ArraySet#is_empty */
(nitmethod_t)standard___standard__ArraySet___standard__abstract_collection__Collection__length, /* pointer to array:ArraySet:array#ArraySet#length */
(nitmethod_t)standard___standard__ArraySet___standard__abstract_collection__Collection__has, /* pointer to array:ArraySet:array#ArraySet#has */
(nitmethod_t)standard___standard__ArraySet___standard__abstract_collection__Collection__first, /* pointer to array:ArraySet:array#ArraySet#first */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to array:ArraySet:abstract_collection#Collection#has_all */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to array:ArraySet:array#Collection#to_a */
(nitmethod_t)standard__string___Collection___join, /* pointer to array:ArraySet:string#Collection#join */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard___standard__ArraySet___standard__abstract_collection__RemovableCollection__clear, /* pointer to array:ArraySet:array#ArraySet#clear */
(nitmethod_t)standard___standard__ArraySet___standard__abstract_collection__RemovableCollection__remove, /* pointer to array:ArraySet:array#ArraySet#remove */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard___standard__ArraySet___standard__abstract_collection__SimpleCollection__add, /* pointer to array:ArraySet:array#ArraySet#add */
(nitmethod_t)standard___standard__SimpleCollection___add_all, /* pointer to array:ArraySet:abstract_collection#SimpleCollection#add_all */
(nitmethod_t)standard___standard__ArraySet___remove_at, /* pointer to array:ArraySet:array#ArraySet#remove_at */
}
};
/* allocate ArraySet[nullable Object] */
val* NEW_standard__ArraySet(const struct type* type) {
val* self /* : ArraySet[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__ArraySet;
return self;
}
/* runtime class standard__array__ArraySetIterator */
const struct class class_standard__array__ArraySetIterator = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to array:ArraySetIterator:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to array:ArraySetIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to array:ArraySetIterator:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to array:ArraySetIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to array:ArraySetIterator:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to array:ArraySetIterator:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to array:ArraySetIterator:kernel#Object#sys */
(nitmethod_t)standard__array___standard__array__ArraySetIterator___standard__kernel__Object__init, /* pointer to array:ArraySetIterator:array#ArraySetIterator#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to array:ArraySetIterator:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to array:ArraySetIterator:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to array:ArraySetIterator:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to array:ArraySetIterator:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to array:ArraySetIterator:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to array:ArraySetIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to array:ArraySetIterator:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to array:ArraySetIterator:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to array:ArraySetIterator:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to array:ArraySetIterator:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to array:ArraySetIterator:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to array:ArraySetIterator:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to array:ArraySetIterator:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to array:ArraySetIterator:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to array:ArraySetIterator:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to array:ArraySetIterator:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to array:ArraySetIterator:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to array:ArraySetIterator:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to array:ArraySetIterator:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to array:ArraySetIterator:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to array:ArraySetIterator:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to array:ArraySetIterator:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to array:ArraySetIterator:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to array:ArraySetIterator:model#Object#extern_kind */
(nitmethod_t)standard__array___standard__array__ArraySetIterator___standard__abstract_collection__Iterator__item, /* pointer to array:ArraySetIterator:array#ArraySetIterator#item */
(nitmethod_t)standard__array___standard__array__ArraySetIterator___standard__abstract_collection__Iterator__next, /* pointer to array:ArraySetIterator:array#ArraySetIterator#next */
(nitmethod_t)standard__array___standard__array__ArraySetIterator___standard__abstract_collection__Iterator__is_ok, /* pointer to array:ArraySetIterator:array#ArraySetIterator#is_ok */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to array:ArraySetIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to array:ArraySetIterator:abstract_collection#Iterator#finish */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to array:ArraySetIterator:array#Iterator#to_a */
(nitmethod_t)standard__array___standard__array__ArraySetIterator___iter_61d, /* pointer to array:ArraySetIterator:array#ArraySetIterator#iter= */
(nitmethod_t)standard___standard__Object___init, /* pointer to array:ArraySetIterator:kernel#Object#init */
}
};
/* allocate ArraySetIterator[nullable Object] */
val* NEW_standard__array__ArraySetIterator(const struct type* type) {
val* self /* : ArraySetIterator[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__array__ArraySetIterator;
return self;
}
/* runtime class standard__ArrayMap */
const struct class class_standard__ArrayMap = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to array:ArrayMap:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to array:ArrayMap:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to array:ArrayMap:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to array:ArrayMap:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to array:ArrayMap:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to array:ArrayMap:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to array:ArrayMap:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to array:ArrayMap:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to array:ArrayMap:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to array:ArrayMap:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to array:ArrayMap:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to array:ArrayMap:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to array:ArrayMap:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to array:ArrayMap:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to array:ArrayMap:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to array:ArrayMap:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to array:ArrayMap:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to array:ArrayMap:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to array:ArrayMap:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to array:ArrayMap:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to array:ArrayMap:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to array:ArrayMap:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to array:ArrayMap:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to array:ArrayMap:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to array:ArrayMap:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to array:ArrayMap:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to array:ArrayMap:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to array:ArrayMap:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to array:ArrayMap:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to array:ArrayMap:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to array:ArrayMap:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to array:ArrayMap:model#Object#extern_kind */
(nitmethod_t)standard___standard__ArrayMap___standard__abstract_collection__MapRead___91d_93d, /* pointer to array:ArrayMap:array#ArrayMap#[] */
(nitmethod_t)standard___standard__MapRead___get_or_null, /* pointer to array:ArrayMap:abstract_collection#MapRead#get_or_null */
(nitmethod_t)standard___standard__MapRead___has_key, /* pointer to array:ArrayMap:abstract_collection#MapRead#has_key */
(nitmethod_t)standard___standard__CoupleMap___MapRead__iterator, /* pointer to array:ArrayMap:abstract_collection#CoupleMap#iterator */
(nitmethod_t)standard___standard__ArrayMap___standard__abstract_collection__MapRead__values, /* pointer to array:ArrayMap:array#ArrayMap#values */
(nitmethod_t)standard___standard__ArrayMap___standard__abstract_collection__MapRead__keys, /* pointer to array:ArrayMap:array#ArrayMap#keys */
(nitmethod_t)standard___standard__ArrayMap___standard__abstract_collection__MapRead__is_empty, /* pointer to array:ArrayMap:array#ArrayMap#is_empty */
(nitmethod_t)standard___standard__ArrayMap___standard__abstract_collection__MapRead__length, /* pointer to array:ArrayMap:array#ArrayMap#length */
(nitmethod_t)standard___standard__MapRead___provide_default_value, /* pointer to array:ArrayMap:abstract_collection#MapRead#provide_default_value */
(nitmethod_t)standard___standard__ArrayMap___standard__abstract_collection__Map___91d_93d_61d, /* pointer to array:ArrayMap:array#ArrayMap#[]= */
(nitmethod_t)standard___standard__ArrayMap___standard__abstract_collection__Map__clear, /* pointer to array:ArrayMap:array#ArrayMap#clear */
(nitmethod_t)standard___standard__ArrayMap___standard__abstract_collection__CoupleMap__couple_iterator, /* pointer to array:ArrayMap:array#ArrayMap#couple_iterator */
(nitmethod_t)standard___standard__ArrayMap___remove_at_index, /* pointer to array:ArrayMap:array#ArrayMap#remove_at_index */
(nitmethod_t)standard___standard__ArrayMap___index, /* pointer to array:ArrayMap:array#ArrayMap#index */
}
};
/* allocate ArrayMap[nullable Object, nullable Object] */
val* NEW_standard__ArrayMap(const struct type* type) {
val* self /* : ArrayMap[nullable Object, nullable Object] */;
val* var /* : ArrayMapKeys[nullable Object, nullable Object] */;
val* var1 /* : ArrayMapValues[nullable Object, nullable Object] */;
val* var2 /* : Array[Couple[nullable Object, nullable Object]] */;
long var3 /* : Int */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__ArrayMap;
var = NEW_standard__array__ArrayMapKeys(self->type->resolution_table->types[COLOR_standard__array__ArrayMapKeys__standard__ArrayMap___35dK__standard__ArrayMap___35dE]);
{
((void (*)(val* self, val* p0))(var->class->vft[COLOR_standard__array__ArrayMapKeys__map_61d]))(var, self) /* map= on <var:ArrayMapKeys[nullable Object, nullable Object]>*/;
}
{
((void (*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var) /* init on <var:ArrayMapKeys[nullable Object, nullable Object]>*/;
}
self->attrs[COLOR_standard__array__ArrayMap___keys].val = var; /* _keys on <self:ArrayMap[nullable Object, nullable Object] exact> */
var1 = NEW_standard__array__ArrayMapValues(self->type->resolution_table->types[COLOR_standard__array__ArrayMapValues__standard__ArrayMap___35dK__standard__ArrayMap___35dE]);
{
((void (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__array__ArrayMapValues__map_61d]))(var1, self) /* map= on <var1:ArrayMapValues[nullable Object, nullable Object]>*/;
}
{
((void (*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1) /* init on <var1:ArrayMapValues[nullable Object, nullable Object]>*/;
}
self->attrs[COLOR_standard__array__ArrayMap___values].val = var1; /* _values on <self:ArrayMap[nullable Object, nullable Object] exact> */
var2 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__standard__Couple__standard__ArrayMap___35dK__standard__ArrayMap___35dE]);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Couple[nullable Object, nullable Object]]>*/
}
self->attrs[COLOR_standard__array__ArrayMap___items].val = var2; /* _items on <self:ArrayMap[nullable Object, nullable Object] exact> */
var3 = 0;
self->attrs[COLOR_standard__array__ArrayMap___last_index].l = var3; /* _last_index on <self:ArrayMap[nullable Object, nullable Object] exact> */
return self;
}
/* runtime class standard__array__ArrayMapKeys */
const struct class class_standard__array__ArrayMapKeys = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to array:ArrayMapKeys:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to array:ArrayMapKeys:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to array:ArrayMapKeys:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to array:ArrayMapKeys:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to array:ArrayMapKeys:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to array:ArrayMapKeys:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to array:ArrayMapKeys:kernel#Object#sys */
(nitmethod_t)standard__array___standard__array__ArrayMapKeys___standard__kernel__Object__init, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to array:ArrayMapKeys:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to array:ArrayMapKeys:string#Collection#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to array:ArrayMapKeys:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to array:ArrayMapKeys:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to array:ArrayMapKeys:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to array:ArrayMapKeys:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to array:ArrayMapKeys:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to array:ArrayMapKeys:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to array:ArrayMapKeys:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to array:ArrayMapKeys:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to array:ArrayMapKeys:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to array:ArrayMapKeys:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to array:ArrayMapKeys:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to array:ArrayMapKeys:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to array:ArrayMapKeys:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to array:ArrayMapKeys:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to array:ArrayMapKeys:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to array:ArrayMapKeys:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to array:ArrayMapKeys:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to array:ArrayMapKeys:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to array:ArrayMapKeys:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to array:ArrayMapKeys:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to array:ArrayMapKeys:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to array:ArrayMapKeys:model#Object#extern_kind */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__array___standard__array__ArrayMapKeys___standard__abstract_collection__Collection__iterator, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#iterator */
(nitmethod_t)standard__array___standard__array__ArrayMapKeys___standard__abstract_collection__Collection__is_empty, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#is_empty */
(nitmethod_t)standard__array___standard__array__ArrayMapKeys___standard__abstract_collection__Collection__length, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#length */
(nitmethod_t)standard__array___standard__array__ArrayMapKeys___standard__abstract_collection__Collection__has, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#has */
(nitmethod_t)standard__array___standard__array__ArrayMapKeys___standard__abstract_collection__Collection__first, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#first */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to array:ArrayMapKeys:abstract_collection#Collection#has_all */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to array:ArrayMapKeys:array#Collection#to_a */
(nitmethod_t)standard__string___Collection___join, /* pointer to array:ArrayMapKeys:string#Collection#join */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__array___standard__array__ArrayMapKeys___standard__abstract_collection__RemovableCollection__clear, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#clear */
(nitmethod_t)standard__array___standard__array__ArrayMapKeys___standard__abstract_collection__RemovableCollection__remove, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#remove */
(nitmethod_t)standard__array___standard__array__ArrayMapKeys___map, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#map */
(nitmethod_t)standard__array___standard__array__ArrayMapKeys___map_61d, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#map= */
(nitmethod_t)standard___standard__Object___init, /* pointer to array:ArrayMapKeys:kernel#Object#init */
}
};
/* allocate ArrayMapKeys[nullable Object, nullable Object] */
val* NEW_standard__array__ArrayMapKeys(const struct type* type) {
val* self /* : ArrayMapKeys[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__array__ArrayMapKeys;
return self;
}
/* runtime class standard__array__ArrayMapValues */
const struct class class_standard__array__ArrayMapValues = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to array:ArrayMapValues:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to array:ArrayMapValues:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to array:ArrayMapValues:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to array:ArrayMapValues:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to array:ArrayMapValues:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to array:ArrayMapValues:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to array:ArrayMapValues:kernel#Object#sys */
(nitmethod_t)standard__array___standard__array__ArrayMapValues___standard__kernel__Object__init, /* pointer to array:ArrayMapValues:array#ArrayMapValues#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to array:ArrayMapValues:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to array:ArrayMapValues:string#Collection#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to array:ArrayMapValues:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to array:ArrayMapValues:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to array:ArrayMapValues:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to array:ArrayMapValues:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to array:ArrayMapValues:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to array:ArrayMapValues:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to array:ArrayMapValues:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to array:ArrayMapValues:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to array:ArrayMapValues:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to array:ArrayMapValues:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to array:ArrayMapValues:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to array:ArrayMapValues:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to array:ArrayMapValues:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to array:ArrayMapValues:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to array:ArrayMapValues:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to array:ArrayMapValues:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to array:ArrayMapValues:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to array:ArrayMapValues:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to array:ArrayMapValues:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to array:ArrayMapValues:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to array:ArrayMapValues:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to array:ArrayMapValues:model#Object#extern_kind */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__array___standard__array__ArrayMapValues___standard__abstract_collection__Collection__iterator, /* pointer to array:ArrayMapValues:array#ArrayMapValues#iterator */
(nitmethod_t)standard__array___standard__array__ArrayMapValues___standard__abstract_collection__Collection__is_empty, /* pointer to array:ArrayMapValues:array#ArrayMapValues#is_empty */
(nitmethod_t)standard__array___standard__array__ArrayMapValues___standard__abstract_collection__Collection__length, /* pointer to array:ArrayMapValues:array#ArrayMapValues#length */
(nitmethod_t)standard__array___standard__array__ArrayMapValues___standard__abstract_collection__Collection__has, /* pointer to array:ArrayMapValues:array#ArrayMapValues#has */
(nitmethod_t)standard__array___standard__array__ArrayMapValues___standard__abstract_collection__Collection__first, /* pointer to array:ArrayMapValues:array#ArrayMapValues#first */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to array:ArrayMapValues:abstract_collection#Collection#has_all */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to array:ArrayMapValues:array#Collection#to_a */
(nitmethod_t)standard__string___Collection___join, /* pointer to array:ArrayMapValues:string#Collection#join */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__array___standard__array__ArrayMapValues___standard__abstract_collection__RemovableCollection__clear, /* pointer to array:ArrayMapValues:array#ArrayMapValues#clear */
(nitmethod_t)standard__array___standard__array__ArrayMapValues___standard__abstract_collection__RemovableCollection__remove, /* pointer to array:ArrayMapValues:array#ArrayMapValues#remove */
(nitmethod_t)standard__array___standard__array__ArrayMapValues___map, /* pointer to array:ArrayMapValues:array#ArrayMapValues#map */
(nitmethod_t)standard__array___standard__array__ArrayMapValues___map_61d, /* pointer to array:ArrayMapValues:array#ArrayMapValues#map= */
(nitmethod_t)standard___standard__Object___init, /* pointer to array:ArrayMapValues:kernel#Object#init */
}
};
/* allocate ArrayMapValues[nullable Object, nullable Object] */
val* NEW_standard__array__ArrayMapValues(const struct type* type) {
val* self /* : ArrayMapValues[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__array__ArrayMapValues;
return self;
}
/* runtime class standard__ArrayCmp */
/* allocate ArrayCmp[nullable Comparable] */
val* NEW_standard__ArrayCmp(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ArrayCmp is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__NativeArray */
const struct class class_standard__NativeArray = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to array:NativeArray:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to array:NativeArray:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to array:NativeArray:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to array:NativeArray:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to array:NativeArray:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to array:NativeArray:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to array:NativeArray:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to array:NativeArray:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to array:NativeArray:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to array:NativeArray:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to array:NativeArray:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to array:NativeArray:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to array:NativeArray:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to array:NativeArray:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to array:NativeArray:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to array:NativeArray:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to array:NativeArray:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to array:NativeArray:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to array:NativeArray:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to array:NativeArray:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to array:NativeArray:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to array:NativeArray:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to array:NativeArray:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to array:NativeArray:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to array:NativeArray:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to array:NativeArray:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to array:NativeArray:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to array:NativeArray:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to array:NativeArray:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to array:NativeArray:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to array:NativeArray:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to array:NativeArray:model#Object#extern_kind */
(nitmethod_t)standard___standard__NativeArray___new, /* pointer to array:NativeArray:array#NativeArray#new */
(nitmethod_t)standard___standard__NativeArray____91d_93d, /* pointer to array:NativeArray:array#NativeArray#[] */
(nitmethod_t)standard___standard__NativeArray____91d_93d_61d, /* pointer to array:NativeArray:array#NativeArray#[]= */
(nitmethod_t)standard___standard__NativeArray___copy_to, /* pointer to array:NativeArray:array#NativeArray#copy_to */
}
};
/* allocate NativeArray[nullable Object] */
val* NEW_standard__NativeArray(int length, const struct type* type) {
struct instance_standard__NativeArray *self;
self = nit_alloc(sizeof(struct instance_standard__NativeArray) + length*sizeof(val*));
self->type = type;
self->class = &class_standard__NativeArray;
self->length = length;
return (val*)self;
}
/* runtime class standard__Comparator */
/* allocate Comparator */
val* NEW_standard__Comparator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Comparator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__DefaultComparator */
const struct class class_standard__DefaultComparator = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to sorter:DefaultComparator:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to sorter:DefaultComparator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to sorter:DefaultComparator:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to sorter:DefaultComparator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to sorter:DefaultComparator:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to sorter:DefaultComparator:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to sorter:DefaultComparator:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to sorter:DefaultComparator:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to sorter:DefaultComparator:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to sorter:DefaultComparator:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to sorter:DefaultComparator:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to sorter:DefaultComparator:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to sorter:DefaultComparator:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to sorter:DefaultComparator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to sorter:DefaultComparator:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to sorter:DefaultComparator:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to sorter:DefaultComparator:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to sorter:DefaultComparator:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to sorter:DefaultComparator:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to sorter:DefaultComparator:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to sorter:DefaultComparator:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to sorter:DefaultComparator:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to sorter:DefaultComparator:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to sorter:DefaultComparator:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to sorter:DefaultComparator:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to sorter:DefaultComparator:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to sorter:DefaultComparator:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to sorter:DefaultComparator:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to sorter:DefaultComparator:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to sorter:DefaultComparator:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to sorter:DefaultComparator:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to sorter:DefaultComparator:model#Object#extern_kind */
(nitmethod_t)standard___standard__DefaultComparator___Comparator__compare, /* pointer to sorter:DefaultComparator:sorter#DefaultComparator#compare */
(nitmethod_t)standard___standard__Comparator___sort, /* pointer to sorter:DefaultComparator:sorter#Comparator#sort */
(nitmethod_t)standard___standard__Comparator___sub_sort, /* pointer to sorter:DefaultComparator:sorter#Comparator#sub_sort */
(nitmethod_t)standard___standard__Comparator___quick_sort, /* pointer to sorter:DefaultComparator:sorter#Comparator#quick_sort */
(nitmethod_t)standard___standard__Comparator___bubble_sort, /* pointer to sorter:DefaultComparator:sorter#Comparator#bubble_sort */
}
};
/* allocate DefaultComparator */
val* NEW_standard__DefaultComparator(const struct type* type) {
val* self /* : DefaultComparator */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__DefaultComparator;
return self;
}
/* runtime class standard__hash_collection__HashCollection */
/* allocate HashCollection[nullable Object] */
val* NEW_standard__hash_collection__HashCollection(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "HashCollection is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__hash_collection__HashNode */
/* allocate HashNode[nullable Object] */
val* NEW_standard__hash_collection__HashNode(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "HashNode is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__HashMap */
const struct class class_standard__HashMap = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to hash_collection:HashMap:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to hash_collection:HashMap:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to hash_collection:HashMap:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to hash_collection:HashMap:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to hash_collection:HashMap:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to hash_collection:HashMap:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to hash_collection:HashMap:kernel#Object#sys */
(nitmethod_t)standard___standard__HashMap___standard__kernel__Object__init, /* pointer to hash_collection:HashMap:hash_collection#HashMap#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to hash_collection:HashMap:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to hash_collection:HashMap:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to hash_collection:HashMap:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to hash_collection:HashMap:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to hash_collection:HashMap:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to hash_collection:HashMap:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to hash_collection:HashMap:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to hash_collection:HashMap:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to hash_collection:HashMap:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to hash_collection:HashMap:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to hash_collection:HashMap:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to hash_collection:HashMap:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to hash_collection:HashMap:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to hash_collection:HashMap:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to hash_collection:HashMap:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to hash_collection:HashMap:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to hash_collection:HashMap:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to hash_collection:HashMap:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to hash_collection:HashMap:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to hash_collection:HashMap:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to hash_collection:HashMap:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to hash_collection:HashMap:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to hash_collection:HashMap:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to hash_collection:HashMap:model#Object#extern_kind */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d, /* pointer to hash_collection:HashMap:hash_collection#HashMap#[] */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null, /* pointer to hash_collection:HashMap:hash_collection#HashMap#get_or_null */
(nitmethod_t)standard___standard__MapRead___has_key, /* pointer to hash_collection:HashMap:abstract_collection#MapRead#has_key */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__iterator, /* pointer to hash_collection:HashMap:hash_collection#HashMap#iterator */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__values, /* pointer to hash_collection:HashMap:hash_collection#HashMap#values */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__keys, /* pointer to hash_collection:HashMap:hash_collection#HashMap#keys */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__is_empty, /* pointer to hash_collection:HashMap:hash_collection#HashMap#is_empty */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__length, /* pointer to hash_collection:HashMap:hash_collection#HashMap#length */
(nitmethod_t)standard___standard__MapRead___provide_default_value, /* pointer to hash_collection:HashMap:abstract_collection#MapRead#provide_default_value */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d, /* pointer to hash_collection:HashMap:hash_collection#HashMap#[]= */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__Map__clear, /* pointer to hash_collection:HashMap:hash_collection#HashMap#clear */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___index_at, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#index_at */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___node_at, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#node_at */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___node_at_idx, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#node_at_idx */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___store, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#store */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___remove_node, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#remove_node */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___raz, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#raz */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___enlarge, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#enlarge */
(nitmethod_t)standard___standard__Object___init, /* pointer to hash_collection:HashMap:kernel#Object#init */
}
};
/* allocate HashMap[nullable Object, nullable Object] */
val* NEW_standard__HashMap(const struct type* type) {
val* self /* : HashMap[nullable Object, nullable Object] */;
val* var /* : null */;
long var1 /* : Int */;
long var2 /* : Int */;
val* var3 /* : null */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : HashMapKeys[nullable Object, nullable Object] */;
val* var8 /* : HashMapValues[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__HashMap;
var = NULL;
self->attrs[COLOR_standard__hash_collection__HashCollection___array].val = var; /* _array on <self:HashMap[nullable Object, nullable Object] exact> */
var1 = 0;
self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l = var1; /* _capacity on <self:HashMap[nullable Object, nullable Object] exact> */
var2 = 0;
self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = var2; /* _the_length on <self:HashMap[nullable Object, nullable Object] exact> */
var3 = NULL;
self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val = var3; /* _first_item on <self:HashMap[nullable Object, nullable Object] exact> */
var4 = NULL;
self->attrs[COLOR_standard__hash_collection__HashCollection___last_item].val = var4; /* _last_item on <self:HashMap[nullable Object, nullable Object] exact> */
var5 = NULL;
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val = var5; /* _last_accessed_key on <self:HashMap[nullable Object, nullable Object] exact> */
var6 = NULL;
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_node].val = var6; /* _last_accessed_node on <self:HashMap[nullable Object, nullable Object] exact> */
var7 = NEW_standard__hash_collection__HashMapKeys(self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapKeys__standard__HashMap___35dK__standard__HashMap___35dV]);
{
((void (*)(val* self, val* p0))(var7->class->vft[COLOR_standard__hash_collection__HashMapKeys__map_61d]))(var7, self) /* map= on <var7:HashMapKeys[nullable Object, nullable Object]>*/;
}
{
((void (*)(val* self))(var7->class->vft[COLOR_standard__kernel__Object__init]))(var7) /* init on <var7:HashMapKeys[nullable Object, nullable Object]>*/;
}
self->attrs[COLOR_standard__hash_collection__HashMap___keys].val = var7; /* _keys on <self:HashMap[nullable Object, nullable Object] exact> */
var8 = NEW_standard__hash_collection__HashMapValues(self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapValues__standard__HashMap___35dK__standard__HashMap___35dV]);
{
((void (*)(val* self, val* p0))(var8->class->vft[COLOR_standard__hash_collection__HashMapValues__map_61d]))(var8, self) /* map= on <var8:HashMapValues[nullable Object, nullable Object]>*/;
}
{
((void (*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8) /* init on <var8:HashMapValues[nullable Object, nullable Object]>*/;
}
self->attrs[COLOR_standard__hash_collection__HashMap___values].val = var8; /* _values on <self:HashMap[nullable Object, nullable Object] exact> */
return self;
}
/* runtime class standard__hash_collection__HashMapKeys */
const struct class class_standard__hash_collection__HashMapKeys = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to hash_collection:HashMapKeys:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to hash_collection:HashMapKeys:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to hash_collection:HashMapKeys:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to hash_collection:HashMapKeys:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to hash_collection:HashMapKeys:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to hash_collection:HashMapKeys:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to hash_collection:HashMapKeys:kernel#Object#sys */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapKeys___standard__kernel__Object__init, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to hash_collection:HashMapKeys:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to hash_collection:HashMapKeys:string#Collection#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to hash_collection:HashMapKeys:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to hash_collection:HashMapKeys:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to hash_collection:HashMapKeys:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to hash_collection:HashMapKeys:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to hash_collection:HashMapKeys:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to hash_collection:HashMapKeys:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to hash_collection:HashMapKeys:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to hash_collection:HashMapKeys:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to hash_collection:HashMapKeys:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to hash_collection:HashMapKeys:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to hash_collection:HashMapKeys:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to hash_collection:HashMapKeys:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to hash_collection:HashMapKeys:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to hash_collection:HashMapKeys:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to hash_collection:HashMapKeys:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to hash_collection:HashMapKeys:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to hash_collection:HashMapKeys:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to hash_collection:HashMapKeys:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to hash_collection:HashMapKeys:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to hash_collection:HashMapKeys:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to hash_collection:HashMapKeys:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to hash_collection:HashMapKeys:model#Object#extern_kind */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__iterator, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#iterator */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__is_empty, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#is_empty */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__length, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#length */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__has, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#has */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__first, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#first */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to hash_collection:HashMapKeys:abstract_collection#Collection#has_all */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to hash_collection:HashMapKeys:array#Collection#to_a */
(nitmethod_t)standard__string___Collection___join, /* pointer to hash_collection:HashMapKeys:string#Collection#join */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__RemovableCollection__clear, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#clear */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__RemovableCollection__remove, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#remove */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapKeys___map, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#map */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapKeys___map_61d, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#map= */
(nitmethod_t)standard___standard__Object___init, /* pointer to hash_collection:HashMapKeys:kernel#Object#init */
}
};
/* allocate HashMapKeys[nullable Object, nullable Object] */
val* NEW_standard__hash_collection__HashMapKeys(const struct type* type) {
val* self /* : HashMapKeys[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__hash_collection__HashMapKeys;
return self;
}
/* runtime class standard__hash_collection__HashMapValues */
const struct class class_standard__hash_collection__HashMapValues = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to hash_collection:HashMapValues:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to hash_collection:HashMapValues:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to hash_collection:HashMapValues:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to hash_collection:HashMapValues:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to hash_collection:HashMapValues:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to hash_collection:HashMapValues:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to hash_collection:HashMapValues:kernel#Object#sys */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapValues___standard__kernel__Object__init, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to hash_collection:HashMapValues:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to hash_collection:HashMapValues:string#Collection#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to hash_collection:HashMapValues:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to hash_collection:HashMapValues:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to hash_collection:HashMapValues:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to hash_collection:HashMapValues:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to hash_collection:HashMapValues:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to hash_collection:HashMapValues:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to hash_collection:HashMapValues:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to hash_collection:HashMapValues:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to hash_collection:HashMapValues:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to hash_collection:HashMapValues:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to hash_collection:HashMapValues:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to hash_collection:HashMapValues:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to hash_collection:HashMapValues:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to hash_collection:HashMapValues:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to hash_collection:HashMapValues:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to hash_collection:HashMapValues:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to hash_collection:HashMapValues:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to hash_collection:HashMapValues:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to hash_collection:HashMapValues:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to hash_collection:HashMapValues:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to hash_collection:HashMapValues:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to hash_collection:HashMapValues:model#Object#extern_kind */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__iterator, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#iterator */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__is_empty, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#is_empty */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__length, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#length */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__has, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#has */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__first, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#first */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to hash_collection:HashMapValues:abstract_collection#Collection#has_all */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to hash_collection:HashMapValues:array#Collection#to_a */
(nitmethod_t)standard__string___Collection___join, /* pointer to hash_collection:HashMapValues:string#Collection#join */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__RemovableCollection__clear, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#clear */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__RemovableCollection__remove, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#remove */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapValues___map, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#map */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapValues___map_61d, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#map= */
(nitmethod_t)standard___standard__Object___init, /* pointer to hash_collection:HashMapValues:kernel#Object#init */
}
};
/* allocate HashMapValues[nullable Object, nullable Object] */
val* NEW_standard__hash_collection__HashMapValues(const struct type* type) {
val* self /* : HashMapValues[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__hash_collection__HashMapValues;
return self;
}
/* runtime class standard__hash_collection__HashMapNode */
const struct class class_standard__hash_collection__HashMapNode = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to hash_collection:HashMapNode:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to hash_collection:HashMapNode:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to hash_collection:HashMapNode:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to hash_collection:HashMapNode:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to hash_collection:HashMapNode:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to hash_collection:HashMapNode:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to hash_collection:HashMapNode:kernel#Object#sys */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapNode___standard__kernel__Object__init, /* pointer to hash_collection:HashMapNode:hash_collection#HashMapNode#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to hash_collection:HashMapNode:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to hash_collection:HashMapNode:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to hash_collection:HashMapNode:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to hash_collection:HashMapNode:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to hash_collection:HashMapNode:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to hash_collection:HashMapNode:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to hash_collection:HashMapNode:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to hash_collection:HashMapNode:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to hash_collection:HashMapNode:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to hash_collection:HashMapNode:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to hash_collection:HashMapNode:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to hash_collection:HashMapNode:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to hash_collection:HashMapNode:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to hash_collection:HashMapNode:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to hash_collection:HashMapNode:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to hash_collection:HashMapNode:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to hash_collection:HashMapNode:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to hash_collection:HashMapNode:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to hash_collection:HashMapNode:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to hash_collection:HashMapNode:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to hash_collection:HashMapNode:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to hash_collection:HashMapNode:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to hash_collection:HashMapNode:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to hash_collection:HashMapNode:model#Object#extern_kind */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashNode___key_61d, /* pointer to hash_collection:HashMapNode:hash_collection#HashNode#key= */
(nitmethod_t)standard___standard__Object___init, /* pointer to hash_collection:HashMapNode:kernel#Object#init */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapNode___value_61d, /* pointer to hash_collection:HashMapNode:hash_collection#HashMapNode#value= */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashNode___standard__kernel__Object__init, /* pointer to hash_collection:HashMapNode:hash_collection#HashNode#init */
}
};
/* allocate HashMapNode[nullable Object, nullable Object] */
val* NEW_standard__hash_collection__HashMapNode(const struct type* type) {
val* self /* : HashMapNode[nullable Object, nullable Object] */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__hash_collection__HashMapNode;
var = NULL;
self->attrs[COLOR_standard__hash_collection__HashNode___next_item].val = var; /* _next_item on <self:HashMapNode[nullable Object, nullable Object] exact> */
var1 = NULL;
self->attrs[COLOR_standard__hash_collection__HashNode___prev_item].val = var1; /* _prev_item on <self:HashMapNode[nullable Object, nullable Object] exact> */
var2 = NULL;
self->attrs[COLOR_standard__hash_collection__HashNode___prev_in_bucklet].val = var2; /* _prev_in_bucklet on <self:HashMapNode[nullable Object, nullable Object] exact> */
var3 = NULL;
self->attrs[COLOR_standard__hash_collection__HashNode___next_in_bucklet].val = var3; /* _next_in_bucklet on <self:HashMapNode[nullable Object, nullable Object] exact> */
return self;
}
/* runtime class standard__HashMapIterator */
const struct class class_standard__HashMapIterator = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to hash_collection:HashMapIterator:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to hash_collection:HashMapIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to hash_collection:HashMapIterator:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to hash_collection:HashMapIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to hash_collection:HashMapIterator:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to hash_collection:HashMapIterator:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to hash_collection:HashMapIterator:kernel#Object#sys */
(nitmethod_t)standard___standard__HashMapIterator___standard__kernel__Object__init, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to hash_collection:HashMapIterator:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to hash_collection:HashMapIterator:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to hash_collection:HashMapIterator:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to hash_collection:HashMapIterator:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to hash_collection:HashMapIterator:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to hash_collection:HashMapIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to hash_collection:HashMapIterator:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to hash_collection:HashMapIterator:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to hash_collection:HashMapIterator:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to hash_collection:HashMapIterator:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to hash_collection:HashMapIterator:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to hash_collection:HashMapIterator:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to hash_collection:HashMapIterator:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to hash_collection:HashMapIterator:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to hash_collection:HashMapIterator:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to hash_collection:HashMapIterator:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to hash_collection:HashMapIterator:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to hash_collection:HashMapIterator:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to hash_collection:HashMapIterator:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to hash_collection:HashMapIterator:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to hash_collection:HashMapIterator:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to hash_collection:HashMapIterator:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to hash_collection:HashMapIterator:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to hash_collection:HashMapIterator:model#Object#extern_kind */
(nitmethod_t)standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__item, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#item */
(nitmethod_t)standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__key, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#key */
(nitmethod_t)standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__next, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#next */
(nitmethod_t)standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__is_ok, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#is_ok */
(nitmethod_t)standard___standard__MapIterator___finish, /* pointer to hash_collection:HashMapIterator:abstract_collection#MapIterator#finish */
(nitmethod_t)standard___standard__HashMapIterator___map, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#map */
(nitmethod_t)standard___standard__HashMapIterator___map_61d, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#map= */
}
};
/* allocate HashMapIterator[nullable Object, nullable Object] */
val* NEW_standard__HashMapIterator(const struct type* type) {
val* self /* : HashMapIterator[nullable Object, nullable Object] */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__HashMapIterator;
var = NULL;
self->attrs[COLOR_standard__hash_collection__HashMapIterator___node].val = var; /* _node on <self:HashMapIterator[nullable Object, nullable Object] exact> */
return self;
}
/* runtime class standard__HashSet */
const struct class class_standard__HashSet = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to hash_collection:HashSet:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to hash_collection:HashSet:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Set___standard__kernel__Object___61d_61d, /* pointer to hash_collection:HashSet:abstract_collection#Set#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to hash_collection:HashSet:kernel#Object#!= */
(nitmethod_t)standard___standard__Set___standard__kernel__Object__hash, /* pointer to hash_collection:HashSet:abstract_collection#Set#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to hash_collection:HashSet:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to hash_collection:HashSet:kernel#Object#sys */
(nitmethod_t)standard___standard__HashSet___standard__kernel__Object__init, /* pointer to hash_collection:HashSet:hash_collection#HashSet#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to hash_collection:HashSet:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to hash_collection:HashSet:string#Collection#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to hash_collection:HashSet:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to hash_collection:HashSet:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to hash_collection:HashSet:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to hash_collection:HashSet:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to hash_collection:HashSet:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to hash_collection:HashSet:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to hash_collection:HashSet:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to hash_collection:HashSet:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to hash_collection:HashSet:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to hash_collection:HashSet:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to hash_collection:HashSet:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to hash_collection:HashSet:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to hash_collection:HashSet:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to hash_collection:HashSet:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to hash_collection:HashSet:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to hash_collection:HashSet:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to hash_collection:HashSet:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to hash_collection:HashSet:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to hash_collection:HashSet:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to hash_collection:HashSet:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to hash_collection:HashSet:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to hash_collection:HashSet:model#Object#extern_kind */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard___standard__HashSet___standard__abstract_collection__Collection__iterator, /* pointer to hash_collection:HashSet:hash_collection#HashSet#iterator */
(nitmethod_t)standard___standard__HashSet___standard__abstract_collection__Collection__is_empty, /* pointer to hash_collection:HashSet:hash_collection#HashSet#is_empty */
(nitmethod_t)standard___standard__HashSet___standard__abstract_collection__Collection__length, /* pointer to hash_collection:HashSet:hash_collection#HashSet#length */
(nitmethod_t)standard___standard__HashSet___standard__abstract_collection__Collection__has, /* pointer to hash_collection:HashSet:hash_collection#HashSet#has */
(nitmethod_t)standard___standard__HashSet___standard__abstract_collection__Collection__first, /* pointer to hash_collection:HashSet:hash_collection#HashSet#first */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to hash_collection:HashSet:abstract_collection#Collection#has_all */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to hash_collection:HashSet:array#Collection#to_a */
(nitmethod_t)standard__string___Collection___join, /* pointer to hash_collection:HashSet:string#Collection#join */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___index_at, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#index_at */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___node_at, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#node_at */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___node_at_idx, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#node_at_idx */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___store, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#store */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___remove_node, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#remove_node */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___raz, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#raz */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___enlarge, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#enlarge */
(nitmethod_t)standard___standard__HashSet___standard__abstract_collection__RemovableCollection__clear, /* pointer to hash_collection:HashSet:hash_collection#HashSet#clear */
(nitmethod_t)standard___standard__HashSet___standard__abstract_collection__RemovableCollection__remove, /* pointer to hash_collection:HashSet:hash_collection#HashSet#remove */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add, /* pointer to hash_collection:HashSet:hash_collection#HashSet#add */
(nitmethod_t)standard___standard__SimpleCollection___add_all, /* pointer to hash_collection:HashSet:abstract_collection#SimpleCollection#add_all */
(nitmethod_t)standard___standard__HashSet___from, /* pointer to hash_collection:HashSet:hash_collection#HashSet#from */
(nitmethod_t)standard___standard__Object___init, /* pointer to hash_collection:HashSet:kernel#Object#init */
}
};
/* allocate HashSet[nullable Object] */
val* NEW_standard__HashSet(const struct type* type) {
val* self /* : HashSet[nullable Object] */;
val* var /* : null */;
long var1 /* : Int */;
long var2 /* : Int */;
val* var3 /* : null */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__HashSet;
var = NULL;
self->attrs[COLOR_standard__hash_collection__HashCollection___array].val = var; /* _array on <self:HashSet[nullable Object] exact> */
var1 = 0;
self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l = var1; /* _capacity on <self:HashSet[nullable Object] exact> */
var2 = 0;
self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = var2; /* _the_length on <self:HashSet[nullable Object] exact> */
var3 = NULL;
self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val = var3; /* _first_item on <self:HashSet[nullable Object] exact> */
var4 = NULL;
self->attrs[COLOR_standard__hash_collection__HashCollection___last_item].val = var4; /* _last_item on <self:HashSet[nullable Object] exact> */
var5 = NULL;
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val = var5; /* _last_accessed_key on <self:HashSet[nullable Object] exact> */
var6 = NULL;
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_node].val = var6; /* _last_accessed_node on <self:HashSet[nullable Object] exact> */
return self;
}
/* runtime class standard__hash_collection__HashSetNode */
const struct class class_standard__hash_collection__HashSetNode = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to hash_collection:HashSetNode:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to hash_collection:HashSetNode:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to hash_collection:HashSetNode:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to hash_collection:HashSetNode:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to hash_collection:HashSetNode:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to hash_collection:HashSetNode:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to hash_collection:HashSetNode:kernel#Object#sys */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashNode___standard__kernel__Object__init, /* pointer to hash_collection:HashSetNode:hash_collection#HashNode#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to hash_collection:HashSetNode:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to hash_collection:HashSetNode:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to hash_collection:HashSetNode:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to hash_collection:HashSetNode:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to hash_collection:HashSetNode:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to hash_collection:HashSetNode:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to hash_collection:HashSetNode:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to hash_collection:HashSetNode:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to hash_collection:HashSetNode:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to hash_collection:HashSetNode:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to hash_collection:HashSetNode:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to hash_collection:HashSetNode:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to hash_collection:HashSetNode:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to hash_collection:HashSetNode:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to hash_collection:HashSetNode:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to hash_collection:HashSetNode:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to hash_collection:HashSetNode:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to hash_collection:HashSetNode:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to hash_collection:HashSetNode:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to hash_collection:HashSetNode:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to hash_collection:HashSetNode:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to hash_collection:HashSetNode:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to hash_collection:HashSetNode:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to hash_collection:HashSetNode:model#Object#extern_kind */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashNode___key_61d, /* pointer to hash_collection:HashSetNode:hash_collection#HashNode#key= */
(nitmethod_t)standard___standard__Object___init, /* pointer to hash_collection:HashSetNode:kernel#Object#init */
}
};
/* allocate HashSetNode[nullable Object] */
val* NEW_standard__hash_collection__HashSetNode(const struct type* type) {
val* self /* : HashSetNode[nullable Object] */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__hash_collection__HashSetNode;
var = NULL;
self->attrs[COLOR_standard__hash_collection__HashNode___next_item].val = var; /* _next_item on <self:HashSetNode[nullable Object] exact> */
var1 = NULL;
self->attrs[COLOR_standard__hash_collection__HashNode___prev_item].val = var1; /* _prev_item on <self:HashSetNode[nullable Object] exact> */
var2 = NULL;
self->attrs[COLOR_standard__hash_collection__HashNode___prev_in_bucklet].val = var2; /* _prev_in_bucklet on <self:HashSetNode[nullable Object] exact> */
var3 = NULL;
self->attrs[COLOR_standard__hash_collection__HashNode___next_in_bucklet].val = var3; /* _next_in_bucklet on <self:HashSetNode[nullable Object] exact> */
return self;
}
/* runtime class standard__hash_collection__HashSetIterator */
const struct class class_standard__hash_collection__HashSetIterator = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to hash_collection:HashSetIterator:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to hash_collection:HashSetIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to hash_collection:HashSetIterator:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to hash_collection:HashSetIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to hash_collection:HashSetIterator:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to hash_collection:HashSetIterator:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to hash_collection:HashSetIterator:kernel#Object#sys */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashSetIterator___standard__kernel__Object__init, /* pointer to hash_collection:HashSetIterator:hash_collection#HashSetIterator#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to hash_collection:HashSetIterator:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to hash_collection:HashSetIterator:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to hash_collection:HashSetIterator:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to hash_collection:HashSetIterator:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to hash_collection:HashSetIterator:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to hash_collection:HashSetIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to hash_collection:HashSetIterator:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to hash_collection:HashSetIterator:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to hash_collection:HashSetIterator:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to hash_collection:HashSetIterator:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to hash_collection:HashSetIterator:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to hash_collection:HashSetIterator:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to hash_collection:HashSetIterator:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to hash_collection:HashSetIterator:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to hash_collection:HashSetIterator:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to hash_collection:HashSetIterator:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to hash_collection:HashSetIterator:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to hash_collection:HashSetIterator:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to hash_collection:HashSetIterator:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to hash_collection:HashSetIterator:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to hash_collection:HashSetIterator:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to hash_collection:HashSetIterator:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to hash_collection:HashSetIterator:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to hash_collection:HashSetIterator:model#Object#extern_kind */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashSetIterator___standard__abstract_collection__Iterator__item, /* pointer to hash_collection:HashSetIterator:hash_collection#HashSetIterator#item */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashSetIterator___standard__abstract_collection__Iterator__next, /* pointer to hash_collection:HashSetIterator:hash_collection#HashSetIterator#next */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashSetIterator___standard__abstract_collection__Iterator__is_ok, /* pointer to hash_collection:HashSetIterator:hash_collection#HashSetIterator#is_ok */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to hash_collection:HashSetIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to hash_collection:HashSetIterator:abstract_collection#Iterator#finish */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to hash_collection:HashSetIterator:array#Iterator#to_a */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashSetIterator___set_61d, /* pointer to hash_collection:HashSetIterator:hash_collection#HashSetIterator#set= */
}
};
/* allocate HashSetIterator[nullable Object] */
val* NEW_standard__hash_collection__HashSetIterator(const struct type* type) {
val* self /* : HashSetIterator[nullable Object] */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__hash_collection__HashSetIterator;
var = NULL;
self->attrs[COLOR_standard__hash_collection__HashSetIterator___node].val = var; /* _node on <self:HashSetIterator[nullable Object] exact> */
return self;
}
/* runtime class standard__DisjointSet */
/* allocate DisjointSet[nullable Object] */
val* NEW_standard__DisjointSet(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "DisjointSet is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__union_find__DisjointSetNode */
/* allocate DisjointSetNode */
val* NEW_standard__union_find__DisjointSetNode(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "DisjointSetNode is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__FStream */
/* allocate FStream */
val* NEW_standard__FStream(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "FStream is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__IFStream */
const struct class class_standard__IFStream = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to file:IFStream:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to file:IFStream:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to file:IFStream:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to file:IFStream:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to file:IFStream:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to file:IFStream:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to file:IFStream:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to file:IFStream:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to file:IFStream:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to file:IFStream:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to file:IFStream:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to file:IFStream:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to file:IFStream:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to file:IFStream:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to file:IFStream:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to file:IFStream:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to file:IFStream:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to file:IFStream:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to file:IFStream:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to file:IFStream:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to file:IFStream:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to file:IFStream:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to file:IFStream:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to file:IFStream:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to file:IFStream:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to file:IFStream:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to file:IFStream:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to file:IFStream:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to file:IFStream:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to file:IFStream:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to file:IFStream:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to file:IFStream:model#Object#extern_kind */
(nitmethod_t)standard___standard__IOS___last_error, /* pointer to file:IFStream:stream#IOS#last_error */
(nitmethod_t)standard___standard__IOS___last_error_61d, /* pointer to file:IFStream:stream#IOS#last_error= */
(nitmethod_t)standard___standard__IFStream___standard__stream__IOS__close, /* pointer to file:IFStream:file#IFStream#close */
(nitmethod_t)standard___standard__FStream___path_61d, /* pointer to file:IFStream:file#FStream#path= */
(nitmethod_t)standard___standard__FStream___set_buffering_mode, /* pointer to file:IFStream:file#FStream#set_buffering_mode */
NULL, /* empty */
(nitmethod_t)standard___standard__BufferedIStream___IStream__read, /* pointer to file:IFStream:stream#BufferedIStream#read */
(nitmethod_t)standard___standard__IStream___read_line, /* pointer to file:IFStream:stream#IStream#read_line */
(nitmethod_t)standard___standard__BufferedIStream___IStream__read_all, /* pointer to file:IFStream:stream#BufferedIStream#read_all */
(nitmethod_t)standard___standard__BufferedIStream___IStream__append_line_to, /* pointer to file:IFStream:stream#BufferedIStream#append_line_to */
(nitmethod_t)standard___standard__BufferedIStream___IStream__eof, /* pointer to file:IFStream:stream#BufferedIStream#eof */
(nitmethod_t)standard___standard__IFStream___standard__stream__BufferedIStream__fill_buffer, /* pointer to file:IFStream:file#IFStream#fill_buffer */
(nitmethod_t)standard___standard__IFStream___standard__stream__BufferedIStream__end_reached, /* pointer to file:IFStream:file#IFStream#end_reached */
(nitmethod_t)standard___standard__BufferedIStream___prepare_buffer, /* pointer to file:IFStream:stream#BufferedIStream#prepare_buffer */
(nitmethod_t)standard___standard__IFStream___end_reached_61d, /* pointer to file:IFStream:file#IFStream#end_reached= */
(nitmethod_t)standard___standard__IFStream___open, /* pointer to file:IFStream:file#IFStream#open */
}
};
/* allocate IFStream */
val* NEW_standard__IFStream(const struct type* type) {
val* self /* : IFStream */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
long var4 /* : Int */;
short int var5 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__IFStream;
var = NULL;
self->attrs[COLOR_standard__stream__IOS___last_error].val = var; /* _last_error on <self:IFStream exact> */
var1 = NULL;
self->attrs[COLOR_standard__file__FStream___path].val = var1; /* _path on <self:IFStream exact> */
var2 = NULL;
self->attrs[COLOR_standard__file__FStream___file].val = var2; /* _file on <self:IFStream exact> */
var3 = NULL;
self->attrs[COLOR_standard__stream__BufferedIStream___buffer].val = var3; /* _buffer on <self:IFStream exact> */
var4 = 0;
self->attrs[COLOR_standard__stream__BufferedIStream___buffer_pos].l = var4; /* _buffer_pos on <self:IFStream exact> */
var5 = 0;
self->attrs[COLOR_standard__file__IFStream___end_reached].s = var5; /* _end_reached on <self:IFStream exact> */
return self;
}
/* runtime class standard__OFStream */
const struct class class_standard__OFStream = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to file:OFStream:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to file:OFStream:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to file:OFStream:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to file:OFStream:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to file:OFStream:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to file:OFStream:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to file:OFStream:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to file:OFStream:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to file:OFStream:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to file:OFStream:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to file:OFStream:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to file:OFStream:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to file:OFStream:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to file:OFStream:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to file:OFStream:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to file:OFStream:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to file:OFStream:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to file:OFStream:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to file:OFStream:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to file:OFStream:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to file:OFStream:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to file:OFStream:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to file:OFStream:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to file:OFStream:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to file:OFStream:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to file:OFStream:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to file:OFStream:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to file:OFStream:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to file:OFStream:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to file:OFStream:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to file:OFStream:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to file:OFStream:model#Object#extern_kind */
(nitmethod_t)standard___standard__IOS___last_error, /* pointer to file:OFStream:stream#IOS#last_error */
(nitmethod_t)standard___standard__IOS___last_error_61d, /* pointer to file:OFStream:stream#IOS#last_error= */
(nitmethod_t)standard___standard__OFStream___standard__stream__IOS__close, /* pointer to file:OFStream:file#OFStream#close */
(nitmethod_t)standard___standard__FStream___path_61d, /* pointer to file:OFStream:file#FStream#path= */
(nitmethod_t)standard___standard__FStream___set_buffering_mode, /* pointer to file:OFStream:file#FStream#set_buffering_mode */
(nitmethod_t)standard___standard__OFStream___standard__stream__OStream__write, /* pointer to file:OFStream:file#OFStream#write */
(nitmethod_t)standard___standard__OFStream___is_writable_61d, /* pointer to file:OFStream:file#OFStream#is_writable= */
(nitmethod_t)standard___standard__OFStream___write_native, /* pointer to file:OFStream:file#OFStream#write_native */
(nitmethod_t)standard___standard__OFStream___open, /* pointer to file:OFStream:file#OFStream#open */
}
};
/* allocate OFStream */
val* NEW_standard__OFStream(const struct type* type) {
val* self /* : OFStream */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__OFStream;
var = NULL;
self->attrs[COLOR_standard__stream__IOS___last_error].val = var; /* _last_error on <self:OFStream exact> */
var1 = NULL;
self->attrs[COLOR_standard__file__FStream___path].val = var1; /* _path on <self:OFStream exact> */
var2 = NULL;
self->attrs[COLOR_standard__file__FStream___file].val = var2; /* _file on <self:OFStream exact> */
var3 = 0;
self->attrs[COLOR_standard__file__OFStream___is_writable].s = var3; /* _is_writable on <self:OFStream exact> */
return self;
}
/* runtime class standard__Stdin */
const struct class class_standard__Stdin = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to file:Stdin:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to file:Stdin:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to file:Stdin:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to file:Stdin:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to file:Stdin:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to file:Stdin:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to file:Stdin:kernel#Object#sys */
(nitmethod_t)standard___standard__Stdin___standard__kernel__Object__init, /* pointer to file:Stdin:file#Stdin#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to file:Stdin:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to file:Stdin:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to file:Stdin:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to file:Stdin:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to file:Stdin:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to file:Stdin:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to file:Stdin:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to file:Stdin:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to file:Stdin:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to file:Stdin:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to file:Stdin:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to file:Stdin:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to file:Stdin:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to file:Stdin:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to file:Stdin:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to file:Stdin:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to file:Stdin:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to file:Stdin:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to file:Stdin:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to file:Stdin:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to file:Stdin:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to file:Stdin:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to file:Stdin:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to file:Stdin:model#Object#extern_kind */
(nitmethod_t)standard___standard__IOS___last_error, /* pointer to file:Stdin:stream#IOS#last_error */
(nitmethod_t)standard___standard__IOS___last_error_61d, /* pointer to file:Stdin:stream#IOS#last_error= */
(nitmethod_t)standard___standard__IFStream___standard__stream__IOS__close, /* pointer to file:Stdin:file#IFStream#close */
(nitmethod_t)standard___standard__FStream___path_61d, /* pointer to file:Stdin:file#FStream#path= */
(nitmethod_t)standard___standard__FStream___set_buffering_mode, /* pointer to file:Stdin:file#FStream#set_buffering_mode */
NULL, /* empty */
(nitmethod_t)standard___standard__BufferedIStream___IStream__read, /* pointer to file:Stdin:stream#BufferedIStream#read */
(nitmethod_t)standard___standard__IStream___read_line, /* pointer to file:Stdin:stream#IStream#read_line */
(nitmethod_t)standard___standard__BufferedIStream___IStream__read_all, /* pointer to file:Stdin:stream#BufferedIStream#read_all */
(nitmethod_t)standard___standard__BufferedIStream___IStream__append_line_to, /* pointer to file:Stdin:stream#BufferedIStream#append_line_to */
(nitmethod_t)standard___standard__BufferedIStream___IStream__eof, /* pointer to file:Stdin:stream#BufferedIStream#eof */
(nitmethod_t)standard___standard__IFStream___standard__stream__BufferedIStream__fill_buffer, /* pointer to file:Stdin:file#IFStream#fill_buffer */
(nitmethod_t)standard___standard__IFStream___standard__stream__BufferedIStream__end_reached, /* pointer to file:Stdin:file#IFStream#end_reached */
(nitmethod_t)standard___standard__BufferedIStream___prepare_buffer, /* pointer to file:Stdin:stream#BufferedIStream#prepare_buffer */
(nitmethod_t)standard___standard__IFStream___end_reached_61d, /* pointer to file:Stdin:file#IFStream#end_reached= */
(nitmethod_t)standard___standard__IFStream___open, /* pointer to file:Stdin:file#IFStream#open */
(nitmethod_t)standard___standard__Object___init, /* pointer to file:Stdin:kernel#Object#init */
}
};
/* allocate Stdin */
val* NEW_standard__Stdin(const struct type* type) {
val* self /* : Stdin */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
long var4 /* : Int */;
short int var5 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__Stdin;
var = NULL;
self->attrs[COLOR_standard__stream__IOS___last_error].val = var; /* _last_error on <self:Stdin exact> */
var1 = NULL;
self->attrs[COLOR_standard__file__FStream___path].val = var1; /* _path on <self:Stdin exact> */
var2 = NULL;
self->attrs[COLOR_standard__file__FStream___file].val = var2; /* _file on <self:Stdin exact> */
var3 = NULL;
self->attrs[COLOR_standard__stream__BufferedIStream___buffer].val = var3; /* _buffer on <self:Stdin exact> */
var4 = 0;
self->attrs[COLOR_standard__stream__BufferedIStream___buffer_pos].l = var4; /* _buffer_pos on <self:Stdin exact> */
var5 = 0;
self->attrs[COLOR_standard__file__IFStream___end_reached].s = var5; /* _end_reached on <self:Stdin exact> */
return self;
}
/* runtime class standard__Stdout */
const struct class class_standard__Stdout = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to file:Stdout:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to file:Stdout:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to file:Stdout:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to file:Stdout:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to file:Stdout:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to file:Stdout:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to file:Stdout:kernel#Object#sys */
(nitmethod_t)standard___standard__Stdout___standard__kernel__Object__init, /* pointer to file:Stdout:file#Stdout#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to file:Stdout:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to file:Stdout:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to file:Stdout:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to file:Stdout:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to file:Stdout:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to file:Stdout:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to file:Stdout:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to file:Stdout:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to file:Stdout:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to file:Stdout:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to file:Stdout:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to file:Stdout:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to file:Stdout:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to file:Stdout:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to file:Stdout:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to file:Stdout:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to file:Stdout:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to file:Stdout:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to file:Stdout:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to file:Stdout:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to file:Stdout:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to file:Stdout:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to file:Stdout:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to file:Stdout:model#Object#extern_kind */
(nitmethod_t)standard___standard__IOS___last_error, /* pointer to file:Stdout:stream#IOS#last_error */
(nitmethod_t)standard___standard__IOS___last_error_61d, /* pointer to file:Stdout:stream#IOS#last_error= */
(nitmethod_t)standard___standard__OFStream___standard__stream__IOS__close, /* pointer to file:Stdout:file#OFStream#close */
(nitmethod_t)standard___standard__FStream___path_61d, /* pointer to file:Stdout:file#FStream#path= */
(nitmethod_t)standard___standard__FStream___set_buffering_mode, /* pointer to file:Stdout:file#FStream#set_buffering_mode */
(nitmethod_t)standard___standard__OFStream___standard__stream__OStream__write, /* pointer to file:Stdout:file#OFStream#write */
(nitmethod_t)standard___standard__OFStream___is_writable_61d, /* pointer to file:Stdout:file#OFStream#is_writable= */
(nitmethod_t)standard___standard__OFStream___write_native, /* pointer to file:Stdout:file#OFStream#write_native */
(nitmethod_t)standard___standard__OFStream___open, /* pointer to file:Stdout:file#OFStream#open */
(nitmethod_t)standard___standard__Object___init, /* pointer to file:Stdout:kernel#Object#init */
}
};
/* allocate Stdout */
val* NEW_standard__Stdout(const struct type* type) {
val* self /* : Stdout */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__Stdout;
var = NULL;
self->attrs[COLOR_standard__stream__IOS___last_error].val = var; /* _last_error on <self:Stdout exact> */
var1 = NULL;
self->attrs[COLOR_standard__file__FStream___path].val = var1; /* _path on <self:Stdout exact> */
var2 = NULL;
self->attrs[COLOR_standard__file__FStream___file].val = var2; /* _file on <self:Stdout exact> */
var3 = 0;
self->attrs[COLOR_standard__file__OFStream___is_writable].s = var3; /* _is_writable on <self:Stdout exact> */
return self;
}
/* runtime class standard__Stderr */
const struct class class_standard__Stderr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to file:Stderr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to file:Stderr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to file:Stderr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to file:Stderr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to file:Stderr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to file:Stderr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to file:Stderr:kernel#Object#sys */
(nitmethod_t)standard___standard__Stderr___standard__kernel__Object__init, /* pointer to file:Stderr:file#Stderr#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to file:Stderr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to file:Stderr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to file:Stderr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to file:Stderr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to file:Stderr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to file:Stderr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to file:Stderr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to file:Stderr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to file:Stderr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to file:Stderr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to file:Stderr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to file:Stderr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to file:Stderr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to file:Stderr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to file:Stderr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to file:Stderr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to file:Stderr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to file:Stderr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to file:Stderr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to file:Stderr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to file:Stderr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to file:Stderr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to file:Stderr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to file:Stderr:model#Object#extern_kind */
(nitmethod_t)standard___standard__IOS___last_error, /* pointer to file:Stderr:stream#IOS#last_error */
(nitmethod_t)standard___standard__IOS___last_error_61d, /* pointer to file:Stderr:stream#IOS#last_error= */
(nitmethod_t)standard___standard__OFStream___standard__stream__IOS__close, /* pointer to file:Stderr:file#OFStream#close */
(nitmethod_t)standard___standard__FStream___path_61d, /* pointer to file:Stderr:file#FStream#path= */
(nitmethod_t)standard___standard__FStream___set_buffering_mode, /* pointer to file:Stderr:file#FStream#set_buffering_mode */
(nitmethod_t)standard___standard__OFStream___standard__stream__OStream__write, /* pointer to file:Stderr:file#OFStream#write */
(nitmethod_t)standard___standard__OFStream___is_writable_61d, /* pointer to file:Stderr:file#OFStream#is_writable= */
(nitmethod_t)standard___standard__OFStream___write_native, /* pointer to file:Stderr:file#OFStream#write_native */
(nitmethod_t)standard___standard__OFStream___open, /* pointer to file:Stderr:file#OFStream#open */
(nitmethod_t)standard___standard__Object___init, /* pointer to file:Stderr:kernel#Object#init */
}
};
/* allocate Stderr */
val* NEW_standard__Stderr(const struct type* type) {
val* self /* : Stderr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__Stderr;
var = NULL;
self->attrs[COLOR_standard__stream__IOS___last_error].val = var; /* _last_error on <self:Stderr exact> */
var1 = NULL;
self->attrs[COLOR_standard__file__FStream___path].val = var1; /* _path on <self:Stderr exact> */
var2 = NULL;
self->attrs[COLOR_standard__file__FStream___file].val = var2; /* _file on <self:Stderr exact> */
var3 = 0;
self->attrs[COLOR_standard__file__OFStream___is_writable].s = var3; /* _is_writable on <self:Stderr exact> */
return self;
}
/* runtime class standard__Path */
const struct class class_standard__Path = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to file:Path:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to file:Path:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Path___standard__kernel__Object___61d_61d, /* pointer to file:Path:file#Path#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to file:Path:kernel#Object#!= */
(nitmethod_t)standard___standard__Path___standard__kernel__Object__hash, /* pointer to file:Path:file#Path#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to file:Path:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to file:Path:kernel#Object#sys */
(nitmethod_t)standard___standard__Path___standard__kernel__Object__init, /* pointer to file:Path:file#Path#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to file:Path:sorter#Object#default_comparator */
(nitmethod_t)standard___standard__Path___standard__string__Object__to_s, /* pointer to file:Path:file#Path#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to file:Path:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to file:Path:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to file:Path:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to file:Path:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to file:Path:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to file:Path:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to file:Path:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to file:Path:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to file:Path:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to file:Path:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to file:Path:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to file:Path:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to file:Path:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to file:Path:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to file:Path:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to file:Path:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to file:Path:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to file:Path:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to file:Path:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to file:Path:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to file:Path:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to file:Path:model#Object#extern_kind */
(nitmethod_t)standard___standard__Path___path, /* pointer to file:Path:file#Path#path */
(nitmethod_t)standard___standard__Path___path_61d, /* pointer to file:Path:file#Path#path= */
(nitmethod_t)standard___standard__Path___copy, /* pointer to file:Path:file#Path#copy */
(nitmethod_t)standard___standard__Path___open_ro, /* pointer to file:Path:file#Path#open_ro */
(nitmethod_t)standard___standard__Path___open_wo, /* pointer to file:Path:file#Path#open_wo */
(nitmethod_t)standard___standard__Object___init, /* pointer to file:Path:kernel#Object#init */
}
};
/* allocate Path */
val* NEW_standard__Path(const struct type* type) {
val* self /* : Path */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__Path;
return self;
}
/* runtime class standard__FileStat */
/* allocate FileStat */
val* NEW_standard__FileStat(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "FileStat is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__NativeFileStat */
/* allocate NativeFileStat */
val* NEW_standard__NativeFileStat(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "NativeFileStat is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__file__NativeFile */
const struct class class_standard__file__NativeFile = {
6, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to file:NativeFile:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to file:NativeFile:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to file:NativeFile:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to file:NativeFile:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to file:NativeFile:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to file:NativeFile:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to file:NativeFile:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to file:NativeFile:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to file:NativeFile:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to file:NativeFile:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to file:NativeFile:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to file:NativeFile:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to file:NativeFile:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to file:NativeFile:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to file:NativeFile:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to file:NativeFile:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to file:NativeFile:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to file:NativeFile:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to file:NativeFile:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to file:NativeFile:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to file:NativeFile:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to file:NativeFile:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to file:NativeFile:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to file:NativeFile:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to file:NativeFile:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to file:NativeFile:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to file:NativeFile:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to file:NativeFile:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to file:NativeFile:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to file:NativeFile:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to file:NativeFile:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to file:NativeFile:model#Object#extern_kind */
(nitmethod_t)standard___standard__Pointer___address_is_null, /* pointer to file:NativeFile:kernel#Pointer#address_is_null */
(nitmethod_t)standard__file___standard__file__NativeFile___io_read, /* pointer to file:NativeFile:file#NativeFile#io_read */
(nitmethod_t)standard__file___standard__file__NativeFile___io_write, /* pointer to file:NativeFile:file#NativeFile#io_write */
(nitmethod_t)standard__file___standard__file__NativeFile___io_close, /* pointer to file:NativeFile:file#NativeFile#io_close */
(nitmethod_t)standard__file___standard__file__NativeFile___flush, /* pointer to file:NativeFile:file#NativeFile#flush */
(nitmethod_t)standard__file___standard__file__NativeFile___set_buffering_type, /* pointer to file:NativeFile:file#NativeFile#set_buffering_type */
(nitmethod_t)standard__file___standard__file__NativeFile___io_open_read, /* pointer to file:NativeFile:file#NativeFile#io_open_read */
(nitmethod_t)standard__file___standard__file__NativeFile___io_open_write, /* pointer to file:NativeFile:file#NativeFile#io_open_write */
(nitmethod_t)standard__file___standard__file__NativeFile___native_stdin, /* pointer to file:NativeFile:file#NativeFile#native_stdin */
(nitmethod_t)standard__file___standard__file__NativeFile___native_stdout, /* pointer to file:NativeFile:file#NativeFile#native_stdout */
(nitmethod_t)standard__file___standard__file__NativeFile___native_stderr, /* pointer to file:NativeFile:file#NativeFile#native_stderr */
}
};
/* allocate NativeFile */
val* NEW_standard__file__NativeFile(const struct type* type) {
val* self /* : NativeFile */;
self = nit_alloc(sizeof(struct instance_standard__Pointer));
self->type = type;
self->class = &class_standard__file__NativeFile;
((struct instance_standard__Pointer*)self)->value = NULL;
return self;
}
/* runtime class standard__IOError */
const struct class class_standard__IOError = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to stream:IOError:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to stream:IOError:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to stream:IOError:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to stream:IOError:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to stream:IOError:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to stream:IOError:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to stream:IOError:kernel#Object#sys */
(nitmethod_t)standard___standard__Error___standard__kernel__Object__init, /* pointer to stream:IOError:error#Error#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to stream:IOError:sorter#Object#default_comparator */
(nitmethod_t)standard___standard__Error___standard__string__Object__to_s, /* pointer to stream:IOError:error#Error#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to stream:IOError:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to stream:IOError:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to stream:IOError:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to stream:IOError:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to stream:IOError:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to stream:IOError:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to stream:IOError:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to stream:IOError:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to stream:IOError:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to stream:IOError:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to stream:IOError:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to stream:IOError:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to stream:IOError:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to stream:IOError:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to stream:IOError:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to stream:IOError:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to stream:IOError:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to stream:IOError:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to stream:IOError:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to stream:IOError:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to stream:IOError:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to stream:IOError:model#Object#extern_kind */
(nitmethod_t)standard___standard__Error___message, /* pointer to stream:IOError:error#Error#message */
(nitmethod_t)standard___standard__Error___message_61d, /* pointer to stream:IOError:error#Error#message= */
(nitmethod_t)standard___standard__Object___init, /* pointer to stream:IOError:kernel#Object#init */
}
};
/* allocate IOError */
val* NEW_standard__IOError(const struct type* type) {
val* self /* : IOError */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__IOError;
var = NULL;
self->attrs[COLOR_standard__error__Error___cause].val = var; /* _cause on <self:IOError exact> */
return self;
}
/* runtime class standard__IOS */
/* allocate IOS */
val* NEW_standard__IOS(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "IOS is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__IStream */
/* allocate IStream */
val* NEW_standard__IStream(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "IStream is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__LineIterator */
/* allocate LineIterator */
val* NEW_standard__LineIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "LineIterator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__PollableIStream */
/* allocate PollableIStream */
val* NEW_standard__PollableIStream(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "PollableIStream is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__OStream */
/* allocate OStream */
val* NEW_standard__OStream(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "OStream is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Streamable */
/* allocate Streamable */
val* NEW_standard__Streamable(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Streamable is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__BufferedIStream */
/* allocate BufferedIStream */
val* NEW_standard__BufferedIStream(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "BufferedIStream is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__IOStream */
/* allocate IOStream */
val* NEW_standard__IOStream(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "IOStream is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__StringOStream */
/* allocate StringOStream */
val* NEW_standard__StringOStream(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "StringOStream is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__StringIStream */
/* allocate StringIStream */
val* NEW_standard__StringIStream(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "StringIStream is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__ropes__Rope */
/* allocate Rope */
val* NEW_standard__ropes__Rope(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Rope is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__ropes__RopeString */
/* allocate RopeString */
val* NEW_standard__ropes__RopeString(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "RopeString is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__ropes__Concat */
const struct class class_standard__ropes__Concat = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to ropes:Concat:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to ropes:Concat:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Text___standard__kernel__Object___61d_61d, /* pointer to ropes:Concat:string#Text#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to ropes:Concat:kernel#Object#!= */
(nitmethod_t)standard___standard__Text___standard__kernel__Object__hash, /* pointer to ropes:Concat:string#Text#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to ropes:Concat:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to ropes:Concat:kernel#Object#sys */
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__kernel__Object__init, /* pointer to ropes:Concat:ropes#Concat#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to ropes:Concat:sorter#Object#default_comparator */
(nitmethod_t)standard___standard__String___Object__to_s, /* pointer to ropes:Concat:string#String#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to ropes:Concat:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to ropes:Concat:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to ropes:Concat:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to ropes:Concat:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to ropes:Concat:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to ropes:Concat:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to ropes:Concat:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to ropes:Concat:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to ropes:Concat:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to ropes:Concat:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to ropes:Concat:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to ropes:Concat:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to ropes:Concat:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to ropes:Concat:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to ropes:Concat:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to ropes:Concat:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to ropes:Concat:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to ropes:Concat:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to ropes:Concat:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to ropes:Concat:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to ropes:Concat:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to ropes:Concat:model#Object#extern_kind */
(nitmethod_t)standard___standard__Text___standard__kernel__Comparable___60d, /* pointer to ropes:Concat:string#Text#< */
(nitmethod_t)standard___standard__Comparable____60d_61d, /* pointer to ropes:Concat:kernel#Comparable#<= */
(nitmethod_t)standard___standard__Comparable____62d_61d, /* pointer to ropes:Concat:kernel#Comparable#>= */
(nitmethod_t)standard___standard__Comparable____62d, /* pointer to ropes:Concat:kernel#Comparable#> */
(nitmethod_t)standard___standard__Comparable____60d_61d_62d, /* pointer to ropes:Concat:kernel#Comparable#<=> */
(nitmethod_t)standard__string_search___Text___Pattern__search_index_in, /* pointer to ropes:Concat:string_search#Text#search_index_in */
(nitmethod_t)standard__string_search___Text___Pattern__search_in, /* pointer to ropes:Concat:string_search#Text#search_in */
(nitmethod_t)standard___standard__Pattern___split_in, /* pointer to ropes:Concat:string_search#Pattern#split_in */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__stream___Text___Streamable__write_to, /* pointer to ropes:Concat:stream#Text#write_to */
(nitmethod_t)standard__ropes___standard__ropes__RopeString___standard__string__Text__chars, /* pointer to ropes:Concat:ropes#RopeString#chars */
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__string__Text__length, /* pointer to ropes:Concat:ropes#Concat#length */
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__string__Text__substring, /* pointer to ropes:Concat:ropes#Concat#substring */
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__string__Text__substrings, /* pointer to ropes:Concat:ropes#Concat#substrings */
(nitmethod_t)standard___standard__Text___is_empty, /* pointer to ropes:Concat:string#Text#is_empty */
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__string__Text__empty, /* pointer to ropes:Concat:ropes#Concat#empty */
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__string__Text___91d_93d, /* pointer to ropes:Concat:ropes#Concat#[] */
(nitmethod_t)standard___standard__Text___last, /* pointer to ropes:Concat:string#Text#last */
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__string__Text__to_cstring, /* pointer to ropes:Concat:ropes#Concat#to_cstring */
(nitmethod_t)standard___standard__Text___substring_from, /* pointer to ropes:Concat:string#Text#substring_from */
(nitmethod_t)standard___standard__Text___has_substring, /* pointer to ropes:Concat:string#Text#has_substring */
(nitmethod_t)standard___standard__Text___has_prefix, /* pointer to ropes:Concat:string#Text#has_prefix */
(nitmethod_t)standard___standard__Text___has_suffix, /* pointer to ropes:Concat:string#Text#has_suffix */
(nitmethod_t)standard___standard__Text___to_i, /* pointer to ropes:Concat:string#Text#to_i */
(nitmethod_t)standard___standard__Text___to_f, /* pointer to ropes:Concat:string#Text#to_f */
(nitmethod_t)standard___standard__Text___to_hex, /* pointer to ropes:Concat:string#Text#to_hex */
(nitmethod_t)standard___standard__Text___a_to, /* pointer to ropes:Concat:string#Text#a_to */
(nitmethod_t)standard___standard__Text___is_numeric, /* pointer to ropes:Concat:string#Text#is_numeric */
(nitmethod_t)standard___standard__Text___chomp, /* pointer to ropes:Concat:string#Text#chomp */
(nitmethod_t)standard___standard__Text___to_cmangle, /* pointer to ropes:Concat:string#Text#to_cmangle */
(nitmethod_t)standard___standard__Text___escape_to_c, /* pointer to ropes:Concat:string#Text#escape_to_c */
(nitmethod_t)standard___standard__Text___escape_to_sh, /* pointer to ropes:Concat:string#Text#escape_to_sh */
(nitmethod_t)standard___standard__Text___escape_to_mk, /* pointer to ropes:Concat:string#Text#escape_to_mk */
(nitmethod_t)standard___standard__Text___unescape_nit, /* pointer to ropes:Concat:string#Text#unescape_nit */
(nitmethod_t)standard___standard__Text___hash_cache, /* pointer to ropes:Concat:string#Text#hash_cache */
(nitmethod_t)standard___standard__Text___hash_cache_61d, /* pointer to ropes:Concat:string#Text#hash_cache= */
(nitmethod_t)standard__string_search___Text___split, /* pointer to ropes:Concat:string_search#Text#split */
(nitmethod_t)standard__string_search___Text___split_with, /* pointer to ropes:Concat:string_search#Text#split_with */
(nitmethod_t)standard__string_search___Text___split_once_on, /* pointer to ropes:Concat:string_search#Text#split_once_on */
(nitmethod_t)standard__string_search___Text___replace, /* pointer to ropes:Concat:string_search#Text#replace */
(nitmethod_t)standard__file___Text___to_path, /* pointer to ropes:Concat:file#Text#to_path */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__string__String___43d, /* pointer to ropes:Concat:ropes#Concat#+ */
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__string__String___42d, /* pointer to ropes:Concat:ropes#Concat#* */
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__string__String__to_upper, /* pointer to ropes:Concat:ropes#Concat#to_upper */
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__string__String__to_lower, /* pointer to ropes:Concat:ropes#Concat#to_lower */
(nitmethod_t)standard__file___String___file_exists, /* pointer to ropes:Concat:file#String#file_exists */
(nitmethod_t)standard__file___String___file_copy_to, /* pointer to ropes:Concat:file#String#file_copy_to */
(nitmethod_t)standard__file___String___strip_extension, /* pointer to ropes:Concat:file#String#strip_extension */
(nitmethod_t)standard__file___String___basename, /* pointer to ropes:Concat:file#String#basename */
(nitmethod_t)standard__file___String___dirname, /* pointer to ropes:Concat:file#String#dirname */
(nitmethod_t)standard__file___String___realpath, /* pointer to ropes:Concat:file#String#realpath */
(nitmethod_t)standard__file___String___simplify_path, /* pointer to ropes:Concat:file#String#simplify_path */
(nitmethod_t)standard__file___String___join_path, /* pointer to ropes:Concat:file#String#join_path */
(nitmethod_t)standard__file___String____47d, /* pointer to ropes:Concat:file#String#/ */
(nitmethod_t)standard__file___String___relpath, /* pointer to ropes:Concat:file#String#relpath */
(nitmethod_t)standard__file___String___mkdir, /* pointer to ropes:Concat:file#String#mkdir */
(nitmethod_t)standard__file___String___file_extension, /* pointer to ropes:Concat:file#String#file_extension */
(nitmethod_t)standard__environ___String___environ, /* pointer to ropes:Concat:environ#String#environ */
(nitmethod_t)standard__ropes___standard__ropes__RopeString___chars_60dreal_62d, /* pointer to ropes:Concat:ropes#RopeString#chars<real> */
(nitmethod_t)standard__ropes___standard__ropes__Concat___length_61d, /* pointer to ropes:Concat:ropes#Concat#length= */
(nitmethod_t)standard__ropes___standard__ropes__Concat___left, /* pointer to ropes:Concat:ropes#Concat#left */
(nitmethod_t)standard__ropes___standard__ropes__Concat___left_61d, /* pointer to ropes:Concat:ropes#Concat#left= */
(nitmethod_t)standard__ropes___standard__ropes__Concat___right, /* pointer to ropes:Concat:ropes#Concat#right */
(nitmethod_t)standard__ropes___standard__ropes__Concat___right_61d, /* pointer to ropes:Concat:ropes#Concat#right= */
(nitmethod_t)standard__ropes___standard__ropes__Concat___to_cstring_60dreal_62d, /* pointer to ropes:Concat:ropes#Concat#to_cstring<real> */
(nitmethod_t)standard___standard__Object___init, /* pointer to ropes:Concat:kernel#Object#init */
}
};
/* allocate Concat */
val* NEW_standard__ropes__Concat(const struct type* type) {
val* self /* : Concat */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__ropes__Concat;
var = NULL;
self->attrs[COLOR_standard__string__Text___hash_cache].val = var; /* _hash_cache on <self:Concat exact> */
var1 = 0;
self->attrs[COLOR_standard__ropes__RopeString___64dchars_60dis_cached_62d].s = var1; /* @chars<is_cached> on <self:Concat exact> */
var2 = 0;
self->attrs[COLOR_standard__ropes__Concat___64dto_cstring_60dis_cached_62d].s = var2; /* @to_cstring<is_cached> on <self:Concat exact> */
return self;
}
/* runtime class standard__RopeBuffer */
/* allocate RopeBuffer */
val* NEW_standard__RopeBuffer(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "RopeBuffer is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__ropes__RopeIterPiece */
const struct class class_standard__ropes__RopeIterPiece = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to ropes:RopeIterPiece:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to ropes:RopeIterPiece:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to ropes:RopeIterPiece:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to ropes:RopeIterPiece:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to ropes:RopeIterPiece:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to ropes:RopeIterPiece:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to ropes:RopeIterPiece:kernel#Object#sys */
(nitmethod_t)standard__ropes___standard__ropes__RopeIterPiece___standard__kernel__Object__init, /* pointer to ropes:RopeIterPiece:ropes#RopeIterPiece#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to ropes:RopeIterPiece:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to ropes:RopeIterPiece:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to ropes:RopeIterPiece:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to ropes:RopeIterPiece:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to ropes:RopeIterPiece:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to ropes:RopeIterPiece:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to ropes:RopeIterPiece:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to ropes:RopeIterPiece:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to ropes:RopeIterPiece:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to ropes:RopeIterPiece:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to ropes:RopeIterPiece:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to ropes:RopeIterPiece:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to ropes:RopeIterPiece:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to ropes:RopeIterPiece:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to ropes:RopeIterPiece:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to ropes:RopeIterPiece:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to ropes:RopeIterPiece:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to ropes:RopeIterPiece:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to ropes:RopeIterPiece:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to ropes:RopeIterPiece:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to ropes:RopeIterPiece:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to ropes:RopeIterPiece:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to ropes:RopeIterPiece:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to ropes:RopeIterPiece:model#Object#extern_kind */
(nitmethod_t)standard__ropes___standard__ropes__RopeIterPiece___node, /* pointer to ropes:RopeIterPiece:ropes#RopeIterPiece#node */
(nitmethod_t)standard__ropes___standard__ropes__RopeIterPiece___node_61d, /* pointer to ropes:RopeIterPiece:ropes#RopeIterPiece#node= */
(nitmethod_t)standard__ropes___standard__ropes__RopeIterPiece___ldone, /* pointer to ropes:RopeIterPiece:ropes#RopeIterPiece#ldone */
(nitmethod_t)standard__ropes___standard__ropes__RopeIterPiece___ldone_61d, /* pointer to ropes:RopeIterPiece:ropes#RopeIterPiece#ldone= */
(nitmethod_t)standard__ropes___standard__ropes__RopeIterPiece___rdone, /* pointer to ropes:RopeIterPiece:ropes#RopeIterPiece#rdone */
(nitmethod_t)standard__ropes___standard__ropes__RopeIterPiece___rdone_61d, /* pointer to ropes:RopeIterPiece:ropes#RopeIterPiece#rdone= */
(nitmethod_t)standard__ropes___standard__ropes__RopeIterPiece___prev, /* pointer to ropes:RopeIterPiece:ropes#RopeIterPiece#prev */
(nitmethod_t)standard__ropes___standard__ropes__RopeIterPiece___prev_61d, /* pointer to ropes:RopeIterPiece:ropes#RopeIterPiece#prev= */
(nitmethod_t)standard___standard__Object___init, /* pointer to ropes:RopeIterPiece:kernel#Object#init */
}
};
/* allocate RopeIterPiece */
val* NEW_standard__ropes__RopeIterPiece(const struct type* type) {
val* self /* : RopeIterPiece */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__ropes__RopeIterPiece;
return self;
}
/* runtime class standard__ropes__RopeReviter */
/* allocate RopeReviter */
val* NEW_standard__ropes__RopeReviter(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "RopeReviter is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__ropes__RopeIter */
const struct class class_standard__ropes__RopeIter = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to ropes:RopeIter:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to ropes:RopeIter:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to ropes:RopeIter:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to ropes:RopeIter:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to ropes:RopeIter:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to ropes:RopeIter:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to ropes:RopeIter:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to ropes:RopeIter:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to ropes:RopeIter:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to ropes:RopeIter:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to ropes:RopeIter:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to ropes:RopeIter:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to ropes:RopeIter:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to ropes:RopeIter:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to ropes:RopeIter:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to ropes:RopeIter:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to ropes:RopeIter:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to ropes:RopeIter:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to ropes:RopeIter:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to ropes:RopeIter:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to ropes:RopeIter:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to ropes:RopeIter:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to ropes:RopeIter:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to ropes:RopeIter:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to ropes:RopeIter:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to ropes:RopeIter:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to ropes:RopeIter:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to ropes:RopeIter:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to ropes:RopeIter:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to ropes:RopeIter:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to ropes:RopeIter:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to ropes:RopeIter:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__Iterator__item, /* pointer to ropes:RopeIter:ropes#RopeIter#item */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__Iterator__next, /* pointer to ropes:RopeIter:ropes#RopeIter#next */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__Iterator__is_ok, /* pointer to ropes:RopeIter:ropes#RopeIter#is_ok */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to ropes:RopeIter:abstract_collection#Iterator#iterator */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to ropes:RopeIter:abstract_collection#Iterator#finish */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to ropes:RopeIter:array#Iterator#to_a */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__IndexedIterator__index, /* pointer to ropes:RopeIter:ropes#RopeIter#index */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___pns, /* pointer to ropes:RopeIter:ropes#RopeIter#pns */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___pns_61d, /* pointer to ropes:RopeIter:ropes#RopeIter#pns= */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___str, /* pointer to ropes:RopeIter:ropes#RopeIter#str */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___str_61d, /* pointer to ropes:RopeIter:ropes#RopeIter#str= */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___subs, /* pointer to ropes:RopeIter:ropes#RopeIter#subs */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___subs_61d, /* pointer to ropes:RopeIter:ropes#RopeIter#subs= */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___max, /* pointer to ropes:RopeIter:ropes#RopeIter#max */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___max_61d, /* pointer to ropes:RopeIter:ropes#RopeIter#max= */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___pos, /* pointer to ropes:RopeIter:ropes#RopeIter#pos */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___pos_61d, /* pointer to ropes:RopeIter:ropes#RopeIter#pos= */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___from, /* pointer to ropes:RopeIter:ropes#RopeIter#from */
}
};
/* allocate RopeIter */
val* NEW_standard__ropes__RopeIter(const struct type* type) {
val* self /* : RopeIter */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__ropes__RopeIter;
return self;
}
/* runtime class standard__ropes__ReverseRopeSubstrings */
/* allocate ReverseRopeSubstrings */
val* NEW_standard__ropes__ReverseRopeSubstrings(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ReverseRopeSubstrings is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__ropes__RopeBufSubstringIterator */
/* allocate RopeBufSubstringIterator */
val* NEW_standard__ropes__RopeBufSubstringIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "RopeBufSubstringIterator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__ropes__RopeSubstrings */
const struct class class_standard__ropes__RopeSubstrings = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to ropes:RopeSubstrings:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to ropes:RopeSubstrings:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to ropes:RopeSubstrings:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to ropes:RopeSubstrings:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to ropes:RopeSubstrings:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to ropes:RopeSubstrings:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to ropes:RopeSubstrings:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to ropes:RopeSubstrings:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to ropes:RopeSubstrings:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to ropes:RopeSubstrings:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to ropes:RopeSubstrings:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to ropes:RopeSubstrings:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to ropes:RopeSubstrings:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to ropes:RopeSubstrings:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to ropes:RopeSubstrings:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to ropes:RopeSubstrings:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to ropes:RopeSubstrings:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to ropes:RopeSubstrings:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to ropes:RopeSubstrings:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to ropes:RopeSubstrings:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to ropes:RopeSubstrings:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to ropes:RopeSubstrings:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to ropes:RopeSubstrings:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to ropes:RopeSubstrings:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to ropes:RopeSubstrings:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to ropes:RopeSubstrings:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to ropes:RopeSubstrings:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to ropes:RopeSubstrings:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to ropes:RopeSubstrings:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to ropes:RopeSubstrings:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to ropes:RopeSubstrings:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to ropes:RopeSubstrings:model#Object#extern_kind */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___standard__abstract_collection__Iterator__item, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#item */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___standard__abstract_collection__Iterator__next, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#next */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___standard__abstract_collection__Iterator__is_ok, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#is_ok */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to ropes:RopeSubstrings:abstract_collection#Iterator#iterator */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to ropes:RopeSubstrings:abstract_collection#Iterator#finish */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to ropes:RopeSubstrings:array#Iterator#to_a */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___standard__abstract_collection__IndexedIterator__index, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#index */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___iter, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#iter */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___iter_61d, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#iter= */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___pos, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#pos */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___pos_61d, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#pos= */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___max, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#max */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___max_61d, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#max= */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___str, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#str */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___str_61d, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#str= */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___init, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#init */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___from, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#from */
}
};
/* allocate RopeSubstrings */
val* NEW_standard__ropes__RopeSubstrings(const struct type* type) {
val* self /* : RopeSubstrings */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__ropes__RopeSubstrings;
return self;
}
/* runtime class standard__ropes__RopeChars */
const struct class class_standard__ropes__RopeChars = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to ropes:RopeChars:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to ropes:RopeChars:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object___61d_61d, /* pointer to ropes:RopeChars:abstract_collection#SequenceRead#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to ropes:RopeChars:kernel#Object#!= */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object__hash, /* pointer to ropes:RopeChars:abstract_collection#SequenceRead#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to ropes:RopeChars:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to ropes:RopeChars:kernel#Object#sys */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__kernel__Object__init, /* pointer to ropes:RopeChars:string#StringCharView#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to ropes:RopeChars:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to ropes:RopeChars:string#Collection#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to ropes:RopeChars:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to ropes:RopeChars:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to ropes:RopeChars:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to ropes:RopeChars:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to ropes:RopeChars:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to ropes:RopeChars:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to ropes:RopeChars:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to ropes:RopeChars:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to ropes:RopeChars:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to ropes:RopeChars:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to ropes:RopeChars:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to ropes:RopeChars:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to ropes:RopeChars:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to ropes:RopeChars:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to ropes:RopeChars:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to ropes:RopeChars:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to ropes:RopeChars:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to ropes:RopeChars:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to ropes:RopeChars:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to ropes:RopeChars:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to ropes:RopeChars:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to ropes:RopeChars:model#Object#extern_kind */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__iterator, /* pointer to ropes:RopeChars:string#StringCharView#iterator */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__is_empty, /* pointer to ropes:RopeChars:string#StringCharView#is_empty */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__length, /* pointer to ropes:RopeChars:string#StringCharView#length */
(nitmethod_t)standard___standard__Collection___has, /* pointer to ropes:RopeChars:abstract_collection#Collection#has */
(nitmethod_t)standard___standard__SequenceRead___Collection__first, /* pointer to ropes:RopeChars:abstract_collection#SequenceRead#first */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to ropes:RopeChars:abstract_collection#Collection#has_all */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to ropes:RopeChars:array#Collection#to_a */
(nitmethod_t)standard__string___Collection___join, /* pointer to ropes:RopeChars:string#Collection#join */
(nitmethod_t)VIRTUAL_standard__ropes___standard__ropes__RopeChars___standard__abstract_collection__SequenceRead___91d_93d, /* pointer to ropes:RopeChars:ropes#RopeChars#[] */
(nitmethod_t)standard___standard__SequenceRead___last, /* pointer to ropes:RopeChars:abstract_collection#SequenceRead#last */
(nitmethod_t)standard___standard__SequenceRead___index_of, /* pointer to ropes:RopeChars:abstract_collection#SequenceRead#index_of */
(nitmethod_t)standard___standard__SequenceRead___last_index_of, /* pointer to ropes:RopeChars:abstract_collection#SequenceRead#last_index_of */
(nitmethod_t)standard___standard__SequenceRead___index_of_from, /* pointer to ropes:RopeChars:abstract_collection#SequenceRead#index_of_from */
(nitmethod_t)standard___standard__SequenceRead___last_index_of_from, /* pointer to ropes:RopeChars:abstract_collection#SequenceRead#last_index_of_from */
(nitmethod_t)standard__ropes___standard__ropes__RopeChars___standard__abstract_collection__SequenceRead__iterator_from, /* pointer to ropes:RopeChars:ropes#RopeChars#iterator_from */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__string___standard__string__StringCharView___target, /* pointer to ropes:RopeChars:string#StringCharView#target */
(nitmethod_t)standard__string___standard__string__StringCharView___target_61d, /* pointer to ropes:RopeChars:string#StringCharView#target= */
(nitmethod_t)standard___standard__Object___init, /* pointer to ropes:RopeChars:kernel#Object#init */
}
};
/* allocate RopeChars */
val* NEW_standard__ropes__RopeChars(const struct type* type) {
val* self /* : RopeChars */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__ropes__RopeChars;
return self;
}
/* runtime class standard__RopeBufferIter */
/* allocate RopeBufferIter */
val* NEW_standard__RopeBufferIter(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "RopeBufferIter is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__RopeBufferReviter */
/* allocate RopeBufferReviter */
val* NEW_standard__RopeBufferReviter(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "RopeBufferReviter is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__RopeBufferChars */
/* allocate RopeBufferChars */
val* NEW_standard__RopeBufferChars(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "RopeBufferChars is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Error */
/* allocate Error */
val* NEW_standard__Error(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Error is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__MaybeError */
/* allocate MaybeError[nullable Object, Error] */
val* NEW_standard__MaybeError(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MaybeError is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Pattern */
/* allocate Pattern */
val* NEW_standard__Pattern(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Pattern is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__BM_Pattern */
/* allocate BM_Pattern */
val* NEW_standard__BM_Pattern(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "BM_Pattern is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Match */
const struct class class_standard__Match = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to string_search:Match:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to string_search:Match:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to string_search:Match:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to string_search:Match:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to string_search:Match:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to string_search:Match:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to string_search:Match:kernel#Object#sys */
(nitmethod_t)standard___standard__Match___standard__kernel__Object__init, /* pointer to string_search:Match:string_search#Match#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to string_search:Match:sorter#Object#default_comparator */
(nitmethod_t)standard___standard__Match___standard__string__Object__to_s, /* pointer to string_search:Match:string_search#Match#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to string_search:Match:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to string_search:Match:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to string_search:Match:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to string_search:Match:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to string_search:Match:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to string_search:Match:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to string_search:Match:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to string_search:Match:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to string_search:Match:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to string_search:Match:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to string_search:Match:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to string_search:Match:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to string_search:Match:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to string_search:Match:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to string_search:Match:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to string_search:Match:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to string_search:Match:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to string_search:Match:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to string_search:Match:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to string_search:Match:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to string_search:Match:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to string_search:Match:model#Object#extern_kind */
(nitmethod_t)standard___standard__Match___string, /* pointer to string_search:Match:string_search#Match#string */
(nitmethod_t)standard___standard__Match___string_61d, /* pointer to string_search:Match:string_search#Match#string= */
(nitmethod_t)standard___standard__Match___from, /* pointer to string_search:Match:string_search#Match#from */
(nitmethod_t)standard___standard__Match___from_61d, /* pointer to string_search:Match:string_search#Match#from= */
(nitmethod_t)standard___standard__Match___length, /* pointer to string_search:Match:string_search#Match#length */
(nitmethod_t)standard___standard__Match___length_61d, /* pointer to string_search:Match:string_search#Match#length= */
(nitmethod_t)standard___standard__Match___after, /* pointer to string_search:Match:string_search#Match#after */
}
};
/* allocate Match */
val* NEW_standard__Match(const struct type* type) {
val* self /* : Match */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__Match;
return self;
}
/* runtime class standard__TimeT */
/* allocate TimeT */
val* NEW_standard__TimeT(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "TimeT is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Tm */
/* allocate Tm */
val* NEW_standard__Tm(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Tm is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__ISODate */
/* allocate ISODate */
val* NEW_standard__ISODate(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ISODate is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Finalizable */
/* allocate Finalizable */
val* NEW_standard__Finalizable(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Finalizable is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__FinalizableOnce */
/* allocate FinalizableOnce */
val* NEW_standard__FinalizableOnce(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "FinalizableOnce is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Process */
/* allocate Process */
val* NEW_standard__Process(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Process is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__IProcess */
/* allocate IProcess */
val* NEW_standard__IProcess(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "IProcess is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__OProcess */
/* allocate OProcess */
val* NEW_standard__OProcess(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "OProcess is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__IOProcess */
/* allocate IOProcess */
val* NEW_standard__IOProcess(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "IOProcess is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__exec__NativeProcess */
/* allocate NativeProcess */
val* NEW_standard__exec__NativeProcess(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "NativeProcess is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Queue */
/* allocate Queue[nullable Object] */
val* NEW_standard__Queue(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Queue is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__queue__ProxyQueue */
/* allocate ProxyQueue[nullable Object] */
val* NEW_standard__queue__ProxyQueue(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ProxyQueue is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__queue__LifoQueue */
/* allocate LifoQueue[nullable Object] */
val* NEW_standard__queue__LifoQueue(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "LifoQueue is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__queue__FifoQueue */
/* allocate FifoQueue[nullable Object] */
val* NEW_standard__queue__FifoQueue(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "FifoQueue is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__queue__RandQueue */
/* allocate RandQueue[nullable Object] */
val* NEW_standard__queue__RandQueue(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "RandQueue is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__MinHeap */
/* allocate MinHeap[Object] */
val* NEW_standard__MinHeap(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MinHeap is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__re__NativeRegex */
/* allocate NativeRegex */
val* NEW_standard__re__NativeRegex(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "NativeRegex is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__re__NativeMatchArray */
/* allocate NativeMatchArray */
val* NEW_standard__re__NativeMatchArray(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "NativeMatchArray is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class standard__Regex */
/* allocate Regex */
val* NEW_standard__Regex(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Regex is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__MProject */
const struct class class_nit__MProject = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to mproject:MProject:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to mproject:MProject:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to mproject:MProject:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to mproject:MProject:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to mproject:MProject:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to mproject:MProject:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to mproject:MProject:kernel#Object#sys */
(nitmethod_t)nit___nit__MProject___standard__kernel__Object__init, /* pointer to mproject:MProject:mproject#MProject#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to mproject:MProject:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__MProject___standard__string__Object__to_s, /* pointer to mproject:MProject:mproject#MProject#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to mproject:MProject:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to mproject:MProject:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to mproject:MProject:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to mproject:MProject:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to mproject:MProject:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to mproject:MProject:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to mproject:MProject:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to mproject:MProject:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to mproject:MProject:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to mproject:MProject:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to mproject:MProject:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to mproject:MProject:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to mproject:MProject:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to mproject:MProject:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to mproject:MProject:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to mproject:MProject:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to mproject:MProject:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to mproject:MProject:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to mproject:MProject:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to mproject:MProject:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to mproject:MProject:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to mproject:MProject:model#Object#extern_kind */
(nitmethod_t)nit___nit__MProject___nit__model_base__MEntity__name, /* pointer to mproject:MProject:mproject#MProject#name */
(nitmethod_t)nit___nit__MProject___nit__model_base__MEntity__full_name, /* pointer to mproject:MProject:mproject#MProject#full_name */
(nitmethod_t)nit___nit__MProject___nit__model_base__MEntity__c_name, /* pointer to mproject:MProject:mproject#MProject#c_name */
(nitmethod_t)nit___nit__MProject___nit__model_base__MEntity__model, /* pointer to mproject:MProject:mproject#MProject#model */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to mproject:MProject:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to mproject:MProject:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to mproject:MProject:mdoc#MEntity#deprecation */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to mproject:MProject:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to mproject:MProject:separate_compiler#MEntity#const_color */
(nitmethod_t)nit___nit__MProject___name_61d, /* pointer to mproject:MProject:mproject#MProject#name= */
(nitmethod_t)nit___nit__MProject___model_61d, /* pointer to mproject:MProject:mproject#MProject#model= */
(nitmethod_t)nit___nit__MProject___root, /* pointer to mproject:MProject:mproject#MProject#root */
(nitmethod_t)nit___nit__MProject___root_61d, /* pointer to mproject:MProject:mproject#MProject#root= */
(nitmethod_t)nit___nit__MProject___mgroups, /* pointer to mproject:MProject:mproject#MProject#mgroups */
(nitmethod_t)standard___standard__Object___init, /* pointer to mproject:MProject:kernel#Object#init */
}
};
/* allocate MProject */
val* NEW_nit__MProject(const struct type* type) {
val* self /* : MProject */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : POSet[MGroup] */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MProject;
var = NULL;
self->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var; /* _deprecation on <self:MProject exact> */
var1 = NULL;
self->attrs[COLOR_nit__mproject__MProject___root].val = var1; /* _root on <self:MProject exact> */
var2 = NEW_poset__POSet(&type_poset__POSet__nit__MGroup);
{
{ /* Inline kernel#Object#init (var2) on <var2:POSet[MGroup]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__mproject__MProject___mgroups].val = var2; /* _mgroups on <self:MProject exact> */
return self;
}
/* runtime class nit__MGroup */
const struct class class_nit__MGroup = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to mproject:MGroup:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to mproject:MGroup:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to mproject:MGroup:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to mproject:MGroup:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to mproject:MGroup:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to mproject:MGroup:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to mproject:MGroup:kernel#Object#sys */
(nitmethod_t)nit___nit__MGroup___standard__kernel__Object__init, /* pointer to mproject:MGroup:mproject#MGroup#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to mproject:MGroup:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__MGroup___standard__string__Object__to_s, /* pointer to mproject:MGroup:mproject#MGroup#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to mproject:MGroup:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to mproject:MGroup:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to mproject:MGroup:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to mproject:MGroup:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to mproject:MGroup:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to mproject:MGroup:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to mproject:MGroup:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to mproject:MGroup:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to mproject:MGroup:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to mproject:MGroup:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to mproject:MGroup:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to mproject:MGroup:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to mproject:MGroup:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to mproject:MGroup:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to mproject:MGroup:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to mproject:MGroup:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to mproject:MGroup:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to mproject:MGroup:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to mproject:MGroup:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to mproject:MGroup:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to mproject:MGroup:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to mproject:MGroup:model#Object#extern_kind */
(nitmethod_t)nit___nit__MGroup___nit__model_base__MEntity__name, /* pointer to mproject:MGroup:mproject#MGroup#name */
(nitmethod_t)nit___nit__MGroup___nit__model_base__MEntity__full_name, /* pointer to mproject:MGroup:mproject#MGroup#full_name */
(nitmethod_t)nit___nit__MEntity___c_name, /* pointer to mproject:MGroup:model_base#MEntity#c_name */
(nitmethod_t)nit___nit__MGroup___nit__model_base__MEntity__model, /* pointer to mproject:MGroup:mproject#MGroup#model */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to mproject:MGroup:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to mproject:MGroup:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to mproject:MGroup:mdoc#MEntity#deprecation */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to mproject:MGroup:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to mproject:MGroup:separate_compiler#MEntity#const_color */
(nitmethod_t)nit___nit__MGroup___name_61d, /* pointer to mproject:MGroup:mproject#MGroup#name= */
(nitmethod_t)nit___nit__MGroup___mproject, /* pointer to mproject:MGroup:mproject#MGroup#mproject */
(nitmethod_t)nit___nit__MGroup___mproject_61d, /* pointer to mproject:MGroup:mproject#MGroup#mproject= */
(nitmethod_t)nit___nit__MGroup___parent, /* pointer to mproject:MGroup:mproject#MGroup#parent */
(nitmethod_t)nit___nit__MGroup___parent_61d, /* pointer to mproject:MGroup:mproject#MGroup#parent= */
(nitmethod_t)nit___nit__MGroup___in_nesting_61d, /* pointer to mproject:MGroup:mproject#MGroup#in_nesting= */
(nitmethod_t)nit___nit__MGroup___filepath, /* pointer to mproject:MGroup:mproject#MGroup#filepath */
(nitmethod_t)nit___nit__MGroup___filepath_61d, /* pointer to mproject:MGroup:mproject#MGroup#filepath= */
(nitmethod_t)nit__mmodule___MGroup___mmodules, /* pointer to mproject:MGroup:mmodule#MGroup#mmodules */
(nitmethod_t)nit__mmodule___MGroup___default_mmodule, /* pointer to mproject:MGroup:mmodule#MGroup#default_mmodule */
(nitmethod_t)nit__mmodule___MGroup___default_mmodule_61d, /* pointer to mproject:MGroup:mmodule#MGroup#default_mmodule= */
(nitmethod_t)nit__loader___MGroup___module_paths, /* pointer to mproject:MGroup:loader#MGroup#module_paths */
(nitmethod_t)standard___standard__Object___init, /* pointer to mproject:MGroup:kernel#Object#init */
}
};
/* allocate MGroup */
val* NEW_nit__MGroup(const struct type* type) {
val* self /* : MGroup */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : Array[MModule] */;
val* var3 /* : null */;
val* var4 /* : Array[ModulePath] */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MGroup;
var = NULL;
self->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var; /* _deprecation on <self:MGroup exact> */
var1 = NULL;
self->attrs[COLOR_nit__mproject__MGroup___filepath].val = var1; /* _filepath on <self:MGroup exact> */
var2 = NEW_standard__Array(&type_standard__Array__nit__MModule);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[MModule]>*/
}
self->attrs[COLOR_nit__mmodule__MGroup___mmodules].val = var2; /* _mmodules on <self:MGroup exact> */
var3 = NULL;
self->attrs[COLOR_nit__mmodule__MGroup___default_mmodule].val = var3; /* _default_mmodule on <self:MGroup exact> */
var4 = NEW_standard__Array(&type_standard__Array__nit__ModulePath);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[ModulePath]>*/
}
self->attrs[COLOR_nit__loader__MGroup___module_paths].val = var4; /* _module_paths on <self:MGroup exact> */
return self;
}
/* runtime class nit__Model */
const struct class class_nit__Model = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model_base:Model:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model_base:Model:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model_base:Model:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model_base:Model:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model_base:Model:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to model_base:Model:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model_base:Model:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to model_base:Model:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to model_base:Model:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to model_base:Model:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model_base:Model:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model_base:Model:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model_base:Model:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model_base:Model:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to model_base:Model:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to model_base:Model:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model_base:Model:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to model_base:Model:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to model_base:Model:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to model_base:Model:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to model_base:Model:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to model_base:Model:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to model_base:Model:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to model_base:Model:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to model_base:Model:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to model_base:Model:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to model_base:Model:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to model_base:Model:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to model_base:Model:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to model_base:Model:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to model_base:Model:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to model_base:Model:model#Object#extern_kind */
(nitmethod_t)nit__mproject___Model___mprojects, /* pointer to model_base:Model:mproject#Model#mprojects */
(nitmethod_t)nit__mproject___Model___mproject_by_name, /* pointer to model_base:Model:mproject#Model#mproject_by_name */
(nitmethod_t)nit__mmodule___Model___mmodules, /* pointer to model_base:Model:mmodule#Model#mmodules */
(nitmethod_t)nit__mmodule___Model___mmodule_importation_hierarchy, /* pointer to model_base:Model:mmodule#Model#mmodule_importation_hierarchy */
(nitmethod_t)nit__mmodule___Model___mmodules_by_name, /* pointer to model_base:Model:mmodule#Model#mmodules_by_name */
(nitmethod_t)nit__mmodule___Model___get_mmodules_by_name, /* pointer to model_base:Model:mmodule#Model#get_mmodules_by_name */
(nitmethod_t)nit__model___Model___mclasses, /* pointer to model_base:Model:model#Model#mclasses */
(nitmethod_t)nit__model___Model___mproperties, /* pointer to model_base:Model:model#Model#mproperties */
(nitmethod_t)nit__model___Model___mclassdef_hierarchy, /* pointer to model_base:Model:model#Model#mclassdef_hierarchy */
(nitmethod_t)nit__model___Model___intro_mtype_specialization_hierarchy, /* pointer to model_base:Model:model#Model#intro_mtype_specialization_hierarchy */
(nitmethod_t)nit__model___Model___full_mtype_specialization_hierarchy, /* pointer to model_base:Model:model#Model#full_mtype_specialization_hierarchy */
(nitmethod_t)nit__model___Model___mclasses_by_name, /* pointer to model_base:Model:model#Model#mclasses_by_name */
(nitmethod_t)nit__model___Model___get_mclasses_by_name, /* pointer to model_base:Model:model#Model#get_mclasses_by_name */
(nitmethod_t)nit__model___Model___mproperties_by_name, /* pointer to model_base:Model:model#Model#mproperties_by_name */
(nitmethod_t)nit__model___Model___get_mproperties_by_name, /* pointer to model_base:Model:model#Model#get_mproperties_by_name */
(nitmethod_t)nit__model___Model___null_type, /* pointer to model_base:Model:model#Model#null_type */
}
};
/* allocate Model */
val* NEW_nit__Model(const struct type* type) {
val* self /* : Model */;
val* var /* : Array[MProject] */;
val* var1 /* : MultiHashMap[String, MProject] */;
val* var2 /* : Array[MModule] */;
val* var3 /* : POSet[MModule] */;
val* var4 /* : MultiHashMap[String, MModule] */;
val* var5 /* : Array[MClass] */;
val* var6 /* : Array[MProperty] */;
val* var7 /* : POSet[MClassDef] */;
val* var9 /* : POSet[MClassType] */;
val* var11 /* : POSet[MClassType] */;
val* var13 /* : MultiHashMap[String, MClass] */;
val* var14 /* : MultiHashMap[String, MProperty] */;
val* var15 /* : MNullType */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__Model;
var = NEW_standard__Array(&type_standard__Array__nit__MProject);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[MProject]>*/
}
self->attrs[COLOR_nit__mproject__Model___mprojects].val = var; /* _mprojects on <self:Model exact> */
var1 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMap__standard__String__nit__MProject);
{
standard___standard__HashMap___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashMap#init on <var1:MultiHashMap[String, MProject]>*/
}
self->attrs[COLOR_nit__mproject__Model___mproject_by_name].val = var1; /* _mproject_by_name on <self:Model exact> */
var2 = NEW_standard__Array(&type_standard__Array__nit__MModule);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[MModule]>*/
}
self->attrs[COLOR_nit__mmodule__Model___mmodules].val = var2; /* _mmodules on <self:Model exact> */
var3 = NEW_poset__POSet(&type_poset__POSet__nit__MModule);
{
{ /* Inline kernel#Object#init (var3) on <var3:POSet[MModule]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__mmodule__Model___mmodule_importation_hierarchy].val = var3; /* _mmodule_importation_hierarchy on <self:Model exact> */
var4 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMap__standard__String__nit__MModule);
{
standard___standard__HashMap___standard__kernel__Object__init(var4); /* Direct call hash_collection#HashMap#init on <var4:MultiHashMap[String, MModule]>*/
}
self->attrs[COLOR_nit__mmodule__Model___mmodules_by_name].val = var4; /* _mmodules_by_name on <self:Model exact> */
var5 = NEW_standard__Array(&type_standard__Array__nit__MClass);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[MClass]>*/
}
self->attrs[COLOR_nit__model__Model___mclasses].val = var5; /* _mclasses on <self:Model exact> */
var6 = NEW_standard__Array(&type_standard__Array__nit__MProperty);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[MProperty]>*/
}
self->attrs[COLOR_nit__model__Model___mproperties].val = var6; /* _mproperties on <self:Model exact> */
var7 = NEW_poset__POSet(&type_poset__POSet__nit__MClassDef);
{
{ /* Inline kernel#Object#init (var7) on <var7:POSet[MClassDef]> */
RET_LABEL8:(void)0;
}
}
self->attrs[COLOR_nit__model__Model___mclassdef_hierarchy].val = var7; /* _mclassdef_hierarchy on <self:Model exact> */
var9 = NEW_poset__POSet(&type_poset__POSet__nit__MClassType);
{
{ /* Inline kernel#Object#init (var9) on <var9:POSet[MClassType]> */
RET_LABEL10:(void)0;
}
}
self->attrs[COLOR_nit__model__Model___intro_mtype_specialization_hierarchy].val = var9; /* _intro_mtype_specialization_hierarchy on <self:Model exact> */
var11 = NEW_poset__POSet(&type_poset__POSet__nit__MClassType);
{
{ /* Inline kernel#Object#init (var11) on <var11:POSet[MClassType]> */
RET_LABEL12:(void)0;
}
}
self->attrs[COLOR_nit__model__Model___full_mtype_specialization_hierarchy].val = var11; /* _full_mtype_specialization_hierarchy on <self:Model exact> */
var13 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMap__standard__String__nit__MClass);
{
standard___standard__HashMap___standard__kernel__Object__init(var13); /* Direct call hash_collection#HashMap#init on <var13:MultiHashMap[String, MClass]>*/
}
self->attrs[COLOR_nit__model__Model___mclasses_by_name].val = var13; /* _mclasses_by_name on <self:Model exact> */
var14 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMap__standard__String__nit__MProperty);
{
standard___standard__HashMap___standard__kernel__Object__init(var14); /* Direct call hash_collection#HashMap#init on <var14:MultiHashMap[String, MProperty]>*/
}
self->attrs[COLOR_nit__model__Model___mproperties_by_name].val = var14; /* _mproperties_by_name on <self:Model exact> */
var15 = NEW_nit__MNullType(&type_nit__MNullType);
{
((void (*)(val* self, val* p0))(var15->class->vft[COLOR_nit__model__MNullType__model_61d]))(var15, self) /* model= on <var15:MNullType>*/;
}
{
((void (*)(val* self))(var15->class->vft[COLOR_standard__kernel__Object__init]))(var15) /* init on <var15:MNullType>*/;
}
self->attrs[COLOR_nit__model__Model___null_type].val = var15; /* _null_type on <self:Model exact> */
return self;
}
/* runtime class nit__MEntity */
/* allocate MEntity */
val* NEW_nit__MEntity(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MEntity is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__MConcern */
/* allocate MConcern */
val* NEW_nit__MConcern(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MConcern is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__MVisibility */
const struct class class_nit__MVisibility = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model_base:MVisibility:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model_base:MVisibility:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model_base:MVisibility:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model_base:MVisibility:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model_base:MVisibility:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to model_base:MVisibility:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model_base:MVisibility:kernel#Object#sys */
(nitmethod_t)nit___nit__MVisibility___standard__kernel__Object__init, /* pointer to model_base:MVisibility:model_base#MVisibility#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to model_base:MVisibility:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__MVisibility___standard__string__Object__to_s, /* pointer to model_base:MVisibility:model_base#MVisibility#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model_base:MVisibility:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model_base:MVisibility:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model_base:MVisibility:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model_base:MVisibility:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to model_base:MVisibility:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to model_base:MVisibility:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model_base:MVisibility:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to model_base:MVisibility:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to model_base:MVisibility:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to model_base:MVisibility:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to model_base:MVisibility:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to model_base:MVisibility:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to model_base:MVisibility:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to model_base:MVisibility:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to model_base:MVisibility:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to model_base:MVisibility:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to model_base:MVisibility:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to model_base:MVisibility:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to model_base:MVisibility:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to model_base:MVisibility:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to model_base:MVisibility:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to model_base:MVisibility:model#Object#extern_kind */
(nitmethod_t)nit___nit__MVisibility___standard__kernel__Comparable___60d, /* pointer to model_base:MVisibility:model_base#MVisibility#< */
(nitmethod_t)standard___standard__Comparable____60d_61d, /* pointer to model_base:MVisibility:kernel#Comparable#<= */
(nitmethod_t)standard___standard__Comparable____62d_61d, /* pointer to model_base:MVisibility:kernel#Comparable#>= */
(nitmethod_t)standard___standard__Comparable____62d, /* pointer to model_base:MVisibility:kernel#Comparable#> */
(nitmethod_t)standard___standard__Comparable____60d_61d_62d, /* pointer to model_base:MVisibility:kernel#Comparable#<=> */
(nitmethod_t)nit___nit__MVisibility___to_s_61d, /* pointer to model_base:MVisibility:model_base#MVisibility#to_s= */
(nitmethod_t)nit___nit__MVisibility___level, /* pointer to model_base:MVisibility:model_base#MVisibility#level */
(nitmethod_t)nit___nit__MVisibility___level_61d, /* pointer to model_base:MVisibility:model_base#MVisibility#level= */
(nitmethod_t)standard___standard__Object___init, /* pointer to model_base:MVisibility:kernel#Object#init */
}
};
/* allocate MVisibility */
val* NEW_nit__MVisibility(const struct type* type) {
val* self /* : MVisibility */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MVisibility;
return self;
}
/* runtime class more_collections__MultiHashMap */
const struct class class_more_collections__MultiHashMap = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to more_collections:MultiHashMap:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to more_collections:MultiHashMap:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to more_collections:MultiHashMap:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to more_collections:MultiHashMap:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to more_collections:MultiHashMap:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to more_collections:MultiHashMap:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to more_collections:MultiHashMap:kernel#Object#sys */
(nitmethod_t)standard___standard__HashMap___standard__kernel__Object__init, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to more_collections:MultiHashMap:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to more_collections:MultiHashMap:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to more_collections:MultiHashMap:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to more_collections:MultiHashMap:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to more_collections:MultiHashMap:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to more_collections:MultiHashMap:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to more_collections:MultiHashMap:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to more_collections:MultiHashMap:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to more_collections:MultiHashMap:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to more_collections:MultiHashMap:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to more_collections:MultiHashMap:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to more_collections:MultiHashMap:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to more_collections:MultiHashMap:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to more_collections:MultiHashMap:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to more_collections:MultiHashMap:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to more_collections:MultiHashMap:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to more_collections:MultiHashMap:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to more_collections:MultiHashMap:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to more_collections:MultiHashMap:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to more_collections:MultiHashMap:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to more_collections:MultiHashMap:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to more_collections:MultiHashMap:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to more_collections:MultiHashMap:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to more_collections:MultiHashMap:model#Object#extern_kind */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#[] */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#get_or_null */
(nitmethod_t)standard___standard__MapRead___has_key, /* pointer to more_collections:MultiHashMap:abstract_collection#MapRead#has_key */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__iterator, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#iterator */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__values, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#values */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__keys, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#keys */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__is_empty, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#is_empty */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__length, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#length */
(nitmethod_t)more_collections___more_collections__MultiHashMap___standard__abstract_collection__MapRead__provide_default_value, /* pointer to more_collections:MultiHashMap:more_collections#MultiHashMap#provide_default_value */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#[]= */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__Map__clear, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#clear */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___index_at, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#index_at */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___node_at, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#node_at */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___node_at_idx, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#node_at_idx */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___store, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#store */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___remove_node, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#remove_node */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___raz, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#raz */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___enlarge, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#enlarge */
(nitmethod_t)standard___standard__Object___init, /* pointer to more_collections:MultiHashMap:kernel#Object#init */
(nitmethod_t)more_collections___more_collections__MultiHashMap___add_one, /* pointer to more_collections:MultiHashMap:more_collections#MultiHashMap#add_one */
}
};
/* allocate MultiHashMap[nullable Object, nullable Object] */
val* NEW_more_collections__MultiHashMap(const struct type* type) {
val* self /* : MultiHashMap[nullable Object, nullable Object] */;
val* var /* : null */;
long var1 /* : Int */;
long var2 /* : Int */;
val* var3 /* : null */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : HashMapKeys[nullable Object, Array[nullable Object]] */;
val* var8 /* : HashMapValues[nullable Object, Array[nullable Object]] */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_more_collections__MultiHashMap;
var = NULL;
self->attrs[COLOR_standard__hash_collection__HashCollection___array].val = var; /* _array on <self:MultiHashMap[nullable Object, nullable Object] exact> */
var1 = 0;
self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l = var1; /* _capacity on <self:MultiHashMap[nullable Object, nullable Object] exact> */
var2 = 0;
self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = var2; /* _the_length on <self:MultiHashMap[nullable Object, nullable Object] exact> */
var3 = NULL;
self->attrs[COLOR_standard__hash_collection__HashCollection___first_item].val = var3; /* _first_item on <self:MultiHashMap[nullable Object, nullable Object] exact> */
var4 = NULL;
self->attrs[COLOR_standard__hash_collection__HashCollection___last_item].val = var4; /* _last_item on <self:MultiHashMap[nullable Object, nullable Object] exact> */
var5 = NULL;
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_key].val = var5; /* _last_accessed_key on <self:MultiHashMap[nullable Object, nullable Object] exact> */
var6 = NULL;
self->attrs[COLOR_standard__hash_collection__HashCollection___last_accessed_node].val = var6; /* _last_accessed_node on <self:MultiHashMap[nullable Object, nullable Object] exact> */
var7 = NEW_standard__hash_collection__HashMapKeys(self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapKeys__standard__HashMap___35dK__standard__HashMap___35dV]);
{
((void (*)(val* self, val* p0))(var7->class->vft[COLOR_standard__hash_collection__HashMapKeys__map_61d]))(var7, self) /* map= on <var7:HashMapKeys[nullable Object, Array[nullable Object]]>*/;
}
{
((void (*)(val* self))(var7->class->vft[COLOR_standard__kernel__Object__init]))(var7) /* init on <var7:HashMapKeys[nullable Object, Array[nullable Object]]>*/;
}
self->attrs[COLOR_standard__hash_collection__HashMap___keys].val = var7; /* _keys on <self:MultiHashMap[nullable Object, nullable Object] exact> */
var8 = NEW_standard__hash_collection__HashMapValues(self->type->resolution_table->types[COLOR_standard__hash_collection__HashMapValues__standard__HashMap___35dK__standard__HashMap___35dV]);
{
((void (*)(val* self, val* p0))(var8->class->vft[COLOR_standard__hash_collection__HashMapValues__map_61d]))(var8, self) /* map= on <var8:HashMapValues[nullable Object, Array[nullable Object]]>*/;
}
{
((void (*)(val* self))(var8->class->vft[COLOR_standard__kernel__Object__init]))(var8) /* init on <var8:HashMapValues[nullable Object, Array[nullable Object]]>*/;
}
self->attrs[COLOR_standard__hash_collection__HashMap___values].val = var8; /* _values on <self:MultiHashMap[nullable Object, nullable Object] exact> */
return self;
}
/* runtime class more_collections__HashMap2 */
const struct class class_more_collections__HashMap2 = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to more_collections:HashMap2:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to more_collections:HashMap2:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to more_collections:HashMap2:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to more_collections:HashMap2:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to more_collections:HashMap2:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to more_collections:HashMap2:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to more_collections:HashMap2:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to more_collections:HashMap2:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to more_collections:HashMap2:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to more_collections:HashMap2:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to more_collections:HashMap2:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to more_collections:HashMap2:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to more_collections:HashMap2:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to more_collections:HashMap2:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to more_collections:HashMap2:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to more_collections:HashMap2:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to more_collections:HashMap2:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to more_collections:HashMap2:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to more_collections:HashMap2:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to more_collections:HashMap2:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to more_collections:HashMap2:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to more_collections:HashMap2:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to more_collections:HashMap2:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to more_collections:HashMap2:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to more_collections:HashMap2:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to more_collections:HashMap2:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to more_collections:HashMap2:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to more_collections:HashMap2:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to more_collections:HashMap2:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to more_collections:HashMap2:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to more_collections:HashMap2:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to more_collections:HashMap2:model#Object#extern_kind */
(nitmethod_t)more_collections___more_collections__HashMap2___level1, /* pointer to more_collections:HashMap2:more_collections#HashMap2#level1 */
(nitmethod_t)more_collections___more_collections__HashMap2____91d_93d, /* pointer to more_collections:HashMap2:more_collections#HashMap2#[] */
(nitmethod_t)more_collections___more_collections__HashMap2____91d_93d_61d, /* pointer to more_collections:HashMap2:more_collections#HashMap2#[]= */
}
};
/* allocate HashMap2[nullable Object, nullable Object, nullable Object] */
val* NEW_more_collections__HashMap2(const struct type* type) {
val* self /* : HashMap2[nullable Object, nullable Object, nullable Object] */;
val* var /* : HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_more_collections__HashMap2;
var = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__more_collections__HashMap2___35dK1__standard__HashMap__more_collections__HashMap2___35dK2__more_collections__HashMap2___35dV]);
{
standard___standard__HashMap___standard__kernel__Object__init(var); /* Direct call hash_collection#HashMap#init on <var:HashMap[nullable Object, HashMap[nullable Object, nullable Object]]>*/
}
self->attrs[COLOR_more_collections__HashMap2___level1].val = var; /* _level1 on <self:HashMap2[nullable Object, nullable Object, nullable Object] exact> */
return self;
}
/* runtime class more_collections__HashMap3 */
const struct class class_more_collections__HashMap3 = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to more_collections:HashMap3:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to more_collections:HashMap3:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to more_collections:HashMap3:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to more_collections:HashMap3:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to more_collections:HashMap3:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to more_collections:HashMap3:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to more_collections:HashMap3:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to more_collections:HashMap3:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to more_collections:HashMap3:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to more_collections:HashMap3:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to more_collections:HashMap3:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to more_collections:HashMap3:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to more_collections:HashMap3:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to more_collections:HashMap3:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to more_collections:HashMap3:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to more_collections:HashMap3:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to more_collections:HashMap3:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to more_collections:HashMap3:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to more_collections:HashMap3:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to more_collections:HashMap3:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to more_collections:HashMap3:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to more_collections:HashMap3:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to more_collections:HashMap3:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to more_collections:HashMap3:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to more_collections:HashMap3:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to more_collections:HashMap3:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to more_collections:HashMap3:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to more_collections:HashMap3:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to more_collections:HashMap3:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to more_collections:HashMap3:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to more_collections:HashMap3:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to more_collections:HashMap3:model#Object#extern_kind */
(nitmethod_t)more_collections___more_collections__HashMap3___level1, /* pointer to more_collections:HashMap3:more_collections#HashMap3#level1 */
(nitmethod_t)more_collections___more_collections__HashMap3____91d_93d, /* pointer to more_collections:HashMap3:more_collections#HashMap3#[] */
(nitmethod_t)more_collections___more_collections__HashMap3____91d_93d_61d, /* pointer to more_collections:HashMap3:more_collections#HashMap3#[]= */
}
};
/* allocate HashMap3[nullable Object, nullable Object, nullable Object, nullable Object] */
val* NEW_more_collections__HashMap3(const struct type* type) {
val* self /* : HashMap3[nullable Object, nullable Object, nullable Object, nullable Object] */;
val* var /* : HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_more_collections__HashMap3;
var = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__more_collections__HashMap3___35dK1__more_collections__HashMap2__more_collections__HashMap3___35dK2__more_collections__HashMap3___35dK3__more_collections__HashMap3___35dV]);
{
standard___standard__HashMap___standard__kernel__Object__init(var); /* Direct call hash_collection#HashMap#init on <var:HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]]>*/
}
self->attrs[COLOR_more_collections__HashMap3___level1].val = var; /* _level1 on <self:HashMap3[nullable Object, nullable Object, nullable Object, nullable Object] exact> */
return self;
}
/* runtime class more_collections__DefaultMap */
/* allocate DefaultMap[nullable Object, nullable Object] */
val* NEW_more_collections__DefaultMap(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "DefaultMap is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class poset__POSet */
const struct class class_poset__POSet = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to poset:POSet:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to poset:POSet:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to poset:POSet:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to poset:POSet:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to poset:POSet:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to poset:POSet:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to poset:POSet:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to poset:POSet:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to poset:POSet:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to poset:POSet:string#Collection#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to poset:POSet:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to poset:POSet:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to poset:POSet:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to poset:POSet:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to poset:POSet:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to poset:POSet:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to poset:POSet:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to poset:POSet:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to poset:POSet:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to poset:POSet:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to poset:POSet:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to poset:POSet:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to poset:POSet:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to poset:POSet:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to poset:POSet:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to poset:POSet:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to poset:POSet:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to poset:POSet:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to poset:POSet:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to poset:POSet:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to poset:POSet:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to poset:POSet:model#Object#extern_kind */
(nitmethod_t)poset___poset__POSet___standard__sorter__Comparator__compare, /* pointer to poset:POSet:poset#POSet#compare */
(nitmethod_t)standard___standard__Comparator___sort, /* pointer to poset:POSet:sorter#Comparator#sort */
(nitmethod_t)standard___standard__Comparator___sub_sort, /* pointer to poset:POSet:sorter#Comparator#sub_sort */
(nitmethod_t)standard___standard__Comparator___quick_sort, /* pointer to poset:POSet:sorter#Comparator#quick_sort */
(nitmethod_t)standard___standard__Comparator___bubble_sort, /* pointer to poset:POSet:sorter#Comparator#bubble_sort */
(nitmethod_t)poset___poset__POSet___standard__abstract_collection__Collection__iterator, /* pointer to poset:POSet:poset#POSet#iterator */
(nitmethod_t)standard___standard__Collection___is_empty, /* pointer to poset:POSet:abstract_collection#Collection#is_empty */
(nitmethod_t)standard___standard__Collection___length, /* pointer to poset:POSet:abstract_collection#Collection#length */
(nitmethod_t)poset___poset__POSet___standard__abstract_collection__Collection__has, /* pointer to poset:POSet:poset#POSet#has */
(nitmethod_t)standard___standard__Collection___first, /* pointer to poset:POSet:abstract_collection#Collection#first */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to poset:POSet:abstract_collection#Collection#has_all */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to poset:POSet:array#Collection#to_a */
(nitmethod_t)standard__string___Collection___join, /* pointer to poset:POSet:string#Collection#join */
(nitmethod_t)poset___poset__POSet___elements, /* pointer to poset:POSet:poset#POSet#elements */
(nitmethod_t)poset___poset__POSet___add_node, /* pointer to poset:POSet:poset#POSet#add_node */
(nitmethod_t)poset___poset__POSet____91d_93d, /* pointer to poset:POSet:poset#POSet#[] */
(nitmethod_t)poset___poset__POSet___add_edge, /* pointer to poset:POSet:poset#POSet#add_edge */
(nitmethod_t)poset___poset__POSet___linearize, /* pointer to poset:POSet:poset#POSet#linearize */
}
};
/* allocate POSet[nullable Object] */
val* NEW_poset__POSet(const struct type* type) {
val* self /* : POSet[nullable Object] */;
val* var /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_poset__POSet;
var = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__poset__POSet___35dE__poset__POSetElement__poset__POSet___35dE]);
{
standard___standard__HashMap___standard__kernel__Object__init(var); /* Direct call hash_collection#HashMap#init on <var:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
self->attrs[COLOR_poset__POSet___elements].val = var; /* _elements on <self:POSet[nullable Object] exact> */
return self;
}
/* runtime class poset__POSetElement */
const struct class class_poset__POSetElement = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to poset:POSetElement:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to poset:POSetElement:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to poset:POSetElement:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to poset:POSetElement:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to poset:POSetElement:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to poset:POSetElement:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to poset:POSetElement:kernel#Object#sys */
(nitmethod_t)poset___poset__POSetElement___standard__kernel__Object__init, /* pointer to poset:POSetElement:poset#POSetElement#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to poset:POSetElement:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to poset:POSetElement:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to poset:POSetElement:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to poset:POSetElement:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to poset:POSetElement:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to poset:POSetElement:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to poset:POSetElement:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to poset:POSetElement:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to poset:POSetElement:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to poset:POSetElement:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to poset:POSetElement:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to poset:POSetElement:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to poset:POSetElement:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to poset:POSetElement:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to poset:POSetElement:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to poset:POSetElement:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to poset:POSetElement:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to poset:POSetElement:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to poset:POSetElement:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to poset:POSetElement:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to poset:POSetElement:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to poset:POSetElement:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to poset:POSetElement:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to poset:POSetElement:model#Object#extern_kind */
(nitmethod_t)poset___poset__POSetElement___poset, /* pointer to poset:POSetElement:poset#POSetElement#poset */
(nitmethod_t)poset___poset__POSetElement___poset_61d, /* pointer to poset:POSetElement:poset#POSetElement#poset= */
(nitmethod_t)poset___poset__POSetElement___element, /* pointer to poset:POSetElement:poset#POSetElement#element */
(nitmethod_t)poset___poset__POSetElement___element_61d, /* pointer to poset:POSetElement:poset#POSetElement#element= */
(nitmethod_t)poset___poset__POSetElement___tos, /* pointer to poset:POSetElement:poset#POSetElement#tos */
(nitmethod_t)poset___poset__POSetElement___froms, /* pointer to poset:POSetElement:poset#POSetElement#froms */
(nitmethod_t)poset___poset__POSetElement___dtos, /* pointer to poset:POSetElement:poset#POSetElement#dtos */
(nitmethod_t)poset___poset__POSetElement___dfroms, /* pointer to poset:POSetElement:poset#POSetElement#dfroms */
(nitmethod_t)poset___poset__POSetElement___count, /* pointer to poset:POSetElement:poset#POSetElement#count */
(nitmethod_t)poset___poset__POSetElement___count_61d, /* pointer to poset:POSetElement:poset#POSetElement#count= */
(nitmethod_t)poset___poset__POSetElement___greaters, /* pointer to poset:POSetElement:poset#POSetElement#greaters */
(nitmethod_t)poset___poset__POSetElement___direct_greaters, /* pointer to poset:POSetElement:poset#POSetElement#direct_greaters */
(nitmethod_t)poset___poset__POSetElement___smallers, /* pointer to poset:POSetElement:poset#POSetElement#smallers */
(nitmethod_t)poset___poset__POSetElement___direct_smallers, /* pointer to poset:POSetElement:poset#POSetElement#direct_smallers */
(nitmethod_t)poset___poset__POSetElement____60d_61d, /* pointer to poset:POSetElement:poset#POSetElement#<= */
(nitmethod_t)poset___poset__POSetElement____60d, /* pointer to poset:POSetElement:poset#POSetElement#< */
(nitmethod_t)standard___standard__Object___init, /* pointer to poset:POSetElement:kernel#Object#init */
}
};
/* allocate POSetElement[nullable Object] */
val* NEW_poset__POSetElement(const struct type* type) {
val* self /* : POSetElement[nullable Object] */;
val* var /* : HashSet[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
val* var2 /* : HashSet[nullable Object] */;
val* var3 /* : HashSet[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_poset__POSetElement;
var = NEW_standard__HashSet(self->type->resolution_table->types[COLOR_standard__HashSet__poset__POSetElement___35dE]);
{
standard___standard__HashSet___standard__kernel__Object__init(var); /* Direct call hash_collection#HashSet#init on <var:HashSet[nullable Object]>*/
}
self->attrs[COLOR_poset__POSetElement___tos].val = var; /* _tos on <self:POSetElement[nullable Object] exact> */
var1 = NEW_standard__HashSet(self->type->resolution_table->types[COLOR_standard__HashSet__poset__POSetElement___35dE]);
{
standard___standard__HashSet___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashSet#init on <var1:HashSet[nullable Object]>*/
}
self->attrs[COLOR_poset__POSetElement___froms].val = var1; /* _froms on <self:POSetElement[nullable Object] exact> */
var2 = NEW_standard__HashSet(self->type->resolution_table->types[COLOR_standard__HashSet__poset__POSetElement___35dE]);
{
standard___standard__HashSet___standard__kernel__Object__init(var2); /* Direct call hash_collection#HashSet#init on <var2:HashSet[nullable Object]>*/
}
self->attrs[COLOR_poset__POSetElement___dtos].val = var2; /* _dtos on <self:POSetElement[nullable Object] exact> */
var3 = NEW_standard__HashSet(self->type->resolution_table->types[COLOR_standard__HashSet__poset__POSetElement___35dE]);
{
standard___standard__HashSet___standard__kernel__Object__init(var3); /* Direct call hash_collection#HashSet#init on <var3:HashSet[nullable Object]>*/
}
self->attrs[COLOR_poset__POSetElement___dfroms].val = var3; /* _dfroms on <self:POSetElement[nullable Object] exact> */
return self;
}
/* runtime class nit__MDoc */
const struct class class_nit__MDoc = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to mdoc:MDoc:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to mdoc:MDoc:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to mdoc:MDoc:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to mdoc:MDoc:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to mdoc:MDoc:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to mdoc:MDoc:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to mdoc:MDoc:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to mdoc:MDoc:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to mdoc:MDoc:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to mdoc:MDoc:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to mdoc:MDoc:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to mdoc:MDoc:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to mdoc:MDoc:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to mdoc:MDoc:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to mdoc:MDoc:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to mdoc:MDoc:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to mdoc:MDoc:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to mdoc:MDoc:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to mdoc:MDoc:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to mdoc:MDoc:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to mdoc:MDoc:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to mdoc:MDoc:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to mdoc:MDoc:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to mdoc:MDoc:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to mdoc:MDoc:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to mdoc:MDoc:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to mdoc:MDoc:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to mdoc:MDoc:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to mdoc:MDoc:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to mdoc:MDoc:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to mdoc:MDoc:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to mdoc:MDoc:model#Object#extern_kind */
(nitmethod_t)nit___nit__MDoc___content, /* pointer to mdoc:MDoc:mdoc#MDoc#content */
(nitmethod_t)nit___nit__MDoc___original_mentity_61d, /* pointer to mdoc:MDoc:mdoc#MDoc#original_mentity= */
}
};
/* allocate MDoc */
val* NEW_nit__MDoc(const struct type* type) {
val* self /* : MDoc */;
val* var /* : Array[String] */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MDoc;
var = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[String]>*/
}
self->attrs[COLOR_nit__mdoc__MDoc___content].val = var; /* _content on <self:MDoc exact> */
var1 = NULL;
self->attrs[COLOR_nit__mdoc__MDoc___original_mentity].val = var1; /* _original_mentity on <self:MDoc exact> */
return self;
}
/* runtime class nit__MDeprecationInfo */
const struct class class_nit__MDeprecationInfo = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to mdoc:MDeprecationInfo:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to mdoc:MDeprecationInfo:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to mdoc:MDeprecationInfo:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to mdoc:MDeprecationInfo:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to mdoc:MDeprecationInfo:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to mdoc:MDeprecationInfo:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to mdoc:MDeprecationInfo:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to mdoc:MDeprecationInfo:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to mdoc:MDeprecationInfo:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to mdoc:MDeprecationInfo:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to mdoc:MDeprecationInfo:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to mdoc:MDeprecationInfo:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to mdoc:MDeprecationInfo:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to mdoc:MDeprecationInfo:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to mdoc:MDeprecationInfo:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to mdoc:MDeprecationInfo:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to mdoc:MDeprecationInfo:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to mdoc:MDeprecationInfo:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to mdoc:MDeprecationInfo:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to mdoc:MDeprecationInfo:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to mdoc:MDeprecationInfo:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to mdoc:MDeprecationInfo:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to mdoc:MDeprecationInfo:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to mdoc:MDeprecationInfo:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to mdoc:MDeprecationInfo:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to mdoc:MDeprecationInfo:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to mdoc:MDeprecationInfo:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to mdoc:MDeprecationInfo:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to mdoc:MDeprecationInfo:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to mdoc:MDeprecationInfo:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to mdoc:MDeprecationInfo:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to mdoc:MDeprecationInfo:model#Object#extern_kind */
(nitmethod_t)nit___nit__MDeprecationInfo___mdoc, /* pointer to mdoc:MDeprecationInfo:mdoc#MDeprecationInfo#mdoc */
(nitmethod_t)nit___nit__MDeprecationInfo___mdoc_61d, /* pointer to mdoc:MDeprecationInfo:mdoc#MDeprecationInfo#mdoc= */
}
};
/* allocate MDeprecationInfo */
val* NEW_nit__MDeprecationInfo(const struct type* type) {
val* self /* : MDeprecationInfo */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MDeprecationInfo;
var = NULL;
self->attrs[COLOR_nit__mdoc__MDeprecationInfo___mdoc].val = var; /* _mdoc on <self:MDeprecationInfo exact> */
return self;
}
/* runtime class ordered_tree__OrderedTree */
/* allocate OrderedTree[Object] */
val* NEW_ordered_tree__OrderedTree(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "OrderedTree is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class ordered_tree__OrderedTreeIterator */
/* allocate OrderedTreeIterator[Object] */
val* NEW_ordered_tree__OrderedTreeIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "OrderedTreeIterator is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__Message */
const struct class class_nit__Message = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to toolcontext:Message:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to toolcontext:Message:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to toolcontext:Message:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to toolcontext:Message:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to toolcontext:Message:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to toolcontext:Message:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to toolcontext:Message:kernel#Object#sys */
(nitmethod_t)nit___nit__Message___standard__kernel__Object__init, /* pointer to toolcontext:Message:toolcontext#Message#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to toolcontext:Message:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__Message___standard__string__Object__to_s, /* pointer to toolcontext:Message:toolcontext#Message#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to toolcontext:Message:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to toolcontext:Message:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to toolcontext:Message:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to toolcontext:Message:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to toolcontext:Message:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to toolcontext:Message:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to toolcontext:Message:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to toolcontext:Message:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to toolcontext:Message:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to toolcontext:Message:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to toolcontext:Message:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to toolcontext:Message:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to toolcontext:Message:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to toolcontext:Message:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to toolcontext:Message:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to toolcontext:Message:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to toolcontext:Message:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to toolcontext:Message:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to toolcontext:Message:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to toolcontext:Message:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to toolcontext:Message:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to toolcontext:Message:model#Object#extern_kind */
(nitmethod_t)nit___nit__Message___standard__kernel__Comparable___60d, /* pointer to toolcontext:Message:toolcontext#Message#< */
(nitmethod_t)standard___standard__Comparable____60d_61d, /* pointer to toolcontext:Message:kernel#Comparable#<= */
(nitmethod_t)standard___standard__Comparable____62d_61d, /* pointer to toolcontext:Message:kernel#Comparable#>= */
(nitmethod_t)standard___standard__Comparable____62d, /* pointer to toolcontext:Message:kernel#Comparable#> */
(nitmethod_t)standard___standard__Comparable____60d_61d_62d, /* pointer to toolcontext:Message:kernel#Comparable#<=> */
(nitmethod_t)nit___nit__Message___location, /* pointer to toolcontext:Message:toolcontext#Message#location */
(nitmethod_t)nit___nit__Message___location_61d, /* pointer to toolcontext:Message:toolcontext#Message#location= */
(nitmethod_t)nit___nit__Message___tag, /* pointer to toolcontext:Message:toolcontext#Message#tag */
(nitmethod_t)nit___nit__Message___tag_61d, /* pointer to toolcontext:Message:toolcontext#Message#tag= */
(nitmethod_t)nit___nit__Message___text, /* pointer to toolcontext:Message:toolcontext#Message#text */
(nitmethod_t)nit___nit__Message___text_61d, /* pointer to toolcontext:Message:toolcontext#Message#text= */
(nitmethod_t)nit___nit__Message___to_color_string, /* pointer to toolcontext:Message:toolcontext#Message#to_color_string */
(nitmethod_t)standard___standard__Object___init, /* pointer to toolcontext:Message:kernel#Object#init */
}
};
/* allocate Message */
val* NEW_nit__Message(const struct type* type) {
val* self /* : Message */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__Message;
return self;
}
