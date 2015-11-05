#include "nit__nith.classes.0.h"
const struct class *class_info[4] = {
NULL,
&class_standard__Int,
&class_standard__Char,
&class_standard__Bool,
};
const struct type *type_info[4] = {
NULL,
&type_standard__Int,
&type_standard__Char,
&type_standard__Bool,
};
/* runtime class nit__modelize_property__ModelizePropertyPhase */
const struct class class_nit__modelize_property__ModelizePropertyPhase = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to modelize_property:ModelizePropertyPhase:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to modelize_property:ModelizePropertyPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to modelize_property:ModelizePropertyPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to modelize_property:ModelizePropertyPhase:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#disabled */
(nitmethod_t)nit__modelbuilder___Phase___process_mainmodule, /* pointer to modelize_property:ModelizePropertyPhase:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)nit__modelize_property___nit__modelize_property__ModelizePropertyPhase___nit__phase__Phase__process_nmodule, /* pointer to modelize_property:ModelizePropertyPhase:modelize_property#ModelizePropertyPhase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nit___nit__Phase___process_npropdef, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#process_npropdef */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#disabled= */
}
};
/* allocate ModelizePropertyPhase */
val* NEW_nit__modelize_property__ModelizePropertyPhase(const struct type* type) {
val* self /* : ModelizePropertyPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__modelize_property__ModelizePropertyPhase;
self->attrs[COLOR_nit__phase__Phase___disabled].s = 0; /* _disabled on <self:ModelizePropertyPhase exact> */
return self;
}
/* runtime class nit__modelize_class__ModelizeClassPhase */
const struct class class_nit__modelize_class__ModelizeClassPhase = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to modelize_class:ModelizeClassPhase:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to modelize_class:ModelizeClassPhase:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to modelize_class:ModelizeClassPhase:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to modelize_class:ModelizeClassPhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to modelize_class:ModelizeClassPhase:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to modelize_class:ModelizeClassPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to modelize_class:ModelizeClassPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to modelize_class:ModelizeClassPhase:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#disabled */
(nitmethod_t)nit__modelbuilder___Phase___process_mainmodule, /* pointer to modelize_class:ModelizeClassPhase:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)nit__modelize_class___nit__modelize_class__ModelizeClassPhase___nit__phase__Phase__process_nmodule, /* pointer to modelize_class:ModelizeClassPhase:modelize_class#ModelizeClassPhase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nit___nit__Phase___process_npropdef, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#process_npropdef */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#disabled= */
}
};
/* allocate ModelizeClassPhase */
val* NEW_nit__modelize_class__ModelizeClassPhase(const struct type* type) {
val* self /* : ModelizeClassPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__modelize_class__ModelizeClassPhase;
self->attrs[COLOR_nit__phase__Phase___disabled].s = 0; /* _disabled on <self:ModelizeClassPhase exact> */
return self;
}
/* runtime class nit__ModulePath */
const struct class class_nit__ModulePath = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__ModulePath___standard__kernel__Object__init, /* pointer to loader:ModulePath:loader#ModulePath#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to loader:ModulePath:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to loader:ModulePath:kernel#Object#sys */
(nitmethod_t)nit___nit__ModulePath___standard__string__Object__to_s, /* pointer to loader:ModulePath:loader#ModulePath#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to loader:ModulePath:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to loader:ModulePath:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to loader:ModulePath:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to loader:ModulePath:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to loader:ModulePath:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to loader:ModulePath:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to loader:ModulePath:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to loader:ModulePath:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to loader:ModulePath:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to loader:ModulePath:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to loader:ModulePath:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to loader:ModulePath:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__ModulePath___mmodule, /* pointer to loader:ModulePath:loader#ModulePath#mmodule */
(nitmethod_t)nit___nit__ModulePath___filepath, /* pointer to loader:ModulePath:loader#ModulePath#filepath */
(nitmethod_t)nit___nit__ModulePath___mgroup, /* pointer to loader:ModulePath:loader#ModulePath#mgroup */
(nitmethod_t)nit___nit__ModulePath___name, /* pointer to loader:ModulePath:loader#ModulePath#name */
(nitmethod_t)nit___nit__ModulePath___mmodule_61d, /* pointer to loader:ModulePath:loader#ModulePath#mmodule= */
(nitmethod_t)nit___nit__ModulePath___name_61d, /* pointer to loader:ModulePath:loader#ModulePath#name= */
(nitmethod_t)nit___nit__ModulePath___filepath_61d, /* pointer to loader:ModulePath:loader#ModulePath#filepath= */
(nitmethod_t)nit___nit__ModulePath___mgroup_61d, /* pointer to loader:ModulePath:loader#ModulePath#mgroup= */
(nitmethod_t)standard___standard__Object___init, /* pointer to loader:ModulePath:kernel#Object#init */
}
};
/* allocate ModulePath */
val* NEW_nit__ModulePath(const struct type* type) {
val* self /* : ModulePath */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ModulePath;
return self;
}
/* runtime class nit__ModelBuilder */
const struct class class_nit__ModelBuilder = {
0, /* box_kind */
{
(nitmethod_t)nit__loader___ModelBuilder___standard__kernel__Object__init, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to modelbuilder_base:ModelBuilder:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to modelbuilder_base:ModelBuilder:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to modelbuilder_base:ModelBuilder:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to modelbuilder_base:ModelBuilder:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to modelbuilder_base:ModelBuilder:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to modelbuilder_base:ModelBuilder:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to modelbuilder_base:ModelBuilder:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to modelbuilder_base:ModelBuilder:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to modelbuilder_base:ModelBuilder:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to modelbuilder_base:ModelBuilder:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to modelbuilder_base:ModelBuilder:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to modelbuilder_base:ModelBuilder:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to modelbuilder_base:ModelBuilder:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to modelbuilder_base:ModelBuilder:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to modelbuilder_base:ModelBuilder:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__ModelBuilder___model_61d, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#model= */
(nitmethod_t)nit___nit__ModelBuilder___toolcontext_61d, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#toolcontext= */
(nitmethod_t)nit__loader___ModelBuilder___parse, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#parse */
(nitmethod_t)nit__modelbuilder___ModelBuilder___run_phases, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder#ModelBuilder#run_phases */
(nitmethod_t)nit__loader___ModelBuilder___paths, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#paths */
(nitmethod_t)nit___nit__ModelBuilder___toolcontext, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#toolcontext */
(nitmethod_t)nit__loader___ModelBuilder___load_module, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#load_module */
(nitmethod_t)nit__loader___ModelBuilder___build_module_importation, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#build_module_importation */
(nitmethod_t)nit___nit__ModelBuilder___model, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#model */
(nitmethod_t)nit__loader___ModelBuilder___mmodule2node, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#mmodule2node */
(nitmethod_t)nit__loader___ModelBuilder___identify_file, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#identify_file */
(nitmethod_t)nit__loader___ModelBuilder___mmodule2nmodule, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#mmodule2nmodule */
(nitmethod_t)nit__loader___ModelBuilder___load_module_ast, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#load_module_ast */
(nitmethod_t)nit__loader___ModelBuilder___build_a_mmodule, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#build_a_mmodule */
(nitmethod_t)nit__loader___ModelBuilder___search_mmodule_by_name, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#search_mmodule_by_name */
(nitmethod_t)nit__loader___ModelBuilder___get_mmodule_by_name, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#get_mmodule_by_name */
(nitmethod_t)nit___nit__ModelBuilder___error, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#error */
(nitmethod_t)nit__rapid_type_analysis___ModelBuilder___do_rapid_type_analysis, /* pointer to modelbuilder_base:ModelBuilder:rapid_type_analysis#ModelBuilder#do_rapid_type_analysis */
(nitmethod_t)nit__separate_compiler___ModelBuilder___run_separate_compiler, /* pointer to modelbuilder_base:ModelBuilder:separate_compiler#ModelBuilder#run_separate_compiler */
(nitmethod_t)nit__separate_erasure_compiler___ModelBuilder___run_separate_erasure_compiler, /* pointer to modelbuilder_base:ModelBuilder:separate_erasure_compiler#ModelBuilder#run_separate_erasure_compiler */
(nitmethod_t)nit__loader___ModelBuilder___search_module_in_paths, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#search_module_in_paths */
(nitmethod_t)nit__loader___ModelBuilder___get_mgroup, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#get_mgroup */
(nitmethod_t)nit__loader___ModelBuilder___module_absolute_path, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#module_absolute_path */
(nitmethod_t)nit__loader___ModelBuilder___identified_files_by_path, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#identified_files_by_path */
(nitmethod_t)nit__loader___ModelBuilder___identified_files, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#identified_files */
(nitmethod_t)nit__loader___ModelBuilder___nmodules, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#nmodules */
(nitmethod_t)nit___nit__ModelBuilder___advice, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#advice */
(nitmethod_t)nit__modelize_class___ModelBuilder___build_classes, /* pointer to modelbuilder_base:ModelBuilder:modelize_class#ModelBuilder#build_classes */
(nitmethod_t)nit__modelize_property___ModelBuilder___build_properties, /* pointer to modelbuilder_base:ModelBuilder:modelize_property#ModelBuilder#build_properties */
(nitmethod_t)nit__abstract_compiler___ModelBuilder___write_and_make, /* pointer to modelbuilder_base:ModelBuilder:abstract_compiler#ModelBuilder#write_and_make */
(nitmethod_t)nit__loader___ModelBuilder___mgroups, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#mgroups */
(nitmethod_t)nit__loader___ModelBuilder___load_markdown, /* pointer to modelbuilder_base:ModelBuilder:loader#ModelBuilder#load_markdown */
(nitmethod_t)nit__modelize_class___ModelBuilder___build_a_mclass, /* pointer to modelbuilder_base:ModelBuilder:modelize_class#ModelBuilder#build_a_mclass */
(nitmethod_t)nit__modelize_class___ModelBuilder___build_a_mclassdef, /* pointer to modelbuilder_base:ModelBuilder:modelize_class#ModelBuilder#build_a_mclassdef */
(nitmethod_t)nit__modelize_class___ModelBuilder___collect_a_mclassdef_inheritance, /* pointer to modelbuilder_base:ModelBuilder:modelize_class#ModelBuilder#collect_a_mclassdef_inheritance */
(nitmethod_t)nit__modelize_class___ModelBuilder___check_supertypes, /* pointer to modelbuilder_base:ModelBuilder:modelize_class#ModelBuilder#check_supertypes */
(nitmethod_t)nit___nit__ModelBuilder___resolve_mtype, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#resolve_mtype */
(nitmethod_t)nit___nit__ModelBuilder___try_get_mclass_by_name, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#try_get_mclass_by_name */
(nitmethod_t)nit___nit__ModelBuilder___warning, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#warning */
(nitmethod_t)nit__modelize_class___ModelBuilder___mclassdef2nclassdef, /* pointer to modelbuilder_base:ModelBuilder:modelize_class#ModelBuilder#mclassdef2nclassdef */
(nitmethod_t)nit__modelize_property___ModelBuilder___check_virtual_types_circularity, /* pointer to modelbuilder_base:ModelBuilder:modelize_property#ModelBuilder#check_virtual_types_circularity */
(nitmethod_t)nit__modelize_property___ModelBuilder___process_default_constructors, /* pointer to modelbuilder_base:ModelBuilder:modelize_property#ModelBuilder#process_default_constructors */
(nitmethod_t)nit__modelize_property___ModelBuilder___mpropdef2node, /* pointer to modelbuilder_base:ModelBuilder:modelize_property#ModelBuilder#mpropdef2node */
(nitmethod_t)nit___nit__ModelBuilder___force_get_primitive_method, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#force_get_primitive_method */
(nitmethod_t)nit__separate_compiler___ModelBuilder___nb_invok_by_tables, /* pointer to modelbuilder_base:ModelBuilder:separate_compiler#ModelBuilder#nb_invok_by_tables */
(nitmethod_t)nit__separate_compiler___ModelBuilder___nb_invok_by_direct, /* pointer to modelbuilder_base:ModelBuilder:separate_compiler#ModelBuilder#nb_invok_by_direct */
(nitmethod_t)nit__separate_compiler___ModelBuilder___nb_invok_by_inline, /* pointer to modelbuilder_base:ModelBuilder:separate_compiler#ModelBuilder#nb_invok_by_inline */
(nitmethod_t)nit___nit__ModelBuilder___resolve_mtype_unchecked, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#resolve_mtype_unchecked */
(nitmethod_t)nit___nit__ModelBuilder___check_subtype, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#check_subtype */
(nitmethod_t)nit___nit__ModelBuilder___try_get_mproperty_by_name, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#try_get_mproperty_by_name */
(nitmethod_t)nit__modelize_property___ModelBuilder___mpropdef2npropdef, /* pointer to modelbuilder_base:ModelBuilder:modelize_property#ModelBuilder#mpropdef2npropdef */
(nitmethod_t)nit__modelize_property___ModelBuilder___the_root_init_mmethod, /* pointer to modelbuilder_base:ModelBuilder:modelize_property#ModelBuilder#the_root_init_mmethod */
(nitmethod_t)nit__modelize_property___ModelBuilder___the_root_init_mmethod_61d, /* pointer to modelbuilder_base:ModelBuilder:modelize_property#ModelBuilder#the_root_init_mmethod= */
(nitmethod_t)nit___nit__ModelBuilder___try_get_mproperty_by_name2, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#try_get_mproperty_by_name2 */
(nitmethod_t)nit__modelize_property___ModelBuilder___collect_attr_propdef, /* pointer to modelbuilder_base:ModelBuilder:modelize_property#ModelBuilder#collect_attr_propdef */
(nitmethod_t)nit___nit__ModelBuilder___try_get_mproperty_by_name2_cache, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#try_get_mproperty_by_name2_cache */
(nitmethod_t)nit___nit__ModelBuilder___check_sametype, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#check_sametype */
(nitmethod_t)nit__modelize_property___ModelBuilder___check_visibility, /* pointer to modelbuilder_base:ModelBuilder:modelize_property#ModelBuilder#check_visibility */
(nitmethod_t)nit___nit__ModelBuilder___get_mclass_by_name, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base#ModelBuilder#get_mclass_by_name */
(nitmethod_t)nit__separate_compiler___ModelBuilder___nb_invok_by_tables_61d, /* pointer to modelbuilder_base:ModelBuilder:separate_compiler#ModelBuilder#nb_invok_by_tables= */
(nitmethod_t)nit__separate_compiler___ModelBuilder___nb_invok_by_inline_61d, /* pointer to modelbuilder_base:ModelBuilder:separate_compiler#ModelBuilder#nb_invok_by_inline= */
(nitmethod_t)nit__separate_compiler___ModelBuilder___nb_invok_by_direct_61d, /* pointer to modelbuilder_base:ModelBuilder:separate_compiler#ModelBuilder#nb_invok_by_direct= */
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
self = nit_alloc(sizeof(struct instance) + 16*sizeof(nitattribute_t));
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
self->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_tables].l = 0l; /* _nb_invok_by_tables on <self:ModelBuilder exact> */
self->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_direct].l = 0l; /* _nb_invok_by_direct on <self:ModelBuilder exact> */
self->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_inline].l = 0l; /* _nb_invok_by_inline on <self:ModelBuilder exact> */
return self;
}
/* runtime class nit__ConcernsTree */
/* allocate ConcernsTree */
val* NEW_nit__ConcernsTree(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ConcernsTree is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__model__MClassDefSorter */
const struct class class_nit__model__MClassDefSorter = {
0, /* box_kind */
{
(nitmethod_t)nit__model___nit__model__MClassDefSorter___standard__kernel__Object__init, /* pointer to model:MClassDefSorter:model#MClassDefSorter#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MClassDefSorter:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MClassDefSorter:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to model:MClassDefSorter:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MClassDefSorter:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MClassDefSorter:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MClassDefSorter:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MClassDefSorter:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MClassDefSorter:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MClassDefSorter:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MClassDefSorter:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MClassDefSorter:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MClassDefSorter:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model:MClassDefSorter:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model:MClassDefSorter:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model:MClassDefSorter:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Comparator___sort, /* pointer to model:MClassDefSorter:sorter#Comparator#sort */
(nitmethod_t)standard___standard__Comparator___sub_sort, /* pointer to model:MClassDefSorter:sorter#Comparator#sub_sort */
(nitmethod_t)standard___standard__Comparator___quick_sort, /* pointer to model:MClassDefSorter:sorter#Comparator#quick_sort */
(nitmethod_t)standard___standard__Comparator___bubble_sort, /* pointer to model:MClassDefSorter:sorter#Comparator#bubble_sort */
(nitmethod_t)nit__model___nit__model__MClassDefSorter___standard__sorter__Comparator__compare, /* pointer to model:MClassDefSorter:model#MClassDefSorter#compare */
(nitmethod_t)nit__model___nit__model__MClassDefSorter___mmodule_61d, /* pointer to model:MClassDefSorter:model#MClassDefSorter#mmodule= */
(nitmethod_t)nit__model___nit__model__MClassDefSorter___mmodule, /* pointer to model:MClassDefSorter:model#MClassDefSorter#mmodule */
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
(nitmethod_t)nit__model___nit__model__MPropDefSorter___standard__kernel__Object__init, /* pointer to model:MPropDefSorter:model#MPropDefSorter#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MPropDefSorter:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MPropDefSorter:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to model:MPropDefSorter:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MPropDefSorter:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MPropDefSorter:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MPropDefSorter:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MPropDefSorter:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MPropDefSorter:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MPropDefSorter:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MPropDefSorter:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MPropDefSorter:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MPropDefSorter:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model:MPropDefSorter:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model:MPropDefSorter:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model:MPropDefSorter:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Comparator___sort, /* pointer to model:MPropDefSorter:sorter#Comparator#sort */
(nitmethod_t)standard___standard__Comparator___sub_sort, /* pointer to model:MPropDefSorter:sorter#Comparator#sub_sort */
(nitmethod_t)standard___standard__Comparator___quick_sort, /* pointer to model:MPropDefSorter:sorter#Comparator#quick_sort */
(nitmethod_t)standard___standard__Comparator___bubble_sort, /* pointer to model:MPropDefSorter:sorter#Comparator#bubble_sort */
(nitmethod_t)nit__model___nit__model__MPropDefSorter___standard__sorter__Comparator__compare, /* pointer to model:MPropDefSorter:model#MPropDefSorter#compare */
(nitmethod_t)nit__model___nit__model__MPropDefSorter___mmodule_61d, /* pointer to model:MPropDefSorter:model#MPropDefSorter#mmodule= */
(nitmethod_t)nit__model___nit__model__MPropDefSorter___mmodule, /* pointer to model:MPropDefSorter:model#MPropDefSorter#mmodule */
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
(nitmethod_t)nit___nit__MClass___standard__kernel__Object__init, /* pointer to model:MClass:model#MClass#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MClass:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MClass:kernel#Object#sys */
(nitmethod_t)nit___nit__MClass___standard__string__Object__to_s, /* pointer to model:MClass:model#MClass#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MClass:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MClass:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MClass:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MClass:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MClass:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MClass:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MClass:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MClass:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MClass:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model:MClass:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model:MClass:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model:MClass:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MClass___nit__model_base__MEntity__c_name, /* pointer to model:MClass:model#MClass#c_name */
(nitmethod_t)nit___nit__MClass___nit__model_base__MEntity__model, /* pointer to model:MClass:model#MClass#model */
(nitmethod_t)nit___nit__MClass___nit__model_base__MEntity__name, /* pointer to model:MClass:model#MClass#name */
(nitmethod_t)nit___nit__MClass___nit__model_base__MEntity__full_name, /* pointer to model:MClass:model#MClass#full_name */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MClass:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MClass:separate_compiler#MEntity#const_color */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MClass:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MClass:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MClass:mdoc#MEntity#deprecation */
(nitmethod_t)nit___nit__MClass___mclass_type, /* pointer to model:MClass:model#MClass#mclass_type */
(nitmethod_t)nit___nit__MClass___visibility, /* pointer to model:MClass:model#MClass#visibility */
(nitmethod_t)nit___nit__MClass___intro_mmodule, /* pointer to model:MClass:model#MClass#intro_mmodule */
(nitmethod_t)nit___nit__MClass___kind, /* pointer to model:MClass:model#MClass#kind */
(nitmethod_t)nit__extern_classes___MClass___compute_ftype, /* pointer to model:MClass:extern_classes#MClass#compute_ftype */
(nitmethod_t)nit___nit__MClass___intro_mmodule_61d, /* pointer to model:MClass:model#MClass#intro_mmodule= */
(nitmethod_t)nit___nit__MClass___name_61d, /* pointer to model:MClass:model#MClass#name= */
(nitmethod_t)nit___nit__MClass___setup_parameter_names, /* pointer to model:MClass:model#MClass#setup_parameter_names */
(nitmethod_t)nit___nit__MClass___kind_61d, /* pointer to model:MClass:model#MClass#kind= */
(nitmethod_t)nit___nit__MClass___visibility_61d, /* pointer to model:MClass:model#MClass#visibility= */
(nitmethod_t)nit___nit__MClass___mclassdefs, /* pointer to model:MClass:model#MClass#mclassdefs */
(nitmethod_t)nit___nit__MClass___intro_61d, /* pointer to model:MClass:model#MClass#intro= */
(nitmethod_t)nit___nit__MClass___intro, /* pointer to model:MClass:model#MClass#intro */
(nitmethod_t)nit__extern_classes___MClass___ftype_computed, /* pointer to model:MClass:extern_classes#MClass#ftype_computed */
(nitmethod_t)nit__extern_classes___MClass___ftype_cache, /* pointer to model:MClass:extern_classes#MClass#ftype_cache */
(nitmethod_t)nit__extern_classes___MClass___ftype_cache_61d, /* pointer to model:MClass:extern_classes#MClass#ftype_cache= */
(nitmethod_t)nit__extern_classes___MClass___ftype_computed_61d, /* pointer to model:MClass:extern_classes#MClass#ftype_computed= */
(nitmethod_t)nit___nit__MClass___in_hierarchy, /* pointer to model:MClass:model#MClass#in_hierarchy */
(nitmethod_t)nit___nit__MClass___arity_61d, /* pointer to model:MClass:model#MClass#arity= */
(nitmethod_t)nit___nit__MClass___arity, /* pointer to model:MClass:model#MClass#arity */
(nitmethod_t)nit___nit__MClass___mparameters_61d, /* pointer to model:MClass:model#MClass#mparameters= */
(nitmethod_t)nit___nit__MClass___mclass_type_61d, /* pointer to model:MClass:model#MClass#mclass_type= */
(nitmethod_t)nit___nit__MClass___get_mtype_cache, /* pointer to model:MClass:model#MClass#get_mtype_cache */
(nitmethod_t)nit___nit__MClass___try_intro, /* pointer to model:MClass:model#MClass#try_intro */
(nitmethod_t)nit___nit__MClass___signature_to_s, /* pointer to model:MClass:model#MClass#signature_to_s */
(nitmethod_t)nit___nit__MClass___mparameters, /* pointer to model:MClass:model#MClass#mparameters */
(nitmethod_t)nit___nit__MClass___get_mtype, /* pointer to model:MClass:model#MClass#get_mtype */
(nitmethod_t)nit__modelize_property___MClass___root_init_61d, /* pointer to model:MClass:modelize_property#MClass#root_init= */
(nitmethod_t)nit___nit__MClass___has_new_factory, /* pointer to model:MClass:model#MClass#has_new_factory */
(nitmethod_t)nit___nit__MClass___has_new_factory_61d, /* pointer to model:MClass:model#MClass#has_new_factory= */
(nitmethod_t)nit__modelize_property___MClass___root_init, /* pointer to model:MClass:modelize_property#MClass#root_init */
(nitmethod_t)nit__extern_classes___MClass___ctype, /* pointer to model:MClass:extern_classes#MClass#ctype */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MClass:kernel#Object#init */
}
};
/* allocate MClass */
val* NEW_nit__MClass(const struct type* type) {
val* self /* : MClass */;
val* var /* : Array[MParameterType] */;
val* var1 /* : Array[MClassDef] */;
val* var2 /* : HashMap[Array[MType], MGenericType] */;
self = nit_alloc(sizeof(struct instance) + 30*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MClass;
var = NEW_standard__Array(&type_standard__Array__nit__MParameterType);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[MParameterType]>*/
}
self->attrs[COLOR_nit__model__MClass___mparameters].val = var; /* _mparameters on <self:MClass exact> */
var1 = NEW_standard__Array(&type_standard__Array__nit__MClassDef);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[MClassDef]>*/
}
self->attrs[COLOR_nit__model__MClass___mclassdefs].val = var1; /* _mclassdefs on <self:MClass exact> */
var2 = NEW_standard__HashMap(&type_standard__HashMap__standard__Array__nit__MType__nit__MGenericType);
{
standard___standard__HashMap___standard__kernel__Object__init(var2); /* Direct call hash_collection#HashMap#init on <var2:HashMap[Array[MType], MGenericType]>*/
}
self->attrs[COLOR_nit__model__MClass___get_mtype_cache].val = var2; /* _get_mtype_cache on <self:MClass exact> */
self->attrs[COLOR_nit__model__MClass___has_new_factory].s = 0; /* _has_new_factory on <self:MClass exact> */
self->attrs[COLOR_nit__extern_classes__MClass___ftype_computed].s = 0; /* _ftype_computed on <self:MClass exact> */
return self;
}
/* runtime class nit__MClassDef */
const struct class class_nit__MClassDef = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MClassDef___standard__kernel__Object__init, /* pointer to model:MClassDef:model#MClassDef#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MClassDef:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MClassDef:kernel#Object#sys */
(nitmethod_t)nit___nit__MClassDef___standard__string__Object__to_s, /* pointer to model:MClassDef:model#MClassDef#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MClassDef:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MClassDef:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MClassDef:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MClassDef:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MClassDef:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MClassDef:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MClassDef:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MClassDef:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MClassDef:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model:MClassDef:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model:MClassDef:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model:MClassDef:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MClassDef___nit__model_base__MEntity__c_name, /* pointer to model:MClassDef:model#MClassDef#c_name */
(nitmethod_t)nit___nit__MClassDef___nit__model_base__MEntity__model, /* pointer to model:MClassDef:model#MClassDef#model */
(nitmethod_t)nit___nit__MClassDef___nit__model_base__MEntity__name, /* pointer to model:MClassDef:model#MClassDef#name */
(nitmethod_t)nit___nit__MClassDef___nit__model_base__MEntity__full_name, /* pointer to model:MClassDef:model#MClassDef#full_name */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MClassDef:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MClassDef:separate_compiler#MEntity#const_color */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MClassDef:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MClassDef:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MClassDef:mdoc#MEntity#deprecation */
(nitmethod_t)nit___nit__MClassDef___is_intro, /* pointer to model:MClassDef:model#MClassDef#is_intro */
(nitmethod_t)nit___nit__MClassDef___mmodule, /* pointer to model:MClassDef:model#MClassDef#mmodule */
(nitmethod_t)nit___nit__MClassDef___mclass, /* pointer to model:MClassDef:model#MClassDef#mclass */
(nitmethod_t)nit___nit__MClassDef___mmodule_61d, /* pointer to model:MClassDef:model#MClassDef#mmodule= */
(nitmethod_t)nit___nit__MClassDef___bound_mtype_61d, /* pointer to model:MClassDef:model#MClassDef#bound_mtype= */
(nitmethod_t)nit___nit__MClassDef___location_61d, /* pointer to model:MClassDef:model#MClassDef#location= */
(nitmethod_t)nit___nit__MClassDef___add_in_hierarchy, /* pointer to model:MClassDef:model#MClassDef#add_in_hierarchy */
(nitmethod_t)nit__extern_classes___MClassDef___ftype_cache_61d, /* pointer to model:MClassDef:extern_classes#MClassDef#ftype_cache= */
(nitmethod_t)nit__extern_classes___MClassDef___ftype_computed_61d, /* pointer to model:MClassDef:extern_classes#MClassDef#ftype_computed= */
(nitmethod_t)nit___nit__MClassDef___set_supertypes, /* pointer to model:MClassDef:model#MClassDef#set_supertypes */
(nitmethod_t)nit___nit__MClassDef___mclass_61d, /* pointer to model:MClassDef:model#MClassDef#mclass= */
(nitmethod_t)nit___nit__MClassDef___bound_mtype, /* pointer to model:MClassDef:model#MClassDef#bound_mtype */
(nitmethod_t)nit___nit__MClassDef___to_s_61d, /* pointer to model:MClassDef:model#MClassDef#to_s= */
(nitmethod_t)nit___nit__MClassDef___in_hierarchy, /* pointer to model:MClassDef:model#MClassDef#in_hierarchy */
(nitmethod_t)nit___nit__MClassDef___in_hierarchy_61d, /* pointer to model:MClassDef:model#MClassDef#in_hierarchy= */
(nitmethod_t)nit___nit__MClassDef___mpropdefs, /* pointer to model:MClassDef:model#MClassDef#mpropdefs */
(nitmethod_t)nit___nit__MClassDef___supertypes, /* pointer to model:MClassDef:model#MClassDef#supertypes */
(nitmethod_t)nit__modelize_property___MClassDef___build_self_type, /* pointer to model:MClassDef:modelize_property#MClassDef#build_self_type */
(nitmethod_t)nit__extern_classes___MClassDef___ftype, /* pointer to model:MClassDef:extern_classes#MClassDef#ftype */
(nitmethod_t)nit___nit__MClassDef___location, /* pointer to model:MClassDef:model#MClassDef#location */
(nitmethod_t)nit__extern_classes___MClassDef___ftype_cache, /* pointer to model:MClassDef:extern_classes#MClassDef#ftype_cache */
(nitmethod_t)nit___nit__MClassDef___intro_mproperties, /* pointer to model:MClassDef:model#MClassDef#intro_mproperties */
(nitmethod_t)nit__modelize_property___MClassDef___mprop2npropdef, /* pointer to model:MClassDef:modelize_property#MClassDef#mprop2npropdef */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MClassDef:kernel#Object#init */
}
};
/* allocate MClassDef */
val* NEW_nit__MClassDef(const struct type* type) {
val* self /* : MClassDef */;
val* var /* : Array[MClassType] */;
val* var1 /* : Array[MProperty] */;
val* var2 /* : Array[MPropDef] */;
val* var3 /* : HashMap[MProperty, APropdef] */;
self = nit_alloc(sizeof(struct instance) + 20*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MClassDef;
var = NEW_standard__Array(&type_standard__Array__nit__MClassType);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[MClassType]>*/
}
self->attrs[COLOR_nit__model__MClassDef___supertypes].val = var; /* _supertypes on <self:MClassDef exact> */
var1 = NEW_standard__Array(&type_standard__Array__nit__MProperty);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[MProperty]>*/
}
self->attrs[COLOR_nit__model__MClassDef___intro_mproperties].val = var1; /* _intro_mproperties on <self:MClassDef exact> */
var2 = NEW_standard__Array(&type_standard__Array__nit__MPropDef);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[MPropDef]>*/
}
self->attrs[COLOR_nit__model__MClassDef___mpropdefs].val = var2; /* _mpropdefs on <self:MClassDef exact> */
var3 = NEW_standard__HashMap(&type_standard__HashMap__nit__MProperty__nit__APropdef);
{
standard___standard__HashMap___standard__kernel__Object__init(var3); /* Direct call hash_collection#HashMap#init on <var3:HashMap[MProperty, APropdef]>*/
}
self->attrs[COLOR_nit__modelize_property__MClassDef___mprop2npropdef].val = var3; /* _mprop2npropdef on <self:MClassDef exact> */
self->attrs[COLOR_nit__extern_classes__MClassDef___ftype_computed].s = 0; /* _ftype_computed on <self:MClassDef exact> */
return self;
}
/* runtime class nit__MType */
/* allocate MType */
val* NEW_nit__MType(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MType is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__MClassType */
const struct class class_nit__MClassType = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MClassType___standard__kernel__Object__init, /* pointer to model:MClassType:model#MClassType#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MClassType:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MClassType:kernel#Object#sys */
(nitmethod_t)nit___nit__MClassType___standard__string__Object__to_s, /* pointer to model:MClassType:model#MClassType#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MClassType:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MClassType:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MClassType:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MClassType:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MClassType:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MClassType:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MClassType:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MClassType:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MClassType:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model:MClassType:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model:MClassType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model:MClassType:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MClassType___nit__model_base__MEntity__c_name, /* pointer to model:MClassType:model#MClassType#c_name */
(nitmethod_t)nit___nit__MClassType___nit__model_base__MEntity__model, /* pointer to model:MClassType:model#MClassType#model */
(nitmethod_t)nit___nit__MType___nit__model_base__MEntity__name, /* pointer to model:MClassType:model#MType#name */
(nitmethod_t)nit___nit__MClassType___nit__model_base__MEntity__full_name, /* pointer to model:MClassType:model#MClassType#full_name */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MClassType:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MClassType:separate_compiler#MEntity#const_color */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MClassType:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MClassType:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MClassType:mdoc#MEntity#deprecation */
(nitmethod_t)nit___nit__MClassType___MType__collect_mclassdefs, /* pointer to model:MClassType:model#MClassType#collect_mclassdefs */
(nitmethod_t)nit___nit__MClassType___MType__resolve_for, /* pointer to model:MClassType:model#MClassType#resolve_for */
(nitmethod_t)nit__abstract_compiler___MClassType___MType__ctype, /* pointer to model:MClassType:abstract_compiler#MClassType#ctype */
(nitmethod_t)nit___nit__MClassType___MType__need_anchor, /* pointer to model:MClassType:model#MClassType#need_anchor */
(nitmethod_t)nit___nit__MClassType___MType__can_resolve_for, /* pointer to model:MClassType:model#MClassType#can_resolve_for */
(nitmethod_t)nit___nit__MClassType___MType__anchor_to, /* pointer to model:MClassType:model#MClassType#anchor_to */
(nitmethod_t)nit___nit__MType___as_nullable, /* pointer to model:MClassType:model#MType#as_nullable */
(nitmethod_t)nit___nit__MType___is_subtype, /* pointer to model:MClassType:model#MType#is_subtype */
(nitmethod_t)nit___nit__MType___lookup_bound, /* pointer to model:MClassType:model#MType#lookup_bound */
(nitmethod_t)nit___nit__MType___as_notnull, /* pointer to model:MClassType:model#MType#as_notnull */
(nitmethod_t)nit___nit__MType___length, /* pointer to model:MClassType:model#MType#length */
(nitmethod_t)nit__separate_compiler___MType___is_tagged_61d, /* pointer to model:MClassType:separate_compiler#MType#is_tagged= */
(nitmethod_t)nit__abstract_compiler___MClassType___MType__is_c_primitive, /* pointer to model:MClassType:abstract_compiler#MClassType#is_c_primitive */
(nitmethod_t)nit__separate_compiler___MType___is_tagged, /* pointer to model:MClassType:separate_compiler#MType#is_tagged */
(nitmethod_t)nit__abstract_compiler___MClassType___MType__ctype_extern, /* pointer to model:MClassType:abstract_compiler#MClassType#ctype_extern */
(nitmethod_t)nit___nit__MType___as_nullable_cache, /* pointer to model:MClassType:model#MType#as_nullable_cache */
(nitmethod_t)nit___nit__MType___as_nullable_cache_61d, /* pointer to model:MClassType:model#MType#as_nullable_cache= */
(nitmethod_t)nit___nit__MType___lookup_fixed, /* pointer to model:MClassType:model#MType#lookup_fixed */
(nitmethod_t)nit___nit__MClassType___MType__collect_mclasses, /* pointer to model:MClassType:model#MClassType#collect_mclasses */
(nitmethod_t)nit___nit__MType___supertype_to, /* pointer to model:MClassType:model#MType#supertype_to */
(nitmethod_t)nit___nit__MType___undecorate, /* pointer to model:MClassType:model#MType#undecorate */
(nitmethod_t)nit___nit__MType___has_mproperty, /* pointer to model:MClassType:model#MType#has_mproperty */
(nitmethod_t)nit___nit__MClassType___MType__collect_mtypes, /* pointer to model:MClassType:model#MClassType#collect_mtypes */
(nitmethod_t)nit__abstract_compiler___MClassType___MType__ctypename, /* pointer to model:MClassType:abstract_compiler#MClassType#ctypename */
(nitmethod_t)nit__nitni_base___MClassType___MType__is_cprimitive, /* pointer to model:MClassType:nitni_base#MClassType#is_cprimitive */
(nitmethod_t)nit__nitni_base___MClassType___MType__mangled_cname, /* pointer to model:MClassType:nitni_base#MClassType#mangled_cname */
(nitmethod_t)nit__nitni_base___MClassType___MType__cname_blind, /* pointer to model:MClassType:nitni_base#MClassType#cname_blind */
(nitmethod_t)nit__nitni_base___MClassType___MType__cname, /* pointer to model:MClassType:nitni_base#MClassType#cname */
(nitmethod_t)nit___nit__MClassType___mclass, /* pointer to model:MClassType:model#MClassType#mclass */
(nitmethod_t)nit___nit__MClassType___arguments, /* pointer to model:MClassType:model#MClassType#arguments */
(nitmethod_t)nit___nit__MClassType___mclass_61d, /* pointer to model:MClassType:model#MClassType#mclass= */
(nitmethod_t)nit___nit__MClassType___arguments_61d, /* pointer to model:MClassType:model#MClassType#arguments= */
(nitmethod_t)nit___nit__MClassType___collect_mclassdefs_cache, /* pointer to model:MClassType:model#MClassType#collect_mclassdefs_cache */
(nitmethod_t)nit___nit__MClassType___collect_things, /* pointer to model:MClassType:model#MClassType#collect_things */
(nitmethod_t)nit___nit__MClassType___collect_mclasses_cache, /* pointer to model:MClassType:model#MClassType#collect_mclasses_cache */
(nitmethod_t)nit___nit__MClassType___collect_mtypes_cache, /* pointer to model:MClassType:model#MClassType#collect_mtypes_cache */
(nitmethod_t)nit___nit__MClassType___collect_mclasses_last_module, /* pointer to model:MClassType:model#MClassType#collect_mclasses_last_module */
(nitmethod_t)nit___nit__MClassType___collect_mclasses_last_module_cache, /* pointer to model:MClassType:model#MClassType#collect_mclasses_last_module_cache */
(nitmethod_t)nit___nit__MClassType___collect_mclasses_last_module_61d, /* pointer to model:MClassType:model#MClassType#collect_mclasses_last_module= */
(nitmethod_t)nit___nit__MClassType___collect_mclasses_last_module_cache_61d, /* pointer to model:MClassType:model#MClassType#collect_mclasses_last_module_cache= */
(nitmethod_t)nit__light_only___MClassType___cname_normal_class, /* pointer to model:MClassType:light_only#MClassType#cname_normal_class */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MClassType:kernel#Object#init */
(nitmethod_t)nit___nit__MType___anchor_to, /* pointer to model:MClassType:model#MType#anchor_to */
(nitmethod_t)nit__nitni_base___MType___cname_blind, /* pointer to model:MClassType:nitni_base#MType#cname_blind */
}
};
/* allocate MClassType */
val* NEW_nit__MClassType(const struct type* type) {
val* self /* : MClassType */;
val* var /* : Array[MType] */;
val* var1 /* : HashMap[MModule, Set[MClassDef]] */;
val* var2 /* : HashMap[MModule, Set[MClass]] */;
val* var3 /* : HashMap[MModule, Set[MClassType]] */;
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MClassType;
self->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s = 0; /* _is_tagged on <self:MClassType exact> */
var = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[MType]>*/
}
self->attrs[COLOR_nit__model__MClassType___arguments].val = var; /* _arguments on <self:MClassType exact> */
var1 = NEW_standard__HashMap(&type_standard__HashMap__nit__MModule__standard__Set__nit__MClassDef);
{
standard___standard__HashMap___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[MModule, Set[MClassDef]]>*/
}
self->attrs[COLOR_nit__model__MClassType___collect_mclassdefs_cache].val = var1; /* _collect_mclassdefs_cache on <self:MClassType exact> */
var2 = NEW_standard__HashMap(&type_standard__HashMap__nit__MModule__standard__Set__nit__MClass);
{
standard___standard__HashMap___standard__kernel__Object__init(var2); /* Direct call hash_collection#HashMap#init on <var2:HashMap[MModule, Set[MClass]]>*/
}
self->attrs[COLOR_nit__model__MClassType___collect_mclasses_cache].val = var2; /* _collect_mclasses_cache on <self:MClassType exact> */
var3 = NEW_standard__HashMap(&type_standard__HashMap__nit__MModule__standard__Set__nit__MClassType);
{
standard___standard__HashMap___standard__kernel__Object__init(var3); /* Direct call hash_collection#HashMap#init on <var3:HashMap[MModule, Set[MClassType]]>*/
}
self->attrs[COLOR_nit__model__MClassType___collect_mtypes_cache].val = var3; /* _collect_mtypes_cache on <self:MClassType exact> */
return self;
}
/* runtime class nit__MGenericType */
const struct class class_nit__MGenericType = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MGenericType___standard__kernel__Object__init, /* pointer to model:MGenericType:model#MGenericType#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MGenericType:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MGenericType:kernel#Object#sys */
(nitmethod_t)nit___nit__MGenericType___standard__string__Object__to_s, /* pointer to model:MGenericType:model#MGenericType#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MGenericType:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MGenericType:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MGenericType:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MGenericType:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MGenericType:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MGenericType:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MGenericType:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MGenericType:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MGenericType:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model:MGenericType:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model:MGenericType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model:MGenericType:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MGenericType___nit__model_base__MEntity__c_name, /* pointer to model:MGenericType:model#MGenericType#c_name */
(nitmethod_t)nit___nit__MClassType___nit__model_base__MEntity__model, /* pointer to model:MGenericType:model#MClassType#model */
(nitmethod_t)nit___nit__MType___nit__model_base__MEntity__name, /* pointer to model:MGenericType:model#MType#name */
(nitmethod_t)nit___nit__MGenericType___nit__model_base__MEntity__full_name, /* pointer to model:MGenericType:model#MGenericType#full_name */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MGenericType:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MGenericType:separate_compiler#MEntity#const_color */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MGenericType:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MGenericType:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MGenericType:mdoc#MEntity#deprecation */
(nitmethod_t)nit___nit__MClassType___MType__collect_mclassdefs, /* pointer to model:MGenericType:model#MClassType#collect_mclassdefs */
(nitmethod_t)nit___nit__MGenericType___MType__resolve_for, /* pointer to model:MGenericType:model#MGenericType#resolve_for */
(nitmethod_t)nit__abstract_compiler___MClassType___MType__ctype, /* pointer to model:MGenericType:abstract_compiler#MClassType#ctype */
(nitmethod_t)nit___nit__MGenericType___MType__need_anchor, /* pointer to model:MGenericType:model#MGenericType#need_anchor */
(nitmethod_t)nit___nit__MGenericType___MType__can_resolve_for, /* pointer to model:MGenericType:model#MGenericType#can_resolve_for */
(nitmethod_t)nit___nit__MClassType___MType__anchor_to, /* pointer to model:MGenericType:model#MClassType#anchor_to */
(nitmethod_t)nit___nit__MType___as_nullable, /* pointer to model:MGenericType:model#MType#as_nullable */
(nitmethod_t)nit___nit__MType___is_subtype, /* pointer to model:MGenericType:model#MType#is_subtype */
(nitmethod_t)nit___nit__MType___lookup_bound, /* pointer to model:MGenericType:model#MType#lookup_bound */
(nitmethod_t)nit___nit__MType___as_notnull, /* pointer to model:MGenericType:model#MType#as_notnull */
(nitmethod_t)nit___nit__MGenericType___MType__length, /* pointer to model:MGenericType:model#MGenericType#length */
(nitmethod_t)nit__separate_compiler___MType___is_tagged_61d, /* pointer to model:MGenericType:separate_compiler#MType#is_tagged= */
(nitmethod_t)nit__abstract_compiler___MClassType___MType__is_c_primitive, /* pointer to model:MGenericType:abstract_compiler#MClassType#is_c_primitive */
(nitmethod_t)nit__separate_compiler___MType___is_tagged, /* pointer to model:MGenericType:separate_compiler#MType#is_tagged */
(nitmethod_t)nit__abstract_compiler___MClassType___MType__ctype_extern, /* pointer to model:MGenericType:abstract_compiler#MClassType#ctype_extern */
(nitmethod_t)nit___nit__MType___as_nullable_cache, /* pointer to model:MGenericType:model#MType#as_nullable_cache */
(nitmethod_t)nit___nit__MType___as_nullable_cache_61d, /* pointer to model:MGenericType:model#MType#as_nullable_cache= */
(nitmethod_t)nit___nit__MType___lookup_fixed, /* pointer to model:MGenericType:model#MType#lookup_fixed */
(nitmethod_t)nit___nit__MClassType___MType__collect_mclasses, /* pointer to model:MGenericType:model#MClassType#collect_mclasses */
(nitmethod_t)nit___nit__MType___supertype_to, /* pointer to model:MGenericType:model#MType#supertype_to */
(nitmethod_t)nit___nit__MType___undecorate, /* pointer to model:MGenericType:model#MType#undecorate */
(nitmethod_t)nit___nit__MType___has_mproperty, /* pointer to model:MGenericType:model#MType#has_mproperty */
(nitmethod_t)nit___nit__MClassType___MType__collect_mtypes, /* pointer to model:MGenericType:model#MClassType#collect_mtypes */
(nitmethod_t)nit__abstract_compiler___MClassType___MType__ctypename, /* pointer to model:MGenericType:abstract_compiler#MClassType#ctypename */
(nitmethod_t)nit__nitni_base___MClassType___MType__is_cprimitive, /* pointer to model:MGenericType:nitni_base#MClassType#is_cprimitive */
(nitmethod_t)nit__nitni_base___MGenericType___MType__mangled_cname, /* pointer to model:MGenericType:nitni_base#MGenericType#mangled_cname */
(nitmethod_t)nit__nitni_base___MClassType___MType__cname_blind, /* pointer to model:MGenericType:nitni_base#MClassType#cname_blind */
(nitmethod_t)nit__nitni_base___MGenericType___MType__cname, /* pointer to model:MGenericType:nitni_base#MGenericType#cname */
(nitmethod_t)nit___nit__MClassType___mclass, /* pointer to model:MGenericType:model#MClassType#mclass */
(nitmethod_t)nit___nit__MGenericType___MClassType__arguments, /* pointer to model:MGenericType:model#MGenericType#arguments */
(nitmethod_t)nit___nit__MClassType___mclass_61d, /* pointer to model:MGenericType:model#MClassType#mclass= */
(nitmethod_t)nit___nit__MGenericType___MClassType__arguments_61d, /* pointer to model:MGenericType:model#MGenericType#arguments= */
(nitmethod_t)nit___nit__MClassType___collect_mclassdefs_cache, /* pointer to model:MGenericType:model#MClassType#collect_mclassdefs_cache */
(nitmethod_t)nit___nit__MClassType___collect_things, /* pointer to model:MGenericType:model#MClassType#collect_things */
(nitmethod_t)nit___nit__MClassType___collect_mclasses_cache, /* pointer to model:MGenericType:model#MClassType#collect_mclasses_cache */
(nitmethod_t)nit___nit__MClassType___collect_mtypes_cache, /* pointer to model:MGenericType:model#MClassType#collect_mtypes_cache */
(nitmethod_t)nit___nit__MClassType___collect_mclasses_last_module, /* pointer to model:MGenericType:model#MClassType#collect_mclasses_last_module */
(nitmethod_t)nit___nit__MClassType___collect_mclasses_last_module_cache, /* pointer to model:MGenericType:model#MClassType#collect_mclasses_last_module_cache */
(nitmethod_t)nit___nit__MClassType___collect_mclasses_last_module_61d, /* pointer to model:MGenericType:model#MClassType#collect_mclasses_last_module= */
(nitmethod_t)nit___nit__MClassType___collect_mclasses_last_module_cache_61d, /* pointer to model:MGenericType:model#MClassType#collect_mclasses_last_module_cache= */
(nitmethod_t)nit__light_only___MClassType___cname_normal_class, /* pointer to model:MGenericType:light_only#MClassType#cname_normal_class */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MGenericType:kernel#Object#init */
(nitmethod_t)nit___nit__MType___anchor_to, /* pointer to model:MGenericType:model#MType#anchor_to */
(nitmethod_t)nit__nitni_base___MType___cname_blind, /* pointer to model:MGenericType:nitni_base#MType#cname_blind */
(nitmethod_t)nit___nit__MGenericType___need_anchor_61d, /* pointer to model:MGenericType:model#MGenericType#need_anchor= */
(nitmethod_t)nit___nit__MGenericType___to_s_61d, /* pointer to model:MGenericType:model#MGenericType#to_s= */
(nitmethod_t)nit___nit__MClassType___standard__kernel__Object__init, /* pointer to model:MGenericType:model#MClassType#init */
(nitmethod_t)nit__nitni_base___MClassType___MType__mangled_cname, /* pointer to model:MGenericType:nitni_base#MClassType#mangled_cname */
}
};
/* allocate MGenericType */
val* NEW_nit__MGenericType(const struct type* type) {
val* self /* : MGenericType */;
val* var /* : Array[MType] */;
val* var1 /* : HashMap[MModule, Set[MClassDef]] */;
val* var2 /* : HashMap[MModule, Set[MClass]] */;
val* var3 /* : HashMap[MModule, Set[MClassType]] */;
self = nit_alloc(sizeof(struct instance) + 24*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MGenericType;
self->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s = 0; /* _is_tagged on <self:MGenericType exact> */
var = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[MType]>*/
}
self->attrs[COLOR_nit__model__MClassType___arguments].val = var; /* _arguments on <self:MGenericType exact> */
var1 = NEW_standard__HashMap(&type_standard__HashMap__nit__MModule__standard__Set__nit__MClassDef);
{
standard___standard__HashMap___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[MModule, Set[MClassDef]]>*/
}
self->attrs[COLOR_nit__model__MClassType___collect_mclassdefs_cache].val = var1; /* _collect_mclassdefs_cache on <self:MGenericType exact> */
var2 = NEW_standard__HashMap(&type_standard__HashMap__nit__MModule__standard__Set__nit__MClass);
{
standard___standard__HashMap___standard__kernel__Object__init(var2); /* Direct call hash_collection#HashMap#init on <var2:HashMap[MModule, Set[MClass]]>*/
}
self->attrs[COLOR_nit__model__MClassType___collect_mclasses_cache].val = var2; /* _collect_mclasses_cache on <self:MGenericType exact> */
var3 = NEW_standard__HashMap(&type_standard__HashMap__nit__MModule__standard__Set__nit__MClassType);
{
standard___standard__HashMap___standard__kernel__Object__init(var3); /* Direct call hash_collection#HashMap#init on <var3:HashMap[MModule, Set[MClassType]]>*/
}
self->attrs[COLOR_nit__model__MClassType___collect_mtypes_cache].val = var3; /* _collect_mtypes_cache on <self:MGenericType exact> */
return self;
}
/* runtime class nit__MFormalType */
/* allocate MFormalType */
val* NEW_nit__MFormalType(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MFormalType is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__MVirtualType */
const struct class class_nit__MVirtualType = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MVirtualType___standard__kernel__Object__init, /* pointer to model:MVirtualType:model#MVirtualType#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MVirtualType:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MVirtualType:kernel#Object#sys */
(nitmethod_t)nit___nit__MVirtualType___standard__string__Object__to_s, /* pointer to model:MVirtualType:model#MVirtualType#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MVirtualType:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MVirtualType:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MVirtualType:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MVirtualType:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MVirtualType:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MVirtualType:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MVirtualType:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MVirtualType:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MVirtualType:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model:MVirtualType:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model:MVirtualType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model:MVirtualType:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MVirtualType___nit__model_base__MEntity__c_name, /* pointer to model:MVirtualType:model#MVirtualType#c_name */
(nitmethod_t)nit___nit__MVirtualType___nit__model_base__MEntity__model, /* pointer to model:MVirtualType:model#MVirtualType#model */
(nitmethod_t)nit___nit__MType___nit__model_base__MEntity__name, /* pointer to model:MVirtualType:model#MType#name */
(nitmethod_t)nit___nit__MVirtualType___nit__model_base__MEntity__full_name, /* pointer to model:MVirtualType:model#MVirtualType#full_name */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MVirtualType:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MVirtualType:separate_compiler#MEntity#const_color */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MVirtualType:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MVirtualType:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MVirtualType:mdoc#MEntity#deprecation */
(nitmethod_t)nit___nit__MType___collect_mclassdefs, /* pointer to model:MVirtualType:model#MType#collect_mclassdefs */
(nitmethod_t)nit___nit__MVirtualType___MType__resolve_for, /* pointer to model:MVirtualType:model#MVirtualType#resolve_for */
(nitmethod_t)nit__abstract_compiler___MType___ctype, /* pointer to model:MVirtualType:abstract_compiler#MType#ctype */
(nitmethod_t)nit___nit__MType___need_anchor, /* pointer to model:MVirtualType:model#MType#need_anchor */
(nitmethod_t)nit___nit__MVirtualType___MType__can_resolve_for, /* pointer to model:MVirtualType:model#MVirtualType#can_resolve_for */
(nitmethod_t)nit___nit__MType___anchor_to, /* pointer to model:MVirtualType:model#MType#anchor_to */
(nitmethod_t)nit___nit__MType___as_nullable, /* pointer to model:MVirtualType:model#MType#as_nullable */
(nitmethod_t)nit___nit__MType___is_subtype, /* pointer to model:MVirtualType:model#MType#is_subtype */
(nitmethod_t)nit___nit__MVirtualType___MType__lookup_bound, /* pointer to model:MVirtualType:model#MVirtualType#lookup_bound */
(nitmethod_t)nit___nit__MFormalType___MType__as_notnull, /* pointer to model:MVirtualType:model#MFormalType#as_notnull */
(nitmethod_t)nit___nit__MType___length, /* pointer to model:MVirtualType:model#MType#length */
(nitmethod_t)nit__separate_compiler___MType___is_tagged_61d, /* pointer to model:MVirtualType:separate_compiler#MType#is_tagged= */
(nitmethod_t)nit__abstract_compiler___MType___is_c_primitive, /* pointer to model:MVirtualType:abstract_compiler#MType#is_c_primitive */
(nitmethod_t)nit__separate_compiler___MType___is_tagged, /* pointer to model:MVirtualType:separate_compiler#MType#is_tagged */
(nitmethod_t)nit__abstract_compiler___MType___ctype_extern, /* pointer to model:MVirtualType:abstract_compiler#MType#ctype_extern */
(nitmethod_t)nit___nit__MType___as_nullable_cache, /* pointer to model:MVirtualType:model#MType#as_nullable_cache */
(nitmethod_t)nit___nit__MType___as_nullable_cache_61d, /* pointer to model:MVirtualType:model#MType#as_nullable_cache= */
(nitmethod_t)nit___nit__MVirtualType___MType__lookup_fixed, /* pointer to model:MVirtualType:model#MVirtualType#lookup_fixed */
(nitmethod_t)nit___nit__MType___collect_mclasses, /* pointer to model:MVirtualType:model#MType#collect_mclasses */
(nitmethod_t)nit___nit__MType___supertype_to, /* pointer to model:MVirtualType:model#MType#supertype_to */
(nitmethod_t)nit___nit__MType___undecorate, /* pointer to model:MVirtualType:model#MType#undecorate */
(nitmethod_t)nit___nit__MType___has_mproperty, /* pointer to model:MVirtualType:model#MType#has_mproperty */
(nitmethod_t)nit___nit__MType___collect_mtypes, /* pointer to model:MVirtualType:model#MType#collect_mtypes */
(nitmethod_t)nit__abstract_compiler___MType___ctypename, /* pointer to model:MVirtualType:abstract_compiler#MType#ctypename */
(nitmethod_t)nit__nitni_base___MType___is_cprimitive, /* pointer to model:MVirtualType:nitni_base#MType#is_cprimitive */
(nitmethod_t)nit__nitni_base___MVirtualType___MType__mangled_cname, /* pointer to model:MVirtualType:nitni_base#MVirtualType#mangled_cname */
(nitmethod_t)nit__nitni_base___MType___cname_blind, /* pointer to model:MVirtualType:nitni_base#MType#cname_blind */
(nitmethod_t)nit__nitni_base___MType___cname, /* pointer to model:MVirtualType:nitni_base#MType#cname */
(nitmethod_t)nit___nit__MVirtualType___mproperty, /* pointer to model:MVirtualType:model#MVirtualType#mproperty */
(nitmethod_t)nit___nit__MVirtualType___mproperty_61d, /* pointer to model:MVirtualType:model#MVirtualType#mproperty= */
(nitmethod_t)nit___nit__MVirtualType___lookup_single_definition, /* pointer to model:MVirtualType:model#MVirtualType#lookup_single_definition */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MVirtualType:kernel#Object#init */
}
};
/* allocate MVirtualType */
val* NEW_nit__MVirtualType(const struct type* type) {
val* self /* : MVirtualType */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MVirtualType;
self->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s = 0; /* _is_tagged on <self:MVirtualType exact> */
return self;
}
/* runtime class nit__MParameterType */
const struct class class_nit__MParameterType = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MParameterType___standard__kernel__Object__init, /* pointer to model:MParameterType:model#MParameterType#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MParameterType:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MParameterType:kernel#Object#sys */
(nitmethod_t)nit___nit__MParameterType___standard__string__Object__to_s, /* pointer to model:MParameterType:model#MParameterType#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MParameterType:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MParameterType:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MParameterType:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MParameterType:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MParameterType:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MParameterType:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MParameterType:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MParameterType:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MParameterType:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model:MParameterType:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model:MParameterType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model:MParameterType:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MParameterType___nit__model_base__MEntity__c_name, /* pointer to model:MParameterType:model#MParameterType#c_name */
(nitmethod_t)nit___nit__MParameterType___nit__model_base__MEntity__model, /* pointer to model:MParameterType:model#MParameterType#model */
(nitmethod_t)nit___nit__MParameterType___nit__model_base__MEntity__name, /* pointer to model:MParameterType:model#MParameterType#name */
(nitmethod_t)nit___nit__MParameterType___nit__model_base__MEntity__full_name, /* pointer to model:MParameterType:model#MParameterType#full_name */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MParameterType:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MParameterType:separate_compiler#MEntity#const_color */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MParameterType:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MParameterType:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MParameterType:mdoc#MEntity#deprecation */
(nitmethod_t)nit___nit__MType___collect_mclassdefs, /* pointer to model:MParameterType:model#MType#collect_mclassdefs */
(nitmethod_t)nit___nit__MParameterType___MType__resolve_for, /* pointer to model:MParameterType:model#MParameterType#resolve_for */
(nitmethod_t)nit__abstract_compiler___MType___ctype, /* pointer to model:MParameterType:abstract_compiler#MType#ctype */
(nitmethod_t)nit___nit__MType___need_anchor, /* pointer to model:MParameterType:model#MType#need_anchor */
(nitmethod_t)nit___nit__MParameterType___MType__can_resolve_for, /* pointer to model:MParameterType:model#MParameterType#can_resolve_for */
(nitmethod_t)nit___nit__MType___anchor_to, /* pointer to model:MParameterType:model#MType#anchor_to */
(nitmethod_t)nit___nit__MType___as_nullable, /* pointer to model:MParameterType:model#MType#as_nullable */
(nitmethod_t)nit___nit__MType___is_subtype, /* pointer to model:MParameterType:model#MType#is_subtype */
(nitmethod_t)nit___nit__MParameterType___MType__lookup_bound, /* pointer to model:MParameterType:model#MParameterType#lookup_bound */
(nitmethod_t)nit___nit__MFormalType___MType__as_notnull, /* pointer to model:MParameterType:model#MFormalType#as_notnull */
(nitmethod_t)nit___nit__MType___length, /* pointer to model:MParameterType:model#MType#length */
(nitmethod_t)nit__separate_compiler___MType___is_tagged_61d, /* pointer to model:MParameterType:separate_compiler#MType#is_tagged= */
(nitmethod_t)nit__abstract_compiler___MType___is_c_primitive, /* pointer to model:MParameterType:abstract_compiler#MType#is_c_primitive */
(nitmethod_t)nit__separate_compiler___MType___is_tagged, /* pointer to model:MParameterType:separate_compiler#MType#is_tagged */
(nitmethod_t)nit__abstract_compiler___MType___ctype_extern, /* pointer to model:MParameterType:abstract_compiler#MType#ctype_extern */
(nitmethod_t)nit___nit__MType___as_nullable_cache, /* pointer to model:MParameterType:model#MType#as_nullable_cache */
(nitmethod_t)nit___nit__MType___as_nullable_cache_61d, /* pointer to model:MParameterType:model#MType#as_nullable_cache= */
(nitmethod_t)nit___nit__MParameterType___MType__lookup_fixed, /* pointer to model:MParameterType:model#MParameterType#lookup_fixed */
(nitmethod_t)nit___nit__MType___collect_mclasses, /* pointer to model:MParameterType:model#MType#collect_mclasses */
(nitmethod_t)nit___nit__MType___supertype_to, /* pointer to model:MParameterType:model#MType#supertype_to */
(nitmethod_t)nit___nit__MType___undecorate, /* pointer to model:MParameterType:model#MType#undecorate */
(nitmethod_t)nit___nit__MType___has_mproperty, /* pointer to model:MParameterType:model#MType#has_mproperty */
(nitmethod_t)nit___nit__MType___collect_mtypes, /* pointer to model:MParameterType:model#MType#collect_mtypes */
(nitmethod_t)nit__abstract_compiler___MType___ctypename, /* pointer to model:MParameterType:abstract_compiler#MType#ctypename */
(nitmethod_t)nit__nitni_base___MType___is_cprimitive, /* pointer to model:MParameterType:nitni_base#MType#is_cprimitive */
(nitmethod_t)nit__nitni_base___MType___mangled_cname, /* pointer to model:MParameterType:nitni_base#MType#mangled_cname */
(nitmethod_t)nit__nitni_base___MType___cname_blind, /* pointer to model:MParameterType:nitni_base#MType#cname_blind */
(nitmethod_t)nit__nitni_base___MType___cname, /* pointer to model:MParameterType:nitni_base#MType#cname */
(nitmethod_t)nit___nit__MParameterType___mclass, /* pointer to model:MParameterType:model#MParameterType#mclass */
(nitmethod_t)nit___nit__MParameterType___mclass_61d, /* pointer to model:MParameterType:model#MParameterType#mclass= */
(nitmethod_t)nit___nit__MParameterType___rank_61d, /* pointer to model:MParameterType:model#MParameterType#rank= */
(nitmethod_t)nit___nit__MParameterType___name_61d, /* pointer to model:MParameterType:model#MParameterType#name= */
(nitmethod_t)nit___nit__MParameterType___rank, /* pointer to model:MParameterType:model#MParameterType#rank */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MParameterType:kernel#Object#init */
}
};
/* allocate MParameterType */
val* NEW_nit__MParameterType(const struct type* type) {
val* self /* : MParameterType */;
self = nit_alloc(sizeof(struct instance) + 15*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MParameterType;
self->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s = 0; /* _is_tagged on <self:MParameterType exact> */
return self;
}
/* runtime class nit__MProxyType */
/* allocate MProxyType */
val* NEW_nit__MProxyType(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MProxyType is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__MNullableType */
const struct class class_nit__MNullableType = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MNullableType___standard__kernel__Object__init, /* pointer to model:MNullableType:model#MNullableType#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MNullableType:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MNullableType:kernel#Object#sys */
(nitmethod_t)nit___nit__MNullableType___standard__string__Object__to_s, /* pointer to model:MNullableType:model#MNullableType#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MNullableType:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MNullableType:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MNullableType:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MNullableType:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MNullableType:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MNullableType:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MNullableType:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MNullableType:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MNullableType:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model:MNullableType:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model:MNullableType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model:MNullableType:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MNullableType___nit__model_base__MEntity__c_name, /* pointer to model:MNullableType:model#MNullableType#c_name */
(nitmethod_t)nit___nit__MProxyType___nit__model_base__MEntity__model, /* pointer to model:MNullableType:model#MProxyType#model */
(nitmethod_t)nit___nit__MType___nit__model_base__MEntity__name, /* pointer to model:MNullableType:model#MType#name */
(nitmethod_t)nit___nit__MNullableType___nit__model_base__MEntity__full_name, /* pointer to model:MNullableType:model#MNullableType#full_name */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MNullableType:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MNullableType:separate_compiler#MEntity#const_color */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MNullableType:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MNullableType:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MNullableType:mdoc#MEntity#deprecation */
(nitmethod_t)nit___nit__MProxyType___MType__collect_mclassdefs, /* pointer to model:MNullableType:model#MProxyType#collect_mclassdefs */
(nitmethod_t)nit___nit__MNullableType___MType__resolve_for, /* pointer to model:MNullableType:model#MNullableType#resolve_for */
(nitmethod_t)nit__abstract_compiler___MType___ctype, /* pointer to model:MNullableType:abstract_compiler#MType#ctype */
(nitmethod_t)nit___nit__MProxyType___MType__need_anchor, /* pointer to model:MNullableType:model#MProxyType#need_anchor */
(nitmethod_t)nit___nit__MProxyType___MType__can_resolve_for, /* pointer to model:MNullableType:model#MProxyType#can_resolve_for */
(nitmethod_t)nit___nit__MType___anchor_to, /* pointer to model:MNullableType:model#MType#anchor_to */
(nitmethod_t)nit___nit__MNullableType___MType__as_nullable, /* pointer to model:MNullableType:model#MNullableType#as_nullable */
(nitmethod_t)nit___nit__MType___is_subtype, /* pointer to model:MNullableType:model#MType#is_subtype */
(nitmethod_t)nit___nit__MType___lookup_bound, /* pointer to model:MNullableType:model#MType#lookup_bound */
(nitmethod_t)nit___nit__MProxyType___MType__as_notnull, /* pointer to model:MNullableType:model#MProxyType#as_notnull */
(nitmethod_t)nit___nit__MProxyType___MType__length, /* pointer to model:MNullableType:model#MProxyType#length */
(nitmethod_t)nit__separate_compiler___MType___is_tagged_61d, /* pointer to model:MNullableType:separate_compiler#MType#is_tagged= */
(nitmethod_t)nit__abstract_compiler___MType___is_c_primitive, /* pointer to model:MNullableType:abstract_compiler#MType#is_c_primitive */
(nitmethod_t)nit__separate_compiler___MType___is_tagged, /* pointer to model:MNullableType:separate_compiler#MType#is_tagged */
(nitmethod_t)nit__abstract_compiler___MType___ctype_extern, /* pointer to model:MNullableType:abstract_compiler#MType#ctype_extern */
(nitmethod_t)nit___nit__MType___as_nullable_cache, /* pointer to model:MNullableType:model#MType#as_nullable_cache */
(nitmethod_t)nit___nit__MType___as_nullable_cache_61d, /* pointer to model:MNullableType:model#MType#as_nullable_cache= */
(nitmethod_t)nit___nit__MNullableType___MType__lookup_fixed, /* pointer to model:MNullableType:model#MNullableType#lookup_fixed */
(nitmethod_t)nit___nit__MProxyType___MType__collect_mclasses, /* pointer to model:MNullableType:model#MProxyType#collect_mclasses */
(nitmethod_t)nit___nit__MType___supertype_to, /* pointer to model:MNullableType:model#MType#supertype_to */
(nitmethod_t)nit___nit__MProxyType___MType__undecorate, /* pointer to model:MNullableType:model#MProxyType#undecorate */
(nitmethod_t)nit___nit__MType___has_mproperty, /* pointer to model:MNullableType:model#MType#has_mproperty */
(nitmethod_t)nit___nit__MProxyType___MType__collect_mtypes, /* pointer to model:MNullableType:model#MProxyType#collect_mtypes */
(nitmethod_t)nit__abstract_compiler___MType___ctypename, /* pointer to model:MNullableType:abstract_compiler#MType#ctypename */
(nitmethod_t)nit__nitni_base___MNullableType___MType__is_cprimitive, /* pointer to model:MNullableType:nitni_base#MNullableType#is_cprimitive */
(nitmethod_t)nit__nitni_base___MNullableType___MType__mangled_cname, /* pointer to model:MNullableType:nitni_base#MNullableType#mangled_cname */
(nitmethod_t)nit__nitni_base___MType___cname_blind, /* pointer to model:MNullableType:nitni_base#MType#cname_blind */
(nitmethod_t)nit__nitni_base___MNullableType___MType__cname, /* pointer to model:MNullableType:nitni_base#MNullableType#cname */
(nitmethod_t)nit___nit__MProxyType___mtype, /* pointer to model:MNullableType:model#MProxyType#mtype */
(nitmethod_t)nit___nit__MProxyType___mtype_61d, /* pointer to model:MNullableType:model#MProxyType#mtype= */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MNullableType:kernel#Object#init */
(nitmethod_t)nit___nit__MNullableType___to_s_61d, /* pointer to model:MNullableType:model#MNullableType#to_s= */
(nitmethod_t)nit___nit__MProxyType___standard__kernel__Object__init, /* pointer to model:MNullableType:model#MProxyType#init */
(nitmethod_t)nit___nit__MProxyType___MType__resolve_for, /* pointer to model:MNullableType:model#MProxyType#resolve_for */
(nitmethod_t)nit___nit__MProxyType___MType__lookup_fixed, /* pointer to model:MNullableType:model#MProxyType#lookup_fixed */
}
};
/* allocate MNullableType */
val* NEW_nit__MNullableType(const struct type* type) {
val* self /* : MNullableType */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MNullableType;
self->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s = 0; /* _is_tagged on <self:MNullableType exact> */
return self;
}
/* runtime class nit__MNotNullType */
const struct class class_nit__MNotNullType = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MProxyType___standard__kernel__Object__init, /* pointer to model:MNotNullType:model#MProxyType#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MNotNullType:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MNotNullType:kernel#Object#sys */
(nitmethod_t)nit___nit__MNotNullType___standard__string__Object__to_s, /* pointer to model:MNotNullType:model#MNotNullType#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MNotNullType:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MNotNullType:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MNotNullType:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MNotNullType:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MNotNullType:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MNotNullType:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MNotNullType:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MNotNullType:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MNotNullType:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model:MNotNullType:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model:MNotNullType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model:MNotNullType:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MNotNullType___nit__model_base__MEntity__c_name, /* pointer to model:MNotNullType:model#MNotNullType#c_name */
(nitmethod_t)nit___nit__MProxyType___nit__model_base__MEntity__model, /* pointer to model:MNotNullType:model#MProxyType#model */
(nitmethod_t)nit___nit__MType___nit__model_base__MEntity__name, /* pointer to model:MNotNullType:model#MType#name */
(nitmethod_t)nit___nit__MNotNullType___nit__model_base__MEntity__full_name, /* pointer to model:MNotNullType:model#MNotNullType#full_name */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MNotNullType:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MNotNullType:separate_compiler#MEntity#const_color */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MNotNullType:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MNotNullType:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MNotNullType:mdoc#MEntity#deprecation */
(nitmethod_t)nit___nit__MProxyType___MType__collect_mclassdefs, /* pointer to model:MNotNullType:model#MProxyType#collect_mclassdefs */
(nitmethod_t)nit___nit__MNotNullType___MType__resolve_for, /* pointer to model:MNotNullType:model#MNotNullType#resolve_for */
(nitmethod_t)nit__abstract_compiler___MType___ctype, /* pointer to model:MNotNullType:abstract_compiler#MType#ctype */
(nitmethod_t)nit___nit__MProxyType___MType__need_anchor, /* pointer to model:MNotNullType:model#MProxyType#need_anchor */
(nitmethod_t)nit___nit__MProxyType___MType__can_resolve_for, /* pointer to model:MNotNullType:model#MProxyType#can_resolve_for */
(nitmethod_t)nit___nit__MType___anchor_to, /* pointer to model:MNotNullType:model#MType#anchor_to */
(nitmethod_t)nit___nit__MProxyType___MType__as_nullable, /* pointer to model:MNotNullType:model#MProxyType#as_nullable */
(nitmethod_t)nit___nit__MType___is_subtype, /* pointer to model:MNotNullType:model#MType#is_subtype */
(nitmethod_t)nit___nit__MType___lookup_bound, /* pointer to model:MNotNullType:model#MType#lookup_bound */
(nitmethod_t)nit___nit__MNotNullType___MType__as_notnull, /* pointer to model:MNotNullType:model#MNotNullType#as_notnull */
(nitmethod_t)nit___nit__MProxyType___MType__length, /* pointer to model:MNotNullType:model#MProxyType#length */
(nitmethod_t)nit__separate_compiler___MType___is_tagged_61d, /* pointer to model:MNotNullType:separate_compiler#MType#is_tagged= */
(nitmethod_t)nit__abstract_compiler___MType___is_c_primitive, /* pointer to model:MNotNullType:abstract_compiler#MType#is_c_primitive */
(nitmethod_t)nit__separate_compiler___MType___is_tagged, /* pointer to model:MNotNullType:separate_compiler#MType#is_tagged */
(nitmethod_t)nit__abstract_compiler___MType___ctype_extern, /* pointer to model:MNotNullType:abstract_compiler#MType#ctype_extern */
(nitmethod_t)nit___nit__MType___as_nullable_cache, /* pointer to model:MNotNullType:model#MType#as_nullable_cache */
(nitmethod_t)nit___nit__MType___as_nullable_cache_61d, /* pointer to model:MNotNullType:model#MType#as_nullable_cache= */
(nitmethod_t)nit___nit__MNotNullType___MType__lookup_fixed, /* pointer to model:MNotNullType:model#MNotNullType#lookup_fixed */
(nitmethod_t)nit___nit__MProxyType___MType__collect_mclasses, /* pointer to model:MNotNullType:model#MProxyType#collect_mclasses */
(nitmethod_t)nit___nit__MType___supertype_to, /* pointer to model:MNotNullType:model#MType#supertype_to */
(nitmethod_t)nit___nit__MProxyType___MType__undecorate, /* pointer to model:MNotNullType:model#MProxyType#undecorate */
(nitmethod_t)nit___nit__MType___has_mproperty, /* pointer to model:MNotNullType:model#MType#has_mproperty */
(nitmethod_t)nit___nit__MProxyType___MType__collect_mtypes, /* pointer to model:MNotNullType:model#MProxyType#collect_mtypes */
(nitmethod_t)nit__abstract_compiler___MType___ctypename, /* pointer to model:MNotNullType:abstract_compiler#MType#ctypename */
(nitmethod_t)nit__nitni_base___MType___is_cprimitive, /* pointer to model:MNotNullType:nitni_base#MType#is_cprimitive */
(nitmethod_t)nit__nitni_base___MType___mangled_cname, /* pointer to model:MNotNullType:nitni_base#MType#mangled_cname */
(nitmethod_t)nit__nitni_base___MType___cname_blind, /* pointer to model:MNotNullType:nitni_base#MType#cname_blind */
(nitmethod_t)nit__nitni_base___MType___cname, /* pointer to model:MNotNullType:nitni_base#MType#cname */
(nitmethod_t)nit___nit__MProxyType___mtype, /* pointer to model:MNotNullType:model#MProxyType#mtype */
(nitmethod_t)nit___nit__MProxyType___mtype_61d, /* pointer to model:MNotNullType:model#MProxyType#mtype= */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MNotNullType:kernel#Object#init */
(nitmethod_t)nit___nit__MProxyType___MType__resolve_for, /* pointer to model:MNotNullType:model#MProxyType#resolve_for */
(nitmethod_t)nit___nit__MProxyType___MType__lookup_fixed, /* pointer to model:MNotNullType:model#MProxyType#lookup_fixed */
}
};
/* allocate MNotNullType */
val* NEW_nit__MNotNullType(const struct type* type) {
val* self /* : MNotNullType */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MNotNullType;
self->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s = 0; /* _is_tagged on <self:MNotNullType exact> */
return self;
}
/* runtime class nit__MNullType */
const struct class class_nit__MNullType = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MNullType___standard__kernel__Object__init, /* pointer to model:MNullType:model#MNullType#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MNullType:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MNullType:kernel#Object#sys */
(nitmethod_t)nit___nit__MNullType___standard__string__Object__to_s, /* pointer to model:MNullType:model#MNullType#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MNullType:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MNullType:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MNullType:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MNullType:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MNullType:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MNullType:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MNullType:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MNullType:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MNullType:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model:MNullType:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model:MNullType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model:MNullType:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MNullType___nit__model_base__MEntity__c_name, /* pointer to model:MNullType:model#MNullType#c_name */
(nitmethod_t)nit___nit__MNullType___nit__model_base__MEntity__model, /* pointer to model:MNullType:model#MNullType#model */
(nitmethod_t)nit___nit__MType___nit__model_base__MEntity__name, /* pointer to model:MNullType:model#MType#name */
(nitmethod_t)nit___nit__MNullType___nit__model_base__MEntity__full_name, /* pointer to model:MNullType:model#MNullType#full_name */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MNullType:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MNullType:separate_compiler#MEntity#const_color */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MNullType:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MNullType:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MNullType:mdoc#MEntity#deprecation */
(nitmethod_t)nit___nit__MNullType___MType__collect_mclassdefs, /* pointer to model:MNullType:model#MNullType#collect_mclassdefs */
(nitmethod_t)nit___nit__MNullType___MType__resolve_for, /* pointer to model:MNullType:model#MNullType#resolve_for */
(nitmethod_t)nit__abstract_compiler___MType___ctype, /* pointer to model:MNullType:abstract_compiler#MType#ctype */
(nitmethod_t)nit___nit__MNullType___MType__need_anchor, /* pointer to model:MNullType:model#MNullType#need_anchor */
(nitmethod_t)nit___nit__MNullType___MType__can_resolve_for, /* pointer to model:MNullType:model#MNullType#can_resolve_for */
(nitmethod_t)nit___nit__MType___anchor_to, /* pointer to model:MNullType:model#MType#anchor_to */
(nitmethod_t)nit___nit__MNullType___MType__as_nullable, /* pointer to model:MNullType:model#MNullType#as_nullable */
(nitmethod_t)nit___nit__MType___is_subtype, /* pointer to model:MNullType:model#MType#is_subtype */
(nitmethod_t)nit___nit__MType___lookup_bound, /* pointer to model:MNullType:model#MType#lookup_bound */
(nitmethod_t)nit___nit__MNullType___MType__as_notnull, /* pointer to model:MNullType:model#MNullType#as_notnull */
(nitmethod_t)nit___nit__MType___length, /* pointer to model:MNullType:model#MType#length */
(nitmethod_t)nit__separate_compiler___MType___is_tagged_61d, /* pointer to model:MNullType:separate_compiler#MType#is_tagged= */
(nitmethod_t)nit__abstract_compiler___MType___is_c_primitive, /* pointer to model:MNullType:abstract_compiler#MType#is_c_primitive */
(nitmethod_t)nit__separate_compiler___MType___is_tagged, /* pointer to model:MNullType:separate_compiler#MType#is_tagged */
(nitmethod_t)nit__abstract_compiler___MType___ctype_extern, /* pointer to model:MNullType:abstract_compiler#MType#ctype_extern */
(nitmethod_t)nit___nit__MType___as_nullable_cache, /* pointer to model:MNullType:model#MType#as_nullable_cache */
(nitmethod_t)nit___nit__MType___as_nullable_cache_61d, /* pointer to model:MNullType:model#MType#as_nullable_cache= */
(nitmethod_t)nit___nit__MType___lookup_fixed, /* pointer to model:MNullType:model#MType#lookup_fixed */
(nitmethod_t)nit___nit__MNullType___MType__collect_mclasses, /* pointer to model:MNullType:model#MNullType#collect_mclasses */
(nitmethod_t)nit___nit__MType___supertype_to, /* pointer to model:MNullType:model#MType#supertype_to */
(nitmethod_t)nit___nit__MType___undecorate, /* pointer to model:MNullType:model#MType#undecorate */
(nitmethod_t)nit___nit__MType___has_mproperty, /* pointer to model:MNullType:model#MType#has_mproperty */
(nitmethod_t)nit___nit__MNullType___MType__collect_mtypes, /* pointer to model:MNullType:model#MNullType#collect_mtypes */
(nitmethod_t)nit__abstract_compiler___MType___ctypename, /* pointer to model:MNullType:abstract_compiler#MType#ctypename */
(nitmethod_t)nit__nitni_base___MType___is_cprimitive, /* pointer to model:MNullType:nitni_base#MType#is_cprimitive */
(nitmethod_t)nit__nitni_base___MType___mangled_cname, /* pointer to model:MNullType:nitni_base#MType#mangled_cname */
(nitmethod_t)nit__nitni_base___MType___cname_blind, /* pointer to model:MNullType:nitni_base#MType#cname_blind */
(nitmethod_t)nit__nitni_base___MType___cname, /* pointer to model:MNullType:nitni_base#MType#cname */
(nitmethod_t)nit___nit__MNullType___model_61d, /* pointer to model:MNullType:model#MNullType#model= */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MNullType:kernel#Object#init */
}
};
/* allocate MNullType */
val* NEW_nit__MNullType(const struct type* type) {
val* self /* : MNullType */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MNullType;
self->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s = 0; /* _is_tagged on <self:MNullType exact> */
return self;
}
/* runtime class nit__MBottomType */
const struct class class_nit__MBottomType = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MBottomType___standard__kernel__Object__init, /* pointer to model:MBottomType:model#MBottomType#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MBottomType:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MBottomType:kernel#Object#sys */
(nitmethod_t)nit___nit__MBottomType___standard__string__Object__to_s, /* pointer to model:MBottomType:model#MBottomType#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MBottomType:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MBottomType:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MBottomType:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MBottomType:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MBottomType:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MBottomType:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MBottomType:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MBottomType:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MBottomType:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model:MBottomType:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model:MBottomType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model:MBottomType:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MBottomType___nit__model_base__MEntity__c_name, /* pointer to model:MBottomType:model#MBottomType#c_name */
(nitmethod_t)nit___nit__MBottomType___nit__model_base__MEntity__model, /* pointer to model:MBottomType:model#MBottomType#model */
(nitmethod_t)nit___nit__MType___nit__model_base__MEntity__name, /* pointer to model:MBottomType:model#MType#name */
(nitmethod_t)nit___nit__MBottomType___nit__model_base__MEntity__full_name, /* pointer to model:MBottomType:model#MBottomType#full_name */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MBottomType:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MBottomType:separate_compiler#MEntity#const_color */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MBottomType:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MBottomType:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MBottomType:mdoc#MEntity#deprecation */
(nitmethod_t)nit___nit__MBottomType___MType__collect_mclassdefs, /* pointer to model:MBottomType:model#MBottomType#collect_mclassdefs */
(nitmethod_t)nit___nit__MBottomType___MType__resolve_for, /* pointer to model:MBottomType:model#MBottomType#resolve_for */
(nitmethod_t)nit__abstract_compiler___MType___ctype, /* pointer to model:MBottomType:abstract_compiler#MType#ctype */
(nitmethod_t)nit___nit__MBottomType___MType__need_anchor, /* pointer to model:MBottomType:model#MBottomType#need_anchor */
(nitmethod_t)nit___nit__MBottomType___MType__can_resolve_for, /* pointer to model:MBottomType:model#MBottomType#can_resolve_for */
(nitmethod_t)nit___nit__MType___anchor_to, /* pointer to model:MBottomType:model#MType#anchor_to */
(nitmethod_t)nit___nit__MBottomType___MType__as_nullable, /* pointer to model:MBottomType:model#MBottomType#as_nullable */
(nitmethod_t)nit___nit__MType___is_subtype, /* pointer to model:MBottomType:model#MType#is_subtype */
(nitmethod_t)nit___nit__MType___lookup_bound, /* pointer to model:MBottomType:model#MType#lookup_bound */
(nitmethod_t)nit___nit__MBottomType___MType__as_notnull, /* pointer to model:MBottomType:model#MBottomType#as_notnull */
(nitmethod_t)nit___nit__MType___length, /* pointer to model:MBottomType:model#MType#length */
(nitmethod_t)nit__separate_compiler___MType___is_tagged_61d, /* pointer to model:MBottomType:separate_compiler#MType#is_tagged= */
(nitmethod_t)nit__abstract_compiler___MType___is_c_primitive, /* pointer to model:MBottomType:abstract_compiler#MType#is_c_primitive */
(nitmethod_t)nit__separate_compiler___MType___is_tagged, /* pointer to model:MBottomType:separate_compiler#MType#is_tagged */
(nitmethod_t)nit__abstract_compiler___MType___ctype_extern, /* pointer to model:MBottomType:abstract_compiler#MType#ctype_extern */
(nitmethod_t)nit___nit__MType___as_nullable_cache, /* pointer to model:MBottomType:model#MType#as_nullable_cache */
(nitmethod_t)nit___nit__MType___as_nullable_cache_61d, /* pointer to model:MBottomType:model#MType#as_nullable_cache= */
(nitmethod_t)nit___nit__MType___lookup_fixed, /* pointer to model:MBottomType:model#MType#lookup_fixed */
(nitmethod_t)nit___nit__MBottomType___MType__collect_mclasses, /* pointer to model:MBottomType:model#MBottomType#collect_mclasses */
(nitmethod_t)nit___nit__MType___supertype_to, /* pointer to model:MBottomType:model#MType#supertype_to */
(nitmethod_t)nit___nit__MType___undecorate, /* pointer to model:MBottomType:model#MType#undecorate */
(nitmethod_t)nit___nit__MType___has_mproperty, /* pointer to model:MBottomType:model#MType#has_mproperty */
(nitmethod_t)nit___nit__MBottomType___MType__collect_mtypes, /* pointer to model:MBottomType:model#MBottomType#collect_mtypes */
(nitmethod_t)nit__abstract_compiler___MType___ctypename, /* pointer to model:MBottomType:abstract_compiler#MType#ctypename */
(nitmethod_t)nit__nitni_base___MType___is_cprimitive, /* pointer to model:MBottomType:nitni_base#MType#is_cprimitive */
(nitmethod_t)nit__nitni_base___MType___mangled_cname, /* pointer to model:MBottomType:nitni_base#MType#mangled_cname */
(nitmethod_t)nit__nitni_base___MType___cname_blind, /* pointer to model:MBottomType:nitni_base#MType#cname_blind */
(nitmethod_t)nit__nitni_base___MType___cname, /* pointer to model:MBottomType:nitni_base#MType#cname */
(nitmethod_t)nit___nit__MBottomType___model_61d, /* pointer to model:MBottomType:model#MBottomType#model= */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MBottomType:kernel#Object#init */
}
};
/* allocate MBottomType */
val* NEW_nit__MBottomType(const struct type* type) {
val* self /* : MBottomType */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MBottomType;
self->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s = 0; /* _is_tagged on <self:MBottomType exact> */
return self;
}
/* runtime class nit__MSignature */
const struct class class_nit__MSignature = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MSignature___standard__kernel__Object__init, /* pointer to model:MSignature:model#MSignature#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MSignature:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MSignature:kernel#Object#sys */
(nitmethod_t)nit___nit__MSignature___standard__string__Object__to_s, /* pointer to model:MSignature:model#MSignature#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MSignature:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MSignature:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MSignature:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MSignature:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MSignature:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MSignature:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MSignature:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MSignature:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MSignature:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model:MSignature:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model:MSignature:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model:MSignature:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MEntity___c_name, /* pointer to model:MSignature:model_base#MEntity#c_name */
(nitmethod_t)nit___nit__MEntity___model, /* pointer to model:MSignature:model_base#MEntity#model */
(nitmethod_t)nit___nit__MType___nit__model_base__MEntity__name, /* pointer to model:MSignature:model#MType#name */
(nitmethod_t)nit___nit__MEntity___full_name, /* pointer to model:MSignature:model_base#MEntity#full_name */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MSignature:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MSignature:separate_compiler#MEntity#const_color */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MSignature:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MSignature:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MSignature:mdoc#MEntity#deprecation */
(nitmethod_t)nit___nit__MType___collect_mclassdefs, /* pointer to model:MSignature:model#MType#collect_mclassdefs */
(nitmethod_t)nit___nit__MSignature___MType__resolve_for, /* pointer to model:MSignature:model#MSignature#resolve_for */
(nitmethod_t)nit__abstract_compiler___MType___ctype, /* pointer to model:MSignature:abstract_compiler#MType#ctype */
(nitmethod_t)nit___nit__MType___need_anchor, /* pointer to model:MSignature:model#MType#need_anchor */
(nitmethod_t)nit___nit__MType___can_resolve_for, /* pointer to model:MSignature:model#MType#can_resolve_for */
(nitmethod_t)nit___nit__MType___anchor_to, /* pointer to model:MSignature:model#MType#anchor_to */
(nitmethod_t)nit___nit__MType___as_nullable, /* pointer to model:MSignature:model#MType#as_nullable */
(nitmethod_t)nit___nit__MType___is_subtype, /* pointer to model:MSignature:model#MType#is_subtype */
(nitmethod_t)nit___nit__MType___lookup_bound, /* pointer to model:MSignature:model#MType#lookup_bound */
(nitmethod_t)nit___nit__MType___as_notnull, /* pointer to model:MSignature:model#MType#as_notnull */
(nitmethod_t)nit___nit__MSignature___MType__length, /* pointer to model:MSignature:model#MSignature#length */
(nitmethod_t)nit__separate_compiler___MType___is_tagged_61d, /* pointer to model:MSignature:separate_compiler#MType#is_tagged= */
(nitmethod_t)nit__abstract_compiler___MType___is_c_primitive, /* pointer to model:MSignature:abstract_compiler#MType#is_c_primitive */
(nitmethod_t)nit__separate_compiler___MType___is_tagged, /* pointer to model:MSignature:separate_compiler#MType#is_tagged */
(nitmethod_t)nit__abstract_compiler___MType___ctype_extern, /* pointer to model:MSignature:abstract_compiler#MType#ctype_extern */
(nitmethod_t)nit___nit__MType___as_nullable_cache, /* pointer to model:MSignature:model#MType#as_nullable_cache */
(nitmethod_t)nit___nit__MType___as_nullable_cache_61d, /* pointer to model:MSignature:model#MType#as_nullable_cache= */
(nitmethod_t)nit___nit__MType___lookup_fixed, /* pointer to model:MSignature:model#MType#lookup_fixed */
(nitmethod_t)nit___nit__MType___collect_mclasses, /* pointer to model:MSignature:model#MType#collect_mclasses */
(nitmethod_t)nit___nit__MType___supertype_to, /* pointer to model:MSignature:model#MType#supertype_to */
(nitmethod_t)nit___nit__MType___undecorate, /* pointer to model:MSignature:model#MType#undecorate */
(nitmethod_t)nit___nit__MType___has_mproperty, /* pointer to model:MSignature:model#MType#has_mproperty */
(nitmethod_t)nit___nit__MType___collect_mtypes, /* pointer to model:MSignature:model#MType#collect_mtypes */
(nitmethod_t)nit__abstract_compiler___MType___ctypename, /* pointer to model:MSignature:abstract_compiler#MType#ctypename */
(nitmethod_t)nit__nitni_base___MType___is_cprimitive, /* pointer to model:MSignature:nitni_base#MType#is_cprimitive */
(nitmethod_t)nit__nitni_base___MType___mangled_cname, /* pointer to model:MSignature:nitni_base#MType#mangled_cname */
(nitmethod_t)nit__nitni_base___MType___cname_blind, /* pointer to model:MSignature:nitni_base#MType#cname_blind */
(nitmethod_t)nit__nitni_base___MType___cname, /* pointer to model:MSignature:nitni_base#MType#cname */
(nitmethod_t)nit___nit__MSignature___return_mtype, /* pointer to model:MSignature:model#MSignature#return_mtype */
(nitmethod_t)nit___nit__MSignature___vararg_rank, /* pointer to model:MSignature:model#MSignature#vararg_rank */
(nitmethod_t)nit___nit__MSignature___mparameters, /* pointer to model:MSignature:model#MSignature#mparameters */
(nitmethod_t)nit___nit__MSignature___arity, /* pointer to model:MSignature:model#MSignature#arity */
(nitmethod_t)nit___nit__MSignature___mparameters_61d, /* pointer to model:MSignature:model#MSignature#mparameters= */
(nitmethod_t)nit___nit__MSignature___return_mtype_61d, /* pointer to model:MSignature:model#MSignature#return_mtype= */
(nitmethod_t)nit___nit__MSignature___vararg_rank_61d, /* pointer to model:MSignature:model#MSignature#vararg_rank= */
(nitmethod_t)nit__separate_compiler___MSignature___c_equiv, /* pointer to model:MSignature:separate_compiler#MSignature#c_equiv */
(nitmethod_t)nit___nit__MSignature___min_arity, /* pointer to model:MSignature:model#MSignature#min_arity */
(nitmethod_t)nit___nit__MSignature___mparameter_by_name, /* pointer to model:MSignature:model#MSignature#mparameter_by_name */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MSignature:kernel#Object#init */
}
};
/* allocate MSignature */
val* NEW_nit__MSignature(const struct type* type) {
val* self /* : MSignature */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MSignature;
self->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s = 0; /* _is_tagged on <self:MSignature exact> */
return self;
}
/* runtime class nit__MParameter */
const struct class class_nit__MParameter = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MParameter___standard__kernel__Object__init, /* pointer to model:MParameter:model#MParameter#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MParameter:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MParameter:kernel#Object#sys */
(nitmethod_t)nit___nit__MParameter___standard__string__Object__to_s, /* pointer to model:MParameter:model#MParameter#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MParameter:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MParameter:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MParameter:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MParameter:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MParameter:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MParameter:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MParameter:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MParameter:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MParameter:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model:MParameter:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model:MParameter:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model:MParameter:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MEntity___c_name, /* pointer to model:MParameter:model_base#MEntity#c_name */
(nitmethod_t)nit___nit__MParameter___nit__model_base__MEntity__model, /* pointer to model:MParameter:model#MParameter#model */
(nitmethod_t)nit___nit__MParameter___nit__model_base__MEntity__name, /* pointer to model:MParameter:model#MParameter#name */
(nitmethod_t)nit___nit__MEntity___full_name, /* pointer to model:MParameter:model_base#MEntity#full_name */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MParameter:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MParameter:separate_compiler#MEntity#const_color */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MParameter:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MParameter:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MParameter:mdoc#MEntity#deprecation */
(nitmethod_t)nit___nit__MParameter___mtype, /* pointer to model:MParameter:model#MParameter#mtype */
(nitmethod_t)nit___nit__MParameter___name_61d, /* pointer to model:MParameter:model#MParameter#name= */
(nitmethod_t)nit___nit__MParameter___mtype_61d, /* pointer to model:MParameter:model#MParameter#mtype= */
(nitmethod_t)nit___nit__MParameter___is_vararg_61d, /* pointer to model:MParameter:model#MParameter#is_vararg= */
(nitmethod_t)nit___nit__MParameter___is_default_61d, /* pointer to model:MParameter:model#MParameter#is_default= */
(nitmethod_t)nit___nit__MParameter___is_default, /* pointer to model:MParameter:model#MParameter#is_default */
(nitmethod_t)nit___nit__MParameter___is_vararg, /* pointer to model:MParameter:model#MParameter#is_vararg */
(nitmethod_t)nit___nit__MParameter___resolve_for, /* pointer to model:MParameter:model#MParameter#resolve_for */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MParameter:kernel#Object#init */
}
};
/* allocate MParameter */
val* NEW_nit__MParameter(const struct type* type) {
val* self /* : MParameter */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MParameter;
return self;
}
/* runtime class nit__MProperty */
/* allocate MProperty */
val* NEW_nit__MProperty(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MProperty is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__MMethod */
const struct class class_nit__MMethod = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MProperty___standard__kernel__Object__init, /* pointer to model:MMethod:model#MProperty#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MMethod:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MMethod:kernel#Object#sys */
(nitmethod_t)nit___nit__MProperty___standard__string__Object__to_s, /* pointer to model:MMethod:model#MProperty#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MMethod:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MMethod:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MMethod:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MMethod:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MMethod:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MMethod:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MMethod:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MMethod:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MMethod:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model:MMethod:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model:MMethod:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model:MMethod:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__c_name, /* pointer to model:MMethod:model#MProperty#c_name */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__model, /* pointer to model:MMethod:model#MProperty#model */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__name, /* pointer to model:MMethod:model#MProperty#name */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__full_name, /* pointer to model:MMethod:model#MProperty#full_name */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MMethod:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MMethod:separate_compiler#MEntity#const_color */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MMethod:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MMethod:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MMethod:mdoc#MEntity#deprecation */
(nitmethod_t)nit___nit__MProperty___intro, /* pointer to model:MMethod:model#MProperty#intro */
(nitmethod_t)nit___nit__MProperty___intro_mclassdef, /* pointer to model:MMethod:model#MProperty#intro_mclassdef */
(nitmethod_t)nit___nit__MProperty___visibility, /* pointer to model:MMethod:model#MProperty#visibility */
(nitmethod_t)nit___nit__MProperty___mpropdefs, /* pointer to model:MMethod:model#MProperty#mpropdefs */
(nitmethod_t)nit___nit__MProperty___intro_61d, /* pointer to model:MMethod:model#MProperty#intro= */
(nitmethod_t)nit___nit__MProperty___lookup_definitions, /* pointer to model:MMethod:model#MProperty#lookup_definitions */
(nitmethod_t)nit___nit__MProperty___intro_mclassdef_61d, /* pointer to model:MMethod:model#MProperty#intro_mclassdef= */
(nitmethod_t)nit___nit__MProperty___name_61d, /* pointer to model:MMethod:model#MProperty#name= */
(nitmethod_t)nit___nit__MProperty___visibility_61d, /* pointer to model:MMethod:model#MProperty#visibility= */
(nitmethod_t)nit___nit__MProperty___is_autoinit_61d, /* pointer to model:MMethod:model#MProperty#is_autoinit= */
(nitmethod_t)nit___nit__MProperty___lookup_super_definitions, /* pointer to model:MMethod:model#MProperty#lookup_super_definitions */
(nitmethod_t)nit___nit__MProperty___is_autoinit, /* pointer to model:MMethod:model#MProperty#is_autoinit */
(nitmethod_t)nit___nit__MProperty___lookup_first_definition, /* pointer to model:MMethod:model#MProperty#lookup_first_definition */
(nitmethod_t)nit___nit__MProperty___lookup_definitions_cache, /* pointer to model:MMethod:model#MProperty#lookup_definitions_cache */
(nitmethod_t)nit___nit__MProperty___select_most_specific, /* pointer to model:MMethod:model#MProperty#select_most_specific */
(nitmethod_t)nit___nit__MProperty___lookup_all_definitions, /* pointer to model:MMethod:model#MProperty#lookup_all_definitions */
(nitmethod_t)nit___nit__MProperty___lookup_all_definitions_cache, /* pointer to model:MMethod:model#MProperty#lookup_all_definitions_cache */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MMethod:kernel#Object#init */
(nitmethod_t)nit___nit__MMethod___is_root_init, /* pointer to model:MMethod:model#MMethod#is_root_init */
(nitmethod_t)nit___nit__MMethod___is_root_init_61d, /* pointer to model:MMethod:model#MMethod#is_root_init= */
(nitmethod_t)nit___nit__MMethod___is_init_61d, /* pointer to model:MMethod:model#MMethod#is_init= */
(nitmethod_t)nit___nit__MMethod___is_init, /* pointer to model:MMethod:model#MMethod#is_init */
(nitmethod_t)nit___nit__MMethod___is_new, /* pointer to model:MMethod:model#MMethod#is_new */
(nitmethod_t)nit___nit__MMethod___is_new_61d, /* pointer to model:MMethod:model#MMethod#is_new= */
(nitmethod_t)nit___nit__MMethod___is_toplevel_61d, /* pointer to model:MMethod:model#MMethod#is_toplevel= */
(nitmethod_t)nit___nit__MMethod___is_init_for, /* pointer to model:MMethod:model#MMethod#is_init_for */
(nitmethod_t)nit___nit__MMethod___is_null_safe, /* pointer to model:MMethod:model#MMethod#is_null_safe */
(nitmethod_t)nit___nit__MMethod___is_toplevel, /* pointer to model:MMethod:model#MMethod#is_toplevel */
(nitmethod_t)nit__nitni_utilities___MMethod___build_cname, /* pointer to model:MMethod:nitni_utilities#MMethod#build_cname */
(nitmethod_t)nit__nitni_base___MMethod___short_cname, /* pointer to model:MMethod:nitni_base#MMethod#short_cname */
(nitmethod_t)nit__nitni_utilities___MMethod___build_csignature, /* pointer to model:MMethod:nitni_utilities#MMethod#build_csignature */
}
};
/* allocate MMethod */
val* NEW_nit__MMethod(const struct type* type) {
val* self /* : MMethod */;
val* var /* : Array[MMethodDef] */;
val* var1 /* : HashMap2[MModule, MType, Array[MMethodDef]] */;
val* var2 /* : HashMap2[MModule, MType, Array[MMethodDef]] */;
self = nit_alloc(sizeof(struct instance) + 20*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MMethod;
self->attrs[COLOR_nit__model__MProperty___is_autoinit].s = 0; /* _is_autoinit on <self:MMethod exact> */
var = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__nit__model__MProperty__MPROPDEF]);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[MMethodDef]>*/
}
self->attrs[COLOR_nit__model__MProperty___mpropdefs].val = var; /* _mpropdefs on <self:MMethod exact> */
var1 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__model__MProperty__MPROPDEF]);
{
{ /* Inline kernel#Object#init (var1) on <var1:HashMap2[MModule, MType, Array[MMethodDef]]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__model__MProperty___lookup_definitions_cache].val = var1; /* _lookup_definitions_cache on <self:MMethod exact> */
var2 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__model__MProperty__MPROPDEF]);
{
{ /* Inline kernel#Object#init (var2) on <var2:HashMap2[MModule, MType, Array[MMethodDef]]> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_nit__model__MProperty___lookup_all_definitions_cache].val = var2; /* _lookup_all_definitions_cache on <self:MMethod exact> */
self->attrs[COLOR_nit__model__MMethod___is_toplevel].s = 0; /* _is_toplevel on <self:MMethod exact> */
self->attrs[COLOR_nit__model__MMethod___is_init].s = 0; /* _is_init on <self:MMethod exact> */
self->attrs[COLOR_nit__model__MMethod___is_root_init].s = 0; /* _is_root_init on <self:MMethod exact> */
self->attrs[COLOR_nit__model__MMethod___is_new].s = 0; /* _is_new on <self:MMethod exact> */
return self;
}
/* runtime class nit__MAttribute */
const struct class class_nit__MAttribute = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MProperty___standard__kernel__Object__init, /* pointer to model:MAttribute:model#MProperty#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MAttribute:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MAttribute:kernel#Object#sys */
(nitmethod_t)nit___nit__MProperty___standard__string__Object__to_s, /* pointer to model:MAttribute:model#MProperty#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MAttribute:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MAttribute:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MAttribute:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MAttribute:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MAttribute:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MAttribute:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MAttribute:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MAttribute:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MAttribute:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model:MAttribute:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model:MAttribute:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model:MAttribute:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__c_name, /* pointer to model:MAttribute:model#MProperty#c_name */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__model, /* pointer to model:MAttribute:model#MProperty#model */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__name, /* pointer to model:MAttribute:model#MProperty#name */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__full_name, /* pointer to model:MAttribute:model#MProperty#full_name */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MAttribute:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MAttribute:separate_compiler#MEntity#const_color */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MAttribute:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MAttribute:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MAttribute:mdoc#MEntity#deprecation */
(nitmethod_t)nit___nit__MProperty___intro, /* pointer to model:MAttribute:model#MProperty#intro */
(nitmethod_t)nit___nit__MProperty___intro_mclassdef, /* pointer to model:MAttribute:model#MProperty#intro_mclassdef */
(nitmethod_t)nit___nit__MProperty___visibility, /* pointer to model:MAttribute:model#MProperty#visibility */
(nitmethod_t)nit___nit__MProperty___mpropdefs, /* pointer to model:MAttribute:model#MProperty#mpropdefs */
(nitmethod_t)nit___nit__MProperty___intro_61d, /* pointer to model:MAttribute:model#MProperty#intro= */
(nitmethod_t)nit___nit__MProperty___lookup_definitions, /* pointer to model:MAttribute:model#MProperty#lookup_definitions */
(nitmethod_t)nit___nit__MProperty___intro_mclassdef_61d, /* pointer to model:MAttribute:model#MProperty#intro_mclassdef= */
(nitmethod_t)nit___nit__MProperty___name_61d, /* pointer to model:MAttribute:model#MProperty#name= */
(nitmethod_t)nit___nit__MProperty___visibility_61d, /* pointer to model:MAttribute:model#MProperty#visibility= */
(nitmethod_t)nit___nit__MProperty___is_autoinit_61d, /* pointer to model:MAttribute:model#MProperty#is_autoinit= */
(nitmethod_t)nit___nit__MProperty___lookup_super_definitions, /* pointer to model:MAttribute:model#MProperty#lookup_super_definitions */
(nitmethod_t)nit___nit__MProperty___is_autoinit, /* pointer to model:MAttribute:model#MProperty#is_autoinit */
(nitmethod_t)nit___nit__MProperty___lookup_first_definition, /* pointer to model:MAttribute:model#MProperty#lookup_first_definition */
(nitmethod_t)nit___nit__MProperty___lookup_definitions_cache, /* pointer to model:MAttribute:model#MProperty#lookup_definitions_cache */
(nitmethod_t)nit___nit__MProperty___select_most_specific, /* pointer to model:MAttribute:model#MProperty#select_most_specific */
(nitmethod_t)nit___nit__MProperty___lookup_all_definitions, /* pointer to model:MAttribute:model#MProperty#lookup_all_definitions */
(nitmethod_t)nit___nit__MProperty___lookup_all_definitions_cache, /* pointer to model:MAttribute:model#MProperty#lookup_all_definitions_cache */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MAttribute:kernel#Object#init */
}
};
/* allocate MAttribute */
val* NEW_nit__MAttribute(const struct type* type) {
val* self /* : MAttribute */;
val* var /* : Array[MAttributeDef] */;
val* var1 /* : HashMap2[MModule, MType, Array[MAttributeDef]] */;
val* var2 /* : HashMap2[MModule, MType, Array[MAttributeDef]] */;
self = nit_alloc(sizeof(struct instance) + 16*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MAttribute;
self->attrs[COLOR_nit__model__MProperty___is_autoinit].s = 0; /* _is_autoinit on <self:MAttribute exact> */
var = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__nit__model__MProperty__MPROPDEF]);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[MAttributeDef]>*/
}
self->attrs[COLOR_nit__model__MProperty___mpropdefs].val = var; /* _mpropdefs on <self:MAttribute exact> */
var1 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__model__MProperty__MPROPDEF]);
{
{ /* Inline kernel#Object#init (var1) on <var1:HashMap2[MModule, MType, Array[MAttributeDef]]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__model__MProperty___lookup_definitions_cache].val = var1; /* _lookup_definitions_cache on <self:MAttribute exact> */
var2 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__model__MProperty__MPROPDEF]);
{
{ /* Inline kernel#Object#init (var2) on <var2:HashMap2[MModule, MType, Array[MAttributeDef]]> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_nit__model__MProperty___lookup_all_definitions_cache].val = var2; /* _lookup_all_definitions_cache on <self:MAttribute exact> */
return self;
}
/* runtime class nit__MVirtualTypeProp */
const struct class class_nit__MVirtualTypeProp = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MProperty___standard__kernel__Object__init, /* pointer to model:MVirtualTypeProp:model#MProperty#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MVirtualTypeProp:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MVirtualTypeProp:kernel#Object#sys */
(nitmethod_t)nit___nit__MProperty___standard__string__Object__to_s, /* pointer to model:MVirtualTypeProp:model#MProperty#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MVirtualTypeProp:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MVirtualTypeProp:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MVirtualTypeProp:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MVirtualTypeProp:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MVirtualTypeProp:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MVirtualTypeProp:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MVirtualTypeProp:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MVirtualTypeProp:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MVirtualTypeProp:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model:MVirtualTypeProp:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model:MVirtualTypeProp:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model:MVirtualTypeProp:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__c_name, /* pointer to model:MVirtualTypeProp:model#MProperty#c_name */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__model, /* pointer to model:MVirtualTypeProp:model#MProperty#model */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__name, /* pointer to model:MVirtualTypeProp:model#MProperty#name */
(nitmethod_t)nit___nit__MProperty___nit__model_base__MEntity__full_name, /* pointer to model:MVirtualTypeProp:model#MProperty#full_name */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MVirtualTypeProp:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MVirtualTypeProp:separate_compiler#MEntity#const_color */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MVirtualTypeProp:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MVirtualTypeProp:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MVirtualTypeProp:mdoc#MEntity#deprecation */
(nitmethod_t)nit___nit__MProperty___intro, /* pointer to model:MVirtualTypeProp:model#MProperty#intro */
(nitmethod_t)nit___nit__MProperty___intro_mclassdef, /* pointer to model:MVirtualTypeProp:model#MProperty#intro_mclassdef */
(nitmethod_t)nit___nit__MProperty___visibility, /* pointer to model:MVirtualTypeProp:model#MProperty#visibility */
(nitmethod_t)nit___nit__MProperty___mpropdefs, /* pointer to model:MVirtualTypeProp:model#MProperty#mpropdefs */
(nitmethod_t)nit___nit__MProperty___intro_61d, /* pointer to model:MVirtualTypeProp:model#MProperty#intro= */
(nitmethod_t)nit___nit__MProperty___lookup_definitions, /* pointer to model:MVirtualTypeProp:model#MProperty#lookup_definitions */
(nitmethod_t)nit___nit__MProperty___intro_mclassdef_61d, /* pointer to model:MVirtualTypeProp:model#MProperty#intro_mclassdef= */
(nitmethod_t)nit___nit__MProperty___name_61d, /* pointer to model:MVirtualTypeProp:model#MProperty#name= */
(nitmethod_t)nit___nit__MProperty___visibility_61d, /* pointer to model:MVirtualTypeProp:model#MProperty#visibility= */
(nitmethod_t)nit___nit__MProperty___is_autoinit_61d, /* pointer to model:MVirtualTypeProp:model#MProperty#is_autoinit= */
(nitmethod_t)nit___nit__MProperty___lookup_super_definitions, /* pointer to model:MVirtualTypeProp:model#MProperty#lookup_super_definitions */
(nitmethod_t)nit___nit__MProperty___is_autoinit, /* pointer to model:MVirtualTypeProp:model#MProperty#is_autoinit */
(nitmethod_t)nit___nit__MProperty___lookup_first_definition, /* pointer to model:MVirtualTypeProp:model#MProperty#lookup_first_definition */
(nitmethod_t)nit___nit__MProperty___lookup_definitions_cache, /* pointer to model:MVirtualTypeProp:model#MProperty#lookup_definitions_cache */
(nitmethod_t)nit___nit__MProperty___select_most_specific, /* pointer to model:MVirtualTypeProp:model#MProperty#select_most_specific */
(nitmethod_t)nit___nit__MProperty___lookup_all_definitions, /* pointer to model:MVirtualTypeProp:model#MProperty#lookup_all_definitions */
(nitmethod_t)nit___nit__MProperty___lookup_all_definitions_cache, /* pointer to model:MVirtualTypeProp:model#MProperty#lookup_all_definitions_cache */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MVirtualTypeProp:kernel#Object#init */
(nitmethod_t)nit___nit__MVirtualTypeProp___mvirtualtype, /* pointer to model:MVirtualTypeProp:model#MVirtualTypeProp#mvirtualtype */
}
};
/* allocate MVirtualTypeProp */
val* NEW_nit__MVirtualTypeProp(const struct type* type) {
val* self /* : MVirtualTypeProp */;
val* var /* : Array[MVirtualTypeDef] */;
val* var1 /* : HashMap2[MModule, MType, Array[MVirtualTypeDef]] */;
val* var2 /* : HashMap2[MModule, MType, Array[MVirtualTypeDef]] */;
val* var4 /* : MVirtualType */;
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MVirtualTypeProp;
self->attrs[COLOR_nit__model__MProperty___is_autoinit].s = 0; /* _is_autoinit on <self:MVirtualTypeProp exact> */
var = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__nit__model__MProperty__MPROPDEF]);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[MVirtualTypeDef]>*/
}
self->attrs[COLOR_nit__model__MProperty___mpropdefs].val = var; /* _mpropdefs on <self:MVirtualTypeProp exact> */
var1 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__model__MProperty__MPROPDEF]);
{
{ /* Inline kernel#Object#init (var1) on <var1:HashMap2[MModule, MType, Array[MVirtualTypeDef]]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__model__MProperty___lookup_definitions_cache].val = var1; /* _lookup_definitions_cache on <self:MVirtualTypeProp exact> */
var2 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2__nit__MModule__nit__MType__standard__Array__nit__model__MProperty__MPROPDEF]);
{
{ /* Inline kernel#Object#init (var2) on <var2:HashMap2[MModule, MType, Array[MVirtualTypeDef]]> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_nit__model__MProperty___lookup_all_definitions_cache].val = var2; /* _lookup_all_definitions_cache on <self:MVirtualTypeProp exact> */
var4 = NEW_nit__MVirtualType(&type_nit__MVirtualType);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nit__model__MVirtualType__mproperty_61d]))(var4, self); /* mproperty= on <var4:MVirtualType>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:MVirtualType>*/
}
self->attrs[COLOR_nit__model__MVirtualTypeProp___mvirtualtype].val = var4; /* _mvirtualtype on <self:MVirtualTypeProp exact> */
return self;
}
/* runtime class nit__MPropDef */
/* allocate MPropDef */
val* NEW_nit__MPropDef(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MPropDef is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__MMethodDef */
const struct class class_nit__MMethodDef = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MPropDef___standard__kernel__Object__init, /* pointer to model:MMethodDef:model#MPropDef#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MMethodDef:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MMethodDef:kernel#Object#sys */
(nitmethod_t)nit___nit__MPropDef___standard__string__Object__to_s, /* pointer to model:MMethodDef:model#MPropDef#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MMethodDef:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MMethodDef:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MMethodDef:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MMethodDef:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MMethodDef:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MMethodDef:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MMethodDef:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MMethodDef:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MMethodDef:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model:MMethodDef:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model:MMethodDef:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model:MMethodDef:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__c_name, /* pointer to model:MMethodDef:model#MPropDef#c_name */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__model, /* pointer to model:MMethodDef:model#MPropDef#model */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__name, /* pointer to model:MMethodDef:model#MPropDef#name */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__full_name, /* pointer to model:MMethodDef:model#MPropDef#full_name */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MMethodDef:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MMethodDef:separate_compiler#MEntity#const_color */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MMethodDef:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MMethodDef:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MMethodDef:mdoc#MEntity#deprecation */
(nitmethod_t)nit___nit__MPropDef___mclassdef, /* pointer to model:MMethodDef:model#MPropDef#mclassdef */
(nitmethod_t)nit___nit__MPropDef___mproperty, /* pointer to model:MMethodDef:model#MPropDef#mproperty */
(nitmethod_t)nit___nit__MPropDef___mclassdef_61d, /* pointer to model:MMethodDef:model#MPropDef#mclassdef= */
(nitmethod_t)nit___nit__MPropDef___mproperty_61d, /* pointer to model:MMethodDef:model#MPropDef#mproperty= */
(nitmethod_t)nit___nit__MPropDef___location_61d, /* pointer to model:MMethodDef:model#MPropDef#location= */
(nitmethod_t)nit___nit__MPropDef___to_s_61d, /* pointer to model:MMethodDef:model#MPropDef#to_s= */
(nitmethod_t)nit___nit__MPropDef___is_intro, /* pointer to model:MMethodDef:model#MPropDef#is_intro */
(nitmethod_t)nit__modelize_property___MPropDef___has_supercall_61d, /* pointer to model:MMethodDef:modelize_property#MPropDef#has_supercall= */
(nitmethod_t)nit__modelize_property___MPropDef___has_supercall, /* pointer to model:MMethodDef:modelize_property#MPropDef#has_supercall */
(nitmethod_t)nit___nit__MPropDef___lookup_next_definition, /* pointer to model:MMethodDef:model#MPropDef#lookup_next_definition */
(nitmethod_t)nit___nit__MPropDef___location, /* pointer to model:MMethodDef:model#MPropDef#location */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MMethodDef:kernel#Object#init */
(nitmethod_t)nit___nit__MMethodDef___msignature, /* pointer to model:MMethodDef:model#MMethodDef#msignature */
(nitmethod_t)nit___nit__MMethodDef___msignature_61d, /* pointer to model:MMethodDef:model#MMethodDef#msignature= */
(nitmethod_t)nit___nit__MMethodDef___constant_value_61d, /* pointer to model:MMethodDef:model#MMethodDef#constant_value= */
(nitmethod_t)nit___nit__MMethodDef___constant_value, /* pointer to model:MMethodDef:model#MMethodDef#constant_value */
(nitmethod_t)nit___nit__MMethodDef___is_intern, /* pointer to model:MMethodDef:model#MMethodDef#is_intern */
(nitmethod_t)nit___nit__MMethodDef___is_extern, /* pointer to model:MMethodDef:model#MMethodDef#is_extern */
(nitmethod_t)nit___nit__MMethodDef___new_msignature_61d, /* pointer to model:MMethodDef:model#MMethodDef#new_msignature= */
(nitmethod_t)nit___nit__MMethodDef___initializers, /* pointer to model:MMethodDef:model#MMethodDef#initializers */
(nitmethod_t)nit___nit__MMethodDef___new_msignature, /* pointer to model:MMethodDef:model#MMethodDef#new_msignature */
(nitmethod_t)nit__separate_compiler___MMethodDef___virtual_runtime_function, /* pointer to model:MMethodDef:separate_compiler#MMethodDef#virtual_runtime_function */
(nitmethod_t)nit__separate_compiler___MMethodDef___separate_runtime_function, /* pointer to model:MMethodDef:separate_compiler#MMethodDef#separate_runtime_function */
(nitmethod_t)nit__separate_compiler___MMethodDef___virtual_runtime_function_cache, /* pointer to model:MMethodDef:separate_compiler#MMethodDef#virtual_runtime_function_cache */
(nitmethod_t)nit__separate_compiler___MMethodDef___virtual_runtime_function_cache_61d, /* pointer to model:MMethodDef:separate_compiler#MMethodDef#virtual_runtime_function_cache= */
(nitmethod_t)nit__separate_compiler___MMethodDef___separate_runtime_function_cache, /* pointer to model:MMethodDef:separate_compiler#MMethodDef#separate_runtime_function_cache */
(nitmethod_t)nit__separate_compiler___MMethodDef___separate_runtime_function_cache_61d, /* pointer to model:MMethodDef:separate_compiler#MMethodDef#separate_runtime_function_cache= */
(nitmethod_t)nit___nit__MMethodDef___is_abstract_61d, /* pointer to model:MMethodDef:model#MMethodDef#is_abstract= */
(nitmethod_t)nit___nit__MMethodDef___is_intern_61d, /* pointer to model:MMethodDef:model#MMethodDef#is_intern= */
(nitmethod_t)nit___nit__MMethodDef___is_extern_61d, /* pointer to model:MMethodDef:model#MMethodDef#is_extern= */
(nitmethod_t)nit__abstract_compiler___MMethodDef___compile_inside_to_c, /* pointer to model:MMethodDef:abstract_compiler#MMethodDef#compile_inside_to_c */
(nitmethod_t)nit__abstract_compiler___MMethodDef___can_inline, /* pointer to model:MMethodDef:abstract_compiler#MMethodDef#can_inline */
(nitmethod_t)nit___nit__MMethodDef___is_abstract, /* pointer to model:MMethodDef:model#MMethodDef#is_abstract */
(nitmethod_t)nit__abstract_compiler___MMethodDef___compile_parameter_check, /* pointer to model:MMethodDef:abstract_compiler#MMethodDef#compile_parameter_check */
}
};
/* allocate MMethodDef */
val* NEW_nit__MMethodDef(const struct type* type) {
val* self /* : MMethodDef */;
val* var /* : Array[MProperty] */;
self = nit_alloc(sizeof(struct instance) + 22*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MMethodDef;
self->attrs[COLOR_nit__modelize_property__MPropDef___has_supercall].s = 0; /* _has_supercall on <self:MMethodDef exact> */
var = NEW_standard__Array(&type_standard__Array__nit__MProperty);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[MProperty]>*/
}
self->attrs[COLOR_nit__model__MMethodDef___initializers].val = var; /* _initializers on <self:MMethodDef exact> */
self->attrs[COLOR_nit__model__MMethodDef___is_abstract].s = 0; /* _is_abstract on <self:MMethodDef exact> */
self->attrs[COLOR_nit__model__MMethodDef___is_intern].s = 0; /* _is_intern on <self:MMethodDef exact> */
self->attrs[COLOR_nit__model__MMethodDef___is_extern].s = 0; /* _is_extern on <self:MMethodDef exact> */
return self;
}
/* runtime class nit__MAttributeDef */
const struct class class_nit__MAttributeDef = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MPropDef___standard__kernel__Object__init, /* pointer to model:MAttributeDef:model#MPropDef#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MAttributeDef:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MAttributeDef:kernel#Object#sys */
(nitmethod_t)nit___nit__MPropDef___standard__string__Object__to_s, /* pointer to model:MAttributeDef:model#MPropDef#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MAttributeDef:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MAttributeDef:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MAttributeDef:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MAttributeDef:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MAttributeDef:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MAttributeDef:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MAttributeDef:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MAttributeDef:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MAttributeDef:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model:MAttributeDef:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model:MAttributeDef:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model:MAttributeDef:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__c_name, /* pointer to model:MAttributeDef:model#MPropDef#c_name */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__model, /* pointer to model:MAttributeDef:model#MPropDef#model */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__name, /* pointer to model:MAttributeDef:model#MPropDef#name */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__full_name, /* pointer to model:MAttributeDef:model#MPropDef#full_name */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MAttributeDef:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MAttributeDef:separate_compiler#MEntity#const_color */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MAttributeDef:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MAttributeDef:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MAttributeDef:mdoc#MEntity#deprecation */
(nitmethod_t)nit___nit__MPropDef___mclassdef, /* pointer to model:MAttributeDef:model#MPropDef#mclassdef */
(nitmethod_t)nit___nit__MPropDef___mproperty, /* pointer to model:MAttributeDef:model#MPropDef#mproperty */
(nitmethod_t)nit___nit__MPropDef___mclassdef_61d, /* pointer to model:MAttributeDef:model#MPropDef#mclassdef= */
(nitmethod_t)nit___nit__MPropDef___mproperty_61d, /* pointer to model:MAttributeDef:model#MPropDef#mproperty= */
(nitmethod_t)nit___nit__MPropDef___location_61d, /* pointer to model:MAttributeDef:model#MPropDef#location= */
(nitmethod_t)nit___nit__MPropDef___to_s_61d, /* pointer to model:MAttributeDef:model#MPropDef#to_s= */
(nitmethod_t)nit___nit__MPropDef___is_intro, /* pointer to model:MAttributeDef:model#MPropDef#is_intro */
(nitmethod_t)nit__modelize_property___MPropDef___has_supercall_61d, /* pointer to model:MAttributeDef:modelize_property#MPropDef#has_supercall= */
(nitmethod_t)nit__modelize_property___MPropDef___has_supercall, /* pointer to model:MAttributeDef:modelize_property#MPropDef#has_supercall */
(nitmethod_t)nit___nit__MPropDef___lookup_next_definition, /* pointer to model:MAttributeDef:model#MPropDef#lookup_next_definition */
(nitmethod_t)nit___nit__MPropDef___location, /* pointer to model:MAttributeDef:model#MPropDef#location */
(nitmethod_t)standard___standard__Object___init, /* pointer to model:MAttributeDef:kernel#Object#init */
(nitmethod_t)nit___nit__MAttributeDef___static_mtype_61d, /* pointer to model:MAttributeDef:model#MAttributeDef#static_mtype= */
(nitmethod_t)nit___nit__MAttributeDef___static_mtype, /* pointer to model:MAttributeDef:model#MAttributeDef#static_mtype */
}
};
/* allocate MAttributeDef */
val* NEW_nit__MAttributeDef(const struct type* type) {
val* self /* : MAttributeDef */;
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MAttributeDef;
self->attrs[COLOR_nit__modelize_property__MPropDef___has_supercall].s = 0; /* _has_supercall on <self:MAttributeDef exact> */
return self;
}
/* runtime class nit__MVirtualTypeDef */
const struct class class_nit__MVirtualTypeDef = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MPropDef___standard__kernel__Object__init, /* pointer to model:MVirtualTypeDef:model#MPropDef#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MVirtualTypeDef:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MVirtualTypeDef:kernel#Object#sys */
(nitmethod_t)nit___nit__MPropDef___standard__string__Object__to_s, /* pointer to model:MVirtualTypeDef:model#MPropDef#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MVirtualTypeDef:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MVirtualTypeDef:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MVirtualTypeDef:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MVirtualTypeDef:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MVirtualTypeDef:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MVirtualTypeDef:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MVirtualTypeDef:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MVirtualTypeDef:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MVirtualTypeDef:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model:MVirtualTypeDef:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model:MVirtualTypeDef:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model:MVirtualTypeDef:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__c_name, /* pointer to model:MVirtualTypeDef:model#MPropDef#c_name */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__model, /* pointer to model:MVirtualTypeDef:model#MPropDef#model */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__name, /* pointer to model:MVirtualTypeDef:model#MPropDef#name */
(nitmethod_t)nit___nit__MPropDef___nit__model_base__MEntity__full_name, /* pointer to model:MVirtualTypeDef:model#MPropDef#full_name */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to model:MVirtualTypeDef:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to model:MVirtualTypeDef:separate_compiler#MEntity#const_color */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to model:MVirtualTypeDef:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to model:MVirtualTypeDef:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to model:MVirtualTypeDef:mdoc#MEntity#deprecation */
(nitmethod_t)nit___nit__MPropDef___mclassdef, /* pointer to model:MVirtualTypeDef:model#MPropDef#mclassdef */
(nitmethod_t)nit___nit__MPropDef___mproperty, /* pointer to model:MVirtualTypeDef:model#MPropDef#mproperty */
(nitmethod_t)nit___nit__MPropDef___mclassdef_61d, /* pointer to model:MVirtualTypeDef:model#MPropDef#mclassdef= */
(nitmethod_t)nit___nit__MPropDef___mproperty_61d, /* pointer to model:MVirtualTypeDef:model#MPropDef#mproperty= */
(nitmethod_t)nit___nit__MPropDef___location_61d, /* pointer to model:MVirtualTypeDef:model#MPropDef#location= */
(nitmethod_t)nit___nit__MPropDef___to_s_61d, /* pointer to model:MVirtualTypeDef:model#MPropDef#to_s= */
(nitmethod_t)nit___nit__MPropDef___is_intro, /* pointer to model:MVirtualTypeDef:model#MPropDef#is_intro */
(nitmethod_t)nit__modelize_property___MPropDef___has_supercall_61d, /* pointer to model:MVirtualTypeDef:modelize_property#MPropDef#has_supercall= */
(nitmethod_t)nit__modelize_property___MPropDef___has_supercall, /* pointer to model:MVirtualTypeDef:modelize_property#MPropDef#has_supercall */
(nitmethod_t)nit___nit__MPropDef___lookup_next_definition, /* pointer to model:MVirtualTypeDef:model#MPropDef#lookup_next_definition */
(nitmethod_t)nit___nit__MPropDef___location, /* pointer to model:MVirtualTypeDef:model#MPropDef#location */
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
self = nit_alloc(sizeof(struct instance) + 15*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MVirtualTypeDef;
self->attrs[COLOR_nit__modelize_property__MPropDef___has_supercall].s = 0; /* _has_supercall on <self:MVirtualTypeDef exact> */
self->attrs[COLOR_nit__model__MVirtualTypeDef___is_fixed].s = 0; /* _is_fixed on <self:MVirtualTypeDef exact> */
return self;
}
/* runtime class nit__MClassKind */
const struct class class_nit__MClassKind = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MClassKind___standard__kernel__Object__init, /* pointer to model:MClassKind:model#MClassKind#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model:MClassKind:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model:MClassKind:kernel#Object#sys */
(nitmethod_t)nit___nit__MClassKind___standard__string__Object__to_s, /* pointer to model:MClassKind:model#MClassKind#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model:MClassKind:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model:MClassKind:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model:MClassKind:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model:MClassKind:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model:MClassKind:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model:MClassKind:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model:MClassKind:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model:MClassKind:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model:MClassKind:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model:MClassKind:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model:MClassKind:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model:MClassKind:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MClassKind___to_s_61d, /* pointer to model:MClassKind:model#MClassKind#to_s= */
(nitmethod_t)nit___nit__MClassKind___need_init_61d, /* pointer to model:MClassKind:model#MClassKind#need_init= */
(nitmethod_t)nit___nit__MClassKind___can_specialize, /* pointer to model:MClassKind:model#MClassKind#can_specialize */
(nitmethod_t)nit___nit__MClassKind___need_init, /* pointer to model:MClassKind:model#MClassKind#need_init */
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
(nitmethod_t)nit___nit__MModule___standard__kernel__Object__init, /* pointer to mmodule:MModule:mmodule#MModule#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to mmodule:MModule:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to mmodule:MModule:kernel#Object#sys */
(nitmethod_t)nit___nit__MModule___standard__string__Object__to_s, /* pointer to mmodule:MModule:mmodule#MModule#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to mmodule:MModule:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to mmodule:MModule:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to mmodule:MModule:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to mmodule:MModule:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to mmodule:MModule:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to mmodule:MModule:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to mmodule:MModule:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to mmodule:MModule:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to mmodule:MModule:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to mmodule:MModule:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to mmodule:MModule:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to mmodule:MModule:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MModule___nit__model_base__MEntity__c_name, /* pointer to mmodule:MModule:mmodule#MModule#c_name */
(nitmethod_t)nit___nit__MModule___nit__model_base__MEntity__model, /* pointer to mmodule:MModule:mmodule#MModule#model */
(nitmethod_t)nit___nit__MModule___nit__model_base__MEntity__name, /* pointer to mmodule:MModule:mmodule#MModule#name */
(nitmethod_t)nit___nit__MModule___nit__model_base__MEntity__full_name, /* pointer to mmodule:MModule:mmodule#MModule#full_name */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to mmodule:MModule:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to mmodule:MModule:separate_compiler#MEntity#const_color */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to mmodule:MModule:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to mmodule:MModule:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to mmodule:MModule:mdoc#MEntity#deprecation */
(nitmethod_t)nit___nit__MModule___is_fictive, /* pointer to mmodule:MModule:mmodule#MModule#is_fictive */
(nitmethod_t)nit___nit__MModule___mgroup, /* pointer to mmodule:MModule:mmodule#MModule#mgroup */
(nitmethod_t)nit___nit__MModule___in_importation, /* pointer to mmodule:MModule:mmodule#MModule#in_importation */
(nitmethod_t)nit___nit__MModule___set_visibility_for, /* pointer to mmodule:MModule:mmodule#MModule#set_visibility_for */
(nitmethod_t)nit___nit__MModule___set_imported_mmodules, /* pointer to mmodule:MModule:mmodule#MModule#set_imported_mmodules */
(nitmethod_t)nit___nit__MModule___location, /* pointer to mmodule:MModule:mmodule#MModule#location */
(nitmethod_t)nit__model___MModule___get_primitive_class, /* pointer to mmodule:MModule:model#MModule#get_primitive_class */
(nitmethod_t)nit___nit__MModule___model_61d, /* pointer to mmodule:MModule:mmodule#MModule#model= */
(nitmethod_t)nit___nit__MModule___mgroup_61d, /* pointer to mmodule:MModule:mmodule#MModule#mgroup= */
(nitmethod_t)nit___nit__MModule___name_61d, /* pointer to mmodule:MModule:mmodule#MModule#name= */
(nitmethod_t)nit___nit__MModule___location_61d, /* pointer to mmodule:MModule:mmodule#MModule#location= */
(nitmethod_t)nit___nit__MModule___is_fictive_61d, /* pointer to mmodule:MModule:mmodule#MModule#is_fictive= */
(nitmethod_t)nit__model___MModule___sys_type, /* pointer to mmodule:MModule:model#MModule#sys_type */
(nitmethod_t)nit___nit__MModule___namespace_for, /* pointer to mmodule:MModule:mmodule#MModule#namespace_for */
(nitmethod_t)nit___nit__MModule___mproject, /* pointer to mmodule:MModule:mmodule#MModule#mproject */
(nitmethod_t)nit___nit__MModule___c_namespace_for, /* pointer to mmodule:MModule:mmodule#MModule#c_namespace_for */
(nitmethod_t)nit__model___MModule___try_get_primitive_method, /* pointer to mmodule:MModule:model#MModule#try_get_primitive_method */
(nitmethod_t)nit___nit__MModule___is_test_suite_61d, /* pointer to mmodule:MModule:mmodule#MModule#is_test_suite= */
(nitmethod_t)nit___nit__MModule___intrude_mmodules, /* pointer to mmodule:MModule:mmodule#MModule#intrude_mmodules */
(nitmethod_t)nit___nit__MModule___public_mmodules, /* pointer to mmodule:MModule:mmodule#MModule#public_mmodules */
(nitmethod_t)nit___nit__MModule___private_mmodules, /* pointer to mmodule:MModule:mmodule#MModule#private_mmodules */
(nitmethod_t)nit__platform___MModule___target_platform, /* pointer to mmodule:MModule:platform#MModule#target_platform */
(nitmethod_t)nit__platform___MModule___local_target_platform_61d, /* pointer to mmodule:MModule:platform#MModule#local_target_platform= */
(nitmethod_t)nit___nit__MModule___in_importation_61d, /* pointer to mmodule:MModule:mmodule#MModule#in_importation= */
(nitmethod_t)nit__model___MModule___object_type, /* pointer to mmodule:MModule:model#MModule#object_type */
(nitmethod_t)nit__model___MModule___mclassdefs, /* pointer to mmodule:MModule:model#MModule#mclassdefs */
(nitmethod_t)nit__platform___MModule___local_target_platform, /* pointer to mmodule:MModule:platform#MModule#local_target_platform */
(nitmethod_t)nit__model___MModule___intro_mclasses, /* pointer to mmodule:MModule:model#MModule#intro_mclasses */
(nitmethod_t)nit__model___MModule___finalizable_type, /* pointer to mmodule:MModule:model#MModule#finalizable_type */
(nitmethod_t)nit__model___MModule___array_type, /* pointer to mmodule:MModule:model#MModule#array_type */
(nitmethod_t)nit__model___MModule___native_array_type, /* pointer to mmodule:MModule:model#MModule#native_array_type */
(nitmethod_t)nit__model___MModule___flatten_mclass_hierarchy, /* pointer to mmodule:MModule:model#MModule#flatten_mclass_hierarchy */
(nitmethod_t)nit__abstract_compiler___MModule___properties, /* pointer to mmodule:MModule:abstract_compiler#MModule#properties */
(nitmethod_t)nit___nit__MModule___is_visible, /* pointer to mmodule:MModule:mmodule#MModule#is_visible */
(nitmethod_t)nit__model___MModule___array_class, /* pointer to mmodule:MModule:model#MModule#array_class */
(nitmethod_t)nit__model___MModule___native_array_class, /* pointer to mmodule:MModule:model#MModule#native_array_class */
(nitmethod_t)nit__model___MModule___pointer_type, /* pointer to mmodule:MModule:model#MModule#pointer_type */
(nitmethod_t)nit__model___MModule___flatten_mclass_hierarchy_cache, /* pointer to mmodule:MModule:model#MModule#flatten_mclass_hierarchy_cache */
(nitmethod_t)nit__model___MModule___flatten_mclass_hierarchy_cache_61d, /* pointer to mmodule:MModule:model#MModule#flatten_mclass_hierarchy_cache= */
(nitmethod_t)nit__abstract_compiler___MModule___properties_cache, /* pointer to mmodule:MModule:abstract_compiler#MModule#properties_cache */
(nitmethod_t)nit__model___MModule___linearize_mclasses, /* pointer to mmodule:MModule:model#MModule#linearize_mclasses */
(nitmethod_t)nit___nit__MModule___visibility_for, /* pointer to mmodule:MModule:mmodule#MModule#visibility_for */
(nitmethod_t)nit__model___MModule___linearize_mclassdefs, /* pointer to mmodule:MModule:model#MModule#linearize_mclassdefs */
(nitmethod_t)nit__model___MModule___native_string_type, /* pointer to mmodule:MModule:model#MModule#native_string_type */
(nitmethod_t)nit__model___MModule___string_type, /* pointer to mmodule:MModule:model#MModule#string_type */
(nitmethod_t)nit__model___MModule___linearize_mpropdefs, /* pointer to mmodule:MModule:model#MModule#linearize_mpropdefs */
(nitmethod_t)nit__light___MModule___collect_linker_libs, /* pointer to mmodule:MModule:light#MModule#collect_linker_libs */
(nitmethod_t)nit__model___MModule___int_type, /* pointer to mmodule:MModule:model#MModule#int_type */
(nitmethod_t)nit__light_c___MModule___ldflags, /* pointer to mmodule:MModule:light_c#MModule#ldflags */
(nitmethod_t)nit__model___MModule___bool_type, /* pointer to mmodule:MModule:model#MModule#bool_type */
(nitmethod_t)nit__light___MModule___finalize_ffi, /* pointer to mmodule:MModule:light#MModule#finalize_ffi */
(nitmethod_t)nit___nit__MModule___first_real_mmodule, /* pointer to mmodule:MModule:mmodule#MModule#first_real_mmodule */
(nitmethod_t)nit__light_ffi___MModule___uses_ffi_61d, /* pointer to mmodule:MModule:light_ffi#MModule#uses_ffi= */
(nitmethod_t)nit__light_ffi___MModule___uses_ffi, /* pointer to mmodule:MModule:light_ffi#MModule#uses_ffi */
(nitmethod_t)nit__light___MModule___nmodule, /* pointer to mmodule:MModule:light#MModule#nmodule */
(nitmethod_t)nit__light_ffi___MModule___finalize_ffi_wrapper, /* pointer to mmodule:MModule:light_ffi#MModule#finalize_ffi_wrapper */
(nitmethod_t)nit__light_ffi_base___MModule___ffi_files, /* pointer to mmodule:MModule:light_ffi_base#MModule#ffi_files */
(nitmethod_t)nit__light___MModule___ensure_compile_nitni_base, /* pointer to mmodule:MModule:light#MModule#ensure_compile_nitni_base */
(nitmethod_t)nit__light___MModule___nitni_ccu, /* pointer to mmodule:MModule:light#MModule#nitni_ccu */
(nitmethod_t)nit__light_c___MModule___cflags, /* pointer to mmodule:MModule:light_c#MModule#cflags */
(nitmethod_t)nit__light_c___MModule___pkgconfigs, /* pointer to mmodule:MModule:light_c#MModule#pkgconfigs */
(nitmethod_t)nit__light___MModule___nitni_ccu_61d, /* pointer to mmodule:MModule:light#MModule#nitni_ccu= */
(nitmethod_t)nit__light_ffi___MModule___compiled_ffi_methods, /* pointer to mmodule:MModule:light_ffi#MModule#compiled_ffi_methods */
(nitmethod_t)nit__light_ffi___MModule___ffi_ccu_61d, /* pointer to mmodule:MModule:light_ffi#MModule#ffi_ccu= */
(nitmethod_t)nit__light_ffi___MModule___ffi_ccu, /* pointer to mmodule:MModule:light_ffi#MModule#ffi_ccu */
(nitmethod_t)nit__light_ffi___MModule___present_languages, /* pointer to mmodule:MModule:light_ffi#MModule#present_languages */
(nitmethod_t)nit__model___MModule___byte_type, /* pointer to mmodule:MModule:model#MModule#byte_type */
(nitmethod_t)nit__model___MModule___float_type, /* pointer to mmodule:MModule:model#MModule#float_type */
(nitmethod_t)nit__model___MModule___char_type, /* pointer to mmodule:MModule:model#MModule#char_type */
(nitmethod_t)standard___standard__Object___init, /* pointer to mmodule:MModule:kernel#Object#init */
}
};
/* allocate MModule */
val* NEW_nit__MModule(const struct type* type) {
val* self /* : MModule */;
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
val* var2 /* : HashSet[MModule] */;
val* var3 /* : Array[MClass] */;
val* var4 /* : Array[MClassDef] */;
val* var5 /* : Array[ExternFile] */;
val* var6 /* : HashMap[MClass, Set[MProperty]] */;
val* var7 /* : MultiHashMap[String, String] */;
val* var8 /* : MultiHashMap[String, String] */;
val* var9 /* : Array[String] */;
val* var10 /* : HashSet[FFILanguage] */;
val* var11 /* : HashSet[AMethPropdef] */;
self = nit_alloc(sizeof(struct instance) + 54*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MModule;
var = NEW_standard__HashSet(&type_standard__HashSet__nit__MModule);
{
standard___standard__HashSet___standard__kernel__Object__init(var); /* Direct call hash_collection#HashSet#init on <var:HashSet[MModule]>*/
}
self->attrs[COLOR_nit__mmodule__MModule___intrude_mmodules].val = var; /* _intrude_mmodules on <self:MModule exact> */
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MModule);
{
standard___standard__HashSet___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashSet#init on <var1:HashSet[MModule]>*/
}
self->attrs[COLOR_nit__mmodule__MModule___public_mmodules].val = var1; /* _public_mmodules on <self:MModule exact> */
var2 = NEW_standard__HashSet(&type_standard__HashSet__nit__MModule);
{
standard___standard__HashSet___standard__kernel__Object__init(var2); /* Direct call hash_collection#HashSet#init on <var2:HashSet[MModule]>*/
}
self->attrs[COLOR_nit__mmodule__MModule___private_mmodules].val = var2; /* _private_mmodules on <self:MModule exact> */
self->attrs[COLOR_nit__mmodule__MModule___is_fictive].s = 0; /* _is_fictive on <self:MModule exact> */
self->attrs[COLOR_nit__mmodule__MModule___is_test_suite].s = 0; /* _is_test_suite on <self:MModule exact> */
var3 = NEW_standard__Array(&type_standard__Array__nit__MClass);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[MClass]>*/
}
self->attrs[COLOR_nit__model__MModule___intro_mclasses].val = var3; /* _intro_mclasses on <self:MModule exact> */
var4 = NEW_standard__Array(&type_standard__Array__nit__MClassDef);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[MClassDef]>*/
}
self->attrs[COLOR_nit__model__MModule___mclassdefs].val = var4; /* _mclassdefs on <self:MModule exact> */
var5 = NEW_standard__Array(&type_standard__Array__nit__ExternFile);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[ExternFile]>*/
}
self->attrs[COLOR_nit__light_ffi_base__MModule___ffi_files].val = var5; /* _ffi_files on <self:MModule exact> */
var6 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClass__standard__Set__nit__MProperty);
{
standard___standard__HashMap___standard__kernel__Object__init(var6); /* Direct call hash_collection#HashMap#init on <var6:HashMap[MClass, Set[MProperty]]>*/
}
self->attrs[COLOR_nit__abstract_compiler__MModule___properties_cache].val = var6; /* _properties_cache on <self:MModule exact> */
var7 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMap__standard__String__standard__String);
{
standard___standard__HashMap___standard__kernel__Object__init(var7); /* Direct call hash_collection#HashMap#init on <var7:MultiHashMap[String, String]>*/
}
self->attrs[COLOR_nit__light_c__MModule___cflags].val = var7; /* _cflags on <self:MModule exact> */
var8 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMap__standard__String__standard__String);
{
standard___standard__HashMap___standard__kernel__Object__init(var8); /* Direct call hash_collection#HashMap#init on <var8:MultiHashMap[String, String]>*/
}
self->attrs[COLOR_nit__light_c__MModule___ldflags].val = var8; /* _ldflags on <self:MModule exact> */
var9 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var9); /* Direct call array#Array#init on <var9:Array[String]>*/
}
self->attrs[COLOR_nit__light_c__MModule___pkgconfigs].val = var9; /* _pkgconfigs on <self:MModule exact> */
self->attrs[COLOR_nit__light_ffi__MModule___uses_ffi].s = 0; /* _uses_ffi on <self:MModule exact> */
var10 = NEW_standard__HashSet(&type_standard__HashSet__nit__FFILanguage);
{
standard___standard__HashSet___standard__kernel__Object__init(var10); /* Direct call hash_collection#HashSet#init on <var10:HashSet[FFILanguage]>*/
}
self->attrs[COLOR_nit__light_ffi__MModule___present_languages].val = var10; /* _present_languages on <self:MModule exact> */
var11 = NEW_standard__HashSet(&type_standard__HashSet__nit__AMethPropdef);
{
standard___standard__HashSet___standard__kernel__Object__init(var11); /* Direct call hash_collection#HashSet#init on <var11:HashSet[AMethPropdef]>*/
}
self->attrs[COLOR_nit__light_ffi__MModule___compiled_ffi_methods].val = var11; /* _compiled_ffi_methods on <self:MModule exact> */
return self;
}
/* runtime class nit__SourceFile */
const struct class class_nit__SourceFile = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__SourceFile___standard__kernel__Object__init, /* pointer to location:SourceFile:location#SourceFile#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to location:SourceFile:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to location:SourceFile:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to location:SourceFile:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to location:SourceFile:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to location:SourceFile:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to location:SourceFile:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to location:SourceFile:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to location:SourceFile:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to location:SourceFile:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to location:SourceFile:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to location:SourceFile:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to location:SourceFile:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to location:SourceFile:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to location:SourceFile:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to location:SourceFile:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__SourceFile___filename, /* pointer to location:SourceFile:location#SourceFile#filename */
(nitmethod_t)nit___nit__SourceFile___filename_61d, /* pointer to location:SourceFile:location#SourceFile#filename= */
(nitmethod_t)nit___nit__SourceFile___stream_61d, /* pointer to location:SourceFile:location#SourceFile#stream= */
(nitmethod_t)nit__loader___SourceFile___mmodule, /* pointer to location:SourceFile:loader#SourceFile#mmodule */
(nitmethod_t)nit__loader___SourceFile___mmodule_61d, /* pointer to location:SourceFile:loader#SourceFile#mmodule= */
(nitmethod_t)nit___nit__SourceFile___string_61d, /* pointer to location:SourceFile:location#SourceFile#string= */
(nitmethod_t)nit___nit__SourceFile___stream, /* pointer to location:SourceFile:location#SourceFile#stream */
(nitmethod_t)nit___nit__SourceFile___line_starts, /* pointer to location:SourceFile:location#SourceFile#line_starts */
(nitmethod_t)nit__parser_nodes___SourceFile___first_token, /* pointer to location:SourceFile:parser_nodes#SourceFile#first_token */
(nitmethod_t)nit___nit__SourceFile___string, /* pointer to location:SourceFile:location#SourceFile#string */
(nitmethod_t)nit___nit__SourceFile___from_string, /* pointer to location:SourceFile:location#SourceFile#from_string */
(nitmethod_t)nit__parser_nodes___SourceFile___first_token_61d, /* pointer to location:SourceFile:parser_nodes#SourceFile#first_token= */
(nitmethod_t)nit__parser_nodes___SourceFile___last_token_61d, /* pointer to location:SourceFile:parser_nodes#SourceFile#last_token= */
}
};
/* allocate SourceFile */
val* NEW_nit__SourceFile(const struct type* type) {
val* self /* : SourceFile */;
val* var /* : Array[Int] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__SourceFile;
var = NEW_standard__Array(&type_standard__Array__standard__Int);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[Int]>*/
}
self->attrs[COLOR_nit__location__SourceFile___line_starts].val = var; /* _line_starts on <self:SourceFile exact> */
return self;
}
/* runtime class nit__Location */
const struct class class_nit__Location = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__Location___standard__kernel__Object__init, /* pointer to location:Location:location#Location#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to location:Location:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to location:Location:kernel#Object#sys */
(nitmethod_t)nit___nit__Location___standard__string__Object__to_s, /* pointer to location:Location:location#Location#to_s */
(nitmethod_t)nit___nit__Location___standard__kernel__Object___61d_61d, /* pointer to location:Location:location#Location#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to location:Location:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to location:Location:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to location:Location:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to location:Location:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to location:Location:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to location:Location:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to location:Location:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to location:Location:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to location:Location:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to location:Location:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to location:Location:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Comparable____62d_61d, /* pointer to location:Location:kernel#Comparable#>= */
(nitmethod_t)standard___standard__Comparable____60d_61d, /* pointer to location:Location:kernel#Comparable#<= */
(nitmethod_t)standard___standard__Comparable____62d, /* pointer to location:Location:kernel#Comparable#> */
(nitmethod_t)nit___nit__Location___standard__kernel__Comparable___60d, /* pointer to location:Location:location#Location#< */
(nitmethod_t)standard___standard__Comparable____60d_61d_62d, /* pointer to location:Location:kernel#Comparable#<=> */
(nitmethod_t)nit___nit__Location___file, /* pointer to location:Location:location#Location#file */
(nitmethod_t)nit__toolcontext___Location___add_message, /* pointer to location:Location:toolcontext#Location#add_message */
(nitmethod_t)nit___nit__Location___colored_line, /* pointer to location:Location:location#Location#colored_line */
(nitmethod_t)nit___nit__Location___file_61d, /* pointer to location:Location:location#Location#file= */
(nitmethod_t)nit___nit__Location___line_start_61d, /* pointer to location:Location:location#Location#line_start= */
(nitmethod_t)nit___nit__Location___line_end_61d, /* pointer to location:Location:location#Location#line_end= */
(nitmethod_t)nit___nit__Location___column_start_61d, /* pointer to location:Location:location#Location#column_start= */
(nitmethod_t)nit___nit__Location___column_end_61d, /* pointer to location:Location:location#Location#column_end= */
(nitmethod_t)nit__toolcontext___Location___messages, /* pointer to location:Location:toolcontext#Location#messages */
(nitmethod_t)nit__toolcontext___Location___messages_61d, /* pointer to location:Location:toolcontext#Location#messages= */
(nitmethod_t)nit___nit__Location___line_start, /* pointer to location:Location:location#Location#line_start */
(nitmethod_t)nit___nit__Location___column_start, /* pointer to location:Location:location#Location#column_start */
(nitmethod_t)nit___nit__Location___line_end, /* pointer to location:Location:location#Location#line_end */
(nitmethod_t)nit___nit__Location___column_end, /* pointer to location:Location:location#Location#column_end */
(nitmethod_t)nit___nit__Location___located_in, /* pointer to location:Location:location#Location#located_in */
(nitmethod_t)nit___nit__Location___text, /* pointer to location:Location:location#Location#text */
(nitmethod_t)nit___nit__Location___text_cache, /* pointer to location:Location:location#Location#text_cache */
(nitmethod_t)nit___nit__Location___pstart, /* pointer to location:Location:location#Location#pstart */
(nitmethod_t)nit___nit__Location___pend, /* pointer to location:Location:location#Location#pend */
(nitmethod_t)nit___nit__Location___text_cache_61d, /* pointer to location:Location:location#Location#text_cache= */
(nitmethod_t)nit__light_c___Location___as_line_pragma, /* pointer to location:Location:light_c#Location#as_line_pragma */
(nitmethod_t)standard___standard__Object___init, /* pointer to location:Location:kernel#Object#init */
}
};
/* allocate Location */
val* NEW_nit__Location(const struct type* type) {
val* self /* : Location */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__Location;
return self;
}
/* runtime class standard__Passwd */
/* allocate Passwd */
val* NEW_standard__Passwd(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Passwd is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Group */
/* allocate Group */
val* NEW_standard__Group(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Group is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Text */
/* allocate Text */
val* NEW_standard__Text(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Text is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__FlatText */
/* allocate FlatText */
val* NEW_standard__FlatText(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "FlatText is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__string__StringCharView */
/* allocate StringCharView */
val* NEW_standard__string__StringCharView(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "StringCharView is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__string__BufferCharView */
/* allocate BufferCharView */
val* NEW_standard__string__BufferCharView(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "BufferCharView is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__String */
/* allocate String */
val* NEW_standard__String(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "String is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__string__FlatSubstringsIter */
const struct class class_standard__string__FlatSubstringsIter = {
0, /* box_kind */
{
(nitmethod_t)standard__string___standard__string__FlatSubstringsIter___standard__kernel__Object__init, /* pointer to string:FlatSubstringsIter:string#FlatSubstringsIter#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to string:FlatSubstringsIter:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to string:FlatSubstringsIter:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to string:FlatSubstringsIter:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to string:FlatSubstringsIter:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to string:FlatSubstringsIter:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to string:FlatSubstringsIter:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to string:FlatSubstringsIter:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to string:FlatSubstringsIter:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to string:FlatSubstringsIter:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to string:FlatSubstringsIter:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to string:FlatSubstringsIter:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to string:FlatSubstringsIter:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to string:FlatSubstringsIter:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to string:FlatSubstringsIter:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to string:FlatSubstringsIter:light_c#Object#from_c_call_context */
(nitmethod_t)standard__string___standard__string__FlatSubstringsIter___standard__abstract_collection__Iterator__is_ok, /* pointer to string:FlatSubstringsIter:string#FlatSubstringsIter#is_ok */
(nitmethod_t)standard__string___standard__string__FlatSubstringsIter___standard__abstract_collection__Iterator__item, /* pointer to string:FlatSubstringsIter:string#FlatSubstringsIter#item */
(nitmethod_t)standard__string___standard__string__FlatSubstringsIter___standard__abstract_collection__Iterator__next, /* pointer to string:FlatSubstringsIter:string#FlatSubstringsIter#next */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to string:FlatSubstringsIter:abstract_collection#Iterator#finish */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to string:FlatSubstringsIter:abstract_collection#Iterator#iterator */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to string:FlatSubstringsIter:array#Iterator#to_a */
(nitmethod_t)standard__string___standard__string__FlatSubstringsIter___tgt_61d, /* pointer to string:FlatSubstringsIter:string#FlatSubstringsIter#tgt= */
(nitmethod_t)standard__string___standard__string__FlatSubstringsIter___tgt, /* pointer to string:FlatSubstringsIter:string#FlatSubstringsIter#tgt */
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
(nitmethod_t)standard___standard__Object___init, /* pointer to string:FlatString:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to string:FlatString:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to string:FlatString:kernel#Object#sys */
(nitmethod_t)standard___standard__String___Object__to_s, /* pointer to string:FlatString:string#String#to_s */
(nitmethod_t)standard___standard__FlatString___standard__kernel__Object___61d_61d, /* pointer to string:FlatString:string#FlatString#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to string:FlatString:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to string:FlatString:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to string:FlatString:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to string:FlatString:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to string:FlatString:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to string:FlatString:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to string:FlatString:string#Object#native_class_name */
(nitmethod_t)standard___standard__FlatString___standard__kernel__Object__hash, /* pointer to string:FlatString:string#FlatString#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to string:FlatString:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to string:FlatString:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to string:FlatString:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Comparable____62d_61d, /* pointer to string:FlatString:kernel#Comparable#>= */
(nitmethod_t)standard___standard__Comparable____60d_61d, /* pointer to string:FlatString:kernel#Comparable#<= */
(nitmethod_t)standard___standard__Comparable____62d, /* pointer to string:FlatString:kernel#Comparable#> */
(nitmethod_t)standard___standard__FlatString___standard__kernel__Comparable___60d, /* pointer to string:FlatString:string#FlatString#< */
(nitmethod_t)standard___standard__Comparable____60d_61d_62d, /* pointer to string:FlatString:kernel#Comparable#<=> */
(nitmethod_t)standard___standard__Pattern___split_in, /* pointer to string:FlatString:string_search#Pattern#split_in */
(nitmethod_t)standard__string_search___Text___Pattern__search_in, /* pointer to string:FlatString:string_search#Text#search_in */
(nitmethod_t)standard__string_search___Text___Pattern__search_index_in, /* pointer to string:FlatString:string_search#Text#search_index_in */
(nitmethod_t)standard___standard__Text___to_i, /* pointer to string:FlatString:string#Text#to_i */
(nitmethod_t)standard___standard__FlatString___Text__to_cstring, /* pointer to string:FlatString:string#FlatString#to_cstring */
(nitmethod_t)standard___standard__FlatText___Text__length, /* pointer to string:FlatString:string#FlatText#length */
(nitmethod_t)standard___standard__FlatString___Text__chars, /* pointer to string:FlatString:string#FlatString#chars */
(nitmethod_t)standard___standard__FlatString___Text__substring, /* pointer to string:FlatString:string#FlatString#substring */
(nitmethod_t)standard___standard__FlatString___Text__substrings, /* pointer to string:FlatString:string#FlatString#substrings */
(nitmethod_t)standard___standard__Text___is_empty, /* pointer to string:FlatString:string#Text#is_empty */
(nitmethod_t)standard__file___Writable___write_to_file, /* pointer to string:FlatString:file#Writable#write_to_file */
(nitmethod_t)standard__stream___Text___Writable__write_to, /* pointer to string:FlatString:stream#Text#write_to */
(nitmethod_t)standard__string_search___Text___split_with, /* pointer to string:FlatString:string_search#Text#split_with */
(nitmethod_t)standard___standard__FlatString___Text__empty, /* pointer to string:FlatString:string#FlatString#empty */
(nitmethod_t)standard___standard__Text___is_lower, /* pointer to string:FlatString:string#Text#is_lower */
(nitmethod_t)standard___standard__Text___has_suffix, /* pointer to string:FlatString:string#Text#has_suffix */
(nitmethod_t)standard__string_search___Text___split, /* pointer to string:FlatString:string_search#Text#split */
(nitmethod_t)standard___standard__Text___to_cmangle, /* pointer to string:FlatString:string#Text#to_cmangle */
(nitmethod_t)standard__string_search___Text___split_once_on, /* pointer to string:FlatString:string_search#Text#split_once_on */
(nitmethod_t)standard___standard__Text___is_numeric, /* pointer to string:FlatString:string#Text#is_numeric */
(nitmethod_t)standard___standard__Text___has_substring, /* pointer to string:FlatString:string#Text#has_substring */
(nitmethod_t)standard___standard__Text___last, /* pointer to string:FlatString:string#Text#last */
(nitmethod_t)standard___standard__Text___substring_from, /* pointer to string:FlatString:string#Text#substring_from */
(nitmethod_t)standard___standard__FlatString___Text___91d_93d, /* pointer to string:FlatString:string#FlatString#[] */
(nitmethod_t)standard___standard__Text___hash_cache, /* pointer to string:FlatString:string#Text#hash_cache */
(nitmethod_t)standard___standard__Text___hash_cache_61d, /* pointer to string:FlatString:string#Text#hash_cache= */
(nitmethod_t)standard___standard__Text___escape_to_c, /* pointer to string:FlatString:string#Text#escape_to_c */
(nitmethod_t)standard__file___Text___to_path, /* pointer to string:FlatString:file#Text#to_path */
(nitmethod_t)standard___standard__Text___chomp, /* pointer to string:FlatString:string#Text#chomp */
(nitmethod_t)standard___standard__Text___has_prefix, /* pointer to string:FlatString:string#Text#has_prefix */
(nitmethod_t)standard___standard__Text___escape_to_sh, /* pointer to string:FlatString:string#Text#escape_to_sh */
(nitmethod_t)nit__literal___standard__Text___remove_underscores, /* pointer to string:FlatString:literal#Text#remove_underscores */
(nitmethod_t)standard___standard__Text___to_hex, /* pointer to string:FlatString:string#Text#to_hex */
(nitmethod_t)standard___standard__Text___to_bin, /* pointer to string:FlatString:string#Text#to_bin */
(nitmethod_t)standard___standard__Text___to_oct, /* pointer to string:FlatString:string#Text#to_oct */
(nitmethod_t)standard___standard__Text___to_f, /* pointer to string:FlatString:string#Text#to_f */
(nitmethod_t)standard___standard__Text___unescape_nit, /* pointer to string:FlatString:string#Text#unescape_nit */
(nitmethod_t)standard___standard__Text___escape_to_mk, /* pointer to string:FlatString:string#Text#escape_to_mk */
(nitmethod_t)standard__string_search___Text___replace, /* pointer to string:FlatString:string_search#Text#replace */
(nitmethod_t)standard___standard__Text___a_to, /* pointer to string:FlatString:string#Text#a_to */
(nitmethod_t)standard___standard__FlatText___real_items, /* pointer to string:FlatString:string#FlatText#real_items */
(nitmethod_t)standard___standard__FlatText___items, /* pointer to string:FlatString:string#FlatText#items */
(nitmethod_t)standard___standard__FlatText___real_items_61d, /* pointer to string:FlatString:string#FlatText#real_items= */
(nitmethod_t)standard___standard__FlatText___items_61d, /* pointer to string:FlatString:string#FlatText#items= */
(nitmethod_t)standard___standard__FlatText___length_61d, /* pointer to string:FlatString:string#FlatText#length= */
(nitmethod_t)standard__environ___String___environ, /* pointer to string:FlatString:environ#String#environ */
(nitmethod_t)standard___standard__String___to_snake_case, /* pointer to string:FlatString:string#String#to_snake_case */
(nitmethod_t)standard__file___String___strip_extension, /* pointer to string:FlatString:file#String#strip_extension */
(nitmethod_t)standard__file___String____47d, /* pointer to string:FlatString:file#String#/ */
(nitmethod_t)standard__file___String___file_exists, /* pointer to string:FlatString:file#String#file_exists */
(nitmethod_t)standard__ropes___FlatString___standard__string__String___43d, /* pointer to string:FlatString:ropes#FlatString#+ */
(nitmethod_t)standard___standard__FlatString___String___42d, /* pointer to string:FlatString:string#FlatString#* */
(nitmethod_t)standard__file___String___join_path, /* pointer to string:FlatString:file#String#join_path */
(nitmethod_t)standard__file___String___file_extension, /* pointer to string:FlatString:file#String#file_extension */
(nitmethod_t)standard__file___String___dirname, /* pointer to string:FlatString:file#String#dirname */
(nitmethod_t)standard__file___String___basename, /* pointer to string:FlatString:file#String#basename */
(nitmethod_t)standard__file___String___simplify_path, /* pointer to string:FlatString:file#String#simplify_path */
(nitmethod_t)standard___standard__FlatString___String__to_upper, /* pointer to string:FlatString:string#FlatString#to_upper */
(nitmethod_t)standard__file___String___mkdir, /* pointer to string:FlatString:file#String#mkdir */
(nitmethod_t)standard__file___String___realpath, /* pointer to string:FlatString:file#String#realpath */
(nitmethod_t)standard___standard__FlatString___String__to_lower, /* pointer to string:FlatString:string#FlatString#to_lower */
(nitmethod_t)standard__file___String___file_copy_to, /* pointer to string:FlatString:file#String#file_copy_to */
(nitmethod_t)standard__file___String___relpath, /* pointer to string:FlatString:file#String#relpath */
(nitmethod_t)standard___standard__FlatString___with_infos, /* pointer to string:FlatString:string#FlatString#with_infos */
(nitmethod_t)standard___standard__FlatString___index_from, /* pointer to string:FlatString:string#FlatString#index_from */
(nitmethod_t)standard___standard__FlatString___index_from_61d, /* pointer to string:FlatString:string#FlatString#index_from= */
(nitmethod_t)standard___standard__FlatString___index_to_61d, /* pointer to string:FlatString:string#FlatString#index_to= */
(nitmethod_t)standard___standard__FlatString___index_to, /* pointer to string:FlatString:string#FlatString#index_to */
(nitmethod_t)standard___standard__Text___standard__kernel__Object___61d_61d, /* pointer to string:FlatString:string#Text#== */
(nitmethod_t)standard___standard__Text___standard__kernel__Comparable___60d, /* pointer to string:FlatString:string#Text#< */
}
};
/* allocate FlatString */
val* NEW_standard__FlatString(const struct type* type) {
val* self /* : FlatString */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__FlatString;
self->attrs[COLOR_standard__string__FlatText___length].l = 0l; /* _length on <self:FlatString exact> */
return self;
}
/* runtime class standard__string__FlatStringReverseIterator */
/* allocate FlatStringReverseIterator */
val* NEW_standard__string__FlatStringReverseIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "FlatStringReverseIterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__string__FlatStringIterator */
const struct class class_standard__string__FlatStringIterator = {
0, /* box_kind */
{
(nitmethod_t)standard__string___standard__string__FlatStringIterator___standard__kernel__Object__init, /* pointer to string:FlatStringIterator:string#FlatStringIterator#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to string:FlatStringIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to string:FlatStringIterator:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to string:FlatStringIterator:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to string:FlatStringIterator:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to string:FlatStringIterator:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to string:FlatStringIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to string:FlatStringIterator:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to string:FlatStringIterator:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to string:FlatStringIterator:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to string:FlatStringIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to string:FlatStringIterator:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to string:FlatStringIterator:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to string:FlatStringIterator:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to string:FlatStringIterator:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to string:FlatStringIterator:light_c#Object#from_c_call_context */
(nitmethod_t)standard__string___standard__string__FlatStringIterator___standard__abstract_collection__Iterator__is_ok, /* pointer to string:FlatStringIterator:string#FlatStringIterator#is_ok */
(nitmethod_t)VIRTUAL_standard__string___standard__string__FlatStringIterator___standard__abstract_collection__Iterator__item, /* pointer to string:FlatStringIterator:string#FlatStringIterator#item */
(nitmethod_t)standard__string___standard__string__FlatStringIterator___standard__abstract_collection__Iterator__next, /* pointer to string:FlatStringIterator:string#FlatStringIterator#next */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to string:FlatStringIterator:abstract_collection#Iterator#finish */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to string:FlatStringIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to string:FlatStringIterator:array#Iterator#to_a */
(nitmethod_t)standard__string___standard__string__FlatStringIterator___standard__abstract_collection__IndexedIterator__index, /* pointer to string:FlatStringIterator:string#FlatStringIterator#index */
(nitmethod_t)standard__string___standard__string__FlatStringIterator___with_pos, /* pointer to string:FlatStringIterator:string#FlatStringIterator#with_pos */
(nitmethod_t)standard__string___standard__string__FlatStringIterator___curr_pos, /* pointer to string:FlatStringIterator:string#FlatStringIterator#curr_pos */
(nitmethod_t)standard__string___standard__string__FlatStringIterator___target, /* pointer to string:FlatStringIterator:string#FlatStringIterator#target */
(nitmethod_t)standard__string___standard__string__FlatStringIterator___target_items, /* pointer to string:FlatStringIterator:string#FlatStringIterator#target_items */
(nitmethod_t)standard__string___standard__string__FlatStringIterator___curr_pos_61d, /* pointer to string:FlatStringIterator:string#FlatStringIterator#curr_pos= */
(nitmethod_t)standard__string___standard__string__FlatStringIterator___target_61d, /* pointer to string:FlatStringIterator:string#FlatStringIterator#target= */
(nitmethod_t)standard__string___standard__string__FlatStringIterator___target_items_61d, /* pointer to string:FlatStringIterator:string#FlatStringIterator#target_items= */
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
(nitmethod_t)standard__string___standard__string__StringCharView___standard__kernel__Object__init, /* pointer to string:FlatStringCharView:string#StringCharView#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to string:FlatStringCharView:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to string:FlatStringCharView:kernel#Object#sys */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to string:FlatStringCharView:string#Collection#to_s */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object___61d_61d, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to string:FlatStringCharView:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to string:FlatStringCharView:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to string:FlatStringCharView:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to string:FlatStringCharView:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to string:FlatStringCharView:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to string:FlatStringCharView:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to string:FlatStringCharView:string#Object#native_class_name */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object__hash, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to string:FlatStringCharView:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to string:FlatStringCharView:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to string:FlatStringCharView:light_c#Object#from_c_call_context */
(nitmethod_t)standard__string___standard__string__StringCharView___target_61d, /* pointer to string:FlatStringCharView:string#StringCharView#target= */
(nitmethod_t)standard__string___standard__string__StringCharView___target, /* pointer to string:FlatStringCharView:string#StringCharView#target */
(nitmethod_t)standard___standard__Object___init, /* pointer to string:FlatStringCharView:kernel#Object#init */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__string___Collection___join, /* pointer to string:FlatStringCharView:string#Collection#join */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to string:FlatStringCharView:array#Collection#to_a */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__length, /* pointer to string:FlatStringCharView:string#StringCharView#length */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__is_empty, /* pointer to string:FlatStringCharView:string#StringCharView#is_empty */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__iterator, /* pointer to string:FlatStringCharView:string#StringCharView#iterator */
(nitmethod_t)standard__string___Collection___plain_to_s, /* pointer to string:FlatStringCharView:string#Collection#plain_to_s */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to string:FlatStringCharView:abstract_collection#Collection#has_all */
(nitmethod_t)standard___standard__Collection___has, /* pointer to string:FlatStringCharView:abstract_collection#Collection#has */
(nitmethod_t)standard___standard__SequenceRead___Collection__first, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#first */
(nitmethod_t)standard___standard__Collection___not_empty, /* pointer to string:FlatStringCharView:abstract_collection#Collection#not_empty */
(nitmethod_t)VIRTUAL_standard__string___standard__string__FlatStringCharView___standard__abstract_collection__SequenceRead___91d_93d, /* pointer to string:FlatStringCharView:string#FlatStringCharView#[] */
(nitmethod_t)standard__string___standard__string__FlatStringCharView___standard__abstract_collection__SequenceRead__iterator_from, /* pointer to string:FlatStringCharView:string#FlatStringCharView#iterator_from */
(nitmethod_t)standard___standard__SequenceRead___index_of, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#index_of */
(nitmethod_t)standard___standard__SequenceRead___index_of_from, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#index_of_from */
(nitmethod_t)standard___standard__SequenceRead___last, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#last */
(nitmethod_t)standard___standard__SequenceRead___last_index_of, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#last_index_of */
(nitmethod_t)standard___standard__SequenceRead___last_index_of_from, /* pointer to string:FlatStringCharView:abstract_collection#SequenceRead#last_index_of_from */
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
const struct class class_standard__Buffer = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to string:Buffer:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to string:Buffer:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to string:Buffer:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to string:Buffer:string#Object#to_s */
(nitmethod_t)standard___standard__Text___standard__kernel__Object___61d_61d, /* pointer to string:Buffer:string#Text#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to string:Buffer:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to string:Buffer:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to string:Buffer:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to string:Buffer:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to string:Buffer:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to string:Buffer:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to string:Buffer:string#Object#native_class_name */
(nitmethod_t)standard___standard__Buffer___standard__kernel__Object__hash, /* pointer to string:Buffer:string#Buffer#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to string:Buffer:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to string:Buffer:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to string:Buffer:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Comparable____62d_61d, /* pointer to string:Buffer:kernel#Comparable#>= */
(nitmethod_t)standard___standard__Comparable____60d_61d, /* pointer to string:Buffer:kernel#Comparable#<= */
(nitmethod_t)standard___standard__Comparable____62d, /* pointer to string:Buffer:kernel#Comparable#> */
(nitmethod_t)standard___standard__Text___standard__kernel__Comparable___60d, /* pointer to string:Buffer:string#Text#< */
(nitmethod_t)standard___standard__Comparable____60d_61d_62d, /* pointer to string:Buffer:kernel#Comparable#<=> */
(nitmethod_t)standard___standard__Pattern___split_in, /* pointer to string:Buffer:string_search#Pattern#split_in */
(nitmethod_t)standard__string_search___Text___Pattern__search_in, /* pointer to string:Buffer:string_search#Text#search_in */
(nitmethod_t)standard__string_search___Text___Pattern__search_index_in, /* pointer to string:Buffer:string_search#Text#search_index_in */
(nitmethod_t)standard___standard__Text___to_i, /* pointer to string:Buffer:string#Text#to_i */
(nitmethod_t)standard___standard__Text___to_cstring, /* pointer to string:Buffer:string#Text#to_cstring */
(nitmethod_t)standard___standard__Text___length, /* pointer to string:Buffer:string#Text#length */
(nitmethod_t)standard___standard__Buffer___Text__chars, /* pointer to string:Buffer:string#Buffer#chars */
(nitmethod_t)standard___standard__Text___substring, /* pointer to string:Buffer:string#Text#substring */
(nitmethod_t)standard___standard__Text___substrings, /* pointer to string:Buffer:string#Text#substrings */
(nitmethod_t)standard___standard__Text___is_empty, /* pointer to string:Buffer:string#Text#is_empty */
(nitmethod_t)standard__file___Writable___write_to_file, /* pointer to string:Buffer:file#Writable#write_to_file */
(nitmethod_t)standard__stream___Text___Writable__write_to, /* pointer to string:Buffer:stream#Text#write_to */
(nitmethod_t)standard__string_search___Text___split_with, /* pointer to string:Buffer:string_search#Text#split_with */
(nitmethod_t)standard___standard__Text___empty, /* pointer to string:Buffer:string#Text#empty */
(nitmethod_t)standard___standard__Text___is_lower, /* pointer to string:Buffer:string#Text#is_lower */
(nitmethod_t)standard___standard__Text___has_suffix, /* pointer to string:Buffer:string#Text#has_suffix */
(nitmethod_t)standard__string_search___Text___split, /* pointer to string:Buffer:string_search#Text#split */
(nitmethod_t)standard___standard__Text___to_cmangle, /* pointer to string:Buffer:string#Text#to_cmangle */
(nitmethod_t)standard__string_search___Text___split_once_on, /* pointer to string:Buffer:string_search#Text#split_once_on */
(nitmethod_t)standard___standard__Text___is_numeric, /* pointer to string:Buffer:string#Text#is_numeric */
(nitmethod_t)standard___standard__Text___has_substring, /* pointer to string:Buffer:string#Text#has_substring */
(nitmethod_t)standard___standard__Text___last, /* pointer to string:Buffer:string#Text#last */
(nitmethod_t)standard___standard__Text___substring_from, /* pointer to string:Buffer:string#Text#substring_from */
(nitmethod_t)standard___standard__Text____91d_93d, /* pointer to string:Buffer:string#Text#[] */
(nitmethod_t)standard___standard__Text___hash_cache, /* pointer to string:Buffer:string#Text#hash_cache */
(nitmethod_t)standard___standard__Text___hash_cache_61d, /* pointer to string:Buffer:string#Text#hash_cache= */
(nitmethod_t)standard___standard__Text___escape_to_c, /* pointer to string:Buffer:string#Text#escape_to_c */
(nitmethod_t)standard__file___Text___to_path, /* pointer to string:Buffer:file#Text#to_path */
(nitmethod_t)standard___standard__Text___chomp, /* pointer to string:Buffer:string#Text#chomp */
(nitmethod_t)standard___standard__Text___has_prefix, /* pointer to string:Buffer:string#Text#has_prefix */
(nitmethod_t)standard___standard__Text___escape_to_sh, /* pointer to string:Buffer:string#Text#escape_to_sh */
(nitmethod_t)nit__literal___standard__Text___remove_underscores, /* pointer to string:Buffer:literal#Text#remove_underscores */
(nitmethod_t)standard___standard__Text___to_hex, /* pointer to string:Buffer:string#Text#to_hex */
(nitmethod_t)standard___standard__Text___to_bin, /* pointer to string:Buffer:string#Text#to_bin */
(nitmethod_t)standard___standard__Text___to_oct, /* pointer to string:Buffer:string#Text#to_oct */
(nitmethod_t)standard___standard__Text___to_f, /* pointer to string:Buffer:string#Text#to_f */
(nitmethod_t)standard___standard__Text___unescape_nit, /* pointer to string:Buffer:string#Text#unescape_nit */
(nitmethod_t)standard___standard__Text___escape_to_mk, /* pointer to string:Buffer:string#Text#escape_to_mk */
(nitmethod_t)standard__string_search___Text___replace, /* pointer to string:Buffer:string_search#Text#replace */
(nitmethod_t)standard___standard__Text___a_to, /* pointer to string:Buffer:string#Text#a_to */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard___standard__Buffer___with_cap, /* pointer to string:Buffer:string#Buffer#with_cap */
(nitmethod_t)standard___standard__Buffer___new, /* pointer to string:Buffer:string#Buffer#new */
(nitmethod_t)standard___standard__Buffer___append, /* pointer to string:Buffer:string#Buffer#append */
(nitmethod_t)standard___standard__Buffer___add, /* pointer to string:Buffer:string#Buffer#add */
(nitmethod_t)standard___standard__Buffer___is_dirty, /* pointer to string:Buffer:string#Buffer#is_dirty */
(nitmethod_t)standard___standard__Buffer___is_dirty_61d, /* pointer to string:Buffer:string#Buffer#is_dirty= */
(nitmethod_t)standard___standard__Buffer___written_61d, /* pointer to string:Buffer:string#Buffer#written= */
(nitmethod_t)standard___standard__Buffer___enlarge, /* pointer to string:Buffer:string#Buffer#enlarge */
(nitmethod_t)standard___standard__Text___standard__kernel__Object__hash, /* pointer to string:Buffer:string#Text#hash */
}
};
/* allocate Buffer */
val* NEW_standard__Buffer(const struct type* type) {
val* self /* : Buffer */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__Buffer;
self->attrs[COLOR_standard__string__Buffer___is_dirty].s = 1; /* _is_dirty on <self:Buffer exact> */
self->attrs[COLOR_standard__string__Buffer___written].s = 0; /* _written on <self:Buffer exact> */
return self;
}
/* runtime class standard__FlatBuffer */
const struct class class_standard__FlatBuffer = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__FlatBuffer___standard__kernel__Object__init, /* pointer to string:FlatBuffer:string#FlatBuffer#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to string:FlatBuffer:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to string:FlatBuffer:kernel#Object#sys */
(nitmethod_t)standard___standard__FlatBuffer___Object__to_s, /* pointer to string:FlatBuffer:string#FlatBuffer#to_s */
(nitmethod_t)standard___standard__Text___standard__kernel__Object___61d_61d, /* pointer to string:FlatBuffer:string#Text#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to string:FlatBuffer:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to string:FlatBuffer:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to string:FlatBuffer:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to string:FlatBuffer:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to string:FlatBuffer:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to string:FlatBuffer:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to string:FlatBuffer:string#Object#native_class_name */
(nitmethod_t)standard___standard__Buffer___standard__kernel__Object__hash, /* pointer to string:FlatBuffer:string#Buffer#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to string:FlatBuffer:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to string:FlatBuffer:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to string:FlatBuffer:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Comparable____62d_61d, /* pointer to string:FlatBuffer:kernel#Comparable#>= */
(nitmethod_t)standard___standard__Comparable____60d_61d, /* pointer to string:FlatBuffer:kernel#Comparable#<= */
(nitmethod_t)standard___standard__Comparable____62d, /* pointer to string:FlatBuffer:kernel#Comparable#> */
(nitmethod_t)standard___standard__Text___standard__kernel__Comparable___60d, /* pointer to string:FlatBuffer:string#Text#< */
(nitmethod_t)standard___standard__Comparable____60d_61d_62d, /* pointer to string:FlatBuffer:kernel#Comparable#<=> */
(nitmethod_t)standard___standard__Pattern___split_in, /* pointer to string:FlatBuffer:string_search#Pattern#split_in */
(nitmethod_t)standard__string_search___Text___Pattern__search_in, /* pointer to string:FlatBuffer:string_search#Text#search_in */
(nitmethod_t)standard__string_search___Text___Pattern__search_index_in, /* pointer to string:FlatBuffer:string_search#Text#search_index_in */
(nitmethod_t)standard___standard__Text___to_i, /* pointer to string:FlatBuffer:string#Text#to_i */
(nitmethod_t)standard___standard__FlatBuffer___Text__to_cstring, /* pointer to string:FlatBuffer:string#FlatBuffer#to_cstring */
(nitmethod_t)standard___standard__FlatText___Text__length, /* pointer to string:FlatBuffer:string#FlatText#length */
(nitmethod_t)standard___standard__FlatBuffer___Text__chars, /* pointer to string:FlatBuffer:string#FlatBuffer#chars */
(nitmethod_t)standard___standard__FlatBuffer___Text__substring, /* pointer to string:FlatBuffer:string#FlatBuffer#substring */
(nitmethod_t)standard___standard__FlatBuffer___Text__substrings, /* pointer to string:FlatBuffer:string#FlatBuffer#substrings */
(nitmethod_t)standard___standard__Text___is_empty, /* pointer to string:FlatBuffer:string#Text#is_empty */
(nitmethod_t)standard__file___Writable___write_to_file, /* pointer to string:FlatBuffer:file#Writable#write_to_file */
(nitmethod_t)standard__stream___Text___Writable__write_to, /* pointer to string:FlatBuffer:stream#Text#write_to */
(nitmethod_t)standard__string_search___Text___split_with, /* pointer to string:FlatBuffer:string_search#Text#split_with */
(nitmethod_t)standard___standard__FlatBuffer___Text__empty, /* pointer to string:FlatBuffer:string#FlatBuffer#empty */
(nitmethod_t)standard___standard__Text___is_lower, /* pointer to string:FlatBuffer:string#Text#is_lower */
(nitmethod_t)standard___standard__Text___has_suffix, /* pointer to string:FlatBuffer:string#Text#has_suffix */
(nitmethod_t)standard__string_search___Text___split, /* pointer to string:FlatBuffer:string_search#Text#split */
(nitmethod_t)standard___standard__Text___to_cmangle, /* pointer to string:FlatBuffer:string#Text#to_cmangle */
(nitmethod_t)standard__string_search___Text___split_once_on, /* pointer to string:FlatBuffer:string_search#Text#split_once_on */
(nitmethod_t)standard___standard__Text___is_numeric, /* pointer to string:FlatBuffer:string#Text#is_numeric */
(nitmethod_t)standard___standard__Text___has_substring, /* pointer to string:FlatBuffer:string#Text#has_substring */
(nitmethod_t)standard___standard__Text___last, /* pointer to string:FlatBuffer:string#Text#last */
(nitmethod_t)standard___standard__Text___substring_from, /* pointer to string:FlatBuffer:string#Text#substring_from */
(nitmethod_t)standard___standard__FlatBuffer___Text___91d_93d, /* pointer to string:FlatBuffer:string#FlatBuffer#[] */
(nitmethod_t)standard___standard__Text___hash_cache, /* pointer to string:FlatBuffer:string#Text#hash_cache */
(nitmethod_t)standard___standard__Text___hash_cache_61d, /* pointer to string:FlatBuffer:string#Text#hash_cache= */
(nitmethod_t)standard___standard__Text___escape_to_c, /* pointer to string:FlatBuffer:string#Text#escape_to_c */
(nitmethod_t)standard__file___Text___to_path, /* pointer to string:FlatBuffer:file#Text#to_path */
(nitmethod_t)standard___standard__Text___chomp, /* pointer to string:FlatBuffer:string#Text#chomp */
(nitmethod_t)standard___standard__Text___has_prefix, /* pointer to string:FlatBuffer:string#Text#has_prefix */
(nitmethod_t)standard___standard__Text___escape_to_sh, /* pointer to string:FlatBuffer:string#Text#escape_to_sh */
(nitmethod_t)nit__literal___standard__Text___remove_underscores, /* pointer to string:FlatBuffer:literal#Text#remove_underscores */
(nitmethod_t)standard___standard__Text___to_hex, /* pointer to string:FlatBuffer:string#Text#to_hex */
(nitmethod_t)standard___standard__Text___to_bin, /* pointer to string:FlatBuffer:string#Text#to_bin */
(nitmethod_t)standard___standard__Text___to_oct, /* pointer to string:FlatBuffer:string#Text#to_oct */
(nitmethod_t)standard___standard__Text___to_f, /* pointer to string:FlatBuffer:string#Text#to_f */
(nitmethod_t)standard___standard__Text___unescape_nit, /* pointer to string:FlatBuffer:string#Text#unescape_nit */
(nitmethod_t)standard___standard__Text___escape_to_mk, /* pointer to string:FlatBuffer:string#Text#escape_to_mk */
(nitmethod_t)standard__string_search___Text___replace, /* pointer to string:FlatBuffer:string_search#Text#replace */
(nitmethod_t)standard___standard__Text___a_to, /* pointer to string:FlatBuffer:string#Text#a_to */
(nitmethod_t)standard___standard__FlatText___real_items, /* pointer to string:FlatBuffer:string#FlatText#real_items */
(nitmethod_t)standard___standard__FlatText___items, /* pointer to string:FlatBuffer:string#FlatText#items */
(nitmethod_t)standard___standard__FlatText___real_items_61d, /* pointer to string:FlatBuffer:string#FlatText#real_items= */
(nitmethod_t)standard___standard__FlatText___items_61d, /* pointer to string:FlatBuffer:string#FlatText#items= */
(nitmethod_t)standard___standard__FlatText___length_61d, /* pointer to string:FlatBuffer:string#FlatText#length= */
(nitmethod_t)standard___standard__Buffer___with_cap, /* pointer to string:FlatBuffer:string#Buffer#with_cap */
(nitmethod_t)standard___standard__Buffer___new, /* pointer to string:FlatBuffer:string#Buffer#new */
(nitmethod_t)standard___standard__FlatBuffer___Buffer__append, /* pointer to string:FlatBuffer:string#FlatBuffer#append */
(nitmethod_t)standard___standard__FlatBuffer___Buffer__add, /* pointer to string:FlatBuffer:string#FlatBuffer#add */
(nitmethod_t)standard___standard__Buffer___is_dirty, /* pointer to string:FlatBuffer:string#Buffer#is_dirty */
(nitmethod_t)standard___standard__Buffer___is_dirty_61d, /* pointer to string:FlatBuffer:string#Buffer#is_dirty= */
(nitmethod_t)standard___standard__Buffer___written_61d, /* pointer to string:FlatBuffer:string#Buffer#written= */
(nitmethod_t)standard___standard__FlatBuffer___Buffer__enlarge, /* pointer to string:FlatBuffer:string#FlatBuffer#enlarge */
(nitmethod_t)standard___standard__Text___standard__kernel__Object__hash, /* pointer to string:FlatBuffer:string#Text#hash */
(nitmethod_t)standard___standard__FlatBuffer___with_capacity, /* pointer to string:FlatBuffer:string#FlatBuffer#with_capacity */
(nitmethod_t)standard___standard__FlatBuffer___from, /* pointer to string:FlatBuffer:string#FlatBuffer#from */
(nitmethod_t)standard___standard__FlatBuffer___with_infos, /* pointer to string:FlatBuffer:string#FlatBuffer#with_infos */
(nitmethod_t)standard___standard__FlatBuffer___capacity, /* pointer to string:FlatBuffer:string#FlatBuffer#capacity */
(nitmethod_t)standard___standard__FlatBuffer___capacity_61d, /* pointer to string:FlatBuffer:string#FlatBuffer#capacity= */
(nitmethod_t)standard___standard__Object___init, /* pointer to string:FlatBuffer:kernel#Object#init */
}
};
/* allocate FlatBuffer */
val* NEW_standard__FlatBuffer(const struct type* type) {
val* self /* : FlatBuffer */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__FlatBuffer;
self->attrs[COLOR_standard__string__FlatText___length].l = 0l; /* _length on <self:FlatBuffer exact> */
self->attrs[COLOR_standard__string__Buffer___is_dirty].s = 1; /* _is_dirty on <self:FlatBuffer exact> */
self->attrs[COLOR_standard__string__Buffer___written].s = 0; /* _written on <self:FlatBuffer exact> */
self->attrs[COLOR_standard__string__FlatBuffer___capacity].l = 0l; /* _capacity on <self:FlatBuffer exact> */
return self;
}
/* runtime class standard__string__FlatBufferReverseIterator */
/* allocate FlatBufferReverseIterator */
val* NEW_standard__string__FlatBufferReverseIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "FlatBufferReverseIterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__string__FlatBufferCharView */
const struct class class_standard__string__FlatBufferCharView = {
0, /* box_kind */
{
(nitmethod_t)standard__string___standard__string__StringCharView___standard__kernel__Object__init, /* pointer to string:FlatBufferCharView:string#StringCharView#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to string:FlatBufferCharView:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to string:FlatBufferCharView:kernel#Object#sys */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to string:FlatBufferCharView:string#Collection#to_s */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object___61d_61d, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to string:FlatBufferCharView:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to string:FlatBufferCharView:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to string:FlatBufferCharView:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to string:FlatBufferCharView:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to string:FlatBufferCharView:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to string:FlatBufferCharView:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to string:FlatBufferCharView:string#Object#native_class_name */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object__hash, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to string:FlatBufferCharView:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to string:FlatBufferCharView:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to string:FlatBufferCharView:light_c#Object#from_c_call_context */
(nitmethod_t)standard__string___standard__string__StringCharView___target_61d, /* pointer to string:FlatBufferCharView:string#StringCharView#target= */
(nitmethod_t)standard__string___standard__string__StringCharView___target, /* pointer to string:FlatBufferCharView:string#StringCharView#target */
(nitmethod_t)standard___standard__Object___init, /* pointer to string:FlatBufferCharView:kernel#Object#init */
(nitmethod_t)standard__string___standard__string__FlatBufferCharView___enlarge, /* pointer to string:FlatBufferCharView:string#FlatBufferCharView#enlarge */
NULL, /* empty */
(nitmethod_t)standard__string___Collection___join, /* pointer to string:FlatBufferCharView:string#Collection#join */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to string:FlatBufferCharView:array#Collection#to_a */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__length, /* pointer to string:FlatBufferCharView:string#StringCharView#length */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__is_empty, /* pointer to string:FlatBufferCharView:string#StringCharView#is_empty */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__iterator, /* pointer to string:FlatBufferCharView:string#StringCharView#iterator */
(nitmethod_t)standard__string___Collection___plain_to_s, /* pointer to string:FlatBufferCharView:string#Collection#plain_to_s */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to string:FlatBufferCharView:abstract_collection#Collection#has_all */
(nitmethod_t)standard___standard__Collection___has, /* pointer to string:FlatBufferCharView:abstract_collection#Collection#has */
(nitmethod_t)standard___standard__SequenceRead___Collection__first, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#first */
(nitmethod_t)standard___standard__Collection___not_empty, /* pointer to string:FlatBufferCharView:abstract_collection#Collection#not_empty */
(nitmethod_t)VIRTUAL_standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SequenceRead___91d_93d, /* pointer to string:FlatBufferCharView:string#FlatBufferCharView#[] */
(nitmethod_t)standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SequenceRead__iterator_from, /* pointer to string:FlatBufferCharView:string#FlatBufferCharView#iterator_from */
(nitmethod_t)standard___standard__SequenceRead___index_of, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#index_of */
(nitmethod_t)standard___standard__SequenceRead___index_of_from, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#index_of_from */
(nitmethod_t)standard___standard__SequenceRead___last, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#last */
(nitmethod_t)standard___standard__SequenceRead___last_index_of, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#last_index_of */
(nitmethod_t)standard___standard__SequenceRead___last_index_of_from, /* pointer to string:FlatBufferCharView:abstract_collection#SequenceRead#last_index_of_from */
(nitmethod_t)standard___standard__RemovableCollection___remove, /* pointer to string:FlatBufferCharView:abstract_collection#RemovableCollection#remove */
(nitmethod_t)standard___standard__RemovableCollection___clear, /* pointer to string:FlatBufferCharView:abstract_collection#RemovableCollection#clear */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard___standard__SimpleCollection___add_all, /* pointer to string:FlatBufferCharView:abstract_collection#SimpleCollection#add_all */
(nitmethod_t)VIRTUAL_standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__SimpleCollection__add, /* pointer to string:FlatBufferCharView:string#FlatBufferCharView#add */
(nitmethod_t)VIRTUAL_standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence__push, /* pointer to string:FlatBufferCharView:string#FlatBufferCharView#push */
(nitmethod_t)VIRTUAL_standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence___91d_93d_61d, /* pointer to string:FlatBufferCharView:string#FlatBufferCharView#[]= */
(nitmethod_t)standard__string___standard__string__FlatBufferCharView___standard__abstract_collection__Sequence__append, /* pointer to string:FlatBufferCharView:string#FlatBufferCharView#append */
(nitmethod_t)standard___standard__Sequence___remove_at, /* pointer to string:FlatBufferCharView:abstract_collection#Sequence#remove_at */
(nitmethod_t)standard___standard__Sequence___pop, /* pointer to string:FlatBufferCharView:abstract_collection#Sequence#pop */
(nitmethod_t)standard___standard__Sequence___shift, /* pointer to string:FlatBufferCharView:abstract_collection#Sequence#shift */
(nitmethod_t)standard___standard__Sequence___prepend, /* pointer to string:FlatBufferCharView:abstract_collection#Sequence#prepend */
(nitmethod_t)standard___standard__Sequence___insert_all, /* pointer to string:FlatBufferCharView:abstract_collection#Sequence#insert_all */
(nitmethod_t)standard___standard__Sequence___unshift, /* pointer to string:FlatBufferCharView:abstract_collection#Sequence#unshift */
(nitmethod_t)standard___standard__Sequence___insert, /* pointer to string:FlatBufferCharView:abstract_collection#Sequence#insert */
(nitmethod_t)standard___standard__Sequence___first_61d, /* pointer to string:FlatBufferCharView:abstract_collection#Sequence#first= */
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
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___standard__kernel__Object__init, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to string:FlatBufferIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to string:FlatBufferIterator:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to string:FlatBufferIterator:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to string:FlatBufferIterator:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to string:FlatBufferIterator:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to string:FlatBufferIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to string:FlatBufferIterator:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to string:FlatBufferIterator:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to string:FlatBufferIterator:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to string:FlatBufferIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to string:FlatBufferIterator:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to string:FlatBufferIterator:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to string:FlatBufferIterator:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to string:FlatBufferIterator:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to string:FlatBufferIterator:light_c#Object#from_c_call_context */
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__Iterator__is_ok, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#is_ok */
(nitmethod_t)VIRTUAL_standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__Iterator__item, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#item */
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__Iterator__next, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#next */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to string:FlatBufferIterator:abstract_collection#Iterator#finish */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to string:FlatBufferIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to string:FlatBufferIterator:array#Iterator#to_a */
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___standard__abstract_collection__IndexedIterator__index, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#index */
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___with_pos, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#with_pos */
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___curr_pos, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#curr_pos */
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___target, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#target */
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___target_items, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#target_items */
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___curr_pos_61d, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#curr_pos= */
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___target_61d, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#target= */
(nitmethod_t)standard__string___standard__string__FlatBufferIterator___target_items_61d, /* pointer to string:FlatBufferIterator:string#FlatBufferIterator#target_items= */
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
6, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to string:NativeString:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to string:NativeString:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to string:NativeString:kernel#Object#sys */
(nitmethod_t)VIRTUAL_standard___standard__NativeString___Object__to_s, /* pointer to string:NativeString:string#NativeString#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to string:NativeString:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to string:NativeString:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to string:NativeString:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to string:NativeString:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to string:NativeString:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to string:NativeString:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to string:NativeString:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to string:NativeString:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to string:NativeString:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to string:NativeString:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to string:NativeString:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to string:NativeString:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Pointer___address_is_null, /* pointer to string:NativeString:kernel#Pointer#address_is_null */
(nitmethod_t)standard___standard__NativeString___new, /* pointer to string:NativeString:string#NativeString#new */
(nitmethod_t)standard___standard__NativeString___to_s_with_length, /* pointer to string:NativeString:string#NativeString#to_s_with_length */
(nitmethod_t)standard__environ___NativeString___get_environ, /* pointer to string:NativeString:environ#NativeString#get_environ */
(nitmethod_t)standard___standard__NativeString___atoi, /* pointer to string:NativeString:string#NativeString#atoi */
(nitmethod_t)standard___standard__NativeString___cstring_length, /* pointer to string:NativeString:string#NativeString#cstring_length */
(nitmethod_t)standard___standard__NativeString____91d_93d_61d, /* pointer to string:NativeString:string#NativeString#[]= */
(nitmethod_t)standard___standard__NativeString___copy_to, /* pointer to string:NativeString:string#NativeString#copy_to */
(nitmethod_t)standard___standard__NativeString____91d_93d, /* pointer to string:NativeString:string#NativeString#[] */
(nitmethod_t)standard__file___NativeString___file_exists, /* pointer to string:NativeString:file#NativeString#file_exists */
(nitmethod_t)standard__file___NativeString___file_mkdir, /* pointer to string:NativeString:file#NativeString#file_mkdir */
(nitmethod_t)standard__exec___NativeString___system, /* pointer to string:NativeString:exec#NativeString#system */
(nitmethod_t)standard__file___NativeString___file_realpath, /* pointer to string:NativeString:file#NativeString#file_realpath */
(nitmethod_t)standard___standard__NativeString___to_s_with_copy, /* pointer to string:NativeString:string#NativeString#to_s_with_copy */
(nitmethod_t)standard___standard__NativeString___atof, /* pointer to string:NativeString:string#NativeString#atof */
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
const struct class class_standard__CachedAlphaComparator = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to string:CachedAlphaComparator:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to string:CachedAlphaComparator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to string:CachedAlphaComparator:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to string:CachedAlphaComparator:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to string:CachedAlphaComparator:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to string:CachedAlphaComparator:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to string:CachedAlphaComparator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to string:CachedAlphaComparator:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to string:CachedAlphaComparator:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to string:CachedAlphaComparator:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to string:CachedAlphaComparator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to string:CachedAlphaComparator:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to string:CachedAlphaComparator:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to string:CachedAlphaComparator:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to string:CachedAlphaComparator:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to string:CachedAlphaComparator:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Comparator___sort, /* pointer to string:CachedAlphaComparator:sorter#Comparator#sort */
(nitmethod_t)standard___standard__Comparator___sub_sort, /* pointer to string:CachedAlphaComparator:sorter#Comparator#sub_sort */
(nitmethod_t)standard___standard__Comparator___quick_sort, /* pointer to string:CachedAlphaComparator:sorter#Comparator#quick_sort */
(nitmethod_t)standard___standard__Comparator___bubble_sort, /* pointer to string:CachedAlphaComparator:sorter#Comparator#bubble_sort */
(nitmethod_t)standard___standard__CachedAlphaComparator___standard__sorter__Comparator__compare, /* pointer to string:CachedAlphaComparator:string#CachedAlphaComparator#compare */
(nitmethod_t)standard___standard__CachedAlphaComparator___do_to_s, /* pointer to string:CachedAlphaComparator:string#CachedAlphaComparator#do_to_s */
(nitmethod_t)standard___standard__CachedAlphaComparator___cache, /* pointer to string:CachedAlphaComparator:string#CachedAlphaComparator#cache */
}
};
/* allocate CachedAlphaComparator */
val* NEW_standard__CachedAlphaComparator(const struct type* type) {
val* self /* : CachedAlphaComparator */;
val* var /* : HashMap[Object, String] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__CachedAlphaComparator;
var = NEW_standard__HashMap(&type_standard__HashMap__standard__Object__standard__String);
{
standard___standard__HashMap___standard__kernel__Object__init(var); /* Direct call hash_collection#HashMap#init on <var:HashMap[Object, String]>*/
}
self->attrs[COLOR_standard__string__CachedAlphaComparator___cache].val = var; /* _cache on <self:CachedAlphaComparator exact> */
return self;
}
/* runtime class standard__string__AlphaComparator */
const struct class class_standard__string__AlphaComparator = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to string:AlphaComparator:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to string:AlphaComparator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to string:AlphaComparator:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to string:AlphaComparator:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to string:AlphaComparator:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to string:AlphaComparator:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to string:AlphaComparator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to string:AlphaComparator:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to string:AlphaComparator:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to string:AlphaComparator:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to string:AlphaComparator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to string:AlphaComparator:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to string:AlphaComparator:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to string:AlphaComparator:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to string:AlphaComparator:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to string:AlphaComparator:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Comparator___sort, /* pointer to string:AlphaComparator:sorter#Comparator#sort */
(nitmethod_t)standard___standard__Comparator___sub_sort, /* pointer to string:AlphaComparator:sorter#Comparator#sub_sort */
(nitmethod_t)standard___standard__Comparator___quick_sort, /* pointer to string:AlphaComparator:sorter#Comparator#quick_sort */
(nitmethod_t)standard___standard__Comparator___bubble_sort, /* pointer to string:AlphaComparator:sorter#Comparator#bubble_sort */
(nitmethod_t)standard__string___standard__string__AlphaComparator___standard__sorter__Comparator__compare, /* pointer to string:AlphaComparator:string#AlphaComparator#compare */
}
};
/* allocate AlphaComparator */
val* NEW_standard__string__AlphaComparator(const struct type* type) {
val* self /* : AlphaComparator */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__string__AlphaComparator;
return self;
}
/* runtime class standard__Object */
const struct class class_standard__Object = {
0, /* box_kind */
{
}
};
/* allocate Object */
val* NEW_standard__Object(const struct type* type) {
val* self /* : Object */;
self = nit_alloc(sizeof(struct instance));
self->type = type;
self->class = &class_standard__Object;
return self;
}
/* runtime class standard__Sys */
const struct class class_standard__Sys = {
0, /* box_kind */
{
(nitmethod_t)standard__environ___Sys___standard__kernel__Object__init, /* pointer to kernel:Sys:environ#Sys#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to kernel:Sys:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to kernel:Sys:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to kernel:Sys:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to kernel:Sys:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to kernel:Sys:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to kernel:Sys:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to kernel:Sys:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to kernel:Sys:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to kernel:Sys:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to kernel:Sys:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to kernel:Sys:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to kernel:Sys:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to kernel:Sys:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to kernel:Sys:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to kernel:Sys:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Sys___run, /* pointer to kernel:Sys:kernel#Sys#run */
(nitmethod_t)standard__math___Sys___srand_from, /* pointer to kernel:Sys:math#Sys#srand_from */
(nitmethod_t)standard__file___Sys___buffer_mode_line, /* pointer to kernel:Sys:file#Sys#buffer_mode_line */
(nitmethod_t)nit__abstract_compiler___standard__Sys___main, /* pointer to kernel:Sys:abstract_compiler#Sys#main */
(nitmethod_t)standard__math___Sys___srand, /* pointer to kernel:Sys:math#Sys#srand */
(nitmethod_t)standard___standard__Sys___errno, /* pointer to kernel:Sys:kernel#Sys#errno */
(nitmethod_t)standard__sorter___Sys___default_comparator, /* pointer to kernel:Sys:sorter#Sys#default_comparator */
(nitmethod_t)standard__string___Sys___args, /* pointer to kernel:Sys:string#Sys#args */
(nitmethod_t)standard__file___Sys___print, /* pointer to kernel:Sys:file#Sys#print */
(nitmethod_t)standard___standard__Sys___exit, /* pointer to kernel:Sys:kernel#Sys#exit */
(nitmethod_t)standard__string___Sys___program_args, /* pointer to kernel:Sys:string#Sys#program_args */
(nitmethod_t)standard__file___Sys___stdout, /* pointer to kernel:Sys:file#Sys#stdout */
(nitmethod_t)standard__string___Sys___init_args, /* pointer to kernel:Sys:string#Sys#init_args */
(nitmethod_t)nit__model_base___standard__Sys___protected_visibility, /* pointer to kernel:Sys:model_base#Sys#protected_visibility */
(nitmethod_t)nit__model_base___standard__Sys___public_visibility, /* pointer to kernel:Sys:model_base#Sys#public_visibility */
(nitmethod_t)standard__file___Sys___stderr, /* pointer to kernel:Sys:file#Sys#stderr */
(nitmethod_t)nit__model_base___standard__Sys___private_visibility, /* pointer to kernel:Sys:model_base#Sys#private_visibility */
(nitmethod_t)standard__ropes___Sys___maxlen, /* pointer to kernel:Sys:ropes#Sys#maxlen */
(nitmethod_t)standard__string___Sys___native_argc, /* pointer to kernel:Sys:string#Sys#native_argc */
(nitmethod_t)standard__string___Sys___native_argv, /* pointer to kernel:Sys:string#Sys#native_argv */
(nitmethod_t)nit__model_base___standard__Sys___intrude_visibility, /* pointer to kernel:Sys:model_base#Sys#intrude_visibility */
(nitmethod_t)nit__model___standard__Sys___extern_kind, /* pointer to kernel:Sys:model#Sys#extern_kind */
(nitmethod_t)nit__model___standard__Sys___concrete_kind, /* pointer to kernel:Sys:model#Sys#concrete_kind */
(nitmethod_t)nit__model___standard__Sys___abstract_kind, /* pointer to kernel:Sys:model#Sys#abstract_kind */
(nitmethod_t)nit__model___standard__Sys___interface_kind, /* pointer to kernel:Sys:model#Sys#interface_kind */
(nitmethod_t)nit__model___standard__Sys___enum_kind, /* pointer to kernel:Sys:model#Sys#enum_kind */
(nitmethod_t)standard__file___Sys___getcwd, /* pointer to kernel:Sys:file#Sys#getcwd */
(nitmethod_t)standard__string___Sys___alpha_comparator, /* pointer to kernel:Sys:string#Sys#alpha_comparator */
(nitmethod_t)csv___standard__Sys___rfc4180, /* pointer to kernel:Sys:csv#Sys#rfc4180 */
(nitmethod_t)counter___standard__Sys___div, /* pointer to kernel:Sys:counter#Sys#div */
(nitmethod_t)standard__file___Sys___file_getcwd, /* pointer to kernel:Sys:file#Sys#file_getcwd */
(nitmethod_t)standard__file___Sys___printn, /* pointer to kernel:Sys:file#Sys#printn */
(nitmethod_t)nit__model_base___standard__Sys___none_visibility, /* pointer to kernel:Sys:model_base#Sys#none_visibility */
(nitmethod_t)standard__exec___Sys___system, /* pointer to kernel:Sys:exec#Sys#system */
(nitmethod_t)nit__version___standard__Sys___nit_version, /* pointer to kernel:Sys:version#Sys#nit_version */
(nitmethod_t)standard__string___Sys___program_name, /* pointer to kernel:Sys:string#Sys#program_name */
(nitmethod_t)standard__math___Sys___standard__kernel__Object__init, /* pointer to kernel:Sys:math#Sys#init */
(nitmethod_t)standard___standard__Object___init, /* pointer to kernel:Sys:kernel#Object#init */
}
};
/* allocate Sys */
val* NEW_standard__Sys(const struct type* type) {
val* self /* : Sys */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__Sys;
return self;
}
/* runtime class standard__Comparable */
/* allocate Comparable */
val* NEW_standard__Comparable(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Comparable is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Discrete */
/* allocate Discrete */
val* NEW_standard__Discrete(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Discrete is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Cloneable */
/* allocate Cloneable */
val* NEW_standard__Cloneable(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Cloneable is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Numeric */
/* allocate Numeric */
val* NEW_standard__Numeric(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Numeric is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Bool */
const struct class class_standard__Bool = {
2, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to kernel:Bool:kernel#Object#init */
(nitmethod_t)VIRTUAL_standard___standard__Bool___Object___33d_61d, /* pointer to kernel:Bool:kernel#Bool#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to kernel:Bool:kernel#Object#sys */
(nitmethod_t)VIRTUAL_standard__string___Bool___Object__to_s, /* pointer to kernel:Bool:string#Bool#to_s */
(nitmethod_t)VIRTUAL_standard___standard__Bool___Object___61d_61d, /* pointer to kernel:Bool:kernel#Bool#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to kernel:Bool:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to kernel:Bool:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_standard___standard__Bool___Object__object_id, /* pointer to kernel:Bool:kernel#Bool#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to kernel:Bool:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to kernel:Bool:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to kernel:Bool:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to kernel:Bool:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_standard___standard__Bool___Object__hash, /* pointer to kernel:Bool:kernel#Bool#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to kernel:Bool:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to kernel:Bool:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to kernel:Bool:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Bool___to_i, /* pointer to kernel:Bool:kernel#Bool#to_i */
}
};
/* runtime class standard__Float */
const struct class class_standard__Float = {
5, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to kernel:Float:kernel#Object#init */
(nitmethod_t)VIRTUAL_standard___standard__Float___Object___33d_61d, /* pointer to kernel:Float:kernel#Float#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to kernel:Float:kernel#Object#sys */
(nitmethod_t)VIRTUAL_standard__string___Float___Object__to_s, /* pointer to kernel:Float:string#Float#to_s */
(nitmethod_t)VIRTUAL_standard___standard__Float___Object___61d_61d, /* pointer to kernel:Float:kernel#Float#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to kernel:Float:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to kernel:Float:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_standard___standard__Float___Object__object_id, /* pointer to kernel:Float:kernel#Float#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to kernel:Float:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to kernel:Float:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to kernel:Float:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to kernel:Float:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to kernel:Float:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to kernel:Float:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to kernel:Float:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to kernel:Float:light_c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_standard___standard__Float___Comparable___62d_61d, /* pointer to kernel:Float:kernel#Float#>= */
(nitmethod_t)VIRTUAL_standard___standard__Float___Comparable___60d_61d, /* pointer to kernel:Float:kernel#Float#<= */
(nitmethod_t)VIRTUAL_standard___standard__Float___Comparable___62d, /* pointer to kernel:Float:kernel#Float#> */
(nitmethod_t)VIRTUAL_standard___standard__Float___Comparable___60d, /* pointer to kernel:Float:kernel#Float#< */
(nitmethod_t)VIRTUAL_standard___standard__Float___Comparable___60d_61d_62d, /* pointer to kernel:Float:kernel#Float#<=> */
(nitmethod_t)VIRTUAL_standard___standard__Float___Numeric___45d, /* pointer to kernel:Float:kernel#Float#- */
(nitmethod_t)VIRTUAL_standard___standard__Float___Numeric___43d, /* pointer to kernel:Float:kernel#Float#+ */
(nitmethod_t)VIRTUAL_standard___standard__Float___Numeric__unary_32d_45d, /* pointer to kernel:Float:kernel#Float#unary - */
(nitmethod_t)standard__string___Float___to_precision, /* pointer to kernel:Float:string#Float#to_precision */
(nitmethod_t)standard__math___Float___is_inf, /* pointer to kernel:Float:math#Float#is_inf */
(nitmethod_t)VIRTUAL_standard___standard__Float___Numeric__to_i, /* pointer to kernel:Float:kernel#Float#to_i */
(nitmethod_t)VIRTUAL_standard___standard__Float___Numeric___42d, /* pointer to kernel:Float:kernel#Float#* */
(nitmethod_t)VIRTUAL_standard___standard__Float___Numeric__to_b, /* pointer to kernel:Float:kernel#Float#to_b */
(nitmethod_t)VIRTUAL_standard___standard__Float___Numeric___47d, /* pointer to kernel:Float:kernel#Float#/ */
(nitmethod_t)VIRTUAL_standard___standard__Float___Numeric__to_f, /* pointer to kernel:Float:kernel#Float#to_f */
(nitmethod_t)standard__math___Float___is_nan, /* pointer to kernel:Float:math#Float#is_nan */
(nitmethod_t)standard__math___Float___is_inf_extern, /* pointer to kernel:Float:math#Float#is_inf_extern */
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
/* runtime class standard__Byte */
const struct class class_standard__Byte = {
3, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to kernel:Byte:kernel#Object#init */
(nitmethod_t)VIRTUAL_standard___standard__Byte___Object___33d_61d, /* pointer to kernel:Byte:kernel#Byte#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to kernel:Byte:kernel#Object#sys */
(nitmethod_t)VIRTUAL_standard__string___Byte___Object__to_s, /* pointer to kernel:Byte:string#Byte#to_s */
(nitmethod_t)VIRTUAL_standard___standard__Byte___Object___61d_61d, /* pointer to kernel:Byte:kernel#Byte#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to kernel:Byte:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to kernel:Byte:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_standard___standard__Byte___Object__object_id, /* pointer to kernel:Byte:kernel#Byte#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to kernel:Byte:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to kernel:Byte:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to kernel:Byte:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to kernel:Byte:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_standard___standard__Byte___Object__hash, /* pointer to kernel:Byte:kernel#Byte#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to kernel:Byte:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to kernel:Byte:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to kernel:Byte:light_c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_standard___standard__Byte___Comparable___62d_61d, /* pointer to kernel:Byte:kernel#Byte#>= */
(nitmethod_t)VIRTUAL_standard___standard__Byte___Comparable___60d_61d, /* pointer to kernel:Byte:kernel#Byte#<= */
(nitmethod_t)VIRTUAL_standard___standard__Byte___Comparable___62d, /* pointer to kernel:Byte:kernel#Byte#> */
(nitmethod_t)VIRTUAL_standard___standard__Byte___Comparable___60d, /* pointer to kernel:Byte:kernel#Byte#< */
(nitmethod_t)VIRTUAL_standard___standard__Byte___Comparable___60d_61d_62d, /* pointer to kernel:Byte:kernel#Byte#<=> */
(nitmethod_t)VIRTUAL_standard___standard__Byte___Numeric___45d, /* pointer to kernel:Byte:kernel#Byte#- */
(nitmethod_t)VIRTUAL_standard___standard__Byte___Numeric___43d, /* pointer to kernel:Byte:kernel#Byte#+ */
(nitmethod_t)VIRTUAL_standard___standard__Byte___Numeric__unary_32d_45d, /* pointer to kernel:Byte:kernel#Byte#unary - */
(nitmethod_t)VIRTUAL_standard___standard__Byte___Discrete__successor, /* pointer to kernel:Byte:kernel#Byte#successor */
(nitmethod_t)VIRTUAL_standard___standard__Byte___Discrete__distance, /* pointer to kernel:Byte:kernel#Byte#distance */
(nitmethod_t)VIRTUAL_standard___standard__Byte___Numeric__to_i, /* pointer to kernel:Byte:kernel#Byte#to_i */
(nitmethod_t)VIRTUAL_standard___standard__Byte___Numeric___42d, /* pointer to kernel:Byte:kernel#Byte#* */
(nitmethod_t)VIRTUAL_standard___standard__Byte___Numeric__to_b, /* pointer to kernel:Byte:kernel#Byte#to_b */
(nitmethod_t)VIRTUAL_standard___standard__Byte___Numeric___47d, /* pointer to kernel:Byte:kernel#Byte#/ */
(nitmethod_t)VIRTUAL_standard___standard__Byte___Numeric__to_f, /* pointer to kernel:Byte:kernel#Byte#to_f */
(nitmethod_t)standard__string___Byte___byte_to_s_len, /* pointer to kernel:Byte:string#Byte#byte_to_s_len */
(nitmethod_t)standard__string___Byte___native_byte_to_s, /* pointer to kernel:Byte:string#Byte#native_byte_to_s */
}
};
/* allocate Byte */
val* BOX_standard__Byte(unsigned char value) {
struct instance_standard__Byte*res = nit_alloc(sizeof(struct instance_standard__Byte));
res->type = &type_standard__Byte;
res->class = &class_standard__Byte;
res->value = value;
return (val*)res;
}
/* runtime class standard__Int */
const struct class class_standard__Int = {
1, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to kernel:Int:kernel#Object#init */
(nitmethod_t)VIRTUAL_standard___standard__Int___Object___33d_61d, /* pointer to kernel:Int:kernel#Int#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to kernel:Int:kernel#Object#sys */
(nitmethod_t)VIRTUAL_standard__string___Int___Object__to_s, /* pointer to kernel:Int:string#Int#to_s */
(nitmethod_t)VIRTUAL_standard___standard__Int___Object___61d_61d, /* pointer to kernel:Int:kernel#Int#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to kernel:Int:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to kernel:Int:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_standard___standard__Int___Object__object_id, /* pointer to kernel:Int:kernel#Int#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to kernel:Int:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to kernel:Int:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to kernel:Int:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to kernel:Int:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_standard___standard__Int___Object__hash, /* pointer to kernel:Int:kernel#Int#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to kernel:Int:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to kernel:Int:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to kernel:Int:light_c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_standard___standard__Int___Comparable___62d_61d, /* pointer to kernel:Int:kernel#Int#>= */
(nitmethod_t)VIRTUAL_standard___standard__Int___Comparable___60d_61d, /* pointer to kernel:Int:kernel#Int#<= */
(nitmethod_t)VIRTUAL_standard___standard__Int___Comparable___62d, /* pointer to kernel:Int:kernel#Int#> */
(nitmethod_t)VIRTUAL_standard___standard__Int___Comparable___60d, /* pointer to kernel:Int:kernel#Int#< */
(nitmethod_t)VIRTUAL_standard___standard__Int___Comparable___60d_61d_62d, /* pointer to kernel:Int:kernel#Int#<=> */
(nitmethod_t)VIRTUAL_standard___standard__Int___Numeric___45d, /* pointer to kernel:Int:kernel#Int#- */
(nitmethod_t)VIRTUAL_standard___standard__Int___Numeric___43d, /* pointer to kernel:Int:kernel#Int#+ */
(nitmethod_t)VIRTUAL_standard___standard__Int___Numeric__unary_32d_45d, /* pointer to kernel:Int:kernel#Int#unary - */
(nitmethod_t)VIRTUAL_standard___standard__Int___Discrete__successor, /* pointer to kernel:Int:kernel#Int#successor */
(nitmethod_t)VIRTUAL_standard___standard__Int___Discrete__distance, /* pointer to kernel:Int:kernel#Int#distance */
(nitmethod_t)VIRTUAL_standard___standard__Int___Numeric__to_i, /* pointer to kernel:Int:kernel#Int#to_i */
(nitmethod_t)VIRTUAL_standard___standard__Int___Numeric___42d, /* pointer to kernel:Int:kernel#Int#* */
(nitmethod_t)VIRTUAL_standard___standard__Int___Numeric__to_b, /* pointer to kernel:Int:kernel#Int#to_b */
(nitmethod_t)VIRTUAL_standard___standard__Int___Numeric___47d, /* pointer to kernel:Int:kernel#Int#/ */
(nitmethod_t)VIRTUAL_standard___standard__Int___Numeric__to_f, /* pointer to kernel:Int:kernel#Int#to_f */
(nitmethod_t)standard__string___Int___strerror, /* pointer to kernel:Int:string#Int#strerror */
(nitmethod_t)standard__string___Int___int_to_s_len, /* pointer to kernel:Int:string#Int#int_to_s_len */
(nitmethod_t)standard__string___Int___native_int_to_s, /* pointer to kernel:Int:string#Int#native_int_to_s */
(nitmethod_t)standard__string___Int___strerror_ext, /* pointer to kernel:Int:string#Int#strerror_ext */
(nitmethod_t)standard___standard__Int___abs, /* pointer to kernel:Int:kernel#Int#abs */
(nitmethod_t)standard__string___Int___to_hex, /* pointer to kernel:Int:string#Int#to_hex */
(nitmethod_t)standard___standard__Int____37d, /* pointer to kernel:Int:kernel#Int#% */
(nitmethod_t)standard___standard__Int___ascii, /* pointer to kernel:Int:kernel#Int#ascii */
(nitmethod_t)standard__string___Int___to_base, /* pointer to kernel:Int:string#Int#to_base */
(nitmethod_t)standard___standard__Int___lshift, /* pointer to kernel:Int:kernel#Int#lshift */
(nitmethod_t)standard___standard__Int___digit_count, /* pointer to kernel:Int:kernel#Int#digit_count */
(nitmethod_t)standard__string___Int___fill_buffer, /* pointer to kernel:Int:string#Int#fill_buffer */
(nitmethod_t)standard___standard__Int___digit_count_base_95d10, /* pointer to kernel:Int:kernel#Int#digit_count_base_10 */
(nitmethod_t)standard___standard__Int___to_c, /* pointer to kernel:Int:kernel#Int#to_c */
}
};
/* runtime class standard__Char */
const struct class class_standard__Char = {
4, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to kernel:Char:kernel#Object#init */
(nitmethod_t)VIRTUAL_standard___standard__Char___Object___33d_61d, /* pointer to kernel:Char:kernel#Char#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to kernel:Char:kernel#Object#sys */
(nitmethod_t)VIRTUAL_standard__string___Char___Object__to_s, /* pointer to kernel:Char:string#Char#to_s */
(nitmethod_t)VIRTUAL_standard___standard__Char___Object___61d_61d, /* pointer to kernel:Char:kernel#Char#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to kernel:Char:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to kernel:Char:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_standard___standard__Char___Object__object_id, /* pointer to kernel:Char:kernel#Char#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to kernel:Char:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to kernel:Char:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to kernel:Char:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to kernel:Char:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_standard___standard__Char___Object__hash, /* pointer to kernel:Char:kernel#Char#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to kernel:Char:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to kernel:Char:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to kernel:Char:light_c#Object#from_c_call_context */
(nitmethod_t)VIRTUAL_standard___standard__Char___Comparable___62d_61d, /* pointer to kernel:Char:kernel#Char#>= */
(nitmethod_t)VIRTUAL_standard___standard__Char___Comparable___60d_61d, /* pointer to kernel:Char:kernel#Char#<= */
(nitmethod_t)VIRTUAL_standard___standard__Char___Comparable___62d, /* pointer to kernel:Char:kernel#Char#> */
(nitmethod_t)VIRTUAL_standard___standard__Char___Comparable___60d, /* pointer to kernel:Char:kernel#Char#< */
(nitmethod_t)standard___standard__Comparable____60d_61d_62d, /* pointer to kernel:Char:kernel#Comparable#<=> */
(nitmethod_t)standard___standard__Pattern___split_in, /* pointer to kernel:Char:string_search#Pattern#split_in */
(nitmethod_t)VIRTUAL_standard__string_search___Char___Pattern__search_in, /* pointer to kernel:Char:string_search#Char#search_in */
(nitmethod_t)VIRTUAL_standard__string_search___Char___Pattern__search_index_in, /* pointer to kernel:Char:string_search#Char#search_index_in */
(nitmethod_t)VIRTUAL_standard___standard__Char___Discrete__successor, /* pointer to kernel:Char:kernel#Char#successor */
(nitmethod_t)VIRTUAL_standard___standard__Char___Discrete__distance, /* pointer to kernel:Char:kernel#Char#distance */
(nitmethod_t)standard___standard__Char___is_lower, /* pointer to kernel:Char:kernel#Char#is_lower */
(nitmethod_t)standard___standard__Char___is_upper, /* pointer to kernel:Char:kernel#Char#is_upper */
(nitmethod_t)standard___standard__Char___to_lower, /* pointer to kernel:Char:kernel#Char#to_lower */
(nitmethod_t)standard___standard__Char___ascii, /* pointer to kernel:Char:kernel#Char#ascii */
(nitmethod_t)standard__string___Char___is_numeric, /* pointer to kernel:Char:string#Char#is_numeric */
(nitmethod_t)standard___standard__Char___to_upper, /* pointer to kernel:Char:kernel#Char#to_upper */
(nitmethod_t)standard___standard__Char___to_i, /* pointer to kernel:Char:kernel#Char#to_i */
(nitmethod_t)standard___standard__Char___is_digit, /* pointer to kernel:Char:kernel#Char#is_digit */
}
};
/* runtime class standard__Pointer */
const struct class class_standard__Pointer = {
7, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to kernel:Pointer:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to kernel:Pointer:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to kernel:Pointer:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to kernel:Pointer:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to kernel:Pointer:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to kernel:Pointer:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to kernel:Pointer:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to kernel:Pointer:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to kernel:Pointer:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to kernel:Pointer:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to kernel:Pointer:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to kernel:Pointer:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to kernel:Pointer:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to kernel:Pointer:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to kernel:Pointer:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to kernel:Pointer:light_c#Object#from_c_call_context */
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
fatal_exit(1);
}
/* runtime class standard__range__IteratorRange */
/* allocate IteratorRange[Discrete] */
val* NEW_standard__range__IteratorRange(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "IteratorRange is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__range__ReverseIteratorRange */
/* allocate ReverseIteratorRange[Discrete] */
val* NEW_standard__range__ReverseIteratorRange(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ReverseIteratorRange is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__range__DowntoIteratorRange */
/* allocate DowntoIteratorRange[Discrete] */
val* NEW_standard__range__DowntoIteratorRange(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "DowntoIteratorRange is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Collection */
/* allocate Collection[nullable Object] */
val* NEW_standard__Collection(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Collection is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Iterator */
/* allocate Iterator[nullable Object] */
val* NEW_standard__Iterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Iterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__IteratorDecorator */
/* allocate IteratorDecorator[nullable Object] */
val* NEW_standard__IteratorDecorator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "IteratorDecorator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__abstract_collection__StepIterator */
/* allocate StepIterator[nullable Object] */
val* NEW_standard__abstract_collection__StepIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "StepIterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Container */
/* allocate Container[nullable Object] */
val* NEW_standard__Container(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Container is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__abstract_collection__ContainerIterator */
const struct class class_standard__abstract_collection__ContainerIterator = {
0, /* box_kind */
{
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__ContainerIterator___standard__kernel__Object__init, /* pointer to abstract_collection:ContainerIterator:abstract_collection#ContainerIterator#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to abstract_collection:ContainerIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to abstract_collection:ContainerIterator:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to abstract_collection:ContainerIterator:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to abstract_collection:ContainerIterator:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to abstract_collection:ContainerIterator:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to abstract_collection:ContainerIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to abstract_collection:ContainerIterator:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to abstract_collection:ContainerIterator:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to abstract_collection:ContainerIterator:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to abstract_collection:ContainerIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to abstract_collection:ContainerIterator:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to abstract_collection:ContainerIterator:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to abstract_collection:ContainerIterator:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to abstract_collection:ContainerIterator:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to abstract_collection:ContainerIterator:light_c#Object#from_c_call_context */
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__ContainerIterator___Iterator__is_ok, /* pointer to abstract_collection:ContainerIterator:abstract_collection#ContainerIterator#is_ok */
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__ContainerIterator___Iterator__item, /* pointer to abstract_collection:ContainerIterator:abstract_collection#ContainerIterator#item */
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__ContainerIterator___Iterator__next, /* pointer to abstract_collection:ContainerIterator:abstract_collection#ContainerIterator#next */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to abstract_collection:ContainerIterator:abstract_collection#Iterator#finish */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to abstract_collection:ContainerIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to abstract_collection:ContainerIterator:array#Iterator#to_a */
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__ContainerIterator___container_61d, /* pointer to abstract_collection:ContainerIterator:abstract_collection#ContainerIterator#container= */
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__ContainerIterator___is_ok_61d, /* pointer to abstract_collection:ContainerIterator:abstract_collection#ContainerIterator#is_ok= */
(nitmethod_t)standard___standard__Object___init, /* pointer to abstract_collection:ContainerIterator:kernel#Object#init */
}
};
/* allocate ContainerIterator[nullable Object] */
val* NEW_standard__abstract_collection__ContainerIterator(const struct type* type) {
val* self /* : ContainerIterator[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__abstract_collection__ContainerIterator;
self->attrs[COLOR_standard__abstract_collection__ContainerIterator___is_ok].s = 1; /* _is_ok on <self:ContainerIterator[nullable Object] exact> */
return self;
}
/* runtime class standard__RemovableCollection */
/* allocate RemovableCollection[nullable Object] */
val* NEW_standard__RemovableCollection(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "RemovableCollection is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__SimpleCollection */
/* allocate SimpleCollection[nullable Object] */
val* NEW_standard__SimpleCollection(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "SimpleCollection is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Set */
/* allocate Set[nullable Object] */
val* NEW_standard__Set(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Set is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__MapRead */
/* allocate MapRead[nullable Object, nullable Object] */
val* NEW_standard__MapRead(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MapRead is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Map */
/* allocate Map[nullable Object, nullable Object] */
val* NEW_standard__Map(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Map is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__MapIterator */
/* allocate MapIterator[nullable Object, nullable Object] */
val* NEW_standard__MapIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MapIterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__MapKeysIterator */
const struct class class_standard__MapKeysIterator = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__MapKeysIterator___standard__kernel__Object__init, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#MapKeysIterator#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to abstract_collection:MapKeysIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to abstract_collection:MapKeysIterator:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to abstract_collection:MapKeysIterator:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to abstract_collection:MapKeysIterator:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to abstract_collection:MapKeysIterator:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to abstract_collection:MapKeysIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to abstract_collection:MapKeysIterator:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to abstract_collection:MapKeysIterator:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to abstract_collection:MapKeysIterator:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to abstract_collection:MapKeysIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to abstract_collection:MapKeysIterator:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to abstract_collection:MapKeysIterator:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to abstract_collection:MapKeysIterator:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to abstract_collection:MapKeysIterator:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to abstract_collection:MapKeysIterator:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__MapKeysIterator___Iterator__is_ok, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#MapKeysIterator#is_ok */
(nitmethod_t)standard___standard__MapKeysIterator___Iterator__item, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#MapKeysIterator#item */
(nitmethod_t)standard___standard__MapKeysIterator___Iterator__next, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#MapKeysIterator#next */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#Iterator#finish */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to abstract_collection:MapKeysIterator:array#Iterator#to_a */
(nitmethod_t)standard___standard__MapKeysIterator___original_iterator_61d, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#MapKeysIterator#original_iterator= */
(nitmethod_t)standard___standard__MapKeysIterator___original_iterator, /* pointer to abstract_collection:MapKeysIterator:abstract_collection#MapKeysIterator#original_iterator */
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
(nitmethod_t)standard___standard__MapValuesIterator___standard__kernel__Object__init, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#MapValuesIterator#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to abstract_collection:MapValuesIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to abstract_collection:MapValuesIterator:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to abstract_collection:MapValuesIterator:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to abstract_collection:MapValuesIterator:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to abstract_collection:MapValuesIterator:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to abstract_collection:MapValuesIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to abstract_collection:MapValuesIterator:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to abstract_collection:MapValuesIterator:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to abstract_collection:MapValuesIterator:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to abstract_collection:MapValuesIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to abstract_collection:MapValuesIterator:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to abstract_collection:MapValuesIterator:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to abstract_collection:MapValuesIterator:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to abstract_collection:MapValuesIterator:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to abstract_collection:MapValuesIterator:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__MapValuesIterator___Iterator__is_ok, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#MapValuesIterator#is_ok */
(nitmethod_t)standard___standard__MapValuesIterator___Iterator__item, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#MapValuesIterator#item */
(nitmethod_t)standard___standard__MapValuesIterator___Iterator__next, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#MapValuesIterator#next */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#Iterator#finish */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to abstract_collection:MapValuesIterator:array#Iterator#to_a */
(nitmethod_t)standard___standard__MapValuesIterator___original_iterator_61d, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#MapValuesIterator#original_iterator= */
(nitmethod_t)standard___standard__MapValuesIterator___original_iterator, /* pointer to abstract_collection:MapValuesIterator:abstract_collection#MapValuesIterator#original_iterator */
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
fatal_exit(1);
}
/* runtime class standard__Sequence */
/* allocate Sequence[nullable Object] */
val* NEW_standard__Sequence(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Sequence is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__IndexedIterator */
/* allocate IndexedIterator[nullable Object] */
val* NEW_standard__IndexedIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "IndexedIterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__CoupleMap */
/* allocate CoupleMap[nullable Object, nullable Object] */
val* NEW_standard__CoupleMap(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CoupleMap is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__abstract_collection__CoupleMapIterator */
const struct class class_standard__abstract_collection__CoupleMapIterator = {
0, /* box_kind */
{
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___standard__kernel__Object__init, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection#CoupleMapIterator#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to abstract_collection:CoupleMapIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to abstract_collection:CoupleMapIterator:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to abstract_collection:CoupleMapIterator:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to abstract_collection:CoupleMapIterator:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to abstract_collection:CoupleMapIterator:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to abstract_collection:CoupleMapIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to abstract_collection:CoupleMapIterator:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to abstract_collection:CoupleMapIterator:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to abstract_collection:CoupleMapIterator:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to abstract_collection:CoupleMapIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to abstract_collection:CoupleMapIterator:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to abstract_collection:CoupleMapIterator:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to abstract_collection:CoupleMapIterator:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to abstract_collection:CoupleMapIterator:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to abstract_collection:CoupleMapIterator:light_c#Object#from_c_call_context */
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___MapIterator__is_ok, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection#CoupleMapIterator#is_ok */
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___MapIterator__key, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection#CoupleMapIterator#key */
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___MapIterator__item, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection#CoupleMapIterator#item */
(nitmethod_t)standard__abstract_collection___standard__abstract_collection__CoupleMapIterator___MapIterator__next, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection#CoupleMapIterator#next */
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
(nitmethod_t)standard___standard__Couple___standard__kernel__Object__init, /* pointer to abstract_collection:Couple:abstract_collection#Couple#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to abstract_collection:Couple:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to abstract_collection:Couple:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to abstract_collection:Couple:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to abstract_collection:Couple:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to abstract_collection:Couple:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to abstract_collection:Couple:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to abstract_collection:Couple:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to abstract_collection:Couple:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to abstract_collection:Couple:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to abstract_collection:Couple:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to abstract_collection:Couple:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to abstract_collection:Couple:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to abstract_collection:Couple:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to abstract_collection:Couple:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to abstract_collection:Couple:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Couple___second, /* pointer to abstract_collection:Couple:abstract_collection#Couple#second */
(nitmethod_t)standard___standard__Couple___second_61d, /* pointer to abstract_collection:Couple:abstract_collection#Couple#second= */
(nitmethod_t)standard___standard__Couple___first_61d, /* pointer to abstract_collection:Couple:abstract_collection#Couple#first= */
(nitmethod_t)standard___standard__Couple___first, /* pointer to abstract_collection:Couple:abstract_collection#Couple#first */
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
(nitmethod_t)standard___standard__List___standard__kernel__Object__init, /* pointer to list:List:list#List#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to list:List:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to list:List:kernel#Object#sys */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to list:List:string#Collection#to_s */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object___61d_61d, /* pointer to list:List:abstract_collection#SequenceRead#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to list:List:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to list:List:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to list:List:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to list:List:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to list:List:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to list:List:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to list:List:string#Object#native_class_name */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object__hash, /* pointer to list:List:abstract_collection#SequenceRead#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to list:List:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to list:List:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to list:List:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__List___get_node, /* pointer to list:List:list#List#get_node */
(nitmethod_t)standard___standard__List___search_node_after, /* pointer to list:List:list#List#search_node_after */
(nitmethod_t)standard___standard__List___remove_node, /* pointer to list:List:list#List#remove_node */
(nitmethod_t)standard___standard__List___insert_before, /* pointer to list:List:list#List#insert_before */
NULL, /* empty */
(nitmethod_t)standard__string___Collection___join, /* pointer to list:List:string#Collection#join */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to list:List:array#Collection#to_a */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Collection__length, /* pointer to list:List:list#List#length */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Collection__is_empty, /* pointer to list:List:list#List#is_empty */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Collection__iterator, /* pointer to list:List:list#List#iterator */
(nitmethod_t)standard__string___Collection___plain_to_s, /* pointer to list:List:string#Collection#plain_to_s */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to list:List:abstract_collection#Collection#has_all */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Collection__has, /* pointer to list:List:list#List#has */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Collection__first, /* pointer to list:List:list#List#first */
(nitmethod_t)standard___standard__Collection___not_empty, /* pointer to list:List:abstract_collection#Collection#not_empty */
(nitmethod_t)standard___standard__List___standard__abstract_collection__SequenceRead___91d_93d, /* pointer to list:List:list#List#[] */
(nitmethod_t)standard___standard__SequenceRead___iterator_from, /* pointer to list:List:abstract_collection#SequenceRead#iterator_from */
(nitmethod_t)standard___standard__SequenceRead___index_of, /* pointer to list:List:abstract_collection#SequenceRead#index_of */
(nitmethod_t)standard___standard__SequenceRead___index_of_from, /* pointer to list:List:abstract_collection#SequenceRead#index_of_from */
(nitmethod_t)standard___standard__List___standard__abstract_collection__SequenceRead__last, /* pointer to list:List:list#List#last */
(nitmethod_t)standard___standard__SequenceRead___last_index_of, /* pointer to list:List:abstract_collection#SequenceRead#last_index_of */
(nitmethod_t)standard___standard__SequenceRead___last_index_of_from, /* pointer to list:List:abstract_collection#SequenceRead#last_index_of_from */
(nitmethod_t)standard___standard__List___standard__abstract_collection__RemovableCollection__remove, /* pointer to list:List:list#List#remove */
(nitmethod_t)standard___standard__List___standard__abstract_collection__RemovableCollection__clear, /* pointer to list:List:list#List#clear */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard___standard__SimpleCollection___add_all, /* pointer to list:List:abstract_collection#SimpleCollection#add_all */
(nitmethod_t)standard___standard__Sequence___SimpleCollection__add, /* pointer to list:List:abstract_collection#Sequence#add */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Sequence__push, /* pointer to list:List:list#List#push */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Sequence___91d_93d_61d, /* pointer to list:List:list#List#[]= */
(nitmethod_t)standard___standard__Sequence___append, /* pointer to list:List:abstract_collection#Sequence#append */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Sequence__remove_at, /* pointer to list:List:list#List#remove_at */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Sequence__pop, /* pointer to list:List:list#List#pop */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Sequence__shift, /* pointer to list:List:list#List#shift */
(nitmethod_t)standard___standard__Sequence___prepend, /* pointer to list:List:abstract_collection#Sequence#prepend */
(nitmethod_t)standard___standard__Sequence___insert_all, /* pointer to list:List:abstract_collection#Sequence#insert_all */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Sequence__unshift, /* pointer to list:List:list#List#unshift */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Sequence__insert, /* pointer to list:List:list#List#insert */
(nitmethod_t)standard___standard__List___standard__abstract_collection__Sequence__first_61d, /* pointer to list:List:list#List#first= */
}
};
/* allocate List[nullable Object] */
val* NEW_standard__List(const struct type* type) {
val* self /* : List[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__List;
return self;
}
/* runtime class standard__ListIterator */
const struct class class_standard__ListIterator = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__ListIterator___standard__kernel__Object__init, /* pointer to list:ListIterator:list#ListIterator#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to list:ListIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to list:ListIterator:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to list:ListIterator:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to list:ListIterator:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to list:ListIterator:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to list:ListIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to list:ListIterator:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to list:ListIterator:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to list:ListIterator:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to list:ListIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to list:ListIterator:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to list:ListIterator:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to list:ListIterator:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to list:ListIterator:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to list:ListIterator:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__ListIterator___standard__abstract_collection__Iterator__is_ok, /* pointer to list:ListIterator:list#ListIterator#is_ok */
(nitmethod_t)standard___standard__ListIterator___standard__abstract_collection__Iterator__item, /* pointer to list:ListIterator:list#ListIterator#item */
(nitmethod_t)standard___standard__ListIterator___standard__abstract_collection__Iterator__next, /* pointer to list:ListIterator:list#ListIterator#next */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to list:ListIterator:abstract_collection#Iterator#finish */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to list:ListIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to list:ListIterator:array#Iterator#to_a */
(nitmethod_t)standard___standard__ListIterator___standard__abstract_collection__IndexedIterator__index, /* pointer to list:ListIterator:list#ListIterator#index */
(nitmethod_t)standard___standard__ListIterator___list_61d, /* pointer to list:ListIterator:list#ListIterator#list= */
}
};
/* allocate ListIterator[nullable Object] */
val* NEW_standard__ListIterator(const struct type* type) {
val* self /* : ListIterator[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__ListIterator;
self->attrs[COLOR_standard__list__ListIterator___index].l = 0l; /* _index on <self:ListIterator[nullable Object] exact> */
return self;
}
/* runtime class standard__list__ListReverseIterator */
/* allocate ListReverseIterator[nullable Object] */
val* NEW_standard__list__ListReverseIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ListReverseIterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__list__ListNode */
const struct class class_standard__list__ListNode = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Container___standard__kernel__Object__init, /* pointer to list:ListNode:abstract_collection#Container#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to list:ListNode:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to list:ListNode:kernel#Object#sys */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to list:ListNode:string#Collection#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to list:ListNode:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to list:ListNode:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to list:ListNode:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to list:ListNode:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to list:ListNode:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to list:ListNode:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to list:ListNode:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to list:ListNode:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to list:ListNode:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to list:ListNode:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to list:ListNode:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to list:ListNode:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Container___item_61d, /* pointer to list:ListNode:abstract_collection#Container#item= */
(nitmethod_t)standard___standard__Container___item, /* pointer to list:ListNode:abstract_collection#Container#item */
(nitmethod_t)standard___standard__Object___init, /* pointer to list:ListNode:kernel#Object#init */
(nitmethod_t)standard__list___standard__list__ListNode___next_61d, /* pointer to list:ListNode:list#ListNode#next= */
(nitmethod_t)standard__list___standard__list__ListNode___prev_61d, /* pointer to list:ListNode:list#ListNode#prev= */
(nitmethod_t)standard__string___Collection___join, /* pointer to list:ListNode:string#Collection#join */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to list:ListNode:array#Collection#to_a */
(nitmethod_t)standard___standard__Container___Collection__length, /* pointer to list:ListNode:abstract_collection#Container#length */
(nitmethod_t)standard___standard__Container___Collection__is_empty, /* pointer to list:ListNode:abstract_collection#Container#is_empty */
(nitmethod_t)standard___standard__Container___Collection__iterator, /* pointer to list:ListNode:abstract_collection#Container#iterator */
(nitmethod_t)standard__string___Collection___plain_to_s, /* pointer to list:ListNode:string#Collection#plain_to_s */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to list:ListNode:abstract_collection#Collection#has_all */
(nitmethod_t)standard___standard__Container___Collection__has, /* pointer to list:ListNode:abstract_collection#Container#has */
(nitmethod_t)standard___standard__Container___Collection__first, /* pointer to list:ListNode:abstract_collection#Container#first */
(nitmethod_t)standard___standard__Collection___not_empty, /* pointer to list:ListNode:abstract_collection#Collection#not_empty */
(nitmethod_t)standard__list___standard__list__ListNode___next, /* pointer to list:ListNode:list#ListNode#next */
(nitmethod_t)standard__list___standard__list__ListNode___prev, /* pointer to list:ListNode:list#ListNode#prev */
}
};
/* allocate ListNode[nullable Object] */
val* NEW_standard__list__ListNode(const struct type* type) {
val* self /* : ListNode[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__list__ListNode;
return self;
}
/* runtime class standard__AbstractArrayRead */
/* allocate AbstractArrayRead[nullable Object] */
val* NEW_standard__AbstractArrayRead(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AbstractArrayRead is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__AbstractArray */
/* allocate AbstractArray[nullable Object] */
val* NEW_standard__AbstractArray(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AbstractArray is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Array */
const struct class class_standard__Array = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Array___standard__kernel__Object__init, /* pointer to array:Array:array#Array#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to array:Array:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to array:Array:kernel#Object#sys */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to array:Array:string#Collection#to_s */
(nitmethod_t)standard___standard__Array___standard__kernel__Object___61d_61d, /* pointer to array:Array:array#Array#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to array:Array:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to array:Array:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to array:Array:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to array:Array:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to array:Array:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to array:Array:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to array:Array:string#Object#native_class_name */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object__hash, /* pointer to array:Array:abstract_collection#SequenceRead#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to array:Array:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to array:Array:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to array:Array:light_c#Object#from_c_call_context */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__string___Collection___join, /* pointer to array:Array:string#Collection#join */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to array:Array:array#Collection#to_a */
(nitmethod_t)standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__length, /* pointer to array:Array:array#AbstractArrayRead#length */
(nitmethod_t)standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty, /* pointer to array:Array:array#AbstractArrayRead#is_empty */
(nitmethod_t)standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator, /* pointer to array:Array:array#AbstractArrayRead#iterator */
(nitmethod_t)standard__string___Array___Collection__plain_to_s, /* pointer to array:Array:string#Array#plain_to_s */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to array:Array:abstract_collection#Collection#has_all */
(nitmethod_t)standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has, /* pointer to array:Array:array#AbstractArrayRead#has */
(nitmethod_t)standard___standard__SequenceRead___Collection__first, /* pointer to array:Array:abstract_collection#SequenceRead#first */
(nitmethod_t)standard___standard__Collection___not_empty, /* pointer to array:Array:abstract_collection#Collection#not_empty */
(nitmethod_t)standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d, /* pointer to array:Array:array#Array#[] */
(nitmethod_t)standard___standard__SequenceRead___iterator_from, /* pointer to array:Array:abstract_collection#SequenceRead#iterator_from */
(nitmethod_t)standard___standard__AbstractArrayRead___standard__abstract_collection__SequenceRead__index_of, /* pointer to array:Array:array#AbstractArrayRead#index_of */
(nitmethod_t)standard___standard__AbstractArrayRead___standard__abstract_collection__SequenceRead__index_of_from, /* pointer to array:Array:array#AbstractArrayRead#index_of_from */
(nitmethod_t)standard___standard__SequenceRead___last, /* pointer to array:Array:abstract_collection#SequenceRead#last */
(nitmethod_t)standard___standard__AbstractArrayRead___standard__abstract_collection__SequenceRead__last_index_of, /* pointer to array:Array:array#AbstractArrayRead#last_index_of */
(nitmethod_t)standard___standard__AbstractArrayRead___standard__abstract_collection__SequenceRead__last_index_of_from, /* pointer to array:Array:array#AbstractArrayRead#last_index_of_from */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__RemovableCollection__remove, /* pointer to array:Array:array#AbstractArray#remove */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__RemovableCollection__clear, /* pointer to array:Array:array#AbstractArray#clear */
(nitmethod_t)standard___standard__AbstractArrayRead___length_61d, /* pointer to array:Array:array#AbstractArrayRead#length= */
(nitmethod_t)standard___standard__AbstractArrayRead___copy_to, /* pointer to array:Array:array#AbstractArrayRead#copy_to */
(nitmethod_t)standard___standard__AbstractArrayRead___reversed, /* pointer to array:Array:array#AbstractArrayRead#reversed */
(nitmethod_t)standard___standard__AbstractArrayRead___sub, /* pointer to array:Array:array#AbstractArrayRead#sub */
(nitmethod_t)standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all, /* pointer to array:Array:array#Array#add_all */
(nitmethod_t)standard___standard__Array___standard__abstract_collection__SimpleCollection__add, /* pointer to array:Array:array#Array#add */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__Sequence__push, /* pointer to array:Array:array#AbstractArray#push */
(nitmethod_t)standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d, /* pointer to array:Array:array#Array#[]= */
(nitmethod_t)standard___standard__Sequence___append, /* pointer to array:Array:abstract_collection#Sequence#append */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__Sequence__remove_at, /* pointer to array:Array:array#AbstractArray#remove_at */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__Sequence__pop, /* pointer to array:Array:array#AbstractArray#pop */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__Sequence__shift, /* pointer to array:Array:array#AbstractArray#shift */
(nitmethod_t)standard___standard__Sequence___prepend, /* pointer to array:Array:abstract_collection#Sequence#prepend */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__Sequence__insert_all, /* pointer to array:Array:array#AbstractArray#insert_all */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__Sequence__unshift, /* pointer to array:Array:array#AbstractArray#unshift */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__Sequence__insert, /* pointer to array:Array:array#AbstractArray#insert */
(nitmethod_t)standard___standard__Sequence___first_61d, /* pointer to array:Array:abstract_collection#Sequence#first= */
(nitmethod_t)standard___standard__Array___AbstractArray__enlarge, /* pointer to array:Array:array#Array#enlarge */
(nitmethod_t)standard___standard__Array___with_native, /* pointer to array:Array:array#Array#with_native */
(nitmethod_t)standard___standard__Array___with_capacity, /* pointer to array:Array:array#Array#with_capacity */
(nitmethod_t)standard___standard__Array___filled_with, /* pointer to array:Array:array#Array#filled_with */
(nitmethod_t)standard___standard__Object___init, /* pointer to array:Array:kernel#Object#init */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object___61d_61d, /* pointer to array:Array:abstract_collection#SequenceRead#== */
}
};
/* allocate Array[nullable Object] */
val* NEW_standard__Array(const struct type* type) {
val* self /* : Array[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__Array;
self->attrs[COLOR_standard__array__AbstractArrayRead___length].l = 0l; /* _length on <self:Array[nullable Object] exact> */
self->attrs[COLOR_standard__array__Array___capacity].l = 0l; /* _capacity on <self:Array[nullable Object] exact> */
return self;
}
/* runtime class standard__array__ArrayIterator */
const struct class class_standard__array__ArrayIterator = {
0, /* box_kind */
{
(nitmethod_t)standard__array___standard__array__ArrayIterator___standard__kernel__Object__init, /* pointer to array:ArrayIterator:array#ArrayIterator#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to array:ArrayIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to array:ArrayIterator:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to array:ArrayIterator:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to array:ArrayIterator:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to array:ArrayIterator:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to array:ArrayIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to array:ArrayIterator:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to array:ArrayIterator:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to array:ArrayIterator:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to array:ArrayIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to array:ArrayIterator:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to array:ArrayIterator:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to array:ArrayIterator:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to array:ArrayIterator:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to array:ArrayIterator:light_c#Object#from_c_call_context */
(nitmethod_t)standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok, /* pointer to array:ArrayIterator:array#ArrayIterator#is_ok */
(nitmethod_t)standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item, /* pointer to array:ArrayIterator:array#ArrayIterator#item */
(nitmethod_t)standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next, /* pointer to array:ArrayIterator:array#ArrayIterator#next */
(nitmethod_t)standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish, /* pointer to array:ArrayIterator:array#ArrayIterator#finish */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to array:ArrayIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to array:ArrayIterator:array#Iterator#to_a */
(nitmethod_t)standard__array___standard__array__ArrayIterator___standard__abstract_collection__IndexedIterator__index, /* pointer to array:ArrayIterator:array#ArrayIterator#index */
(nitmethod_t)standard__array___standard__array__ArrayIterator___array_61d, /* pointer to array:ArrayIterator:array#ArrayIterator#array= */
(nitmethod_t)standard___standard__Object___init, /* pointer to array:ArrayIterator:kernel#Object#init */
}
};
/* allocate ArrayIterator[nullable Object] */
val* NEW_standard__array__ArrayIterator(const struct type* type) {
val* self /* : ArrayIterator[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__array__ArrayIterator;
self->attrs[COLOR_standard__array__ArrayIterator___index].l = 0l; /* _index on <self:ArrayIterator[nullable Object] exact> */
return self;
}
/* runtime class standard__array__ArrayReverseIterator */
/* allocate ArrayReverseIterator[nullable Object] */
val* NEW_standard__array__ArrayReverseIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ArrayReverseIterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__ArraySet */
const struct class class_standard__ArraySet = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__ArraySet___standard__kernel__Object__init, /* pointer to array:ArraySet:array#ArraySet#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to array:ArraySet:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to array:ArraySet:kernel#Object#sys */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to array:ArraySet:string#Collection#to_s */
(nitmethod_t)standard___standard__Set___standard__kernel__Object___61d_61d, /* pointer to array:ArraySet:abstract_collection#Set#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to array:ArraySet:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to array:ArraySet:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to array:ArraySet:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to array:ArraySet:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to array:ArraySet:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to array:ArraySet:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to array:ArraySet:string#Object#native_class_name */
(nitmethod_t)standard___standard__Set___standard__kernel__Object__hash, /* pointer to array:ArraySet:abstract_collection#Set#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to array:ArraySet:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to array:ArraySet:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to array:ArraySet:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__ArraySet___remove_at, /* pointer to array:ArraySet:array#ArraySet#remove_at */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__string___Collection___join, /* pointer to array:ArraySet:string#Collection#join */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to array:ArraySet:array#Collection#to_a */
(nitmethod_t)standard___standard__ArraySet___standard__abstract_collection__Collection__length, /* pointer to array:ArraySet:array#ArraySet#length */
(nitmethod_t)standard___standard__ArraySet___standard__abstract_collection__Collection__is_empty, /* pointer to array:ArraySet:array#ArraySet#is_empty */
(nitmethod_t)standard___standard__ArraySet___standard__abstract_collection__Collection__iterator, /* pointer to array:ArraySet:array#ArraySet#iterator */
(nitmethod_t)standard__string___Collection___plain_to_s, /* pointer to array:ArraySet:string#Collection#plain_to_s */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to array:ArraySet:abstract_collection#Collection#has_all */
(nitmethod_t)standard___standard__ArraySet___standard__abstract_collection__Collection__has, /* pointer to array:ArraySet:array#ArraySet#has */
(nitmethod_t)standard___standard__ArraySet___standard__abstract_collection__Collection__first, /* pointer to array:ArraySet:array#ArraySet#first */
(nitmethod_t)standard___standard__Collection___not_empty, /* pointer to array:ArraySet:abstract_collection#Collection#not_empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard___standard__ArraySet___standard__abstract_collection__RemovableCollection__remove, /* pointer to array:ArraySet:array#ArraySet#remove */
(nitmethod_t)standard___standard__ArraySet___standard__abstract_collection__RemovableCollection__clear, /* pointer to array:ArraySet:array#ArraySet#clear */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard___standard__SimpleCollection___add_all, /* pointer to array:ArraySet:abstract_collection#SimpleCollection#add_all */
(nitmethod_t)standard___standard__ArraySet___standard__abstract_collection__SimpleCollection__add, /* pointer to array:ArraySet:array#ArraySet#add */
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
(nitmethod_t)standard__array___standard__array__ArraySetIterator___standard__kernel__Object__init, /* pointer to array:ArraySetIterator:array#ArraySetIterator#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to array:ArraySetIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to array:ArraySetIterator:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to array:ArraySetIterator:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to array:ArraySetIterator:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to array:ArraySetIterator:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to array:ArraySetIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to array:ArraySetIterator:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to array:ArraySetIterator:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to array:ArraySetIterator:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to array:ArraySetIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to array:ArraySetIterator:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to array:ArraySetIterator:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to array:ArraySetIterator:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to array:ArraySetIterator:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to array:ArraySetIterator:light_c#Object#from_c_call_context */
(nitmethod_t)standard__array___standard__array__ArraySetIterator___standard__abstract_collection__Iterator__is_ok, /* pointer to array:ArraySetIterator:array#ArraySetIterator#is_ok */
(nitmethod_t)standard__array___standard__array__ArraySetIterator___standard__abstract_collection__Iterator__item, /* pointer to array:ArraySetIterator:array#ArraySetIterator#item */
(nitmethod_t)standard__array___standard__array__ArraySetIterator___standard__abstract_collection__Iterator__next, /* pointer to array:ArraySetIterator:array#ArraySetIterator#next */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to array:ArraySetIterator:abstract_collection#Iterator#finish */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to array:ArraySetIterator:abstract_collection#Iterator#iterator */
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
(nitmethod_t)standard___standard__Object___init, /* pointer to array:ArrayMap:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to array:ArrayMap:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to array:ArrayMap:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to array:ArrayMap:string#Object#to_s */
(nitmethod_t)standard___standard__MapRead___standard__kernel__Object___61d_61d, /* pointer to array:ArrayMap:abstract_collection#MapRead#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to array:ArrayMap:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to array:ArrayMap:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to array:ArrayMap:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to array:ArrayMap:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to array:ArrayMap:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to array:ArrayMap:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to array:ArrayMap:string#Object#native_class_name */
(nitmethod_t)standard___standard__MapRead___standard__kernel__Object__hash, /* pointer to array:ArrayMap:abstract_collection#MapRead#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to array:ArrayMap:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to array:ArrayMap:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to array:ArrayMap:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__ArrayMap___standard__abstract_collection__MapRead__length, /* pointer to array:ArrayMap:array#ArrayMap#length */
(nitmethod_t)standard___standard__CoupleMap___MapRead__iterator, /* pointer to array:ArrayMap:abstract_collection#CoupleMap#iterator */
(nitmethod_t)standard___standard__CoupleMap___MapRead__has_key, /* pointer to array:ArrayMap:abstract_collection#CoupleMap#has_key */
(nitmethod_t)standard___standard__ArrayMap___standard__abstract_collection__MapRead___91d_93d, /* pointer to array:ArrayMap:array#ArrayMap#[] */
(nitmethod_t)standard___standard__ArrayMap___standard__abstract_collection__MapRead__is_empty, /* pointer to array:ArrayMap:array#ArrayMap#is_empty */
(nitmethod_t)standard___standard__ArrayMap___standard__abstract_collection__MapRead__keys, /* pointer to array:ArrayMap:array#ArrayMap#keys */
(nitmethod_t)standard___standard__MapRead___provide_default_value, /* pointer to array:ArrayMap:abstract_collection#MapRead#provide_default_value */
(nitmethod_t)standard___standard__MapRead___get_or_null, /* pointer to array:ArrayMap:abstract_collection#MapRead#get_or_null */
(nitmethod_t)standard___standard__ArrayMap___standard__abstract_collection__MapRead__values, /* pointer to array:ArrayMap:array#ArrayMap#values */
(nitmethod_t)standard___standard__ArrayMap___standard__abstract_collection__Map___91d_93d_61d, /* pointer to array:ArrayMap:array#ArrayMap#[]= */
(nitmethod_t)standard___standard__ArrayMap___standard__abstract_collection__Map__clear, /* pointer to array:ArrayMap:array#ArrayMap#clear */
(nitmethod_t)standard___standard__ArrayMap___standard__abstract_collection__CoupleMap__couple_iterator, /* pointer to array:ArrayMap:array#ArrayMap#couple_iterator */
(nitmethod_t)standard___standard__ArrayMap___standard__abstract_collection__CoupleMap__couple_at, /* pointer to array:ArrayMap:array#ArrayMap#couple_at */
(nitmethod_t)standard___standard__ArrayMap___index, /* pointer to array:ArrayMap:array#ArrayMap#index */
(nitmethod_t)standard___standard__ArrayMap___remove_at_index, /* pointer to array:ArrayMap:array#ArrayMap#remove_at_index */
}
};
/* allocate ArrayMap[nullable Object, nullable Object] */
val* NEW_standard__ArrayMap(const struct type* type) {
val* self /* : ArrayMap[nullable Object, nullable Object] */;
val* var /* : Array[Couple[nullable Object, nullable Object]] */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__ArrayMap;
var = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__standard__Couple__standard__ArrayMap___35dK__standard__ArrayMap___35dE]);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[Couple[nullable Object, nullable Object]]>*/
}
self->attrs[COLOR_standard__array__ArrayMap___items].val = var; /* _items on <self:ArrayMap[nullable Object, nullable Object] exact> */
self->attrs[COLOR_standard__array__ArrayMap___last_index].l = 0l; /* _last_index on <self:ArrayMap[nullable Object, nullable Object] exact> */
return self;
}
/* runtime class standard__array__ArrayMapKeys */
const struct class class_standard__array__ArrayMapKeys = {
0, /* box_kind */
{
(nitmethod_t)standard__array___standard__array__ArrayMapKeys___standard__kernel__Object__init, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to array:ArrayMapKeys:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to array:ArrayMapKeys:kernel#Object#sys */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to array:ArrayMapKeys:string#Collection#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to array:ArrayMapKeys:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to array:ArrayMapKeys:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to array:ArrayMapKeys:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to array:ArrayMapKeys:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to array:ArrayMapKeys:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to array:ArrayMapKeys:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to array:ArrayMapKeys:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to array:ArrayMapKeys:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to array:ArrayMapKeys:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to array:ArrayMapKeys:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to array:ArrayMapKeys:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to array:ArrayMapKeys:light_c#Object#from_c_call_context */
(nitmethod_t)standard__array___standard__array__ArrayMapKeys___map_61d, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#map= */
(nitmethod_t)standard__array___standard__array__ArrayMapKeys___map, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#map */
(nitmethod_t)standard___standard__Object___init, /* pointer to array:ArrayMapKeys:kernel#Object#init */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__string___Collection___join, /* pointer to array:ArrayMapKeys:string#Collection#join */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to array:ArrayMapKeys:array#Collection#to_a */
(nitmethod_t)standard__array___standard__array__ArrayMapKeys___standard__abstract_collection__Collection__length, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#length */
(nitmethod_t)standard__array___standard__array__ArrayMapKeys___standard__abstract_collection__Collection__is_empty, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#is_empty */
(nitmethod_t)standard__array___standard__array__ArrayMapKeys___standard__abstract_collection__Collection__iterator, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#iterator */
(nitmethod_t)standard__string___Collection___plain_to_s, /* pointer to array:ArrayMapKeys:string#Collection#plain_to_s */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to array:ArrayMapKeys:abstract_collection#Collection#has_all */
(nitmethod_t)standard__array___standard__array__ArrayMapKeys___standard__abstract_collection__Collection__has, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#has */
(nitmethod_t)standard__array___standard__array__ArrayMapKeys___standard__abstract_collection__Collection__first, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#first */
(nitmethod_t)standard___standard__Collection___not_empty, /* pointer to array:ArrayMapKeys:abstract_collection#Collection#not_empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__array___standard__array__ArrayMapKeys___standard__abstract_collection__RemovableCollection__remove, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#remove */
(nitmethod_t)standard__array___standard__array__ArrayMapKeys___standard__abstract_collection__RemovableCollection__clear, /* pointer to array:ArrayMapKeys:array#ArrayMapKeys#clear */
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
(nitmethod_t)standard__array___standard__array__ArrayMapValues___standard__kernel__Object__init, /* pointer to array:ArrayMapValues:array#ArrayMapValues#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to array:ArrayMapValues:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to array:ArrayMapValues:kernel#Object#sys */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to array:ArrayMapValues:string#Collection#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to array:ArrayMapValues:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to array:ArrayMapValues:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to array:ArrayMapValues:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to array:ArrayMapValues:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to array:ArrayMapValues:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to array:ArrayMapValues:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to array:ArrayMapValues:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to array:ArrayMapValues:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to array:ArrayMapValues:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to array:ArrayMapValues:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to array:ArrayMapValues:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to array:ArrayMapValues:light_c#Object#from_c_call_context */
(nitmethod_t)standard__array___standard__array__ArrayMapValues___map_61d, /* pointer to array:ArrayMapValues:array#ArrayMapValues#map= */
(nitmethod_t)standard__array___standard__array__ArrayMapValues___map, /* pointer to array:ArrayMapValues:array#ArrayMapValues#map */
(nitmethod_t)standard___standard__Object___init, /* pointer to array:ArrayMapValues:kernel#Object#init */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__string___Collection___join, /* pointer to array:ArrayMapValues:string#Collection#join */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to array:ArrayMapValues:array#Collection#to_a */
(nitmethod_t)standard__array___standard__array__ArrayMapValues___standard__abstract_collection__Collection__length, /* pointer to array:ArrayMapValues:array#ArrayMapValues#length */
(nitmethod_t)standard__array___standard__array__ArrayMapValues___standard__abstract_collection__Collection__is_empty, /* pointer to array:ArrayMapValues:array#ArrayMapValues#is_empty */
(nitmethod_t)standard__array___standard__array__ArrayMapValues___standard__abstract_collection__Collection__iterator, /* pointer to array:ArrayMapValues:array#ArrayMapValues#iterator */
(nitmethod_t)standard__string___Collection___plain_to_s, /* pointer to array:ArrayMapValues:string#Collection#plain_to_s */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to array:ArrayMapValues:abstract_collection#Collection#has_all */
(nitmethod_t)standard__array___standard__array__ArrayMapValues___standard__abstract_collection__Collection__has, /* pointer to array:ArrayMapValues:array#ArrayMapValues#has */
(nitmethod_t)standard__array___standard__array__ArrayMapValues___standard__abstract_collection__Collection__first, /* pointer to array:ArrayMapValues:array#ArrayMapValues#first */
(nitmethod_t)standard___standard__Collection___not_empty, /* pointer to array:ArrayMapValues:abstract_collection#Collection#not_empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__array___standard__array__ArrayMapValues___standard__abstract_collection__RemovableCollection__remove, /* pointer to array:ArrayMapValues:array#ArrayMapValues#remove */
(nitmethod_t)standard__array___standard__array__ArrayMapValues___standard__abstract_collection__RemovableCollection__clear, /* pointer to array:ArrayMapValues:array#ArrayMapValues#clear */
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
fatal_exit(1);
}
/* runtime class standard__NativeArray */
const struct class class_standard__NativeArray = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to array:NativeArray:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to array:NativeArray:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to array:NativeArray:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to array:NativeArray:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to array:NativeArray:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to array:NativeArray:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to array:NativeArray:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to array:NativeArray:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to array:NativeArray:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to array:NativeArray:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to array:NativeArray:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to array:NativeArray:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to array:NativeArray:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to array:NativeArray:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to array:NativeArray:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to array:NativeArray:light_c#Object#from_c_call_context */
(nitmethod_t)standard__string___NativeArray___native_to_s, /* pointer to array:NativeArray:string#NativeArray#native_to_s */
(nitmethod_t)standard___standard__NativeArray____91d_93d, /* pointer to array:NativeArray:array#NativeArray#[] */
(nitmethod_t)standard___standard__NativeArray___length, /* pointer to array:NativeArray:array#NativeArray#length */
(nitmethod_t)standard___standard__NativeArray___new, /* pointer to array:NativeArray:array#NativeArray#new */
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
fatal_exit(1);
}
/* runtime class standard__MapComparator */
/* allocate MapComparator[nullable Object, nullable Object] */
val* NEW_standard__MapComparator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MapComparator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__DefaultComparator */
const struct class class_standard__DefaultComparator = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to sorter:DefaultComparator:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to sorter:DefaultComparator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to sorter:DefaultComparator:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to sorter:DefaultComparator:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to sorter:DefaultComparator:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to sorter:DefaultComparator:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to sorter:DefaultComparator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to sorter:DefaultComparator:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to sorter:DefaultComparator:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to sorter:DefaultComparator:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to sorter:DefaultComparator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to sorter:DefaultComparator:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to sorter:DefaultComparator:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to sorter:DefaultComparator:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to sorter:DefaultComparator:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to sorter:DefaultComparator:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Comparator___sort, /* pointer to sorter:DefaultComparator:sorter#Comparator#sort */
(nitmethod_t)standard___standard__Comparator___sub_sort, /* pointer to sorter:DefaultComparator:sorter#Comparator#sub_sort */
(nitmethod_t)standard___standard__Comparator___quick_sort, /* pointer to sorter:DefaultComparator:sorter#Comparator#quick_sort */
(nitmethod_t)standard___standard__Comparator___bubble_sort, /* pointer to sorter:DefaultComparator:sorter#Comparator#bubble_sort */
(nitmethod_t)standard___standard__DefaultComparator___Comparator__compare, /* pointer to sorter:DefaultComparator:sorter#DefaultComparator#compare */
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
/* runtime class standard__DefaultReverseComparator */
/* allocate DefaultReverseComparator */
val* NEW_standard__DefaultReverseComparator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "DefaultReverseComparator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__hash_collection__HashCollection */
/* allocate HashCollection[nullable Object] */
val* NEW_standard__hash_collection__HashCollection(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "HashCollection is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__hash_collection__HashNode */
/* allocate HashNode[nullable Object] */
val* NEW_standard__hash_collection__HashNode(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "HashNode is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__HashMap */
const struct class class_standard__HashMap = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__HashMap___standard__kernel__Object__init, /* pointer to hash_collection:HashMap:hash_collection#HashMap#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to hash_collection:HashMap:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to hash_collection:HashMap:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to hash_collection:HashMap:string#Object#to_s */
(nitmethod_t)standard___standard__MapRead___standard__kernel__Object___61d_61d, /* pointer to hash_collection:HashMap:abstract_collection#MapRead#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to hash_collection:HashMap:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to hash_collection:HashMap:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to hash_collection:HashMap:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to hash_collection:HashMap:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to hash_collection:HashMap:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to hash_collection:HashMap:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to hash_collection:HashMap:string#Object#native_class_name */
(nitmethod_t)standard___standard__MapRead___standard__kernel__Object__hash, /* pointer to hash_collection:HashMap:abstract_collection#MapRead#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to hash_collection:HashMap:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to hash_collection:HashMap:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to hash_collection:HashMap:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__length, /* pointer to hash_collection:HashMap:hash_collection#HashMap#length */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__iterator, /* pointer to hash_collection:HashMap:hash_collection#HashMap#iterator */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__has_key, /* pointer to hash_collection:HashMap:hash_collection#HashMap#has_key */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d, /* pointer to hash_collection:HashMap:hash_collection#HashMap#[] */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__is_empty, /* pointer to hash_collection:HashMap:hash_collection#HashMap#is_empty */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__keys, /* pointer to hash_collection:HashMap:hash_collection#HashMap#keys */
(nitmethod_t)standard___standard__MapRead___provide_default_value, /* pointer to hash_collection:HashMap:abstract_collection#MapRead#provide_default_value */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null, /* pointer to hash_collection:HashMap:hash_collection#HashMap#get_or_null */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__values, /* pointer to hash_collection:HashMap:hash_collection#HashMap#values */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d, /* pointer to hash_collection:HashMap:hash_collection#HashMap#[]= */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__Map__clear, /* pointer to hash_collection:HashMap:hash_collection#HashMap#clear */
(nitmethod_t)standard___standard__Object___init, /* pointer to hash_collection:HashMap:kernel#Object#init */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___enlarge, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#enlarge */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___index_at, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#index_at */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___node_at, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#node_at */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___node_at_idx, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#node_at_idx */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___store, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#store */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___remove_node, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#remove_node */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___raz, /* pointer to hash_collection:HashMap:hash_collection#HashCollection#raz */
}
};
/* allocate HashMap[nullable Object, nullable Object] */
val* NEW_standard__HashMap(const struct type* type) {
val* self /* : HashMap[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__HashMap;
self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l = 0l; /* _capacity on <self:HashMap[nullable Object, nullable Object] exact> */
self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = 0l; /* _the_length on <self:HashMap[nullable Object, nullable Object] exact> */
return self;
}
/* runtime class standard__hash_collection__HashMapKeys */
const struct class class_standard__hash_collection__HashMapKeys = {
0, /* box_kind */
{
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapKeys___standard__kernel__Object__init, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to hash_collection:HashMapKeys:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to hash_collection:HashMapKeys:kernel#Object#sys */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to hash_collection:HashMapKeys:string#Collection#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to hash_collection:HashMapKeys:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to hash_collection:HashMapKeys:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to hash_collection:HashMapKeys:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to hash_collection:HashMapKeys:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to hash_collection:HashMapKeys:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to hash_collection:HashMapKeys:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to hash_collection:HashMapKeys:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to hash_collection:HashMapKeys:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to hash_collection:HashMapKeys:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to hash_collection:HashMapKeys:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to hash_collection:HashMapKeys:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to hash_collection:HashMapKeys:light_c#Object#from_c_call_context */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapKeys___map_61d, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#map= */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapKeys___map, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#map */
(nitmethod_t)standard___standard__Object___init, /* pointer to hash_collection:HashMapKeys:kernel#Object#init */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__string___Collection___join, /* pointer to hash_collection:HashMapKeys:string#Collection#join */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to hash_collection:HashMapKeys:array#Collection#to_a */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__length, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#length */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__is_empty, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#is_empty */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__iterator, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#iterator */
(nitmethod_t)standard__string___Collection___plain_to_s, /* pointer to hash_collection:HashMapKeys:string#Collection#plain_to_s */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to hash_collection:HashMapKeys:abstract_collection#Collection#has_all */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__has, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#has */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__Collection__first, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#first */
(nitmethod_t)standard___standard__Collection___not_empty, /* pointer to hash_collection:HashMapKeys:abstract_collection#Collection#not_empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__RemovableCollection__remove, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#remove */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapKeys___standard__abstract_collection__RemovableCollection__clear, /* pointer to hash_collection:HashMapKeys:hash_collection#HashMapKeys#clear */
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
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapValues___standard__kernel__Object__init, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to hash_collection:HashMapValues:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to hash_collection:HashMapValues:kernel#Object#sys */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to hash_collection:HashMapValues:string#Collection#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to hash_collection:HashMapValues:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to hash_collection:HashMapValues:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to hash_collection:HashMapValues:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to hash_collection:HashMapValues:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to hash_collection:HashMapValues:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to hash_collection:HashMapValues:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to hash_collection:HashMapValues:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to hash_collection:HashMapValues:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to hash_collection:HashMapValues:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to hash_collection:HashMapValues:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to hash_collection:HashMapValues:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to hash_collection:HashMapValues:light_c#Object#from_c_call_context */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapValues___map_61d, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#map= */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapValues___map, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#map */
(nitmethod_t)standard___standard__Object___init, /* pointer to hash_collection:HashMapValues:kernel#Object#init */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__string___Collection___join, /* pointer to hash_collection:HashMapValues:string#Collection#join */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to hash_collection:HashMapValues:array#Collection#to_a */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__length, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#length */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__is_empty, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#is_empty */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__iterator, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#iterator */
(nitmethod_t)standard__string___Collection___plain_to_s, /* pointer to hash_collection:HashMapValues:string#Collection#plain_to_s */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to hash_collection:HashMapValues:abstract_collection#Collection#has_all */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__has, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#has */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__Collection__first, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#first */
(nitmethod_t)standard___standard__Collection___not_empty, /* pointer to hash_collection:HashMapValues:abstract_collection#Collection#not_empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__RemovableCollection__remove, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#remove */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapValues___standard__abstract_collection__RemovableCollection__clear, /* pointer to hash_collection:HashMapValues:hash_collection#HashMapValues#clear */
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
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapNode___standard__kernel__Object__init, /* pointer to hash_collection:HashMapNode:hash_collection#HashMapNode#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to hash_collection:HashMapNode:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to hash_collection:HashMapNode:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to hash_collection:HashMapNode:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to hash_collection:HashMapNode:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to hash_collection:HashMapNode:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to hash_collection:HashMapNode:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to hash_collection:HashMapNode:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to hash_collection:HashMapNode:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to hash_collection:HashMapNode:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to hash_collection:HashMapNode:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to hash_collection:HashMapNode:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to hash_collection:HashMapNode:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to hash_collection:HashMapNode:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to hash_collection:HashMapNode:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to hash_collection:HashMapNode:light_c#Object#from_c_call_context */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashNode___key_61d, /* pointer to hash_collection:HashMapNode:hash_collection#HashNode#key= */
(nitmethod_t)standard___standard__Object___init, /* pointer to hash_collection:HashMapNode:kernel#Object#init */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashMapNode___value_61d, /* pointer to hash_collection:HashMapNode:hash_collection#HashMapNode#value= */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashNode___standard__kernel__Object__init, /* pointer to hash_collection:HashMapNode:hash_collection#HashNode#init */
}
};
/* allocate HashMapNode[nullable Object, nullable Object] */
val* NEW_standard__hash_collection__HashMapNode(const struct type* type) {
val* self /* : HashMapNode[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__hash_collection__HashMapNode;
return self;
}
/* runtime class standard__HashMapIterator */
const struct class class_standard__HashMapIterator = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__HashMapIterator___standard__kernel__Object__init, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to hash_collection:HashMapIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to hash_collection:HashMapIterator:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to hash_collection:HashMapIterator:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to hash_collection:HashMapIterator:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to hash_collection:HashMapIterator:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to hash_collection:HashMapIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to hash_collection:HashMapIterator:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to hash_collection:HashMapIterator:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to hash_collection:HashMapIterator:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to hash_collection:HashMapIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to hash_collection:HashMapIterator:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to hash_collection:HashMapIterator:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to hash_collection:HashMapIterator:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to hash_collection:HashMapIterator:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to hash_collection:HashMapIterator:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__is_ok, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#is_ok */
(nitmethod_t)standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__key, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#key */
(nitmethod_t)standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__item, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#item */
(nitmethod_t)standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__next, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#next */
(nitmethod_t)standard___standard__MapIterator___finish, /* pointer to hash_collection:HashMapIterator:abstract_collection#MapIterator#finish */
(nitmethod_t)standard___standard__HashMapIterator___map_61d, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#map= */
(nitmethod_t)standard___standard__HashMapIterator___map, /* pointer to hash_collection:HashMapIterator:hash_collection#HashMapIterator#map */
}
};
/* allocate HashMapIterator[nullable Object, nullable Object] */
val* NEW_standard__HashMapIterator(const struct type* type) {
val* self /* : HashMapIterator[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__HashMapIterator;
return self;
}
/* runtime class standard__HashSet */
const struct class class_standard__HashSet = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__HashSet___standard__kernel__Object__init, /* pointer to hash_collection:HashSet:hash_collection#HashSet#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to hash_collection:HashSet:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to hash_collection:HashSet:kernel#Object#sys */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to hash_collection:HashSet:string#Collection#to_s */
(nitmethod_t)standard___standard__Set___standard__kernel__Object___61d_61d, /* pointer to hash_collection:HashSet:abstract_collection#Set#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to hash_collection:HashSet:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to hash_collection:HashSet:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to hash_collection:HashSet:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to hash_collection:HashSet:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to hash_collection:HashSet:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to hash_collection:HashSet:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to hash_collection:HashSet:string#Object#native_class_name */
(nitmethod_t)standard___standard__Set___standard__kernel__Object__hash, /* pointer to hash_collection:HashSet:abstract_collection#Set#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to hash_collection:HashSet:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to hash_collection:HashSet:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to hash_collection:HashSet:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__HashSet___from, /* pointer to hash_collection:HashSet:hash_collection#HashSet#from */
(nitmethod_t)standard___standard__Object___init, /* pointer to hash_collection:HashSet:kernel#Object#init */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__string___Collection___join, /* pointer to hash_collection:HashSet:string#Collection#join */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to hash_collection:HashSet:array#Collection#to_a */
(nitmethod_t)standard___standard__HashSet___standard__abstract_collection__Collection__length, /* pointer to hash_collection:HashSet:hash_collection#HashSet#length */
(nitmethod_t)standard___standard__HashSet___standard__abstract_collection__Collection__is_empty, /* pointer to hash_collection:HashSet:hash_collection#HashSet#is_empty */
(nitmethod_t)standard___standard__HashSet___standard__abstract_collection__Collection__iterator, /* pointer to hash_collection:HashSet:hash_collection#HashSet#iterator */
(nitmethod_t)standard__string___Collection___plain_to_s, /* pointer to hash_collection:HashSet:string#Collection#plain_to_s */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to hash_collection:HashSet:abstract_collection#Collection#has_all */
(nitmethod_t)standard___standard__HashSet___standard__abstract_collection__Collection__has, /* pointer to hash_collection:HashSet:hash_collection#HashSet#has */
(nitmethod_t)standard___standard__HashSet___standard__abstract_collection__Collection__first, /* pointer to hash_collection:HashSet:hash_collection#HashSet#first */
(nitmethod_t)standard___standard__Collection___not_empty, /* pointer to hash_collection:HashSet:abstract_collection#Collection#not_empty */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___enlarge, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#enlarge */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___index_at, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#index_at */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___node_at, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#node_at */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___node_at_idx, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#node_at_idx */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___store, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#store */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___remove_node, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#remove_node */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___raz, /* pointer to hash_collection:HashSet:hash_collection#HashCollection#raz */
(nitmethod_t)standard___standard__HashSet___standard__abstract_collection__RemovableCollection__remove, /* pointer to hash_collection:HashSet:hash_collection#HashSet#remove */
(nitmethod_t)standard___standard__HashSet___standard__abstract_collection__RemovableCollection__clear, /* pointer to hash_collection:HashSet:hash_collection#HashSet#clear */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard___standard__SimpleCollection___add_all, /* pointer to hash_collection:HashSet:abstract_collection#SimpleCollection#add_all */
(nitmethod_t)standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add, /* pointer to hash_collection:HashSet:hash_collection#HashSet#add */
}
};
/* allocate HashSet[nullable Object] */
val* NEW_standard__HashSet(const struct type* type) {
val* self /* : HashSet[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__HashSet;
self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l = 0l; /* _capacity on <self:HashSet[nullable Object] exact> */
self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = 0l; /* _the_length on <self:HashSet[nullable Object] exact> */
return self;
}
/* runtime class standard__hash_collection__HashSetNode */
const struct class class_standard__hash_collection__HashSetNode = {
0, /* box_kind */
{
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashNode___standard__kernel__Object__init, /* pointer to hash_collection:HashSetNode:hash_collection#HashNode#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to hash_collection:HashSetNode:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to hash_collection:HashSetNode:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to hash_collection:HashSetNode:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to hash_collection:HashSetNode:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to hash_collection:HashSetNode:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to hash_collection:HashSetNode:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to hash_collection:HashSetNode:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to hash_collection:HashSetNode:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to hash_collection:HashSetNode:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to hash_collection:HashSetNode:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to hash_collection:HashSetNode:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to hash_collection:HashSetNode:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to hash_collection:HashSetNode:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to hash_collection:HashSetNode:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to hash_collection:HashSetNode:light_c#Object#from_c_call_context */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashNode___key_61d, /* pointer to hash_collection:HashSetNode:hash_collection#HashNode#key= */
(nitmethod_t)standard___standard__Object___init, /* pointer to hash_collection:HashSetNode:kernel#Object#init */
}
};
/* allocate HashSetNode[nullable Object] */
val* NEW_standard__hash_collection__HashSetNode(const struct type* type) {
val* self /* : HashSetNode[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__hash_collection__HashSetNode;
return self;
}
/* runtime class standard__hash_collection__HashSetIterator */
const struct class class_standard__hash_collection__HashSetIterator = {
0, /* box_kind */
{
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashSetIterator___standard__kernel__Object__init, /* pointer to hash_collection:HashSetIterator:hash_collection#HashSetIterator#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to hash_collection:HashSetIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to hash_collection:HashSetIterator:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to hash_collection:HashSetIterator:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to hash_collection:HashSetIterator:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to hash_collection:HashSetIterator:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to hash_collection:HashSetIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to hash_collection:HashSetIterator:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to hash_collection:HashSetIterator:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to hash_collection:HashSetIterator:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to hash_collection:HashSetIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to hash_collection:HashSetIterator:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to hash_collection:HashSetIterator:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to hash_collection:HashSetIterator:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to hash_collection:HashSetIterator:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to hash_collection:HashSetIterator:light_c#Object#from_c_call_context */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashSetIterator___standard__abstract_collection__Iterator__is_ok, /* pointer to hash_collection:HashSetIterator:hash_collection#HashSetIterator#is_ok */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashSetIterator___standard__abstract_collection__Iterator__item, /* pointer to hash_collection:HashSetIterator:hash_collection#HashSetIterator#item */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashSetIterator___standard__abstract_collection__Iterator__next, /* pointer to hash_collection:HashSetIterator:hash_collection#HashSetIterator#next */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to hash_collection:HashSetIterator:abstract_collection#Iterator#finish */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to hash_collection:HashSetIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to hash_collection:HashSetIterator:array#Iterator#to_a */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashSetIterator___set_61d, /* pointer to hash_collection:HashSetIterator:hash_collection#HashSetIterator#set= */
}
};
/* allocate HashSetIterator[nullable Object] */
val* NEW_standard__hash_collection__HashSetIterator(const struct type* type) {
val* self /* : HashSetIterator[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__hash_collection__HashSetIterator;
return self;
}
/* runtime class standard__DisjointSet */
/* allocate DisjointSet[nullable Object] */
val* NEW_standard__DisjointSet(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "DisjointSet is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__union_find__DisjointSetNode */
/* allocate DisjointSetNode */
val* NEW_standard__union_find__DisjointSetNode(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "DisjointSetNode is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__FileStream */
/* allocate FileStream */
val* NEW_standard__FileStream(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "FileStream is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__FileReader */
const struct class class_standard__FileReader = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to file:FileReader:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to file:FileReader:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to file:FileReader:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to file:FileReader:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to file:FileReader:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to file:FileReader:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to file:FileReader:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to file:FileReader:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to file:FileReader:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to file:FileReader:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to file:FileReader:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to file:FileReader:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to file:FileReader:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to file:FileReader:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to file:FileReader:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to file:FileReader:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Stream___last_error_61d, /* pointer to file:FileReader:stream#Stream#last_error= */
(nitmethod_t)standard___standard__Stream___last_error, /* pointer to file:FileReader:stream#Stream#last_error */
(nitmethod_t)standard___standard__FileReader___standard__stream__Stream__close, /* pointer to file:FileReader:file#FileReader#close */
(nitmethod_t)standard___standard__FileStream___path_61d, /* pointer to file:FileReader:file#FileStream#path= */
(nitmethod_t)standard___standard__FileStream___set_buffering_mode, /* pointer to file:FileReader:file#FileStream#set_buffering_mode */
(nitmethod_t)standard___standard__BufferedReader___prepare_buffer, /* pointer to file:FileReader:stream#BufferedReader#prepare_buffer */
(nitmethod_t)standard___standard__Reader___read_all, /* pointer to file:FileReader:stream#Reader#read_all */
(nitmethod_t)standard___standard__BufferedReader___Reader__eof, /* pointer to file:FileReader:stream#BufferedReader#eof */
(nitmethod_t)standard___standard__Reader___read_line, /* pointer to file:FileReader:stream#Reader#read_line */
(nitmethod_t)standard___standard__BufferedReader___Reader__read_all_bytes, /* pointer to file:FileReader:stream#BufferedReader#read_all_bytes */
(nitmethod_t)standard___standard__BufferedReader___Reader__append_line_to, /* pointer to file:FileReader:stream#BufferedReader#append_line_to */
(nitmethod_t)standard___standard__Reader___read, /* pointer to file:FileReader:stream#Reader#read */
(nitmethod_t)standard___standard__BufferedReader___Reader__read_bytes, /* pointer to file:FileReader:stream#BufferedReader#read_bytes */
(nitmethod_t)standard___standard__BufferedReader___buffer_reset, /* pointer to file:FileReader:stream#BufferedReader#buffer_reset */
(nitmethod_t)standard___standard__FileReader___standard__stream__BufferedReader__end_reached, /* pointer to file:FileReader:file#FileReader#end_reached */
(nitmethod_t)standard___standard__FileReader___standard__stream__BufferedReader__fill_buffer, /* pointer to file:FileReader:file#FileReader#fill_buffer */
(nitmethod_t)standard___standard__BufferedReader___read_intern, /* pointer to file:FileReader:stream#BufferedReader#read_intern */
(nitmethod_t)standard___standard__FileReader___open, /* pointer to file:FileReader:file#FileReader#open */
(nitmethod_t)standard___standard__FileReader___end_reached_61d, /* pointer to file:FileReader:file#FileReader#end_reached= */
(nitmethod_t)standard___standard__FileStream___standard__stream__Stream__close, /* pointer to file:FileReader:file#FileStream#close */
}
};
/* allocate FileReader */
val* NEW_standard__FileReader(const struct type* type) {
val* self /* : FileReader */;
char* var /* : NativeString */;
char* var1 /* : NativeString */;
char* var2 /* : NativeString */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__FileReader;
var = NULL/*special!*/;
{
{ /* Inline string#NativeString#new (var,0l) on <var:NativeString> */
var2 = (char*)nit_alloc(0l);
var1 = var2;
goto RET_LABEL;
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_standard__stream__BufferedReader___buffer].str = var1; /* _buffer on <self:FileReader exact> */
self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:FileReader exact> */
self->attrs[COLOR_standard__stream__BufferedReader___buffer_length].l = 0l; /* _buffer_length on <self:FileReader exact> */
self->attrs[COLOR_standard__stream__BufferedReader___buffer_capacity].l = 0l; /* _buffer_capacity on <self:FileReader exact> */
self->attrs[COLOR_standard__file__FileReader___end_reached].s = 0; /* _end_reached on <self:FileReader exact> */
return self;
}
/* runtime class standard__FileWriter */
const struct class class_standard__FileWriter = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to file:FileWriter:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to file:FileWriter:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to file:FileWriter:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to file:FileWriter:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to file:FileWriter:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to file:FileWriter:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to file:FileWriter:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to file:FileWriter:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to file:FileWriter:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to file:FileWriter:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to file:FileWriter:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to file:FileWriter:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to file:FileWriter:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to file:FileWriter:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to file:FileWriter:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to file:FileWriter:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Stream___last_error_61d, /* pointer to file:FileWriter:stream#Stream#last_error= */
(nitmethod_t)standard___standard__Stream___last_error, /* pointer to file:FileWriter:stream#Stream#last_error */
(nitmethod_t)standard___standard__FileWriter___standard__stream__Stream__close, /* pointer to file:FileWriter:file#FileWriter#close */
(nitmethod_t)standard___standard__FileStream___path_61d, /* pointer to file:FileWriter:file#FileStream#path= */
(nitmethod_t)standard___standard__FileStream___set_buffering_mode, /* pointer to file:FileWriter:file#FileStream#set_buffering_mode */
(nitmethod_t)standard___standard__FileWriter___standard__stream__Writer__write, /* pointer to file:FileWriter:file#FileWriter#write */
(nitmethod_t)standard___standard__FileWriter___write_native, /* pointer to file:FileWriter:file#FileWriter#write_native */
(nitmethod_t)standard___standard__FileWriter___open, /* pointer to file:FileWriter:file#FileWriter#open */
(nitmethod_t)standard___standard__FileWriter___is_writable_61d, /* pointer to file:FileWriter:file#FileWriter#is_writable= */
(nitmethod_t)standard___standard__FileStream___standard__stream__Stream__close, /* pointer to file:FileWriter:file#FileStream#close */
}
};
/* allocate FileWriter */
val* NEW_standard__FileWriter(const struct type* type) {
val* self /* : FileWriter */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__FileWriter;
self->attrs[COLOR_standard__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter exact> */
return self;
}
/* runtime class standard__Stdin */
const struct class class_standard__Stdin = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Stdin___standard__kernel__Object__init, /* pointer to file:Stdin:file#Stdin#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to file:Stdin:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to file:Stdin:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to file:Stdin:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to file:Stdin:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to file:Stdin:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to file:Stdin:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to file:Stdin:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to file:Stdin:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to file:Stdin:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to file:Stdin:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to file:Stdin:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to file:Stdin:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to file:Stdin:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to file:Stdin:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to file:Stdin:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Stream___last_error_61d, /* pointer to file:Stdin:stream#Stream#last_error= */
(nitmethod_t)standard___standard__Stream___last_error, /* pointer to file:Stdin:stream#Stream#last_error */
(nitmethod_t)standard___standard__FileReader___standard__stream__Stream__close, /* pointer to file:Stdin:file#FileReader#close */
(nitmethod_t)standard___standard__FileStream___path_61d, /* pointer to file:Stdin:file#FileStream#path= */
(nitmethod_t)standard___standard__FileStream___set_buffering_mode, /* pointer to file:Stdin:file#FileStream#set_buffering_mode */
(nitmethod_t)standard___standard__BufferedReader___prepare_buffer, /* pointer to file:Stdin:stream#BufferedReader#prepare_buffer */
(nitmethod_t)standard___standard__Reader___read_all, /* pointer to file:Stdin:stream#Reader#read_all */
(nitmethod_t)standard___standard__BufferedReader___Reader__eof, /* pointer to file:Stdin:stream#BufferedReader#eof */
(nitmethod_t)standard___standard__Reader___read_line, /* pointer to file:Stdin:stream#Reader#read_line */
(nitmethod_t)standard___standard__BufferedReader___Reader__read_all_bytes, /* pointer to file:Stdin:stream#BufferedReader#read_all_bytes */
(nitmethod_t)standard___standard__BufferedReader___Reader__append_line_to, /* pointer to file:Stdin:stream#BufferedReader#append_line_to */
(nitmethod_t)standard___standard__Reader___read, /* pointer to file:Stdin:stream#Reader#read */
(nitmethod_t)standard___standard__BufferedReader___Reader__read_bytes, /* pointer to file:Stdin:stream#BufferedReader#read_bytes */
(nitmethod_t)standard___standard__BufferedReader___buffer_reset, /* pointer to file:Stdin:stream#BufferedReader#buffer_reset */
(nitmethod_t)standard___standard__FileReader___standard__stream__BufferedReader__end_reached, /* pointer to file:Stdin:file#FileReader#end_reached */
(nitmethod_t)standard___standard__FileReader___standard__stream__BufferedReader__fill_buffer, /* pointer to file:Stdin:file#FileReader#fill_buffer */
(nitmethod_t)standard___standard__BufferedReader___read_intern, /* pointer to file:Stdin:stream#BufferedReader#read_intern */
(nitmethod_t)standard___standard__FileReader___open, /* pointer to file:Stdin:file#FileReader#open */
(nitmethod_t)standard___standard__FileReader___end_reached_61d, /* pointer to file:Stdin:file#FileReader#end_reached= */
(nitmethod_t)standard___standard__FileStream___standard__stream__Stream__close, /* pointer to file:Stdin:file#FileStream#close */
(nitmethod_t)standard___standard__Object___init, /* pointer to file:Stdin:kernel#Object#init */
}
};
/* allocate Stdin */
val* NEW_standard__Stdin(const struct type* type) {
val* self /* : Stdin */;
char* var /* : NativeString */;
char* var1 /* : NativeString */;
char* var2 /* : NativeString */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__Stdin;
var = NULL/*special!*/;
{
{ /* Inline string#NativeString#new (var,0l) on <var:NativeString> */
var2 = (char*)nit_alloc(0l);
var1 = var2;
goto RET_LABEL;
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_standard__stream__BufferedReader___buffer].str = var1; /* _buffer on <self:Stdin exact> */
self->attrs[COLOR_standard__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:Stdin exact> */
self->attrs[COLOR_standard__stream__BufferedReader___buffer_length].l = 0l; /* _buffer_length on <self:Stdin exact> */
self->attrs[COLOR_standard__stream__BufferedReader___buffer_capacity].l = 0l; /* _buffer_capacity on <self:Stdin exact> */
self->attrs[COLOR_standard__file__FileReader___end_reached].s = 0; /* _end_reached on <self:Stdin exact> */
return self;
}
/* runtime class standard__Stdout */
const struct class class_standard__Stdout = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Stdout___standard__kernel__Object__init, /* pointer to file:Stdout:file#Stdout#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to file:Stdout:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to file:Stdout:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to file:Stdout:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to file:Stdout:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to file:Stdout:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to file:Stdout:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to file:Stdout:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to file:Stdout:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to file:Stdout:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to file:Stdout:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to file:Stdout:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to file:Stdout:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to file:Stdout:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to file:Stdout:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to file:Stdout:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Stream___last_error_61d, /* pointer to file:Stdout:stream#Stream#last_error= */
(nitmethod_t)standard___standard__Stream___last_error, /* pointer to file:Stdout:stream#Stream#last_error */
(nitmethod_t)standard___standard__FileWriter___standard__stream__Stream__close, /* pointer to file:Stdout:file#FileWriter#close */
(nitmethod_t)standard___standard__FileStream___path_61d, /* pointer to file:Stdout:file#FileStream#path= */
(nitmethod_t)standard___standard__FileStream___set_buffering_mode, /* pointer to file:Stdout:file#FileStream#set_buffering_mode */
(nitmethod_t)standard___standard__FileWriter___standard__stream__Writer__write, /* pointer to file:Stdout:file#FileWriter#write */
(nitmethod_t)standard___standard__FileWriter___write_native, /* pointer to file:Stdout:file#FileWriter#write_native */
(nitmethod_t)standard___standard__FileWriter___open, /* pointer to file:Stdout:file#FileWriter#open */
(nitmethod_t)standard___standard__FileWriter___is_writable_61d, /* pointer to file:Stdout:file#FileWriter#is_writable= */
(nitmethod_t)standard___standard__FileStream___standard__stream__Stream__close, /* pointer to file:Stdout:file#FileStream#close */
(nitmethod_t)standard___standard__Object___init, /* pointer to file:Stdout:kernel#Object#init */
}
};
/* allocate Stdout */
val* NEW_standard__Stdout(const struct type* type) {
val* self /* : Stdout */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__Stdout;
self->attrs[COLOR_standard__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:Stdout exact> */
return self;
}
/* runtime class standard__Stderr */
const struct class class_standard__Stderr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Stderr___standard__kernel__Object__init, /* pointer to file:Stderr:file#Stderr#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to file:Stderr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to file:Stderr:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to file:Stderr:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to file:Stderr:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to file:Stderr:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to file:Stderr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to file:Stderr:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to file:Stderr:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to file:Stderr:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to file:Stderr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to file:Stderr:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to file:Stderr:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to file:Stderr:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to file:Stderr:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to file:Stderr:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Stream___last_error_61d, /* pointer to file:Stderr:stream#Stream#last_error= */
(nitmethod_t)standard___standard__Stream___last_error, /* pointer to file:Stderr:stream#Stream#last_error */
(nitmethod_t)standard___standard__FileWriter___standard__stream__Stream__close, /* pointer to file:Stderr:file#FileWriter#close */
(nitmethod_t)standard___standard__FileStream___path_61d, /* pointer to file:Stderr:file#FileStream#path= */
(nitmethod_t)standard___standard__FileStream___set_buffering_mode, /* pointer to file:Stderr:file#FileStream#set_buffering_mode */
(nitmethod_t)standard___standard__FileWriter___standard__stream__Writer__write, /* pointer to file:Stderr:file#FileWriter#write */
(nitmethod_t)standard___standard__FileWriter___write_native, /* pointer to file:Stderr:file#FileWriter#write_native */
(nitmethod_t)standard___standard__FileWriter___open, /* pointer to file:Stderr:file#FileWriter#open */
(nitmethod_t)standard___standard__FileWriter___is_writable_61d, /* pointer to file:Stderr:file#FileWriter#is_writable= */
(nitmethod_t)standard___standard__FileStream___standard__stream__Stream__close, /* pointer to file:Stderr:file#FileStream#close */
(nitmethod_t)standard___standard__Object___init, /* pointer to file:Stderr:kernel#Object#init */
}
};
/* allocate Stderr */
val* NEW_standard__Stderr(const struct type* type) {
val* self /* : Stderr */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__Stderr;
self->attrs[COLOR_standard__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:Stderr exact> */
return self;
}
/* runtime class standard__Path */
const struct class class_standard__Path = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Path___standard__kernel__Object__init, /* pointer to file:Path:file#Path#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to file:Path:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to file:Path:kernel#Object#sys */
(nitmethod_t)standard___standard__Path___standard__string__Object__to_s, /* pointer to file:Path:file#Path#to_s */
(nitmethod_t)standard___standard__Path___standard__kernel__Object___61d_61d, /* pointer to file:Path:file#Path#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to file:Path:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to file:Path:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to file:Path:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to file:Path:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to file:Path:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to file:Path:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to file:Path:string#Object#native_class_name */
(nitmethod_t)standard___standard__Path___standard__kernel__Object__hash, /* pointer to file:Path:file#Path#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to file:Path:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to file:Path:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to file:Path:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Path___open_wo, /* pointer to file:Path:file#Path#open_wo */
(nitmethod_t)standard___standard__Path___path, /* pointer to file:Path:file#Path#path */
(nitmethod_t)standard___standard__Path___path_61d, /* pointer to file:Path:file#Path#path= */
(nitmethod_t)standard___standard__Path___copy, /* pointer to file:Path:file#Path#copy */
(nitmethod_t)standard___standard__Path___open_ro, /* pointer to file:Path:file#Path#open_ro */
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
fatal_exit(1);
}
/* runtime class standard__file__NativeFileStat */
/* allocate NativeFileStat */
val* NEW_standard__file__NativeFileStat(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "NativeFileStat is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__file__NativeFile */
const struct class class_standard__file__NativeFile = {
7, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to file:NativeFile:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to file:NativeFile:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to file:NativeFile:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to file:NativeFile:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to file:NativeFile:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to file:NativeFile:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to file:NativeFile:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to file:NativeFile:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to file:NativeFile:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to file:NativeFile:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to file:NativeFile:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to file:NativeFile:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to file:NativeFile:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to file:NativeFile:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to file:NativeFile:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to file:NativeFile:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Pointer___address_is_null, /* pointer to file:NativeFile:kernel#Pointer#address_is_null */
(nitmethod_t)standard__file___standard__file__NativeFile___native_stdin, /* pointer to file:NativeFile:file#NativeFile#native_stdin */
(nitmethod_t)standard__file___standard__file__NativeFile___native_stdout, /* pointer to file:NativeFile:file#NativeFile#native_stdout */
(nitmethod_t)standard__file___standard__file__NativeFile___native_stderr, /* pointer to file:NativeFile:file#NativeFile#native_stderr */
(nitmethod_t)standard__file___standard__file__NativeFile___set_buffering_type, /* pointer to file:NativeFile:file#NativeFile#set_buffering_type */
(nitmethod_t)standard__file___standard__file__NativeFile___io_write, /* pointer to file:NativeFile:file#NativeFile#io_write */
(nitmethod_t)standard__file___standard__file__NativeFile___io_open_read, /* pointer to file:NativeFile:file#NativeFile#io_open_read */
(nitmethod_t)standard__file___standard__file__NativeFile___io_close, /* pointer to file:NativeFile:file#NativeFile#io_close */
(nitmethod_t)standard__file___standard__file__NativeFile___io_open_write, /* pointer to file:NativeFile:file#NativeFile#io_open_write */
(nitmethod_t)standard__file___standard__file__NativeFile___io_read, /* pointer to file:NativeFile:file#NativeFile#io_read */
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
/* runtime class standard__file__NativeDir */
/* allocate NativeDir */
val* NEW_standard__file__NativeDir(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "NativeDir is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__IOError */
const struct class class_standard__IOError = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Error___standard__kernel__Object__init, /* pointer to stream:IOError:error#Error#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to stream:IOError:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to stream:IOError:kernel#Object#sys */
(nitmethod_t)standard___standard__Error___standard__string__Object__to_s, /* pointer to stream:IOError:error#Error#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to stream:IOError:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to stream:IOError:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to stream:IOError:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to stream:IOError:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to stream:IOError:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to stream:IOError:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to stream:IOError:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to stream:IOError:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to stream:IOError:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to stream:IOError:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to stream:IOError:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to stream:IOError:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Error___message_61d, /* pointer to stream:IOError:error#Error#message= */
(nitmethod_t)standard___standard__Error___message, /* pointer to stream:IOError:error#Error#message */
(nitmethod_t)standard___standard__Object___init, /* pointer to stream:IOError:kernel#Object#init */
}
};
/* allocate IOError */
val* NEW_standard__IOError(const struct type* type) {
val* self /* : IOError */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__IOError;
return self;
}
/* runtime class standard__Stream */
/* allocate Stream */
val* NEW_standard__Stream(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Stream is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Reader */
/* allocate Reader */
val* NEW_standard__Reader(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Reader is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__LineIterator */
/* allocate LineIterator */
val* NEW_standard__LineIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "LineIterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__PollableReader */
/* allocate PollableReader */
val* NEW_standard__PollableReader(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "PollableReader is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Writer */
/* allocate Writer */
val* NEW_standard__Writer(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Writer is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Writable */
/* allocate Writable */
val* NEW_standard__Writable(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Writable is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__BufferedReader */
/* allocate BufferedReader */
val* NEW_standard__BufferedReader(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "BufferedReader is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Duplex */
/* allocate Duplex */
val* NEW_standard__Duplex(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Duplex is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__StringWriter */
/* allocate StringWriter */
val* NEW_standard__StringWriter(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "StringWriter is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__StringReader */
/* allocate StringReader */
val* NEW_standard__StringReader(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "StringReader is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__ropes__Rope */
/* allocate Rope */
val* NEW_standard__ropes__Rope(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Rope is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__ropes__RopeString */
/* allocate RopeString */
val* NEW_standard__ropes__RopeString(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "RopeString is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__ropes__Concat */
const struct class class_standard__ropes__Concat = {
0, /* box_kind */
{
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__kernel__Object__init, /* pointer to ropes:Concat:ropes#Concat#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to ropes:Concat:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to ropes:Concat:kernel#Object#sys */
(nitmethod_t)standard___standard__String___Object__to_s, /* pointer to ropes:Concat:string#String#to_s */
(nitmethod_t)standard___standard__Text___standard__kernel__Object___61d_61d, /* pointer to ropes:Concat:string#Text#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to ropes:Concat:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to ropes:Concat:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to ropes:Concat:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to ropes:Concat:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to ropes:Concat:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to ropes:Concat:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to ropes:Concat:string#Object#native_class_name */
(nitmethod_t)standard___standard__Text___standard__kernel__Object__hash, /* pointer to ropes:Concat:string#Text#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to ropes:Concat:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to ropes:Concat:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to ropes:Concat:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Comparable____62d_61d, /* pointer to ropes:Concat:kernel#Comparable#>= */
(nitmethod_t)standard___standard__Comparable____60d_61d, /* pointer to ropes:Concat:kernel#Comparable#<= */
(nitmethod_t)standard___standard__Comparable____62d, /* pointer to ropes:Concat:kernel#Comparable#> */
(nitmethod_t)standard___standard__Text___standard__kernel__Comparable___60d, /* pointer to ropes:Concat:string#Text#< */
(nitmethod_t)standard___standard__Comparable____60d_61d_62d, /* pointer to ropes:Concat:kernel#Comparable#<=> */
(nitmethod_t)standard___standard__Pattern___split_in, /* pointer to ropes:Concat:string_search#Pattern#split_in */
(nitmethod_t)standard__string_search___Text___Pattern__search_in, /* pointer to ropes:Concat:string_search#Text#search_in */
(nitmethod_t)standard__string_search___Text___Pattern__search_index_in, /* pointer to ropes:Concat:string_search#Text#search_index_in */
(nitmethod_t)standard___standard__Text___to_i, /* pointer to ropes:Concat:string#Text#to_i */
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__string__Text__to_cstring, /* pointer to ropes:Concat:ropes#Concat#to_cstring */
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__string__Text__length, /* pointer to ropes:Concat:ropes#Concat#length */
(nitmethod_t)standard__ropes___standard__ropes__RopeString___standard__string__Text__chars, /* pointer to ropes:Concat:ropes#RopeString#chars */
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__string__Text__substring, /* pointer to ropes:Concat:ropes#Concat#substring */
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__string__Text__substrings, /* pointer to ropes:Concat:ropes#Concat#substrings */
(nitmethod_t)standard___standard__Text___is_empty, /* pointer to ropes:Concat:string#Text#is_empty */
(nitmethod_t)standard__file___Writable___write_to_file, /* pointer to ropes:Concat:file#Writable#write_to_file */
(nitmethod_t)standard__stream___Text___Writable__write_to, /* pointer to ropes:Concat:stream#Text#write_to */
(nitmethod_t)standard__string_search___Text___split_with, /* pointer to ropes:Concat:string_search#Text#split_with */
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__string__Text__empty, /* pointer to ropes:Concat:ropes#Concat#empty */
(nitmethod_t)standard___standard__Text___is_lower, /* pointer to ropes:Concat:string#Text#is_lower */
(nitmethod_t)standard___standard__Text___has_suffix, /* pointer to ropes:Concat:string#Text#has_suffix */
(nitmethod_t)standard__string_search___Text___split, /* pointer to ropes:Concat:string_search#Text#split */
(nitmethod_t)standard___standard__Text___to_cmangle, /* pointer to ropes:Concat:string#Text#to_cmangle */
(nitmethod_t)standard__string_search___Text___split_once_on, /* pointer to ropes:Concat:string_search#Text#split_once_on */
(nitmethod_t)standard___standard__Text___is_numeric, /* pointer to ropes:Concat:string#Text#is_numeric */
(nitmethod_t)standard___standard__Text___has_substring, /* pointer to ropes:Concat:string#Text#has_substring */
(nitmethod_t)standard___standard__Text___last, /* pointer to ropes:Concat:string#Text#last */
(nitmethod_t)standard___standard__Text___substring_from, /* pointer to ropes:Concat:string#Text#substring_from */
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__string__Text___91d_93d, /* pointer to ropes:Concat:ropes#Concat#[] */
(nitmethod_t)standard___standard__Text___hash_cache, /* pointer to ropes:Concat:string#Text#hash_cache */
(nitmethod_t)standard___standard__Text___hash_cache_61d, /* pointer to ropes:Concat:string#Text#hash_cache= */
(nitmethod_t)standard___standard__Text___escape_to_c, /* pointer to ropes:Concat:string#Text#escape_to_c */
(nitmethod_t)standard__file___Text___to_path, /* pointer to ropes:Concat:file#Text#to_path */
(nitmethod_t)standard___standard__Text___chomp, /* pointer to ropes:Concat:string#Text#chomp */
(nitmethod_t)standard___standard__Text___has_prefix, /* pointer to ropes:Concat:string#Text#has_prefix */
(nitmethod_t)standard___standard__Text___escape_to_sh, /* pointer to ropes:Concat:string#Text#escape_to_sh */
(nitmethod_t)nit__literal___standard__Text___remove_underscores, /* pointer to ropes:Concat:literal#Text#remove_underscores */
(nitmethod_t)standard___standard__Text___to_hex, /* pointer to ropes:Concat:string#Text#to_hex */
(nitmethod_t)standard___standard__Text___to_bin, /* pointer to ropes:Concat:string#Text#to_bin */
(nitmethod_t)standard___standard__Text___to_oct, /* pointer to ropes:Concat:string#Text#to_oct */
(nitmethod_t)standard___standard__Text___to_f, /* pointer to ropes:Concat:string#Text#to_f */
(nitmethod_t)standard___standard__Text___unescape_nit, /* pointer to ropes:Concat:string#Text#unescape_nit */
(nitmethod_t)standard___standard__Text___escape_to_mk, /* pointer to ropes:Concat:string#Text#escape_to_mk */
(nitmethod_t)standard__string_search___Text___replace, /* pointer to ropes:Concat:string_search#Text#replace */
(nitmethod_t)standard___standard__Text___a_to, /* pointer to ropes:Concat:string#Text#a_to */
(nitmethod_t)standard__ropes___standard__ropes__Concat___left_61d, /* pointer to ropes:Concat:ropes#Concat#left= */
(nitmethod_t)standard__ropes___standard__ropes__Concat___right_61d, /* pointer to ropes:Concat:ropes#Concat#right= */
(nitmethod_t)standard__ropes___standard__ropes__Concat___left, /* pointer to ropes:Concat:ropes#Concat#left */
(nitmethod_t)standard__ropes___standard__ropes__Concat___right, /* pointer to ropes:Concat:ropes#Concat#right */
(nitmethod_t)standard__ropes___standard__ropes__Concat___length_61d, /* pointer to ropes:Concat:ropes#Concat#length= */
(nitmethod_t)standard__environ___String___environ, /* pointer to ropes:Concat:environ#String#environ */
(nitmethod_t)standard___standard__String___to_snake_case, /* pointer to ropes:Concat:string#String#to_snake_case */
(nitmethod_t)standard__file___String___strip_extension, /* pointer to ropes:Concat:file#String#strip_extension */
(nitmethod_t)standard__file___String____47d, /* pointer to ropes:Concat:file#String#/ */
(nitmethod_t)standard__file___String___file_exists, /* pointer to ropes:Concat:file#String#file_exists */
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__string__String___43d, /* pointer to ropes:Concat:ropes#Concat#+ */
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__string__String___42d, /* pointer to ropes:Concat:ropes#Concat#* */
(nitmethod_t)standard__file___String___join_path, /* pointer to ropes:Concat:file#String#join_path */
(nitmethod_t)standard__file___String___file_extension, /* pointer to ropes:Concat:file#String#file_extension */
(nitmethod_t)standard__file___String___dirname, /* pointer to ropes:Concat:file#String#dirname */
(nitmethod_t)standard__file___String___basename, /* pointer to ropes:Concat:file#String#basename */
(nitmethod_t)standard__file___String___simplify_path, /* pointer to ropes:Concat:file#String#simplify_path */
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__string__String__to_upper, /* pointer to ropes:Concat:ropes#Concat#to_upper */
(nitmethod_t)standard__file___String___mkdir, /* pointer to ropes:Concat:file#String#mkdir */
(nitmethod_t)standard__file___String___realpath, /* pointer to ropes:Concat:file#String#realpath */
(nitmethod_t)standard__ropes___standard__ropes__Concat___standard__string__String__to_lower, /* pointer to ropes:Concat:ropes#Concat#to_lower */
(nitmethod_t)standard__file___String___file_copy_to, /* pointer to ropes:Concat:file#String#file_copy_to */
(nitmethod_t)standard__file___String___relpath, /* pointer to ropes:Concat:file#String#relpath */
(nitmethod_t)standard___standard__Object___init, /* pointer to ropes:Concat:kernel#Object#init */
}
};
/* allocate Concat */
val* NEW_standard__ropes__Concat(const struct type* type) {
val* self /* : Concat */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__ropes__Concat;
return self;
}
/* runtime class standard__RopeBuffer */
const struct class class_standard__RopeBuffer = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__RopeBuffer___standard__kernel__Object__init, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to ropes:RopeBuffer:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to ropes:RopeBuffer:kernel#Object#sys */
(nitmethod_t)standard___standard__RopeBuffer___standard__string__Object__to_s, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#to_s */
(nitmethod_t)standard___standard__Text___standard__kernel__Object___61d_61d, /* pointer to ropes:RopeBuffer:string#Text#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to ropes:RopeBuffer:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to ropes:RopeBuffer:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to ropes:RopeBuffer:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to ropes:RopeBuffer:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to ropes:RopeBuffer:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to ropes:RopeBuffer:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to ropes:RopeBuffer:string#Object#native_class_name */
(nitmethod_t)standard___standard__Buffer___standard__kernel__Object__hash, /* pointer to ropes:RopeBuffer:string#Buffer#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to ropes:RopeBuffer:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to ropes:RopeBuffer:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to ropes:RopeBuffer:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Comparable____62d_61d, /* pointer to ropes:RopeBuffer:kernel#Comparable#>= */
(nitmethod_t)standard___standard__Comparable____60d_61d, /* pointer to ropes:RopeBuffer:kernel#Comparable#<= */
(nitmethod_t)standard___standard__Comparable____62d, /* pointer to ropes:RopeBuffer:kernel#Comparable#> */
(nitmethod_t)standard___standard__Text___standard__kernel__Comparable___60d, /* pointer to ropes:RopeBuffer:string#Text#< */
(nitmethod_t)standard___standard__Comparable____60d_61d_62d, /* pointer to ropes:RopeBuffer:kernel#Comparable#<=> */
(nitmethod_t)standard___standard__Pattern___split_in, /* pointer to ropes:RopeBuffer:string_search#Pattern#split_in */
(nitmethod_t)standard__string_search___Text___Pattern__search_in, /* pointer to ropes:RopeBuffer:string_search#Text#search_in */
(nitmethod_t)standard__string_search___Text___Pattern__search_index_in, /* pointer to ropes:RopeBuffer:string_search#Text#search_index_in */
(nitmethod_t)standard___standard__Text___to_i, /* pointer to ropes:RopeBuffer:string#Text#to_i */
(nitmethod_t)standard___standard__Text___to_cstring, /* pointer to ropes:RopeBuffer:string#Text#to_cstring */
(nitmethod_t)standard___standard__RopeBuffer___standard__string__Text__length, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#length */
(nitmethod_t)standard___standard__RopeBuffer___standard__string__Text__chars, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#chars */
(nitmethod_t)standard___standard__RopeBuffer___standard__string__Text__substring, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#substring */
(nitmethod_t)standard___standard__RopeBuffer___standard__string__Text__substrings, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#substrings */
(nitmethod_t)standard___standard__Text___is_empty, /* pointer to ropes:RopeBuffer:string#Text#is_empty */
(nitmethod_t)standard__file___Writable___write_to_file, /* pointer to ropes:RopeBuffer:file#Writable#write_to_file */
(nitmethod_t)standard__stream___Text___Writable__write_to, /* pointer to ropes:RopeBuffer:stream#Text#write_to */
(nitmethod_t)standard__string_search___Text___split_with, /* pointer to ropes:RopeBuffer:string_search#Text#split_with */
(nitmethod_t)standard___standard__RopeBuffer___standard__string__Text__empty, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#empty */
(nitmethod_t)standard___standard__Text___is_lower, /* pointer to ropes:RopeBuffer:string#Text#is_lower */
(nitmethod_t)standard___standard__Text___has_suffix, /* pointer to ropes:RopeBuffer:string#Text#has_suffix */
(nitmethod_t)standard__string_search___Text___split, /* pointer to ropes:RopeBuffer:string_search#Text#split */
(nitmethod_t)standard___standard__Text___to_cmangle, /* pointer to ropes:RopeBuffer:string#Text#to_cmangle */
(nitmethod_t)standard__string_search___Text___split_once_on, /* pointer to ropes:RopeBuffer:string_search#Text#split_once_on */
(nitmethod_t)standard___standard__Text___is_numeric, /* pointer to ropes:RopeBuffer:string#Text#is_numeric */
(nitmethod_t)standard___standard__Text___has_substring, /* pointer to ropes:RopeBuffer:string#Text#has_substring */
(nitmethod_t)standard___standard__Text___last, /* pointer to ropes:RopeBuffer:string#Text#last */
(nitmethod_t)standard___standard__Text___substring_from, /* pointer to ropes:RopeBuffer:string#Text#substring_from */
(nitmethod_t)standard___standard__Text____91d_93d, /* pointer to ropes:RopeBuffer:string#Text#[] */
(nitmethod_t)standard___standard__Text___hash_cache, /* pointer to ropes:RopeBuffer:string#Text#hash_cache */
(nitmethod_t)standard___standard__Text___hash_cache_61d, /* pointer to ropes:RopeBuffer:string#Text#hash_cache= */
(nitmethod_t)standard___standard__Text___escape_to_c, /* pointer to ropes:RopeBuffer:string#Text#escape_to_c */
(nitmethod_t)standard__file___Text___to_path, /* pointer to ropes:RopeBuffer:file#Text#to_path */
(nitmethod_t)standard___standard__Text___chomp, /* pointer to ropes:RopeBuffer:string#Text#chomp */
(nitmethod_t)standard___standard__Text___has_prefix, /* pointer to ropes:RopeBuffer:string#Text#has_prefix */
(nitmethod_t)standard___standard__Text___escape_to_sh, /* pointer to ropes:RopeBuffer:string#Text#escape_to_sh */
(nitmethod_t)nit__literal___standard__Text___remove_underscores, /* pointer to ropes:RopeBuffer:literal#Text#remove_underscores */
(nitmethod_t)standard___standard__Text___to_hex, /* pointer to ropes:RopeBuffer:string#Text#to_hex */
(nitmethod_t)standard___standard__Text___to_bin, /* pointer to ropes:RopeBuffer:string#Text#to_bin */
(nitmethod_t)standard___standard__Text___to_oct, /* pointer to ropes:RopeBuffer:string#Text#to_oct */
(nitmethod_t)standard___standard__Text___to_f, /* pointer to ropes:RopeBuffer:string#Text#to_f */
(nitmethod_t)standard___standard__Text___unescape_nit, /* pointer to ropes:RopeBuffer:string#Text#unescape_nit */
(nitmethod_t)standard___standard__Text___escape_to_mk, /* pointer to ropes:RopeBuffer:string#Text#escape_to_mk */
(nitmethod_t)standard__string_search___Text___replace, /* pointer to ropes:RopeBuffer:string_search#Text#replace */
(nitmethod_t)standard___standard__Text___a_to, /* pointer to ropes:RopeBuffer:string#Text#a_to */
(nitmethod_t)standard___standard__RopeBuffer___str_61d, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#str= */
(nitmethod_t)standard___standard__RopeBuffer___ns_61d, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#ns= */
(nitmethod_t)standard___standard__RopeBuffer___buf_size_61d, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#buf_size= */
(nitmethod_t)standard___standard__RopeBuffer___dumped_61d, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#dumped= */
(nitmethod_t)standard___standard__RopeBuffer___rpos, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#rpos */
(nitmethod_t)standard___standard__Buffer___with_cap, /* pointer to ropes:RopeBuffer:string#Buffer#with_cap */
(nitmethod_t)standard___standard__Buffer___new, /* pointer to ropes:RopeBuffer:string#Buffer#new */
(nitmethod_t)standard___standard__RopeBuffer___standard__string__Buffer__append, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#append */
(nitmethod_t)standard___standard__RopeBuffer___standard__string__Buffer__add, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#add */
(nitmethod_t)standard___standard__Buffer___is_dirty, /* pointer to ropes:RopeBuffer:string#Buffer#is_dirty */
(nitmethod_t)standard___standard__Buffer___is_dirty_61d, /* pointer to ropes:RopeBuffer:string#Buffer#is_dirty= */
(nitmethod_t)standard___standard__Buffer___written_61d, /* pointer to ropes:RopeBuffer:string#Buffer#written= */
(nitmethod_t)standard___standard__RopeBuffer___standard__string__Buffer__enlarge, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#enlarge */
(nitmethod_t)standard___standard__Text___standard__kernel__Object__hash, /* pointer to ropes:RopeBuffer:string#Text#hash */
(nitmethod_t)standard___standard__RopeBuffer___dumped, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#dumped */
(nitmethod_t)standard___standard__RopeBuffer___str, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#str */
(nitmethod_t)standard___standard__RopeBuffer___ns, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#ns */
(nitmethod_t)standard___standard__RopeBuffer___from, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#from */
(nitmethod_t)standard___standard__RopeBuffer___length_61d, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#length= */
(nitmethod_t)standard___standard__RopeBuffer___buf_size, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#buf_size */
(nitmethod_t)standard___standard__RopeBuffer___rpos_61d, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#rpos= */
(nitmethod_t)standard___standard__RopeBuffer___dump_buffer, /* pointer to ropes:RopeBuffer:ropes#RopeBuffer#dump_buffer */
(nitmethod_t)standard___standard__Object___init, /* pointer to ropes:RopeBuffer:kernel#Object#init */
}
};
/* allocate RopeBuffer */
val* NEW_standard__RopeBuffer(const struct type* type) {
val* self /* : RopeBuffer */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__RopeBuffer;
self->attrs[COLOR_standard__string__Buffer___is_dirty].s = 1; /* _is_dirty on <self:RopeBuffer exact> */
self->attrs[COLOR_standard__string__Buffer___written].s = 0; /* _written on <self:RopeBuffer exact> */
self->attrs[COLOR_standard__ropes__RopeBuffer___rpos].l = 0l; /* _rpos on <self:RopeBuffer exact> */
self->attrs[COLOR_standard__ropes__RopeBuffer___length].l = 0l; /* _length on <self:RopeBuffer exact> */
return self;
}
/* runtime class standard__ropes__RopeIterPiece */
const struct class class_standard__ropes__RopeIterPiece = {
0, /* box_kind */
{
(nitmethod_t)standard__ropes___standard__ropes__RopeIterPiece___standard__kernel__Object__init, /* pointer to ropes:RopeIterPiece:ropes#RopeIterPiece#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to ropes:RopeIterPiece:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to ropes:RopeIterPiece:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to ropes:RopeIterPiece:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to ropes:RopeIterPiece:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to ropes:RopeIterPiece:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to ropes:RopeIterPiece:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to ropes:RopeIterPiece:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to ropes:RopeIterPiece:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to ropes:RopeIterPiece:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to ropes:RopeIterPiece:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to ropes:RopeIterPiece:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to ropes:RopeIterPiece:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to ropes:RopeIterPiece:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to ropes:RopeIterPiece:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to ropes:RopeIterPiece:light_c#Object#from_c_call_context */
(nitmethod_t)standard__ropes___standard__ropes__RopeIterPiece___prev, /* pointer to ropes:RopeIterPiece:ropes#RopeIterPiece#prev */
(nitmethod_t)standard__ropes___standard__ropes__RopeIterPiece___node, /* pointer to ropes:RopeIterPiece:ropes#RopeIterPiece#node */
(nitmethod_t)standard__ropes___standard__ropes__RopeIterPiece___ldone_61d, /* pointer to ropes:RopeIterPiece:ropes#RopeIterPiece#ldone= */
(nitmethod_t)standard__ropes___standard__ropes__RopeIterPiece___rdone_61d, /* pointer to ropes:RopeIterPiece:ropes#RopeIterPiece#rdone= */
(nitmethod_t)standard__ropes___standard__ropes__RopeIterPiece___ldone, /* pointer to ropes:RopeIterPiece:ropes#RopeIterPiece#ldone */
(nitmethod_t)standard__ropes___standard__ropes__RopeIterPiece___node_61d, /* pointer to ropes:RopeIterPiece:ropes#RopeIterPiece#node= */
(nitmethod_t)standard__ropes___standard__ropes__RopeIterPiece___prev_61d, /* pointer to ropes:RopeIterPiece:ropes#RopeIterPiece#prev= */
(nitmethod_t)standard__ropes___standard__ropes__RopeIterPiece___rdone, /* pointer to ropes:RopeIterPiece:ropes#RopeIterPiece#rdone */
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
fatal_exit(1);
}
/* runtime class standard__ropes__RopeIter */
const struct class class_standard__ropes__RopeIter = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to ropes:RopeIter:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to ropes:RopeIter:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to ropes:RopeIter:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to ropes:RopeIter:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to ropes:RopeIter:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to ropes:RopeIter:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to ropes:RopeIter:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to ropes:RopeIter:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to ropes:RopeIter:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to ropes:RopeIter:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to ropes:RopeIter:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to ropes:RopeIter:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to ropes:RopeIter:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to ropes:RopeIter:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to ropes:RopeIter:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to ropes:RopeIter:light_c#Object#from_c_call_context */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__Iterator__is_ok, /* pointer to ropes:RopeIter:ropes#RopeIter#is_ok */
(nitmethod_t)VIRTUAL_standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__Iterator__item, /* pointer to ropes:RopeIter:ropes#RopeIter#item */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__Iterator__next, /* pointer to ropes:RopeIter:ropes#RopeIter#next */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to ropes:RopeIter:abstract_collection#Iterator#finish */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to ropes:RopeIter:abstract_collection#Iterator#iterator */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to ropes:RopeIter:array#Iterator#to_a */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___standard__abstract_collection__IndexedIterator__index, /* pointer to ropes:RopeIter:ropes#RopeIter#index */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___from, /* pointer to ropes:RopeIter:ropes#RopeIter#from */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___pos, /* pointer to ropes:RopeIter:ropes#RopeIter#pos */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___max, /* pointer to ropes:RopeIter:ropes#RopeIter#max */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___str, /* pointer to ropes:RopeIter:ropes#RopeIter#str */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___pns, /* pointer to ropes:RopeIter:ropes#RopeIter#pns */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___pns_61d, /* pointer to ropes:RopeIter:ropes#RopeIter#pns= */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___pos_61d, /* pointer to ropes:RopeIter:ropes#RopeIter#pos= */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___subs, /* pointer to ropes:RopeIter:ropes#RopeIter#subs */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___str_61d, /* pointer to ropes:RopeIter:ropes#RopeIter#str= */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___subs_61d, /* pointer to ropes:RopeIter:ropes#RopeIter#subs= */
(nitmethod_t)standard__ropes___standard__ropes__RopeIter___max_61d, /* pointer to ropes:RopeIter:ropes#RopeIter#max= */
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
fatal_exit(1);
}
/* runtime class standard__ropes__RopeBufSubstringIterator */
const struct class class_standard__ropes__RopeBufSubstringIterator = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to ropes:RopeBufSubstringIterator:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to ropes:RopeBufSubstringIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to ropes:RopeBufSubstringIterator:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to ropes:RopeBufSubstringIterator:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to ropes:RopeBufSubstringIterator:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to ropes:RopeBufSubstringIterator:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to ropes:RopeBufSubstringIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to ropes:RopeBufSubstringIterator:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to ropes:RopeBufSubstringIterator:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to ropes:RopeBufSubstringIterator:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to ropes:RopeBufSubstringIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to ropes:RopeBufSubstringIterator:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to ropes:RopeBufSubstringIterator:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to ropes:RopeBufSubstringIterator:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to ropes:RopeBufSubstringIterator:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to ropes:RopeBufSubstringIterator:light_c#Object#from_c_call_context */
(nitmethod_t)standard__ropes___standard__ropes__RopeBufSubstringIterator___standard__abstract_collection__Iterator__is_ok, /* pointer to ropes:RopeBufSubstringIterator:ropes#RopeBufSubstringIterator#is_ok */
(nitmethod_t)standard__ropes___standard__ropes__RopeBufSubstringIterator___standard__abstract_collection__Iterator__item, /* pointer to ropes:RopeBufSubstringIterator:ropes#RopeBufSubstringIterator#item */
(nitmethod_t)standard__ropes___standard__ropes__RopeBufSubstringIterator___standard__abstract_collection__Iterator__next, /* pointer to ropes:RopeBufSubstringIterator:ropes#RopeBufSubstringIterator#next */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to ropes:RopeBufSubstringIterator:abstract_collection#Iterator#finish */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to ropes:RopeBufSubstringIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to ropes:RopeBufSubstringIterator:array#Iterator#to_a */
(nitmethod_t)standard__ropes___standard__ropes__RopeBufSubstringIterator___init, /* pointer to ropes:RopeBufSubstringIterator:ropes#RopeBufSubstringIterator#init */
(nitmethod_t)standard__ropes___standard__ropes__RopeBufSubstringIterator___iter, /* pointer to ropes:RopeBufSubstringIterator:ropes#RopeBufSubstringIterator#iter */
(nitmethod_t)standard__ropes___standard__ropes__RopeBufSubstringIterator___nsstr_done, /* pointer to ropes:RopeBufSubstringIterator:ropes#RopeBufSubstringIterator#nsstr_done */
(nitmethod_t)standard__ropes___standard__ropes__RopeBufSubstringIterator___nsstr, /* pointer to ropes:RopeBufSubstringIterator:ropes#RopeBufSubstringIterator#nsstr */
(nitmethod_t)standard__ropes___standard__ropes__RopeBufSubstringIterator___nsstr_done_61d, /* pointer to ropes:RopeBufSubstringIterator:ropes#RopeBufSubstringIterator#nsstr_done= */
(nitmethod_t)standard__ropes___standard__ropes__RopeBufSubstringIterator___iter_61d, /* pointer to ropes:RopeBufSubstringIterator:ropes#RopeBufSubstringIterator#iter= */
(nitmethod_t)standard__ropes___standard__ropes__RopeBufSubstringIterator___nsstr_61d, /* pointer to ropes:RopeBufSubstringIterator:ropes#RopeBufSubstringIterator#nsstr= */
}
};
/* allocate RopeBufSubstringIterator */
val* NEW_standard__ropes__RopeBufSubstringIterator(const struct type* type) {
val* self /* : RopeBufSubstringIterator */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__ropes__RopeBufSubstringIterator;
self->attrs[COLOR_standard__ropes__RopeBufSubstringIterator___nsstr_done].s = 0; /* _nsstr_done on <self:RopeBufSubstringIterator exact> */
return self;
}
/* runtime class standard__ropes__RopeSubstrings */
const struct class class_standard__ropes__RopeSubstrings = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to ropes:RopeSubstrings:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to ropes:RopeSubstrings:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to ropes:RopeSubstrings:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to ropes:RopeSubstrings:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to ropes:RopeSubstrings:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to ropes:RopeSubstrings:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to ropes:RopeSubstrings:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to ropes:RopeSubstrings:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to ropes:RopeSubstrings:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to ropes:RopeSubstrings:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to ropes:RopeSubstrings:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to ropes:RopeSubstrings:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to ropes:RopeSubstrings:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to ropes:RopeSubstrings:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to ropes:RopeSubstrings:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to ropes:RopeSubstrings:light_c#Object#from_c_call_context */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___standard__abstract_collection__Iterator__is_ok, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#is_ok */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___standard__abstract_collection__Iterator__item, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#item */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___standard__abstract_collection__Iterator__next, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#next */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to ropes:RopeSubstrings:abstract_collection#Iterator#finish */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to ropes:RopeSubstrings:abstract_collection#Iterator#iterator */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to ropes:RopeSubstrings:array#Iterator#to_a */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___standard__abstract_collection__IndexedIterator__index, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#index */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___init, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#init */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___pos, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#pos */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___max, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#max */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___str, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#str */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___pos_61d, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#pos= */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___iter, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#iter */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___str_61d, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#str= */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___iter_61d, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#iter= */
(nitmethod_t)standard__ropes___standard__ropes__RopeSubstrings___max_61d, /* pointer to ropes:RopeSubstrings:ropes#RopeSubstrings#max= */
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
(nitmethod_t)standard__string___standard__string__StringCharView___standard__kernel__Object__init, /* pointer to ropes:RopeChars:string#StringCharView#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to ropes:RopeChars:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to ropes:RopeChars:kernel#Object#sys */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to ropes:RopeChars:string#Collection#to_s */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object___61d_61d, /* pointer to ropes:RopeChars:abstract_collection#SequenceRead#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to ropes:RopeChars:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to ropes:RopeChars:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to ropes:RopeChars:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to ropes:RopeChars:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to ropes:RopeChars:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to ropes:RopeChars:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to ropes:RopeChars:string#Object#native_class_name */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object__hash, /* pointer to ropes:RopeChars:abstract_collection#SequenceRead#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to ropes:RopeChars:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to ropes:RopeChars:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to ropes:RopeChars:light_c#Object#from_c_call_context */
(nitmethod_t)standard__string___standard__string__StringCharView___target_61d, /* pointer to ropes:RopeChars:string#StringCharView#target= */
(nitmethod_t)standard__string___standard__string__StringCharView___target, /* pointer to ropes:RopeChars:string#StringCharView#target */
(nitmethod_t)standard___standard__Object___init, /* pointer to ropes:RopeChars:kernel#Object#init */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__string___Collection___join, /* pointer to ropes:RopeChars:string#Collection#join */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to ropes:RopeChars:array#Collection#to_a */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__length, /* pointer to ropes:RopeChars:string#StringCharView#length */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__is_empty, /* pointer to ropes:RopeChars:string#StringCharView#is_empty */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__iterator, /* pointer to ropes:RopeChars:string#StringCharView#iterator */
(nitmethod_t)standard__string___Collection___plain_to_s, /* pointer to ropes:RopeChars:string#Collection#plain_to_s */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to ropes:RopeChars:abstract_collection#Collection#has_all */
(nitmethod_t)standard___standard__Collection___has, /* pointer to ropes:RopeChars:abstract_collection#Collection#has */
(nitmethod_t)standard___standard__SequenceRead___Collection__first, /* pointer to ropes:RopeChars:abstract_collection#SequenceRead#first */
(nitmethod_t)standard___standard__Collection___not_empty, /* pointer to ropes:RopeChars:abstract_collection#Collection#not_empty */
(nitmethod_t)VIRTUAL_standard__ropes___standard__ropes__RopeChars___standard__abstract_collection__SequenceRead___91d_93d, /* pointer to ropes:RopeChars:ropes#RopeChars#[] */
(nitmethod_t)standard__ropes___standard__ropes__RopeChars___standard__abstract_collection__SequenceRead__iterator_from, /* pointer to ropes:RopeChars:ropes#RopeChars#iterator_from */
(nitmethod_t)standard___standard__SequenceRead___index_of, /* pointer to ropes:RopeChars:abstract_collection#SequenceRead#index_of */
(nitmethod_t)standard___standard__SequenceRead___index_of_from, /* pointer to ropes:RopeChars:abstract_collection#SequenceRead#index_of_from */
(nitmethod_t)standard___standard__SequenceRead___last, /* pointer to ropes:RopeChars:abstract_collection#SequenceRead#last */
(nitmethod_t)standard___standard__SequenceRead___last_index_of, /* pointer to ropes:RopeChars:abstract_collection#SequenceRead#last_index_of */
(nitmethod_t)standard___standard__SequenceRead___last_index_of_from, /* pointer to ropes:RopeChars:abstract_collection#SequenceRead#last_index_of_from */
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
const struct class class_standard__RopeBufferIter = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to ropes:RopeBufferIter:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to ropes:RopeBufferIter:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to ropes:RopeBufferIter:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to ropes:RopeBufferIter:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to ropes:RopeBufferIter:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to ropes:RopeBufferIter:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to ropes:RopeBufferIter:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to ropes:RopeBufferIter:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to ropes:RopeBufferIter:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to ropes:RopeBufferIter:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to ropes:RopeBufferIter:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to ropes:RopeBufferIter:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to ropes:RopeBufferIter:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to ropes:RopeBufferIter:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to ropes:RopeBufferIter:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to ropes:RopeBufferIter:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__RopeBufferIter___standard__abstract_collection__Iterator__is_ok, /* pointer to ropes:RopeBufferIter:ropes#RopeBufferIter#is_ok */
(nitmethod_t)VIRTUAL_standard___standard__RopeBufferIter___standard__abstract_collection__Iterator__item, /* pointer to ropes:RopeBufferIter:ropes#RopeBufferIter#item */
(nitmethod_t)standard___standard__RopeBufferIter___standard__abstract_collection__Iterator__next, /* pointer to ropes:RopeBufferIter:ropes#RopeBufferIter#next */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to ropes:RopeBufferIter:abstract_collection#Iterator#finish */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to ropes:RopeBufferIter:abstract_collection#Iterator#iterator */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to ropes:RopeBufferIter:array#Iterator#to_a */
(nitmethod_t)standard___standard__RopeBufferIter___standard__abstract_collection__IndexedIterator__index, /* pointer to ropes:RopeBufferIter:ropes#RopeBufferIter#index */
(nitmethod_t)standard___standard__RopeBufferIter___from, /* pointer to ropes:RopeBufferIter:ropes#RopeBufferIter#from */
(nitmethod_t)standard___standard__RopeBufferIter___maxpos, /* pointer to ropes:RopeBufferIter:ropes#RopeBufferIter#maxpos */
(nitmethod_t)standard___standard__RopeBufferIter___sit, /* pointer to ropes:RopeBufferIter:ropes#RopeBufferIter#sit */
(nitmethod_t)standard___standard__RopeBufferIter___ns, /* pointer to ropes:RopeBufferIter:ropes#RopeBufferIter#ns */
(nitmethod_t)standard___standard__RopeBufferIter___pns, /* pointer to ropes:RopeBufferIter:ropes#RopeBufferIter#pns */
(nitmethod_t)standard___standard__RopeBufferIter___index_61d, /* pointer to ropes:RopeBufferIter:ropes#RopeBufferIter#index= */
(nitmethod_t)standard___standard__RopeBufferIter___pns_61d, /* pointer to ropes:RopeBufferIter:ropes#RopeBufferIter#pns= */
(nitmethod_t)standard___standard__RopeBufferIter___ns_61d, /* pointer to ropes:RopeBufferIter:ropes#RopeBufferIter#ns= */
(nitmethod_t)standard___standard__RopeBufferIter___maxpos_61d, /* pointer to ropes:RopeBufferIter:ropes#RopeBufferIter#maxpos= */
(nitmethod_t)standard___standard__RopeBufferIter___sit_61d, /* pointer to ropes:RopeBufferIter:ropes#RopeBufferIter#sit= */
}
};
/* allocate RopeBufferIter */
val* NEW_standard__RopeBufferIter(const struct type* type) {
val* self /* : RopeBufferIter */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__RopeBufferIter;
return self;
}
/* runtime class standard__RopeBufferReviter */
/* allocate RopeBufferReviter */
val* NEW_standard__RopeBufferReviter(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "RopeBufferReviter is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__RopeBufferChars */
const struct class class_standard__RopeBufferChars = {
0, /* box_kind */
{
(nitmethod_t)standard__string___standard__string__StringCharView___standard__kernel__Object__init, /* pointer to ropes:RopeBufferChars:string#StringCharView#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to ropes:RopeBufferChars:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to ropes:RopeBufferChars:kernel#Object#sys */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to ropes:RopeBufferChars:string#Collection#to_s */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object___61d_61d, /* pointer to ropes:RopeBufferChars:abstract_collection#SequenceRead#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to ropes:RopeBufferChars:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to ropes:RopeBufferChars:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to ropes:RopeBufferChars:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to ropes:RopeBufferChars:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to ropes:RopeBufferChars:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to ropes:RopeBufferChars:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to ropes:RopeBufferChars:string#Object#native_class_name */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object__hash, /* pointer to ropes:RopeBufferChars:abstract_collection#SequenceRead#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to ropes:RopeBufferChars:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to ropes:RopeBufferChars:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to ropes:RopeBufferChars:light_c#Object#from_c_call_context */
(nitmethod_t)standard__string___standard__string__StringCharView___target_61d, /* pointer to ropes:RopeBufferChars:string#StringCharView#target= */
(nitmethod_t)standard__string___standard__string__StringCharView___target, /* pointer to ropes:RopeBufferChars:string#StringCharView#target */
(nitmethod_t)standard___standard__Object___init, /* pointer to ropes:RopeBufferChars:kernel#Object#init */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__string___Collection___join, /* pointer to ropes:RopeBufferChars:string#Collection#join */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to ropes:RopeBufferChars:array#Collection#to_a */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__length, /* pointer to ropes:RopeBufferChars:string#StringCharView#length */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__is_empty, /* pointer to ropes:RopeBufferChars:string#StringCharView#is_empty */
(nitmethod_t)standard__string___standard__string__StringCharView___standard__abstract_collection__Collection__iterator, /* pointer to ropes:RopeBufferChars:string#StringCharView#iterator */
(nitmethod_t)standard__string___Collection___plain_to_s, /* pointer to ropes:RopeBufferChars:string#Collection#plain_to_s */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to ropes:RopeBufferChars:abstract_collection#Collection#has_all */
(nitmethod_t)standard___standard__Collection___has, /* pointer to ropes:RopeBufferChars:abstract_collection#Collection#has */
(nitmethod_t)standard___standard__SequenceRead___Collection__first, /* pointer to ropes:RopeBufferChars:abstract_collection#SequenceRead#first */
(nitmethod_t)standard___standard__Collection___not_empty, /* pointer to ropes:RopeBufferChars:abstract_collection#Collection#not_empty */
(nitmethod_t)VIRTUAL_standard___standard__RopeBufferChars___standard__abstract_collection__SequenceRead___91d_93d, /* pointer to ropes:RopeBufferChars:ropes#RopeBufferChars#[] */
(nitmethod_t)standard___standard__RopeBufferChars___standard__abstract_collection__SequenceRead__iterator_from, /* pointer to ropes:RopeBufferChars:ropes#RopeBufferChars#iterator_from */
(nitmethod_t)standard___standard__SequenceRead___index_of, /* pointer to ropes:RopeBufferChars:abstract_collection#SequenceRead#index_of */
(nitmethod_t)standard___standard__SequenceRead___index_of_from, /* pointer to ropes:RopeBufferChars:abstract_collection#SequenceRead#index_of_from */
(nitmethod_t)standard___standard__SequenceRead___last, /* pointer to ropes:RopeBufferChars:abstract_collection#SequenceRead#last */
(nitmethod_t)standard___standard__SequenceRead___last_index_of, /* pointer to ropes:RopeBufferChars:abstract_collection#SequenceRead#last_index_of */
(nitmethod_t)standard___standard__SequenceRead___last_index_of_from, /* pointer to ropes:RopeBufferChars:abstract_collection#SequenceRead#last_index_of_from */
(nitmethod_t)standard___standard__RemovableCollection___remove, /* pointer to ropes:RopeBufferChars:abstract_collection#RemovableCollection#remove */
(nitmethod_t)standard___standard__RemovableCollection___clear, /* pointer to ropes:RopeBufferChars:abstract_collection#RemovableCollection#clear */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard___standard__SimpleCollection___add_all, /* pointer to ropes:RopeBufferChars:abstract_collection#SimpleCollection#add_all */
(nitmethod_t)VIRTUAL_standard___standard__RopeBufferChars___standard__abstract_collection__SimpleCollection__add, /* pointer to ropes:RopeBufferChars:ropes#RopeBufferChars#add */
(nitmethod_t)VIRTUAL_standard___standard__RopeBufferChars___standard__abstract_collection__Sequence__push, /* pointer to ropes:RopeBufferChars:ropes#RopeBufferChars#push */
(nitmethod_t)VIRTUAL_standard___standard__RopeBufferChars___standard__abstract_collection__Sequence___91d_93d_61d, /* pointer to ropes:RopeBufferChars:ropes#RopeBufferChars#[]= */
(nitmethod_t)standard___standard__Sequence___append, /* pointer to ropes:RopeBufferChars:abstract_collection#Sequence#append */
(nitmethod_t)standard___standard__Sequence___remove_at, /* pointer to ropes:RopeBufferChars:abstract_collection#Sequence#remove_at */
(nitmethod_t)standard___standard__Sequence___pop, /* pointer to ropes:RopeBufferChars:abstract_collection#Sequence#pop */
(nitmethod_t)standard___standard__Sequence___shift, /* pointer to ropes:RopeBufferChars:abstract_collection#Sequence#shift */
(nitmethod_t)standard___standard__Sequence___prepend, /* pointer to ropes:RopeBufferChars:abstract_collection#Sequence#prepend */
(nitmethod_t)standard___standard__Sequence___insert_all, /* pointer to ropes:RopeBufferChars:abstract_collection#Sequence#insert_all */
(nitmethod_t)standard___standard__Sequence___unshift, /* pointer to ropes:RopeBufferChars:abstract_collection#Sequence#unshift */
(nitmethod_t)standard___standard__Sequence___insert, /* pointer to ropes:RopeBufferChars:abstract_collection#Sequence#insert */
(nitmethod_t)standard___standard__Sequence___first_61d, /* pointer to ropes:RopeBufferChars:abstract_collection#Sequence#first= */
}
};
/* allocate RopeBufferChars */
val* NEW_standard__RopeBufferChars(const struct type* type) {
val* self /* : RopeBufferChars */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__RopeBufferChars;
return self;
}
/* runtime class standard__Error */
/* allocate Error */
val* NEW_standard__Error(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Error is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__MaybeError */
/* allocate MaybeError[nullable Object, Error] */
val* NEW_standard__MaybeError(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MaybeError is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Bytes */
const struct class class_standard__Bytes = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Bytes___standard__kernel__Object__init, /* pointer to bytes:Bytes:bytes#Bytes#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to bytes:Bytes:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to bytes:Bytes:kernel#Object#sys */
(nitmethod_t)standard___standard__Bytes___standard__string__Object__to_s, /* pointer to bytes:Bytes:bytes#Bytes#to_s */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object___61d_61d, /* pointer to bytes:Bytes:abstract_collection#SequenceRead#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to bytes:Bytes:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to bytes:Bytes:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to bytes:Bytes:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to bytes:Bytes:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to bytes:Bytes:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to bytes:Bytes:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to bytes:Bytes:string#Object#native_class_name */
(nitmethod_t)standard___standard__SequenceRead___standard__kernel__Object__hash, /* pointer to bytes:Bytes:abstract_collection#SequenceRead#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to bytes:Bytes:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to bytes:Bytes:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to bytes:Bytes:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Bytes___empty, /* pointer to bytes:Bytes:bytes#Bytes#empty */
(nitmethod_t)standard___standard__Bytes___with_capacity, /* pointer to bytes:Bytes:bytes#Bytes#with_capacity */
(nitmethod_t)standard___standard__Bytes___persisted_61d, /* pointer to bytes:Bytes:bytes#Bytes#persisted= */
(nitmethod_t)standard___standard__Bytes___items, /* pointer to bytes:Bytes:bytes#Bytes#items */
(nitmethod_t)standard___standard__Bytes___persisted, /* pointer to bytes:Bytes:bytes#Bytes#persisted */
(nitmethod_t)standard__string___Collection___join, /* pointer to bytes:Bytes:string#Collection#join */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to bytes:Bytes:array#Collection#to_a */
(nitmethod_t)standard___standard__Bytes___standard__abstract_collection__Collection__length, /* pointer to bytes:Bytes:bytes#Bytes#length */
(nitmethod_t)standard___standard__Bytes___standard__abstract_collection__Collection__is_empty, /* pointer to bytes:Bytes:bytes#Bytes#is_empty */
(nitmethod_t)standard___standard__Bytes___standard__abstract_collection__Collection__iterator, /* pointer to bytes:Bytes:bytes#Bytes#iterator */
(nitmethod_t)standard__string___Collection___plain_to_s, /* pointer to bytes:Bytes:string#Collection#plain_to_s */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to bytes:Bytes:abstract_collection#Collection#has_all */
(nitmethod_t)standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has, /* pointer to bytes:Bytes:array#AbstractArrayRead#has */
(nitmethod_t)standard___standard__SequenceRead___Collection__first, /* pointer to bytes:Bytes:abstract_collection#SequenceRead#first */
(nitmethod_t)standard___standard__Collection___not_empty, /* pointer to bytes:Bytes:abstract_collection#Collection#not_empty */
(nitmethod_t)VIRTUAL_standard___standard__Bytes___standard__abstract_collection__SequenceRead___91d_93d, /* pointer to bytes:Bytes:bytes#Bytes#[] */
(nitmethod_t)standard___standard__SequenceRead___iterator_from, /* pointer to bytes:Bytes:abstract_collection#SequenceRead#iterator_from */
(nitmethod_t)standard___standard__AbstractArrayRead___standard__abstract_collection__SequenceRead__index_of, /* pointer to bytes:Bytes:array#AbstractArrayRead#index_of */
(nitmethod_t)standard___standard__AbstractArrayRead___standard__abstract_collection__SequenceRead__index_of_from, /* pointer to bytes:Bytes:array#AbstractArrayRead#index_of_from */
(nitmethod_t)standard___standard__SequenceRead___last, /* pointer to bytes:Bytes:abstract_collection#SequenceRead#last */
(nitmethod_t)standard___standard__AbstractArrayRead___standard__abstract_collection__SequenceRead__last_index_of, /* pointer to bytes:Bytes:array#AbstractArrayRead#last_index_of */
(nitmethod_t)standard___standard__AbstractArrayRead___standard__abstract_collection__SequenceRead__last_index_of_from, /* pointer to bytes:Bytes:array#AbstractArrayRead#last_index_of_from */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__RemovableCollection__remove, /* pointer to bytes:Bytes:array#AbstractArray#remove */
(nitmethod_t)standard___standard__Bytes___standard__abstract_collection__RemovableCollection__clear, /* pointer to bytes:Bytes:bytes#Bytes#clear */
(nitmethod_t)standard___standard__Bytes___standard__array__AbstractArrayRead__length_61d, /* pointer to bytes:Bytes:bytes#Bytes#length= */
(nitmethod_t)standard___standard__AbstractArrayRead___copy_to, /* pointer to bytes:Bytes:array#AbstractArrayRead#copy_to */
(nitmethod_t)standard___standard__AbstractArrayRead___reversed, /* pointer to bytes:Bytes:array#AbstractArrayRead#reversed */
(nitmethod_t)standard___standard__AbstractArrayRead___sub, /* pointer to bytes:Bytes:array#AbstractArrayRead#sub */
(nitmethod_t)standard___standard__SimpleCollection___add_all, /* pointer to bytes:Bytes:abstract_collection#SimpleCollection#add_all */
(nitmethod_t)VIRTUAL_standard___standard__Bytes___standard__abstract_collection__SimpleCollection__add, /* pointer to bytes:Bytes:bytes#Bytes#add */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__Sequence__push, /* pointer to bytes:Bytes:array#AbstractArray#push */
(nitmethod_t)VIRTUAL_standard___standard__Bytes___standard__abstract_collection__Sequence___91d_93d_61d, /* pointer to bytes:Bytes:bytes#Bytes#[]= */
(nitmethod_t)standard___standard__Bytes___standard__abstract_collection__Sequence__append, /* pointer to bytes:Bytes:bytes#Bytes#append */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__Sequence__remove_at, /* pointer to bytes:Bytes:array#AbstractArray#remove_at */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__Sequence__pop, /* pointer to bytes:Bytes:array#AbstractArray#pop */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__Sequence__shift, /* pointer to bytes:Bytes:array#AbstractArray#shift */
(nitmethod_t)standard___standard__Sequence___prepend, /* pointer to bytes:Bytes:abstract_collection#Sequence#prepend */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__Sequence__insert_all, /* pointer to bytes:Bytes:array#AbstractArray#insert_all */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__Sequence__unshift, /* pointer to bytes:Bytes:array#AbstractArray#unshift */
(nitmethod_t)standard___standard__AbstractArray___standard__abstract_collection__Sequence__insert, /* pointer to bytes:Bytes:array#AbstractArray#insert */
(nitmethod_t)standard___standard__Sequence___first_61d, /* pointer to bytes:Bytes:abstract_collection#Sequence#first= */
(nitmethod_t)standard___standard__Bytes___standard__array__AbstractArray__enlarge, /* pointer to bytes:Bytes:bytes#Bytes#enlarge */
(nitmethod_t)standard___standard__Bytes___regen, /* pointer to bytes:Bytes:bytes#Bytes#regen */
(nitmethod_t)standard___standard__Bytes___capacity, /* pointer to bytes:Bytes:bytes#Bytes#capacity */
(nitmethod_t)standard___standard__Bytes___append_ns, /* pointer to bytes:Bytes:bytes#Bytes#append_ns */
(nitmethod_t)standard___standard__Bytes___capacity_61d, /* pointer to bytes:Bytes:bytes#Bytes#capacity= */
(nitmethod_t)standard___standard__Bytes___items_61d, /* pointer to bytes:Bytes:bytes#Bytes#items= */
(nitmethod_t)standard___standard__Bytes___append_ns_from, /* pointer to bytes:Bytes:bytes#Bytes#append_ns_from */
(nitmethod_t)standard___standard__Object___init, /* pointer to bytes:Bytes:kernel#Object#init */
}
};
/* allocate Bytes */
val* NEW_standard__Bytes(const struct type* type) {
val* self /* : Bytes */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__Bytes;
self->attrs[COLOR_standard__array__AbstractArrayRead___length].l = 0l; /* _length on <self:Bytes exact> */
self->attrs[COLOR_standard__bytes__Bytes___persisted].s = 0; /* _persisted on <self:Bytes exact> */
return self;
}
/* runtime class standard__bytes__BytesIterator */
const struct class class_standard__bytes__BytesIterator = {
0, /* box_kind */
{
(nitmethod_t)standard__bytes___standard__bytes__BytesIterator___standard__kernel__Object__init, /* pointer to bytes:BytesIterator:bytes#BytesIterator#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to bytes:BytesIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to bytes:BytesIterator:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to bytes:BytesIterator:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to bytes:BytesIterator:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to bytes:BytesIterator:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to bytes:BytesIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to bytes:BytesIterator:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to bytes:BytesIterator:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to bytes:BytesIterator:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to bytes:BytesIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to bytes:BytesIterator:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to bytes:BytesIterator:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to bytes:BytesIterator:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to bytes:BytesIterator:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to bytes:BytesIterator:light_c#Object#from_c_call_context */
(nitmethod_t)standard__bytes___standard__bytes__BytesIterator___standard__abstract_collection__Iterator__is_ok, /* pointer to bytes:BytesIterator:bytes#BytesIterator#is_ok */
(nitmethod_t)VIRTUAL_standard__bytes___standard__bytes__BytesIterator___standard__abstract_collection__Iterator__item, /* pointer to bytes:BytesIterator:bytes#BytesIterator#item */
(nitmethod_t)standard__bytes___standard__bytes__BytesIterator___standard__abstract_collection__Iterator__next, /* pointer to bytes:BytesIterator:bytes#BytesIterator#next */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to bytes:BytesIterator:abstract_collection#Iterator#finish */
(nitmethod_t)standard___standard__Iterator___iterator, /* pointer to bytes:BytesIterator:abstract_collection#Iterator#iterator */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to bytes:BytesIterator:array#Iterator#to_a */
(nitmethod_t)standard__bytes___standard__bytes__BytesIterator___standard__abstract_collection__IndexedIterator__index, /* pointer to bytes:BytesIterator:bytes#BytesIterator#index */
(nitmethod_t)standard__bytes___standard__bytes__BytesIterator___with_buffer, /* pointer to bytes:BytesIterator:bytes#BytesIterator#with_buffer */
(nitmethod_t)standard__bytes___standard__bytes__BytesIterator___max, /* pointer to bytes:BytesIterator:bytes#BytesIterator#max */
(nitmethod_t)standard__bytes___standard__bytes__BytesIterator___tgt, /* pointer to bytes:BytesIterator:bytes#BytesIterator#tgt */
(nitmethod_t)standard__bytes___standard__bytes__BytesIterator___index_61d, /* pointer to bytes:BytesIterator:bytes#BytesIterator#index= */
(nitmethod_t)standard__bytes___standard__bytes__BytesIterator___tgt_61d, /* pointer to bytes:BytesIterator:bytes#BytesIterator#tgt= */
(nitmethod_t)standard__bytes___standard__bytes__BytesIterator___max_61d, /* pointer to bytes:BytesIterator:bytes#BytesIterator#max= */
(nitmethod_t)standard___standard__Object___init, /* pointer to bytes:BytesIterator:kernel#Object#init */
}
};
/* allocate BytesIterator */
val* NEW_standard__bytes__BytesIterator(const struct type* type) {
val* self /* : BytesIterator */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_standard__bytes__BytesIterator;
return self;
}
/* runtime class standard__Pattern */
/* allocate Pattern */
val* NEW_standard__Pattern(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Pattern is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__BM_Pattern */
/* allocate BM_Pattern */
val* NEW_standard__BM_Pattern(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "BM_Pattern is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Match */
const struct class class_standard__Match = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Match___standard__kernel__Object__init, /* pointer to string_search:Match:string_search#Match#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to string_search:Match:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to string_search:Match:kernel#Object#sys */
(nitmethod_t)standard___standard__Match___standard__string__Object__to_s, /* pointer to string_search:Match:string_search#Match#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to string_search:Match:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to string_search:Match:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to string_search:Match:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to string_search:Match:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to string_search:Match:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to string_search:Match:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to string_search:Match:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to string_search:Match:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to string_search:Match:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to string_search:Match:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to string_search:Match:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to string_search:Match:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Match___from, /* pointer to string_search:Match:string_search#Match#from */
(nitmethod_t)standard___standard__Match___after, /* pointer to string_search:Match:string_search#Match#after */
(nitmethod_t)standard___standard__Match___string_61d, /* pointer to string_search:Match:string_search#Match#string= */
(nitmethod_t)standard___standard__Match___from_61d, /* pointer to string_search:Match:string_search#Match#from= */
(nitmethod_t)standard___standard__Match___length_61d, /* pointer to string_search:Match:string_search#Match#length= */
(nitmethod_t)standard___standard__Match___length, /* pointer to string_search:Match:string_search#Match#length */
(nitmethod_t)standard___standard__Match___string, /* pointer to string_search:Match:string_search#Match#string */
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
fatal_exit(1);
}
/* runtime class standard__Tm */
/* allocate Tm */
val* NEW_standard__Tm(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Tm is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__ISODate */
/* allocate ISODate */
val* NEW_standard__ISODate(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ISODate is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Finalizable */
/* allocate Finalizable */
val* NEW_standard__Finalizable(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Finalizable is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__FinalizableOnce */
/* allocate FinalizableOnce */
val* NEW_standard__FinalizableOnce(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "FinalizableOnce is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Process */
/* allocate Process */
val* NEW_standard__Process(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Process is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__ProcessReader */
/* allocate ProcessReader */
val* NEW_standard__ProcessReader(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ProcessReader is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__ProcessWriter */
/* allocate ProcessWriter */
val* NEW_standard__ProcessWriter(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ProcessWriter is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__ProcessDuplex */
/* allocate ProcessDuplex */
val* NEW_standard__ProcessDuplex(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ProcessDuplex is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__exec__NativeProcess */
/* allocate NativeProcess */
val* NEW_standard__exec__NativeProcess(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "NativeProcess is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Queue */
/* allocate Queue[nullable Object] */
val* NEW_standard__Queue(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Queue is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__queue__ProxyQueue */
/* allocate ProxyQueue[nullable Object] */
val* NEW_standard__queue__ProxyQueue(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ProxyQueue is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__queue__LifoQueue */
/* allocate LifoQueue[nullable Object] */
val* NEW_standard__queue__LifoQueue(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "LifoQueue is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__queue__FifoQueue */
/* allocate FifoQueue[nullable Object] */
val* NEW_standard__queue__FifoQueue(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "FifoQueue is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__queue__RandQueue */
/* allocate RandQueue[nullable Object] */
val* NEW_standard__queue__RandQueue(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "RandQueue is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__MinHeap */
/* allocate MinHeap[Object] */
val* NEW_standard__MinHeap(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MinHeap is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__re__NativeRegex */
/* allocate NativeRegex */
val* NEW_standard__re__NativeRegex(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "NativeRegex is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__re__NativeMatchArray */
/* allocate NativeMatchArray */
val* NEW_standard__re__NativeMatchArray(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "NativeMatchArray is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class standard__Regex */
/* allocate Regex */
val* NEW_standard__Regex(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Regex is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__MProject */
const struct class class_nit__MProject = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MProject___standard__kernel__Object__init, /* pointer to mproject:MProject:mproject#MProject#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to mproject:MProject:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to mproject:MProject:kernel#Object#sys */
(nitmethod_t)nit___nit__MProject___standard__string__Object__to_s, /* pointer to mproject:MProject:mproject#MProject#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to mproject:MProject:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to mproject:MProject:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to mproject:MProject:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to mproject:MProject:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to mproject:MProject:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to mproject:MProject:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to mproject:MProject:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to mproject:MProject:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to mproject:MProject:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to mproject:MProject:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to mproject:MProject:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to mproject:MProject:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MProject___nit__model_base__MEntity__c_name, /* pointer to mproject:MProject:mproject#MProject#c_name */
(nitmethod_t)nit___nit__MProject___nit__model_base__MEntity__model, /* pointer to mproject:MProject:mproject#MProject#model */
(nitmethod_t)nit___nit__MProject___nit__model_base__MEntity__name, /* pointer to mproject:MProject:mproject#MProject#name */
(nitmethod_t)nit___nit__MProject___nit__model_base__MEntity__full_name, /* pointer to mproject:MProject:mproject#MProject#full_name */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to mproject:MProject:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to mproject:MProject:separate_compiler#MEntity#const_color */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to mproject:MProject:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to mproject:MProject:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to mproject:MProject:mdoc#MEntity#deprecation */
(nitmethod_t)nit___nit__MProject___name_61d, /* pointer to mproject:MProject:mproject#MProject#name= */
(nitmethod_t)nit___nit__MProject___model_61d, /* pointer to mproject:MProject:mproject#MProject#model= */
(nitmethod_t)nit___nit__MProject___root_61d, /* pointer to mproject:MProject:mproject#MProject#root= */
(nitmethod_t)nit___nit__MProject___root, /* pointer to mproject:MProject:mproject#MProject#root */
(nitmethod_t)nit___nit__MProject___mgroups, /* pointer to mproject:MProject:mproject#MProject#mgroups */
(nitmethod_t)standard___standard__Object___init, /* pointer to mproject:MProject:kernel#Object#init */
}
};
/* allocate MProject */
val* NEW_nit__MProject(const struct type* type) {
val* self /* : MProject */;
val* var /* : POSet[MGroup] */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MProject;
var = NEW_poset__POSet(&type_poset__POSet__nit__MGroup);
{
{ /* Inline kernel#Object#init (var) on <var:POSet[MGroup]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__mproject__MProject___mgroups].val = var; /* _mgroups on <self:MProject exact> */
return self;
}
/* runtime class nit__MGroup */
const struct class class_nit__MGroup = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MGroup___standard__kernel__Object__init, /* pointer to mproject:MGroup:mproject#MGroup#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to mproject:MGroup:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to mproject:MGroup:kernel#Object#sys */
(nitmethod_t)nit___nit__MGroup___standard__string__Object__to_s, /* pointer to mproject:MGroup:mproject#MGroup#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to mproject:MGroup:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to mproject:MGroup:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to mproject:MGroup:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to mproject:MGroup:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to mproject:MGroup:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to mproject:MGroup:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to mproject:MGroup:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to mproject:MGroup:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to mproject:MGroup:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to mproject:MGroup:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to mproject:MGroup:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to mproject:MGroup:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MEntity___c_name, /* pointer to mproject:MGroup:model_base#MEntity#c_name */
(nitmethod_t)nit___nit__MGroup___nit__model_base__MEntity__model, /* pointer to mproject:MGroup:mproject#MGroup#model */
(nitmethod_t)nit___nit__MGroup___nit__model_base__MEntity__name, /* pointer to mproject:MGroup:mproject#MGroup#name */
(nitmethod_t)nit___nit__MGroup___nit__model_base__MEntity__full_name, /* pointer to mproject:MGroup:mproject#MGroup#full_name */
(nitmethod_t)nit__mdoc___MEntity___mdoc_61d, /* pointer to mproject:MGroup:mdoc#MEntity#mdoc= */
(nitmethod_t)nit__separate_compiler___MEntity___const_color, /* pointer to mproject:MGroup:separate_compiler#MEntity#const_color */
(nitmethod_t)nit__mdoc___MEntity___mdoc, /* pointer to mproject:MGroup:mdoc#MEntity#mdoc */
(nitmethod_t)nit__mdoc___MEntity___deprecation_61d, /* pointer to mproject:MGroup:mdoc#MEntity#deprecation= */
(nitmethod_t)nit__mdoc___MEntity___deprecation, /* pointer to mproject:MGroup:mdoc#MEntity#deprecation */
(nitmethod_t)nit___nit__MGroup___mproject, /* pointer to mproject:MGroup:mproject#MGroup#mproject */
(nitmethod_t)nit___nit__MGroup___filepath, /* pointer to mproject:MGroup:mproject#MGroup#filepath */
(nitmethod_t)nit___nit__MGroup___name_61d, /* pointer to mproject:MGroup:mproject#MGroup#name= */
(nitmethod_t)nit___nit__MGroup___mproject_61d, /* pointer to mproject:MGroup:mproject#MGroup#mproject= */
(nitmethod_t)nit___nit__MGroup___parent_61d, /* pointer to mproject:MGroup:mproject#MGroup#parent= */
(nitmethod_t)nit___nit__MGroup___filepath_61d, /* pointer to mproject:MGroup:mproject#MGroup#filepath= */
(nitmethod_t)nit__loader___MGroup___module_paths, /* pointer to mproject:MGroup:loader#MGroup#module_paths */
(nitmethod_t)nit___nit__MGroup___parent, /* pointer to mproject:MGroup:mproject#MGroup#parent */
(nitmethod_t)nit__mmodule___MGroup___mmodules, /* pointer to mproject:MGroup:mmodule#MGroup#mmodules */
(nitmethod_t)nit__mmodule___MGroup___default_mmodule, /* pointer to mproject:MGroup:mmodule#MGroup#default_mmodule */
(nitmethod_t)nit__mmodule___MGroup___default_mmodule_61d, /* pointer to mproject:MGroup:mmodule#MGroup#default_mmodule= */
(nitmethod_t)nit___nit__MGroup___in_nesting_61d, /* pointer to mproject:MGroup:mproject#MGroup#in_nesting= */
(nitmethod_t)standard___standard__Object___init, /* pointer to mproject:MGroup:kernel#Object#init */
}
};
/* allocate MGroup */
val* NEW_nit__MGroup(const struct type* type) {
val* self /* : MGroup */;
val* var /* : Array[MModule] */;
val* var1 /* : Array[ModulePath] */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MGroup;
var = NEW_standard__Array(&type_standard__Array__nit__MModule);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[MModule]>*/
}
self->attrs[COLOR_nit__mmodule__MGroup___mmodules].val = var; /* _mmodules on <self:MGroup exact> */
var1 = NEW_standard__Array(&type_standard__Array__nit__ModulePath);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[ModulePath]>*/
}
self->attrs[COLOR_nit__loader__MGroup___module_paths].val = var1; /* _module_paths on <self:MGroup exact> */
return self;
}
/* runtime class nit__Model */
const struct class class_nit__Model = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to model_base:Model:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model_base:Model:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model_base:Model:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to model_base:Model:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model_base:Model:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model_base:Model:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model_base:Model:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model_base:Model:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model_base:Model:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model_base:Model:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model_base:Model:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model_base:Model:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model_base:Model:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model_base:Model:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model_base:Model:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model_base:Model:light_c#Object#from_c_call_context */
(nitmethod_t)nit__mmodule___Model___mmodules, /* pointer to model_base:Model:mmodule#Model#mmodules */
(nitmethod_t)nit__mmodule___Model___mmodule_importation_hierarchy, /* pointer to model_base:Model:mmodule#Model#mmodule_importation_hierarchy */
(nitmethod_t)nit__mmodule___Model___get_mmodules_by_name, /* pointer to model_base:Model:mmodule#Model#get_mmodules_by_name */
(nitmethod_t)nit__mmodule___Model___mmodules_by_name, /* pointer to model_base:Model:mmodule#Model#mmodules_by_name */
(nitmethod_t)nit__model___Model___get_mclasses_by_name, /* pointer to model_base:Model:model#Model#get_mclasses_by_name */
(nitmethod_t)nit__model___Model___mclassdef_hierarchy, /* pointer to model_base:Model:model#Model#mclassdef_hierarchy */
(nitmethod_t)nit__model___Model___get_mproperties_by_name, /* pointer to model_base:Model:model#Model#get_mproperties_by_name */
(nitmethod_t)nit__mproject___Model___mprojects, /* pointer to model_base:Model:mproject#Model#mprojects */
(nitmethod_t)nit__mproject___Model___mproject_by_name, /* pointer to model_base:Model:mproject#Model#mproject_by_name */
(nitmethod_t)nit__model___Model___null_type, /* pointer to model_base:Model:model#Model#null_type */
(nitmethod_t)nit__model___Model___mclasses_by_name, /* pointer to model_base:Model:model#Model#mclasses_by_name */
(nitmethod_t)nit__model___Model___mclasses, /* pointer to model_base:Model:model#Model#mclasses */
(nitmethod_t)nit__model___Model___full_mtype_specialization_hierarchy, /* pointer to model_base:Model:model#Model#full_mtype_specialization_hierarchy */
(nitmethod_t)nit__model___Model___intro_mtype_specialization_hierarchy, /* pointer to model_base:Model:model#Model#intro_mtype_specialization_hierarchy */
(nitmethod_t)nit__model___Model___mproperties_by_name, /* pointer to model_base:Model:model#Model#mproperties_by_name */
(nitmethod_t)nit__model___Model___mproperties, /* pointer to model_base:Model:model#Model#mproperties */
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
((void(*)(val* self, val* p0))(var15->class->vft[COLOR_nit__model__MNullType__model_61d]))(var15, self); /* model= on <var15:MNullType>*/
}
{
((void(*)(val* self))(var15->class->vft[COLOR_standard__kernel__Object__init]))(var15); /* init on <var15:MNullType>*/
}
self->attrs[COLOR_nit__model__Model___null_type].val = var15; /* _null_type on <self:Model exact> */
return self;
}
/* runtime class nit__MEntity */
/* allocate MEntity */
val* NEW_nit__MEntity(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MEntity is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__MConcern */
/* allocate MConcern */
val* NEW_nit__MConcern(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MConcern is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__MVisibility */
const struct class class_nit__MVisibility = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__MVisibility___standard__kernel__Object__init, /* pointer to model_base:MVisibility:model_base#MVisibility#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to model_base:MVisibility:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to model_base:MVisibility:kernel#Object#sys */
(nitmethod_t)nit___nit__MVisibility___standard__string__Object__to_s, /* pointer to model_base:MVisibility:model_base#MVisibility#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to model_base:MVisibility:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to model_base:MVisibility:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to model_base:MVisibility:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to model_base:MVisibility:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to model_base:MVisibility:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to model_base:MVisibility:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to model_base:MVisibility:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to model_base:MVisibility:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to model_base:MVisibility:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to model_base:MVisibility:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to model_base:MVisibility:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to model_base:MVisibility:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Comparable____62d_61d, /* pointer to model_base:MVisibility:kernel#Comparable#>= */
(nitmethod_t)standard___standard__Comparable____60d_61d, /* pointer to model_base:MVisibility:kernel#Comparable#<= */
(nitmethod_t)standard___standard__Comparable____62d, /* pointer to model_base:MVisibility:kernel#Comparable#> */
(nitmethod_t)nit___nit__MVisibility___standard__kernel__Comparable___60d, /* pointer to model_base:MVisibility:model_base#MVisibility#< */
(nitmethod_t)standard___standard__Comparable____60d_61d_62d, /* pointer to model_base:MVisibility:kernel#Comparable#<=> */
(nitmethod_t)nit___nit__MVisibility___to_s_61d, /* pointer to model_base:MVisibility:model_base#MVisibility#to_s= */
(nitmethod_t)nit___nit__MVisibility___level_61d, /* pointer to model_base:MVisibility:model_base#MVisibility#level= */
(nitmethod_t)nit___nit__MVisibility___level, /* pointer to model_base:MVisibility:model_base#MVisibility#level */
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
/* runtime class nit__MEntityNameSorter */
/* allocate MEntityNameSorter */
val* NEW_nit__MEntityNameSorter(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MEntityNameSorter is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class more_collections__MultiHashMap */
const struct class class_more_collections__MultiHashMap = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__HashMap___standard__kernel__Object__init, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to more_collections:MultiHashMap:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to more_collections:MultiHashMap:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to more_collections:MultiHashMap:string#Object#to_s */
(nitmethod_t)standard___standard__MapRead___standard__kernel__Object___61d_61d, /* pointer to more_collections:MultiHashMap:abstract_collection#MapRead#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to more_collections:MultiHashMap:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to more_collections:MultiHashMap:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to more_collections:MultiHashMap:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to more_collections:MultiHashMap:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to more_collections:MultiHashMap:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to more_collections:MultiHashMap:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to more_collections:MultiHashMap:string#Object#native_class_name */
(nitmethod_t)standard___standard__MapRead___standard__kernel__Object__hash, /* pointer to more_collections:MultiHashMap:abstract_collection#MapRead#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to more_collections:MultiHashMap:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to more_collections:MultiHashMap:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to more_collections:MultiHashMap:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__length, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#length */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__iterator, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#iterator */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__has_key, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#has_key */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#[] */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__is_empty, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#is_empty */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__keys, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#keys */
(nitmethod_t)more_collections___more_collections__MultiHashMap___standard__abstract_collection__MapRead__provide_default_value, /* pointer to more_collections:MultiHashMap:more_collections#MultiHashMap#provide_default_value */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#get_or_null */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__MapRead__values, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#values */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#[]= */
(nitmethod_t)standard___standard__HashMap___standard__abstract_collection__Map__clear, /* pointer to more_collections:MultiHashMap:hash_collection#HashMap#clear */
(nitmethod_t)standard___standard__Object___init, /* pointer to more_collections:MultiHashMap:kernel#Object#init */
(nitmethod_t)more_collections___more_collections__MultiHashMap___add_one, /* pointer to more_collections:MultiHashMap:more_collections#MultiHashMap#add_one */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___enlarge, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#enlarge */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___index_at, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#index_at */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___node_at, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#node_at */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___node_at_idx, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#node_at_idx */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___store, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#store */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___remove_node, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#remove_node */
(nitmethod_t)standard__hash_collection___standard__hash_collection__HashCollection___raz, /* pointer to more_collections:MultiHashMap:hash_collection#HashCollection#raz */
}
};
/* allocate MultiHashMap[nullable Object, nullable Object] */
val* NEW_more_collections__MultiHashMap(const struct type* type) {
val* self /* : MultiHashMap[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_more_collections__MultiHashMap;
self->attrs[COLOR_standard__hash_collection__HashCollection___capacity].l = 0l; /* _capacity on <self:MultiHashMap[nullable Object, nullable Object] exact> */
self->attrs[COLOR_standard__hash_collection__HashCollection___the_length].l = 0l; /* _the_length on <self:MultiHashMap[nullable Object, nullable Object] exact> */
return self;
}
/* runtime class more_collections__HashMap2 */
const struct class class_more_collections__HashMap2 = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to more_collections:HashMap2:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to more_collections:HashMap2:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to more_collections:HashMap2:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to more_collections:HashMap2:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to more_collections:HashMap2:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to more_collections:HashMap2:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to more_collections:HashMap2:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to more_collections:HashMap2:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to more_collections:HashMap2:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to more_collections:HashMap2:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to more_collections:HashMap2:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to more_collections:HashMap2:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to more_collections:HashMap2:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to more_collections:HashMap2:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to more_collections:HashMap2:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to more_collections:HashMap2:light_c#Object#from_c_call_context */
(nitmethod_t)more_collections___more_collections__HashMap2____91d_93d, /* pointer to more_collections:HashMap2:more_collections#HashMap2#[] */
(nitmethod_t)more_collections___more_collections__HashMap2____91d_93d_61d, /* pointer to more_collections:HashMap2:more_collections#HashMap2#[]= */
(nitmethod_t)more_collections___more_collections__HashMap2___level1, /* pointer to more_collections:HashMap2:more_collections#HashMap2#level1 */
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
(nitmethod_t)standard___standard__Object___init, /* pointer to more_collections:HashMap3:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to more_collections:HashMap3:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to more_collections:HashMap3:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to more_collections:HashMap3:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to more_collections:HashMap3:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to more_collections:HashMap3:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to more_collections:HashMap3:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to more_collections:HashMap3:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to more_collections:HashMap3:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to more_collections:HashMap3:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to more_collections:HashMap3:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to more_collections:HashMap3:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to more_collections:HashMap3:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to more_collections:HashMap3:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to more_collections:HashMap3:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to more_collections:HashMap3:light_c#Object#from_c_call_context */
(nitmethod_t)more_collections___more_collections__HashMap3____91d_93d, /* pointer to more_collections:HashMap3:more_collections#HashMap3#[] */
(nitmethod_t)more_collections___more_collections__HashMap3____91d_93d_61d, /* pointer to more_collections:HashMap3:more_collections#HashMap3#[]= */
(nitmethod_t)more_collections___more_collections__HashMap3___level1, /* pointer to more_collections:HashMap3:more_collections#HashMap3#level1 */
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
fatal_exit(1);
}
/* runtime class more_collections__UnrolledList */
/* allocate UnrolledList[nullable Object] */
val* NEW_more_collections__UnrolledList(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "UnrolledList is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class more_collections__UnrolledNode */
/* allocate UnrolledNode[nullable Object] */
val* NEW_more_collections__UnrolledNode(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "UnrolledNode is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class more_collections__UnrolledIterator */
/* allocate UnrolledIterator[nullable Object] */
val* NEW_more_collections__UnrolledIterator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "UnrolledIterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class serialization__Serializer */
/* allocate Serializer */
val* NEW_serialization__Serializer(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Serializer is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class serialization__Deserializer */
/* allocate Deserializer */
val* NEW_serialization__Deserializer(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Deserializer is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class serialization__Serializable */
/* allocate Serializable */
val* NEW_serialization__Serializable(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Serializable is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class serialization__DirectSerializable */
/* allocate DirectSerializable */
val* NEW_serialization__DirectSerializable(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "DirectSerializable is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class poset__POSet */
const struct class class_poset__POSet = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to poset:POSet:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to poset:POSet:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to poset:POSet:kernel#Object#sys */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to poset:POSet:string#Collection#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to poset:POSet:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to poset:POSet:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to poset:POSet:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to poset:POSet:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to poset:POSet:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to poset:POSet:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to poset:POSet:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to poset:POSet:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to poset:POSet:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to poset:POSet:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to poset:POSet:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to poset:POSet:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Comparator___sort, /* pointer to poset:POSet:sorter#Comparator#sort */
(nitmethod_t)standard___standard__Comparator___sub_sort, /* pointer to poset:POSet:sorter#Comparator#sub_sort */
(nitmethod_t)standard___standard__Comparator___quick_sort, /* pointer to poset:POSet:sorter#Comparator#quick_sort */
(nitmethod_t)standard___standard__Comparator___bubble_sort, /* pointer to poset:POSet:sorter#Comparator#bubble_sort */
(nitmethod_t)poset___poset__POSet___standard__sorter__Comparator__compare, /* pointer to poset:POSet:poset#POSet#compare */
(nitmethod_t)standard__string___Collection___join, /* pointer to poset:POSet:string#Collection#join */
(nitmethod_t)standard__array___Collection___to_a, /* pointer to poset:POSet:array#Collection#to_a */
(nitmethod_t)standard___standard__Collection___length, /* pointer to poset:POSet:abstract_collection#Collection#length */
(nitmethod_t)standard___standard__Collection___is_empty, /* pointer to poset:POSet:abstract_collection#Collection#is_empty */
(nitmethod_t)poset___poset__POSet___standard__abstract_collection__Collection__iterator, /* pointer to poset:POSet:poset#POSet#iterator */
(nitmethod_t)standard__string___Collection___plain_to_s, /* pointer to poset:POSet:string#Collection#plain_to_s */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to poset:POSet:abstract_collection#Collection#has_all */
(nitmethod_t)poset___poset__POSet___standard__abstract_collection__Collection__has, /* pointer to poset:POSet:poset#POSet#has */
(nitmethod_t)standard___standard__Collection___first, /* pointer to poset:POSet:abstract_collection#Collection#first */
(nitmethod_t)standard___standard__Collection___not_empty, /* pointer to poset:POSet:abstract_collection#Collection#not_empty */
(nitmethod_t)poset___poset__POSet___add_node, /* pointer to poset:POSet:poset#POSet#add_node */
(nitmethod_t)poset___poset__POSet___add_edge, /* pointer to poset:POSet:poset#POSet#add_edge */
(nitmethod_t)poset___poset__POSet___elements, /* pointer to poset:POSet:poset#POSet#elements */
(nitmethod_t)poset___poset__POSet___has_edge, /* pointer to poset:POSet:poset#POSet#has_edge */
(nitmethod_t)poset___poset__POSet____91d_93d, /* pointer to poset:POSet:poset#POSet#[] */
(nitmethod_t)nit__coloring___poset__POSet___to_conflict_graph, /* pointer to poset:POSet:coloring#POSet#to_conflict_graph */
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
(nitmethod_t)poset___poset__POSetElement___standard__kernel__Object__init, /* pointer to poset:POSetElement:poset#POSetElement#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to poset:POSetElement:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to poset:POSetElement:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to poset:POSetElement:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to poset:POSetElement:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to poset:POSetElement:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to poset:POSetElement:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to poset:POSetElement:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to poset:POSetElement:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to poset:POSetElement:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to poset:POSetElement:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to poset:POSetElement:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to poset:POSetElement:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to poset:POSetElement:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to poset:POSetElement:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to poset:POSetElement:light_c#Object#from_c_call_context */
(nitmethod_t)poset___poset__POSetElement___poset_61d, /* pointer to poset:POSetElement:poset#POSetElement#poset= */
(nitmethod_t)poset___poset__POSetElement___element_61d, /* pointer to poset:POSetElement:poset#POSetElement#element= */
(nitmethod_t)poset___poset__POSetElement___count_61d, /* pointer to poset:POSetElement:poset#POSetElement#count= */
(nitmethod_t)poset___poset__POSetElement___tos, /* pointer to poset:POSetElement:poset#POSetElement#tos */
(nitmethod_t)poset___poset__POSetElement___froms, /* pointer to poset:POSetElement:poset#POSetElement#froms */
(nitmethod_t)poset___poset__POSetElement___dfroms, /* pointer to poset:POSetElement:poset#POSetElement#dfroms */
(nitmethod_t)poset___poset__POSetElement___dtos, /* pointer to poset:POSetElement:poset#POSetElement#dtos */
(nitmethod_t)poset___poset__POSetElement____60d, /* pointer to poset:POSetElement:poset#POSetElement#< */
(nitmethod_t)poset___poset__POSetElement___greaters, /* pointer to poset:POSetElement:poset#POSetElement#greaters */
(nitmethod_t)poset___poset__POSetElement___direct_greaters, /* pointer to poset:POSetElement:poset#POSetElement#direct_greaters */
(nitmethod_t)poset___poset__POSetElement___element, /* pointer to poset:POSetElement:poset#POSetElement#element */
(nitmethod_t)poset___poset__POSetElement____60d_61d, /* pointer to poset:POSetElement:poset#POSetElement#<= */
(nitmethod_t)poset___poset__POSetElement___poset, /* pointer to poset:POSetElement:poset#POSetElement#poset */
(nitmethod_t)poset___poset__POSetElement___count, /* pointer to poset:POSetElement:poset#POSetElement#count */
(nitmethod_t)poset___poset__POSetElement___direct_smallers, /* pointer to poset:POSetElement:poset#POSetElement#direct_smallers */
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
(nitmethod_t)nit___nit__MDoc___standard__kernel__Object__init, /* pointer to mdoc:MDoc:mdoc#MDoc#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to mdoc:MDoc:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to mdoc:MDoc:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to mdoc:MDoc:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to mdoc:MDoc:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to mdoc:MDoc:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to mdoc:MDoc:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to mdoc:MDoc:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to mdoc:MDoc:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to mdoc:MDoc:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to mdoc:MDoc:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to mdoc:MDoc:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to mdoc:MDoc:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to mdoc:MDoc:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to mdoc:MDoc:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to mdoc:MDoc:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MDoc___original_mentity_61d, /* pointer to mdoc:MDoc:mdoc#MDoc#original_mentity= */
(nitmethod_t)nit___nit__MDoc___location_61d, /* pointer to mdoc:MDoc:mdoc#MDoc#location= */
(nitmethod_t)nit___nit__MDoc___content, /* pointer to mdoc:MDoc:mdoc#MDoc#content */
(nitmethod_t)standard___standard__Object___init, /* pointer to mdoc:MDoc:kernel#Object#init */
}
};
/* allocate MDoc */
val* NEW_nit__MDoc(const struct type* type) {
val* self /* : MDoc */;
val* var /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MDoc;
var = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[String]>*/
}
self->attrs[COLOR_nit__mdoc__MDoc___content].val = var; /* _content on <self:MDoc exact> */
return self;
}
/* runtime class nit__MDeprecationInfo */
const struct class class_nit__MDeprecationInfo = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to mdoc:MDeprecationInfo:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to mdoc:MDeprecationInfo:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to mdoc:MDeprecationInfo:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to mdoc:MDeprecationInfo:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to mdoc:MDeprecationInfo:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to mdoc:MDeprecationInfo:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to mdoc:MDeprecationInfo:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to mdoc:MDeprecationInfo:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to mdoc:MDeprecationInfo:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to mdoc:MDeprecationInfo:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to mdoc:MDeprecationInfo:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to mdoc:MDeprecationInfo:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to mdoc:MDeprecationInfo:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to mdoc:MDeprecationInfo:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to mdoc:MDeprecationInfo:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to mdoc:MDeprecationInfo:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MDeprecationInfo___mdoc_61d, /* pointer to mdoc:MDeprecationInfo:mdoc#MDeprecationInfo#mdoc= */
(nitmethod_t)nit___nit__MDeprecationInfo___mdoc, /* pointer to mdoc:MDeprecationInfo:mdoc#MDeprecationInfo#mdoc */
}
};
/* allocate MDeprecationInfo */
val* NEW_nit__MDeprecationInfo(const struct type* type) {
val* self /* : MDeprecationInfo */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MDeprecationInfo;
return self;
}
/* runtime class ordered_tree__OrderedTree */
const struct class class_ordered_tree__OrderedTree = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to ordered_tree:OrderedTree:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to ordered_tree:OrderedTree:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to ordered_tree:OrderedTree:kernel#Object#sys */
(nitmethod_t)standard__string___Collection___Object__to_s, /* pointer to ordered_tree:OrderedTree:string#Collection#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to ordered_tree:OrderedTree:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to ordered_tree:OrderedTree:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to ordered_tree:OrderedTree:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to ordered_tree:OrderedTree:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to ordered_tree:OrderedTree:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to ordered_tree:OrderedTree:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to ordered_tree:OrderedTree:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to ordered_tree:OrderedTree:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to ordered_tree:OrderedTree:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to ordered_tree:OrderedTree:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to ordered_tree:OrderedTree:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to ordered_tree:OrderedTree:light_c#Object#from_c_call_context */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___add, /* pointer to ordered_tree:OrderedTree:ordered_tree#OrderedTree#add */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___sort_with, /* pointer to ordered_tree:OrderedTree:ordered_tree#OrderedTree#sort_with */
(nitmethod_t)standard__string___Collection___join, /* pointer to ordered_tree:OrderedTree:string#Collection#join */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___standard__array__Collection__to_a, /* pointer to ordered_tree:OrderedTree:ordered_tree#OrderedTree#to_a */
(nitmethod_t)standard___standard__Collection___length, /* pointer to ordered_tree:OrderedTree:abstract_collection#Collection#length */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___standard__abstract_collection__Collection__is_empty, /* pointer to ordered_tree:OrderedTree:ordered_tree#OrderedTree#is_empty */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___standard__abstract_collection__Collection__iterator, /* pointer to ordered_tree:OrderedTree:ordered_tree#OrderedTree#iterator */
(nitmethod_t)standard__string___Collection___plain_to_s, /* pointer to ordered_tree:OrderedTree:string#Collection#plain_to_s */
(nitmethod_t)standard___standard__Collection___has_all, /* pointer to ordered_tree:OrderedTree:abstract_collection#Collection#has_all */
(nitmethod_t)standard___standard__Collection___has, /* pointer to ordered_tree:OrderedTree:abstract_collection#Collection#has */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___standard__abstract_collection__Collection__first, /* pointer to ordered_tree:OrderedTree:ordered_tree#OrderedTree#first */
(nitmethod_t)standard___standard__Collection___not_empty, /* pointer to ordered_tree:OrderedTree:abstract_collection#Collection#not_empty */
(nitmethod_t)standard__file___Writable___write_to_file, /* pointer to ordered_tree:OrderedTree:file#Writable#write_to_file */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___standard__stream__Writable__write_to, /* pointer to ordered_tree:OrderedTree:ordered_tree#OrderedTree#write_to */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___roots, /* pointer to ordered_tree:OrderedTree:ordered_tree#OrderedTree#roots */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___sub_to_a, /* pointer to ordered_tree:OrderedTree:ordered_tree#OrderedTree#sub_to_a */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___display, /* pointer to ordered_tree:OrderedTree:ordered_tree#OrderedTree#display */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___sub_write_to, /* pointer to ordered_tree:OrderedTree:ordered_tree#OrderedTree#sub_write_to */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___sub, /* pointer to ordered_tree:OrderedTree:ordered_tree#OrderedTree#sub */
}
};
/* allocate OrderedTree[Object] */
val* NEW_ordered_tree__OrderedTree(const struct type* type) {
val* self /* : OrderedTree[Object] */;
val* var /* : Array[Object] */;
val* var1 /* : HashMap[Object, Array[Object]] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_ordered_tree__OrderedTree;
var = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__ordered_tree__OrderedTree___35dE]);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[Object]>*/
}
self->attrs[COLOR_ordered_tree__OrderedTree___roots].val = var; /* _roots on <self:OrderedTree[Object] exact> */
var1 = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__ordered_tree__OrderedTree___35dE__standard__Array__ordered_tree__OrderedTree___35dE]);
{
standard___standard__HashMap___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[Object, Array[Object]]>*/
}
self->attrs[COLOR_ordered_tree__OrderedTree___sub].val = var1; /* _sub on <self:OrderedTree[Object] exact> */
return self;
}
/* runtime class ordered_tree__OrderedTreeIterator */
const struct class class_ordered_tree__OrderedTreeIterator = {
0, /* box_kind */
{
(nitmethod_t)ordered_tree___ordered_tree__OrderedTreeIterator___standard__kernel__Object__init, /* pointer to ordered_tree:OrderedTreeIterator:ordered_tree#OrderedTreeIterator#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to ordered_tree:OrderedTreeIterator:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to ordered_tree:OrderedTreeIterator:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to ordered_tree:OrderedTreeIterator:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to ordered_tree:OrderedTreeIterator:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to ordered_tree:OrderedTreeIterator:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to ordered_tree:OrderedTreeIterator:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to ordered_tree:OrderedTreeIterator:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to ordered_tree:OrderedTreeIterator:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to ordered_tree:OrderedTreeIterator:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to ordered_tree:OrderedTreeIterator:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to ordered_tree:OrderedTreeIterator:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to ordered_tree:OrderedTreeIterator:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to ordered_tree:OrderedTreeIterator:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to ordered_tree:OrderedTreeIterator:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to ordered_tree:OrderedTreeIterator:light_c#Object#from_c_call_context */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTreeIterator___standard__abstract_collection__Iterator__is_ok, /* pointer to ordered_tree:OrderedTreeIterator:ordered_tree#OrderedTreeIterator#is_ok */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTreeIterator___standard__abstract_collection__Iterator__item, /* pointer to ordered_tree:OrderedTreeIterator:ordered_tree#OrderedTreeIterator#item */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTreeIterator___standard__abstract_collection__Iterator__next, /* pointer to ordered_tree:OrderedTreeIterator:ordered_tree#OrderedTreeIterator#next */
(nitmethod_t)standard___standard__Iterator___finish, /* pointer to ordered_tree:OrderedTreeIterator:abstract_collection#Iterator#finish */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTreeIterator___standard__abstract_collection__Iterator__iterator, /* pointer to ordered_tree:OrderedTreeIterator:ordered_tree#OrderedTreeIterator#iterator */
(nitmethod_t)standard__array___Iterator___to_a, /* pointer to ordered_tree:OrderedTreeIterator:array#Iterator#to_a */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTreeIterator___tree_61d, /* pointer to ordered_tree:OrderedTreeIterator:ordered_tree#OrderedTreeIterator#tree= */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTreeIterator___tree, /* pointer to ordered_tree:OrderedTreeIterator:ordered_tree#OrderedTreeIterator#tree */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTreeIterator___iterators, /* pointer to ordered_tree:OrderedTreeIterator:ordered_tree#OrderedTreeIterator#iterators */
}
};
/* allocate OrderedTreeIterator[Object] */
val* NEW_ordered_tree__OrderedTreeIterator(const struct type* type) {
val* self /* : OrderedTreeIterator[Object] */;
val* var /* : Array[Iterator[Object]] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_ordered_tree__OrderedTreeIterator;
var = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__standard__Iterator__ordered_tree__OrderedTreeIterator___35dE]);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[Iterator[Object]]>*/
}
self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val = var; /* _iterators on <self:OrderedTreeIterator[Object] exact> */
return self;
}
/* runtime class nit__Message */
const struct class class_nit__Message = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__Message___standard__kernel__Object__init, /* pointer to toolcontext:Message:toolcontext#Message#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to toolcontext:Message:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to toolcontext:Message:kernel#Object#sys */
(nitmethod_t)nit___nit__Message___standard__string__Object__to_s, /* pointer to toolcontext:Message:toolcontext#Message#to_s */
(nitmethod_t)nit___nit__Message___standard__kernel__Object___61d_61d, /* pointer to toolcontext:Message:toolcontext#Message#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to toolcontext:Message:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to toolcontext:Message:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to toolcontext:Message:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to toolcontext:Message:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to toolcontext:Message:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to toolcontext:Message:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to toolcontext:Message:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to toolcontext:Message:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to toolcontext:Message:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to toolcontext:Message:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to toolcontext:Message:light_c#Object#from_c_call_context */
(nitmethod_t)standard___standard__Comparable____62d_61d, /* pointer to toolcontext:Message:kernel#Comparable#>= */
(nitmethod_t)standard___standard__Comparable____60d_61d, /* pointer to toolcontext:Message:kernel#Comparable#<= */
(nitmethod_t)standard___standard__Comparable____62d, /* pointer to toolcontext:Message:kernel#Comparable#> */
(nitmethod_t)nit___nit__Message___standard__kernel__Comparable___60d, /* pointer to toolcontext:Message:toolcontext#Message#< */
(nitmethod_t)standard___standard__Comparable____60d_61d_62d, /* pointer to toolcontext:Message:kernel#Comparable#<=> */
(nitmethod_t)nit___nit__Message___to_color_string, /* pointer to toolcontext:Message:toolcontext#Message#to_color_string */
(nitmethod_t)nit___nit__Message___location_61d, /* pointer to toolcontext:Message:toolcontext#Message#location= */
(nitmethod_t)nit___nit__Message___tag_61d, /* pointer to toolcontext:Message:toolcontext#Message#tag= */
(nitmethod_t)nit___nit__Message___text_61d, /* pointer to toolcontext:Message:toolcontext#Message#text= */
(nitmethod_t)nit___nit__Message___tag, /* pointer to toolcontext:Message:toolcontext#Message#tag */
(nitmethod_t)nit___nit__Message___location, /* pointer to toolcontext:Message:toolcontext#Message#location */
(nitmethod_t)nit___nit__Message___text, /* pointer to toolcontext:Message:toolcontext#Message#text */
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
